	(QS) sortByHops);
    for (k = 0; k < i; k++) {
	n = *(list + k);
	storeAppendPrintf(sentry, "{%-16.16s %7.1f %5.1f",
	    n->network,
	    n->rtt,
	    n->hops);
	for (x = n->hosts; x; x = x->next)