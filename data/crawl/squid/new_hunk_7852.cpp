
    sprintf(swaplog_file, "%s/log", swappath(0));

    swaplog_fd = file_open(swaplog_file, NULL, O_WRONLY | O_CREAT | O_APPEND);
    debug(20,3,"swaplog_fd %d is now '%s'\n", swaplog_fd, swaplog_file);
    if (swaplog_fd < 0) {
	sprintf(tmp_error_buf, "Cannot open swap logfile: %s", swaplog_file);
	fatal(tmp_error_buf);
    }
    swaplog_lock = file_write_lock(swaplog_fd);
    debug(20,3,"swaplog_lock = %d\n", swaplog_lock);

    if (!zap_disk_store) {
	ok_write_clean_log = 0;
	storeStartRebuildFromDisk();
    } else {
	ok_write_clean_log = 1;
    }

    if (dir_created || zap_disk_store)
	storeCreateSwapSubDirs();
