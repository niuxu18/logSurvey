       int i;
       debug_logprintf ("Caching %s =>", host);
       for (i = 0; i < al->count; i++)
-	debug_logprintf (" %s", print_address (al->addresses + i));
+        debug_logprintf (" %s", print_address (al->addresses + i));
       debug_logprintf ("\n");
     }
 }
