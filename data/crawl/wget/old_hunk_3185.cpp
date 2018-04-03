    case IPV4_ADDRESS:
      if (!opt.server_response)
        logputs (LOG_VERBOSE, "==> PASV ... ");
      err = ftp_pasv (rbuf, addr, port);
      break;
    case IPV6_ADDRESS:
      if (!opt.server_response)
        logputs (LOG_VERBOSE, "==> EPSV ... ");
      err = ftp_epsv (rbuf, addr, port);

      /* If EPSV is not supported try LPSV */
      if (err == FTPNOPASV)
        {
          if (!opt.server_response)
            logputs (LOG_VERBOSE, "==> LPSV ... ");
          err = ftp_lpsv (rbuf, addr, port);
        }
      break;
    default:
