	fatal(tmp_error_buf);
    }
    debug(20, 3, "data->log %d is now '%s'\n", fileno(data->log), swaplog_file);
    if (store_rebuilding == STORE_REBUILDING_FAST)
	debug(20, 1, "Rebuilding in FAST MODE.\n");

    memset(data->line_in, '\0', 4096);
    data->speed = store_rebuilding == STORE_REBUILDING_FAST ? 50 : 5;

    /* Start reading the log file */
    if (opt_foreground_rebuild) {
