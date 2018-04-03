    for (link = hlp->servers.head; link; link = link->next) {
	srv = link->data;
	tt = 0.001 * tvSubMsec(srv->dispatch_time, current_time);
	storeAppendPrintf(sentry, "%7d\t%7d\t%11d\t%11d\t%c%c%c%c%c\t%7.3f\t%7d\t%s\n",
	    srv->index + 1,
	    srv->rfd,
	    srv->stats.uses,
	    srv->deferred_requests,
	    srv->flags.alive ? 'A' : ' ',
	    srv->flags.busy ? 'B' : ' ',
	    srv->flags.closing ? 'C' : ' ',
	    srv->flags.reserved != S_HELPER_FREE ? 'R' : ' ',
	    srv->flags.shutdown ? 'S' : ' ',
	    tt < 0.0 ? 0.0 : tt,
	    (int) srv->offset,
	    srv->request ? log_quote(srv->request->buf) : "(none)");
