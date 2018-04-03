void
Auth::Config::dump(StoreEntry *entry, const char *name, Auth::Config *scheme)
{
    storeAppendPrintf(entry, "%s %s children %d startup=%d idle=%d concurrency=%d\n",
                      name, scheme->type(),
                      authenticateChildren.n_max, authenticateChildren.n_startup,
