  if (file)
    *file = NULL;

 second_try:
  u = url_parse (url, &up_error_code, &utf8_encoded);
  if (!u)
    {
      logprintf (LOG_NOTQUIET, "%s: %s.\n", url, url_error (up_error_code));
