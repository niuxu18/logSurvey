	 * like "git format-patch -o a123 HEAD^.." may fail; a123 is
	 * possibly a valid SHA1.
	 */
	for (i = 1, j = 1; i < argc; i++) {
		if (!strcmp(argv[i], "--stdout"))
			use_stdout = 1;
		else if (!strcmp(argv[i], "-n") ||
				!strcmp(argv[i], "--numbered"))
			numbered = 1;
		else if (!strcmp(argv[i], "-N") ||
				!strcmp(argv[i], "--no-numbered")) {
			numbered = 0;
			auto_number = 0;
		}
		else if (!prefixcmp(argv[i], "--start-number="))
			start_number = strtol(argv[i] + 15, NULL, 10);
		else if (!strcmp(argv[i], "--numbered-files"))
			numbered_files = 1;
		else if (!strcmp(argv[i], "--start-number")) {
			i++;
			if (i == argc)
				die("Need a number for --start-number");
			start_number = strtol(argv[i], NULL, 10);
		}
		else if (!prefixcmp(argv[i], "--cc=")) {
			ALLOC_GROW(extra_cc, extra_cc_nr + 1, extra_cc_alloc);
			extra_cc[extra_cc_nr++] = xstrdup(argv[i] + 5);
		}
		else if (!strcmp(argv[i], "-k") ||
				!strcmp(argv[i], "--keep-subject")) {
			keep_subject = 1;
			rev.total = -1;
		}
		else if (!strcmp(argv[i], "--output-directory") ||
			 !strcmp(argv[i], "-o")) {
			i++;
			if (argc <= i)
				die("Which directory?");
			if (output_directory)
				die("Two output directories?");
			output_directory = argv[i];
		}
		else if (!strcmp(argv[i], "--signoff") ||
			 !strcmp(argv[i], "-s")) {
			do_signoff = 1;
		}
		else if (!strcmp(argv[i], "--attach")) {
			rev.mime_boundary = git_version_string;
			rev.no_inline = 1;
		}
		else if (!prefixcmp(argv[i], "--attach=")) {
			rev.mime_boundary = argv[i] + 9;
			rev.no_inline = 1;
		}
		else if (!strcmp(argv[i], "--no-attach")) {
			rev.mime_boundary = NULL;
			rev.no_inline = 0;
		}
		else if (!strcmp(argv[i], "--inline")) {
			rev.mime_boundary = git_version_string;
			rev.no_inline = 0;
		}
		else if (!prefixcmp(argv[i], "--inline=")) {
			rev.mime_boundary = argv[i] + 9;
			rev.no_inline = 0;
		}
		else if (!strcmp(argv[i], "--ignore-if-in-upstream"))
			ignore_if_in_upstream = 1;
		else if (!strcmp(argv[i], "--thread")
			|| !strcmp(argv[i], "--thread=shallow"))
			thread = THREAD_SHALLOW;
		else if (!strcmp(argv[i], "--thread=deep"))
			thread = THREAD_DEEP;
		else if (!strcmp(argv[i], "--no-thread"))
			thread = 0;
		else if (!prefixcmp(argv[i], "--in-reply-to="))
			in_reply_to = argv[i] + 14;
		else if (!strcmp(argv[i], "--in-reply-to")) {
			i++;
			if (i == argc)
				die("Need a Message-Id for --in-reply-to");
			in_reply_to = argv[i];
		} else if (!prefixcmp(argv[i], "--subject-prefix=")) {
			subject_prefix = 1;
			rev.subject_prefix = argv[i] + 17;
		} else if (!prefixcmp(argv[i], "--suffix="))
			fmt_patch_suffix = argv[i] + 9;
		else if (!strcmp(argv[i], "--cover-letter"))
			cover_letter = 1;
		else if (!strcmp(argv[i], "--no-binary"))
			no_binary_diff = 1;
		else if (!prefixcmp(argv[i], "--add-header="))
			add_header(argv[i] + 13);
		else
			argv[j++] = argv[i];
	}
	argc = j;

	if (do_signoff) {
		const char *committer;