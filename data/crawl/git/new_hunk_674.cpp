	}

	if (!strcmp("http.postbuffer", var)) {
		http_post_buffer = git_config_ssize_t(var, value);
		if (http_post_buffer < 0)
			warning(_("negative value for http.postbuffer; defaulting to %d"), LARGE_PACKET_MAX);
		if (http_post_buffer < LARGE_PACKET_MAX)
			http_post_buffer = LARGE_PACKET_MAX;
		return 0;
