         fprintf(stdout, "Token: %s\n", Token ? Token : "NULL");
     }
 
-    exit(0);
+    return 0;
 }
 
 #else
 #include <stdlib.h>
 int
 main(int argc, char *argv[])
 {
-    exit(-1);
+    return -1;
 }
 
 #endif /* HAVE_GSSAPI */
