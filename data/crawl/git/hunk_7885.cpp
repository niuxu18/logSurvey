 	return builtin_exec_path;
 }
 
+static void add_path(struct strbuf *out, const char *path)
+{
+	if (path && *path) {
+		if (is_absolute_path(path))
+			strbuf_addstr(out, path);
+		else
+			strbuf_addstr(out, make_absolute_path(path));
+
+		strbuf_addch(out, ':');
+	}
+}
+
+void setup_path(const char *cmd_path)
+{
+	const char *old_path = getenv("PATH");
+	struct strbuf new_path;
+
+	strbuf_init(&new_path, 0);
+
+	add_path(&new_path, argv_exec_path);
+	add_path(&new_path, getenv(EXEC_PATH_ENVIRONMENT));
+	add_path(&new_path, builtin_exec_path);
+	add_path(&new_path, cmd_path);
+
+	if (old_path)
+		strbuf_addstr(&new_path, old_path);
+	else
+		strbuf_addstr(&new_path, "/usr/local/bin:/usr/bin:/bin");
+
+	setenv("PATH", new_path.buf, 1);
+
+	strbuf_release(&new_path);
+}
 
 int execv_git_cmd(const char **argv)
 {
-	char git_command[PATH_MAX + 1];
-	int i;
-	const char *paths[] = { argv_exec_path,
-				getenv(EXEC_PATH_ENVIRONMENT),
-				builtin_exec_path };
-
-	for (i = 0; i < ARRAY_SIZE(paths); ++i) {
-		size_t len;
-		int rc;
-		const char *exec_dir = paths[i];
-		const char *tmp;
-
-		if (!exec_dir || !*exec_dir) continue;
-
-		if (*exec_dir != '/') {
-			if (!getcwd(git_command, sizeof(git_command))) {
-				fprintf(stderr, "git: cannot determine "
-					"current directory: %s\n",
-					strerror(errno));
-				break;
-			}
-			len = strlen(git_command);
-
-			/* Trivial cleanup */
-			while (!prefixcmp(exec_dir, "./")) {
-				exec_dir += 2;
-				while (*exec_dir == '/')
-					exec_dir++;
-			}
-
-			rc = snprintf(git_command + len,
-				      sizeof(git_command) - len, "/%s",
-				      exec_dir);
-			if (rc < 0 || rc >= sizeof(git_command) - len) {
-				fprintf(stderr, "git: command name given "
-					"is too long.\n");
-				break;
-			}
-		} else {
-			if (strlen(exec_dir) + 1 > sizeof(git_command)) {
-				fprintf(stderr, "git: command name given "
-					"is too long.\n");
-				break;
-			}
-			strcpy(git_command, exec_dir);
-		}
-
-		len = strlen(git_command);
-		rc = snprintf(git_command + len, sizeof(git_command) - len,
-			      "/git-%s", argv[0]);
-		if (rc < 0 || rc >= sizeof(git_command) - len) {
-			fprintf(stderr,
-				"git: command name given is too long.\n");
-			break;
-		}
+	struct strbuf cmd;
+	const char *tmp;
 
-		/* argv[0] must be the git command, but the argv array
-		 * belongs to the caller, and my be reused in
-		 * subsequent loop iterations. Save argv[0] and
-		 * restore it on error.
-		 */
+	strbuf_init(&cmd, 0);
+	strbuf_addf(&cmd, "git-%s", argv[0]);
 
-		tmp = argv[0];
-		argv[0] = git_command;
+	/*
+	 * argv[0] must be the git command, but the argv array
+	 * belongs to the caller, and may be reused in
+	 * subsequent loop iterations. Save argv[0] and
+	 * restore it on error.
+	 */
+	tmp = argv[0];
+	argv[0] = cmd.buf;
 
-		trace_argv_printf(argv, -1, "trace: exec:");
+	trace_argv_printf(argv, -1, "trace: exec:");
 
-		/* execve() can only ever return if it fails */
-		execve(git_command, (char **)argv, environ);
+	/* execvp() can only ever return if it fails */
+	execvp(cmd.buf, (char **)argv);
 
-		trace_printf("trace: exec failed: %s\n", strerror(errno));
+	trace_printf("trace: exec failed: %s\n", strerror(errno));
 
-		argv[0] = tmp;
-	}
-	return -1;
+	argv[0] = tmp;
 
+	strbuf_release(&cmd);
+
+	return -1;
 }
 
 