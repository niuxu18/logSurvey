 *****************************************************************************/

static void
dump_wordlist(StoreEntry * entry, wordlist *words)
{
    for (wordlist *word = words; word; word = words->next)
        storeAppendPrintf(entry, "%s ", word->key);
}

static void
dump_acl(StoreEntry * entry, const char *name, ACL * ae)
{
    while (ae != NULL) {
        debugs(3, 3, "dump_acl: " << name << " " << ae->name);
        storeAppendPrintf(entry, "%s %s %s %s ",
                          name,
                          ae->name,
                          ae->typeString(),
                          ae->flags.flagsStr());
        wordlist *w = ae->dump();
        dump_wordlist(entry, w);

        storeAppendPrintf(entry, "\n");
        wordlistDestroy(&w);