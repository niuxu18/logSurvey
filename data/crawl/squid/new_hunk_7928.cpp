{
    /* validity check -- sometimes it's called with bogus values */
    if (e == NULL || !has_mem_obj(e) || e->mem_obj->data == NULL) {
	debug(20, 0, "storeAppend (len = %d): Invalid StoreEntry, aborting...\n",
	    len);
	if (len < 512)
	    fwrite(data, len, 1, debug_log);
	debug(20, 0, "%s", storeToString(e));
	fatal_dump(NULL);
    }
    if (len) {
	debug(20, 5, "storeAppend: appending %d bytes for %s\n", len, e->url);

	/* get some extra storage if needed */
	(void) storeGetMemSpace(len, 0);
	store_mem_size += len;
	debug(20, 8, "storeAppend: growing store_mem_size by %d\n", len);
	debug(20, 8, "storeAppend: store_mem_size = %d\n", store_mem_size);

	(void) e->mem_obj->data->mem_append(e->mem_obj->data,
	    data, len);
	e->mem_obj->e_current_len += len;
	debug(20, 8, "storeAppend: e_current_len = %d\n",
	    e->mem_obj->e_current_len);
    }
    if ((e->status != STORE_ABORTED) && !(e->flag & DELAY_SENDING))
