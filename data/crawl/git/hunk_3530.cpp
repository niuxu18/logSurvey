 struct batch_options {
 	int enabled;
 	int print_contents;
+	const char *format;
 };
 
-static int batch_one_object(const char *obj_name, struct batch_options *opt)
+static int batch_one_object(const char *obj_name, struct batch_options *opt,
+			    struct expand_data *data)
 {
-	unsigned char sha1[20];
-	enum object_type type = 0;
-	unsigned long size;
+	struct strbuf buf = STRBUF_INIT;
 
 	if (!obj_name)
 	   return 1;
 
-	if (get_sha1(obj_name, sha1)) {
+	if (get_sha1(obj_name, data->sha1)) {
 		printf("%s missing\n", obj_name);
 		fflush(stdout);
 		return 0;
 	}
 
-	type = sha1_object_info(sha1, &size);
-	if (type <= 0) {
+	data->type = sha1_object_info_extended(data->sha1, &data->info);
+	if (data->type <= 0) {
 		printf("%s missing\n", obj_name);
 		fflush(stdout);
 		return 0;
 	}
 
-	printf("%s %s %lu\n", sha1_to_hex(sha1), typename(type), size);
-	fflush(stdout);
+	strbuf_expand(&buf, opt->format, expand_format, data);
+	strbuf_addch(&buf, '\n');
+	write_or_die(1, buf.buf, buf.len);
+	strbuf_release(&buf);
 
 	if (opt->print_contents) {
-		print_object_or_die(1, sha1, type, size);
+		print_object_or_die(1, data->sha1, data->type, data->size);
 		write_or_die(1, "\n", 1);
 	}
 	return 0;
