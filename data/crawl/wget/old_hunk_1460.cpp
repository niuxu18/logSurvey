	      if (!exists)
		{
		  logputs (LOG_VERBOSE, "\n");
		  logprintf (LOG_NOTQUIET, _("No such file `%s'.\n"),
			     escnonprint (u->file));
		}
	    }
          fd_close (csock);
ChangeLog      | 6 ++++++
po/POTFILES.in | 3 +++
po/quot.sed    | 4 ++++
3 files changed, 13 insertions(+)
