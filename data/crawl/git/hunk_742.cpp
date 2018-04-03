 
 	git_deflate_init(&s, pack_compression_level);
 
-	hdrlen = encode_in_pack_object_header(OBJ_BLOB, len, out_buf);
-	if (out_sz <= hdrlen)
-		die("impossibly large object header");
+	hdrlen = encode_in_pack_object_header(out_buf, out_sz, OBJ_BLOB, len);
 
 	s.next_out = out_buf + hdrlen;
 	s.avail_out = out_sz - hdrlen;