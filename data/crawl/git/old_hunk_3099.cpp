	 * is a good one.
	 */
	git_config_early(fn, NULL, repo_config);
	if (GIT_REPO_VERSION < repository_format_version) {
		if (!nongit_ok)
			die ("Expected git repo version <= %d, found %d",
			     GIT_REPO_VERSION, repository_format_version);
		warning("Expected git repo version <= %d, found %d",
			GIT_REPO_VERSION, repository_format_version);
		warning("Please upgrade Git");
		*nongit_ok = -1;
		ret = -1;
	}
	strbuf_release(&sb);
	return ret;
}