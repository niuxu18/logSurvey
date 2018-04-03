		default:
			usage_with_options(builtin_config_usage, builtin_config_options);
		}
	if (omit_values &&
	    !(actions == ACTION_LIST || actions == ACTION_GET_REGEXP)) {
		error("--name-only is only applicable to --list or --get-regexp");
		usage_with_options(builtin_config_usage, builtin_config_options);
	}
	if (actions == ACTION_LIST) {
		check_argc(argc, 0, 0);
		if (git_config_with_options(show_all_config, NULL,
