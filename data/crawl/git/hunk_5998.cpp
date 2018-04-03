 			       "", &diff_opts);
 	diffcore_std(&diff_opts);
 
-	/* It is either one entry that says "modified", or "created",
-	 * or nothing.
-	 */
 	if (!diff_queued_diff.nr) {
 		/* The path is the same as parent */
 		porigin = get_origin(sb, parent, origin->path);
 		hashcpy(porigin->blob_sha1, origin->blob_sha1);
-	}
-	else if (diff_queued_diff.nr != 1)
-		die("internal error in blame::find_origin");
-	else {
-		struct diff_filepair *p = diff_queued_diff.queue[0];
+	} else {
+		/*
+		 * Since origin->path is a pathspec, if the parent
+		 * commit had it as a directory, we will see a whole
+		 * bunch of deletion of files in the directory that we
+		 * do not care about.
+		 */
+		int i;
+		struct diff_filepair *p = NULL;
+		for (i = 0; i < diff_queued_diff.nr; i++) {
+			const char *name;
+			p = diff_queued_diff.queue[i];
+			name = p->one->path ? p->one->path : p->two->path;
+			if (!strcmp(name, origin->path))
+				break;
+		}
+		if (!p)
+			die("internal error in blame::find_origin");
 		switch (p->status) {
 		default:
 			die("internal error in blame::find_origin (%c)",
