 {
 	off_t from = obj[0].idx.offset + obj[0].hdr_size;
 	unsigned long len = obj[1].idx.offset - from;
-	unsigned long rdy = 0;
-	unsigned char *src, *data;
+	unsigned char *data, *inbuf;
 	z_stream stream;
-	int st;
+	int status;
 
-	src = xmalloc(len);
-	data = src;
-	do {
-		ssize_t n = pread(pack_fd, data + rdy, len - rdy, from + rdy);
-		if (n < 0)
-			die_errno("cannot pread pack file");
-		if (!n)
-			die("premature end of pack file, %lu bytes missing",
-			    len - rdy);
-		rdy += n;
-	} while (rdy < len);
 	data = xmalloc(obj->size);
+	inbuf = xmalloc((len < 64*1024) ? len : 64*1024);
+
 	memset(&stream, 0, sizeof(stream));
+	git_inflate_init(&stream);
 	stream.next_out = data;
 	stream.avail_out = obj->size;
-	stream.next_in = src;
-	stream.avail_in = len;
-	git_inflate_init(&stream);
-	while ((st = git_inflate(&stream, Z_FINISH)) == Z_OK);
-	git_inflate_end(&stream);
-	if (st != Z_STREAM_END || stream.total_out != obj->size)
+
+	do {
+		ssize_t n = (len < 64*1024) ? len : 64*1024;
+		n = pread(pack_fd, inbuf, n, from);
+		if (n < 0)
+			die_errno("cannot pread pack file");
+		if (!n)
+			die("premature end of pack file, %lu bytes missing", len);
+		from += n;
+		len -= n;
+		stream.next_in = inbuf;
+		stream.avail_in = n;
+		status = git_inflate(&stream, 0);
+	} while (len && status == Z_OK && !stream.avail_in);
+
+	/* This has been inflated OK when first encountered, so... */
+	if (status != Z_STREAM_END || stream.total_out != obj->size)
 		die("serious inflate inconsistency");
-	free(src);
+
+	git_inflate_end(&stream);
+	free(inbuf);
 	return data;
 }
 