 	    id, name, count, xdiv(count, HeaderParsedCount));
 }
 
-#if 0
-static void
-httpHeaderCCStatDumper(StoreEntry * sentry, int idx, double val, double size, int count)
-{
-    const int id = (int) val;
-    const int valid_id = id >= 0 && id < SCC_ENUM_END;
-    const char *name = valid_id ? SccAttrs[id].name : "INVALID";
-    if (count || valid_id)
-	storeAppendPrintf(sentry, "%2d\t %-20s\t %5d\t %6.2f\n",
-	    id, name, count, xdiv(count, CcPasredCount));
-}
-#endif
-
 static void
 httpHeaderFldsPerHdrDumper(StoreEntry * sentry, int idx, double val, double size, int count)
 {
