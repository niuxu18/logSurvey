	if (!packfile) {
		fprintf(stderr, "Unable to open local file %s for pack",
			request->tmpfile);
		repo->can_update_info_refs = 0;
		free(url);
		return;
	}
