		} else if (0 <= sha1_array_lookup(&skipped_revs, mb)) {
			handle_skipped_merge_base(mb);
		} else {
			printf(_("Bisecting: a merge base must be tested\n"));
			exit(bisect_checkout(mb, no_checkout));
		}
	}
