        auth_user_request->denyMessage(blob);
        negotiate_request->auth_state = AUTHENTICATE_STATE_FAILED;
        safe_free(negotiate_request->server_blob);
        negotiate_request->releaseAuthServer();
        debugs(29, 1, "authenticateNegotiateHandleReply: Error validating user via Negotiate. Error returned '" << reply << "'");
    } else {
        /* protocol error */
