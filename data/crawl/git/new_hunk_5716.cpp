	argc = parse_options(argc, argv, unused_prefix, read_tree_options,
			     read_tree_usage, 0);

	prefix_set = opts.prefix ? 1 : 0;
	if (1 < opts.merge + opts.reset + prefix_set)
		die("Which one? -m, --reset, or --prefix?");

	if (opts.reset || opts.merge || opts.prefix) {
		if (read_cache_unmerged() && (opts.prefix || opts.merge))
			die("You need to resolve your current index first");
		stage = opts.merge = 1;
	}

	for (i = 0; i < argc; i++) {
		const char *arg = argv[i];
