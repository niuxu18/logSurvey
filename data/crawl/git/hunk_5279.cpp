 
 static void *unpack_entry_data(unsigned long offset, unsigned long size)
 {
+	int status;
 	z_stream stream;
 	void *buf = xmalloc(size);
 
 	memset(&stream, 0, sizeof(stream));
+	git_inflate_init(&stream);
 	stream.next_out = buf;
 	stream.avail_out = size;
-	stream.next_in = fill(1);
-	stream.avail_in = input_len;
-	git_inflate_init(&stream);
 
-	for (;;) {
-		int ret = git_inflate(&stream, 0);
-		use(input_len - stream.avail_in);
-		if (stream.total_out == size && ret == Z_STREAM_END)
-			break;
-		if (ret != Z_OK)
-			bad_object(offset, "inflate returned %d", ret);
+	do {
 		stream.next_in = fill(1);
 		stream.avail_in = input_len;
-	}
+		status = git_inflate(&stream, 0);
+		use(input_len - stream.avail_in);
+	} while (status == Z_OK);
+	if (stream.total_out != size || status != Z_STREAM_END)
+		bad_object(offset, "inflate returned %d", status);
 	git_inflate_end(&stream);
 	return buf;
 }