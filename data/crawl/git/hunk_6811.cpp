 	}
 }
 
-static void output(int v, const char *fmt, ...)
+static void output(struct merge_options *o, int v, const char *fmt, ...)
 {
 	int len;
 	va_list ap;
 
-	if (!show(v))
+	if (!show(o, v))
 		return;
 
 	strbuf_grow(&obuf, call_depth * 2 + 2);