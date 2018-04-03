            auth_user_request->user()->credentials(Auth::Failed);
            auth_user_request->denyMessage("NTLM authentication requires a persistent connection");
        }
        break;

    case HelperReply::AF:
    case HelperReply::Okay:
    {
        /* we're finished, release the helper */
        auth_user_request->user()->username(blob);
        auth_user_request->denyMessage("Login successful");
