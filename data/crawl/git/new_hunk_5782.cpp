	 */
	status = run_command_v_opt(argv, 0);
	if (status != -ERR_RUN_COMMAND_EXEC) {
		if (status < 0)
			die("unable to run '%s'", argv[0]);
		exit(status);
	}
	errno = ENOENT; /* as if we called execvp */

