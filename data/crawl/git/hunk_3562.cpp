 			     builtin_status_options,
 			     builtin_status_usage, 0);
 	finalize_colopts(&s.colopts, -1);
-
-	if (s.null_termination) {
-		if (status_format == STATUS_FORMAT_NONE)
-			status_format = STATUS_FORMAT_PORCELAIN;
-		else if (status_format == STATUS_FORMAT_LONG)
-			die(_("--long and -z are incompatible"));
-	}
+	finalize_deferred_config(&s);
 
 	handle_untracked_files_arg(&s);
 	if (show_ignored_in_status)