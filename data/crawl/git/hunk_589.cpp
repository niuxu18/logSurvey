 			hashmap_add(&working_tree_dups, entry);
 
 			if (!use_wt_file(workdir, dst_path, &roid)) {
-				if (checkout_path(rmode, &roid, dst_path, &rstate))
-					return error("could not write '%s'",
-						     dst_path);
+				if (checkout_path(rmode, &roid, dst_path,
+						  &rstate)) {
+					ret = error("could not write '%s'",
+						    dst_path);
+					goto finish;
+				}
 			} else if (!is_null_oid(&roid)) {
 				/*
 				 * Changes in the working tree need special
