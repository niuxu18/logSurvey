 	unsigned char sha1[20];
 
 	if (write_sha1_file(obj_buf->buffer, obj_buf->size, typename(obj->type), sha1) < 0)
-		die("failed to write object %s", sha1_to_hex(obj->sha1));
+		die("failed to write object %s", oid_to_hex(&obj->oid));
 	obj->flags |= FLAG_WRITTEN;
 }
 