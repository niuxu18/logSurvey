	 * Spawn cmd and feed the buffer contents through its stdin.
	 */
	struct child_process child_process;
	int write_err, status;
	const char *argv[] = { "sh", "-c", cmd, NULL };

	memset(&child_process, 0, sizeof(child_process));
	child_process.argv = argv;
	child_process.in = -1;

	if (start_command(&child_process))
		return error("cannot fork to run external filter %s", cmd);

	write_err = (write_in_full(child_process.in, src, size) < 0);
	if (close(child_process.in))
		write_err = 1;
	if (write_err)
		error("cannot feed the input to external filter %s", cmd);