     int k;
     int i;
     storeAppendPrintf(sentry, "{Network DB Statistics:\n");
-    storeAppendPrintf(sentry, "{%-16.16s %7s %5s %s}\n",
+    storeAppendPrintf(sentry, "{%-16.16s %7s %9s %5s %s}\n",
 	"Network",
+	"recv/sent",
 	"RTT",
 	"Hops",
 	"Hostnames");
