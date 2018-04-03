	 */
	signal(SIGCHLD, SIG_DFL);

	protocol = parse_connect_url(url, &host, &path);
	if (flags & CONNECT_DIAG_URL) {
		printf("Diag: url=%s\n", url ? url : "NULL");
		printf("Diag: protocol=%s\n", prot_name(protocol));
		printf("Diag: hostandport=%s\n", host ? host : "NULL");
		printf("Diag: path=%s\n", path ? path : "NULL");
		free(host);
		free(path);
		return NULL;
	}

	if (protocol == PROTO_GIT) {
		/* These underlying connection commands die() if they
		 * cannot connect.
		 */
		char *target_host = xstrdup(host);
		if (git_use_proxy(host))
			conn = git_proxy_connect(fd, host);
		else
			git_tcp_connect(fd, host, flags);
		/*
		 * Separate original protocol components prog and path
		 * from extended host header with a NUL byte.
