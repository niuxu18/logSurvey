	strcpy(path, ".merge_file_XXXXXX");
	fd = xmkstemp(path);
	if (write_in_full(fd, buf, size) != size)
		die_errno("unable to write temp-file");
	close(fd);
	return path;
}