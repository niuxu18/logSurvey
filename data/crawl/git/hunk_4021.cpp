 	strbuf_addf(&branch_ref, "refs/heads/%s", opts->new_branch);
 	status = create_symref("HEAD", branch_ref.buf, "checkout -b");
 	strbuf_release(&branch_ref);
+	if (!opts->quiet)
+		fprintf(stderr, _("Switched to a new branch '%s'\n"),
+			opts->new_branch);
 	return status;
 }
 