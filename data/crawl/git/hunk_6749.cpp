 	if (!show(o, v))
 		return;
 
-	strbuf_grow(&obuf, o->call_depth * 2 + 2);
-	memset(obuf.buf + obuf.len, ' ', o->call_depth * 2);
-	strbuf_setlen(&obuf, obuf.len + o->call_depth * 2);
+	strbuf_grow(&o->obuf, o->call_depth * 2 + 2);
+	memset(o->obuf.buf + o->obuf.len, ' ', o->call_depth * 2);
+	strbuf_setlen(&o->obuf, o->obuf.len + o->call_depth * 2);
 
 	va_start(ap, fmt);
-	len = vsnprintf(obuf.buf + obuf.len, strbuf_avail(&obuf), fmt, ap);
+	len = vsnprintf(o->obuf.buf + o->obuf.len, strbuf_avail(&o->obuf), fmt, ap);
 	va_end(ap);
 
 	if (len < 0)
 		len = 0;
-	if (len >= strbuf_avail(&obuf)) {
-		strbuf_grow(&obuf, len + 2);
+	if (len >= strbuf_avail(&o->obuf)) {
+		strbuf_grow(&o->obuf, len + 2);
 		va_start(ap, fmt);
-		len = vsnprintf(obuf.buf + obuf.len, strbuf_avail(&obuf), fmt, ap);
+		len = vsnprintf(o->obuf.buf + o->obuf.len, strbuf_avail(&o->obuf), fmt, ap);
 		va_end(ap);
-		if (len >= strbuf_avail(&obuf)) {
+		if (len >= strbuf_avail(&o->obuf)) {
 			die("this should not happen, your snprintf is broken");
 		}
 	}
-	strbuf_setlen(&obuf, obuf.len + len);
-	strbuf_add(&obuf, "\n", 1);
+	strbuf_setlen(&o->obuf, o->obuf.len + len);
+	strbuf_add(&o->obuf, "\n", 1);
 	if (!o->buffer_output)
-		flush_output();
+		flush_output(o);
 }
 
 static void output_commit_title(struct merge_options *o, struct commit *commit)
 {
 	int i;
-	flush_output();
+	flush_output(o);
 	for (i = o->call_depth; i--;)
 		fputs("  ", stdout);
 	if (commit->util)