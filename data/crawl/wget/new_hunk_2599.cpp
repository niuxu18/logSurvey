      /* Parse the proxy URL.  */
      proxy_url = url_parse (proxy, &up_error_code);
      if (!proxy_url)
        {
          logprintf (LOG_NOTQUIET, _("Error parsing proxy URL %s: %s.\n"),
                     proxy, url_error (up_error_code));
          xfree (url);
          RESTORE_POST_DATA;
          return PROXERR;
        }
      if (proxy_url->scheme != SCHEME_HTTP && proxy_url->scheme != u->scheme)
        {
          logprintf (LOG_NOTQUIET, _("Error in proxy URL %s: Must be HTTP.\n"), proxy);
          url_free (proxy_url);
          xfree (url);
          RESTORE_POST_DATA;
          return PROXERR;
        }
    }

  if (u->scheme == SCHEME_HTTP
