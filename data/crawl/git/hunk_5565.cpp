 
 static void get_info_refs(char *arg)
 {
+	const char *service_name = get_parameter("service");
 	struct strbuf buf = STRBUF_INIT;
 
-	for_each_ref(show_text_ref, &buf);
 	hdr_nocache();
-	send_strbuf("text/plain", &buf);
+
+	if (service_name) {
+		const char *argv[] = {NULL /* service name */,
+			"--stateless-rpc", "--advertise-refs",
+			".", NULL};
+		struct rpc_service *svc = select_service(service_name);
+
+		strbuf_addf(&buf, "application/x-git-%s-advertisement",
+			svc->name);
+		hdr_str(content_type, buf.buf);
+		end_headers();
+
+		packet_write(1, "# service=git-%s\n", svc->name);
+		packet_flush(1);
+
+		argv[0] = svc->name;
+		run_service(argv);
+
+	} else {
+		for_each_ref(show_text_ref, &buf);
+		send_strbuf("text/plain", &buf);
+	}
 	strbuf_release(&buf);
 }
 
