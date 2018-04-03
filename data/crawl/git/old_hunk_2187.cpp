				      &sb, &ctx);
		hook_arg1 = "message";
	} else if (!stat(git_path_merge_msg(), &statbuf)) {
		if (strbuf_read_file(&sb, git_path_merge_msg(), 0) < 0)
			die_errno(_("could not read MERGE_MSG"));
		hook_arg1 = "merge";
	} else if (!stat(git_path_squash_msg(), &statbuf)) {
		if (strbuf_read_file(&sb, git_path_squash_msg(), 0) < 0)
			die_errno(_("could not read SQUASH_MSG"));
