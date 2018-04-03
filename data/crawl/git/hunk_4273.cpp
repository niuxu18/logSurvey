+#include "cache.h"
+#include "credential.h"
+#include "string-list.h"
+#include "parse-options.h"
+#include "unix-socket.h"
+#include "run-command.h"
+
+#define FLAG_SPAWN 0x1
+#define FLAG_RELAY 0x2
+
+static int send_request(const char *socket, const struct strbuf *out)
+{
+	int got_data = 0;
+	int fd = unix_stream_connect(socket);
+
+	if (fd < 0)
+		return -1;
+
+	if (write_in_full(fd, out->buf, out->len) < 0)
+		die_errno("unable to write to cache daemon");
+	shutdown(fd, SHUT_WR);
+
+	while (1) {
+		char in[1024];
+		int r;
+
+		r = read_in_full(fd, in, sizeof(in));
+		if (r == 0)
+			break;
+		if (r < 0)
+			die_errno("read error from cache daemon");
+		write_or_die(1, in, r);
+		got_data = 1;
+	}
+	return got_data;
+}
+
+static void spawn_daemon(const char *socket)
+{
+	struct child_process daemon;
+	const char *argv[] = { NULL, NULL, NULL };
+	char buf[128];
+	int r;
+
+	memset(&daemon, 0, sizeof(daemon));
+	argv[0] = "git-credential-cache--daemon";
+	argv[1] = socket;
+	daemon.argv = argv;
+	daemon.no_stdin = 1;
+	daemon.out = -1;
+
+	if (start_command(&daemon))
+		die_errno("unable to start cache daemon");
+	r = read_in_full(daemon.out, buf, sizeof(buf));
+	if (r < 0)
+		die_errno("unable to read result code from cache daemon");
+	if (r != 3 || memcmp(buf, "ok\n", 3))
+		die("cache daemon did not start: %.*s", r, buf);
+	close(daemon.out);
+}
+
+static void do_cache(const char *socket, const char *action, int timeout,
+		     int flags)
+{
+	struct strbuf buf = STRBUF_INIT;
+
+	strbuf_addf(&buf, "action=%s\n", action);
+	strbuf_addf(&buf, "timeout=%d\n", timeout);
+	if (flags & FLAG_RELAY) {
+		if (strbuf_read(&buf, 0, 0) < 0)
+			die_errno("unable to relay credential");
+	}
+
+	if (!send_request(socket, &buf))
+		return;
+	if (flags & FLAG_SPAWN) {
+		spawn_daemon(socket);
+		send_request(socket, &buf);
+	}
+	strbuf_release(&buf);
+}
+
+int main(int argc, const char **argv)
+{
+	char *socket_path = NULL;
+	int timeout = 900;
+	const char *op;
+	const char * const usage[] = {
+		"git credential-cache [options] <action>",
+		NULL
+	};
+	struct option options[] = {
+		OPT_INTEGER(0, "timeout", &timeout,
+			    "number of seconds to cache credentials"),
+		OPT_STRING(0, "socket", &socket_path, "path",
+			   "path of cache-daemon socket"),
+		OPT_END()
+	};
+
+	argc = parse_options(argc, argv, NULL, options, usage, 0);
+	if (!argc)
+		usage_with_options(usage, options);
+	op = argv[0];
+
+	if (!socket_path)
+		socket_path = expand_user_path("~/.git-credential-cache/socket");
+	if (!socket_path)
+		die("unable to find a suitable socket path; use --socket");
+
+	if (!strcmp(op, "exit"))
+		do_cache(socket_path, op, timeout, 0);
+	else if (!strcmp(op, "get") || !strcmp(op, "erase"))
+		do_cache(socket_path, op, timeout, FLAG_RELAY);
+	else if (!strcmp(op, "store"))
+		do_cache(socket_path, op, timeout, FLAG_RELAY|FLAG_SPAWN);
+	else
+		; /* ignore unknown operation */
+
+	return 0;
+}
