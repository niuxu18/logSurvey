 	return sha1_to_hex(sha1);
 }
 
-static void diff_flush_raw(struct diff_filepair *p,
-			   struct diff_options *options)
+static void diff_flush_raw(struct diff_filepair *p, struct diff_options *opt)
 {
-	int two_paths;
-	char status[10];
-	int abbrev = options->abbrev;
-	const char *path_one, *path_two;
-	int inter_name_termination = '\t';
-	int line_termination = options->line_termination;
-
-	if (!line_termination)
-		inter_name_termination = 0;
+	int line_termination = opt->line_termination;
+	int inter_name_termination = line_termination ? '\t' : '\0';
 
-	path_one = p->one->path;
-	path_two = p->two->path;
-	if (line_termination) {
-		path_one = quote_one(path_one);
-		path_two = quote_one(path_two);
+	if (!(opt->output_format & DIFF_FORMAT_NAME_STATUS)) {
+		printf(":%06o %06o %s ", p->one->mode, p->two->mode,
+		       diff_unique_abbrev(p->one->sha1, opt->abbrev));
+		printf("%s ", diff_unique_abbrev(p->two->sha1, opt->abbrev));
 	}
-
-	if (p->score)
-		sprintf(status, "%c%03d", p->status, similarity_index(p));
-	else {
-		status[0] = p->status;
-		status[1] = 0;
-	}
-	switch (p->status) {
-	case DIFF_STATUS_COPIED:
-	case DIFF_STATUS_RENAMED:
-		two_paths = 1;
-		break;
-	case DIFF_STATUS_ADDED:
-	case DIFF_STATUS_DELETED:
-		two_paths = 0;
-		break;
-	default:
-		two_paths = 0;
-		break;
-	}
-	if (!(options->output_format & DIFF_FORMAT_NAME_STATUS)) {
-		printf(":%06o %06o %s ",
-		       p->one->mode, p->two->mode,
-		       diff_unique_abbrev(p->one->sha1, abbrev));
-		printf("%s ",
-		       diff_unique_abbrev(p->two->sha1, abbrev));
+	if (p->score) {
+		printf("%c%03d%c", p->status, similarity_index(p),
+			   inter_name_termination);
+	} else {
+		printf("%c%c", p->status, inter_name_termination);
 	}
-	printf("%s%c%s", status, inter_name_termination,
-			two_paths || p->one->mode ?  path_one : path_two);
-	if (two_paths)
-		printf("%c%s", inter_name_termination, path_two);
-	putchar(line_termination);
-	if (path_one != p->one->path)
-		free((void*)path_one);
-	if (path_two != p->two->path)
-		free((void*)path_two);
-}
 
-static void diff_flush_name(struct diff_filepair *p, struct diff_options *opt)
-{
-	char *path = p->two->path;
-
-	if (opt->line_termination)
-		path = quote_one(p->two->path);
-	printf("%s%c", path, opt->line_termination);
-	if (p->two->path != path)
-		free(path);
+	if (p->status == DIFF_STATUS_COPIED || p->status == DIFF_STATUS_RENAMED) {
+		write_name_quoted(p->one->path, stdout, inter_name_termination);
+		write_name_quoted(p->two->path, stdout, line_termination);
+	} else {
+		const char *path = p->one->mode ? p->one->path : p->two->path;
+		write_name_quoted(path, stdout, line_termination);
+	}
 }
 
 int diff_unmodified_pair(struct diff_filepair *p)
