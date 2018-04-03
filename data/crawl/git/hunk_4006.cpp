 
     sys.stdout.flush()
 
+def parse_blob(parser):
+    global blob_marks
+
+    parser.next()
+    mark = parser.get_mark()
+    parser.next()
+    data = parser.get_data()
+    blob_marks[mark] = data
+    parser.next()
+
+class CustomTree():
+
+    def __init__(self, repo, revid, parents, files):
+        global files_cache
+
+        self.repo = repo
+        self.revid = revid
+        self.parents = parents
+        self.updates = files
+
+        def copy_tree(revid):
+            files = files_cache[revid] = {}
+            tree = repo.repository.revision_tree(revid)
+            repo.lock_read()
+            try:
+                for path, entry in tree.iter_entries_by_dir():
+                    files[path] = entry.file_id
+            finally:
+                repo.unlock()
+            return files
+
+        if len(parents) == 0:
+            self.base_id = bzrlib.revision.NULL_REVISION
+            self.base_files = {}
+        else:
+            self.base_id = parents[0]
+            self.base_files = files_cache.get(self.base_id, None)
+            if not self.base_files:
+                self.base_files = copy_tree(self.base_id)
+
+        self.files = files_cache[revid] = self.base_files.copy()
+
+    def last_revision(self):
+        return self.base_id
+
+    def iter_changes(self):
+        changes = []
+
+        def get_parent(dirname, basename):
+            parent_fid = self.base_files.get(dirname, None)
+            if parent_fid:
+                return parent_fid
+            parent_fid = self.files.get(dirname, None)
+            if parent_fid:
+                return parent_fid
+            if basename == '':
+                return None
+            d = add_entry(dirname, 'directory')
+            return d[0]
+
+        def add_entry(path, kind):
+            dirname, basename = os.path.split(path)
+            parent_fid = get_parent(dirname, basename)
+            fid = bzrlib.generate_ids.gen_file_id(path)
+            change = (fid,
+                    (None, path),
+                    True,
+                    (False, True),
+                    (None, parent_fid),
+                    (None, basename),
+                    (None, kind),
+                    (None, False))
+            self.files[path] = change[0]
+            changes.append(change)
+            return change
+
+        def update_entry(path, kind):
+            dirname, basename = os.path.split(path)
+            fid = self.base_files[path]
+            parent_fid = get_parent(dirname, basename)
+            change = (fid,
+                    (path, path),
+                    True,
+                    (True, True),
+                    (None, parent_fid),
+                    (None, basename),
+                    (None, kind),
+                    (None, False))
+            self.files[path] = change[0]
+            changes.append(change)
+            return change
+
+        def remove_entry(path, kind):
+            dirname, basename = os.path.split(path)
+            fid = self.base_files[path]
+            parent_fid = get_parent(dirname, basename)
+            change = (fid,
+                    (path, None),
+                    True,
+                    (True, False),
+                    (parent_fid, None),
+                    (None, None),
+                    (None, None),
+                    (None, None))
+            del self.files[path]
+            changes.append(change)
+            return change
+
+        for path, f in self.updates.iteritems():
+            if 'deleted' in f:
+                remove_entry(path, 'file')
+            elif path in self.base_files:
+                update_entry(path, 'file')
+            else:
+                add_entry(path, 'file')
+
+        return changes
+
+    def get_file_with_stat(self, file_id, path=None):
+        return (StringIO.StringIO(self.updates[path]['data']), None)
+
+def parse_commit(parser):
+    global marks, blob_marks, bmarks, parsed_refs
+    global mode
+
+    parents = []
+
+    ref = parser[1]
+    parser.next()
+
+    if ref != 'refs/heads/master':
+        die("bzr doesn't support multiple branches; use 'master'")
+
+    commit_mark = parser.get_mark()
+    parser.next()
+    author = parser.get_author()
+    parser.next()
+    committer = parser.get_author()
+    parser.next()
+    data = parser.get_data()
+    parser.next()
+    if parser.check('from'):
+        parents.append(parser.get_mark())
+        parser.next()
+    while parser.check('merge'):
+        parents.append(parser.get_mark())
+        parser.next()
+
+    files = {}
+
+    for line in parser:
+        if parser.check('M'):
+            t, m, mark_ref, path = line.split(' ', 3)
+            mark = int(mark_ref[1:])
+            f = { 'mode' : m, 'data' : blob_marks[mark] }
+        elif parser.check('D'):
+            t, path = line.split(' ')
+            f = { 'deleted' : True }
+        else:
+            die('Unknown file command: %s' % line)
+        files[path] = f
+
+    repo = parser.repo
+
+    committer, date, tz = committer
+    parents = [str(mark_to_rev(p)) for p in parents]
+    revid = bzrlib.generate_ids.gen_revision_id(committer, date)
+    props = {}
+    props['branch-nick'] = repo.nick
+
+    mtree = CustomTree(repo, revid, parents, files)
+    changes = mtree.iter_changes()
+
+    repo.lock_write()
+    try:
+        builder = repo.get_commit_builder(parents, None, date, tz, committer, props, revid, False)
+        try:
+            list(builder.record_iter_changes(mtree, mtree.last_revision(), changes))
+            builder.finish_inventory()
+            builder.commit(data.decode('utf-8', 'replace'))
+        except Exception, e:
+            builder.abort()
+            raise
+    finally:
+        repo.unlock()
+
+    parsed_refs[ref] = revid
+    marks.new_mark(revid, commit_mark)
+
+def parse_reset(parser):
+    global parsed_refs
+
+    ref = parser[1]
+    parser.next()
+
+    if ref != 'refs/heads/master':
+        die("bzr doesn't support multiple branches; use 'master'")
+
+    # ugh
+    if parser.check('commit'):
+        parse_commit(parser)
+        return
+    if not parser.check('from'):
+        return
+    from_mark = parser.get_mark()
+    parser.next()
+
+    parsed_refs[ref] = mark_to_rev(from_mark)
+
+def do_export(parser):
+    global parsed_refs, dirname
+
+    parser.next()
+
+    for line in parser.each_block('done'):
+        if parser.check('blob'):
+            parse_blob(parser)
+        elif parser.check('commit'):
+            parse_commit(parser)
+        elif parser.check('reset'):
+            parse_reset(parser)
+        elif parser.check('tag'):
+            pass
+        elif parser.check('feature'):
+            pass
+        else:
+            die('unhandled export command: %s' % line)
+
+    repo = parser.repo
+
+    for ref, revid in parsed_refs.iteritems():
+        if ref == 'refs/heads/master':
+            repo.generate_revision_history(revid, marks.get_tip('master'))
+        print "ok %s" % ref
+    print
+
 def do_capabilities(parser):
+    global dirname
+
     print "import"
+    print "export"
     print "refspec refs/heads/*:%s/heads/*" % prefix
+
+    path = os.path.join(dirname, 'marks-git')
+
+    if os.path.exists(path):
+        print "*import-marks %s" % path
+    print "*export-marks %s" % path
+
     print
 
 def do_list(parser):
