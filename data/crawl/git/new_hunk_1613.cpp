			? _(" (use -u option to show untracked files)") : "");

	if (s->verbose)
		wt_longstatus_print_verbose(s);
	if (!s->commitable) {
		if (s->amend)
			status_printf_ln(s, GIT_COLOR_NORMAL, _("No changes"));
