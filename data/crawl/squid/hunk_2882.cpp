 
         storeAppendPrintf(s, "username %s\n", p);
 
-#if DELAY_POOLS
-
+#if USE_DELAY_POOLS
         storeAppendPrintf(s, "delay_pool %d\n", DelayId::DelayClient(http).pool());
-
 #endif
 
         storeAppendPrintf(s, "\n");