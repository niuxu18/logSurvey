    }

    // add Warnings required by RFC 2616 if serving a stale hit
    if (http->request->flags.staleIfHit && http->logType.isTcpHit()) {
        hdr->putWarning(110, "Response is stale");
        if (http->request->flags.needValidation)
            hdr->putWarning(111, "Revalidation failed");
    }

    /* Filter unproxyable authentication types */
    if (http->logType.oldType != LOG_TCP_DENIED &&
            hdr->has(HDR_WWW_AUTHENTICATE)) {
        HttpHeaderPos pos = HttpHeaderInitPos;
        HttpHeaderEntry *e;