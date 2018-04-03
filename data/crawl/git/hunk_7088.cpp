 	mark_object(&commit->object);
 	if (!is_encoding_utf8(encoding))
 		reencoded = reencode_string(message, "UTF-8", encoding);
+	if (!commit->parents)
+		printf("reset %s\n", (const char*)commit->util);
 	printf("commit %s\nmark :%d\n%.*s\n%.*s\ndata %u\n%s",
 	       (const char *)commit->util, last_idnum,
 	       (int)(author_end - author), author,