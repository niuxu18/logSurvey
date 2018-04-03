
    /* append Authorization if known in URL, not in header and going direct */
    if (!hdr_out->has(HDR_AUTHORIZATION)) {
        if (!request->flags.proxying() && request->login && *request->login) {
            httpHeaderPutStrf(hdr_out, HDR_AUTHORIZATION, "Basic %s",
                              old_base64_encode(request->login));
        }