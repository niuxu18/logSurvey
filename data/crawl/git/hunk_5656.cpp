  */
 void verify_non_filename(const char *prefix, const char *arg)
 {
-	const char *name;
-	struct stat st;
-
 	if (!is_inside_work_tree() || is_inside_git_dir())
 		return;
 	if (*arg == '-')
 		return; /* flag */
-	name = prefix ? prefix_filename(prefix, strlen(prefix), arg) : arg;
-	if (!lstat(name, &st))
-		die("ambiguous argument '%s': both revision and filename\n"
-		    "Use '--' to separate filenames from revisions", arg);
-	if (errno != ENOENT && errno != ENOTDIR)
-		die_errno("failed to stat '%s'", arg);
+	if (!check_filename(prefix, arg))
+		return;
+	die("ambiguous argument '%s': both revision and filename\n"
+	    "Use '--' to separate filenames from revisions", arg);
 }
 
 const char **get_pathspec(const char *prefix, const char **pathspec)