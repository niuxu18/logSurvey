	if (i->status == IP_PENDING || i->status == IP_DISPATCHED)
	    ttl = 0;
	else
	    ttl = (i->ttl - squid_curtime + i->timestamp);
	storeAppendPrintf(sentry, " {%-32.32s %c %6d %d",
	    i->name,
	    ipcache_status_char[i->status],
	    ttl,
	    i->addr_count);
	for (k = 0; k < (int) i->addr_count; k++) {
