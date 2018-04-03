 		revs->edge_hint = 1;
 	} else if (!strcmp(arg, "--unpacked")) {
 		revs->unpacked = 1;
-		free(revs->ignore_packed);
-		revs->ignore_packed = NULL;
-		revs->num_ignore_packed = 0;
 	} else if (!prefixcmp(arg, "--unpacked=")) {
-		revs->unpacked = 1;
-		add_ignore_packed(revs, arg+11);
+		die("--unpacked=<packfile> no longer supported.");
 	} else if (!strcmp(arg, "-r")) {
 		revs->diff = 1;
 		DIFF_OPT_SET(&revs->diffopt, RECURSIVE);
