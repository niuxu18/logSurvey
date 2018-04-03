     * XXX These should use HttpHdr interfaces instead of Printfs
     */
    const Adaptation::ServiceConfig &s = service().cfg();
    buf.Printf("%s %.*s ICAP/1.0\r\n", s.methodStr(), s.uri.size(), s.uri.rawBuf());
    buf.Printf("Host: %.*s:%d\r\n", s.host.size(), s.host.rawBuf(), s.port);
    buf.Printf("Date: %s\r\n", mkrfc1123(squid_curtime));

    if (!TheICAPConfig.reuse_connections)