          * X-CACHE-MISS entry should tell us who.
          */
         httpHeaderPutStrf(&rep->header, HDR_X_SQUID_ERROR, "%s %d", name, xerrno);
+
+#if USE_ERR_LOCALES
+        /*
+         * If error page auto-negotiate is enabled in any way, send the Vary.
+         * RFC 2616 section 13.6 and 14.44 says MAY and SHOULD do this.
+         * We have even better reasons though:
+         * see http://wiki.squid-cache.org/KnowledgeBase/VaryNotCaching
+         */
+        if(!Config.errorDirectory) {
+            /* We 'negotiated' this ONLY from the Accept-Language. */
+            httpHeaderDelById(&rep->header, HDR_VARY);
+            httpHeaderPutStrf(&rep->header, HDR_VARY, "Accept-Language");
+        }
+
+        /* add the Content-Language header according to RFC section 14.12 */
+        if(err_language) {
+            httpHeaderPutStrf(&rep->header, HDR_CONTENT_LANGUAGE, "%s", err_language);
+        }
+        else
+#endif /* USE_ERROR_LOCALES */
+        {
+            /* default templates are in English */
+            /* language is known unless error_directory override used */
+            if(!Config.errorDirectory)
+                httpHeaderPutStrf(&rep->header, HDR_CONTENT_LANGUAGE, "en");
+        }
+
         httpBodySet(&rep->body, content);
         /* do not memBufClean() or delete the content, it was absorbed by httpBody */
     }
