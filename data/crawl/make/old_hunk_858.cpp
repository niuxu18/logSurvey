	      p = strchr (p2, '\0');
	      while (isblank ((unsigned char)p[-1]))
		--p;
	      do_define (p2, p - p2, o_file, infile, &fileinfo);
	    }
	  continue;
	}

      if (word1eq ("override", 8))
        {
	  p2 = next_token (p + 8);
	  if (*p2 == '\0')
	    error (&fileinfo, _("empty `override' directive"));
	  if (strneq (p2, "define", 6)
	      && (isblank ((unsigned char)p2[6]) || p2[6] == '\0'))
	    {