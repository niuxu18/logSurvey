    storeAppendPrintf(e, "FTP Directory: ");
    /* "ftp://" == 6 characters */
    assert(ftpState->title_url.size() >= 6);
    title = html_quote(ftpState->title_url.buf());

    for (i = 6, j = 0; title[i]; j = i) {
        storeAppendPrintf(e, "<A HREF=\"");
        i += strcspn(&title[i], "/");

        if (title[i] == '/')
            i++;

        for (k = 0; k < i; k++)
            storeAppendPrintf(e, "%c", title[k]);

        storeAppendPrintf(e, "\">");

        for (k = j; k < i - 1; k++)
            storeAppendPrintf(e, "%c", title[k]);

        if (ftpState->title_url.buf()[k] != '/')
            storeAppendPrintf(e, "%c", title[k++]);

        storeAppendPrintf(e, "</A>");

        if (k < i)
            storeAppendPrintf(e, "%c", title[k++]);

        if (i == j) {
            /* Error guard, or "assert" */
            storeAppendPrintf(e, "ERROR: Failed to parse URL: %s\n",
                              html_quote(ftpState->title_url.buf()));
            debug(9, 0) ("Failed to parse URL: %s\n", ftpState->title_url.buf());
            break;
        }
    }