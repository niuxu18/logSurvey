	struct patch *previous;
	int status;

	previous = previous_patch(state, patch, &status);
	if (status)
		return error(_("path %s has been renamed/deleted"),
			     patch->old_name);
	if (previous) {
		/* We have a patched copy in memory; use that. */
		strbuf_add(&buf, previous->result, previous->resultsize);
	} else {
		status = load_patch_target(state, &buf, ce, st,
					   patch->old_name, patch->old_mode);
		if (status < 0)
			return status;
