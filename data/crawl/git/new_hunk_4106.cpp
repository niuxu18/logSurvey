	init_revisions(&rev, NULL);
	rev.diffopt.flags = opts->flags;
	rev.diffopt.output_format |= DIFF_FORMAT_NAME_STATUS;
	diff_setup_done(&rev.diffopt);
	add_pending_object(&rev, head, NULL);
	run_diff_index(&rev, 0);
}
