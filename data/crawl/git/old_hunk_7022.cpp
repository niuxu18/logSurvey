	 *
	 * The remaining are:
	 *
	 * (1) if seen_dashdash, its either
	 *     "-options -- <path>" or
	 *     "-options -- <path> <rev>".
	 *     but the latter is allowed only if there is no
	 *     options that we passed to revision machinery.
	 *
	 * (2) otherwise, we may have "--" somewhere later and
	 *     might be looking at the first one of multiple 'rev'
	 *     parameters (e.g. " master ^next ^maint -- path").
	 *     See if there is a dashdash first, and give the
	 *     arguments before that to revision machinery.
	 *     After that there must be one 'path'.
	 *
	 * (3) otherwise, its one of the three:
	 *     "-options <path> <rev>"
	 *     "-options <rev> <path>"
	 *     "-options <path>"
	 *     but again the first one is allowed only if
	 *     there is no options that we passed to revision
	 *     machinery.
	 */

	if (seen_dashdash) {
		/* (1) */
		if (argc <= i)
			usage_with_options(blame_opt_usage, options);
		path = add_prefix(prefix, argv[i]);
		if (i + 1 == argc - 1) {
			if (unk != 1)
				usage_with_options(blame_opt_usage, options);
			argv[unk++] = argv[i + 1];
		}
		else if (i + 1 != argc)
			/* garbage at end */
			usage_with_options(blame_opt_usage, options);
	}
	else {
		int j;
		for (j = i; !seen_dashdash && j < argc; j++)
			if (!strcmp(argv[j], "--"))
				seen_dashdash = j;
		if (seen_dashdash) {
			/* (2) */
			if (seen_dashdash + 1 != argc - 1)
				usage_with_options(blame_opt_usage, options);
			path = add_prefix(prefix, argv[seen_dashdash + 1]);
			for (j = i; j < seen_dashdash; j++)
				argv[unk++] = argv[j];
		}
		else {
			/* (3) */
			if (argc <= i)
				usage_with_options(blame_opt_usage, options);
			path = add_prefix(prefix, argv[i]);
			if (i + 1 == argc - 1) {
				final_commit_name = argv[i + 1];

				/* if (unk == 1) we could be getting
				 * old-style
				 */
				if (unk == 1 && !has_path_in_work_tree(path)) {
					path = add_prefix(prefix, argv[i + 1]);
					final_commit_name = argv[i];
				}
			}
			else if (i != argc - 1)
				usage_with_options(blame_opt_usage, options);

			setup_work_tree();
			if (!has_path_in_work_tree(path))
				die("cannot stat path %s: %s",
				    path, strerror(errno));
		}
	}

	if (final_commit_name)
		argv[unk++] = final_commit_name;

	/*
	 * Now we got rev and path.  We do not want the path pruning
	 * but we may want "bottom" processing.
	 */
	argv[unk++] = "--"; /* terminate the rev name */
	argv[unk] = NULL;

	setup_revisions(unk, argv, &revs, NULL);
	memset(&sb, 0, sizeof(sb));

	sb.revs = &revs;