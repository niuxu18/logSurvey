    LogfileFD = file_open(LogfileName, O_WRONLY | O_CREAT, NULL, NULL, NULL);
    if (LogfileFD == DISK_ERROR) {
	debug(50, 0) ("%s: %s\n", LogfileName, xstrerror());
	fatal("Cannot open logfile.");
    }
    LogfileStatus = LOG_ENABLE;
}
