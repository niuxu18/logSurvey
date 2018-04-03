		const char *nargv[] = {"reset", "--merge", NULL};

		if (!file_exists(git_path("MERGE_HEAD")))
			die("There is no merge to abort (MERGE_HEAD missing).");

		/* Invoke 'git reset --merge' */
		return cmd_reset(nargc, nargv, prefix);
