	lock = xcalloc(sizeof(struct lock_file), 1);
	fd = hold_lock_file_for_update(lock, config_filename, 0);
	if (fd < 0) {
		fprintf(stderr, "could not lock config file\n");
		free(store.key);
		ret = -1;
		goto out_free;
