		((float) p->hit +
		(float) p->miss);
	}
	storeAppendPrintf(sentry, "{%s %d %d %d %d %4.2f %d %d %d}\n",
	    p->protoname,
	    p->object_count,
	    p->kb.max,
