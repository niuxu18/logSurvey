        MemPool *pool = cbdata_index[i].pool;

        if (pool) {
            int obj_size = pool->obj_size - OFFSET_OF(cbdata, data);
            storeAppendPrintf(sentry, "%s\t%d\t%d\t%d\n", pool->label + 7, obj_size, pool->meter.inuse.level, obj_size * pool->meter.inuse.level);
        }
    }