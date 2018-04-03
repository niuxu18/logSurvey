	prefix = cmd_prefix;
	if (prefix)
		prefix_len = strlen(prefix);
	super_prefix = get_super_prefix();
	git_config(git_default_config, NULL);

	if (read_cache() < 0)
		die("index file corrupt");

	argc = parse_options(argc, argv, prefix, builtin_ls_files_options,
