 	am_run(state, 0);
 }
 
+/**
+ * Performs a checkout fast-forward from `head` to `remote`. If `reset` is
+ * true, any unmerged entries will be discarded. Returns 0 on success, -1 on
+ * failure.
+ */
+static int fast_forward_to(struct tree *head, struct tree *remote, int reset)
+{
+	struct lock_file *lock_file;
+	struct unpack_trees_options opts;
+	struct tree_desc t[2];
+
+	if (parse_tree(head) || parse_tree(remote))
+		return -1;
+
+	lock_file = xcalloc(1, sizeof(struct lock_file));
+	hold_locked_index(lock_file, 1);
+
+	refresh_cache(REFRESH_QUIET);
+
+	memset(&opts, 0, sizeof(opts));
+	opts.head_idx = 1;
+	opts.src_index = &the_index;
+	opts.dst_index = &the_index;
+	opts.update = 1;
+	opts.merge = 1;
+	opts.reset = reset;
+	opts.fn = twoway_merge;
+	init_tree_desc(&t[0], head->buffer, head->size);
+	init_tree_desc(&t[1], remote->buffer, remote->size);
+
+	if (unpack_trees(2, t, &opts)) {
+		rollback_lock_file(lock_file);
+		return -1;
+	}
+
+	if (write_locked_index(&the_index, lock_file, COMMIT_LOCK))
+		die(_("unable to write new index file"));
+
+	return 0;
+}
+
+/**
+ * Clean the index without touching entries that are not modified between
+ * `head` and `remote`.
+ */
+static int clean_index(const unsigned char *head, const unsigned char *remote)
+{
+	struct lock_file *lock_file;
+	struct tree *head_tree, *remote_tree, *index_tree;
+	unsigned char index[GIT_SHA1_RAWSZ];
+	struct pathspec pathspec;
+
+	head_tree = parse_tree_indirect(head);
+	if (!head_tree)
+		return error(_("Could not parse object '%s'."), sha1_to_hex(head));
+
+	remote_tree = parse_tree_indirect(remote);
+	if (!remote_tree)
+		return error(_("Could not parse object '%s'."), sha1_to_hex(remote));
+
+	read_cache_unmerged();
+
+	if (fast_forward_to(head_tree, head_tree, 1))
+		return -1;
+
+	if (write_cache_as_tree(index, 0, NULL))
+		return -1;
+
+	index_tree = parse_tree_indirect(index);
+	if (!index_tree)
+		return error(_("Could not parse object '%s'."), sha1_to_hex(index));
+
+	if (fast_forward_to(index_tree, remote_tree, 0))
+		return -1;
+
+	memset(&pathspec, 0, sizeof(pathspec));
+
+	lock_file = xcalloc(1, sizeof(struct lock_file));
+	hold_locked_index(lock_file, 1);
+
+	if (read_tree(remote_tree, 0, &pathspec)) {
+		rollback_lock_file(lock_file);
+		return -1;
+	}
+
+	if (write_locked_index(&the_index, lock_file, COMMIT_LOCK))
+		die(_("unable to write new index file"));
+
+	remove_branch_state();
+
+	return 0;
+}
+
+/**
+ * Resume the current am session by skipping the current patch.
+ */
+static void am_skip(struct am_state *state)
+{
+	unsigned char head[GIT_SHA1_RAWSZ];
+
+	if (get_sha1("HEAD", head))
+		hashcpy(head, EMPTY_TREE_SHA1_BIN);
+
+	if (clean_index(head, head))
+		die(_("failed to clean index"));
+
+	am_next(state);
+	am_run(state, 0);
+}
+
 /**
  * parse_options() callback that validates and sets opt->value to the
  * PATCH_FORMAT_* enum value corresponding to `arg`.
