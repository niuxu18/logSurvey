{
	if (err == ENOENT || err == ENOTDIR)
		return remove_one_path(path);
	return error("lstat(\"%s\"): %s", path, strerror(err));
}

static int add_one_path(const struct cache_entry *old, const char *path, int len, struct stat *st)