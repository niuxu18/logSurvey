 		struct object_id *oid = &cmit->object.oid;
 		if (always) {
 			printf("%s", find_unique_abbrev(oid->hash, abbrev));
-			if (dirty)
-				printf("%s", dirty);
+			if (suffix)
+				printf("%s", suffix);
 			printf("\n");
 			return;
 		}
