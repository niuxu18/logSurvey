    buf.Printf("OPTIONS " SQUIDSTRINGPH " ICAP/1.0\r\n", SQUIDSTRINGPRINT(uri));
    const String host = s.cfg().host;
    buf.Printf("Host: " SQUIDSTRINGPH ":%d\r\n", SQUIDSTRINGPRINT(host), s.cfg().port);

    if (!TheConfig.reuse_connections)
        buf.Printf("Connection: close\r\n");

    if (TheConfig.allow206_enable)
        buf.Printf("Allow: 206\r\n");
    buf.append(ICAP::crlf, 2);