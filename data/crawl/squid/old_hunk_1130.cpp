    if (m == 0) {
        fprintf(stderr, "squid_rn_delete: couldn't find our annotation\n");
        if (tt->rn_flags & RNF_NORMAL)
            return (0);		/* Dangling ref to us */
    }
on1:
    /*
