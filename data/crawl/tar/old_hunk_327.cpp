
      if (count < 0)
	{
	  char buf[UINTMAX_STRSIZE_BOUND];
	  int e = errno;
	  ERROR ((0, e,
		  _("Read error at byte %s, reading %lu bytes, in file %s"),
		  STRINGIFY_BIGINT (fullsize - *sizeleft, buf),
		  (unsigned long) bufsize, quote (name)));
	  return 1;
	}
#if 0
      if (amount_read >= BLOCKSIZE)
	{
	  amount_read = 0;
	  set_next_block_after (start + (count - 1) / BLOCKSIZE);
	  if (count != bufsize)
	    {
	      ERROR ((0, 0,
		      _("File %s shrunk, padding with zeros"), quote (name)));
	      return 1;
	    }
	  start = find_next_block ();
	}
      else
	amount_read += bufsize;
#endif
      *sizeleft -= count;
      set_next_block_after (start);

    }
  free (sparsearray);
#if 0