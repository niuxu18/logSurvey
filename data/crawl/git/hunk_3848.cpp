 	len -= 4;
 	if (len >= size)
 		die("protocol error: bad line length %d", len);
-	ret = safe_read(fd, buffer, len, options);
+	ret = get_packet_data(fd, src_buf, src_len, buffer, len, options);
 	if (ret < 0)
 		return ret;
 