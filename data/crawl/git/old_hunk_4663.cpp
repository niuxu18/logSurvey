		struct commit *commit;
		commit = lookup_commit_reference_by_name(fixup_message);
		if (!commit)
			die("could not lookup commit %s", fixup_message);
		ctx.output_encoding = get_commit_output_encoding();
		format_commit_message(commit, "fixup! %s\n\n",
				      &sb, &ctx);
		hook_arg1 = "message";
	} else if (!stat(git_path("MERGE_MSG"), &statbuf)) {
		if (strbuf_read_file(&sb, git_path("MERGE_MSG"), 0) < 0)
			die_errno("could not read MERGE_MSG");
		hook_arg1 = "merge";
	} else if (!stat(git_path("SQUASH_MSG"), &statbuf)) {
		if (strbuf_read_file(&sb, git_path("SQUASH_MSG"), 0) < 0)
			die_errno("could not read SQUASH_MSG");
		hook_arg1 = "squash";
	} else if (template_file && !stat(template_file, &statbuf)) {
		if (strbuf_read_file(&sb, template_file, 0) < 0)
			die_errno("could not read '%s'", template_file);
		hook_arg1 = "template";
	}

