          logputs (LOG_VERBOSE, "\n");
          logprintf (LOG_NOTQUIET, _("Cannot write to %s (%s).\n"),
                     quote (hstat.local_file), strerror (errno));
        case HOSTERR: case CONIMPOSSIBLE: case PROXERR: case AUTHFAILED:
        case SSLINITFAILED: case CONTNOTSUPPORTED: case VERIFCERTERR:
        case FILEBADFILE:
          /* Fatal errors just return from the function.  */
          ret = err;
          goto exit;
        case WARC_ERR:
          /* A fatal WARC error. */
          logputs (LOG_VERBOSE, "\n");
