		pfd[1].events = POLLIN;
		if (poll(pfd, 2, -1) < 0) {
			if (errno != EINTR) {
				error("poll failed resuming: %s",
				      strerror(errno));
				sleep(1);
			}
			continue;