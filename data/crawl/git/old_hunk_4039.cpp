{
	if (svndump_init(NULL))
		return 1;
	svndump_read((argc > 1) ? argv[1] : NULL, "refs/heads/master");
	svndump_deinit();
	svndump_reset();
	return 0;
