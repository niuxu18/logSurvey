	}

	if (!initialized) {
		const struct string_list *deprecated_prereleases;
		initialized = 1;
		prereleases = git_config_get_value_multi("versionsort.suffix");
		deprecated_prereleases = git_config_get_value_multi("versionsort.prereleasesuffix");
		if (prereleases) {
			if (deprecated_prereleases)
				warning("ignoring versionsort.prereleasesuffix because versionsort.suffix is set");
		} else
			prereleases = deprecated_prereleases;
	}
	if (prereleases && swap_prereleases(s1, s2, (const char *) p1 - s1 - 1,
					    &diff))