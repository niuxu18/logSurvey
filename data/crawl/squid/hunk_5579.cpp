 		conn->defer.n, (long int) conn->defer.until);
 	}
 	storeAppendPrintf(s, "uri %s\n", http->uri);
-	storeAppendPrintf(s, "log_type %s\n", log_tags[http->log_type]);
+	storeAppendPrintf(s, "logType %s\n", log_tags[http->logType]);
 	storeAppendPrintf(s, "out.offset %ld, out.size %lu\n",
 	    (long int) http->out.offset, (unsigned long int) http->out.size);
 	storeAppendPrintf(s, "req_sz %ld\n", (long int) http->req_sz);
