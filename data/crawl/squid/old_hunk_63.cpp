            break;
        }
        auth_user_request->user()->username(userLabel);
        auth_user_request->denyMessage("Login successful");
        safe_free(lm_request->server_blob);
        lm_request->releaseAuthServer();

