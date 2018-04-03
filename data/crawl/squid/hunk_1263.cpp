 }
 
 HttpReply *
-Ftp::Relay::createHttpReply(const Http::StatusCode httpStatus, const int clen)
-{
-    HttpReply *const reply = new HttpReply;
-    reply->sline.set(Http::ProtocolVersion(1, 1), httpStatus);
-    HttpHeader &header = reply->header;
-    header.putTime(HDR_DATE, squid_curtime);
-    {
-        HttpHdrCc cc;
-        cc.Private();
-        header.putCc(&cc);
-    }
-    if (clen >= 0)
-        header.putInt64(HDR_CONTENT_LENGTH, clen);
-
+Ftp::Relay::createHttpReply(const Http::StatusCode httpStatus, const int64_t clen)
+{
+    HttpReply *const reply = Ftp::HttpReplyWrapper(ctrl.replycode, ctrl.last_reply, httpStatus, clen);
     if (ctrl.message) {
         for (wordlist *W = ctrl.message; W && W->next; W = W->next)
-            header.putStr(HDR_FTP_PRE, httpHeaderQuoteString(W->key).c_str());
+            reply->header.putStr(HDR_FTP_PRE, httpHeaderQuoteString(W->key).c_str());
+        // no hdrCacheInit() is needed for after HDR_FTP_PRE addition
     }
-    if (ctrl.replycode > 0)
-        header.putInt(HDR_FTP_STATUS, ctrl.replycode);
-    if (ctrl.last_reply)
-        header.putStr(HDR_FTP_REASON, ctrl.last_reply);
-
-    reply->hdrCacheInit();
-
     return reply;
 }
 