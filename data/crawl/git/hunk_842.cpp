 #include "cache.h"
 
 static FILE *error_handle;
-static int tweaked_error_buffering;
 
 void vreportf(const char *prefix, const char *err, va_list params)
 {
+	char msg[4096];
 	FILE *fh = error_handle ? error_handle : stderr;
-
-	fflush(fh);
-	if (!tweaked_error_buffering) {
-		setvbuf(fh, NULL, _IOLBF, 0);
-		tweaked_error_buffering = 1;
-	}
-
-	fputs(prefix, fh);
-	vfprintf(fh, err, params);
-	fputc('\n', fh);
+	vsnprintf(msg, sizeof(msg), err, params);
+	fprintf(fh, "%s%s\n", prefix, msg);
 }
 
 static NORETURN void usage_builtin(const char *err, va_list params)
