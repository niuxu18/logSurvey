     file_close(CacheInfo->logfile_fd);
     CacheInfo->logfile_fd = file_open(fname, NULL, O_RDWR | O_CREAT | O_APPEND);
     if (CacheInfo->logfile_fd == DISK_ERROR) {
-	debug(18, 0, "rotate_logs: Cannot open logfile: %s\n", fname);
+	debug(18, 0, "stat_rotate_log: Cannot open logfile: %s\n", fname);
 	CacheInfo->logfile_status = LOG_DISABLE;
 	fatal("Cannot open logfile.");
     }
