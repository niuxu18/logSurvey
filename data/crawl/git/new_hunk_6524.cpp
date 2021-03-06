#endif
	return ret;
}

int run_hook(const char *index_file, const char *name, ...)
{
	struct child_process hook;
	const char *argv[10], *env[2];
	char index[PATH_MAX];
	va_list args;
	int ret;
	int i;

	va_start(args, name);
	argv[0] = git_path("hooks/%s", name);
	i = 0;
	do {
		if (++i >= ARRAY_SIZE(argv))
			die("run_hook(): too many arguments");
		argv[i] = va_arg(args, const char *);
	} while (argv[i]);
	va_end(args);

	if (access(argv[0], X_OK) < 0)
		return 0;

	memset(&hook, 0, sizeof(hook));
	hook.argv = argv;
	hook.no_stdin = 1;
	hook.stdout_to_stderr = 1;
	if (index_file) {
		snprintf(index, sizeof(index), "GIT_INDEX_FILE=%s", index_file);
		env[0] = index;
		env[1] = NULL;
		hook.env = env;
	}

	ret = start_command(&hook);
	if (ret) {
		warning("Could not spawn %s", argv[0]);
		return ret;
	}
	ret = finish_command(&hook);
	if (ret == -ERR_RUN_COMMAND_WAITPID_SIGNAL)
		warning("%s exited due to uncaught signal", argv[0]);

	return ret;
}
