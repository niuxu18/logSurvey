		git_config_set(key.buf, "true");
	}

	if (flag & BRANCH_CONFIG_VERBOSE) {
		strbuf_reset(&key);

		strbuf_addstr(&key, origin ? "remote" : "local");

		/* Are we tracking a proper "branch"? */
		if (!prefixcmp(remote, "refs/heads/")) {
			strbuf_addf(&key, " branch %s", remote + 11);
			if (origin)
				strbuf_addf(&key, " from %s", origin);
		}
		else
			strbuf_addf(&key, " ref %s", remote);
		printf("Branch %s set up to track %s%s.\n",
		       local, key.buf,
		       rebasing ? " by rebasing" : "");
	}
	strbuf_release(&key);
}
