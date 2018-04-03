	return service->fn();
}

static void copy_to_log(int fd)
{
	struct strbuf line = STRBUF_INIT;
	FILE *fp;

	fp = fdopen(fd, "r");
	if (fp == NULL) {
		logerror("fdopen of error channel failed");
		close(fd);
		return;
	}

	while (strbuf_getline(&line, fp, '\n') != EOF) {
		logerror("%s", line.buf);
		strbuf_setlen(&line, 0);
	}

	strbuf_release(&line);
	fclose(fp);
}

static int run_service_command(const char **argv)
{
	struct child_process cld;

	memset(&cld, 0, sizeof(cld));
	cld.argv = argv;
	cld.git_cmd = 1;
	cld.err = -1;
	if (start_command(&cld))
		return -1;

	close(0);
	close(1);

	copy_to_log(cld.err);

	return finish_command(&cld);
}

static int upload_pack(void)
{
	/* Timeout as string */
	char timeout_buf[64];
	const char *argv[] = { "upload-pack", "--strict", timeout_buf, ".", NULL };

	snprintf(timeout_buf, sizeof timeout_buf, "--timeout=%u", timeout);
	return run_service_command(argv);
}

static int upload_archive(void)
{
	static const char *argv[] = { "upload-archive", ".", NULL };
	return run_service_command(argv);
}

static int receive_pack(void)
{
	static const char *argv[] = { "receive-pack", ".", NULL };
	return run_service_command(argv);
}

static struct daemon_service daemon_service[] = {