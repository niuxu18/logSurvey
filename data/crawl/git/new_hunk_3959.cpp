Fixes since v1.8.1
------------------

 * The attribute mechanism didn't allow limiting attributes to be
   applied to only a single directory itself with "path/" like the
   exclude mechanism does.

 * When attempting to read the XDG-style $HOME/.config/git/config and
   finding that $HOME/.config/git is a file, we gave a wrong error
   message, instead of treating the case as "a custom config file does
   not exist there" and moving on.

 * After failing to create a temporary file using mkstemp(), failing
   pathname was not reported correctly on some platforms.

 * http transport was wrong to ask for the username when the
   authentication is done by certificate identity.

 * The behaviour visible to the end users was confusing, when they
   attempt to kill a process spawned in the editor that was in turn
   launched by Git with SIGINT (or SIGQUIT), as Git would catch that
   signal and die.  We ignore these signals now.

 * A child process that was killed by a signal (e.g. SIGINT) was
   reported in an inconsistent way depending on how the process was
   spawned by us, with or without a shell in between.

 * After "git add -N" and then writing a tree object out of the
   index, the cache-tree data structure got corrupted.

 * "git apply" misbehaved when fixing whitespace breakages by removing
   excess trailing blank lines in some corner cases.

 * A tar archive created by "git archive" recorded a directory in a
   way that made NetBSD's implementation of "tar" sometimes unhappy.

 * When "git clone --separate-git-dir=$over_there" is interrupted, it
   failed to remove the real location of the $GIT_DIR it created.
   This was most visible when interrupting a submodule update.

 * "git fetch --mirror" and fetch that uses other forms of refspec
   with wildcard used to attempt to update a symbolic ref that match
   the wildcard on the receiving end, which made little sense (the
   real ref that is pointed at by the symbolic ref would be updated
   anyway).  Symbolic refs no longer are affected by such a fetch.

 * The "log --graph" codepath fell into infinite loop in some
   corner cases.

 * "git merge" started calling prepare-commit-msg hook like "git
   commit" does some time ago, but forgot to pay attention to the exit
   status of the hook.

 * "git pack-refs" that ran in parallel to another process that
   created new refs had a race that can lose new ones.

 * When a line to be wrapped has a solid run of non space characters
   whose length exactly is the wrap width, "git shortlog -w" failed
   to add a newline after such a line.

 * The way "git svn" asked for password using SSH_ASKPASS and
   GIT_ASKPASS was not in line with the rest of the system.

 * "gitweb", when sorting by age to show repositories with new
   activities first, used to sort repositories with absolutely
   nothing in it early, which was not very useful.

 * "gitweb", when sorting by age to show repositories with new
   activities first, used to sort repositories with absolutely
   nothing in it early, which was not very useful.

 * When autoconf is used, any build on a different commit always ran
   "config.status --recheck" even when unnecessary.

 * Some scripted programs written in Python did not get updated when
   PYTHON_PATH changed.

