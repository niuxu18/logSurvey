      got_name = true;
    }

  /* TODO: Ick! This code is now in both gethttp and http_loop, and is
   * screaming for some refactoring. */
  if (got_name && file_exists_p (hstat.local_file) && opt.noclobber && !opt.output_document)
    {
      /* If opt.noclobber is turned on and file already exists, do not
         retrieve the file. But if the output_document was given, then this
         test was already done and the file didn't exist. Hence the !opt.output_document */
      logprintf (LOG_VERBOSE, _("\
File %s already there; not retrieving.\n\n"),
                 quote (hstat.local_file));
      /* If the file is there, we suppose it's retrieved OK.  */
      *dt |= RETROKF;

      /* #### Bogusness alert.  */
      /* If its suffix is "html" or "htm" or similar, assume text/html.  */
      if (has_html_suffix_p (hstat.local_file))
        *dt |= TEXTHTML;

      ret = RETROK;
      goto exit;
    }