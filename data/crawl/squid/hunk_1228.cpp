     return PathedCommands.find(cmd) != PathedCommands.end();
 }
 
+/// creates a context filled with an error message for a given early error
+ClientSocketContext *
+Ftp::Server::earlyError(const EarlyErrorKind eek)
+{
+    /* Default values, to be updated by the switch statement below */
+    int scode = 421;
+    const char *reason = "Internal error";
+    const char *errUri = "error:ftp-internal-early-error";
+
+    switch (eek) {
+    case eekHugeRequest:
+        scode = 421;
+        reason = "Huge request";
+        errUri = "error:ftp-huge-request";
+        break;
+
+    case eekMissingLogin:
+        scode = 530;
+        reason = "Must login first";
+        errUri = "error:ftp-must-login-first";
+        break;
+
+    case eekMissingUsername:
+        scode = 501;
+        reason = "Missing username";
+        errUri = "error:ftp-missing-username";
+        break;
+
+    case eekMissingHost:
+        scode = 501;
+        reason = "Missing host";
+        errUri = "error:ftp-missing-host";
+        break;
+
+    case eekUnsupportedCommand:
+        scode = 502;
+        reason = "Unknown or unsupported command";
+        errUri = "error:ftp-unsupported-command";
+        break;
+
+    case eekInvalidUri:
+        scode = 501;
+        reason = "Invalid URI";
+        errUri = "error:ftp-invalid-uri";
+        break;
+
+    case eekMalformedCommand:
+        scode = 421;
+        reason = "Malformed command";
+        errUri = "error:ftp-malformed-command";
+        break;
+
+    // no default so that a compiler can check that we have covered all cases
+    }
+
+    ClientSocketContext *context = abortRequestParsing(errUri);
+    clientStreamNode *node = context->getClientReplyContext();
+    Must(node);
+    clientReplyContext *repContext = dynamic_cast<clientReplyContext *>(node->data.getRaw());
+
+    // We cannot relay FTP scode/reason via HTTP-specific ErrorState.
+    // TODO: When/if ErrorState can handle native FTP errors, use it instead.
+    HttpReply *reply = Ftp::HttpReplyWrapper(scode, reason, Http::scBadRequest, -1);
+    repContext->setReplyToReply(reply);
+    return context;
+}
+
 /// Parses a single FTP request on the control connection.
-/// Returns NULL on errors and incomplete requests.
+/// Returns a new ClientSocketContext on valid requests and all errors.
+/// Returns NULL on incomplete requests that may still succeed given more data.
 ClientSocketContext *
 Ftp::Server::parseOneRequest(Http::ProtocolVersion &ver)
 {
+    flags.readMore = false; // common for all but one case below
+
     // OWS <command> [ RWS <parameter> ] OWS LF
 
     // InlineSpaceChars are isspace(3) or RFC 959 Section 3.1.1.5.2, except