
#if !(HAVE_MSTATS && HAVE_GNUMALLOC_H) && HAVE_MALLINFO && HAVE_STRUCT_MALLINFO

    storeAppendPrintf(sentry, "\tTotal accounted:       %6.0f KB %3.0f%%\n",
                      stats.total_accounted / 1024, Math::doublePercent(stats.total_accounted, t));

#else

    storeAppendPrintf(sentry, "\tTotal accounted:       %6.0f KB\n",
                      stats.total_accounted / 1024);

#endif
    {
        MemPoolGlobalStats mp_stats;
        memPoolGetGlobalStats(&mp_stats);
#if !(HAVE_MSTATS && HAVE_GNUMALLOC_H) && HAVE_MALLINFO && HAVE_STRUCT_MALLINFO

        storeAppendPrintf(sentry, "\tmemPool accounted:     %6.0f KB %3.0f%%\n",
                          stats.mem_pool_allocated / 1024,
                          Math::doublePercent(stats.mem_pool_allocated, t));

        const double iFree = max(0.0, t - stats.mem_pool_allocated);
        storeAppendPrintf(sentry, "\tmemPool unaccounted:   %6.0f KB %3.0f%%\n",
                          (t - stats.mem_pool_allocated) / 1024,
                          Math::doublePercent(iFree, t));
#endif

        storeAppendPrintf(sentry, "\tmemPoolAlloc calls: %9.0f\n",
                          stats.gb_saved_count);
        storeAppendPrintf(sentry, "\tmemPoolFree calls:  %9.0f\n",
                          stats.gb_freed_count);
    }

    storeAppendPrintf(sentry, "File descriptor usage for %s:\n", APP_SHORTNAME);
    storeAppendPrintf(sentry, "\tMaximum number of file descriptors:   %4.0f\n",
                      stats.max_fd);
    storeAppendPrintf(sentry, "\tLargest file desc currently in use:   %4.0f\n",
                      stats.biggest_fd);
    storeAppendPrintf(sentry, "\tNumber of file desc currently in use: %4.0f\n",
                      stats.number_fd);
    storeAppendPrintf(sentry, "\tFiles queued for open:                %4.0f\n",
                      stats.opening_fd);
    storeAppendPrintf(sentry, "\tAvailable number of file descriptors: %4.0f\n",
                      stats.num_fd_free);
    storeAppendPrintf(sentry, "\tReserved number of file descriptors:  %4.0f\n",
                      stats.reserved_fd);
    storeAppendPrintf(sentry, "\tStore Disk files open:                %4.0f\n",
                      stats.store_open_disk_fd);

    storeAppendPrintf(sentry, "Internal Data Structures:\n");
    storeAppendPrintf(sentry, "\t%6.0f StoreEntries\n",
                      stats.store_entries);
    storeAppendPrintf(sentry, "\t%6.0f StoreEntries with MemObjects\n",
                      stats.store_mem_entries);
    storeAppendPrintf(sentry, "\t%6.0f Hot Object Cache Items\n",
                      stats.hot_obj_count);
    storeAppendPrintf(sentry, "\t%6.0f on-disk objects\n",
                      stats.n_disk_objects);
}

void
DumpMallocStatistics(StoreEntry* sentry)
{
#if XMALLOC_STATISTICS

    xm_deltat = current_dtime - xm_time;
