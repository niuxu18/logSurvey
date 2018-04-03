    } else {
        char *ereq = log_quote(al->headers.request);
        char *erep = log_quote(al->headers.reply);
        logfilePrintf(logfile, "%9ld.%03d %6d %s %s/%03d %ld %s %s %s %s%s/%s %s [%s] [%s]",
                      (long int) current_time.tv_sec,
                      (int) current_time.tv_usec / 1000,
                      al->cache.msec,
                      client,
                      log_tags[al->cache.code],
                      al->http.code,
                      (long int) al->cache.size,
                      al->_private.method_str,
                      al->url,
                      user ? user : dash_str,