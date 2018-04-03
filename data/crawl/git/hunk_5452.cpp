 	return NULL;
 }
 
+static int reject_entry(const unsigned char *sha1, const char *base,
+			int baselen, const char *filename, unsigned mode,
+			int stage, void *context)
+{
+	return -1;
+}
+
+static int path_exists(struct tree *tree, const char *path)
+{
+	const char *pathspec[] = { path, NULL };
+
+	if (read_tree_recursive(tree, "", 0, 0, pathspec, reject_entry, NULL))
+		return 1;
+	return 0;
+}
+
 static void parse_pathspec_arg(const char **pathspec,
 		struct archiver_args *ar_args)
 {
-	ar_args->pathspec = get_pathspec("", pathspec);
+	ar_args->pathspec = pathspec = get_pathspec("", pathspec);
+	if (pathspec) {
+		while (*pathspec) {
+			if (!path_exists(ar_args->tree, *pathspec))
+				die("path not found: %s", *pathspec);
+			pathspec++;
+		}
+	}
 }
 
 static void parse_treeish_arg(const char **argv,