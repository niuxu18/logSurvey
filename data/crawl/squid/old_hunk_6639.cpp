    storeAppendPrintf(sentry, "client_http.hit_median_svc_time = %f seconds\n",
	x / 1000.0);

    storeAppendPrintf(sentry, "server.requests = %f/sec\n",
	XAVG(server.requests));
    storeAppendPrintf(sentry, "server.errors = %f/sec\n",
	XAVG(server.errors));
    storeAppendPrintf(sentry, "server.kbytes_in = %f/sec\n",
	XAVG(server.kbytes_in.kb));
    storeAppendPrintf(sentry, "server.kbytes_out = %f/sec\n",
	XAVG(server.kbytes_out.kb));

    storeAppendPrintf(sentry, "icp.pkts_sent = %f/sec\n",
	XAVG(icp.pkts_sent));