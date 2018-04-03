				     git_notes_list_usage, 0);

	if (1 < argc) {
		error(_("too many parameters"));
		usage_with_options(git_notes_list_usage, options);
	}

	t = init_notes_check("list");
	if (argc) {
		if (get_sha1(argv[0], object))
			die(_("Failed to resolve '%s' as a valid ref."), argv[0]);
		note = get_note(t, object);
		if (note) {
			puts(sha1_to_hex(note));
			retval = 0;
		} else
			retval = error(_("No note found for object %s."),
				       sha1_to_hex(object));
	} else
		retval = for_each_note(t, 0, list_each_note, NULL);
