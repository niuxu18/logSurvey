    xfree(r->buf);
    delete r;
}

// TODO: should helper_ and helper_stateful_ have a common parent?
static bool
helperStartStats(StoreEntry *sentry, void *hlp, const char *label)
{
    if (!hlp) {
        if (label)
            storeAppendPrintf(sentry, "%s: unavailable\n", label);
        return false;
    }

    if (label)
        storeAppendPrintf(sentry, "%s:\n", label);

    return true;
}
