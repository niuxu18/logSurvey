 	if (!(obj->flags & HAS_OBJ)) {
 		if (parent && !has_object_file(&obj->oid)) {
 			printf("broken link from %7s %s\n",
-				 typename(parent->type), describe_object(parent));
+				 printable_type(parent), describe_object(parent));
 			printf("              to %7s %s\n",
-				 typename(obj->type), describe_object(obj));
+				 printable_type(obj), describe_object(obj));
 			errors_found |= ERROR_REACHABLE;
 		}
 		return 1;
