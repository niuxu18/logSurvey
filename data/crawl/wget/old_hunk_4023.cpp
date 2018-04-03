    {
      /* Construct the backup filename as the original name plus ".orig". */
      size_t         filename_len = strlen(file);
      char*          filename_plus_orig_suffix = malloc(filename_len +
							sizeof(".orig"));
      boolean        already_wrote_backup_file = FALSE;
      slist*         converted_file_ptr;
      static slist*  converted_files = NULL;

      /* Would a single s[n]printf() call be faster? */
      strcpy(filename_plus_orig_suffix, file);
      strcpy(filename_plus_orig_suffix + filename_len, ".orig");

      /* We can get called twice on the same URL thanks to the
	 convert_all_links() call in main().  If we write the .orig file each
