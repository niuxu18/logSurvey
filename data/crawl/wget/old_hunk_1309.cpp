  /* Check for status line.  */
  message = NULL;
  statcode = resp_status (resp, &message);
  if (!opt.server_response)
    logprintf (LOG_VERBOSE, "%2d %s\n", statcode,
               message ? quotearg_style (escape_quoting_style, message) : "");