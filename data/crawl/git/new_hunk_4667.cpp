		active_cache_tree = cache_tree();
	if (cache_tree_update(active_cache_tree,
			      active_cache, active_nr, 0, 0) < 0) {
		error(_("Error building trees"));
		return 0;
	}
