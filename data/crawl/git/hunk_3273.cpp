 		off_t offset = find_pack_entry_one(sha1, p);
 		if (offset) {
 			if (!*found_pack) {
-				if (!is_pack_valid(p)) {
-					warning("packfile %s cannot be accessed", p->pack_name);
+				if (!is_pack_valid(p))
 					continue;
-				}
 				*found_offset = offset;
 				*found_pack = p;
 			}
