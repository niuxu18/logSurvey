     storeAppendPrintf(sentry, "\tStorage Swap size:\t%lu KB\n",
                       store_swap_size);
 
+    storeAppendPrintf(sentry, "\tStorage Swap capacity:\t%4.1f%% used, %4.1f%% free\n",
+                      dpercent((int) store_swap_size, (int) Store::Root().maxSize()),  
+                      dpercent((int) (Store::Root().maxSize() - store_swap_size), (int) Store::Root().maxSize()));
+
+
     storeAppendPrintf(sentry, "\tStorage Mem size:\t%d KB\n",
                       (int) (mem_node::store_mem_size >> 10));
 
+    storeAppendPrintf(sentry, "\tStorage Mem capacity:\t%4.1f%% used, %4.1f%% free\n",
+                      dpercent(mem_node::InUseCount(), store_pages_max),
+                      dpercent((store_pages_max - mem_node::InUseCount()), store_pages_max));
+
     storeAppendPrintf(sentry, "\tMean Object Size:\t%0.2f KB\n",
                       n_disk_objects ? (double) store_swap_size / n_disk_objects : 0.0);
 