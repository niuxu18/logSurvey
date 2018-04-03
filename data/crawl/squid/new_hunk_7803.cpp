    memcpy(obj->logfilename, logfilename, (int) (strlen(logfilename) + 1) % 256);
    obj->logfile_fd = file_open(obj->logfilename, NULL, O_RDWR | O_CREAT);
    if (obj->logfile_fd == DISK_ERROR) {
	debug(18, 0, "%s: %s\n", obj->logfilename, xstrerror());
	fatal("Cannot open logfile.");
    }
    obj->logfile_access = file_write_lock(obj->logfile_fd);
