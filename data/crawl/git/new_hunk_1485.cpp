		new = read_blob_entry(ce, &size);
		if (!new)
			return error("unable to read sha1 file of %s (%s)",
				path, oid_to_hex(&ce->oid));

		if (ce_mode_s_ifmt == S_IFLNK && has_symlinks && !to_tempfile) {
			ret = symlink(new, path);
