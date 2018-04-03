
    /* append Via */
    if (Config.onoff.via) {
        string strVia;
        strVia = hdr_in->getList(HDR_VIA);
        snprintf(bbuf, BBUF_SZ, "%d.%d %s",
                 orig_request->http_ver.major,
                 orig_request->http_ver.minor, ThisCache);
        strListAdd(&strVia, bbuf, ',');
        hdr_out->putStr(HDR_VIA, strVia.c_str());
        strVia.clear();
    }

#if ESI
    {
        /* Append Surrogate-Capabilities */
        string strSurrogate (hdr_in->getList(HDR_SURROGATE_CAPABILITY));
        snprintf(bbuf, BBUF_SZ, "%s=\"Surrogate/1.0 ESI/1.0\"",
                 Config.Accel.surrogate_id);
        strListAdd(&strSurrogate, bbuf, ',');
        hdr_out->putStr(HDR_SURROGATE_CAPABILITY, strSurrogate.c_str());
    }
#endif

