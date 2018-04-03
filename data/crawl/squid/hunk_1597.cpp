             }
             gss_release_buffer(&min_stat, &status_string);
         }
-        fprintf(stderr, "%s failed: %s\n", function, buf);
-        return (1);
+        std::cerr << "ERROR: " << function << " failed: " << buf << std::endl;
+        return true;
     }
-    return (0);
+    return false;
 }
 
-/*
+/**
  * Get gssapi token for service HTTP/<server>
  * User has to initiate a kinit user@DOMAIN on commandline first for the
  * function to be successful
- * Returns base64 encoded token if successful
+ *
+ * \return base64 encoded token if successful,
  *         string "ERROR" if unsuccessful
  */
 static char *