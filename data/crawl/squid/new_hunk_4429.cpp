                      (int) i->addrs.count,
                      (int) i->addrs.badcount);

    /** \par
     * Negative-cached entries have no IPs listed. */
    if(i->flags.negcached) {
        storeAppendPrintf(sentry, "\n");
        return;
    }

    /** \par
     * Cached entries have IPs listed with a BNF of:   <IP> '-' ('OK'|'BAD') */
    for (k = 0; k < count; k++) {
        /* Display tidy-up: IPv6 are so big make the list vertical */
        if(k == 0)
            storeAppendPrintf(sentry, " %45.45s-%3s\n",
                              i->addrs.in_addrs[k].NtoA(buf,MAX_IPSTRLEN),
                              i->addrs.bad_mask[k] ? "BAD" : "OK ");
        else
            storeAppendPrintf(sentry, "%s %45.45s-%3s\n",
                              "                                                         ", /* blank-space indenting IP list */
                              i->addrs.in_addrs[k].NtoA(buf,MAX_IPSTRLEN),
                              i->addrs.bad_mask[k] ? "BAD" : "OK ");
    }
}

/* process objects list */