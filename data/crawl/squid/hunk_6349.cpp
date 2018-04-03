     storeAppendPrintf(e, "%2s\t %-20s\t %5s\t %6s\n",
 	"id", "name", "count", "#/header");
     statHistDump(&hs->fieldTypeDistr, e, httpHeaderFieldStatDumper);
-    storeAppendPrintf(e, "Cache-control directives distribution\n");
+    storeAppendPrintf(e, "\nCache-control directives distribution\n");
     storeAppendPrintf(e, "%2s\t %-20s\t %5s\t %6s\n",
 	"id", "name", "count", "#/cc_field");
     statHistDump(&hs->ccTypeDistr, e, httpHdrCcStatDumper);
-    storeAppendPrintf(e, "Number of fields per header distribution\n");
+    storeAppendPrintf(e, "\nNumber of fields per header distribution\n");
     storeAppendPrintf(e, "%2s\t %-5s\t %5s\t %6s\n",
 	"id", "#flds", "count", "%total");
     statHistDump(&hs->hdrUCountDistr, e, httpHeaderFldsPerHdrDumper);