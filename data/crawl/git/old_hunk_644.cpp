#ifndef GIT_WINDOWS_NATIVE
static int child_notifier = -1;

static void notify_parent(void)
{
	/*
	 * execvp failed.  If possible, we'd like to let start_command
	 * know, so failures like ENOENT can be handled right away; but
	 * otherwise, finish_command will still report the error.
	 */
	xwrite(child_notifier, "", 1);
}

static void prepare_cmd(struct argv_array *out, const struct child_process *cmd)
