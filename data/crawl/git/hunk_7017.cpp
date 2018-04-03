 	return error("option `%s' %s", opt->long_name, reason);
 }
 
+static int get_arg(struct parse_opt_ctx_t *p, const struct option *opt,
+		   int flags, const char **arg)
+{
+	if (p->opt) {
+		*arg = p->opt;
+		p->opt = NULL;
+	} else if (p->argc == 1 && (opt->flags & PARSE_OPT_LASTARG_DEFAULT)) {
+		*arg = (const char *)opt->defval;
+	} else if (p->argc) {
+		p->argc--;
+		*arg = *++p->argv;
+	} else
+		return opterror(opt, "requires a value", flags);
+	return 0;
+}
+
 static int get_value(struct parse_opt_ctx_t *p,
-                     const struct option *opt, int flags)
+		     const struct option *opt, int flags)
 {
 	const char *s, *arg;
 	const int unset = flags & OPT_UNSET;
