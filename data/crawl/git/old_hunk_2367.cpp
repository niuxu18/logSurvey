	}

	if (commit_lock_file(lock) < 0) {
		error("could not commit config file %s", config_filename);
		ret = CONFIG_NO_WRITE;
		lock = NULL;
		goto out_free;
