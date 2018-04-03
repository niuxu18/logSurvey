 
 static void report(const char *prefix, const char *err, va_list params)
 {
-	fputs(prefix, stderr);
-	vfprintf(stderr, err, params);
-	fputs("\n", stderr);
+	char msg[256];
+	vsnprintf(msg, sizeof(msg), err, params);
+	fprintf(stderr, "%s%s\n", prefix, msg);
 }
 
 static NORETURN void usage_builtin(const char *err)