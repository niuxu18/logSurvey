     tot = sum;			/* paranoid: "total" line shows 100% if we forgot nothing */
     refreshCountsStatsEntry(total);
     /* maybe counters */
+    storeAppendPrintf(sentry, "\n");
     refreshCountsStatsEntry(request_reload_ignore_maybe);
     refreshCountsStatsEntry(response_lmt_future_maybe);
 }