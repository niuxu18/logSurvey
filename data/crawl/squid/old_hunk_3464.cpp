    storeAppendPrintf(sentry, "program: %s\n",
                      hlp->cmdline->key);
    storeAppendPrintf(sentry, "number active: %d of %d (%d shutting down)\n",
                      hlp->n_active, hlp->n_to_start, (hlp->n_running - hlp->n_active) );
    storeAppendPrintf(sentry, "requests sent: %d\n",
                      hlp->stats.requests);
    storeAppendPrintf(sentry, "replies received: %d\n",
