	envw = xstrdup(env);

	if (sq_dequote_to_argv(envw, &argv, &nr, &alloc) < 0) {
		free(envw);
		return error("bogus format in " CONFIG_DATA_ENVIRONMENT);
	}

	for (i = 0; i < nr; i++) {
		if (git_config_parse_parameter(argv[i], fn, data) < 0) {
			free(argv);
			free(envw);
			return -1;
		}
	}

	free(argv);
	free(envw);
	return 0;
}

static int get_next_char(void)