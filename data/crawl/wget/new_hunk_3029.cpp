	 ".html", so we need to compare vs. the original URL plus
	 ".orig", not the original URL plus ".html.orig". */
      filename_plus_orig_suffix = alloca (filename_len + 1);
      strcpy (filename_plus_orig_suffix, file);
      strcpy ((filename_plus_orig_suffix + filename_len) - 4, "orig");
    }
  else /* downloaded_file_return == FILE_DOWNLOADED_NORMALLY */
    {
      /* Append ".orig" to the name. */
      filename_plus_orig_suffix = alloca (filename_len + sizeof (".orig"));
      strcpy (filename_plus_orig_suffix, file);
      strcpy (filename_plus_orig_suffix + filename_len, ".orig");
    }

  if (!converted_files)
    converted_files = make_string_hash_table (0);

  /* We can get called twice on the same URL thanks to the
     convert_all_links() call in main().  If we write the .orig file
     each time in such a case, it'll end up containing the first-pass
     conversion, not the original file.  So, see if we've already been
     called on this file. */
  if (!string_set_contains (converted_files, file))
    {
      /* Rename <file> to <file>.orig before former gets written over. */
      if (rename (file, filename_plus_orig_suffix) != 0)
	logprintf (LOG_NOTQUIET, _("Cannot back up %s as %s: %s\n"),
		   file, filename_plus_orig_suffix, strerror (errno));
