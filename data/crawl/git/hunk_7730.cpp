 
 	strbuf_release(&sb);
 
+	if (no_edit) {
+		struct rev_info rev;
+		unsigned char sha1[40];
+
+		fclose(fp);
+
+		if (!active_nr && read_cache() < 0)
+			die("Cannot read index");
+
+		if (get_sha1("HEAD", sha1) != 0)
+			return !!active_nr;
+
+		init_revisions(&rev, "");
+		rev.abbrev = 0;
+		setup_revisions(0, NULL, &rev, "HEAD");
+		DIFF_OPT_SET(&rev.diffopt, QUIET);
+		DIFF_OPT_SET(&rev.diffopt, EXIT_WITH_STATUS);
+		run_diff_index(&rev, 1 /* cached */);
+
+		return !!DIFF_OPT_TST(&rev.diffopt, HAS_CHANGES);
+	}
+
 	if (in_merge && !no_edit)
 		fprintf(fp,
 			"#\n"