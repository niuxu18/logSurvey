	diff_opts.rename_score = opt->rename_score;
	paths[0] = NULL;
	diff_tree_setup_paths(paths, &diff_opts);
	diff_setup_done(&diff_opts);
	diff_tree(t1, t2, base, &diff_opts);
	diffcore_std(&diff_opts);
	diff_tree_release_paths(&diff_opts);