  *
  * Authors:
  *   Florian octo Forster <octo at collectd.org>
+ *   Sebastian tokkee Harl <sh at tokkee.org>
  **/
 
 #include "collectd.h"
 
 #include "common.h"
 #include "plugin.h"
 
+#include "utils_cmds.h"
+#include "utils_cmd_putval.h"
 #include "utils_parse_option.h"
 #include "utils_cmd_putval.h"
 
-#define print_to_socket(fh, ...) \
-    do { \
-        if (fprintf (fh, __VA_ARGS__) < 0) { \
-            char errbuf[1024]; \
-            WARNING ("handle_putval: failed to write to socket #%i: %s", \
-                    fileno (fh), sstrerror (errno, errbuf, sizeof (errbuf))); \
-            sfree (vl.values); \
-            return -1; \
-        } \
-        fflush(fh); \
-    } while (0)
+/*
+ * private helper functions
+ */
 
 static int set_option (value_list_t *vl, const char *key, const char *value)
 {
