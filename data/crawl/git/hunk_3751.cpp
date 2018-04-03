 int http_get_strbuf(const char *url, struct strbuf *content_type, struct strbuf *result, int options);
 
 /*
- * Prints an error message using error() containing url and curl_errorstr,
- * and returns ret.
+ * Prints an error message using error() containing url and curl_errorstr.
  */
-int http_error(const char *url, int ret);
+void http_error(const char *url);
 
 extern int http_fetch_ref(const char *base, struct ref *ref);
 
