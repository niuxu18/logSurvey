     assert(replyData->auth_user_request != NULL);
     Auth::UserRequest::Pointer auth_user_request = replyData->auth_user_request;
 
+    static bool oldHelperWarningDone = false;
     switch (reply.result) {
-    case HelperReply::Error: {
-        /* allow this because the digest_request pointer is purely local */
-        Auth::Digest::UserRequest *digest_request = dynamic_cast<Auth::Digest::UserRequest *>(auth_user_request.getRaw());
-        assert(digest_request);
+    case HelperReply::Unknown: {
+        // Squid 3.3 and older the digest helper only returns a HA1 hash (no "OK")
+        // the HA1 will be found in content() for these responses.
+        if (!oldHelperWarningDone) {
+            debugs(29, DBG_IMPORTANT, "WARNING: Digest auth helper returned old format HA1 response. It needs to be upgraded.");
+            oldHelperWarningDone=true;
+        }
 
-        digest_request->user()->credentials(Auth::Failed);
-        digest_request->flags.invalid_password = 1;
+        /* allow this because the digest_request pointer is purely local */
+        Auth::Digest::User *digest_user = dynamic_cast<Auth::Digest::User *>(auth_user_request->user().getRaw());
+        assert(digest_user != NULL);
 
-        if (reply.other().hasContent())
-            digest_request->setDenyMessage(reply.other().content());
+        CvtBin(reply.other().content(), digest_user->HA1);
+        digest_user->HA1created = 1;
     }
     break;
 
-    case HelperReply::Unknown: // Squid 3.2 and older the digest helper only returns a HA1 hash (no "OK")
     case HelperReply::Okay: {
         /* allow this because the digest_request pointer is purely local */
         Auth::Digest::User *digest_user = dynamic_cast<Auth::Digest::User *>(auth_user_request->user().getRaw());
         assert(digest_user != NULL);
 
-        CvtBin(reply.other().content(), digest_user->HA1);
-        digest_user->HA1created = 1;
+        Note::Pointer ha1Note = reply.notes.find("ha1");
+        if (ha1Note != NULL) {
+            CvtBin(ha1Note->firstValue(), digest_user->HA1);
+            digest_user->HA1created = 1;
+        } else {
+            debugs(29, DBG_IMPORTANT, "ERROR: Digest auth helper did not produce a HA1. Using the wrong helper program? received: " << reply);
+        }
     }
     break;
 
-    default:
-        ; // XXX: handle other states properly.
+    case HelperReply::TT:
+        debugs(29, DBG_IMPORTANT, "ERROR: Digest auth does not support the result code received. Using the wrong helper program? received: " << reply);
+        // fall through to next case. Handle this as an ERR response.
+
+    case HelperReply::BrokenHelper:
+        // TODO retry the broken lookup on another helper?
+        // fall through to next case for now. Handle this as an ERR response silently.
+
+    case HelperReply::Error: {
+        /* allow this because the digest_request pointer is purely local */
+        Auth::Digest::UserRequest *digest_request = dynamic_cast<Auth::Digest::UserRequest *>(auth_user_request.getRaw());
+        assert(digest_request);
+
+        digest_request->user()->credentials(Auth::Failed);
+        digest_request->flags.invalid_password = 1;
+
+        Note::Pointer msgNote = reply.notes.find("message");
+        if (msgNote != NULL) {
+            digest_request->setDenyMessage(msgNote->firstValue());
+        } else if (reply.other().hasContent()) {
+            // old helpers did send ERR result but a bare message string instead of message= key name.
+            digest_request->setDenyMessage(reply.other().content());
+            if (!oldHelperWarningDone) {
+                debugs(29, DBG_IMPORTANT, "WARNING: Digest auth helper returned old format ERR response. It needs to be upgraded.");
+                oldHelperWarningDone=true;
+            }
+        }
+    }
+    break;
     }
 
     void *cbdata = NULL;
