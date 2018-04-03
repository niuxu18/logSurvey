 dnsSubmit(const char *lookup, HLPCB * callback, void *data)
 {
     char buf[256];
+    static time_t first_warn = 0;
     snprintf(buf, 256, "%s\n", lookup);
+    if (dnsservers->stats.queue_size >= dnsservers->n_running * 2) {
+	if (first_warn == 0)
+	    first_warn = squid_curtime;
+	if (squid_curtime - first_warn > 3*60)
+	    fatal("DNS servers not responding for 3 minutes");
+	debug(34, 1) ("dnsSubmit: queue overload, rejecting %s\n", lookup);
+	callback(data, "$fail temporary network problem, pleas retry later");
+    }
+    first_warn = 0;
     helperSubmit(dnsservers, buf, callback, data);
 }
 