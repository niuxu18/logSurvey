	IpcacheStats.requests);
    storeAppendPrintf(sentry, "IPcache Hits: %d\n",
	IpcacheStats.hits);
    storeAppendPrintf(sentry, "IPcache Negative Hits: %d\n",
	IpcacheStats.negative_hits);
    storeAppendPrintf(sentry, "IPcache Misses: %d\n",