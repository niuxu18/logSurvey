	else
		parent = commit->parents->item;

	if (opts->allow_ff && !is_fixup(command) &&
	    ((parent && !hashcmp(parent->object.oid.hash, head)) ||
	     (!parent && unborn)))
		return fast_forward_to(commit->object.oid.hash, head, unborn, opts);

	if (parent && parse_commit(parent) < 0)
		/* TRANSLATORS: The first %s will be a "todo" command like
		   "revert" or "pick", the second %s a SHA1. */
		return error(_("%s: cannot parse parent commit %s"),
			command_to_string(command),
			oid_to_hex(&parent->object.oid));

	if (get_message(commit, &msg) != 0)
		return error(_("cannot get commit message for %s"),
			oid_to_hex(&commit->object.oid));

	/*
	 * "commit" is an existing commit.  We would want to apply
	 * the difference it introduces since its first parent "prev"
