	if (!show_only && ignore_missing)
		die(_("Option --ignore-missing can only be used together with --dry-run"));

	add_new_files = !take_worktree_changes && !refresh_only;
	require_pathspec = !(take_worktree_changes || (0 < addremove_explicit));

