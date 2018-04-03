 Fixes since v1.8.0.1
 --------------------
 
+ * Various codepaths have workaround for a common misconfiguration to
+   spell "UTF-8" as "utf8", but it was not used uniformly.  Most
+   notably, mailinfo (which is used by "git am") lacked this support.
+
+ * We failed to mention a file without any content change but whose
+   permission bit was modified, or (worse yet) a new file without any
+   content in the "git diff --stat" output.
+
+ * When "--stat-count" hides a diffstat for binary contents, the total
+   number of added and removed lines at the bottom was computed
+   incorrectly.
+
+ * When "--stat-count" hides a diffstat for unmerged paths, the total
+   number of affected files at the bottom of the "diff --stat" output
+   was computed incorrectly.
+
+ * "diff --shortstat" miscounted the total number of affected files
+   when there were unmerged paths.
+
  * "git p4" used to try expanding malformed "$keyword$" that spans
    across multiple lines.
 