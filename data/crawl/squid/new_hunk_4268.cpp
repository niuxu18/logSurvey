    HttpVersion ver(1,0);
    httpStatusLineSet(&sline, ver, status, httpStatusString(status));
    hdr = &header;
    hdr->putStr(HDR_SERVER, APP_FULLNAME);
    hdr->putTime(HDR_DATE, squid_curtime);
    hdr->putInt64(HDR_CONTENT_LENGTH, 0);
    hdr->putStr(HDR_LOCATION, loc);