	    describeTimestamps(entry),
	    (int) entry->refcount,
	    storePendingNClients(entry),
	    mem ? mem->e_current_len : entry->object_len,
	    entry->url);
    }
    storeAppendPrintf(sentry, close_bracket);
