 	"Next Execution");
     while (e != NULL) {
 	storeAppendPrintf(sentry, "%s\t%d seconds\n",
-	    e->name, e->when - squid_curtime);
+	    e->name, (int) (e->when - squid_curtime));
 	e = e->next;
     }
 }
