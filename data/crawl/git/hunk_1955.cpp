 
 	check_apply_state(&state, force_apply);
 
-	for (i = 0; i < argc; i++) {
-		const char *arg = argv[i];
-		int fd;
-
-		if (!strcmp(arg, "-")) {
-			errs |= apply_patch(&state, 0, "<stdin>", options);
-			read_stdin = 0;
-			continue;
-		} else if (0 < state.prefix_length)
-			arg = prefix_filename(state.prefix,
-					      state.prefix_length,
-					      arg);
-
-		fd = open(arg, O_RDONLY);
-		if (fd < 0)
-			die_errno(_("can't open patch '%s'"), arg);
-		read_stdin = 0;
-		set_default_whitespace_mode(&state);
-		errs |= apply_patch(&state, fd, arg, options);
-		close(fd);
-	}
-	set_default_whitespace_mode(&state);
-	if (read_stdin)
-		errs |= apply_patch(&state, 0, "<stdin>", options);
-	if (state.whitespace_error) {
-		if (state.squelch_whitespace_errors &&
-		    state.squelch_whitespace_errors < state.whitespace_error) {
-			int squelched =
-				state.whitespace_error - state.squelch_whitespace_errors;
-			warning(Q_("squelched %d whitespace error",
-				   "squelched %d whitespace errors",
-				   squelched),
-				squelched);
-		}
-		if (state.ws_error_action == die_on_ws_error)
-			die(Q_("%d line adds whitespace errors.",
-			       "%d lines add whitespace errors.",
-			       state.whitespace_error),
-			    state.whitespace_error);
-		if (state.applied_after_fixing_ws && state.apply)
-			warning("%d line%s applied after"
-				" fixing whitespace errors.",
-				state.applied_after_fixing_ws,
-				state.applied_after_fixing_ws == 1 ? "" : "s");
-		else if (state.whitespace_error)
-			warning(Q_("%d line adds whitespace errors.",
-				   "%d lines add whitespace errors.",
-				   state.whitespace_error),
-				state.whitespace_error);
-	}
-
-	if (state.update_index) {
-		if (write_locked_index(&the_index, &lock_file, COMMIT_LOCK))
-			die(_("Unable to write new index file"));
-	}
+	ret = apply_all_patches(&state, argc, argv, options);
 
 	clear_apply_state(&state);
 
-	return !!errs;
+	return ret;
 }