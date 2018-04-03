 
 AC_FUNC_STRERROR_R
 
+AC_CACHE_CHECK([for strtok_r],
+  [have_strtok_r_default],
+  AC_LINK_IFELSE(
+    AC_LANG_PROGRAM(
+    [[[[
+#include <stdlib.h>
+#include <stdio.h>
+#include <string.h>
+    ]]]],
+    [[[[
+      char buffer[] = "foo,bar,baz";
+      char *token;
+      char *dummy;
+      char *saveptr;
+
+      dummy = buffer;
+      saveptr = NULL;
+      while ((token = strtok_r (dummy, ",", &saveptr)) != NULL)
+      {
+	dummy = NULL;
+        printf ("token = %s;\n", token);
+      }
+    ]]]]),
+    [have_strtok_r_default="yes"],
+    [have_strtok_r_default="no"]
+  )
+)
+
+if test "x$have_strtok_r_default" = "xno"
+then
+  SAVE_CFLAGS="$CFLAGS"
+  CFLAGS="$CFLAGS -D_REENTRANT=1"
+
+  AC_CACHE_CHECK([if strtok_r needs _REENTRANT],
+    [have_strtok_r_reentrant],
+    AC_LINK_IFELSE(
+      AC_LANG_PROGRAM(
+      [[[[
+#include <stdlib.h>
+#include <stdio.h>
+#include <string.h>
+      ]]]],
+      [[[[
+        char buffer[] = "foo,bar,baz";
+        char *token;
+        char *dummy;
+        char *saveptr;
+
+        dummy = buffer;
+        saveptr = NULL;
+        while ((token = strtok_r (dummy, ",", &saveptr)) != NULL)
+        {
+	  dummy = NULL;
+          printf ("token = %s;\n", token);
+        }
+      ]]]]),
+      [have_strtok_r_reentrant="yes"],
+      [AC_MSG_FAILURE([strtok_r isn't available. Please file a bugreport!])]
+    )
+  )
+fi
+
 AC_CHECK_FUNCS(getpwnam_r getgrnam_r setgroups regcomp regerror regexec regfree)
 
 socket_needs_socket="no"