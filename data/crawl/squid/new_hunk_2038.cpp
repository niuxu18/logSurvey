        local_auth_user->expiretime = current_time.tv_sec;
        auth_user_request->user()->credentials(Auth::Ok);
        debugs(29, 4, HERE << "Successfully validated user via NTLM. Username '" << blob << "'");
    }
        break;

    case HelperReply::NA:
    case HelperReply::Error:
        /* authentication failure (wrong password, etc.) */
        auth_user_request->denyMessage(blob);
        auth_user_request->user()->credentials(Auth::Failed);
        safe_free(lm_request->server_blob);
        lm_request->releaseAuthServer();
        debugs(29, 4, HERE << "Failed validating user via NTLM. Error returned '" << blob << "'");
        break;

    case HelperReply::Unknown:
        debugs(29, DBG_IMPORTANT, "ERROR: NTLM Authentication Helper '" << reply.whichServer << "' crashed!.");
        blob = "Internal error";
        /* continue to the next case */

    case HelperReply::BrokenHelper:
        /* TODO kick off a refresh process. This can occur after a YR or after
         * a KK. If after a YR release the helper and resubmit the request via
         * Authenticate NTLM start.
