 	    srv->flags.closing ? 'C' : ' ',
 	    srv->flags.shutdown ? 'S' : ' ',
 	    tt < 0.0 ? 0.0 : tt,
-	    (int) srv->offset);
+	    (int) srv->offset,
+	    srv->request ? log_quote(srv->request->buf) : "(none)");
     }
     storeAppendPrintf(sentry, "\nFlags key:\n\n");
     storeAppendPrintf(sentry, "   A = ALIVE\n");
