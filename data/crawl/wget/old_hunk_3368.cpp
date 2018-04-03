  while ((line = read_whole_line (fp)))
    {
      char *com, *val;
      int status;

      /* Parse the line.  */
      status = parse_line (line, &com, &val);
      xfree (line);
      /* If everything is OK, set the value.  */
      if (status == 1)
	{
	  if (!setval (com, val))
	    fprintf (stderr, _("%s: Error in %s at line %d.\n"), exec_name,
		     file, ln);
	  xfree (com);