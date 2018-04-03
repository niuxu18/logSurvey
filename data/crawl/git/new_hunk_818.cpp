Git v2.11.1 Release Notes
=========================

Fixes since v2.11
-----------------

 * The default Travis-CI configuration specifies newer P4 and GitLFS.

 * The character width table has been updated to match Unicode 9.0

 * Update the isatty() emulation for Windows by updating the previous
   hack that depended on internals of (older) MSVC runtime.

 * "git rev-parse --symbolic" failed with a more recent notation like
   "HEAD^-1" and "HEAD^!".

 * An empty directory in a working tree that can simply be nuked used
   to interfere while merging or cherry-picking a change to create a
   submodule directory there, which has been fixed..

 * The code in "git push" to compute if any commit being pushed in the
   superproject binds a commit in a submodule that hasn't been pushed
   out was overly inefficient, making it unusable even for a small
   project that does not have any submodule but have a reasonable
   number of refs.

 * "git push --dry-run --recurse-submodule=on-demand" wasn't
   "--dry-run" in the submodules.

 * The output from "git worktree list" was made in readdir() order,
   and was unstable.

 * mergetool.<tool>.trustExitCode configuration variable did not apply
   to built-in tools, but now it does.

 * "git p4" LFS support was broken when LFS stores an empty blob.

 * Fix a corner case in merge-recursive regression that crept in
   during 2.10 development cycle.

 * Update the error messages from the dumb-http client when it fails
   to obtain loose objects; we used to give sensible error message
   only upon 404 but we now forbid unexpected redirects that needs to
   be reported with something sensible.

 * When diff.renames configuration is on (and with Git 2.9 and later,
   it is enabled by default, which made it worse), "git stash"
   misbehaved if a file is removed and another file with a very
   similar content is added.

 * "git diff --no-index" did not take "--no-abbrev" option.

 * "git difftool --dir-diff" had a minor regression when started from
   a subdirectory, which has been fixed.

 * "git commit --allow-empty --only" (no pathspec) with dirty index
   ought to be an acceptable way to create a new commit that does not
   change any paths, but it was forbidden, perhaps because nobody
   needed it so far.

 * A pathname that begins with "//" or "\\" on Windows is special but
   path normalization logic was unaware of it.

 * "git pull --rebase", when there is no new commits on our side since
   we forked from the upstream, should be able to fast-forward without
   invoking "git rebase", but it didn't.

 * The way to specify hotkeys to "xxdiff" that is used by "git
   mergetool" has been modernized to match recent versions of xxdiff.

 * Unlike "git am --abort", "git cherry-pick --abort" moved HEAD back
   to where cherry-pick started while picking multiple changes, when
   the cherry-pick stopped to ask for help from the user, and the user
   did "git reset --hard" to a different commit in order to re-attempt
   the operation.

 * Code cleanup in shallow boundary computation.

 * A recent update to receive-pack to make it easier to drop garbage
   objects made it clear that GIT_ALTERNATE_OBJECT_DIRECTORIES cannot
   have a pathname with a colon in it (no surprise!), and this in turn
   made it impossible to push into a repository at such a path.  This
   has been fixed by introducing a quoting mechanism used when
   appending such a path to the colon-separated list.

 * The function usage_msg_opt() has been updated to say "fatal:"
   before the custom message programs give, when they want to die
   with a message about wrong command line options followed by the
   standard usage string.

 * "git index-pack --stdin" needs an access to an existing repository,
   but "git index-pack file.pack" to generate an .idx file that
   corresponds to a packfile does not.

 * Fix for NDEBUG builds.

 * A lazy "git push" without refspec did not internally use a fully
   specified refspec to perform 'current', 'simple', or 'upstream'
   push, causing unnecessary "ambiguous ref" errors.

 * "git p4" misbehaved when swapping a directory and a symbolic link.

 * Even though an fix was attempted in Git 2.9.3 days, but running
   "git difftool --dir-diff" from a subdirectory never worked. This
   has been fixed.

 * "git p4" that tracks multile p4 paths imported a single changelist
   that touches files in these multiple paths as one commit, followed
   by many empty commits.  This has been fixed.

 * A potential but unlikely buffer overflow in Windows port has been
   fixed.

 * When the http server gives an incomplete response to a smart-http
   rpc call, it could lead to client waiting for a full response that
   will never come.  Teach the client side to notice this condition
   and abort the transfer.


Also contains various documentation updates and code clean-ups.
