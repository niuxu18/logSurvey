static void
cbdataDump(StoreEntry * sentry)
{
    storeAppendPrintf(sentry, "%d cbdata entries\n", cbdataCount);
#if USE_CBDATA_DEBUG

    storeAppendPrintf(sentry, "Pointer\tType\tLocks\tAllocated by\n");
