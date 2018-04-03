		return error("unable to move logfile logs/%s to tmp-renamed-log: %s",
			oldref, strerror(errno));

	if (delete_ref(oldref, orig_sha1)) {
		error("unable to delete old %s", oldref);
		goto rollback;
	}

	if (resolve_ref(newref, sha1, 1, &flag) && delete_ref(newref, sha1)) {
		if (errno==EISDIR) {
			if (remove_empty_directories(git_path("%s", newref))) {
				error("Directory not empty: %s", newref);