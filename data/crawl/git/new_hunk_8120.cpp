		fprintf(stderr, "* %s: storing %s\n",
			name, note);
		show_new(type, sha1_new);
		return update_ref_env(msg, name, sha1_new, NULL);
	}

	if (!hashcmp(sha1_old, sha1_new)) {