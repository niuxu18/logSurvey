 All of the fixes in v1.7.3.X maintenance series are included in this
 release, unless otherwise noted.
 
- * "diff" and friends incorrectly applied textconv filters to symlinks
-   (d391c0ff).
+ * Smart HTTP transport used to incorrectly retry redirected POST
+   request with GET request (311e2ea006).
+
+ * "git apply" did not correctly handle patches that only change modes
+   if told to apply while stripping leading paths with -p option (aae1f6ac).
 
- * "git apply" segfaulted when a bogus input is fed to it (24305cd70).
+ * "git apply" can deal with patches with timezone formatted with a
+   colon between the hours and minutes part (e.g. "-08:00" instead of
+   "-0800").
 
- * Running "git cherry-pick --ff" on a root commit segfaulted (6355e50).
+ * "git checkout" removed an untracked file "foo" from the working
+    tree when switching to a branch that contains a tracked path
+    "foo/bar".  Prevent this, just like the case where the conflicting
+    path were "foo" (c752e7f..7980872d).
+
+ * "git diff --check" reported an incorrect line number for added
+   blank lines at the end of file (8837d335).
 
  * "git log --author=me --author=her" did not find commits written by
    me or by her; instead it looked for commits written by me and by
    her, which is impossible.
 
- * "git merge-file" can be called from within a subdirectory now
-   (55846b9a).
+ * "git merge" into an unborn branch removed an untracked file "foo"
+   from the working tree when merged branch had "foo" (2caf20c..172b642).
 
  * "git push --progress" shows progress indicators now.
 
  * "git repack" places its temporary packs under $GIT_OBJECT_DIRECTORY/pack
    instead of $GIT_OBJECT_DIRECTORY/ to avoid cross directory renames.
 
- * "git rev-list --format="...%x00..." incorrectly chopped its output
-   at NUL (9130ac9fe).
-
  * "git submodule update --recursive --other-flags" passes flags down
    to its subinvocations.
 
 ---
 exec >/var/tmp/1
-O=v1.7.3.2-245-g03276d9
+O=v1.7.3.2-450-g5b9c331
 echo O=$(git describe master)
 git shortlog --no-merges ^maint ^$O master