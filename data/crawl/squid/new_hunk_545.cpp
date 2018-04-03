ConnStateData::parseProxy2p0()
{
    static const SBuf::size_type prefixLen = Proxy2p0magic.length();
    if (inBuf.length() < prefixLen + 4)
        return false; // need more bytes

    if ((inBuf[prefixLen] & 0xF0) != 0x20) // version == 2 is mandatory
        return proxyProtocolError("PROXY/2.0 error: invalid version");

    const char command = (inBuf[prefixLen] & 0x0F);
    if ((command & 0xFE) != 0x00) // values other than 0x0-0x1 are invalid
        return proxyProtocolError("PROXY/2.0 error: invalid command");

    const char family = (inBuf[prefixLen+1] & 0xF0) >>4;
    if (family > 0x3) // values other than 0x0-0x3 are invalid
        return proxyProtocolError("PROXY/2.0 error: invalid family");

    const char proto = (inBuf[prefixLen+1] & 0x0F);
    if (proto > 0x2) // values other than 0x0-0x2 are invalid
        return proxyProtocolError("PROXY/2.0 error: invalid protocol type");

    const char *clen = inBuf.rawContent() + prefixLen + 2;
    uint16_t len;
    memcpy(&len, clen, sizeof(len));
    len = ntohs(len);

    if (inBuf.length() < prefixLen + 4 + len)
        return false; // need more bytes

    inBuf.consume(prefixLen + 4); // 4 being the extra bytes
    const SBuf extra = inBuf.consume(len);
    needProxyProtocolHeader_ = false; // found successfully

    // LOCAL connections do nothing with the extras