     else
         method = al->http.method.image();
 
-    logfilePrintf(logfile, "%9ld.%03d %6ld %s %s%s/%03d %" PRId64 " " SQUIDSBUFPH " %s %s %s%s/%s %s%s",
+    logfilePrintf(logfile, "%9ld.%03d %6ld %s %s/%03d %" PRId64 " " SQUIDSBUFPH " %s %s %s%s/%s %s%s",
                   (long int) current_time.tv_sec,
                   (int) current_time.tv_usec / 1000,
                   tvToMsec(al->cache.trTime),
                   clientip,
                   al->cache.code.c_str(),
-                  al->http.statusSfx(),
                   al->http.code,
                   al->http.clientReplySz.messageTotal(),
                   SQUIDSBUFPRINT(method),