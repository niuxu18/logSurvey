 	return ret;
 }
 
+int git_config_get_untracked_cache(void)
+{
+	int val = -1;
+	const char *v;
+
+	if (!git_config_get_maybe_bool("core.untrackedcache", &val))
+		return val;
+
+	if (!git_config_get_value("core.untrackedcache", &v)) {
+		if (!strcasecmp(v, "keep"))
+			return -1;
+
+		error("unknown core.untrackedCache value '%s'; "
+		      "using 'keep' default value", v);
+		return -1;
+	}
+
+	return -1; /* default value */
+}
+
 NORETURN
 void git_die_config_linenr(const char *key, const char *filename, int linenr)
 {
