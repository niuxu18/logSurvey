    }
#endif

  /* Check for multiple links.

     We maintain a list of all such files that we've written so far.  Any
     time we see another, we check the list and avoid dumping the data
     again if we've done it once already.  */

  if (current_stat.st_nlink > 1
      && (S_ISREG (current_stat.st_mode)
	  || S_ISCTG (current_stat.st_mode)
	  || S_ISCHR (current_stat.st_mode)
	  || S_ISBLK (current_stat.st_mode)
	  || S_ISFIFO (current_stat.st_mode)))
    {
      struct link *lp;

      /* FIXME: First quick and dirty.  Hashing, etc later.  */

      for (lp = linklist; lp; lp = lp->next)
	if (lp->ino == current_stat.st_ino && lp->dev == current_stat.st_dev)
	  {
	    char *link_name = lp->name;

	    /* We found a link.  */

	    while (!absolute_names_option && *link_name == '/')
	      {
		static int warned_once;
		if (!warned_once)
		  {
		    warned_once = 1;
		    WARN ((0, 0, _("Removing leading `/' from link names")));
		  }
		link_name++;
	      }
	    if (strlen (link_name) >= NAME_FIELD_SIZE)
	      write_long (link_name, GNUTYPE_LONGLINK);
	    assign_string (&current_link_name, link_name);

	    current_stat.st_size = 0;
	    header = start_header (p, &current_stat);
	    if (! header)
	      {
		exit_status = TAREXIT_FAILURE;
		return;
	      }
	    strncpy (header->header.linkname,
		     link_name, NAME_FIELD_SIZE);

	    /* Force null truncated.  */

	    header->header.linkname[NAME_FIELD_SIZE - 1] = 0;

	    header->header.typeflag = LNKTYPE;
	    finish_header (header);

	    /* FIXME: Maybe remove from list after all links found?  */

	    if (remove_files_option)
	      if (unlink (p) == -1)
		ERROR ((0, errno, _("Cannot remove %s"), p));

	    /* We dumped it.  */
	    return;
	  }

      /* Not found.  Add it to the list of possible links.  */

      lp = xmalloc (sizeof (struct link) + strlen (p));
      lp->ino = current_stat.st_ino;
      lp->dev = current_stat.st_dev;
      strcpy (lp->name, p);
      lp->next = linklist;
      linklist = lp;
    }

  /* This is not a link to a previously dumped file, so dump it.  */

  if (S_ISREG (current_stat.st_mode)
      || S_ISCTG (current_stat.st_mode))
    {
      int f;			/* file descriptor */
      size_t bufsize;
      ssize_t count;
      off_t sizeleft;
      union block *start;
      int header_moved;
      char isextended = 0;
      int upperbound;

      header_moved = 0;

      if (sparse_option)
	{
	  /* Check the size of the file against the number of blocks
	     allocated for it, counting both data and indirect blocks.
	     If there is a smaller number of blocks that would be
	     necessary to accommodate a file of this size, this is safe
	     to say that we have a sparse file: at least one of those
	     blocks in the file is just a useless hole.  For sparse
	     files not having more hole blocks than indirect blocks, the
	     sparseness will go undetected.  */

	  /* Bruno Haible sent me these statistics for Linux.  It seems
	     that some filesystems count indirect blocks in st_blocks,
	     while others do not seem to:

	     minix-fs   tar: size=7205, st_blocks=18 and ST_NBLOCKS=18
	     extfs      tar: size=7205, st_blocks=18 and ST_NBLOCKS=18
	     ext2fs     tar: size=7205, st_blocks=16 and ST_NBLOCKS=16
	     msdos-fs   tar: size=7205, st_blocks=16 and ST_NBLOCKS=16

	     Dick Streefland reports the previous numbers as misleading,
	     because ext2fs use 12 direct blocks, while minix-fs uses only
	     6 direct blocks.  Dick gets:

	     ext2	size=20480	ls listed blocks=21
	     minix	size=20480	ls listed blocks=21
	     msdos	size=20480	ls listed blocks=20

	     It seems that indirect blocks *are* included in st_blocks.
	     The minix filesystem does not account for phantom blocks in
	     st_blocks, so `du' and `ls -s' give wrong results.  So, the
	     --sparse option would not work on a minix filesystem.  */

	  if (ST_NBLOCKS (current_stat)
	      < (current_stat.st_size / ST_NBLOCKSIZE
		 + (current_stat.st_size % ST_NBLOCKSIZE != 0)))
	    {
	      off_t filesize = current_stat.st_size;
	      int counter;

	      header = start_header (p, &current_stat);
	      if (! header)
		{
		  exit_status = TAREXIT_FAILURE;
		  return;
		}
	      header->header.typeflag = GNUTYPE_SPARSE;
	      header_moved = 1;

	      /* Call the routine that figures out the layout of the
		 sparse file in question.  UPPERBOUND is the index of the
		 last element of the "sparsearray," i.e., the number of
		 elements it needed to describe the file.  */

	      upperbound = deal_with_sparse (p, header);

	      /* See if we'll need an extended header later.  */

	      if (upperbound > SPARSES_IN_OLDGNU_HEADER - 1)
		header->oldgnu_header.isextended = 1;

	      /* We store the "real" file size so we can show that in
		 case someone wants to list the archive, i.e., tar tvf
		 <file>.  It might be kind of disconcerting if the
		 shrunken file size was the one that showed up.  */

	      OFF_TO_CHARS (current_stat.st_size,
			    header->oldgnu_header.realsize);

	      /* This will be the new "size" of the file, i.e., the size
		 of the file minus the blocks of holes that we're
		 skipping over.  */

	      find_new_file_size (&filesize, upperbound);
	      current_stat.st_size = filesize;
	      OFF_TO_CHARS (filesize, header->header.size);

	      for (counter = 0; counter < SPARSES_IN_OLDGNU_HEADER; counter++)
		{
		  if (!sparsearray[counter].numbytes)
		    break;

		  OFF_TO_CHARS (sparsearray[counter].offset,
				header->oldgnu_header.sp[counter].offset);
		  SIZE_TO_CHARS (sparsearray[counter].numbytes,
				 header->oldgnu_header.sp[counter].numbytes);
		}

	    }
	}
      else
	upperbound = SPARSES_IN_OLDGNU_HEADER - 1;

      sizeleft = current_stat.st_size;

      /* Don't bother opening empty, world readable files.  Also do not open
	 files when archive is meant for /dev/null.  */

      if (dev_null_output
	  || (sizeleft == 0
	      && MODE_R == (MODE_R & current_stat.st_mode)))
	f = -1;
      else
	{
	  f = open (p, O_RDONLY | O_BINARY);
	  if (f < 0)
	    {
	      WARN ((0, errno, _("Cannot add file %s"), p));
	      if (!ignore_failed_read_option)
		exit_status = TAREXIT_FAILURE;
	      return;
	    }
	}

      /* If the file is sparse, we've already taken care of this.  */

      if (!header_moved)
	{
	  header = start_header (p, &current_stat);
	  if (! header)
	    {
	      if (f >= 0)
		close (f);
	      exit_status = TAREXIT_FAILURE;
	      return;
	    }
	}

      /* Mark contiguous files, if we support them.  */

      if (archive_format != V7_FORMAT && S_ISCTG (current_stat.st_mode))
	header->header.typeflag = CONTTYPE;

      isextended = header->oldgnu_header.isextended;
      save_typeflag = header->header.typeflag;
      finish_header (header);
      if (isextended)
	{
#if 0
	  int sum = 0;
#endif
	  int counter;
#if 0
	  union block *exhdr;
	  int arraybound = SPARSES_IN_SPARSE_HEADER;
#endif
	  /* static */ int index_offset = SPARSES_IN_OLDGNU_HEADER;

	extend:
	  exhdr = find_next_block ();
	  if (! exhdr)
	    {
	      exit_status = TAREXIT_FAILURE;
	      return;
	    }
	  memset (exhdr->buffer, 0, BLOCKSIZE);
	  for (counter = 0; counter < SPARSES_IN_SPARSE_HEADER; counter++)
	    {
	      if (counter + index_offset > upperbound)
		break;

	      SIZE_TO_CHARS (sparsearray[counter + index_offset].numbytes,
			     exhdr->sparse_header.sp[counter].numbytes);
	      OFF_TO_CHARS (sparsearray[counter + index_offset].offset,
			    exhdr->sparse_header.sp[counter].offset);
	    }
	  set_next_block_after (exhdr);
#if 0
	  sum += counter;
	  if (sum < upperbound)
	    goto extend;
#endif
	  if (index_offset + counter <= upperbound)
	    {
	      index_offset += counter;
	      exhdr->sparse_header.isextended = 1;
	      goto extend;
	    }

	}
      if (save_typeflag == GNUTYPE_SPARSE)
	{
	  if (f < 0
	      || finish_sparse_file (f, &sizeleft, current_stat.st_size, p))
	    goto padit;
	}
      else
	while (sizeleft > 0)
	  {
	    if (multi_volume_option)
	      {
		assign_string (&save_name, p);
		save_sizeleft = sizeleft;
		save_totsize = current_stat.st_size;
	      }
	    start = find_next_block ();

	    bufsize = available_space_after (start);

	    if (sizeleft < bufsize)
	      {
		/* Last read -- zero out area beyond.  */

		bufsize = sizeleft;
		count = bufsize % BLOCKSIZE;
		if (count)
		  memset (start->buffer + sizeleft, 0, BLOCKSIZE - count);
	      }
	    if (f < 0)
	      count = bufsize;
	    else
	      count = safe_read (f, start->buffer, bufsize);
	    if (count < 0)
	      {
		char buf[UINTMAX_STRSIZE_BOUND];
		ERROR ((0, errno,
			_("Read error at byte %s, reading %lu bytes, in file %s"),
			STRINGIFY_BIGINT (current_stat.st_size - sizeleft,
					  buf),
			(unsigned long) bufsize, p));
		goto padit;
	      }
	    sizeleft -= count;

	    /* This is nonportable (the type of set_next_block_after's arg).  */

	    set_next_block_after (start + (count - 1) / BLOCKSIZE);

	    if (count == bufsize)
	      continue;
	    else
	      {
		char buf[UINTMAX_STRSIZE_BOUND];
		ERROR ((0, 0,
			_("File %s shrunk by %s bytes, padding with zeros"),
			p, STRINGIFY_BIGINT (sizeleft, buf)));
		goto padit;		/* short read */
	      }
	  }

      if (multi_volume_option)
	assign_string (&save_name, 0);

      if (f >= 0)
	{
	  struct stat final_stat;
	  if (fstat (f, &final_stat) != 0)
	    ERROR ((0, errno, "%s: fstat", p));
	  else if (final_stat.st_mtime != restore_times.modtime
		   || final_stat.st_size != restore_size)
	    ERROR ((0, errno, _("%s: file changed as we read it"), p));
	  if (close (f) != 0)
	    ERROR ((0, errno, _("%s: close"), p));
	  if (atime_preserve_option)
	    utime (p, &restore_times);
	}
      if (remove_files_option)
	{
	  if (unlink (p) == -1)
	    ERROR ((0, errno, _("Cannot remove %s"), p));
	}
      return;

      /* File shrunk or gave error, pad out tape to match the size we
	 specified in the header.  */

    padit:
      while (sizeleft > 0)
	{
	  save_sizeleft = sizeleft;
	  start = find_next_block ();
	  memset (start->buffer, 0, BLOCKSIZE);
	  set_next_block_after (start);
	  sizeleft -= BLOCKSIZE;
	}
      if (multi_volume_option)
	assign_string (&save_name, 0);
      if (f >= 0)
	{
	  close (f);
	  if (atime_preserve_option)
	    utime (p, &restore_times);
	}
      return;
    }

#ifdef HAVE_READLINK
  else if (S_ISLNK (current_stat.st_mode))
    {
      int size;
      char *buffer = alloca (PATH_MAX + 1);

      size = readlink (p, buffer, PATH_MAX + 1);
      if (size < 0)
	{
	  WARN ((0, errno, _("Cannot add file %s"), p));
	  if (!ignore_failed_read_option)
	    exit_status = TAREXIT_FAILURE;
	  return;
	}
      buffer[size] = '\0';
      if (size >= NAME_FIELD_SIZE)
	write_long (buffer, GNUTYPE_LONGLINK);
      assign_string (&current_link_name, buffer);

      current_stat.st_size = 0;	/* force 0 size on symlink */
      header = start_header (p, &current_stat);
      if (! header)
	{
	  exit_status = TAREXIT_FAILURE;
	  return;
	}
      strncpy (header->header.linkname, buffer, NAME_FIELD_SIZE);
      header->header.linkname[NAME_FIELD_SIZE - 1] = '\0';
      header->header.typeflag = SYMTYPE;
      finish_header (header);	/* nothing more to do to it */
      if (remove_files_option)
	{
	  if (unlink (p) == -1)
	    ERROR ((0, errno, _("Cannot remove %s"), p));
	}
      return;
    }
#endif

  else if (S_ISDIR (current_stat.st_mode))
    {
      DIR *directory;
      struct dirent *entry;
