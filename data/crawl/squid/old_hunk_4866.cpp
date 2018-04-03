void
self_destruct(void)
{
    shutting_down = 1;
    fatalf("Bungled %s line %d: %s",
           cfg_filename, config_lineno, config_input_line);
}

void
wordlistDestroy(wordlist ** list)
{
    wordlist *w = NULL;

    while ((w = *list) != NULL) {
        *list = w->next;
        safe_free(w->key);
        memFree(w, MEM_WORDLIST);
    }

    *list = NULL;
}

const char *
wordlistAdd(wordlist ** list, const char *key)
{
    while (*list)
        list = &(*list)->next;

    *list = static_cast<wordlist *>(memAllocate(MEM_WORDLIST));

    (*list)->key = xstrdup(key);

    (*list)->next = NULL;

    return (*list)->key;
}

void
wordlistJoin(wordlist ** list, wordlist ** wl)
{
    while (*list)
        list = &(*list)->next;

    *list = *wl;

    *wl = NULL;
}

void
wordlistAddWl(wordlist ** list, wordlist * wl)
{
    while (*list)
        list = &(*list)->next;

    for (; wl; wl = wl->next, list = &(*list)->next) {
        *list = static_cast<wordlist *>(memAllocate(MEM_WORDLIST));
        (*list)->key = xstrdup(wl->key);
        (*list)->next = NULL;
    }
}

void
wordlistCat(const wordlist * w, MemBuf * mb)
{
    while (NULL != w) {
        mb->Printf("%s\n", w->key);
        w = w->next;
    }
}

wordlist *
wordlistDup(const wordlist * w)
{
    wordlist *D = NULL;

    while (NULL != w) {
        wordlistAdd(&D, w->key);
        w = w->next;
    }

    return D;
}

/*
