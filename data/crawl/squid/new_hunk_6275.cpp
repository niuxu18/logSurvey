	}
	return;
    } else {
	debug(35,1)("fqdncache_nbgethostbyaddr: BAD status %d",
		(int) f->status);
	assert(0);
    }

    /* for HIT, PENDING, DISPATCHED we've returned.  For MISS we continue */