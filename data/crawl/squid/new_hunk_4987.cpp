{
    MemBuf mb;

    mb.init();

    mb.Printf("HTTP/1.0 200 OK Gatewaying\r\n"
              "Server: Squid/%s\r\n"
              "Date: %s\r\n",
              version_string, mkrfc1123(squid_curtime));

    switch (gopherState->type_id) {

