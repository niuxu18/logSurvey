    int i;
    struct _store_client *sc;
    dlink_node *node;
    storeAppendPrintf(s, "KEY %s\n", storeKeyText(e->key));
    if (mem)
	storeAppendPrintf(s, "\t%s %s\n",
	    RequestMethodStr[mem->method], mem->log_url);