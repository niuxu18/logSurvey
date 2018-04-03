+Git v2.8.3 Release Notes
+========================
+
+Fixes since v2.8.2
+------------------
+
+ * "git send-email" now uses a more readable timestamps when
+   formulating a message ID.
+
+ * The repository set-up sequence has been streamlined (the biggest
+   change is that there is no longer git_config_early()), so that we
+   do not attempt to look into refs/* when we know we do not have a
+   Git repository.
+
+ * When "git worktree" feature is in use, "git branch -d" allowed
+   deletion of a branch that is checked out in another worktree
+
+ * When "git worktree" feature is in use, "git branch -m" renamed a
+   branch that is checked out in another worktree without adjusting
+   the HEAD symbolic ref for the worktree.
+
+ * "git format-patch --help" showed `-s` and `--no-patch` as if these
+   are valid options to the command.  We already hide `--patch` option
+   from the documentation, because format-patch is about showing the
+   diff, and the documentation now hides these options as well.
+
+ * A change back in version 2.7 to "git branch" broke display of a
+   symbolic ref in a non-standard place in the refs/ hierarchy (we
+   expect symbolic refs to appear in refs/remotes/*/HEAD to point at
+   the primary branch the remote has, and as .git/HEAD to point at the
+   branch we locally checked out).
+
+ * A partial rewrite of "git submodule" in the 2.7 timeframe changed
+   the way the gitdir: pointer in the submodules point at the real
+   repository location to use absolute paths by accident.  This has
+   been corrected.
+
+ * "git commit" misbehaved in a few minor ways when an empty message
+   is given via -m '', all of which has been corrected.
+
+ * Support for CRAM-MD5 authentication method in "git imap-send" did
+   not work well.
+
+ * The socks5:// proxy support added back in 2.6.4 days was not aware
+   that socks5h:// proxies behave differently.
+
+ * "git config" had a codepath that tried to pass a NULL to
+   printf("%s"), which nobody seems to have noticed.
+
+ * On Cygwin, object creation uses the "create a temporary and then
+   rename it to the final name" pattern, not "create a temporary,
+   hardlink it to the final name and then unlink the temporary"
+   pattern.
+
+   This is necessary to use Git on Windows shared directories, and is
+   already enabled for the MinGW and plain Windows builds.  It also
+   has been used in Cygwin packaged versions of Git for quite a while.
+   See http://thread.gmane.org/gmane.comp.version-control.git/291853
+   and http://thread.gmane.org/gmane.comp.version-control.git/275680.
+
+Also contains minor documentation updates and code clean-ups.