    while ((p = strchr(m, '%'))) {
        content->append(m, p - m);  /* copy */
        const char *t = Convert(*++p, false, allowRecursion);   /* convert */
        content->Printf("%s", t);   /* copy */
        m = p + 1;          /* advance */
    }

    if (*m)
        content->Printf("%s", m);   /* copy tail */

    content->terminate();

