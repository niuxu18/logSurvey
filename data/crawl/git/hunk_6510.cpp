 					     option_upload_pack);
 
 		refs = transport_get_remote_refs(transport);
-		transport_fetch_refs(transport, refs);
+		if(refs)
+			transport_fetch_refs(transport, refs);
 	}
 
-	clear_extra_refs();
+	if (refs) {
+		clear_extra_refs();
 
-	mapped_refs = write_remote_refs(refs, &refspec, reflog_msg.buf);
+		mapped_refs = write_remote_refs(refs, &refspec, reflog_msg.buf);
 
-	head_points_at = locate_head(refs, mapped_refs, &remote_head);
+		head_points_at = locate_head(refs, mapped_refs, &remote_head);
+	}
+	else {
+		warning("You appear to have cloned an empty repository.");
+		head_points_at = NULL;
+		remote_head = NULL;
+		option_no_checkout = 1;
+	}
 
 	if (head_points_at) {
 		/* Local default branch link */
