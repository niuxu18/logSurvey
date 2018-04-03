    path = storeCossDirSwapLogFile(sd, NULL);
    fd = file_open(path, O_WRONLY | O_CREAT | O_BINARY);
    if (fd < 0) {
	debug(79, 1) ("%s: %s\n", path, xstrerror());
	fatal("storeCossDirOpenSwapLog: Failed to open swap log.");
    }
    debug(79, 3) ("Cache COSS Dir #%d log opened on FD %d\n", sd->index, fd);
    cs->swaplog_fd = fd;
}

