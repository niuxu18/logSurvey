 	&f->client_http.hit_svc_time);
     storeAppendPrintf(sentry, "client_http.hit_median_svc_time = %f seconds\n",
 	x / 1000.0);
+
 #if SQUID_PEER_DIGEST
     storeAppendPrintf(sentry, "cd.msgs_sent = %f/sec\n",
 	XAVG(cd.msgs_sent));