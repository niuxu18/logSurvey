 	if (code != 0) {
 		if (show(o, 4) || o->call_depth)
 			die(_("merging of trees %s and %s failed"),
-			    sha1_to_hex(head->object.sha1),
-			    sha1_to_hex(merge->object.sha1));
+			    oid_to_hex(&head->object.oid),
+			    oid_to_hex(&merge->object.oid));
 		else
 			exit(128);
 	}