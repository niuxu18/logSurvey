             const char *serverBlob = reply.notes.findFirst("token");
             lm_request->server_blob = xstrdup(serverBlob);
             auth_user_request->user()->credentials(Auth::Handshake);
-            auth_user_request->denyMessage("Authentication in progress");
+            auth_user_request->setDenyMessage("Authentication in progress");
             debugs(29, 4, HERE << "Need to challenge the client with a server token: '" << serverBlob << "'");
         } else {
             auth_user_request->user()->credentials(Auth::Failed);
-            auth_user_request->denyMessage("NTLM authentication requires a persistent connection");
+            auth_user_request->setDenyMessage("NTLM authentication requires a persistent connection");
         }
         break;
 
