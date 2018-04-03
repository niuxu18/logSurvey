		if (!strcmp(ext, "noop"))
			;
		else if (!strcmp(ext, "preciousobjects"))
			repository_format_precious_objects = git_config_bool(var, value);
		else
			string_list_append(&unknown_extensions, ext);
	}
	return 0;
}

static int check_repository_format_gently(const char *gitdir, int *nongit_ok)
{
	struct strbuf sb = STRBUF_INIT;
	const char *repo_config;
	config_fn_t fn;
	int ret = 0;

	string_list_clear(&unknown_extensions, 0);

	if (get_common_dir(&sb, gitdir))
		fn = check_repo_format;
	else
		fn = check_repository_format_version;
	strbuf_addstr(&sb, "/config");
	repo_config = sb.buf;

	/*
	 * Ignore return value; for historical reasons, we must treat a missing
	 * config file as a noop (git-init relies on this).
	 */
	git_config_from_file(fn, repo_config, NULL);
	if (GIT_REPO_VERSION_READ < repository_format_version) {
		if (!nongit_ok)
			die ("Expected git repo version <= %d, found %d",
			     GIT_REPO_VERSION_READ, repository_format_version);
		warning("Expected git repo version <= %d, found %d",
			GIT_REPO_VERSION_READ, repository_format_version);
		warning("Please upgrade Git");
		*nongit_ok = -1;
		ret = -1;
	}

	if (repository_format_version >= 1 && unknown_extensions.nr) {
		int i;

		if (!nongit_ok)
			die("unknown repository extension: %s",
			    unknown_extensions.items[0].string);

		for (i = 0; i < unknown_extensions.nr; i++)
			warning("unknown repository extension: %s",
				unknown_extensions.items[i].string);
		*nongit_ok = -1;
		ret = -1;
	}

	strbuf_release(&sb);
	return ret;
}

/*