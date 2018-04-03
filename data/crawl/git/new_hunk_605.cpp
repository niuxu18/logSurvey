		n = xmalloc(sizeof(*n));
		s = lookup_branch(from);
		if (s)
			oidcpy(&n->oid, &s->oid);
		else if (*from == ':') {
			uintmax_t idnum = parse_mark_ref_eol(from);
			struct object_entry *oe = find_mark(idnum);
			if (oe->type != OBJ_COMMIT)
				die("Mark :%" PRIuMAX " not a commit", idnum);
			hashcpy(n->oid.hash, oe->idx.sha1);
		} else if (!get_sha1(from, n->oid.hash)) {
			unsigned long size;
			char *buf = read_object_with_reference(n->oid.hash,
							       commit_type,
							       &size,
							       n->oid.hash);
			if (!buf || size < 46)
				die("Not a valid commit: %s", from);
			free(buf);
