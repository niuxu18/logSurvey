 #endif /* HAVE_EXT_MALLINFO */
 #endif /* HAVE_MALLINFO */
     storeAppendPrintf(sentry, "Memory accounted for:\n");
-    storeAppendPrintf(sentry, "\tTotal accounted:       %6d KB %d%%\n",
-	memTotalAllocated());
+    storeAppendPrintf(sentry, "\tTotal accounted:       %6d KB\n",
+	memTotalAllocated()>>10);
 
     storeAppendPrintf(sentry, "File descriptor usage for %s:\n", appname);
     storeAppendPrintf(sentry, "\tMaximum number of file descriptors:   %4d\n",
