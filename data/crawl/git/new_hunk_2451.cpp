		if (unannotated_cnt)
			die(_("No annotated tags can describe '%s'.\n"
			    "However, there were unannotated tags: try --tags."),
			    oid_to_hex(oid));
		else
			die(_("No tags can describe '%s'.\n"
			    "Try --always, or create some tags."),
			    oid_to_hex(oid));
	}

	qsort(all_matches, match_cnt, sizeof(all_matches[0]), compare_pt);
