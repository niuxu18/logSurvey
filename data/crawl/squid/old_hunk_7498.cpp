ipcacheStatPrint(ipcache_entry * i, StoreEntry * sentry)
{
    int k;
    storeAppendPrintf(sentry, " {%-32.32s  %c%c %6d %6d %d",
	i->name,
	ipcache_status_char[i->status],
