    if (l2 <= 0)
	fatal("storeAufsDirParse: invalid level 2 directories value");

    aioinfo = xmalloc(sizeof(aioinfo_t));
    if (aioinfo == NULL)
	fatal("storeAufsDirParse: couldn't xmalloc() aioinfo_t!\n");

    sd->index = index;
    sd->path = xstrdup(path);
