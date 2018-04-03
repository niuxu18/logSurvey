static int lock_file(struct lock_file *lk, const char *path)
{
	int fd;
	struct stat st;

	if ((!lstat(path, &st)) && S_ISLNK(st.st_mode)) {
		ssize_t sz;
		static char target[PATH_MAX];
		sz = readlink(path, target, sizeof(target));
		if (sz < 0)
			warning("Cannot readlink %s", path);
		else if (target[0] != '/')
			warning("Cannot lock target of relative symlink %s", path);
		else
			path = target;
	}
	sprintf(lk->filename, "%s.lock", path);
	fd = open(lk->filename, O_RDWR | O_CREAT | O_EXCL, 0666);
	if (0 <= fd) {