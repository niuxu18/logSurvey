    storeAppendPrintf(sentry, "IP ADDRESS                                     # QUERIES # REPLIES\n");
    storeAppendPrintf(sentry, "---------------------------------------------- --------- ---------\n");

    for (i = 0; i < nns; i++) {
        storeAppendPrintf(sentry, "%-45s %9d %9d\n",  /* Let's take the maximum: (15 IPv4/45 IPv6) */
                          nameservers[i].S.NtoA(buf,MAX_IPSTRLEN),
                          nameservers[i].nqueries,