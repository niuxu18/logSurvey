 	return 0;
 }
 
+static enum date_mode_type parse_date_type(const char *format, const char **end)
+{
+	if (skip_prefix(format, "relative", end))
+		return DATE_RELATIVE;
+	if (skip_prefix(format, "iso8601-strict", end) ||
+	    skip_prefix(format, "iso-strict", end))
+		return DATE_ISO8601_STRICT;
+	if (skip_prefix(format, "iso8601", end) ||
+	    skip_prefix(format, "iso", end))
+		return DATE_ISO8601;
+	if (skip_prefix(format, "rfc2822", end) ||
+	    skip_prefix(format, "rfc", end))
+		return DATE_RFC2822;
+	if (skip_prefix(format, "short", end))
+		return DATE_SHORT;
+	if (skip_prefix(format, "default", end))
+		return DATE_NORMAL;
+	if (skip_prefix(format, "raw", end))
+		return DATE_RAW;
+	if (skip_prefix(format, "format", end))
+		return DATE_STRFTIME;
+
+	die("unknown date format %s", format);
+}
+
 void parse_date_format(const char *format, struct date_mode *mode)
 {
-	if (!strcmp(format, "relative"))
-		mode->type = DATE_RELATIVE;
-	else if (!strcmp(format, "iso8601") ||
-		 !strcmp(format, "iso"))
-		mode->type = DATE_ISO8601;
-	else if (!strcmp(format, "iso8601-strict") ||
-		 !strcmp(format, "iso-strict"))
-		mode->type = DATE_ISO8601_STRICT;
-	else if (!strcmp(format, "rfc2822") ||
-		 !strcmp(format, "rfc"))
-		mode->type = DATE_RFC2822;
-	else if (!strcmp(format, "short"))
-		mode->type = DATE_SHORT;
-	else if (!strcmp(format, "local"))
-		mode->type = DATE_LOCAL;
-	else if (!strcmp(format, "default"))
-		mode->type = DATE_NORMAL;
-	else if (!strcmp(format, "raw"))
-		mode->type = DATE_RAW;
-	else if (skip_prefix(format, "format:", &format)) {
-		mode->type = DATE_STRFTIME;
-		mode->strftime_fmt = xstrdup(format);
-	} else
+	const char *p;
+
+	/* historical alias */
+	if (!strcmp(format, "local"))
+		format = "default-local";
+
+	mode->type = parse_date_type(format, &p);
+	mode->local = 0;
+
+	if (skip_prefix(p, "-local", &p))
+		mode->local = 1;
+
+	if (mode->type == DATE_STRFTIME) {
+		if (!skip_prefix(p, ":", &p))
+			die("date format missing colon separator: %s", format);
+		mode->strftime_fmt = xstrdup(p);
+	} else if (*p)
 		die("unknown date format %s", format);
 }
 