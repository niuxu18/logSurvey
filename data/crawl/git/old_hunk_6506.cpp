	if (list + delete + verify > 1)
		usage_with_options(git_tag_usage, options);
	if (list)
		return list_tags(argv[0], lines == -1 ? 0 : lines);
	if (lines != -1)
		die("-n option is only allowed with -l.");
	if (delete)
		return for_each_tag_name(argv, delete_tag);
	if (verify)