
	if (from_stdin || rewrite_cmd) {
		if (argc) {
			error(_("too many parameters"));
			usage_with_options(git_notes_copy_usage, options);
		} else {
			return notes_copy_from_stdin(force, rewrite_cmd);
		}
	}

	if (argc < 2) {
		error(_("too few parameters"));
		usage_with_options(git_notes_copy_usage, options);
	}
	if (2 < argc) {
		error(_("too many parameters"));
		usage_with_options(git_notes_copy_usage, options);
	}

	if (get_sha1(argv[0], from_obj))
		die(_("Failed to resolve '%s' as a valid ref."), argv[0]);

	object_ref = 1 < argc ? argv[1] : "HEAD";

	if (get_sha1(object_ref, object))
		die(_("Failed to resolve '%s' as a valid ref."), object_ref);

	t = init_notes_check("copy");
	note = get_note(t, object);

	if (note) {
		if (!force) {
			retval = error(_("Cannot copy notes. Found existing "
				       "notes for object %s. Use '-f' to "
				       "overwrite existing notes"),
				       sha1_to_hex(object));
			goto out;
		}
		fprintf(stderr, _("Overwriting existing notes for object %s\n"),
			sha1_to_hex(object));
	}

	from_note = get_note(t, from_obj);
	if (!from_note) {
		retval = error(_("Missing notes on source object %s. Cannot "
			       "copy."), sha1_to_hex(from_obj));
		goto out;
	}

