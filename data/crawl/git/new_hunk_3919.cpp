		else if (argc == 2)
			rename_branch(argv[0], argv[1], rename > 1);
		else
			die(_("too many branches for a rename operation"));
	} else if (new_upstream) {
		struct branch *branch = branch_get(argv[0]);
