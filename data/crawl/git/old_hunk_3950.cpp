	if (pathspec) {
		struct lock_file *lock = xcalloc(1, sizeof(struct lock_file));
		int index_fd = hold_locked_index(lock, 1);
		return read_from_tree(pathspec, sha1) ||
			update_index_refresh(index_fd, lock,
					quiet ? REFRESH_QUIET : REFRESH_IN_PORCELAIN);
	}

	/* Soft reset does not touch the index file nor the working tree
