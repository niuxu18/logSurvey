void
storeUfsDirDump(StoreEntry * entry, SwapDir * s)
{
    commonUfsDirDump (entry, s);
    dump_cachedir_options(entry, options, s);
}

/*
 * storeUfsDirParse
 *
