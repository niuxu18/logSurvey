    StatCounters *l = &CountHist[5];
    double x;

    storeAppendPrintf(sentry, "\nicp.query_svc_time histogram:\n");
    statHistDump(&f->icp.query_svc_time, sentry, NULL);
    storeAppendPrintf(sentry, "\nicp.reply_svc_time histogram:\n");
