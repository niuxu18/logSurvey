    HttpVersion ver(1,0);
    httpStatusLineSet(&sline, ver, status, httpStatusString(status));
    hdr = &header;
    hdr->putStr(HDR_SERVER, full_appname_string);
    hdr->putTime(HDR_DATE, squid_curtime);
    hdr->putInt(HDR_CONTENT_LENGTH, 0);
    hdr->putStr(HDR_LOCATION, loc);
    date = squid_curtime;
    content_length = 0;
}
