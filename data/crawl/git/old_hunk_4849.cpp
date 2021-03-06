	 * but handles the potential overflow case specially (and we
	 * assume at least 32-bit integers)
	 */
	if (rename_limit <= 0 || rename_limit > 32767)
		rename_limit = 32767;
	if ((num_create > rename_limit && num_src > rename_limit) ||
	    (num_create * num_src > rename_limit * rename_limit)) {
		if (options->warn_on_too_large_rename)
			warning("too many files (created: %d deleted: %d), skipping inexact rename detection", num_create, num_src);
		goto cleanup;
	}

