      if (!accdir (newdir, ALLABS))
	{
	  logprintf (LOG_VERBOSE, _("\
Not descending to `%s' as it is excluded/not-included.\n"),
		     escnonprint (newdir));
	  continue;
	}
