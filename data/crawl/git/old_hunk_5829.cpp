	printf("Squash commit -- not updating HEAD\n");
	fd = open(git_path("SQUASH_MSG"), O_WRONLY | O_CREAT, 0666);
	if (fd < 0)
		die("Could not write to %s", git_path("SQUASH_MSG"));

	init_revisions(&rev, NULL);
	rev.ignore_merges = 1;
