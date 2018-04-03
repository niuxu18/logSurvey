	return 0;
    }
    if (mem->reply->code == 304 && !BIT_TEST(icpState->request->flags, REQ_IMS)) {
	icpState->log_type = LOG_TCP_EXPIRED_HIT;
	/* We initiated the IMS request, the client is not expecting
	 * 304, so put the good one back */
	if (icpState->old_entry->mem_obj->request == NULL) {
	    icpState->old_entry->mem_obj->request = requestLink(mem->request);
	    unlink_request = 1;
	}
	storeUnlockObject(entry);
	entry = icpState->entry = icpState->old_entry;
	/* Extend the TTL
	 * XXX race condition here.  Assumes old_entry has been swapped 
	 * in by the time this 304 reply arrives.  */
	hbuf = get_free_8k_page();
	storeClientCopy(entry, 0, 8191, hbuf, &len, fd);
	if (!mime_headers_end(hbuf))
	    fatal_dump("icpHandleIMSReply: failed to load headers, lost race");
	httpParseHeaders(hbuf, entry->mem_obj->reply);
	put_free_8k_page(hbuf);
	ttlSet(entry);
	if (unlink_request) {
	    requestUnlink(entry->mem_obj->request);
	    entry->mem_obj->request = NULL;