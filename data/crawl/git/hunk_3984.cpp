  * Call this to report error for your variable that should not
  * get a boolean value (i.e. "[my] var" means "true").
  */
+#undef config_error_nonbool
 int config_error_nonbool(const char *var)
 {
 	return error("Missing value for '%s'", var);