             /* TODO: if maxage or s-maxage is present, don't do this */
 
             if (squid_curtime - http->storeEntry()->timestamp >= 86400) {
-                char tempbuf[512];
-                snprintf (tempbuf, sizeof(tempbuf), "%s %s %s",
+                char tbuf[512];
+                snprintf (tbuf, sizeof(tbuf), "%s %s %s",
                           "113", ThisCache,
                           "This cache hit is still fresh and more than 1 day old");
-                hdr->putStr(HDR_WARNING, tempbuf);
+                hdr->putStr(HDR_WARNING, tbuf);
             }
         }
     }
