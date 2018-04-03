	walk_revs_populate_todo(&todo_list, opts);
	if (create_seq_dir() < 0)
		return -1;
	if (get_sha1("HEAD", sha1)) {
		if (opts->action == REPLAY_REVERT)
			return error(_("Can't revert as initial commit"));
		return error(_("Can't cherry-pick into empty head"));
	}
	save_head(sha1_to_hex(sha1));
	save_opts(opts);
	return pick_commits(todo_list, opts);