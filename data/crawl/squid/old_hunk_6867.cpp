    int list_count = 0;
    int removed = 0;
    list = xcalloc(meta_data.netdb_addrs, sizeof(netdbEntry *));
    for (n = hash_first(addr_table); n; n = hash_next(addr_table)) {
	*(list + list_count) = n;
	list_count++;
	if (list_count > meta_data.netdb_addrs)
	    fatal_dump("netdbPurgeLRU: list_count overflow");
    }
    qsort((char *) list,
	list_count,
