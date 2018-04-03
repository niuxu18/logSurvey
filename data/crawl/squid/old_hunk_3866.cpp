
    if (NULL != request) {
        Packer p;
        str.Printf("%s %s HTTP/%d.%d\n",
                   RequestMethodStr(request->method),
                   request->urlpath.size() ? request->urlpath.unsafeBuf() : "/",
                   request->http_ver.major, request->http_ver.minor);
        packerToMemInit(&p, &str);
        request->header.packInto(&p);