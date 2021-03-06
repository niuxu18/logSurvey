 	return fd;
 }
 
-static void unix_sockaddr_init(struct sockaddr_un *sa, const char *path)
+static int chdir_len(const char *orig, int len)
+{
+	char *path = xmemdupz(orig, len);
+	int r = chdir(path);
+	free(path);
+	return r;
+}
+
+struct unix_sockaddr_context {
+	char orig_dir[PATH_MAX];
+};
+
+static void unix_sockaddr_cleanup(struct unix_sockaddr_context *ctx)
+{
+	if (!ctx->orig_dir[0])
+		return;
+	/*
+	 * If we fail, we can't just return an error, since we have
+	 * moved the cwd of the whole process, which could confuse calling
+	 * code.  We are better off to just die.
+	 */
+	if (chdir(ctx->orig_dir) < 0)
+		die("unable to restore original working directory");
+}
+
+static int unix_sockaddr_init(struct sockaddr_un *sa, const char *path,
+			      struct unix_sockaddr_context *ctx)
 {
 	int size = strlen(path) + 1;
-	if (size > sizeof(sa->sun_path))
-		die("socket path is too long to fit in sockaddr");
+
+	ctx->orig_dir[0] = '\0';
+	if (size > sizeof(sa->sun_path)) {
+		const char *slash = find_last_dir_sep(path);
+		const char *dir;
+
+		if (!slash) {
+			errno = ENAMETOOLONG;
+			return -1;
+		}
+
+		dir = path;
+		path = slash + 1;
+		size = strlen(path) + 1;
+		if (size > sizeof(sa->sun_path)) {
+			errno = ENAMETOOLONG;
+			return -1;
+		}
+
+		if (!getcwd(ctx->orig_dir, sizeof(ctx->orig_dir))) {
+			errno = ENAMETOOLONG;
+			return -1;
+		}
+		if (chdir_len(dir, slash - dir) < 0)
+			return -1;
+	}
+
 	memset(sa, 0, sizeof(*sa));
 	sa->sun_family = AF_UNIX;
 	memcpy(sa->sun_path, path, size);
+	return 0;
 }
 
 int unix_stream_connect(const char *path)
 {
 	int fd;
 	struct sockaddr_un sa;
+	struct unix_sockaddr_context ctx;
 
-	unix_sockaddr_init(&sa, path);
+	if (unix_sockaddr_init(&sa, path, &ctx) < 0)
+		return -1;
 	fd = unix_stream_socket();
 	if (connect(fd, (struct sockaddr *)&sa, sizeof(sa)) < 0) {
+		unix_sockaddr_cleanup(&ctx);
 		close(fd);
 		return -1;
 	}
+	unix_sockaddr_cleanup(&ctx);
 	return fd;
 }
 
 int unix_stream_listen(const char *path)
 {
 	int fd;
 	struct sockaddr_un sa;
+	struct unix_sockaddr_context ctx;
 
-	unix_sockaddr_init(&sa, path);
+	if (unix_sockaddr_init(&sa, path, &ctx) < 0)
+		return -1;
 	fd = unix_stream_socket();
 
 	unlink(path);
 	if (bind(fd, (struct sockaddr *)&sa, sizeof(sa)) < 0) {
+		unix_sockaddr_cleanup(&ctx);
 		close(fd);
 		return -1;
 	}
 
 	if (listen(fd, 5) < 0) {
+		unix_sockaddr_cleanup(&ctx);
 		close(fd);
 		return -1;
 	}
 
+	unix_sockaddr_cleanup(&ctx);
 	return fd;
 }