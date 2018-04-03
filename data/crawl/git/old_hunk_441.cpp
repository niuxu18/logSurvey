		return -1;
	}

	dotdot = strstr(arg, "..");
	if (dotdot) {
		unsigned char from_sha1[20];
		const char *next = dotdot + 2;
		const char *this = arg;
		int symmetric = *next == '.';
		unsigned int flags_exclude = flags ^ (UNINTERESTING | BOTTOM);
		unsigned int a_flags;

		*dotdot = 0;
		next += symmetric;

		if (!*next)
			next = "HEAD";
		if (dotdot == arg)
			this = "HEAD";
		if (!get_sha1_committish(this, from_sha1) &&
		    !get_sha1_committish(next, sha1)) {
			struct object *a_obj, *b_obj;

			if (!cant_be_filename) {
				*dotdot = '.';
				verify_non_filename(revs->prefix, arg);
				*dotdot = '\0';
			}

			a_obj = parse_object(from_sha1);
			b_obj = parse_object(sha1);
			if (!a_obj || !b_obj) {
			missing:
				*dotdot = '.';
				if (revs->ignore_missing)
					return 0;
				die(symmetric
				    ? "Invalid symmetric difference expression %s"
				    : "Invalid revision range %s", arg);
			}

			if (!symmetric) {
				/* just A..B */
				a_flags = flags_exclude;
			} else {
				/* A...B -- find merge bases between the two */
				struct commit *a, *b;
				struct commit_list *exclude;

				a = lookup_commit_reference(a_obj->oid.hash);
				b = lookup_commit_reference(b_obj->oid.hash);
				if (!a || !b)
					goto missing;
				exclude = get_merge_bases(a, b);
				add_rev_cmdline_list(revs, exclude,
						     REV_CMD_MERGE_BASE,
						     flags_exclude);
				add_pending_commit_list(revs, exclude,
							flags_exclude);
				free_commit_list(exclude);

				a_flags = flags | SYMMETRIC_LEFT;
			}

			a_obj->flags |= a_flags;
			b_obj->flags |= flags;
			add_rev_cmdline(revs, a_obj, this,
					REV_CMD_LEFT, a_flags);
			add_rev_cmdline(revs, b_obj, next,
					REV_CMD_RIGHT, flags);
			add_pending_object(revs, a_obj, this);
			add_pending_object(revs, b_obj, next);
			*dotdot = '.';
			return 0;
		}
		*dotdot = '.';
	}

	mark = strstr(arg, "^@");
	if (mark && !mark[2]) {