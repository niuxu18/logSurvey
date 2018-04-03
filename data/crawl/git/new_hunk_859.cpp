	return res;
}

static int make_patch(struct commit *commit, struct replay_opts *opts)
{
	struct strbuf buf = STRBUF_INIT;
	struct rev_info log_tree_opt;
	const char *subject, *p;
	int res = 0;

	p = short_commit_name(commit);
	if (write_message(p, strlen(p), rebase_path_stopped_sha(), 1) < 0)
		return -1;

	strbuf_addf(&buf, "%s/patch", get_dir(opts));
	memset(&log_tree_opt, 0, sizeof(log_tree_opt));
	init_revisions(&log_tree_opt, NULL);
	log_tree_opt.abbrev = 0;
	log_tree_opt.diff = 1;
	log_tree_opt.diffopt.output_format = DIFF_FORMAT_PATCH;
	log_tree_opt.disable_stdin = 1;
	log_tree_opt.no_commit_id = 1;
	log_tree_opt.diffopt.file = fopen(buf.buf, "w");
	log_tree_opt.diffopt.use_color = GIT_COLOR_NEVER;
	if (!log_tree_opt.diffopt.file)
		res |= error_errno(_("could not open '%s'"), buf.buf);
	else {
		res |= log_tree_commit(&log_tree_opt, commit);
		fclose(log_tree_opt.diffopt.file);
	}
	strbuf_reset(&buf);

	strbuf_addf(&buf, "%s/message", get_dir(opts));
	if (!file_exists(buf.buf)) {
		const char *commit_buffer = get_commit_buffer(commit, NULL);
		find_commit_subject(commit_buffer, &subject);
		res |= write_message(subject, strlen(subject), buf.buf, 1);
		unuse_commit_buffer(commit, commit_buffer);
	}
	strbuf_release(&buf);

	return res;
}

static int intend_to_amend(void)
{
	unsigned char head[20];
	char *p;

	if (get_sha1("HEAD", head))
		return error(_("cannot read HEAD"));

	p = sha1_to_hex(head);
	return write_message(p, strlen(p), rebase_path_amend(), 1);
}

static int error_with_patch(struct commit *commit,
	const char *subject, int subject_len,
	struct replay_opts *opts, int exit_code, int to_amend)
{
	if (make_patch(commit, opts))
		return -1;

	if (to_amend) {
		if (intend_to_amend())
			return -1;

		fprintf(stderr, "You can amend the commit now, with\n"
			"\n"
			"  git commit --amend %s\n"
			"\n"
			"Once you are satisfied with your changes, run\n"
			"\n"
			"  git rebase --continue\n", gpg_sign_opt_quoted(opts));
	} else if (exit_code)
		fprintf(stderr, "Could not apply %s... %.*s\n",
			short_commit_name(commit), subject_len, subject);

	return exit_code;
}

static int pick_commits(struct todo_list *todo_list, struct replay_opts *opts)
{
	int res = 0;

	setenv(GIT_REFLOG_ACTION, action_name(opts), 0);
	if (opts->allow_ff)
