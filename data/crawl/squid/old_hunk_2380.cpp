static void
commIncomingStats(StoreEntry * sentry)
{
    StatCounters *f = StatCounters::GetCounters();
    storeAppendPrintf(sentry, "Current incoming_icp_interval: %d\n",
                      incoming_icp_interval >> INCOMING_FACTOR);
    storeAppendPrintf(sentry, "Current incoming_dns_interval: %d\n",
