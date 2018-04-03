    /* First we do a "dry run": go through the list L and see whether
       any URL needs to be converted in the first place.  If not, just
       leave the file alone.  */
    int count = 0;
    urlpos *dry = l;
    for (dry = l; dry; dry = dry->next)
      if (dry->convert != CO_NOCONVERT)
	++count;
    if (!count)
      {
	logputs (LOG_VERBOSE, _("nothing to do.\n"));
	return;
