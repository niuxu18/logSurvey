    HttpHeader *hdr;
    sline.set(Http::ProtocolVersion(), status, NULL);
    hdr = &header;
    hdr->putStr(HDR_SERVER, APP_FULLNAME);
    hdr->putTime(HDR_DATE, squid_curtime);
    hdr->putInt64(HDR_CONTENT_LENGTH, 0);
    hdr->putStr(HDR_LOCATION, loc);
    date = squid_curtime;
    content_length = 0;
}
