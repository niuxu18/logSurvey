	struct ref_list references;
};

/* this function returns the length of the string */
static int read_string(int fd, char *buffer, int size)
{
	int i;
	for (i = 0; i < size - 1; i++) {
		ssize_t count = xread(fd, buffer + i, 1);
		if (count < 0)
			return error("Read error: %s", strerror(errno));
		if (count == 0) {
			i--;
			break;
		}
		if (buffer[i] == '\n')
			break;
	}
	buffer[i + 1] = '\0';
	return i + 1;
}

/* returns an fd */
static int read_header(const char *path, struct bundle_header *header) {
	char buffer[1024];
	int fd = open(path, O_RDONLY);

	if (fd < 0)
		return error("could not open '%s'", path);
	if (read_string(fd, buffer, sizeof(buffer)) < 0 ||
			strcmp(buffer, bundle_signature)) {
		close(fd);
		return error("'%s' does not look like a v2 bundle file", path);
	}
	while (read_string(fd, buffer, sizeof(buffer)) > 0
			&& buffer[0] != '\n') {
		int is_prereq = buffer[0] == '-';
		int offset = is_prereq ? 1 : 0;
