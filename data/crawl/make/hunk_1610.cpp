 extern unsigned int makelevel;
 
 
-#define DEBUGPR(msg)							\
-  if (debug_flag) { print_spaces (depth); printf (msg, file->name);	\
-		    fflush (stdout);  } else
+#define DEBUGPR(msg) \
+  do if (debug_flag) { print_spaces (depth); printf (msg, file->name); \
+		       fflush (stdout); } while (0)
