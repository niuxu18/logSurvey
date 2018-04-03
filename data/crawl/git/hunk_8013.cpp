 			transport_set_option(transport, TRANS_OPT_THIN, "yes");
 
 		if (verbose)
-			fprintf(stderr, "Pushing to %s\n", remote->uri[i]);
+			fprintf(stderr, "Pushing to %s\n", remote->url[i]);
 		err = transport_push(transport, refspec_nr, refspec, flags);
 		err |= transport_disconnect(transport);
 
 		if (!err)
 			continue;
 
-		error("failed to push to '%s'", remote->uri[i]);
+		error("failed to push to '%s'", remote->url[i]);
 		errs++;
 	}
 	return !!errs;
