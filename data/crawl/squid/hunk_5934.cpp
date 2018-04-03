 	debug(39, 3) ("carpSelectParent: selected CARP %s\n", p->host);
     return p;
 }
+
+static void
+carpCachemgr(StoreEntry * sentry)
+{
+    peer *p;
+    int sumfetches = 0;
+    storeAppendPrintf(sentry, "%24s %10s %10s %10s %10s\n",
+	"Hostname",
+	"Hash",
+	"Multiplier",
+	"Factor",
+	"Actual");
+    for (p = Config.peers; p; p = p->next)
+	sumfetches += p->stats.fetches;
+    for (p = Config.peers; p; p = p->next) {
+	storeAppendPrintf(sentry, "%24s %10x %10f %10f %10f\n",
+	    p->host, p->carp.hash,
+	    p->carp.load_multiplier,
+	    p->carp.load_factor,
+	    sumfetches ? (double) p->stats.fetches / sumfetches : -1.0);
+    }
+
+}
+
 #endif