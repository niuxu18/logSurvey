        case FTPNSFOD:
          logputs (LOG_VERBOSE, "\n");
          logprintf (LOG_NOTQUIET, _("No such file %s.\n\n"),
                     quote (u->file));
          fd_close (dtsock);
          fd_close (local_sock);
          return err;
