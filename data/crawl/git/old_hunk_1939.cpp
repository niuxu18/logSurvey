		hook_arg2 = "";
	}

	s->fp = fopen_for_writing(git_path(commit_editmsg));
	if (s->fp == NULL)
		die_errno(_("could not open '%s'"), git_path(commit_editmsg));

	/* Ignore status.displayCommentPrefix: we do need comments in COMMIT_EDITMSG. */
	old_display_comment_prefix = s->display_comment_prefix;