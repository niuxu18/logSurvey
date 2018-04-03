        if (e->id == HDR_FTP_PRE) {
            String raw;
            if (httpHeaderParseQuotedString(e->value.rawBuf(), e->value.size(), &raw))
                mb.appendf("%s\r\n", raw.termedBuf());
        }
    }

    if (header.has(HDR_FTP_STATUS)) {
        const char *reason = header.getStr(HDR_FTP_REASON);
        mb.appendf("%i %s\r\n", header.getInt(HDR_FTP_STATUS),
                  (reason ? reason : 0));
    }
}
