	packfile = fopen(tmpfile, "a");
	if (!packfile)
		return error("Unable to open local file %s for pack",
			     filename);

	slot = get_active_slot();
	slot->results = &results;
