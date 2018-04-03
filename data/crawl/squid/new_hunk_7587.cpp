 * Fetch aborted.  Tell all clients to go home.  Negatively cache
 * abort message, freeing the data for this object 
 */
void storeAbort(e, msg)
     StoreEntry *e;
     char *msg;
{
    LOCAL_ARRAY(char, mime_hdr, 300);
    LOCAL_ARRAY(char, abort_msg, 2000);
    MemObject *mem = e->mem_obj;

    if (e->store_status != STORE_PENDING) {	/* XXX remove later */
	debug_trap("storeAbort: bad store_status");
	return;
    } else if (mem == NULL) {		/* XXX remove later */
	debug_trap("storeAbort: null mem");
	return;
    }

    debug(20, 6, "storeAbort: '%s'\n", e->key);
    storeNegativeCache(e);
