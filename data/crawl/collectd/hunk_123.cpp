 
 static _Bool loop = 1;
 
-__attribute__((noreturn))
-static void exit_usage (int exit_status) /* {{{ */
+__attribute__((noreturn)) static void exit_usage(int exit_status) /* {{{ */
 {
-  fprintf ((exit_status == EXIT_FAILURE) ? stderr : stdout,
+  fprintf(
+      (exit_status == EXIT_FAILURE) ? stderr : stdout,
       "collectd-tg -- collectd traffic generator\n"
       "\n"
       "  Usage: collectd-ng [OPTION]\n"
