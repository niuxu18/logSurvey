	paths[1] = NULL;

	diff_tree_setup_paths(paths, &diff_opts);
	if (diff_setup_done(&diff_opts) < 0)
		die("diff-setup");

	if (is_null_sha1(origin->commit->object.sha1))
		do_diff_cache(parent->tree->object.sha1, &diff_opts);