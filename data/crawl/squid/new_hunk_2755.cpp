    storeAppendPrintf(&e, "Current Size: %"PRIu64" KB %.2f%%\n", cur_size,
                      100.0 * cur_size / max_size);

    if (map) {
        const int limit = map->entryLimit();
        storeAppendPrintf(&e, "Maximum entries: %9d\n", limit);
        if (limit > 0)
            storeAppendPrintf(&e, "Current entries: %9d %.2f%%\n",
                map->entryCount(), (100.0 * map->entryCount() / limit));
    }    

    storeAppendPrintf(&e, "Pending operations: %d out of %d\n",
        store_open_disk_fd, Config.max_open_disk_fds);