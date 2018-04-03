		numbered = 0;

	if (numbered && keep_subject)
		die (_("-n and -k are mutually exclusive."));
	if (keep_subject && subject_prefix)
		die (_("--subject-prefix and -k are mutually exclusive."));

	argc = setup_revisions(argc, argv, &rev, &s_r_opt);
	if (argc > 1)
		die (_("unrecognized argument: %s"), argv[1]);

	if (rev.diffopt.output_format & DIFF_FORMAT_NAME)
		die("--name-only does not make sense");
