    storeAppendPrintf(sentry, close_bracket);
}

void
dnsShutdownServers()
{
    dnsserver_t *dnsData = NULL;
    int k;
