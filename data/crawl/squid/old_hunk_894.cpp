        if (isSet(flag) && flag != CC_OTHER) {

            /* print option name for all options */
            packerPrintf(p, (pcount ? ", %s": "%s") , CcAttrs[flag].name);

            /* for all options having values, "=value" after the name */
            switch (flag) {
            case CC_MAX_AGE:
                packerPrintf(p, "=%d", (int) maxAge());
                break;
            case CC_S_MAXAGE:
                packerPrintf(p, "=%d", (int) sMaxAge());
                break;
            case CC_MAX_STALE:
                /* max-stale's value is optional.
                  If we didn't receive it, don't send it */
                if (maxStale()!=MAX_STALE_ANY)
                    packerPrintf(p, "=%d", (int) maxStale());
                break;
            case CC_MIN_FRESH:
                packerPrintf(p, "=%d", (int) minFresh());
                break;
            default:
                /* do nothing, directive was already printed */