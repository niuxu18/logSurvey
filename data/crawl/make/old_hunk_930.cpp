      mtime = file_mtime (d->file);
      check_renamed (d->file);

      if (d->file->updating)
	{
	  error (NILF, _("Circular %s <- %s dependency dropped."),
		 file->name, d->file->name);
