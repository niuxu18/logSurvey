 	void *buf, *base_buf, *delta_buf;
 	enum object_type type;
 
-	buf = read_sha1_file(entry->idx.sha1, &type, &size);
+	buf = read_sha1_file(entry->idx.oid.hash, &type, &size);
 	if (!buf)
-		die("unable to read %s", sha1_to_hex(entry->idx.sha1));
-	base_buf = read_sha1_file(entry->delta->idx.sha1, &type, &base_size);
+		die("unable to read %s", oid_to_hex(&entry->idx.oid));
+	base_buf = read_sha1_file(entry->delta->idx.oid.hash, &type,
+				  &base_size);
 	if (!base_buf)
-		die("unable to read %s", sha1_to_hex(entry->delta->idx.sha1));
+		die("unable to read %s",
+		    oid_to_hex(&entry->delta->idx.oid));
 	delta_buf = diff_delta(base_buf, base_size,
 			       buf, size, &delta_size, 0);
 	if (!delta_buf || delta_size != entry->delta_size)
