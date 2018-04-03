 #endif
 
     storeAppendPrintf(sentry, "Start Time:\t%s\n",
-                      mkrfc1123(squid_start.tv_sec));
+                      mkrfc1123(stats.squid_start.tv_sec));
 
     storeAppendPrintf(sentry, "Current Time:\t%s\n",
-                      mkrfc1123(current_time.tv_sec));
+                      mkrfc1123(stats.current_time.tv_sec));
 
     storeAppendPrintf(sentry, "Connection information for %s:\n",APP_SHORTNAME);
 
-    storeAppendPrintf(sentry, "\tNumber of clients accessing cache:\t%u\n",
-                      statCounter.client_http.clients);
+    storeAppendPrintf(sentry, "\tNumber of clients accessing cache:\t%.0f\n",
+                      stats.client_http_clients);
 
-    storeAppendPrintf(sentry, "\tNumber of HTTP requests received:\t%u\n",
-                      statCounter.client_http.requests);
+    storeAppendPrintf(sentry, "\tNumber of HTTP requests received:\t%.0f\n",
+                      stats.client_http_requests);
 
-    storeAppendPrintf(sentry, "\tNumber of ICP messages received:\t%u\n",
-                      statCounter.icp.pkts_recv);
+    storeAppendPrintf(sentry, "\tNumber of ICP messages received:\t%.0f\n",
+                      stats.icp_pkts_recv);
 
-    storeAppendPrintf(sentry, "\tNumber of ICP messages sent:\t%u\n",
-                      statCounter.icp.pkts_sent);
+    storeAppendPrintf(sentry, "\tNumber of ICP messages sent:\t%.0f\n",
+                      stats.icp_pkts_sent);
 
-    storeAppendPrintf(sentry, "\tNumber of queued ICP replies:\t%u\n",
-                      statCounter.icp.replies_queued);
+    storeAppendPrintf(sentry, "\tNumber of queued ICP replies:\t%.0f\n",
+                      stats.icp_replies_queued);
 
 #if USE_HTCP
 
-    storeAppendPrintf(sentry, "\tNumber of HTCP messages received:\t%u\n",
-                      statCounter.htcp.pkts_recv);
+    storeAppendPrintf(sentry, "\tNumber of HTCP messages received:\t%.0f\n",
+                      stats.htcp_pkts_recv);
 
-    storeAppendPrintf(sentry, "\tNumber of HTCP messages sent:\t%u\n",
-                      statCounter.htcp.pkts_sent);
+    storeAppendPrintf(sentry, "\tNumber of HTCP messages sent:\t%.0f\n",
+                      stats.htcp_pkts_sent);
 
 #endif
 
+    double fct = stats.count > 1 ? stats.count : 1.0;
     storeAppendPrintf(sentry, "\tRequest failure ratio:\t%5.2f\n",
-                      request_failure_ratio);
+                      stats.request_failure_ratio / fct);
 
     storeAppendPrintf(sentry, "\tAverage HTTP requests per minute since start:\t%.1f\n",
-                      statCounter.client_http.requests / (runtime / 60.0));
+                      stats.avg_client_http_requests / fct);
 
     storeAppendPrintf(sentry, "\tAverage ICP messages per minute since start:\t%.1f\n",
-                      (statCounter.icp.pkts_sent + statCounter.icp.pkts_recv) / (runtime / 60.0));
+                      stats.avg_icp_messages / fct);
 
-    storeAppendPrintf(sentry, "\tSelect loop called: %ld times, %0.3f ms avg\n",
-                      statCounter.select_loops, 1000.0 * runtime / statCounter.select_loops);
+    storeAppendPrintf(sentry, "\tSelect loop called: %.0f times, %0.3f ms avg\n",
+                      stats.select_loops, stats.avg_loop_time / fct);
 
     storeAppendPrintf(sentry, "Cache information for %s:\n",APP_SHORTNAME);
 
     storeAppendPrintf(sentry, "\tHits as %% of all requests:\t5min: %3.1f%%, 60min: %3.1f%%\n",
-                      statRequestHitRatio(5),
-                      statRequestHitRatio(60));
+                      stats.request_hit_ratio5 / fct,
+                      stats.request_hit_ratio60 / fct);
 
     storeAppendPrintf(sentry, "\tHits as %% of bytes sent:\t5min: %3.1f%%, 60min: %3.1f%%\n",
-                      statByteHitRatio(5),
-                      statByteHitRatio(60));
+                      stats.byte_hit_ratio5 / fct,
+                      stats.byte_hit_ratio60 / fct);
 
     storeAppendPrintf(sentry, "\tMemory hits as %% of hit requests:\t5min: %3.1f%%, 60min: %3.1f%%\n",
-                      statRequestHitMemoryRatio(5),
-                      statRequestHitMemoryRatio(60));
+                      stats.request_hit_mem_ratio5 / fct,
+                      stats.request_hit_mem_ratio60 / fct);
 
     storeAppendPrintf(sentry, "\tDisk hits as %% of hit requests:\t5min: %3.1f%%, 60min: %3.1f%%\n",
-                      statRequestHitDiskRatio(5),
-                      statRequestHitDiskRatio(60));
+                      stats.request_hit_disk_ratio5 / fct,
+                      stats.request_hit_disk_ratio60 / fct);
 
-    storeAppendPrintf(sentry, "\tStorage Swap size:\t%lu KB\n",
-                      store_swap_size);
+    storeAppendPrintf(sentry, "\tStorage Swap size:\t%.0f KB\n",
+                      stats.store_swap_size / 1024);
 
     storeAppendPrintf(sentry, "\tStorage Swap capacity:\t%4.1f%% used, %4.1f%% free\n",
-                      Math::doublePercent(store_swap_size, Store::Root().maxSize()),
-                      Math::doublePercent((Store::Root().maxSize() - store_swap_size), Store::Root().maxSize()));
-
+                      Math::doublePercent(stats.store_swap_size, stats.store_swap_max_size),
+                      Math::doublePercent(stats.store_swap_max_size - stats.store_swap_size, stats.store_swap_max_size));
 
-    storeAppendPrintf(sentry, "\tStorage Mem size:\t%lu KB\n",
-                      (unsigned long)(mem_node::StoreMemSize() >> 10));
+    storeAppendPrintf(sentry, "\tStorage Mem size:\t%.0f KB\n",
+                      stats.store_mem_size / 1024);
 
-    double mFree = 0.0;
-    if (mem_node::InUseCount() <= store_pages_max)
-        mFree = Math::doublePercent((store_pages_max - mem_node::InUseCount()), store_pages_max);
+    const double mFree = max(0.0, stats.store_pages_max-stats.store_mem_used);
     storeAppendPrintf(sentry, "\tStorage Mem capacity:\t%4.1f%% used, %4.1f%% free\n",
-                      Math::doublePercent(mem_node::InUseCount(), store_pages_max),
-                      mFree);
+                      Math::doublePercent(stats.store_mem_used, stats.store_pages_max),
+                      Math::doublePercent(mFree, stats.store_pages_max));
 
     storeAppendPrintf(sentry, "\tMean Object Size:\t%0.2f KB\n",
-                      n_disk_objects ? (double) store_swap_size / n_disk_objects : 0.0);
+                      stats.objects_size / fct);
 
-    storeAppendPrintf(sentry, "\tRequests given to unlinkd:\t%ld\n",
-                      (long)statCounter.unlink.requests);
+    storeAppendPrintf(sentry, "\tRequests given to unlinkd:\t%.0f\n",
+                      stats.unlink_requests);
 
     storeAppendPrintf(sentry, "Median Service Times (seconds)  5 min    60 min:\n");
 
+    fct = stats.count > 1 ? stats.count * 1000.0 : 1000.0;
     storeAppendPrintf(sentry, "\tHTTP Requests (All):  %8.5f %8.5f\n",
-                      statPctileSvc(0.5, 5, PCTILE_HTTP) / 1000.0,
-                      statPctileSvc(0.5, 60, PCTILE_HTTP) / 1000.0);
+                      stats.http_requests5 / fct,
+                      stats.http_requests60 / fct);
 
     storeAppendPrintf(sentry, "\tCache Misses:         %8.5f %8.5f\n",
-                      statPctileSvc(0.5, 5, PCTILE_MISS) / 1000.0,
-                      statPctileSvc(0.5, 60, PCTILE_MISS) / 1000.0);
+                      stats.cache_misses5 / fct,
+                      stats.cache_misses60 / fct);
 
     storeAppendPrintf(sentry, "\tCache Hits:           %8.5f %8.5f\n",
-                      statPctileSvc(0.5, 5, PCTILE_HIT) / 1000.0,
-                      statPctileSvc(0.5, 60, PCTILE_HIT) / 1000.0);
+                      stats.cache_hits5 / fct,
+                      stats.cache_hits60 / fct);
 
     storeAppendPrintf(sentry, "\tNear Hits:            %8.5f %8.5f\n",
-                      statPctileSvc(0.5, 5, PCTILE_NH) / 1000.0,
-                      statPctileSvc(0.5, 60, PCTILE_NH) / 1000.0);
+                      stats.near_hits5 / fct,
+                      stats.near_hits60 / fct);
 
     storeAppendPrintf(sentry, "\tNot-Modified Replies: %8.5f %8.5f\n",
-                      statPctileSvc(0.5, 5, PCTILE_NM) / 1000.0,
-                      statPctileSvc(0.5, 60, PCTILE_NM) / 1000.0);
+                      stats.not_modified_replies5 / fct,
+                      stats.not_modified_replies60 / fct);
 
     storeAppendPrintf(sentry, "\tDNS Lookups:          %8.5f %8.5f\n",
-                      statPctileSvc(0.5, 5, PCTILE_DNS) / 1000.0,
-                      statPctileSvc(0.5, 60, PCTILE_DNS) / 1000.0);
+                      stats.dns_lookups5 / fct,
+                      stats.dns_lookups60 / fct);
 
+    fct = stats.count > 1 ? stats.count * 1000000.0 : 1000000.0;
     storeAppendPrintf(sentry, "\tICP Queries:          %8.5f %8.5f\n",
-                      statPctileSvc(0.5, 5, PCTILE_ICP_QUERY) / 1000000.0,
-                      statPctileSvc(0.5, 60, PCTILE_ICP_QUERY) / 1000000.0);
-
-    squid_getrusage(&rusage);
-
-    cputime = rusage_cputime(&rusage);
+                      stats.icp_queries5 / fct,
+                      stats.icp_queries60 / fct);
 
     storeAppendPrintf(sentry, "Resource usage for %s:\n", APP_SHORTNAME);
 
-    storeAppendPrintf(sentry, "\tUP Time:\t%.3f seconds\n", runtime);
+    storeAppendPrintf(sentry, "\tUP Time:\t%.3f seconds\n", stats.up_time);
 
-    storeAppendPrintf(sentry, "\tCPU Time:\t%.3f seconds\n", cputime);
+    storeAppendPrintf(sentry, "\tCPU Time:\t%.3f seconds\n", stats.cpu_time);
 
     storeAppendPrintf(sentry, "\tCPU Usage:\t%.2f%%\n",
-                      Math::doublePercent(cputime, runtime));
+                      stats.cpu_usage);
 
     storeAppendPrintf(sentry, "\tCPU Usage, 5 minute avg:\t%.2f%%\n",
-                      statCPUUsage(5));
+                      stats.cpu_usage5);
 
     storeAppendPrintf(sentry, "\tCPU Usage, 60 minute avg:\t%.2f%%\n",
-                      statCPUUsage(60));
+                      stats.cpu_usage60);
 
 #if HAVE_SBRK
 
-    storeAppendPrintf(sentry, "\tProcess Data Segment Size via sbrk(): %lu KB\n",
-                      (unsigned long) (((char *) sbrk(0) - (char *) sbrk_start) >> 10));
+    storeAppendPrintf(sentry, "\tProcess Data Segment Size via sbrk(): %.0f KB\n",
+                      stats.proc_data_seg / 1024);
 
 #endif
 
-    storeAppendPrintf(sentry, "\tMaximum Resident Size: %ld KB\n",
-                      (long)rusage_maxrss(&rusage));
+    storeAppendPrintf(sentry, "\tMaximum Resident Size: %.0f KB\n",
+                      stats.maxrss);
 
-    storeAppendPrintf(sentry, "\tPage faults with physical i/o: %ld\n",
-                      (long)rusage_pagefaults(&rusage));
+    storeAppendPrintf(sentry, "\tPage faults with physical i/o: %.0f\n",
+                      stats.page_faults);
 
 #if HAVE_MSTATS && HAVE_GNUMALLOC_H
 
-    ms = mstats();
-
     storeAppendPrintf(sentry, "Memory usage for %s via mstats():\n",APP_SHORTNAME);
 
-    storeAppendPrintf(sentry, "\tTotal space in arena:  %6ld KB\n",
-                      (long)(ms.bytes_total >> 10));
+    storeAppendPrintf(sentry, "\tTotal space in arena:  %6.0f KB\n",
+                      stats.ms_bytes_total / 1024);
 
-    storeAppendPrintf(sentry, "\tTotal free:            %6ld KB %d%%\n",
-                      (long)(ms.bytes_free >> 10), Math::intPercent(ms.bytes_free, ms.bytes_total));
+    storeAppendPrintf(sentry, "\tTotal free:            %6.0f KB %.0f%%\n",
+                      stats.ms_bytes_free / 1024,
+                      Math::doublePercent(stats.ms_bytes_free, stats.ms_bytes_total));
 
 #elif HAVE_MALLINFO && HAVE_STRUCT_MALLINFO
 
-    mp = mallinfo();
-
     storeAppendPrintf(sentry, "Memory usage for %s via mallinfo():\n",APP_SHORTNAME);
 
-    storeAppendPrintf(sentry, "\tTotal space in arena:  %6ld KB\n",
-                      (long)(mp.arena >> 10));
+    storeAppendPrintf(sentry, "\tTotal space in arena:  %6.0f KB\n",
+                      stats.mp_arena / 1024);
 
-    storeAppendPrintf(sentry, "\tOrdinary blocks:       %6ld KB %6ld blks\n",
-                      (long)(mp.uordblks >> 10), (long)mp.ordblks);
+    storeAppendPrintf(sentry, "\tOrdinary blocks:       %6.0f KB %6.0f blks\n",
+                      stats.mp_uordblks / 1024, stats.mp_ordblks);
 
-    storeAppendPrintf(sentry, "\tSmall blocks:          %6ld KB %6ld blks\n",
-                      (long)(mp.usmblks >> 10), (long)mp.smblks);
+    storeAppendPrintf(sentry, "\tSmall blocks:          %6.0f KB %6.0f blks\n",
+                      stats.mp_usmblks / 1024, stats.mp_smblks);
 
-    storeAppendPrintf(sentry, "\tHolding blocks:        %6ld KB %6ld blks\n",
-                      (long)(mp.hblkhd >> 10), (long)mp.hblks);
+    storeAppendPrintf(sentry, "\tHolding blocks:        %6.0f KB %6.0f blks\n",
+                      stats.mp_hblkhd / 1024, stats.mp_hblks);
 
-    storeAppendPrintf(sentry, "\tFree Small blocks:     %6ld KB\n",
-                      (long)(mp.fsmblks >> 10));
+    storeAppendPrintf(sentry, "\tFree Small blocks:     %6.0f KB\n",
+                      stats.mp_fsmblks / 1024);
 
-    storeAppendPrintf(sentry, "\tFree Ordinary blocks:  %6ld KB\n",
-                      (long)(mp.fordblks >> 10));
+    storeAppendPrintf(sentry, "\tFree Ordinary blocks:  %6.0f KB\n",
+                      stats.mp_fordblks / 1024);
 
-    t = mp.uordblks + mp.usmblks + mp.hblkhd;
+    double t = stats.mp_fsmblks + stats.mp_fordblks;
 
-    storeAppendPrintf(sentry, "\tTotal in use:          %6ld KB %d%%\n",
-                      (long)(t >> 10), Math::intPercent(t, mp.arena + mp.hblkhd));
+    storeAppendPrintf(sentry, "\tTotal in use:          %6.0f KB %.0f%%\n",
+                      t / 1024, Math::doublePercent(t, stats.mp_arena + stats.mp_hblkhd));
 
-    t = mp.fsmblks + mp.fordblks;
+    t = stats.mp_fsmblks + stats.mp_fordblks;
 
-    storeAppendPrintf(sentry, "\tTotal free:            %6ld KB %d%%\n",
-                      (long)(t >> 10), Math::intPercent(t, mp.arena + mp.hblkhd));
+    storeAppendPrintf(sentry, "\tTotal free:            %6.0f KB %.0f%%\n",
+                      t / 1024, Math::doublePercent(t, stats.mp_arena + stats.mp_hblkhd));
 
-    t = mp.arena + mp.hblkhd;
+    t = stats.mp_arena + stats.mp_hblkhd;
 
-    storeAppendPrintf(sentry, "\tTotal size:            %6ld KB\n",
-                      (long)(t >> 10));
+    storeAppendPrintf(sentry, "\tTotal size:            %6.0f KB\n",
+                      t / 1024);
 
 #if HAVE_STRUCT_MALLINFO_MXFAST
 
-    storeAppendPrintf(sentry, "\tmax size of small blocks:\t%d\n", mp.mxfast);
+    storeAppendPrintf(sentry, "\tmax size of small blocks:\t%.0f\n", stats.mp_mxfast);
 
-    storeAppendPrintf(sentry, "\tnumber of small blocks in a holding block:\t%ld\n",
-                      (long)mp.nlblks);
+    storeAppendPrintf(sentry, "\tnumber of small blocks in a holding block:\t%.0f\n",
+                      stats.mp_nlblks);
 
-    storeAppendPrintf(sentry, "\tsmall block rounding factor:\t%ld\n", (long)mp.grain);
+    storeAppendPrintf(sentry, "\tsmall block rounding factor:\t%.0f\n", stats.mp_grain);
 
-    storeAppendPrintf(sentry, "\tspace (including overhead) allocated in ord. blks:\t%ld\n",
-                      (long)mp.uordbytes);
+    storeAppendPrintf(sentry, "\tspace (including overhead) allocated in ord. blks:\t%.0f\n"
+                      ,stats.mp_uordbytes);
 
-    storeAppendPrintf(sentry, "\tnumber of ordinary blocks allocated:\t%ld\n",
-                      (long)mp.allocated);
+    storeAppendPrintf(sentry, "\tnumber of ordinary blocks allocated:\t%.0f\n",
+                      stats.mp_allocated);
 
-    storeAppendPrintf(sentry, "\tbytes used in maintaining the free tree:\t%ld\n",
-                      (long)mp.treeoverhead);
+    storeAppendPrintf(sentry, "\tbytes used in maintaining the free tree:\t%.0f\n",
+                      stats.mp_treeoverhead);
 
 #endif /* HAVE_STRUCT_MALLINFO_MXFAST */
 #endif /* HAVE_MALLINFO */