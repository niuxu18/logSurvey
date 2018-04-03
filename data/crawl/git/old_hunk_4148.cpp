	return NULL;
}

static dev_t get_device_or_die(const char *path, const char *prefix)
{
	struct stat buf;
	if (stat(path, &buf))
		die_errno("failed to stat '%s%s%s'",
				prefix ? prefix : "",
				prefix ? "/" : "", path);
	return buf.st_dev;
}

