    return 1;
}

static int
storeVerifySwapDirs(int clean)
{
    int inx;
    const char *path = NULL;
    struct stat sb;
    int directory_created = 0;
    char *cmdbuf = NULL;

    for (inx = 0; inx < ncache_dirs; inx++) {
	path = swappath(inx);
	debug(20, 9, "storeVerifySwapDirs: Creating swap space in %s\n", path);
	if (stat(path, &sb) < 0) {
	    /* we need to create a directory for swap file here. */
	    if (mkdir(path, 0777) < 0) {
		if (errno != EEXIST) {
		    sprintf(tmp_error_buf, "Failed to create swap directory %s: %s",
			path,
			xstrerror());
		    fatal(tmp_error_buf);
		}
	    }
	    if (stat(path, &sb) < 0) {
		sprintf(tmp_error_buf,
		    "Failed to verify swap directory %s: %s",
		    path, xstrerror());
		fatal(tmp_error_buf);
	    }
	    debug(20, 1, "storeVerifySwapDirs: Created swap directory %s\n", path);
	    directory_created = 1;
	}
	if (clean && opt_unlink_on_reload) {
	    debug(20, 1, "storeVerifySwapDirs: Zapping all objects on disk storage.\n");
	    cmdbuf = xcalloc(1, BUFSIZ);
	    sprintf(cmdbuf, "cd %s; /bin/rm -rf %s [0-9A-F][0-9A-F]",
		path, swaplog_file);
	    debug(20, 1, "storeVerifySwapDirs: Running '%s'\n", cmdbuf);
	    system(cmdbuf);	/* XXX should avoid system(3) */
	    xfree(cmdbuf);
	}
    }
    return directory_created;
}

static void
storeCreateSwapSubDirs(void)
{
    int i, j, k;
    LOCAL_ARRAY(char, name, MAXPATHLEN);
    for (j = 0; j < ncache_dirs; j++) {
	for (i = 0; i < Config.levelOneDirs; i++) {
	    sprintf(name, "%s/%02X", swappath(j), i);
	    debug(20, 1, "Making directories in %s\n", name);
	    if (mkdir(name, 0755) < 0) {
		if (errno != EEXIST) {
		    sprintf(tmp_error_buf,
			"Failed to make swap directory %s: %s",
			name, xstrerror());
		    fatal(tmp_error_buf);
		}
	    }
	    for (k = 0; k < Config.levelTwoDirs; k++) {
		sprintf(name, "%s/%02X/%02X", swappath(j), i, k);
		if (mkdir(name, 0755) < 0) {
		    if (errno != EEXIST) {
			sprintf(tmp_error_buf,
			    "Failed to make swap directory %s: %s",
			    name, xstrerror());
			fatal(tmp_error_buf);
		    }
		}
	    }
	}
    }
}

#if HAVE_RANDOM
#define squid_random random
#elif HAVE_LRAND48
