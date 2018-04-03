		die("replacement %s not found for %s",
		    sha1_to_hex(repl), sha1_to_hex(sha1));

	if (!stat_sha1_file(repl, &st, &path))
		die("loose object %s (stored in %s) is corrupt",
		    sha1_to_hex(repl), path);

	if ((p = has_packed_and_bad(repl)) != NULL)
		die("packed object %s (stored in %s) is corrupt",
