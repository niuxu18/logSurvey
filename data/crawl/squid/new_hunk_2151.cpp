
    int i = 0;
    for (hash_link *walker = hid->next; walker; walker = hash_next(hid)) {
        storeAppendPrintf(e, "\t item %5d: %s\n", i, (char *)(walker->key));
        ++i;
    }
}
