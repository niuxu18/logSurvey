 						  head_len,
 						  ref_name[i],
 						  head_oid.hash,
-						  get_object_hash(rev[i]->object));
+						  rev[i]->object.oid.hash);
 			if (extra < 0)
 				printf("%c [%s] ",
 				       is_head ? '*' : ' ', ref_name[i]);
