
  fputs (_(".  Stop.\n"), stderr);

  if (parallel_sync)
    log_working_directory (0, 1);

  die (2);
