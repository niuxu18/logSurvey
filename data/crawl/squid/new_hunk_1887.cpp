         * existing user or a new user */
        local_auth_user->expiretime = current_time.tv_sec;
        auth_user_request->user()->credentials(Auth::Ok);
        debugs(29, 4, HERE << "Successfully validated user via Negotiate. Username '" << auth_user_request->user()->username() << "'");
    }
    break;

    case HelperReply::Error: {
        Note::Pointer messageNote = reply.notes.find("message");
        Note::Pointer tokenNote = reply.notes.find("token");
        if (tokenNote == NULL) {
            /* protocol error */
            fatalf("authenticateNegotiateHandleReply: *** Unsupported helper response ***, '%s'\n", reply.other().content());
            break;
        }

        /* authentication failure (wrong password, etc.) */
        auth_user_request->denyMessage(messageNote->firstValue());
        auth_user_request->user()->credentials(Auth::Failed);
        safe_free(lm_request->server_blob);
        lm_request->server_blob = xstrdup(tokenNote->firstValue());
        lm_request->releaseAuthServer();
        debugs(29, 4, HERE << "Failed validating user via Negotiate. Error returned '" << reply << "'");
    }
    break;

    case HelperReply::Unknown:
        debugs(29, DBG_IMPORTANT, "ERROR: Negotiate Authentication Helper '" << reply.whichServer << "' crashed!.");
        /* continue to the next case */

    case HelperReply::BrokenHelper: {
        /* TODO kick off a refresh process. This can occur after a YR or after
         * a KK. If after a YR release the helper and resubmit the request via
         * Authenticate Negotiate start.
         * If after a KK deny the user's request w/ 407 and mark the helper as
         * Needing YR. */
        Note::Pointer errNote = reply.notes.find("message");
        if (reply.result == HelperReply::Unknown)
            auth_user_request->denyMessage("Internal Error");
        else if (errNote != NULL)
            auth_user_request->denyMessage(errNote->firstValue());
        else
            auth_user_request->denyMessage("Negotiate Authentication failed with no reason given");
        auth_user_request->user()->credentials(Auth::Failed);
        safe_free(lm_request->server_blob);
        lm_request->releaseAuthServer();
        debugs(29, DBG_IMPORTANT, "ERROR: Negotiate Authentication validating user. Error returned " << reply);
    } // break;
    }

    if (lm_request->request) {
        HTTPMSGUNLOCK(lm_request->request);
        lm_request->request = NULL;
