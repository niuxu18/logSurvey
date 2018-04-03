	swap_log_op_str[op],
	storeKeyText(e->key),
	e->swap_file_number);
    s = xcalloc(1, sizeof(storeSwapLogData));
    s->op = (char) op;
    s->swap_file_number = e->swap_file_number;
    s->timestamp = e->timestamp;
    s->lastref = e->lastref;
    s->expires = e->expires;
    s->lastmod = e->lastmod;
    s->swap_file_sz = e->swap_file_sz;
    s->refcount = e->refcount;
    s->flags = e->flags;
    xmemcpy(s->key, e->key, MD5_DIGEST_CHARS);
    file_write(Config.cacheSwap.swapDirs[dirn].swaplog_fd,
	-1,
	s,
	sizeof(storeSwapLogData),
	NULL,
	NULL,
	xfree);
}

char *
storeDirSwapLogFile(int dirn, const char *ext)
{
    LOCAL_ARRAY(char, path, SQUID_MAXPATHLEN);
    LOCAL_ARRAY(char, digit, 32);
    if (Config.Log.swap) {
	xstrncpy(path, Config.Log.swap, SQUID_MAXPATHLEN - 64);
	strcat(path, ".");
	snprintf(digit, 32, "%02d", dirn);
	strncat(path, digit, 3);
    } else {
	xstrncpy(path, storeSwapDir(dirn), SQUID_MAXPATHLEN - 64);
	strcat(path, "/swap.state");
    }
    if (ext)
	strncat(path, ext, 16);
    return path;
}

void
storeDirOpenSwapLogs(void)
{
    int i;
    char *path;
    int fd;
    SwapDir *SD;
    for (i = 0; i < Config.cacheSwap.n_configured; i++) {
	SD = &Config.cacheSwap.swapDirs[i];
	path = storeDirSwapLogFile(i, NULL);
	fd = file_open(path, O_WRONLY | O_CREAT, NULL, NULL, NULL);
	if (fd < 0) {
	    debug(50, 1) ("%s: %s\n", path, xstrerror());
	    fatal("storeDirOpenSwapLogs: Failed to open swap log.");
	}
	debug(47, 3) ("Cache Dir #%d log opened on FD %d\n", i, fd);
	SD->swaplog_fd = fd;
    }
}

void
storeDirCloseSwapLogs(void)
{
    int i;
    SwapDir *SD;
    for (i = 0; i < Config.cacheSwap.n_configured; i++) {
	SD = &Config.cacheSwap.swapDirs[i];
	if (SD->swaplog_fd < 0)	/* not open */
	    continue;
	file_close(SD->swaplog_fd);
	debug(47, 3) ("Cache Dir #%d log closed on FD %d\n", i, SD->swaplog_fd);
	SD->swaplog_fd = -1;
    }
}

FILE *
storeDirOpenTmpSwapLog(int dirn, int *clean_flag, int *zero_flag)
{
    char *swaplog_path = xstrdup(storeDirSwapLogFile(dirn, NULL));
    char *clean_path = xstrdup(storeDirSwapLogFile(dirn, ".last-clean"));
    char *new_path = xstrdup(storeDirSwapLogFile(dirn, ".new"));
    struct stat log_sb;
    struct stat clean_sb;
    SwapDir *SD = &Config.cacheSwap.swapDirs[dirn];
    FILE *fp;
    int fd;
    if (stat(swaplog_path, &log_sb) < 0) {
	debug(47, 1) ("Cache Dir #%d: No log file\n", dirn);
	safe_free(swaplog_path);
	safe_free(clean_path);
	safe_free(new_path);
	return NULL;
    }
    *zero_flag = log_sb.st_size == 0 ? 1 : 0;
    /* close the existing write-only FD */
    if (SD->swaplog_fd >= 0)
	file_close(SD->swaplog_fd);
    /* open a write-only FD for the new log */
    fd = file_open(new_path, O_WRONLY | O_CREAT | O_TRUNC, NULL, NULL, NULL);
    if (fd < 0) {
	debug(50, 1) ("%s: %s\n", new_path, xstrerror());
	fatal("storeDirOpenTmpSwapLog: Failed to open swap log.");
    }
    SD->swaplog_fd = fd;
    /* open a read-only stream of the old log */
    fp = fopen(swaplog_path, "r");
    if (fp == NULL) {
	debug(50, 0) ("%s: %s\n", swaplog_path, xstrerror());
	fatal("Failed to open swap log for reading");
    }
    memset(&clean_sb, '\0', sizeof(struct stat));
    if (stat(clean_path, &clean_sb) < 0)
	*clean_flag = 0;
    else if (clean_sb.st_mtime < log_sb.st_mtime)
	*clean_flag = 0;
    else
	*clean_flag = 1;
    safeunlink(clean_path, 1);
    safe_free(swaplog_path);
    safe_free(clean_path);
    safe_free(new_path);
    return fp;
}

void
storeDirCloseTmpSwapLog(int dirn)
{
    char *swaplog_path = xstrdup(storeDirSwapLogFile(dirn, NULL));
    char *new_path = xstrdup(storeDirSwapLogFile(dirn, ".new"));
    SwapDir *SD = &Config.cacheSwap.swapDirs[dirn];
    int fd;
    file_close(SD->swaplog_fd);
#ifdef _SQUID_OS2_
    if (unlink(swaplog_path) < 0) {
	debug(50, 0) ("%s: %s\n", swaplog_path, xstrerror());
	fatal("storeDirCloseTmpSwapLog: unlink failed");
    }
#endif
    if (rename(new_path, swaplog_path) < 0) {
	debug(50, 0) ("%s,%s: %s\n", new_path, swaplog_path, xstrerror());
	fatal("storeDirCloseTmpSwapLog: rename failed");
    }
    fd = file_open(swaplog_path, O_WRONLY | O_CREAT, NULL, NULL, NULL);
    if (fd < 0) {
	debug(50, 1) ("%s: %s\n", swaplog_path, xstrerror());
	fatal("storeDirCloseTmpSwapLog: Failed to open swap log.");
    }
    safe_free(swaplog_path);
    safe_free(new_path);
    SD->swaplog_fd = fd;
    debug(47, 3) ("Cache Dir #%d log opened on FD %d\n", dirn, fd);
}

void
