}


/* store change key */
void storeChangeKey(e)
     StoreEntry *e;
{
    StoreEntry *result = NULL;
    static char key[MAX_URL + 32];
    hash_link *table_entry = NULL;

    if (!e)
	return;

    if (e->key == NULL) {
	debug(25, 0, "storeChangeKey: NULL key for %s\n", e->url);
	return;
    }
    if ((table_entry = hash_lookup(table, e->key)))
	result = (StoreEntry *) table_entry;
    if (result != e) {
	debug(25, 1, "storeChangeKey: Key is not unique for key: %s\n", e->key);
	return;
    }
    storeHashDelete(table_entry);
    key[0] = '\0';
    sprintf(key, "/x%d/%s", keychange_count++, e->key);
    if (!(result->flag & KEY_URL))
	safe_free(result->key);
    result->key = xstrdup(key);
    storeHashInsert(e);
    BIT_SET(result->flag, KEY_CHANGE);
    BIT_RESET(result->flag, KEY_URL);
}

#ifdef OLD_CODE
void storeUnChangeKey(e)
     StoreEntry *e;
{
    StoreEntry *E1 = NULL;
    StoreEntry *E2 = NULL;
    static char key[MAX_URL + 32];
    hash_link *table_entry = NULL;
    char *t = NULL;

    if (!e)
	return;

    if (e->key == NULL) {
	debug(25, 0, "storeUnChangeKey: NULL key for %s\n", e->url);
	return;
    }
    if ((table_entry = hash_lookup(table, e->key)))
	E1 = (StoreEntry *) table_entry;
    if (E1 != e) {
	debug(25, 1, "storeUnChangeKey: Key is not unique for key: %s\n",
	    e->key);
	return;
    }
    storeHashDelete(table_entry);
    key[0] = '\0';
    /* find second slash */
    t = strchr(e->key + 1, '/');
    if (t == NULL)
	fatal_dump("storeUnChangeKey: Can't find a second slash.\n");
    strcpy(key, t + 1);
    if ((table_entry = hash_lookup(table, key))) {
	debug(25, 0, "storeUnChangeKey: '%s' already exists!  Releasing/Moving.\n",
	    key);
	E2 = (StoreEntry *) table_entry;
	/* get rid of the old entry */
	if (storeEntryLocked(E2)) {
	    /* change original hash key to get out of the new object's way */
	    storeChangeKey(E2);
	    BIT_SET(E2->flag, RELEASE_REQUEST);
	} else {
	    storeRelease(E2);
	}
    }
    if (!(E1->flag & KEY_URL))
	safe_free(E1->key);
    E1->key = xstrdup(key);
    storeHashInsert(e);
    BIT_RESET(E1->flag, KEY_CHANGE);
    BIT_SET(E1->flag, KEY_URL);
    debug(25, 1, "storeUnChangeKey: Changed back to '%s'\n", key);
}
#endif

/* return if the current key is the original one. */
int storeOriginalKey(e)
     StoreEntry *e;
