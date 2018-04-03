	return 0;
}

int finish_command(struct child_process *cmd)
{
	if (cmd->close_in)
		close(cmd->in);
	if (cmd->close_out)
		close(cmd->out);

	for (;;) {
		int status, code;
		pid_t waiting = waitpid(cmd->pid, &status, 0);

		if (waiting < 0) {
			if (errno == EINTR)
				continue;
			error("waitpid failed (%s)", strerror(errno));
			return -ERR_RUN_COMMAND_WAITPID;
		}
		if (waiting != cmd->pid)
			return -ERR_RUN_COMMAND_WAITPID_WRONG_PID;
		if (WIFSIGNALED(status))
			return -ERR_RUN_COMMAND_WAITPID_SIGNAL;