 		if (i >= reuse_after)
 			stored->flags |= BITMAP_FLAG_REUSE;
 
-		hash_pos = kh_put_sha1(writer.bitmaps, object->sha1, &hash_ret);
+		hash_pos = kh_put_sha1(writer.bitmaps, get_object_hash(*object), &hash_ret);
 		if (hash_ret == 0)
 			die("Duplicate entry when writing index: %s",
 			    sha1_to_hex(object->sha1));
