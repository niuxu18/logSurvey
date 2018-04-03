 	return 0;
 }
 
+static int parse_new_style_cacheinfo(const char *arg,
+				     unsigned int *mode,
+				     unsigned char sha1[],
+				     const char **path)
+{
+	unsigned long ul;
+	char *endp;
+
+	errno = 0;
+	ul = strtoul(arg, &endp, 8);
+	if (errno || endp == arg || *endp != ',' || (unsigned int) ul != ul)
+		return -1; /* not a new-style cacheinfo */
+	*mode = ul;
+	endp++;
+	if (get_sha1_hex(endp, sha1) || endp[40] != ',')
+		return -1;
+	*path = endp + 41;
+	return 0;
+}
+
 static int cacheinfo_callback(struct parse_opt_ctx_t *ctx,
 				const struct option *opt, int unset)
 {
 	unsigned char sha1[20];
 	unsigned int mode;
+	const char *path;
 
+	if (!parse_new_style_cacheinfo(ctx->argv[1], &mode, sha1, &path)) {
+		if (add_cacheinfo(mode, sha1, path, 0))
+			die("git update-index: --cacheinfo cannot add %s", path);
+		ctx->argv++;
+		ctx->argc--;
+		return 0;
+	}
 	if (ctx->argc <= 3)
-		return error("option 'cacheinfo' expects three arguments");
+		return error("option 'cacheinfo' expects <mode>,<sha1>,<path>");
 	if (strtoul_ui(*++ctx->argv, 8, &mode) ||
 	    get_sha1_hex(*++ctx->argv, sha1) ||
 	    add_cacheinfo(mode, sha1, *++ctx->argv, 0))
