				"#\n",
				git_path("MERGE_HEAD"));

		fprintf(fp,
			"\n"
			"# Please enter the commit message for your changes.");
		if (cleanup_mode == CLEANUP_ALL)
			fprintf(fp,
				" Lines starting\n"
				"# with '#' will be ignored, and an empty"
				" message aborts the commit.\n");
		else /* CLEANUP_SPACE, that is. */
			fprintf(fp,
				" Lines starting\n"
				"# with '#' will be kept; you may remove them"
				" yourself if you want to.\n"
				"# An empty message aborts the commit.\n");
		if (only_include_assumed)
			fprintf(fp, "# %s\n", only_include_assumed);

		ai_tmp = cut_ident_timestamp_part(author_ident->buf);
		ci_tmp = cut_ident_timestamp_part(committer_ident.buf);
		if (strcmp(author_ident->buf, committer_ident.buf))
			fprintf(fp,
				"%s"
				"# Author:    %s\n",
				ident_shown++ ? "" : "#\n",
				author_ident->buf);

		if (!user_ident_sufficiently_given())
			fprintf(fp,
				"%s"
				"# Committer: %s\n",
				ident_shown++ ? "" : "#\n",
				committer_ident.buf);

		if (ident_shown)
			fprintf(fp, "#\n");

		saved_color_setting = s->use_color;
		s->use_color = 0;
		commitable = run_status(fp, index_file, prefix, 1, s);
		s->use_color = saved_color_setting;

		*ai_tmp = ' ';
