	  while (1)
	    {
	      exhdr = find_next_block ();
	      if (! exhdr)
		{
		  ERROR ((0, 0, _("Unexpected EOF on archive file")));
		  return;
		}
	      for (counter = 0; counter < SPARSES_IN_SPARSE_HEADER; counter++)
		{
		  if (counter + ind > sp_array_size - 1)