+#!/usr/bin/env python
+#
+# git-p4.py -- A tool for bidirectional operation between a Perforce depot and git.
+#
+# Author: Simon Hausmann <simon@lst.de>
+# Copyright: 2007 Simon Hausmann <simon@lst.de>
+#            2007 Trolltech ASA
+# License: MIT <http://www.opensource.org/licenses/mit-license.php>
+#
+
+import optparse, sys, os, marshal, popen2, subprocess, shelve
+import tempfile, getopt, sha, os.path, time, platform
+import re
+
+from sets import Set;
+
+verbose = False
+
+def die(msg):
+    if verbose:
+        raise Exception(msg)
+    else:
+        sys.stderr.write(msg + "\n")
+        sys.exit(1)
+
+def write_pipe(c, str):
+    if verbose:
+        sys.stderr.write('Writing pipe: %s\n' % c)
+
+    pipe = os.popen(c, 'w')
+    val = pipe.write(str)
+    if pipe.close():
+        die('Command failed: %s' % c)
+
+    return val
+
+def read_pipe(c, ignore_error=False):
+    if verbose:
+        sys.stderr.write('Reading pipe: %s\n' % c)
+
+    pipe = os.popen(c, 'rb')
+    val = pipe.read()
+    if pipe.close() and not ignore_error:
+        die('Command failed: %s' % c)
+
+    return val
+
+
+def read_pipe_lines(c):
+    if verbose:
+        sys.stderr.write('Reading pipe: %s\n' % c)
+    ## todo: check return status
+    pipe = os.popen(c, 'rb')
+    val = pipe.readlines()
+    if pipe.close():
+        die('Command failed: %s' % c)
+
+    return val
+
+def system(cmd):
+    if verbose:
+        sys.stderr.write("executing %s\n" % cmd)
+    if os.system(cmd) != 0:
+        die("command failed: %s" % cmd)
+
+def p4CmdList(cmd):
+    cmd = "p4 -G %s" % cmd
+    if verbose:
+        sys.stderr.write("Opening pipe: %s\n" % cmd)
+    pipe = os.popen(cmd, "rb")
+
+    result = []
+    try:
+        while True:
+            entry = marshal.load(pipe)
+            result.append(entry)
+    except EOFError:
+        pass
+    exitCode = pipe.close()
+    if exitCode != None:
+        entry = {}
+        entry["p4ExitCode"] = exitCode
+        result.append(entry)
+
+    return result
+
+def p4Cmd(cmd):
+    list = p4CmdList(cmd)
+    result = {}
+    for entry in list:
+        result.update(entry)
+    return result;
+
+def p4Where(depotPath):
+    if not depotPath.endswith("/"):
+        depotPath += "/"
+    output = p4Cmd("where %s..." % depotPath)
+    if output["code"] == "error":
+        return ""
+    clientPath = ""
+    if "path" in output:
+        clientPath = output.get("path")
+    elif "data" in output:
+        data = output.get("data")
+        lastSpace = data.rfind(" ")
+        clientPath = data[lastSpace + 1:]
+
+    if clientPath.endswith("..."):
+        clientPath = clientPath[:-3]
+    return clientPath
+
+def currentGitBranch():
+    return read_pipe("git name-rev HEAD").split(" ")[1].strip()
+
+def isValidGitDir(path):
+    if (os.path.exists(path + "/HEAD")
+        and os.path.exists(path + "/refs") and os.path.exists(path + "/objects")):
+        return True;
+    return False
+
+def parseRevision(ref):
+    return read_pipe("git rev-parse %s" % ref).strip()
+
+def extractLogMessageFromGitCommit(commit):
+    logMessage = ""
+
+    ## fixme: title is first line of commit, not 1st paragraph.
+    foundTitle = False
+    for log in read_pipe_lines("git cat-file commit %s" % commit):
+       if not foundTitle:
+           if len(log) == 1:
+               foundTitle = True
+           continue
+
+       logMessage += log
+    return logMessage
+
+def extractSettingsGitLog(log):
+    values = {}
+    for line in log.split("\n"):
+        line = line.strip()
+        m = re.search (r"^ *\[git-p4: (.*)\]$", line)
+        if not m:
+            continue
+
+        assignments = m.group(1).split (':')
+        for a in assignments:
+            vals = a.split ('=')
+            key = vals[0].strip()
+            val = ('='.join (vals[1:])).strip()
+            if val.endswith ('\"') and val.startswith('"'):
+                val = val[1:-1]
+
+            values[key] = val
+
+    paths = values.get("depot-paths")
+    if not paths:
+        paths = values.get("depot-path")
+    if paths:
+        values['depot-paths'] = paths.split(',')
+    return values
+
+def gitBranchExists(branch):
+    proc = subprocess.Popen(["git", "rev-parse", branch],
+                            stderr=subprocess.PIPE, stdout=subprocess.PIPE);
+    return proc.wait() == 0;
+
+def gitConfig(key):
+    return read_pipe("git config %s" % key, ignore_error=True).strip()
+
+def findUpstreamBranchPoint(head = "HEAD"):
+    settings = None
+    branchPoint = ""
+    parent = 0
+    while parent < 65535:
+        commit = head + "~%s" % parent
+        log = extractLogMessageFromGitCommit(commit)
+        settings = extractSettingsGitLog(log)
+        if not settings.has_key("depot-paths"):
+            parent = parent + 1
+            continue
+
+        names = read_pipe_lines("git name-rev \"--refs=refs/remotes/p4/*\" \"%s\"" % commit)
+        if len(names) <= 0:
+            continue
+
+        # strip away the beginning of 'HEAD~42 refs/remotes/p4/foo'
+        branchPoint = names[0].strip()[len(commit) + 1:]
+        break
+
+    return [branchPoint, settings]
+
+class Command:
+    def __init__(self):
+        self.usage = "usage: %prog [options]"
+        self.needsGit = True
+
+class P4Debug(Command):
+    def __init__(self):
+        Command.__init__(self)
+        self.options = [
+            optparse.make_option("--verbose", dest="verbose", action="store_true",
+                                 default=False),
+            ]
+        self.description = "A tool to debug the output of p4 -G."
+        self.needsGit = False
+        self.verbose = False
+
+    def run(self, args):
+        j = 0
+        for output in p4CmdList(" ".join(args)):
+            print 'Element: %d' % j
+            j += 1
+            print output
+        return True
+
+class P4RollBack(Command):
+    def __init__(self):
+        Command.__init__(self)
+        self.options = [
+            optparse.make_option("--verbose", dest="verbose", action="store_true"),
+            optparse.make_option("--local", dest="rollbackLocalBranches", action="store_true")
+        ]
+        self.description = "A tool to debug the multi-branch import. Don't use :)"
+        self.verbose = False
+        self.rollbackLocalBranches = False
+
+    def run(self, args):
+        if len(args) != 1:
+            return False
+        maxChange = int(args[0])
+
+        if "p4ExitCode" in p4Cmd("changes -m 1"):
+            die("Problems executing p4");
+
+        if self.rollbackLocalBranches:
+            refPrefix = "refs/heads/"
+            lines = read_pipe_lines("git rev-parse --symbolic --branches")
+        else:
+            refPrefix = "refs/remotes/"
+            lines = read_pipe_lines("git rev-parse --symbolic --remotes")
+
+        for line in lines:
+            if self.rollbackLocalBranches or (line.startswith("p4/") and line != "p4/HEAD\n"):
+                line = line.strip()
+                ref = refPrefix + line
+                log = extractLogMessageFromGitCommit(ref)
+                settings = extractSettingsGitLog(log)
+
+                depotPaths = settings['depot-paths']
+                change = settings['change']
+
+                changed = False
+
+                if len(p4Cmd("changes -m 1 "  + ' '.join (['%s...@%s' % (p, maxChange)
+                                                           for p in depotPaths]))) == 0:
+                    print "Branch %s did not exist at change %s, deleting." % (ref, maxChange)
+                    system("git update-ref -d %s `git rev-parse %s`" % (ref, ref))
+                    continue
+
+                while change and int(change) > maxChange:
+                    changed = True
+                    if self.verbose:
+                        print "%s is at %s ; rewinding towards %s" % (ref, change, maxChange)
+                    system("git update-ref %s \"%s^\"" % (ref, ref))
+                    log = extractLogMessageFromGitCommit(ref)
+                    settings =  extractSettingsGitLog(log)
+
+
+                    depotPaths = settings['depot-paths']
+                    change = settings['change']
+
+                if changed:
+                    print "%s rewound to %s" % (ref, change)
+
+        return True
+
+class P4Submit(Command):
+    def __init__(self):
+        Command.__init__(self)
+        self.options = [
+                optparse.make_option("--continue", action="store_false", dest="firstTime"),
+                optparse.make_option("--verbose", dest="verbose", action="store_true"),
+                optparse.make_option("--origin", dest="origin"),
+                optparse.make_option("--reset", action="store_true", dest="reset"),
+                optparse.make_option("--log-substitutions", dest="substFile"),
+                optparse.make_option("--dry-run", action="store_true"),
+                optparse.make_option("--direct", dest="directSubmit", action="store_true"),
+                optparse.make_option("--trust-me-like-a-fool", dest="trustMeLikeAFool", action="store_true"),
+        ]
+        self.description = "Submit changes from git to the perforce depot."
+        self.usage += " [name of git branch to submit into perforce depot]"
+        self.firstTime = True
+        self.reset = False
+        self.interactive = True
+        self.dryRun = False
+        self.substFile = ""
+        self.firstTime = True
+        self.origin = ""
+        self.directSubmit = False
+        self.trustMeLikeAFool = False
+        self.verbose = False
+        self.isWindows = (platform.system() == "Windows")
+
+        self.logSubstitutions = {}
+        self.logSubstitutions["<enter description here>"] = "%log%"
+        self.logSubstitutions["\tDetails:"] = "\tDetails:  %log%"
+
+    def check(self):
+        if len(p4CmdList("opened ...")) > 0:
+            die("You have files opened with perforce! Close them before starting the sync.")
+
+    def start(self):
+        if len(self.config) > 0 and not self.reset:
+            die("Cannot start sync. Previous sync config found at %s\n"
+                "If you want to start submitting again from scratch "
+                "maybe you want to call git-p4 submit --reset" % self.configFile)
+
+        commits = []
+        if self.directSubmit:
+            commits.append("0")
+        else:
+            for line in read_pipe_lines("git rev-list --no-merges %s..%s" % (self.origin, self.master)):
+                commits.append(line.strip())
+            commits.reverse()
+
+        self.config["commits"] = commits
+
+    def prepareLogMessage(self, template, message):
+        result = ""
+
+        for line in template.split("\n"):
+            if line.startswith("#"):
+                result += line + "\n"
+                continue
+
+            substituted = False
+            for key in self.logSubstitutions.keys():
+                if line.find(key) != -1:
+                    value = self.logSubstitutions[key]
+                    value = value.replace("%log%", message)
+                    if value != "@remove@":
+                        result += line.replace(key, value) + "\n"
+                    substituted = True
+                    break
+
+            if not substituted:
+                result += line + "\n"
+
+        return result
+
+    def applyCommit(self, id):
+        if self.directSubmit:
+            print "Applying local change in working directory/index"
+            diff = self.diffStatus
+        else:
+            print "Applying %s" % (read_pipe("git log --max-count=1 --pretty=oneline %s" % id))
+            diff = read_pipe_lines("git diff-tree -r --name-status \"%s^\" \"%s\"" % (id, id))
+        filesToAdd = set()
+        filesToDelete = set()
+        editedFiles = set()
+        for line in diff:
+            modifier = line[0]
+            path = line[1:].strip()
+            if modifier == "M":
+                system("p4 edit \"%s\"" % path)
+                editedFiles.add(path)
+            elif modifier == "A":
+                filesToAdd.add(path)
+                if path in filesToDelete:
+                    filesToDelete.remove(path)
+            elif modifier == "D":
+                filesToDelete.add(path)
+                if path in filesToAdd:
+                    filesToAdd.remove(path)
+            else:
+                die("unknown modifier %s for %s" % (modifier, path))
+
+        if self.directSubmit:
+            diffcmd = "cat \"%s\"" % self.diffFile
+        else:
+            diffcmd = "git format-patch -k --stdout \"%s^\"..\"%s\"" % (id, id)
+        patchcmd = diffcmd + " | git apply "
+        tryPatchCmd = patchcmd + "--check -"
+        applyPatchCmd = patchcmd + "--check --apply -"
+
+        if os.system(tryPatchCmd) != 0:
+            print "Unfortunately applying the change failed!"
+            print "What do you want to do?"
+            response = "x"
+            while response != "s" and response != "a" and response != "w":
+                response = raw_input("[s]kip this patch / [a]pply the patch forcibly "
+                                     "and with .rej files / [w]rite the patch to a file (patch.txt) ")
+            if response == "s":
+                print "Skipping! Good luck with the next patches..."
+                return
+            elif response == "a":
+                os.system(applyPatchCmd)
+                if len(filesToAdd) > 0:
+                    print "You may also want to call p4 add on the following files:"
+                    print " ".join(filesToAdd)
+                if len(filesToDelete):
+                    print "The following files should be scheduled for deletion with p4 delete:"
+                    print " ".join(filesToDelete)
+                die("Please resolve and submit the conflict manually and "
+                    + "continue afterwards with git-p4 submit --continue")
+            elif response == "w":
+                system(diffcmd + " > patch.txt")
+                print "Patch saved to patch.txt in %s !" % self.clientPath
+                die("Please resolve and submit the conflict manually and "
+                    "continue afterwards with git-p4 submit --continue")
+
+        system(applyPatchCmd)
+
+        for f in filesToAdd:
+            system("p4 add \"%s\"" % f)
+        for f in filesToDelete:
+            system("p4 revert \"%s\"" % f)
+            system("p4 delete \"%s\"" % f)
+
+        logMessage = ""
+        if not self.directSubmit:
+            logMessage = extractLogMessageFromGitCommit(id)
+            logMessage = logMessage.replace("\n", "\n\t")
+            if self.isWindows:
+                logMessage = logMessage.replace("\n", "\r\n")
+            logMessage = logMessage.strip()
+
+        template = read_pipe("p4 change -o")
+
+        if self.interactive:
+            submitTemplate = self.prepareLogMessage(template, logMessage)
+            diff = read_pipe("p4 diff -du ...")
+
+            for newFile in filesToAdd:
+                diff += "==== new file ====\n"
+                diff += "--- /dev/null\n"
+                diff += "+++ %s\n" % newFile
+                f = open(newFile, "r")
+                for line in f.readlines():
+                    diff += "+" + line
+                f.close()
+
+            separatorLine = "######## everything below this line is just the diff #######"
+            if platform.system() == "Windows":
+                separatorLine += "\r"
+            separatorLine += "\n"
+
+            response = "e"
+            if self.trustMeLikeAFool:
+                response = "y"
+
+            firstIteration = True
+            while response == "e":
+                if not firstIteration:
+                    response = raw_input("Do you want to submit this change? [y]es/[e]dit/[n]o/[s]kip ")
+                firstIteration = False
+                if response == "e":
+                    [handle, fileName] = tempfile.mkstemp()
+                    tmpFile = os.fdopen(handle, "w+")
+                    tmpFile.write(submitTemplate + separatorLine + diff)
+                    tmpFile.close()
+                    defaultEditor = "vi"
+                    if platform.system() == "Windows":
+                        defaultEditor = "notepad"
+                    editor = os.environ.get("EDITOR", defaultEditor);
+                    system(editor + " " + fileName)
+                    tmpFile = open(fileName, "rb")
+                    message = tmpFile.read()
+                    tmpFile.close()
+                    os.remove(fileName)
+                    submitTemplate = message[:message.index(separatorLine)]
+                    if self.isWindows:
+                        submitTemplate = submitTemplate.replace("\r\n", "\n")
+
+            if response == "y" or response == "yes":
+               if self.dryRun:
+                   print submitTemplate
+                   raw_input("Press return to continue...")
+               else:
+                   if self.directSubmit:
+                       print "Submitting to git first"
+                       os.chdir(self.oldWorkingDirectory)
+                       write_pipe("git commit -a -F -", submitTemplate)
+                       os.chdir(self.clientPath)
+
+                   write_pipe("p4 submit -i", submitTemplate)
+            elif response == "s":
+                for f in editedFiles:
+                    system("p4 revert \"%s\"" % f);
+                for f in filesToAdd:
+                    system("p4 revert \"%s\"" % f);
+                    system("rm %s" %f)
+                for f in filesToDelete:
+                    system("p4 delete \"%s\"" % f);
+                return
+            else:
+                print "Not submitting!"
+                self.interactive = False
+        else:
+            fileName = "submit.txt"
+            file = open(fileName, "w+")
+            file.write(self.prepareLogMessage(template, logMessage))
+            file.close()
+            print ("Perforce submit template written as %s. "
+                   + "Please review/edit and then use p4 submit -i < %s to submit directly!"
+                   % (fileName, fileName))
+
+    def run(self, args):
+        if len(args) == 0:
+            self.master = currentGitBranch()
+            if len(self.master) == 0 or not gitBranchExists("refs/heads/%s" % self.master):
+                die("Detecting current git branch failed!")
+        elif len(args) == 1:
+            self.master = args[0]
+        else:
+            return False
+
+        [upstream, settings] = findUpstreamBranchPoint()
+        depotPath = settings['depot-paths'][0]
+        if len(self.origin) == 0:
+            self.origin = upstream
+
+        if self.verbose:
+            print "Origin branch is " + self.origin
+
+        if len(depotPath) == 0:
+            print "Internal error: cannot locate perforce depot path from existing branches"
+            sys.exit(128)
+
+        self.clientPath = p4Where(depotPath)
+
+        if len(self.clientPath) == 0:
+            print "Error: Cannot locate perforce checkout of %s in client view" % depotPath
+            sys.exit(128)
+
+        print "Perforce checkout for depot path %s located at %s" % (depotPath, self.clientPath)
+        self.oldWorkingDirectory = os.getcwd()
+
+        if self.directSubmit:
+            self.diffStatus = read_pipe_lines("git diff -r --name-status HEAD")
+            if len(self.diffStatus) == 0:
+                print "No changes in working directory to submit."
+                return True
+            patch = read_pipe("git diff -p --binary --diff-filter=ACMRTUXB HEAD")
+            self.diffFile = self.gitdir + "/p4-git-diff"
+            f = open(self.diffFile, "wb")
+            f.write(patch)
+            f.close();
+
+        os.chdir(self.clientPath)
+        response = raw_input("Do you want to sync %s with p4 sync? [y]es/[n]o " % self.clientPath)
+        if response == "y" or response == "yes":
+            system("p4 sync ...")
+
+        if self.reset:
+            self.firstTime = True
+
+        if len(self.substFile) > 0:
+            for line in open(self.substFile, "r").readlines():
+                tokens = line.strip().split("=")
+                self.logSubstitutions[tokens[0]] = tokens[1]
+
+        self.check()
+        self.configFile = self.gitdir + "/p4-git-sync.cfg"
+        self.config = shelve.open(self.configFile, writeback=True)
+
+        if self.firstTime:
+            self.start()
+
+        commits = self.config.get("commits", [])
+
+        while len(commits) > 0:
+            self.firstTime = False
+            commit = commits[0]
+            commits = commits[1:]
+            self.config["commits"] = commits
+            self.applyCommit(commit)
+            if not self.interactive:
+                break
+
+        self.config.close()
+
+        if self.directSubmit:
+            os.remove(self.diffFile)
+
+        if len(commits) == 0:
+            if self.firstTime:
+                print "No changes found to apply between %s and current HEAD" % self.origin
+            else:
+                print "All changes applied!"
+                os.chdir(self.oldWorkingDirectory)
+                response = raw_input("Do you want to sync from Perforce now using git-p4 rebase? [y]es/[n]o ")
+                if response == "y" or response == "yes":
+                    rebase = P4Rebase()
+                    rebase.run([])
+            os.remove(self.configFile)
+
+        return True
+
+class P4Sync(Command):
+    def __init__(self):
+        Command.__init__(self)
+        self.options = [
+                optparse.make_option("--branch", dest="branch"),
+                optparse.make_option("--detect-branches", dest="detectBranches", action="store_true"),
+                optparse.make_option("--changesfile", dest="changesFile"),
+                optparse.make_option("--silent", dest="silent", action="store_true"),
+                optparse.make_option("--detect-labels", dest="detectLabels", action="store_true"),
+                optparse.make_option("--verbose", dest="verbose", action="store_true"),
+                optparse.make_option("--import-local", dest="importIntoRemotes", action="store_false",
+                                     help="Import into refs/heads/ , not refs/remotes"),
+                optparse.make_option("--max-changes", dest="maxChanges"),
+                optparse.make_option("--keep-path", dest="keepRepoPath", action='store_true',
+                                     help="Keep entire BRANCH/DIR/SUBDIR prefix during import")
+        ]
+        self.description = """Imports from Perforce into a git repository.\n
+    example:
+    //depot/my/project/ -- to import the current head
+    //depot/my/project/@all -- to import everything
+    //depot/my/project/@1,6 -- to import only from revision 1 to 6
+
+    (a ... is not needed in the path p4 specification, it's added implicitly)"""
+
+        self.usage += " //depot/path[@revRange]"
+        self.silent = False
+        self.createdBranches = Set()
+        self.committedChanges = Set()
+        self.branch = ""
+        self.detectBranches = False
+        self.detectLabels = False
+        self.changesFile = ""
+        self.syncWithOrigin = True
+        self.verbose = False
+        self.importIntoRemotes = True
+        self.maxChanges = ""
+        self.isWindows = (platform.system() == "Windows")
+        self.keepRepoPath = False
+        self.depotPaths = None
+        self.p4BranchesInGit = []
+
+        if gitConfig("git-p4.syncFromOrigin") == "false":
+            self.syncWithOrigin = False
+
+    def extractFilesFromCommit(self, commit):
+        files = []
+        fnum = 0
+        while commit.has_key("depotFile%s" % fnum):
+            path =  commit["depotFile%s" % fnum]
+
+            found = [p for p in self.depotPaths
+                     if path.startswith (p)]
+            if not found:
+                fnum = fnum + 1
+                continue
+
+            file = {}
+            file["path"] = path
+            file["rev"] = commit["rev%s" % fnum]
+            file["action"] = commit["action%s" % fnum]
+            file["type"] = commit["type%s" % fnum]
+            files.append(file)
+            fnum = fnum + 1
+        return files
+
+    def stripRepoPath(self, path, prefixes):
+        if self.keepRepoPath:
+            prefixes = [re.sub("^(//[^/]+/).*", r'\1', prefixes[0])]
+
+        for p in prefixes:
+            if path.startswith(p):
+                path = path[len(p):]
+
+        return path
+
+    def splitFilesIntoBranches(self, commit):
+        branches = {}
+        fnum = 0
+        while commit.has_key("depotFile%s" % fnum):
+            path =  commit["depotFile%s" % fnum]
+            found = [p for p in self.depotPaths
+                     if path.startswith (p)]
+            if not found:
+                fnum = fnum + 1
+                continue
+
+            file = {}
+            file["path"] = path
+            file["rev"] = commit["rev%s" % fnum]
+            file["action"] = commit["action%s" % fnum]
+            file["type"] = commit["type%s" % fnum]
+            fnum = fnum + 1
+
+            relPath = self.stripRepoPath(path, self.depotPaths)
+
+            for branch in self.knownBranches.keys():
+
+                # add a trailing slash so that a commit into qt/4.2foo doesn't end up in qt/4.2
+                if relPath.startswith(branch + "/"):
+                    if branch not in branches:
+                        branches[branch] = []
+                    branches[branch].append(file)
+                    break
+
+        return branches
+
+    ## Should move this out, doesn't use SELF.
+    def readP4Files(self, files):
+        files = [f for f in files
+                 if f['action'] != 'delete']
+
+        if not files:
+            return
+
+        # We cannot put all the files on the command line
+        # OS have limitations on the max lenght of arguments
+        # POSIX says it's 4096 bytes, default for Linux seems to be 130 K.
+        # and all OS from the table below seems to be higher than POSIX.
+        # See http://www.in-ulm.de/~mascheck/various/argmax/
+        argmax = min(4000, os.sysconf('SC_ARG_MAX'))
+        chunk = ''
+        filedata = []
+        for i in xrange(len(files)):
+            f = files[i]
+            chunk += '"%s#%s" ' % (f['path'], f['rev'])
+            if len(chunk) > argmax or i == len(files)-1:
+                data = p4CmdList('print %s' % chunk)
+                if "p4ExitCode" in data[0]:
+                    die("Problems executing p4. Error: [%d]." % (data[0]['p4ExitCode']));
+                filedata.extend(data)
+                chunk = ''
+
+        j = 0;
+        contents = {}
+        while j < len(filedata):
+            stat = filedata[j]
+            j += 1
+            text = ''
+            while j < len(filedata) and filedata[j]['code'] in ('text',
+                                                                'binary'):
+                text += filedata[j]['data']
+                j += 1
+
+
+            if not stat.has_key('depotFile'):
+                sys.stderr.write("p4 print fails with: %s\n" % repr(stat))
+                continue
+
+            contents[stat['depotFile']] = text
+
+        for f in files:
+            assert not f.has_key('data')
+            f['data'] = contents[f['path']]
+
+    def commit(self, details, files, branch, branchPrefixes, parent = ""):
+        epoch = details["time"]
+        author = details["user"]
+
+        if self.verbose:
+            print "commit into %s" % branch
+
+        # start with reading files; if that fails, we should not
+        # create a commit.
+        new_files = []
+        for f in files:
+            if [p for p in branchPrefixes if f['path'].startswith(p)]:
+                new_files.append (f)
+            else:
+                sys.stderr.write("Ignoring file outside of prefix: %s\n" % path)
+        files = new_files
+        self.readP4Files(files)
+
+
+
+
+        self.gitStream.write("commit %s\n" % branch)
+#        gitStream.write("mark :%s\n" % details["change"])
+        self.committedChanges.add(int(details["change"]))
+        committer = ""
+        if author not in self.users:
+            self.getUserMapFromPerforceServer()
+        if author in self.users:
+            committer = "%s %s %s" % (self.users[author], epoch, self.tz)
+        else:
+            committer = "%s <a@b> %s %s" % (author, epoch, self.tz)
+
+        self.gitStream.write("committer %s\n" % committer)
+
+        self.gitStream.write("data <<EOT\n")
+        self.gitStream.write(details["desc"])
+        self.gitStream.write("\n[git-p4: depot-paths = \"%s\": change = %s"
+                             % (','.join (branchPrefixes), details["change"]))
+        if len(details['options']) > 0:
+            self.gitStream.write(": options = %s" % details['options'])
+        self.gitStream.write("]\nEOT\n\n")
+
+        if len(parent) > 0:
+            if self.verbose:
+                print "parent %s" % parent
+            self.gitStream.write("from %s\n" % parent)
+
+        for file in files:
+            if file["type"] == "apple":
+                print "\nfile %s is a strange apple file that forks. Ignoring!" % file['path']
+                continue
+
+            relPath = self.stripRepoPath(file['path'], branchPrefixes)
+            if file["action"] == "delete":
+                self.gitStream.write("D %s\n" % relPath)
+            else:
+                mode = 644
+                if file["type"].startswith("x"):
+                    mode = 755
+
+                data = file['data']
+
+                if self.isWindows and file["type"].endswith("text"):
+                    data = data.replace("\r\n", "\n")
+
+                self.gitStream.write("M %d inline %s\n" % (mode, relPath))
+                self.gitStream.write("data %s\n" % len(data))
+                self.gitStream.write(data)
+                self.gitStream.write("\n")
+
+        self.gitStream.write("\n")
+
+        change = int(details["change"])
+
+        if self.labels.has_key(change):
+            label = self.labels[change]
+            labelDetails = label[0]
+            labelRevisions = label[1]
+            if self.verbose:
+                print "Change %s is labelled %s" % (change, labelDetails)
+
+            files = p4CmdList("files " + ' '.join (["%s...@%s" % (p, change)
+                                                    for p in branchPrefixes]))
+
+            if len(files) == len(labelRevisions):
+
+                cleanedFiles = {}
+                for info in files:
+                    if info["action"] == "delete":
+                        continue
+                    cleanedFiles[info["depotFile"]] = info["rev"]
+
+                if cleanedFiles == labelRevisions:
+                    self.gitStream.write("tag tag_%s\n" % labelDetails["label"])
+                    self.gitStream.write("from %s\n" % branch)
+
+                    owner = labelDetails["Owner"]
+                    tagger = ""
+                    if author in self.users:
+                        tagger = "%s %s %s" % (self.users[owner], epoch, self.tz)
+                    else:
+                        tagger = "%s <a@b> %s %s" % (owner, epoch, self.tz)
+                    self.gitStream.write("tagger %s\n" % tagger)
+                    self.gitStream.write("data <<EOT\n")
+                    self.gitStream.write(labelDetails["Description"])
+                    self.gitStream.write("EOT\n\n")
+
+                else:
+                    if not self.silent:
+                        print ("Tag %s does not match with change %s: files do not match."
+                               % (labelDetails["label"], change))
+
+            else:
+                if not self.silent:
+                    print ("Tag %s does not match with change %s: file count is different."
+                           % (labelDetails["label"], change))
+
+    def getUserCacheFilename(self):
+        return os.environ["HOME"] + "/.gitp4-usercache.txt"
+
+    def getUserMapFromPerforceServer(self):
+        if self.userMapFromPerforceServer:
+            return
+        self.users = {}
+
+        for output in p4CmdList("users"):
+            if not output.has_key("User"):
+                continue
+            self.users[output["User"]] = output["FullName"] + " <" + output["Email"] + ">"
+
+
+        s = ''
+        for (key, val) in self.users.items():
+            s += "%s\t%s\n" % (key, val)
+
+        open(self.getUserCacheFilename(), "wb").write(s)
+        self.userMapFromPerforceServer = True
+
+    def loadUserMapFromCache(self):
+        self.users = {}
+        self.userMapFromPerforceServer = False
+        try:
+            cache = open(self.getUserCacheFilename(), "rb")
+            lines = cache.readlines()
+            cache.close()
+            for line in lines:
+                entry = line.strip().split("\t")
+                self.users[entry[0]] = entry[1]
+        except IOError:
+            self.getUserMapFromPerforceServer()
+
+    def getLabels(self):
+        self.labels = {}
+
+        l = p4CmdList("labels %s..." % ' '.join (self.depotPaths))
+        if len(l) > 0 and not self.silent:
+            print "Finding files belonging to labels in %s" % `self.depotPath`
+
+        for output in l:
+            label = output["label"]
+            revisions = {}
+            newestChange = 0
+            if self.verbose:
+                print "Querying files for label %s" % label
+            for file in p4CmdList("files "
+                                  +  ' '.join (["%s...@%s" % (p, label)
+                                                for p in self.depotPaths])):
+                revisions[file["depotFile"]] = file["rev"]
+                change = int(file["change"])
+                if change > newestChange:
+                    newestChange = change
+
+            self.labels[newestChange] = [output, revisions]
+
+        if self.verbose:
+            print "Label changes: %s" % self.labels.keys()
+
+    def guessProjectName(self):
+        for p in self.depotPaths:
+            if p.endswith("/"):
+                p = p[:-1]
+            p = p[p.strip().rfind("/") + 1:]
+            if not p.endswith("/"):
+               p += "/"
+            return p
+
+    def getBranchMapping(self):
+        lostAndFoundBranches = set()
+
+        for info in p4CmdList("branches"):
+            details = p4Cmd("branch -o %s" % info["branch"])
+            viewIdx = 0
+            while details.has_key("View%s" % viewIdx):
+                paths = details["View%s" % viewIdx].split(" ")
+                viewIdx = viewIdx + 1
+                # require standard //depot/foo/... //depot/bar/... mapping
+                if len(paths) != 2 or not paths[0].endswith("/...") or not paths[1].endswith("/..."):
+                    continue
+                source = paths[0]
+                destination = paths[1]
+                ## HACK
+                if source.startswith(self.depotPaths[0]) and destination.startswith(self.depotPaths[0]):
+                    source = source[len(self.depotPaths[0]):-4]
+                    destination = destination[len(self.depotPaths[0]):-4]
+
+                    if destination in self.knownBranches:
+                        if not self.silent:
+                            print "p4 branch %s defines a mapping from %s to %s" % (info["branch"], source, destination)
+                            print "but there exists another mapping from %s to %s already!" % (self.knownBranches[destination], destination)
+                        continue
+
+                    self.knownBranches[destination] = source
+
+                    lostAndFoundBranches.discard(destination)
+
+                    if source not in self.knownBranches:
+                        lostAndFoundBranches.add(source)
+
+
+        for branch in lostAndFoundBranches:
+            self.knownBranches[branch] = branch
+
+    def listExistingP4GitBranches(self):
+        self.p4BranchesInGit = []
+
+        cmdline = "git rev-parse --symbolic "
+        if self.importIntoRemotes:
+            cmdline += " --remotes"
+        else:
+            cmdline += " --branches"
+
+        for line in read_pipe_lines(cmdline):
+            line = line.strip()
+
+            ## only import to p4/
+            if not line.startswith('p4/') or line == "p4/HEAD":
+                continue
+            branch = line
+
+            # strip off p4
+            branch = re.sub ("^p4/", "", line)
+
+            self.p4BranchesInGit.append(branch)
+            self.initialParents[self.refPrefix + branch] = parseRevision(line)
+
+    def createOrUpdateBranchesFromOrigin(self):
+        if not self.silent:
+            print ("Creating/updating branch(es) in %s based on origin branch(es)"
+                   % self.refPrefix)
+
+        originPrefix = "origin/p4/"
+
+        for line in read_pipe_lines("git rev-parse --symbolic --remotes"):
+            line = line.strip()
+            if (not line.startswith(originPrefix)) or line.endswith("HEAD"):
+                continue
+
+            headName = line[len(originPrefix):]
+            remoteHead = self.refPrefix + headName
+            originHead = line
+
+            original = extractSettingsGitLog(extractLogMessageFromGitCommit(originHead))
+            if (not original.has_key('depot-paths')
+                or not original.has_key('change')):
+                continue
+
+            update = False
+            if not gitBranchExists(remoteHead):
+                if self.verbose:
+                    print "creating %s" % remoteHead
+                update = True
+            else:
+                settings = extractSettingsGitLog(extractLogMessageFromGitCommit(remoteHead))
+                if settings.has_key('change') > 0:
+                    if settings['depot-paths'] == original['depot-paths']:
+                        originP4Change = int(original['change'])
+                        p4Change = int(settings['change'])
+                        if originP4Change > p4Change:
+                            print ("%s (%s) is newer than %s (%s). "
+                                   "Updating p4 branch from origin."
+                                   % (originHead, originP4Change,
+                                      remoteHead, p4Change))
+                            update = True
+                    else:
+                        print ("Ignoring: %s was imported from %s while "
+                               "%s was imported from %s"
+                               % (originHead, ','.join(original['depot-paths']),
+                                  remoteHead, ','.join(settings['depot-paths'])))
+
+            if update:
+                system("git update-ref %s %s" % (remoteHead, originHead))
+
+    def updateOptionDict(self, d):
+        option_keys = {}
+        if self.keepRepoPath:
+            option_keys['keepRepoPath'] = 1
+
+        d["options"] = ' '.join(sorted(option_keys.keys()))
+
+    def readOptions(self, d):
+        self.keepRepoPath = (d.has_key('options')
+                             and ('keepRepoPath' in d['options']))
+
+    def run(self, args):
+        self.depotPaths = []
+        self.changeRange = ""
+        self.initialParent = ""
+        self.previousDepotPaths = []
+
+        # map from branch depot path to parent branch
+        self.knownBranches = {}
+        self.initialParents = {}
+        self.hasOrigin = gitBranchExists("origin") or gitBranchExists("origin/p4") or gitBranchExists("origin/p4/master")
+        if not self.syncWithOrigin:
+            self.hasOrigin = False
+
+        if self.importIntoRemotes:
+            self.refPrefix = "refs/remotes/p4/"
+        else:
+            self.refPrefix = "refs/heads/p4/"
+
+        if self.syncWithOrigin and self.hasOrigin:
+            if not self.silent:
+                print "Syncing with origin first by calling git fetch origin"
+            system("git fetch origin")
+
+        if len(self.branch) == 0:
+            self.branch = self.refPrefix + "master"
+            if gitBranchExists("refs/heads/p4") and self.importIntoRemotes:
+                system("git update-ref %s refs/heads/p4" % self.branch)
+                system("git branch -D p4");
+            # create it /after/ importing, when master exists
+            if not gitBranchExists(self.refPrefix + "HEAD") and self.importIntoRemotes:
+                system("git symbolic-ref %sHEAD %s" % (self.refPrefix, self.branch))
+
+        # TODO: should always look at previous commits,
+        # merge with previous imports, if possible.
+        if args == []:
+            if self.hasOrigin:
+                self.createOrUpdateBranchesFromOrigin()
+            self.listExistingP4GitBranches()
+
+            if len(self.p4BranchesInGit) > 1:
+                if not self.silent:
+                    print "Importing from/into multiple branches"
+                self.detectBranches = True
+
+            if self.verbose:
+                print "branches: %s" % self.p4BranchesInGit
+
+            p4Change = 0
+            for branch in self.p4BranchesInGit:
+                logMsg =  extractLogMessageFromGitCommit(self.refPrefix + branch)
+
+                settings = extractSettingsGitLog(logMsg)
+
+                self.readOptions(settings)
+                if (settings.has_key('depot-paths')
+                    and settings.has_key ('change')):
+                    change = int(settings['change']) + 1
+                    p4Change = max(p4Change, change)
+
+                    depotPaths = sorted(settings['depot-paths'])
+                    if self.previousDepotPaths == []:
+                        self.previousDepotPaths = depotPaths
+                    else:
+                        paths = []
+                        for (prev, cur) in zip(self.previousDepotPaths, depotPaths):
+                            for i in range(0, min(len(cur), len(prev))):
+                                if cur[i] <> prev[i]:
+                                    i = i - 1
+                                    break
+
+                            paths.append (cur[:i + 1])
+
+                        self.previousDepotPaths = paths
+
+            if p4Change > 0:
+                self.depotPaths = sorted(self.previousDepotPaths)
+                self.changeRange = "@%s,#head" % p4Change
+                if not self.detectBranches:
+                    self.initialParent = parseRevision(self.branch)
+                if not self.silent and not self.detectBranches:
+                    print "Performing incremental import into %s git branch" % self.branch
+
+        if not self.branch.startswith("refs/"):
+            self.branch = "refs/heads/" + self.branch
+
+        if len(args) == 0 and self.depotPaths:
+            if not self.silent:
+                print "Depot paths: %s" % ' '.join(self.depotPaths)
+        else:
+            if self.depotPaths and self.depotPaths != args:
+                print ("previous import used depot path %s and now %s was specified. "
+                       "This doesn't work!" % (' '.join (self.depotPaths),
+                                               ' '.join (args)))
+                sys.exit(1)
+
+            self.depotPaths = sorted(args)
+
+        self.revision = ""
+        self.users = {}
+
+        newPaths = []
+        for p in self.depotPaths:
+            if p.find("@") != -1:
+                atIdx = p.index("@")
+                self.changeRange = p[atIdx:]
+                if self.changeRange == "@all":
+                    self.changeRange = ""
+                elif ',' not in self.changeRange:
+                    self.revision = self.changeRange
+                    self.changeRange = ""
+                p = p[0:atIdx]
+            elif p.find("#") != -1:
+                hashIdx = p.index("#")
+                self.revision = p[hashIdx:]
+                p = p[0:hashIdx]
+            elif self.previousDepotPaths == []:
+                self.revision = "#head"
+
+            p = re.sub ("\.\.\.$", "", p)
+            if not p.endswith("/"):
+                p += "/"
+
+            newPaths.append(p)
+
+        self.depotPaths = newPaths
+
+
+        self.loadUserMapFromCache()
+        self.labels = {}
+        if self.detectLabels:
+            self.getLabels();
+
+        if self.detectBranches:
+            ## FIXME - what's a P4 projectName ?
+            self.projectName = self.guessProjectName()
+
+            if not self.hasOrigin:
+                self.getBranchMapping();
+            if self.verbose:
+                print "p4-git branches: %s" % self.p4BranchesInGit
+                print "initial parents: %s" % self.initialParents
+            for b in self.p4BranchesInGit:
+                if b != "master":
+
+                    ## FIXME
+                    b = b[len(self.projectName):]
+                self.createdBranches.add(b)
+
+        self.tz = "%+03d%02d" % (- time.timezone / 3600, ((- time.timezone % 3600) / 60))
+
+        importProcess = subprocess.Popen(["git", "fast-import"],
+                                         stdin=subprocess.PIPE, stdout=subprocess.PIPE,
+                                         stderr=subprocess.PIPE);
+        self.gitOutput = importProcess.stdout
+        self.gitStream = importProcess.stdin
+        self.gitError = importProcess.stderr
+
+        if self.revision:
+            print "Doing initial import of %s from revision %s into %s" % (' '.join(self.depotPaths), self.revision, self.branch)
+
+            details = { "user" : "git perforce import user", "time" : int(time.time()) }
+            details["desc"] = ("Initial import of %s from the state at revision %s"
+                               % (' '.join(self.depotPaths), self.revision))
+            details["change"] = self.revision
+            newestRevision = 0
+
+            fileCnt = 0
+            for info in p4CmdList("files "
+                                  +  ' '.join(["%s...%s"
+                                               % (p, self.revision)
+                                               for p in self.depotPaths])):
+
+                if info['code'] == 'error':
+                    sys.stderr.write("p4 returned an error: %s\n"
+                                     % info['data'])
+                    sys.exit(1)
+
+
+                change = int(info["change"])
+                if change > newestRevision:
+                    newestRevision = change
+
+                if info["action"] == "delete":
+                    # don't increase the file cnt, otherwise details["depotFile123"] will have gaps!
+                    #fileCnt = fileCnt + 1
+                    continue
+
+                for prop in ["depotFile", "rev", "action", "type" ]:
+                    details["%s%s" % (prop, fileCnt)] = info[prop]
+
+                fileCnt = fileCnt + 1
+
+            details["change"] = newestRevision
+            self.updateOptionDict(details)
+            try:
+                self.commit(details, self.extractFilesFromCommit(details), self.branch, self.depotPaths)
+            except IOError:
+                print "IO error with git fast-import. Is your git version recent enough?"
+                print self.gitError.read()
+
+        else:
+            changes = []
+
+            if len(self.changesFile) > 0:
+                output = open(self.changesFile).readlines()
+                changeSet = Set()
+                for line in output:
+                    changeSet.add(int(line))
+
+                for change in changeSet:
+                    changes.append(change)
+
+                changes.sort()
+            else:
+                if self.verbose:
+                    print "Getting p4 changes for %s...%s" % (', '.join(self.depotPaths),
+                                                              self.changeRange)
+                assert self.depotPaths
+                output = read_pipe_lines("p4 changes " + ' '.join (["%s...%s" % (p, self.changeRange)
+                                                                    for p in self.depotPaths]))
+
+                for line in output:
+                    changeNum = line.split(" ")[1]
+                    changes.append(changeNum)
+
+                changes.reverse()
+
+                if len(self.maxChanges) > 0:
+                    changes = changes[0:min(int(self.maxChanges), len(changes))]
+
+            if len(changes) == 0:
+                if not self.silent:
+                    print "No changes to import!"
+                return True
+
+            if not self.silent and not self.detectBranches:
+                print "Import destination: %s" % self.branch
+
+            self.updatedBranches = set()
+
+            cnt = 1
+            for change in changes:
+                description = p4Cmd("describe %s" % change)
+                self.updateOptionDict(description)
+
+                if not self.silent:
+                    sys.stdout.write("\rImporting revision %s (%s%%)" % (change, cnt * 100 / len(changes)))
+                    sys.stdout.flush()
+                cnt = cnt + 1
+
+                try:
+                    if self.detectBranches:
+                        branches = self.splitFilesIntoBranches(description)
+                        for branch in branches.keys():
+                            ## HACK  --hwn
+                            branchPrefix = self.depotPaths[0] + branch + "/"
+
+                            parent = ""
+
+                            filesForCommit = branches[branch]
+
+                            if self.verbose:
+                                print "branch is %s" % branch
+
+                            self.updatedBranches.add(branch)
+
+                            if branch not in self.createdBranches:
+                                self.createdBranches.add(branch)
+                                parent = self.knownBranches[branch]
+                                if parent == branch:
+                                    parent = ""
+                                elif self.verbose:
+                                    print "parent determined through known branches: %s" % parent
+
+                            # main branch? use master
+                            if branch == "main":
+                                branch = "master"
+                            else:
+
+                                ## FIXME
+                                branch = self.projectName + branch
+
+                            if parent == "main":
+                                parent = "master"
+                            elif len(parent) > 0:
+                                ## FIXME
+                                parent = self.projectName + parent
+
+                            branch = self.refPrefix + branch
+                            if len(parent) > 0:
+                                parent = self.refPrefix + parent
+
+                            if self.verbose:
+                                print "looking for initial parent for %s; current parent is %s" % (branch, parent)
+
+                            if len(parent) == 0 and branch in self.initialParents:
+                                parent = self.initialParents[branch]
+                                del self.initialParents[branch]
+
+                            self.commit(description, filesForCommit, branch, [branchPrefix], parent)
+                    else:
+                        files = self.extractFilesFromCommit(description)
+                        self.commit(description, files, self.branch, self.depotPaths,
+                                    self.initialParent)
+                        self.initialParent = ""
+                except IOError:
+                    print self.gitError.read()
+                    sys.exit(1)
+
+            if not self.silent:
+                print ""
+                if len(self.updatedBranches) > 0:
+                    sys.stdout.write("Updated branches: ")
+                    for b in self.updatedBranches:
+                        sys.stdout.write("%s " % b)
+                    sys.stdout.write("\n")
+
+
+        self.gitStream.close()
+        if importProcess.wait() != 0:
+            die("fast-import failed: %s" % self.gitError.read())
+        self.gitOutput.close()
+        self.gitError.close()
+
+        return True
+
+class P4Rebase(Command):
+    def __init__(self):
+        Command.__init__(self)
+        self.options = [ ]
+        self.description = ("Fetches the latest revision from perforce and "
+                            + "rebases the current work (branch) against it")
+        self.verbose = False
+
+    def run(self, args):
+        sync = P4Sync()
+        sync.run([])
+
+        [upstream, settings] = findUpstreamBranchPoint()
+        if len(upstream) == 0:
+            die("Cannot find upstream branchpoint for rebase")
+
+        # the branchpoint may be p4/foo~3, so strip off the parent
+        upstream = re.sub("~[0-9]+$", "", upstream)
+
+        print "Rebasing the current branch onto %s" % upstream
+        oldHead = read_pipe("git rev-parse HEAD").strip()
+        system("git rebase %s" % upstream)
+        system("git diff-tree --stat --summary -M %s HEAD" % oldHead)
+        return True
+
+class P4Clone(P4Sync):
+    def __init__(self):
+        P4Sync.__init__(self)
+        self.description = "Creates a new git repository and imports from Perforce into it"
+        self.usage = "usage: %prog [options] //depot/path[@revRange]"
+        self.options.append(
+            optparse.make_option("--destination", dest="cloneDestination",
+                                 action='store', default=None,
+                                 help="where to leave result of the clone"))
+        self.cloneDestination = None
+        self.needsGit = False
+
+    def defaultDestination(self, args):
+        ## TODO: use common prefix of args?
+        depotPath = args[0]
+        depotDir = re.sub("(@[^@]*)$", "", depotPath)
+        depotDir = re.sub("(#[^#]*)$", "", depotDir)
+        depotDir = re.sub(r"\.\.\.$,", "", depotDir)
+        depotDir = re.sub(r"/$", "", depotDir)
+        return os.path.split(depotDir)[1]
+
+    def run(self, args):
+        if len(args) < 1:
+            return False
+
+        if self.keepRepoPath and not self.cloneDestination:
+            sys.stderr.write("Must specify destination for --keep-path\n")
+            sys.exit(1)
+
+        depotPaths = args
+
+        if not self.cloneDestination and len(depotPaths) > 1:
+            self.cloneDestination = depotPaths[-1]
+            depotPaths = depotPaths[:-1]
+
+        for p in depotPaths:
+            if not p.startswith("//"):
+                return False
+
+        if not self.cloneDestination:
+            self.cloneDestination = self.defaultDestination(args)
+
+        print "Importing from %s into %s" % (', '.join(depotPaths), self.cloneDestination)
+        if not os.path.exists(self.cloneDestination):
+            os.makedirs(self.cloneDestination)
+        os.chdir(self.cloneDestination)
+        system("git init")
+        self.gitdir = os.getcwd() + "/.git"
+        if not P4Sync.run(self, depotPaths):
+            return False
+        if self.branch != "master":
+            if gitBranchExists("refs/remotes/p4/master"):
+                system("git branch master refs/remotes/p4/master")
+                system("git checkout -f")
+            else:
+                print "Could not detect main branch. No checkout/master branch created."
+
+        return True
+
+class P4Branches(Command):
+    def __init__(self):
+        Command.__init__(self)
+        self.options = [ ]
+        self.description = ("Shows the git branches that hold imports and their "
+                            + "corresponding perforce depot paths")
+        self.verbose = False
+
+    def run(self, args):
+        cmdline = "git rev-parse --symbolic "
+        cmdline += " --remotes"
+
+        for line in read_pipe_lines(cmdline):
+            line = line.strip()
+
+            if not line.startswith('p4/') or line == "p4/HEAD":
+                continue
+            branch = line
+
+            log = extractLogMessageFromGitCommit("refs/remotes/%s" % branch)
+            settings = extractSettingsGitLog(log)
+
+            print "%s <= %s (%s)" % (branch, ",".join(settings["depot-paths"]), settings["change"])
+        return True
+
+class HelpFormatter(optparse.IndentedHelpFormatter):
+    def __init__(self):
+        optparse.IndentedHelpFormatter.__init__(self)
+
+    def format_description(self, description):
+        if description:
+            return description + "\n"
+        else:
+            return ""
+
+def printUsage(commands):
+    print "usage: %s <command> [options]" % sys.argv[0]
+    print ""
+    print "valid commands: %s" % ", ".join(commands)
+    print ""
+    print "Try %s <command> --help for command specific help." % sys.argv[0]
+    print ""
+
+commands = {
+    "debug" : P4Debug,
+    "submit" : P4Submit,
+    "sync" : P4Sync,
+    "rebase" : P4Rebase,
+    "clone" : P4Clone,
+    "rollback" : P4RollBack,
+    "branches" : P4Branches
+}
+
+
+def main():
+    if len(sys.argv[1:]) == 0:
+        printUsage(commands.keys())
+        sys.exit(2)
+
+    cmd = ""
+    cmdName = sys.argv[1]
+    try:
+        klass = commands[cmdName]
+        cmd = klass()
+    except KeyError:
+        print "unknown command %s" % cmdName
+        print ""
+        printUsage(commands.keys())
+        sys.exit(2)
+
+    options = cmd.options
+    cmd.gitdir = os.environ.get("GIT_DIR", None)
+
+    args = sys.argv[2:]
+
+    if len(options) > 0:
+        options.append(optparse.make_option("--git-dir", dest="gitdir"))
+
+        parser = optparse.OptionParser(cmd.usage.replace("%prog", "%prog " + cmdName),
+                                       options,
+                                       description = cmd.description,
+                                       formatter = HelpFormatter())
+
+        (cmd, args) = parser.parse_args(sys.argv[2:], cmd);
+    global verbose
+    verbose = cmd.verbose
+    if cmd.needsGit:
+        if cmd.gitdir == None:
+            cmd.gitdir = os.path.abspath(".git")
+            if not isValidGitDir(cmd.gitdir):
+                cmd.gitdir = read_pipe("git rev-parse --git-dir").strip()
+                if os.path.exists(cmd.gitdir):
+                    cdup = read_pipe("git rev-parse --show-cdup").strip()
+                    if len(cdup) > 0:
+                        os.chdir(cdup);
+
+        if not isValidGitDir(cmd.gitdir):
+            if isValidGitDir(cmd.gitdir + "/.git"):
+                cmd.gitdir += "/.git"
+            else:
+                die("fatal: cannot locate git repository at %s" % cmd.gitdir)
+
+        os.environ["GIT_DIR"] = cmd.gitdir
+
+    if not cmd.run(args):
+        parser.print_help()
+
+
+if __name__ == '__main__':
+    main()
+@python "%~d0%~p0git-p4" %*
