     storeAppendPrintf(sentry, close_bracket);
 }
 
-#if XMALLOC_STATISTICS
+#ifdef XMALLOC_STATISTICS
 static void
-info_get_mallstat(int size, number, StoreEntry * sentry)
+info_get_mallstat(int size, int number, StoreEntry * sentry)
 {
     if (number > 0)
 	storeAppendPrintf(sentry, "{\t%d = %d}\n", size, number);