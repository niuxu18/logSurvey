 {
 	if (!buffer_ferror(file))
 		return error("delta preimage ends early");
-	return error("cannot read delta preimage: %s", strerror(errno));
+	return error_errno("cannot read delta preimage");
 }
 
 static int skip_or_whine(struct line_buffer *file, off_t gap)
