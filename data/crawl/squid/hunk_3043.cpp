         storeAppendPrintf(sentry, " closest-only");
 
 #if USE_HTCP
-    if (p->options.htcp)
+    if (p->options.htcp) {
         storeAppendPrintf(sentry, " htcp");
-    if (p->options.htcp_oldsquid)
-        storeAppendPrintf(sentry, " htcp-oldsquid");
-    if (p->options.htcp_no_clr)
-        storeAppendPrintf(sentry, " htcp-no-clr");
-    if (p->options.htcp_no_purge_clr)
-        storeAppendPrintf(sentry, " htcp-no-purge-clr");
-    if (p->options.htcp_only_clr)
-        storeAppendPrintf(sentry, " htcp-only-clr");
+        if (p->options.htcp_oldsquid || p->options.htcp_no_clr || p->options.htcp_no_purge_clr || p->options.htcp_only_clr) {
+            int doneopts=0;
+            if (p->options.htcp_oldsquid)
+                storeAppendPrintf(sentry, "%soldsquid",(doneopts++>0?",":"="));
+            if (p->options.htcp_no_clr)
+                storeAppendPrintf(sentry, "%sno-clr",(doneopts++>0?",":"="));
+            if (p->options.htcp_no_purge_clr)
+                storeAppendPrintf(sentry, "%sno-purge-clr",(doneopts++>0?",":"="));
+            if (p->options.htcp_only_clr)
+                storeAppendPrintf(sentry, "%sonly-clr",(doneopts++>0?",":"="));
+        }
+    }
 #endif
 
     if (p->options.no_netdb_exchange)