	      && !opt.debug
#endif
	      )
	    {
             if (opt.server_response)
	       logprintf (LOG_VERBOSE, "\n%2d %s", hcount, hdr);
             else
	       logprintf (LOG_VERBOSE, "%2d %s", statcode, error);
	    }

	  goto done_header;
	}
