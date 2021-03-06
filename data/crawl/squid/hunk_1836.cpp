          * existing user or a new user */
         local_auth_user->expiretime = current_time.tv_sec;
         auth_user_request->user()->credentials(Auth::Ok);
-        debugs(29, 4, HERE << "Successfully validated user via NTLM. Username '" << blob << "'");
+        debugs(29, 4, HERE << "Successfully validated user via NTLM. Username '" << auth_user_request->user()->username() << "'");
     }
     break;
 
-    case HelperReply::NA:
-    case HelperReply::Error:
+    case HelperReply::Error: {
         /* authentication failure (wrong password, etc.) */
-        auth_user_request->denyMessage(blob);
+        Note::Pointer errNote = reply.notes.find("message");
+        if (errNote != NULL)
+            auth_user_request->denyMessage(errNote->firstValue());
+        else
+            auth_user_request->denyMessage("NTLM Authentication denied with no reason given");
         auth_user_request->user()->credentials(Auth::Failed);
         safe_free(lm_request->server_blob);
         lm_request->releaseAuthServer();
-        debugs(29, 4, HERE << "Failed validating user via NTLM. Error returned '" << blob << "'");
-        break;
+        debugs(29, 4, HERE << "Failed validating user via NTLM. Error returned '" << errNote->firstValue() << "'");
+    }
+    break;
 
     case HelperReply::Unknown:
         debugs(29, DBG_IMPORTANT, "ERROR: NTLM Authentication Helper '" << reply.whichServer << "' crashed!.");
-        blob = "Internal error";
         /* continue to the next case */
 
-    case HelperReply::BrokenHelper:
+    case HelperReply::BrokenHelper: {
         /* TODO kick off a refresh process. This can occur after a YR or after
          * a KK. If after a YR release the helper and resubmit the request via
          * Authenticate NTLM start.
          * If after a KK deny the user's request w/ 407 and mark the helper as
          * Needing YR. */
-        auth_user_request->denyMessage(blob);
+        Note::Pointer errNote = reply.notes.find("message");
+        if (reply.result == HelperReply::Unknown)
+            auth_user_request->denyMessage("Internal Error");
+        else if (errNote != NULL)
+            auth_user_request->denyMessage(errNote->firstValue());
+        else
+            auth_user_request->denyMessage("NTLM Authentication failed with no reason given");
         auth_user_request->user()->credentials(Auth::Failed);
         safe_free(lm_request->server_blob);
         lm_request->releaseAuthServer();
         debugs(29, DBG_IMPORTANT, "ERROR: NTLM Authentication validating user. Error returned '" << reply << "'");
-        break;
+    }
+    break;
     }
 
     if (lm_request->request) {
