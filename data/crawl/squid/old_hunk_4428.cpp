ipcacheStatPrint(ipcache_entry * i, StoreEntry * sentry)
{
    int k;
    storeAppendPrintf(sentry, " %-32.32s %c%c %6d %6d %2d(%2d)",
                      hashKeyStr(&i->hash),
                      i->flags.fromhosts ? 'H' : ' ',
