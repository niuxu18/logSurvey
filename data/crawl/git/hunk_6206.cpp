 		r += fprintf(fp, "%s", color);
 	r += vfprintf(fp, fmt, args);
 	if (*color)
-		r += fprintf(fp, "%s", COLOR_RESET);
+		r += fprintf(fp, "%s", GIT_COLOR_RESET);
 	if (trail)
 		r += fprintf(fp, "%s", trail);
 	return r;