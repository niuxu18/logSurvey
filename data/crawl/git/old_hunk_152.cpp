	return 0;
}

static const char *implicit_ident_advice(void)
{
	char *user_config = expand_user_path("~/.gitconfig", 0);
	char *xdg_config = xdg_config_home("config");
	int config_exists = file_exists(user_config) || file_exists(xdg_config);

	free(user_config);
	free(xdg_config);

	if (config_exists)
		return _(implicit_ident_advice_config);
	else
		return _(implicit_ident_advice_noconfig);

}

static void print_summary(const char *prefix, const struct object_id *oid,
			  int initial_commit)
{
	struct rev_info rev;
	struct commit *commit;
	struct strbuf format = STRBUF_INIT;
	const char *head;
	struct pretty_print_context pctx = {0};
	struct strbuf author_ident = STRBUF_INIT;
	struct strbuf committer_ident = STRBUF_INIT;

	commit = lookup_commit(oid);
	if (!commit)
		die(_("couldn't look up newly created commit"));
	if (parse_commit(commit))
		die(_("could not parse newly created commit"));

	strbuf_addstr(&format, "format:%h] %s");

	format_commit_message(commit, "%an <%ae>", &author_ident, &pctx);
	format_commit_message(commit, "%cn <%ce>", &committer_ident, &pctx);
	if (strbuf_cmp(&author_ident, &committer_ident)) {
		strbuf_addstr(&format, "\n Author: ");
		strbuf_addbuf_percentquote(&format, &author_ident);
	}
	if (author_date_is_interesting()) {
		struct strbuf date = STRBUF_INIT;
		format_commit_message(commit, "%ad", &date, &pctx);
		strbuf_addstr(&format, "\n Date: ");
		strbuf_addbuf_percentquote(&format, &date);
		strbuf_release(&date);
	}
	if (!committer_ident_sufficiently_given()) {
		strbuf_addstr(&format, "\n Committer: ");
		strbuf_addbuf_percentquote(&format, &committer_ident);
		if (advice_implicit_identity) {
			strbuf_addch(&format, '\n');
			strbuf_addstr(&format, implicit_ident_advice());
		}
	}
	strbuf_release(&author_ident);
	strbuf_release(&committer_ident);

	init_revisions(&rev, prefix);
	setup_revisions(0, NULL, &rev, NULL);

	rev.diff = 1;
	rev.diffopt.output_format =
		DIFF_FORMAT_SHORTSTAT | DIFF_FORMAT_SUMMARY;

	rev.verbose_header = 1;
	rev.show_root_diff = 1;
	get_commit_format(format.buf, &rev);
	rev.always_show_header = 0;
	rev.diffopt.detect_rename = 1;
	rev.diffopt.break_opt = 0;
	diff_setup_done(&rev.diffopt);

	head = resolve_ref_unsafe("HEAD", 0, NULL, NULL);
	if (!head)
		die_errno(_("unable to resolve HEAD after creating commit"));
	if (!strcmp(head, "HEAD"))
		head = _("detached HEAD");
	else
		skip_prefix(head, "refs/heads/", &head);
	printf("[%s%s ", head, initial_commit ? _(" (root-commit)") : "");

	if (!log_tree_commit(&rev, commit)) {
		rev.always_show_header = 1;
		rev.use_terminator = 1;
		log_tree_commit(&rev, commit);
	}

	strbuf_release(&format);
}

static int git_commit_config(const char *k, const char *v, void *cb)
{
	struct wt_status *s = cb;
