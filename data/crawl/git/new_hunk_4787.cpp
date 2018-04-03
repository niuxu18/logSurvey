{
	const char *c = color(WT_STATUS_HEADER, s);

	status_printf_ln(s, c, "Unmerged paths:");
	if (!advice_status_hints)
		return;
	if (s->in_merge)
		;
	else if (!s->is_initial)
		status_printf_ln(s, c, "  (use \"git reset %s <file>...\" to unstage)", s->reference);
	else
		status_printf_ln(s, c, "  (use \"git rm --cached <file>...\" to unstage)");
	status_printf_ln(s, c, "  (use \"git add/rm <file>...\" as appropriate to mark resolution)");
	status_printf_ln(s, c, "");
}

static void wt_status_print_cached_header(struct wt_status *s)
{
	const char *c = color(WT_STATUS_HEADER, s);

	status_printf_ln(s, c, "Changes to be committed:");
	if (!advice_status_hints)
		return;
	if (s->in_merge)
		; /* NEEDSWORK: use "git reset --unresolve"??? */
	else if (!s->is_initial)
		status_printf_ln(s, c, "  (use \"git reset %s <file>...\" to unstage)", s->reference);
	else
		status_printf_ln(s, c, "  (use \"git rm --cached <file>...\" to unstage)");
	status_printf_ln(s, c, "");
}

static void wt_status_print_dirty_header(struct wt_status *s,
