    /* build uri in mb */
    static MemBuf mb;

    mb.reset();

    mb.Printf("http://%s", lc_host);

    /* append port if not default */
    if (port && port != urlDefaultPort(PROTO_HTTP))
        mb.Printf(":%d", port);

    if (dir)
        mb.Printf("%s", dir);

    mb.Printf("%s", name);

    /* return a pointer to a local static buffer */
    return mb.buf;
