#include "cache.h"
#include "builtin.h"
#include "archive.h"
#include "parse-options.h"
#include "pkt-line.h"
#include "sideband.h"

static void create_output_file(const char *output_file)
{
	int output_fd = open(output_file, O_CREAT | O_WRONLY | O_TRUNC, 0666);
	if (output_fd < 0)
		die("could not create archive file: %s ", output_file);
	if (output_fd != 1) {
		if (dup2(output_fd, 1) < 0)
			die("could not redirect output");
		else
			close(output_fd);
	}
}

static int run_remote_archiver(int argc, const char **argv,
			       const char *remote, const char *exec)
{
	char *url, buf[LARGE_PACKET_MAX];
	int fd[2], i, len, rv;
	struct child_process *conn;

	url = xstrdup(remote);
	conn = git_connect(fd, url, exec, 0);

	for (i = 1; i < argc; i++)
		packet_write(fd[1], "argument %s\n", argv[i]);
	packet_flush(fd[1]);

	len = packet_read_line(fd[0], buf, sizeof(buf));