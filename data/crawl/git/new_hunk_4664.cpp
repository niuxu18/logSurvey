
	s->fp = fopen(git_path(commit_editmsg), "w");
	if (s->fp == NULL)
		die_errno(_("could not open '%s'"), git_path(commit_editmsg));

	if (cleanup_mode != CLEANUP_NONE)
		stripspace(&sb, 0);