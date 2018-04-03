    case IPV4_ADDRESS:
      if (!opt.server_response)
        logputs (LOG_VERBOSE, "==> PORT ... ");
      err = ftp_port (rbuf, local_sock);
      break;
    case IPV6_ADDRESS:
      if (!opt.server_response)
        logputs (LOG_VERBOSE, "==> EPRT ... ");
      err = ftp_eprt (rbuf, local_sock);

      /* If EPRT is not supported try LPRT */
      if (err == FTPPORTERR)
        {
          if (!opt.server_response)
            logputs (LOG_VERBOSE, "==> LPRT ... ");
          err = ftp_lprt (rbuf, local_sock);
        }
      break;
    default:
