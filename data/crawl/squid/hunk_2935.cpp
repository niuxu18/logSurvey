     }
 
     if (Config.dns.packet_max > 0)
-        storeAppendPrintf(sentry, "DNS jumbo-grams: %d Bytes\n", Config.dns.packet_max);
+        storeAppendPrintf(sentry, "DNS jumbo-grams: %Z Bytes\n", Config.dns.packet_max);
     else
         storeAppendPrintf(sentry, "DNS jumbo-grams: not working\n");
 