	syslog(LOG_ALERT, "%s", message);
#endif
    fprintf(debug_log, "FATAL: %s\n", message);
    if (opt_debug_stderr)
    	fprintf(stderr, "FATAL: %s\n", message);
    fprintf(debug_log, "Squid Cache (Version %s): Terminated abnormally.\n",
	version_string);
    fflush(debug_log);