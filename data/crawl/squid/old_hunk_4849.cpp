        excess = mp_st->chunks_inuse - needed;
    }

    storeAppendPrintf(e, "%4d\t %4d\t %4d\t %4d\t %.1f\t ",
                      mp_st->chunks_alloc, mp_st->chunks_inuse, mp_st->chunks_free, mp_st->chunks_partial,
                      xpercent(excess, needed));
    /*
     *  Fragmentation calculation:
     *    needed = inuse.level / chunk_capacity
