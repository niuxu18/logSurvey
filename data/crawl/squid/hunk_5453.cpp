     helper_server *srv;
     dlink_node *link;
     double tt;
+    storeAppendPrintf(sentry, "program: %s\n",
+	hlp->cmdline->key);
     storeAppendPrintf(sentry, "number running: %d of %d\n",
 	hlp->n_running, hlp->n_to_start);
     storeAppendPrintf(sentry, "requests sent: %d\n",
