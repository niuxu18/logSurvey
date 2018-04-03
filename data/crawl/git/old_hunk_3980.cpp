		if (write_cache_as_tree(head, 0, NULL))
			die (_("Your index file is unmerged."));
	} else {
		if (get_sha1("HEAD", head))
			return error(_("You do not have a valid HEAD"));
		if (index_differs_from("HEAD", 0))
			return error_dirty_index(opts);
	}
	discard_cache();