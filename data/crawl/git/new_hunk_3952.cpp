		int err = reset_index(sha1, reset_type, quiet);
		if (reset_type == KEEP && !err)
			err = reset_index(sha1, MIXED, quiet);
		if (err)
			die(_("Could not reset index file to revision '%s'."), rev);
		if (write_cache(newfd, active_cache, active_nr) ||
		    commit_locked_index(lock))
			die(_("Could not write new index file."));
	}

	/* Any resets update HEAD to the head being switched to,