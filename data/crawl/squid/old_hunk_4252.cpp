         * might want to know. Someone _will_ want to know OTOH, the first
         * X-CACHE-MISS entry should tell us who.
         */
        httpHeaderPutStrf(&rep->header, HDR_X_SQUID_ERROR, "%s %d",
                          name, err->xerrno);
        httpBodySet(&rep->body, content);
        /* do not memBufClean() or delete the content, it was absorbed by httpBody */
    }

    return rep;
}

/// \ingroup ErrorPageInternal
static MemBuf *
errorBuildContent(ErrorState * err)
{
    MemBuf *content = new MemBuf;
    const char *m;
    const char *p;
    const char *t;
    assert(err != NULL);
    assert(err->page_id > ERR_NONE && err->page_id < error_page_count);
    content->init();
    m = error_text[err->page_id];
    assert(m);

    while ((p = strchr(m, '%'))) {
        content->append(m, p - m);	/* copy */
        t = errorConvert(*++p, err);	/* convert */
        content->Printf("%s", t);	/* copy */
        m = p + 1;		/* advance */
    }

    if (*m)