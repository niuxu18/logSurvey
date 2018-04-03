         quote, to the outfile.  */
      fwrite (p, 1, url_start - p, fp);
      p = url_start;

      switch (link->convert)
	{
	case CO_CONVERT_TO_RELATIVE:
	  /* Convert absolute URL to relative. */
	  {
	    char *newname = construct_relative (file, link->local_name);
	    char *quoted_newname = local_quote_string (newname);
	    p = replace_attr (p, link->size, fp, quoted_newname);
	    DEBUGP (("TO_RELATIVE: %s to %s at position %d in %s.\n",
		     link->url->url, newname, link->pos, file));
	    xfree (newname);
	    xfree (quoted_newname);
	    ++to_file_count;
	    break;
	  }
	case CO_CONVERT_TO_COMPLETE:
	  /* Convert the link to absolute URL. */
	  {
	    char *newlink = link->url->url;
	    char *quoted_newlink = html_quote_string (newlink);
	    p = replace_attr (p, link->size, fp, quoted_newlink);
	    DEBUGP (("TO_COMPLETE: <something> to %s at position %d in %s.\n",
		     newlink, link->pos, file));
	    xfree (quoted_newlink);
	    ++to_url_count;
	    break;
	  }
	case CO_NULLIFY_BASE:
	  /* Change the base href to "". */
	  p = replace_attr (p, link->size, fp, "");
	  break;
	case CO_NOCONVERT:
	  abort ();
	  break;
	}
    }

  /* Output the rest of the file. */
  if (p - fm->content < fm->length)
    fwrite (p, 1, fm->length - (p - fm->content), fp);
  fclose (fp);
  read_file_free (fm);

  logprintf (LOG_VERBOSE,
	     _("%d-%d\n"), to_file_count, to_url_count);
}