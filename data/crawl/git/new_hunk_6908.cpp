
		fprintf(fp,
			"\n"
			"# Please enter the commit message for your changes.");
		if (cleanup_mode == CLEANUP_ALL)
			fprintf(fp,
				" Lines starting\n"
				"# with '#' will be ignored, and an empty"
				" message aborts the commit.\n");
		else /* CLEANUP_SPACE, that is. */
			fprintf(fp,
				" Lines starting\n"
				"# with '#' will be kept; you may remove them"
				" yourself if you want to.\n"
				"# An empty message aborts the commit.\n");
		if (only_include_assumed)
			fprintf(fp, "# %s\n", only_include_assumed);
