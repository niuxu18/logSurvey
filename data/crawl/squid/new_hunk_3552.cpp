    else
        prefix[0] = '\0';

    if ((parts = ftpListParseParts(line, flags)) == NULL) {
        const char *p;

        html = new MemBuf();
        html->init();
        html->Printf("<tr class=\"entry\"><td colspan=\"5\">%s</td></tr>\n", line);

        for (p = line; *p && xisspace(*p); p++);
        if (*p && !xisspace(*p))
