 		storeAppendPrintf(sentry, "!%s ", d->domain);
 	}
 	storeAppendPrintf(sentry, "\n");
-	storeAppendPrintf(sentry, "Keep-Alive Ratio: %d%%\n",
+	storeAppendPrintf(sentry, "keep-alive ratio: %d%%\n",
 	    percent(e->stats.n_keepalives_recv, e->stats.n_keepalives_sent));
     }
 }