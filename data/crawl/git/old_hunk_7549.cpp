	return 0;
}

static int diff_cache(struct rev_info *revs,
		      struct cache_entry **ac, int entries,
		      const char **pathspec,
		      int cached, int match_missing)
{
	while (entries) {
		struct cache_entry *ce = *ac;
		int same = (entries > 1) && ce_same_name(ce, ac[1]);

		if (DIFF_OPT_TST(&revs->diffopt, QUIET) &&
			DIFF_OPT_TST(&revs->diffopt, HAS_CHANGES))
			break;

		if (!ce_path_match(ce, pathspec))
			goto skip_entry;

		switch (ce_stage(ce)) {
		case 0:
			/* No stage 1 entry? That means it's a new file */
			if (!same) {
				show_new_file(revs, ce, cached, match_missing);
				break;
			}
			/* Show difference between old and new */
			show_modified(revs, ac[1], ce, 1,
				      cached, match_missing);
			break;
		case 1:
			/* No stage 3 (merge) entry?
			 * That means it's been deleted.
			 */
			if (!same) {
				diff_index_show_file(revs, "-", ce,
						     ce->sha1, ce->ce_mode);
				break;
			}
			/* We come here with ce pointing at stage 1
			 * (original tree) and ac[1] pointing at stage
			 * 3 (unmerged).  show-modified with
			 * report-missing set to false does not say the
			 * file is deleted but reports true if work
			 * tree does not have it, in which case we
			 * fall through to report the unmerged state.
			 * Otherwise, we show the differences between
			 * the original tree and the work tree.
			 */
			if (!cached &&
			    !show_modified(revs, ce, ac[1], 0,
					   cached, match_missing))
				break;
			diff_unmerge(&revs->diffopt, ce->name,
				     ce->ce_mode, ce->sha1);
			break;
		case 3:
			diff_unmerge(&revs->diffopt, ce->name,
				     0, null_sha1);
			break;

		default:
			die("impossible cache entry stage");
		}

skip_entry:
		/*
		 * Ignore all the different stages for this file,
		 * we've handled the relevant cases now.
		 */
		do {
			ac++;
			entries--;
		} while (entries && ce_same_name(ce, ac[0]));
	}
	return 0;
}

/*
 * This turns all merge entries into "stage 3". That guarantees that
 * when we read in the new tree (into "stage 1"), we won't lose sight
