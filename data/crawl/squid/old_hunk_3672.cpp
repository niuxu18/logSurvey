        helper_stateful_server *srv = (helper_stateful_server *)link->data;
        double tt = 0.001 * tvSubMsec(srv->dispatch_time, srv->flags.busy ? current_time : srv->answer_time);
        double tr = 0.001 * tvSubMsec(srv->dispatch_time, current_time);
        storeAppendPrintf(sentry, "%7d\t%7d\t%7d\t%11d\t%20d\t%c%c%c%c%c%c\t%7.3f\t%7.3f\t%7d\t%s\n",
                          srv->index + 1,
                          srv->rfd,
                          srv->pid,
                          srv->stats.uses,
                          (int) srv->deferred_requests,
                          srv->flags.busy ? 'B' : ' ',
                          srv->flags.closing ? 'C' : ' ',
                          srv->flags.reserved == S_HELPER_RESERVED ? 'R' : ' ',
                          srv->flags.reserved == S_HELPER_DEFERRED ? 'D' : ' ',
                          srv->flags.shutdown ? 'S' : ' ',
                          srv->request ? (srv->request->placeholder ? 'P' : ' ') : ' ',
                          tt < 0.0 ? 0.0 : tt,
                          srv->flags.reserved == S_HELPER_RESERVED || srv->flags.reserved != S_HELPER_DEFERRED || tr > 0.0 ? tr : 0.0,
                          (int) srv->roffset,
                          srv->request ? log_quote(srv->request->buf) : "(none)");
    }
