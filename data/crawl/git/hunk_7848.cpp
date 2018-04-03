 	if (!dest || i != argc - 1)
 		usage(peek_remote_usage);
 
-	conn = git_connect(fd, dest, uploadpack, 0);
-	ret = peek_remote(fd, flags);
-	close(fd[0]);
-	close(fd[1]);
-	ret |= finish_connect(conn);
-	return !!ret;
+	transport = transport_get(NULL, dest);
+	if (uploadpack != NULL)
+		transport_set_option(transport, TRANS_OPT_UPLOADPACK, uploadpack);
+
+	ref = transport_get_remote_refs(transport);
+
+	if (!ref)
+		return 1;
+
+	while (ref) {
+		if (check_ref_type(ref, flags))
+			printf("%s	%s\n", sha1_to_hex(ref->old_sha1), ref->name);
+		ref = ref->next;
+	}
+	return 0;
 }