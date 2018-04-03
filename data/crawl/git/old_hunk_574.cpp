	if (s) {
		if (is_null_oid(&s->oid))
			die("Can't add a note on empty branch.");
		hashcpy(commit_sha1, s->oid.hash);
	} else if (*p == ':') {
		uintmax_t commit_mark = parse_mark_ref_eol(p);
		struct object_entry *commit_oe = find_mark(commit_mark);
		if (commit_oe->type != OBJ_COMMIT)
			die("Mark :%" PRIuMAX " not a commit", commit_mark);
		hashcpy(commit_sha1, commit_oe->idx.sha1);
	} else if (!get_sha1(p, commit_sha1)) {
		unsigned long size;
		char *buf = read_object_with_reference(commit_sha1,
			commit_type, &size, commit_sha1);
		if (!buf || size < 46)
			die("Not a valid commit: %s", p);
		free(buf);
