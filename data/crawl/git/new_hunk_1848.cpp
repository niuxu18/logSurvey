		 */
		exit_if_skipped_commits(tried, NULL);

		printf(_("%s was both %s and %s\n"),
		       oid_to_hex(current_bad_oid),
		       term_good,
		       term_bad);
		exit(1);
	}

	if (!all) {
		fprintf(stderr, _("No testable commit found.\n"
			"Maybe you started with bad path parameters?\n"));
		exit(4);
	}

