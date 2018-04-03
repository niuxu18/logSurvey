     storeAppendPrintf(sentry, "\n");
     storeAppendPrintf(sentry, "Histogram of events per incoming socket type\n");
     storeAppendPrintf(sentry, "ICP Messages handled per comm_select_icp_incoming() call:\n");
-    statHistDump(&f->comm_icp_incoming, sentry, statHistIntDumper);
+    statCounter.comm_icp_incoming.dump(sentry, statHistIntDumper);
     storeAppendPrintf(sentry, "DNS Messages handled per comm_select_dns_incoming() call:\n");
-    statHistDump(&f->comm_dns_incoming, sentry, statHistIntDumper);
+    statCounter.comm_dns_incoming.dump(sentry, statHistIntDumper);
     storeAppendPrintf(sentry, "HTTP Messages handled per comm_select_http_incoming() call:\n");
-    statHistDump(&f->comm_http_incoming, sentry, statHistIntDumper);
+    statCounter.comm_http_incoming.dump(sentry, statHistIntDumper);
 }
 
 void
