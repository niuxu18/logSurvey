		int nargc = 2;
		const char *nargv[] = {"reset", "--merge", NULL};

		if (!file_exists(git_path_merge_head()))
			die(_("There is no merge to abort (MERGE_HEAD missing)."));

		/* Invoke 'git reset --merge' */
