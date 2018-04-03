 __attribute__((format (printf, 1, 2)))
 static void error_clnt(const char *fmt, ...)
 {
-	char buf[1024];
+	struct strbuf buf = STRBUF_INIT;
 	va_list params;
-	int len;
 
 	va_start(params, fmt);
-	len = vsprintf(buf, fmt, params);
+	strbuf_vaddf(&buf, fmt, params);
 	va_end(params);
-	send_sideband(1, 3, buf, len, LARGE_PACKET_MAX);
-	die("sent error to the client: %s", buf);
+	send_sideband(1, 3, buf.buf, buf.len, LARGE_PACKET_MAX);
+	die("sent error to the client: %s", buf.buf);
 }
 
 static ssize_t process_input(int child_fd, int band)