	ce = active_cache[pos];
	if (lstat(name, &st)) {
		if (errno != ENOENT)
			return error_errno("%s", name);
		if (checkout_target(&the_index, ce, &st))
			return -1;
	}