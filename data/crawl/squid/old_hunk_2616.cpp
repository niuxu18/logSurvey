         * Needing YR. */
        auth_user_request->denyMessage(blob);
        auth_user_request->user()->credentials(Auth::Failed);
        safe_free(ntlm_request->server_blob);
        ntlm_request->releaseAuthServer();
        debugs(29, 1, "authenticateNTLMHandleReply: Error validating user via NTLM. Error returned '" << reply << "'");
    } else {
        /* protocol error */
        fatalf("authenticateNTLMHandleReply: *** Unsupported helper response ***, '%s'\n", reply);
    }

    if (ntlm_request->request) {
        HTTPMSGUNLOCK(ntlm_request->request);
        ntlm_request->request = NULL;
    }
    r->handler(r->data, NULL);
    cbdataReferenceDone(r->data);