    if (sock >= 0)
      fd_close (sock);
    if (print)
      logprintf (LOG_NOTQUIET, _("failed: %s.\n"), strerror (errno));
    errno = save_errno;
    return -1;
  }
