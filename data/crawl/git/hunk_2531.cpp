 
 		if (parse_commit(c))
 			die("unable to parse commit %s",
-			    sha1_to_hex(c->object.sha1));
+			    oid_to_hex(&c->object.oid));
 
 		for (p = c->parents; p; p = p->next) {
 			uint32_t **p_refs = ref_bitmap_at(&info->ref_bitmap,
