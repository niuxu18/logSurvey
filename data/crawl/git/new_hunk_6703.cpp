	ce = make_cache_entry(create_ce_mode(active_cache[pos+1]->ce_mode),
			      sha1,
			      path, 2, 0);
	if (!ce)
		die("make_cache_entry failed for path '%s'", path);
	status = checkout_entry(ce, state, NULL);
	return status;
}
