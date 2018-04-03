	if (!stat(dir, &st)) {
		if (st.st_mode & 077)
			die(permissions_advice, dir);
	} else {
		/*
		 * We must be sure to create the directory with the correct mode,
		 * not just chmod it after the fact; otherwise, there is a race
		 * condition in which somebody can chdir to it, sleep, then try to open
		 * our protected socket.
		 */
		if (safe_create_leading_directories_const(dir) < 0)
			die_errno("unable to create directories for '%s'", dir);
		if (mkdir(dir, 0700) < 0)
			die_errno("unable to mkdir '%s'", dir);
	}
	free(path_copy);
}
