 			     0);
 
 	if (argc) {
-		error("too many parameters");
+		error(_("too many parameters"));
 		usage_with_options(git_notes_prune_usage, options);
 	}
 
