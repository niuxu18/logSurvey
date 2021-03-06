                      "Request");

    for (link = hlp->servers.head; link; link = link->next) {
        helper_server *srv = (helper_server*)link->data;
        double tt = srv->requests[0] ? 0.001 * tvSubMsec(srv->requests[0]->dispatch_time, current_time) : 0.0;
        storeAppendPrintf(sentry, "%7d\t%7d\t%7d\t%11d\t%c%c%c%c%c\t%7.3f\t%7d\t%s\n",
                          srv->index + 1,
                          srv->rfd,
                          srv->pid,
                          srv->stats.uses,
                          srv->flags.alive ? 'A' : ' ',
                          srv->stats.pending ? 'B' : ' ',
                          srv->flags.writing ? 'W' : ' ',
                          srv->flags.closing ? 'C' : ' ',
                          srv->flags.shutdown ? 'S' : ' ',
                          tt < 0.0 ? 0.0 : tt,
                          (int) srv->roffset,
                          srv->requests[0] ? log_quote(srv->requests[0]->buf) : "(none)");
    }

    storeAppendPrintf(sentry, "\nFlags key:\n\n");
    storeAppendPrintf(sentry, "   A = ALIVE\n");
    storeAppendPrintf(sentry, "   B = BUSY\n");
    storeAppendPrintf(sentry, "   W = BUSY\n");
    storeAppendPrintf(sentry, "   C = CLOSING\n");
    storeAppendPrintf(sentry, "   S = SHUTDOWN\n");
}
