	const char *best_strategy = NULL, *wt_strategy = NULL;
	struct commit_list **remotes = &remoteheads;

	if (read_cache_unmerged()) {
		die_resolve_conflict("merge");
	}
	if (file_exists(git_path("MERGE_HEAD"))) {
		/*
		 * There is no unmerged entry, don't advise 'git
		 * add/rm <file>', just 'git commit'.
		 */
		if (advice_resolve_conflict)
			die("You have not concluded your merge (MERGE_HEAD exists).\n"
			    "Please, commit your changes before you can merge.");
		else
			die("You have not concluded your merge (MERGE_HEAD exists).");
	}

	resolve_undo_clear();
	/*
	 * Check if we are _not_ on a detached HEAD, i.e. if there is a
	 * current branch.
