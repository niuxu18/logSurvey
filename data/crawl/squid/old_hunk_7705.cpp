    storeAppendPrintf(sentry, close_bracket);
}


void parameter_get(obj, sentry)
     cacheinfo *obj;
     StoreEntry *sentry;

{
    /* be careful if an object is bigger than 4096, 
     * need more malloc here */
    static char line[MAX_LINELEN];

    memset(line, '\0', MAX_LINELEN);

    storeAppendPrintf(sentry, open_bracket);

    storeAppendPrintf(sentry, "{VM-Max %d \"# Maximum hot-vm cache (MB)\"}\n",
	getCacheMemMax() / (1 << 20));

    storeAppendPrintf(sentry, "{VM-High %d \"# High water mark hot-vm cache (%%)\"}\n",
	getCacheMemHighWaterMark());

    storeAppendPrintf(sentry, "{VM-Low %d \"# Low water-mark hot-vm cache (%%)\"}\n",
	getCacheMemLowWaterMark());

    storeAppendPrintf(sentry, "{Swap-Max %d \"# Maximum disk cache (MB)\"}\n",
	getCacheSwapMax() / (1 << 10));

    storeAppendPrintf(sentry, "{Swap-High %d \"# High Water mark disk cache (%%)\"}\n",
	getCacheSwapHighWaterMark());

    storeAppendPrintf(sentry, "{Swap-Low %d \"# Low water mark disk cache (%%)\"}\n",
	getCacheSwapLowWaterMark());

    storeAppendPrintf(sentry, "{HTTP-Max %d\"# Maximum size HTTP objects (KB)\"}\n",
	getHttpMax() / (1 << 10));

    storeAppendPrintf(sentry, "{HTTP-TTL %d \"# Http object default TTL (hrs)\"}\n", getHttpTTL() / 3600);

    storeAppendPrintf(sentry, "{Gopher-Max %d \"# Maximum size gopher objects (KB)\"}\n",
	getGopherMax() / (1 << 10));

    storeAppendPrintf(sentry, "{Gopher-TTL %d \"# TTL for gopher objects (hrs)\"}\n", getGopherTTL() / 3600);

    storeAppendPrintf(sentry, "{FTP-Max %d \"# Maximum size FTP objects (KB)\"}\n",
	getFtpMax() / (1 << 10));

    storeAppendPrintf(sentry, "{FTP-TTL %d \"# TTL for FTP objects (hrs)\"}\n", getFtpTTL() / 3600);

    storeAppendPrintf(sentry, "{Neg-TTL %d \"# TTL for negative cache (s)\"}\n",
	getNegativeTTL());

    storeAppendPrintf(sentry, "{ReadTimeout %d \"# Maximum idle connection (s)\"}\n", getReadTimeout());

    storeAppendPrintf(sentry, "{ClientLifetime %d \"# Lifetime for incoming HTTP requests or outgoing clients (s)\"}\n", getClientLifetime());

    storeAppendPrintf(sentry, "{CleanRate %d \"# Rate for periodic object expiring\"}\n",
	getCleanRate());

    /* Cachemgr.cgi expects an integer in the second field of the string */
    storeAppendPrintf(sentry, "{HttpAccelMode %d \"# Is operating as an HTTP accelerator\"}\n",
	httpd_accel_mode);

    /* end of stats */
    storeAppendPrintf(sentry, close_bracket);
}
