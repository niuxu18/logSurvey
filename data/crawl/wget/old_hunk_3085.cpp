	      if (*dt & RETROKF)
		{
		  logprintf (LOG_VERBOSE,
			     _("%s (%s) - `%s' saved [%ld]\n\n"),
			     tms, tmrate, locf, hstat.len);
		  logprintf (LOG_NONVERBOSE,
			     "%s URL:%s [%ld] -> \"%s\" [%d]\n",
			     tms, u->url, hstat.len, locf, count);
		}
	      ++opt.numurls;
	      total_downloaded_bytes += hstat.len;
