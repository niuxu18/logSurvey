     f->page_faults = rusage_pagefaults(&rusage);
     f->cputime = rusage_cputime(&rusage);
 
+    storeAppendPrintf(sentry, "sample_time = %d.%d (%s)\n",
+        f->timestamp.tv_sec,
+	f->timestamp.tv_usec,
+	mkrfc1123(f->timestamp.tv_sec));
     storeAppendPrintf(sentry, "client_http.requests = %d\n",
 	f->client_http.requests);
     storeAppendPrintf(sentry, "client_http.hits = %d\n",