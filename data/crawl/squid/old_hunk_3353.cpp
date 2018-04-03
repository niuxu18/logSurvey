dump_refreshpattern(StoreEntry * entry, const char *name, refresh_t * head)
{
    while (head != NULL) {
        storeAppendPrintf(entry, "%s%s %s %d %d%% %d\n",
                          name,
                          head->flags.icase ? " -i" : null_string,
                          head->pattern,