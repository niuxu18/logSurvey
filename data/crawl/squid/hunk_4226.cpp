     switch(v)
     {
     case 1:
-        storeAppendPrintf(e, "%s gre\n", label);
+        storeAppendPrintf(e, "%s gre_hash\n", label);
         break;
     case 2:
-        storeAppendPrintf(e, "%s l2\n", label);
+        storeAppendPrintf(e, "%s l2_mask\n", label);
         break;
     default:
-        debugs(80, DBG_CRITICAL, "FATAL: WCCPv2 confifigured method (" << v << ") is not valid.");
+        debugs(80, DBG_CRITICAL, "FATAL: WCCPv2 configured method (" << v << ") is not valid.");
         self_destruct();
     }
 }