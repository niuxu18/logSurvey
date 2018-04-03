	f->icp.pkts_sent);
    storeAppendPrintf(sentry, "icp.pkts_recv = %d\n",
	f->icp.pkts_recv);
    storeAppendPrintf(sentry, "icp.replies_queued = %d\n",
	f->icp.replies_queued);
    storeAppendPrintf(sentry, "icp.kbytes_sent = %d\n",
	(int) f->icp.kbytes_sent.kb);
    storeAppendPrintf(sentry, "icp.kbytes_recv = %d\n",
	(int) f->icp.kbytes_recv.kb);

#if SQUID_PEER_DIGEST
    storeAppendPrintf(sentry, "cd.msgs_sent = %d\n",
	f->cd.msgs_sent);
    storeAppendPrintf(sentry, "cd.msgs_recv = %d\n",
	f->cd.msgs_recv);
    storeAppendPrintf(sentry, "cd.kbytes_sent = %d\n",
	(int) f->cd.kbytes_sent.kb);
    storeAppendPrintf(sentry, "cd.kbytes_recv = %d\n",
	(int) f->cd.kbytes_recv.kb);
    storeAppendPrintf(sentry, "cd.memory = %d\n",
	(int)f->cd.memory.kb);
    storeAppendPrintf(sentry, "cd.local_memory = %d\n",
	store_digest ? store_digest->mask_size/1024 : 0);
#endif

#if TOO_MUCH_OUTPUT
    storeAppendPrintf(sentry, "icp.query_svc_time histogram:\n");
    statHistDump(&f->icp.query_svc_time, sentry, NULL);
    storeAppendPrintf(sentry, "icp.reply_svc_time histogram:\n");
    statHistDump(&f->icp.reply_svc_time, sentry, NULL);
    storeAppendPrintf(sentry, "dns.svc_time histogram:\n");
    statHistDump(&f->dns.svc_time, sentry, NULL);
#endif

    storeAppendPrintf(sentry, "unlink.requests = %d\n",