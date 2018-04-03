 
 #if HAVE_SBRK
 
-    storeAppendPrintf(sentry, "\tProcess Data Segment Size via sbrk(): %d KB\n",
-                      (int) (((char *) sbrk(0) - (char *) sbrk_start) >> 10));
+    storeAppendPrintf(sentry, "\tProcess Data Segment Size via sbrk(): %lu KB\n",
+                      (unsigned long) (((char *) sbrk(0) - (char *) sbrk_start) >> 10));
 
 #endif
 