
    /* stuff the header with required entries and pack it */

    if (rep->header.has(Http::HdrType::CONTENT_TYPE))
        hdr.putStr(Http::HdrType::CONTENT_TYPE, rep->header.getStr(Http::HdrType::CONTENT_TYPE));

    httpHeaderAddContRange(&hdr, *spec, rep->content_length);

