	int fd;
	fd = open(path, O_RDONLY);
	if (fd < 0)
		die("Cannot open %s", path);
	hash_fd(fd, type, write_object, vpath);
}

