	if (!merge_names)
		merge_names = &fetch_head_file;

	filename = git_path_fetch_head();
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		die_errno(_("could not open '%s' for reading"), filename);
