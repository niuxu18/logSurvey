		pathspec = get_pathspec(prefix, argv);

	if (read_cache_preload(pathspec) < 0)
		die(_("index file corrupt"));

	/*
	 * Non partial, non as-is commit.
