  }

  if (fh == NULL) {
    char errbuf[1024];
    fprintf(stderr, "logfile plugin: fopen (%s) failed: %s\n", log_file,
            sstrerror(errno, errbuf, sizeof(errbuf)));
  } else {
    if (print_timestamp)
      fprintf(fh, "[%s] %s%s\n", timestamp_str, level_str, msg);
