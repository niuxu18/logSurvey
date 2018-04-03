		path = git_pathdup("TAG_EDITMSG");
		fd = open(path, O_CREAT | O_TRUNC | O_WRONLY, 0600);
		if (fd < 0)
			die("could not create file '%s': %s",
						path, strerror(errno));

		if (!is_null_sha1(prev))
			write_tag_body(fd, prev);
