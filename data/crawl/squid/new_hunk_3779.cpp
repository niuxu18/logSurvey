
    fprintf(debug_log, "FATAL: %s\n", message);

    if (Debug::log_stderr > 0 && debug_log != stderr)
        fprintf(stderr, "FATAL: %s\n", message);

    fprintf(debug_log, "Squid Cache (Version %s): Terminated abnormally.\n",
