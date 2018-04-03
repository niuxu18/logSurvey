      && FILE_TIMESTAMP_STAT_MODTIME (st) != file->last_mtime)
    {
      if (on_behalf_of)
	error (NILF, "*** [%s] Deleting file `%s'", on_behalf_of, file->name);
      else
	error (NILF, "*** Deleting file `%s'", file->name);
      if (unlink (file->name) < 0
	  && errno != ENOENT)	/* It disappeared; so what.  */
	perror_with_name ("unlink: ", file->name);