		if (get_sha1(split[1]->buf, to_obj))
			die("Failed to resolve '%s' as a valid ref.", split[1]->buf);

		err = copy_note(t, from_obj, to_obj, force, combine_notes_overwrite);

		if (err) {
			error("Failed to copy notes from '%s' to '%s'",