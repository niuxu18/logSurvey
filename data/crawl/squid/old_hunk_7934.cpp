     StoreEntry *e;
{
    if (!e) {
	debug(0, 0, "This entry should be valid.\n");
	debug(0, 0, "%s", storeToString(e));
	fatal_dump(NULL);
    }
    return ((e->lock_count) ||
