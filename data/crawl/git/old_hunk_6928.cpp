		if (len == 0)
			break;	/* got a flush */
		if (sent_argc > MAX_ARGS - 2)
			die("Too many options (>29)");

		if (p[len-1] == '\n') {
			p[--len] = 0;