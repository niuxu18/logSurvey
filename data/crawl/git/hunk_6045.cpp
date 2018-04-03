 	return 0;
 }
 
+static int cmd_sq_quote(int argc, const char **argv)
+{
+	struct strbuf buf = STRBUF_INIT;
+
+	if (argc)
+		sq_quote_argv(&buf, argv, 0);
+	printf("%s\n", buf.buf);
+	strbuf_release(&buf);
+
+	return 0;
+}
+
 static void die_no_single_rev(int quiet)
 {
 	if (quiet)
