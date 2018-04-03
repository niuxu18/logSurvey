	if (argc > 1)
		die ("unrecognized argument: %s", argv[1]);

	if (use_patch_format)
		rev.diffopt.output_format |= DIFF_FORMAT_PATCH;
	else if (!rev.diffopt.output_format ||
		  rev.diffopt.output_format == DIFF_FORMAT_PATCH)
		rev.diffopt.output_format = DIFF_FORMAT_DIFFSTAT | DIFF_FORMAT_SUMMARY | DIFF_FORMAT_PATCH;

	if (!DIFF_OPT_TST(&rev.diffopt, TEXT) && !no_binary_diff)
		DIFF_OPT_SET(&rev.diffopt, BINARY);