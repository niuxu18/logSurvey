/*
 * Try to read the location of the git directory from the .git file,
 * return path to git directory if found.
 */
const char *read_gitfile(const char *path)
{
	char *buf;
	char *dir;
	const char *slash;
	struct stat st;
	int fd;
	ssize_t len;

	if (stat(path, &st))
		return NULL;
	if (!S_ISREG(st.st_mode))
		return NULL;
	fd = open(path, O_RDONLY);
	if (fd < 0)
		die_errno("Error opening '%s'", path);
	buf = xmalloc(st.st_size + 1);
	len = read_in_full(fd, buf, st.st_size);
	close(fd);
	if (len != st.st_size)
		die("Error reading %s", path);
	buf[len] = '\0';
	if (!starts_with(buf, "gitdir: "))
		die("Invalid gitfile format: %s", path);
	while (buf[len - 1] == '\n' || buf[len - 1] == '\r')
		len--;
	if (len < 9)
		die("No path in gitfile: %s", path);
	buf[len] = '\0';
	dir = buf + 8;

