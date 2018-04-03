
    if (ntlm_validate_packet(&auth->hdr, NTLM_AUTHENTICATE)) {
        fprintf(stderr, "ntlmDecodeAuth: header check fails\n");
        return NTLM_ERR_PROTOCOL;
    }
    debug("ntlmDecodeAuth: size of %d\n", size);
    debug("ntlmDecodeAuth: flg %08x\n", auth->flags);
