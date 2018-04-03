

static char *
errorLoadText(const char *page_name)
{
    /* test configured location */
    char *text = errorTryLoadText(page_name, Config.errorDirectory);
    /* test default location if failed */
    if (!text && strcmp(Config.errorDirectory, DEFAULT_SQUID_ERROR_DIR))
	text = errorTryLoadText(page_name, DEFAULT_SQUID_ERROR_DIR);
    /* giving up if failed */
    if (!text)
	fatal("failed to find or read error text file.");
    return text;
}

static char *
errorTryLoadText(const char *page_name, const char *dir)
{
    int fd;
    char path[MAXPATHLEN];
    struct stat sb;
    char *text;

    snprintf(path, MAXPATHLEN, "%s/%s",
	dir, page_name);
    fd = file_open(path, O_RDONLY, NULL, NULL, NULL);
    if (fd < 0 || fstat(fd, &sb) < 0) {
	debug(4, 0) ("errorTryLoadText: '%s': %s\n", path, xstrerror());
