        ntlm_request->request->flags.must_keepalive = 1;
        if (ntlm_request->request->flags.proxy_keepalive) {
            ntlm_request->server_blob = xstrdup(blob);
            ntlm_request->auth_state = AUTHENTICATE_STATE_IN_PROGRESS;
            auth_user_request->denyMessage("Authentication in progress");
            debugs(29, 4, "authenticateNTLMHandleReply: Need to challenge the client with a server blob '" << blob << "'");
        } else {
            ntlm_request->auth_state = AUTHENTICATE_STATE_FAILED;
            auth_user_request->denyMessage("NTLM authentication requires a persistent connection");
        }
    } else if (strncasecmp(reply, "AF ", 3) == 0) {
