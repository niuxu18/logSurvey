	hot_obj_count);
    storeAppendPrintf(sentry, "\t%6d Filemap bits set\n",
	storeDirMapBitsInUse());
    storeAppendPrintf(sentry, "\t%6d on-disk objects\n",
	n_disk_objects);

#if XMALLOC_STATISTICS
    storeAppendPrintf(sentry, "Memory allocation statistics\n");