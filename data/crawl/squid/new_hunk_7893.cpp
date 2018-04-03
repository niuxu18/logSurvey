{
    hash_link *ptr = NULL;

    if (e->key == NULL)
	fatal_dump("storeSetMemStatus: NULL key");

    if (status != IN_MEMORY && e->mem_status == IN_MEMORY) {
	if ((ptr = hash_lookup(in_mem_table, e->key)))
	    hash_delete_link(in_mem_table, ptr);
    } else if (status == IN_MEMORY && e->mem_status != IN_MEMORY) {
	hash_insert(in_mem_table, e->key, e);
    }
    e->mem_status = status;
}