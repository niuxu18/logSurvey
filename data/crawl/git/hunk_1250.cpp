 static int option_parse_exclude(const struct option *opt,
 				const char *arg, int unset)
 {
-	add_name_limit(arg, 1);
+	struct apply_state *state = opt->value;
+	add_name_limit(state, arg, 1);
 	return 0;
 }
 
 static int option_parse_include(const struct option *opt,
 				const char *arg, int unset)
 {
-	add_name_limit(arg, 0);
-	has_include = 1;
+	struct apply_state *state = opt->value;
+	add_name_limit(state, arg, 0);
+	state->has_include = 1;
 	return 0;
 }
 
 static int option_parse_p(const struct option *opt,
-			  const char *arg, int unset)
+			  const char *arg,
+			  int unset)
 {
-	p_value = atoi(arg);
-	p_value_known = 1;
+	struct apply_state *state = opt->value;
+	state->p_value = atoi(arg);
+	state->p_value_known = 1;
 	return 0;
 }
 
 static int option_parse_space_change(const struct option *opt,
-			  const char *arg, int unset)
+				     const char *arg, int unset)
 {
+	struct apply_state *state = opt->value;
 	if (unset)
-		ws_ignore_action = ignore_ws_none;
+		state->ws_ignore_action = ignore_ws_none;
 	else
-		ws_ignore_action = ignore_ws_change;
+		state->ws_ignore_action = ignore_ws_change;
 	return 0;
 }
 
 static int option_parse_whitespace(const struct option *opt,
 				   const char *arg, int unset)
 {
-	const char **whitespace_option = opt->value;
-
-	*whitespace_option = arg;
-	parse_whitespace_option(arg);
+	struct apply_state *state = opt->value;
+	state->whitespace_option = arg;
+	parse_whitespace_option(state, arg);
 	return 0;
 }
 
 static int option_parse_directory(const struct option *opt,
 				  const char *arg, int unset)
 {
-	strbuf_reset(&root);
-	strbuf_addstr(&root, arg);
-	strbuf_complete(&root, '/');
+	struct apply_state *state = opt->value;
+	strbuf_reset(&state->root);
+	strbuf_addstr(&state->root, arg);
+	strbuf_complete(&state->root, '/');
 	return 0;
 }
 
-int cmd_apply(int argc, const char **argv, const char *prefix_)
+static void init_apply_state(struct apply_state *state,
+			     const char *prefix,
+			     struct lock_file *lock_file)
+{
+	memset(state, 0, sizeof(*state));
+	state->prefix = prefix;
+	state->prefix_length = state->prefix ? strlen(state->prefix) : 0;
+	state->lock_file = lock_file;
+	state->newfd = -1;
+	state->apply = 1;
+	state->line_termination = '\n';
+	state->p_value = 1;
+	state->p_context = UINT_MAX;
+	state->squelch_whitespace_errors = 5;
+	state->ws_error_action = warn_on_ws_error;
+	state->ws_ignore_action = ignore_ws_none;
+	state->linenr = 1;
+	string_list_init(&state->fn_table, 0);
+	string_list_init(&state->limit_by_name, 0);
+	string_list_init(&state->symlink_changes, 0);
+	strbuf_init(&state->root, 0);
+
+	git_apply_config();
+	if (apply_default_whitespace)
+		parse_whitespace_option(state, apply_default_whitespace);
+	if (apply_default_ignorewhitespace)
+		parse_ignorewhitespace_option(state, apply_default_ignorewhitespace);
+}
+
+static void clear_apply_state(struct apply_state *state)
+{
+	string_list_clear(&state->limit_by_name, 0);
+	string_list_clear(&state->symlink_changes, 0);
+	strbuf_release(&state->root);
+
+	/* &state->fn_table is cleared at the end of apply_patch() */
+}
+
+static void check_apply_state(struct apply_state *state, int force_apply)
+{
+	int is_not_gitdir = !startup_info->have_repository;
+
+	if (state->apply_with_reject && state->threeway)
+		die("--reject and --3way cannot be used together.");
+	if (state->cached && state->threeway)
+		die("--cached and --3way cannot be used together.");
+	if (state->threeway) {
+		if (is_not_gitdir)
+			die(_("--3way outside a repository"));
+		state->check_index = 1;
+	}
+	if (state->apply_with_reject)
+		state->apply = state->apply_verbosely = 1;
+	if (!force_apply && (state->diffstat || state->numstat || state->summary || state->check || state->fake_ancestor))
+		state->apply = 0;
+	if (state->check_index && is_not_gitdir)
+		die(_("--index outside a repository"));
+	if (state->cached) {
+		if (is_not_gitdir)
+			die(_("--cached outside a repository"));
+		state->check_index = 1;
+	}
+	if (state->check_index)
+		state->unsafe_paths = 0;
+	if (!state->lock_file)
+		die("BUG: state->lock_file should not be NULL");
+}
+
+static int apply_all_patches(struct apply_state *state,
+			     int argc,
+			     const char **argv,
+			     int options)
 {
 	int i;
 	int errs = 0;
-	int is_not_gitdir = !startup_info->have_repository;
-	int force_apply = 0;
+	int read_stdin = 1;
+
+	for (i = 0; i < argc; i++) {
+		const char *arg = argv[i];
+		int fd;
+
+		if (!strcmp(arg, "-")) {
+			errs |= apply_patch(state, 0, "<stdin>", options);
+			read_stdin = 0;
+			continue;
+		} else if (0 < state->prefix_length)
+			arg = prefix_filename(state->prefix,
+					      state->prefix_length,
+					      arg);
+
+		fd = open(arg, O_RDONLY);
+		if (fd < 0)
+			die_errno(_("can't open patch '%s'"), arg);
+		read_stdin = 0;
+		set_default_whitespace_mode(state);
+		errs |= apply_patch(state, fd, arg, options);
+		close(fd);
+	}
+	set_default_whitespace_mode(state);
+	if (read_stdin)
+		errs |= apply_patch(state, 0, "<stdin>", options);
+
+	if (state->whitespace_error) {
+		if (state->squelch_whitespace_errors &&
+		    state->squelch_whitespace_errors < state->whitespace_error) {
+			int squelched =
+				state->whitespace_error - state->squelch_whitespace_errors;
+			warning(Q_("squelched %d whitespace error",
+				   "squelched %d whitespace errors",
+				   squelched),
+				squelched);
+		}
+		if (state->ws_error_action == die_on_ws_error)
+			die(Q_("%d line adds whitespace errors.",
+			       "%d lines add whitespace errors.",
+			       state->whitespace_error),
+			    state->whitespace_error);
+		if (state->applied_after_fixing_ws && state->apply)
+			warning("%d line%s applied after"
+				" fixing whitespace errors.",
+				state->applied_after_fixing_ws,
+				state->applied_after_fixing_ws == 1 ? "" : "s");
+		else if (state->whitespace_error)
+			warning(Q_("%d line adds whitespace errors.",
+				   "%d lines add whitespace errors.",
+				   state->whitespace_error),
+				state->whitespace_error);
+	}
+
+	if (state->update_index) {
+		if (write_locked_index(&the_index, state->lock_file, COMMIT_LOCK))
+			die(_("Unable to write new index file"));
+		state->newfd = -1;
+	}
+
+	return !!errs;
+}
 
-	const char *whitespace_option = NULL;
+int cmd_apply(int argc, const char **argv, const char *prefix)
+{
+	int force_apply = 0;
+	int options = 0;
+	int ret;
+	struct apply_state state;
 
 	struct option builtin_apply_options[] = {
-		{ OPTION_CALLBACK, 0, "exclude", NULL, N_("path"),
+		{ OPTION_CALLBACK, 0, "exclude", &state, N_("path"),
 			N_("don't apply changes matching the given path"),
 			0, option_parse_exclude },
-		{ OPTION_CALLBACK, 0, "include", NULL, N_("path"),
+		{ OPTION_CALLBACK, 0, "include", &state, N_("path"),
 			N_("apply changes matching the given path"),
 			0, option_parse_include },
-		{ OPTION_CALLBACK, 'p', NULL, NULL, N_("num"),
+		{ OPTION_CALLBACK, 'p', NULL, &state, N_("num"),
 			N_("remove <num> leading slashes from traditional diff paths"),
 			0, option_parse_p },
-		OPT_BOOL(0, "no-add", &no_add,
+		OPT_BOOL(0, "no-add", &state.no_add,
 			N_("ignore additions made by the patch")),
-		OPT_BOOL(0, "stat", &diffstat,
+		OPT_BOOL(0, "stat", &state.diffstat,
 			N_("instead of applying the patch, output diffstat for the input")),
 		OPT_NOOP_NOARG(0, "allow-binary-replacement"),
 		OPT_NOOP_NOARG(0, "binary"),
-		OPT_BOOL(0, "numstat", &numstat,
+		OPT_BOOL(0, "numstat", &state.numstat,
 			N_("show number of added and deleted lines in decimal notation")),
-		OPT_BOOL(0, "summary", &summary,
+		OPT_BOOL(0, "summary", &state.summary,
 			N_("instead of applying the patch, output a summary for the input")),
-		OPT_BOOL(0, "check", &check,
+		OPT_BOOL(0, "check", &state.check,
 			N_("instead of applying the patch, see if the patch is applicable")),
-		OPT_BOOL(0, "index", &check_index,
+		OPT_BOOL(0, "index", &state.check_index,
 			N_("make sure the patch is applicable to the current index")),
-		OPT_BOOL(0, "cached", &cached,
+		OPT_BOOL(0, "cached", &state.cached,
 			N_("apply a patch without touching the working tree")),
-		OPT_BOOL(0, "unsafe-paths", &unsafe_paths,
+		OPT_BOOL(0, "unsafe-paths", &state.unsafe_paths,
 			N_("accept a patch that touches outside the working area")),
 		OPT_BOOL(0, "apply", &force_apply,
 			N_("also apply the patch (use with --stat/--summary/--check)")),
-		OPT_BOOL('3', "3way", &threeway,
+		OPT_BOOL('3', "3way", &state.threeway,
 			 N_( "attempt three-way merge if a patch does not apply")),
-		OPT_FILENAME(0, "build-fake-ancestor", &fake_ancestor,
+		OPT_FILENAME(0, "build-fake-ancestor", &state.fake_ancestor,
 			N_("build a temporary index based on embedded index information")),
 		/* Think twice before adding "--nul" synonym to this */
-		OPT_SET_INT('z', NULL, &line_termination,
+		OPT_SET_INT('z', NULL, &state.line_termination,
 			N_("paths are separated with NUL character"), '\0'),
-		OPT_INTEGER('C', NULL, &p_context,
+		OPT_INTEGER('C', NULL, &state.p_context,
 				N_("ensure at least <n> lines of context match")),
-		{ OPTION_CALLBACK, 0, "whitespace", &whitespace_option, N_("action"),
+		{ OPTION_CALLBACK, 0, "whitespace", &state, N_("action"),
 			N_("detect new or modified lines that have whitespace errors"),
 			0, option_parse_whitespace },
-		{ OPTION_CALLBACK, 0, "ignore-space-change", NULL, NULL,
+		{ OPTION_CALLBACK, 0, "ignore-space-change", &state, NULL,
 			N_("ignore changes in whitespace when finding context"),
 			PARSE_OPT_NOARG, option_parse_space_change },
-		{ OPTION_CALLBACK, 0, "ignore-whitespace", NULL, NULL,
+		{ OPTION_CALLBACK, 0, "ignore-whitespace", &state, NULL,
 			N_("ignore changes in whitespace when finding context"),
 			PARSE_OPT_NOARG, option_parse_space_change },
-		OPT_BOOL('R', "reverse", &apply_in_reverse,
+		OPT_BOOL('R', "reverse", &state.apply_in_reverse,
 			N_("apply the patch in reverse")),
-		OPT_BOOL(0, "unidiff-zero", &unidiff_zero,
+		OPT_BOOL(0, "unidiff-zero", &state.unidiff_zero,
 			N_("don't expect at least one line of context")),
-		OPT_BOOL(0, "reject", &apply_with_reject,
+		OPT_BOOL(0, "reject", &state.apply_with_reject,
 			N_("leave the rejected hunks in corresponding *.rej files")),
-		OPT_BOOL(0, "allow-overlap", &allow_overlap,
+		OPT_BOOL(0, "allow-overlap", &state.allow_overlap,
 			N_("allow overlapping hunks")),
-		OPT__VERBOSE(&apply_verbosely, N_("be verbose")),
+		OPT__VERBOSE(&state.apply_verbosely, N_("be verbose")),
 		OPT_BIT(0, "inaccurate-eof", &options,
 			N_("tolerate incorrectly detected missing new-line at the end of file"),
 			INACCURATE_EOF),
 		OPT_BIT(0, "recount", &options,
 			N_("do not trust the line counts in the hunk headers"),
 			RECOUNT),
-		{ OPTION_CALLBACK, 0, "directory", NULL, N_("root"),
+		{ OPTION_CALLBACK, 0, "directory", &state, N_("root"),
 			N_("prepend <root> to all filenames"),
 			0, option_parse_directory },
 		OPT_END()
 	};
 
-	prefix = prefix_;
-	prefix_length = prefix ? strlen(prefix) : 0;
-	git_apply_config();
-	if (apply_default_whitespace)
-		parse_whitespace_option(apply_default_whitespace);
-	if (apply_default_ignorewhitespace)
-		parse_ignorewhitespace_option(apply_default_ignorewhitespace);
+	init_apply_state(&state, prefix, &lock_file);
 
-	argc = parse_options(argc, argv, prefix, builtin_apply_options,
+	argc = parse_options(argc, argv, state.prefix, builtin_apply_options,
 			apply_usage, 0);
 
-	if (apply_with_reject && threeway)
-		die("--reject and --3way cannot be used together.");
-	if (cached && threeway)
-		die("--cached and --3way cannot be used together.");
-	if (threeway) {
-		if (is_not_gitdir)
-			die(_("--3way outside a repository"));
-		check_index = 1;
-	}
-	if (apply_with_reject)
-		apply = apply_verbosely = 1;
-	if (!force_apply && (diffstat || numstat || summary || check || fake_ancestor))
-		apply = 0;
-	if (check_index && is_not_gitdir)
-		die(_("--index outside a repository"));
-	if (cached) {
-		if (is_not_gitdir)
-			die(_("--cached outside a repository"));
-		check_index = 1;
-	}
-	if (check_index)
-		unsafe_paths = 0;
+	check_apply_state(&state, force_apply);
 
-	for (i = 0; i < argc; i++) {
-		const char *arg = argv[i];
-		int fd;
+	ret = apply_all_patches(&state, argc, argv, options);
 
-		if (!strcmp(arg, "-")) {
-			errs |= apply_patch(0, "<stdin>", options);
-			read_stdin = 0;
-			continue;
-		} else if (0 < prefix_length)
-			arg = prefix_filename(prefix, prefix_length, arg);
+	clear_apply_state(&state);
 
-		fd = open(arg, O_RDONLY);
-		if (fd < 0)
-			die_errno(_("can't open patch '%s'"), arg);
-		read_stdin = 0;
-		set_default_whitespace_mode(whitespace_option);
-		errs |= apply_patch(fd, arg, options);
-		close(fd);
-	}
-	set_default_whitespace_mode(whitespace_option);
-	if (read_stdin)
-		errs |= apply_patch(0, "<stdin>", options);
-	if (whitespace_error) {
-		if (squelch_whitespace_errors &&
-		    squelch_whitespace_errors < whitespace_error) {
-			int squelched =
-				whitespace_error - squelch_whitespace_errors;
-			warning(Q_("squelched %d whitespace error",
-				   "squelched %d whitespace errors",
-				   squelched),
-				squelched);
-		}
-		if (ws_error_action == die_on_ws_error)
-			die(Q_("%d line adds whitespace errors.",
-			       "%d lines add whitespace errors.",
-			       whitespace_error),
-			    whitespace_error);
-		if (applied_after_fixing_ws && apply)
-			warning("%d line%s applied after"
-				" fixing whitespace errors.",
-				applied_after_fixing_ws,
-				applied_after_fixing_ws == 1 ? "" : "s");
-		else if (whitespace_error)
-			warning(Q_("%d line adds whitespace errors.",
-				   "%d lines add whitespace errors.",
-				   whitespace_error),
-				whitespace_error);
-	}
-
-	if (update_index) {
-		if (write_locked_index(&the_index, &lock_file, COMMIT_LOCK))
-			die(_("Unable to write new index file"));
-	}
-
-	return !!errs;
+	return ret;
 }