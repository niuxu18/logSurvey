 		if (S_ISGITLINK(ce->ce_mode))
 			continue;
 
-		blob = lookup_blob(ce->sha1);
+		blob = lookup_blob(ce->oid.hash);
 		if (!blob)
 			die("unable to add index blob to traversal");
 		add_pending_object_with_path(revs, &blob->object, "",
