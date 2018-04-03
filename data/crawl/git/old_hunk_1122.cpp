		if (MAX_REVS <= num_rev)
			die("cannot handle more than %d revs.", MAX_REVS);
		if (get_sha1(ref_name[num_rev], revkey.hash))
			die("'%s' is not a valid ref.", ref_name[num_rev]);
		commit = lookup_commit_reference(revkey.hash);
		if (!commit)
			die("cannot find commit %s (%s)",
			    ref_name[num_rev], oid_to_hex(&revkey));
		parse_commit(commit);
		mark_seen(commit, &seen);