 		if (!(refs.objects[i].item->flags & SHOWN)) {
 			if (++ret == 1)
 				error("%s", message);
-			error("%s %s", sha1_to_hex(refs.objects[i].item->sha1),
+			error("%s %s", oid_to_hex(&refs.objects[i].item->oid),
 				refs.objects[i].name);
 		}
 