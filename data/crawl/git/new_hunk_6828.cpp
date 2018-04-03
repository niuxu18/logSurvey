		die("Usage: %s <base>... -- <head> <remote> ...\n", argv[0]);

	for (i = 1; i < argc; ++i) {
		if (!strcmp(argv[i], "--")) {
			bases[bases_count] = NULL;
			break;
		}
		if (bases_count < ARRAY_SIZE(bases)-1)
			bases[bases_count++] = argv[i];
		else
			warning("Cannot handle more than %zu bases. "
				"Ignoring %s.", ARRAY_SIZE(bases)-1, argv[i]);
	}
	if (argc - i != 3) /* "--" "<head>" "<remote>" */
		die("Not handling anything other than two heads merge.");

	branch1 = argv[++i];
	branch2 = argv[++i];

	if (get_sha1(branch1, h1))
		die("Could not resolve ref '%s'", branch1);
	if (get_sha1(branch2, h2))
		die("Could not resolve ref '%s'", branch2);

	branch1 = better_branch_name(branch1);
	branch2 = better_branch_name(branch2);

	if (merge_recursive_verbosity >= 3)
		printf("Merging %s with %s\n", branch1, branch2);

	failed = merge_recursive_generic(bases, h1, branch1, h2, branch2);
	if (failed < 0)
		return 128; /* die() error code */
	return failed;
}