    while (s) {
        storeAppendPrintf(e, "%s %s\n",
                          n,
                          s->s.toStr(ntoabuf,MAX_IPSTRLEN));
        s = s->next;
    }
}
