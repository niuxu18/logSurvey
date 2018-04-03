    wordlist *result = NULL;
    wordlist *arg;
    MemBuf mb;
    memBufDefInit(&mb);
    memBufPrintf(&mb, "%s", acl->def->name);

    for (arg = acl->arguments; arg; arg = arg->next) {
        memBufPrintf(&mb, " %s", arg->key);
    }

    wordlistAdd(&result, mb.buf);
    memBufClean(&mb);
    return result;
}
