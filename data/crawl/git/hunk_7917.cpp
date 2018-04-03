 		return NULL;
 	}
 
-	if (pipe(pipefd[0]) < 0 || pipe(pipefd[1]) < 0)
-		die("unable to create pipe pair for communication");
 	conn = xcalloc(1, sizeof(*conn));
-	conn->pid = fork();
-	if (conn->pid < 0)
-		die("unable to fork");
-	if (!conn->pid) {
-		struct strbuf cmd;
-
-		strbuf_init(&cmd, MAX_CMD_LEN);
-		strbuf_addstr(&cmd, prog);
-		strbuf_addch(&cmd, ' ');
-		sq_quote_buf(&cmd, path);
-		if (cmd.len >= MAX_CMD_LEN)
-			die("command line too long");
-
-		dup2(pipefd[1][0], 0);
-		dup2(pipefd[0][1], 1);
-		close(pipefd[0][0]);
-		close(pipefd[0][1]);
-		close(pipefd[1][0]);
-		close(pipefd[1][1]);
-		if (protocol == PROTO_SSH) {
-			const char *ssh, *ssh_basename;
-			ssh = getenv("GIT_SSH");
-			if (!ssh) ssh = "ssh";
-			ssh_basename = strrchr(ssh, '/');
-			if (!ssh_basename)
-				ssh_basename = ssh;
-			else
-				ssh_basename++;
 
-			if (!port)
-				execlp(ssh, ssh_basename, host, cmd.buf, NULL);
-			else
-				execlp(ssh, ssh_basename, "-p", port, host,
-				       cmd.buf, NULL);
+	strbuf_init(&cmd, MAX_CMD_LEN);
+	strbuf_addstr(&cmd, prog);
+	strbuf_addch(&cmd, ' ');
+	sq_quote_buf(&cmd, path);
+	if (cmd.len >= MAX_CMD_LEN)
+		die("command line too long");
+
+	conn->in = conn->out = -1;
+	conn->argv = arg = xcalloc(6, sizeof(*arg));
+	if (protocol == PROTO_SSH) {
+		const char *ssh = getenv("GIT_SSH");
+		if (!ssh) ssh = "ssh";
+
+		*arg++ = ssh;
+		if (port) {
+			*arg++ = "-p";
+			*arg++ = port;
 		}
-		else {
-			unsetenv(ALTERNATE_DB_ENVIRONMENT);
-			unsetenv(DB_ENVIRONMENT);
-			unsetenv(GIT_DIR_ENVIRONMENT);
-			unsetenv(GIT_WORK_TREE_ENVIRONMENT);
-			unsetenv(GRAFT_ENVIRONMENT);
-			unsetenv(INDEX_ENVIRONMENT);
-			execlp("sh", "sh", "-c", cmd.buf, NULL);
-		}
-		die("exec failed");
+		*arg++ = host;
+	}
+	else {
+		/* remove these from the environment */
+		const char *env[] = {
+			ALTERNATE_DB_ENVIRONMENT,
+			DB_ENVIRONMENT,
+			GIT_DIR_ENVIRONMENT,
+			GIT_WORK_TREE_ENVIRONMENT,
+			GRAFT_ENVIRONMENT,
+			INDEX_ENVIRONMENT,
+			NULL
+		};
+		conn->env = env;
+		*arg++ = "sh";
+		*arg++ = "-c";
 	}
-	fd[0] = pipefd[0][0];
-	fd[1] = pipefd[1][1];
-	close(pipefd[0][1]);
-	close(pipefd[1][0]);
+	*arg++ = cmd.buf;
+	*arg = NULL;
+
+	if (start_command(conn))
+		die("unable to fork");
+
+	fd[0] = conn->out; /* read from child's stdout */
+	fd[1] = conn->in;  /* write to child's stdin */
+	strbuf_release(&cmd);
 	if (free_path)
 		free(path);
 	return conn;
 }
 
 int finish_connect(struct child_process *conn)
 {
+	int code;
 	if (!conn)
 		return 0;
 
-	while (waitpid(conn->pid, NULL, 0) < 0) {
-		if (errno != EINTR)
-			return -1;
-	}
+	code = finish_command(conn);
+	free(conn->argv);
 	free(conn);
-	return 0;
+	return code;
 }