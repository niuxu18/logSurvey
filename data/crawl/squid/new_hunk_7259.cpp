	fatal_dump("fqdncache_dnsHandleRead: bad status");
    if (strstr(dnsData->ip_inbuf, "$end\n")) {
	/* end of record found */
	FqdncacheStats.avg_svc_time =
	    intAverage(FqdncacheStats.avg_svc_time,
	    tvSubMsec(dnsData->dispatch_time, current_time),
	    n, FQDNCACHE_AV_FACTOR);
	if ((x = fqdncache_parsebuffer(dnsData->ip_inbuf, dnsData)) == NULL) {
	    debug(35, 0, "fqdncache_dnsHandleRead: fqdncache_parsebuffer failed?!\n");
	} else {
