	bundle_to_stdout = !strcmp(path, "-");
	if (bundle_to_stdout)
		bundle_fd = 1;
	else
		bundle_fd = hold_lock_file_for_update(&lock, path,
						      LOCK_DIE_ON_ERROR);

	/* write signature */
	write_or_die(bundle_fd, bundle_signature, strlen(bundle_signature));
