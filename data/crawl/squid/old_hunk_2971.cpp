        memset(dbuf, '\0', strlen(dbuf));
    } else {
        /* FAIL */
/*
        snprintf(bbuf, sz, "%s: local_printfx(%s) FAILURE: %zd\n", prog, dbuf, x);
        fputs(bbuf, stderr);
*/
        debug("local_printfx() FAILURE: %zd\n", x);
    }

