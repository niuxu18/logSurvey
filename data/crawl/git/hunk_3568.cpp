 	if (branch->merge_nr != 1)
 		die(_("The current branch %s has multiple upstream branches, "
 		    "refusing to push."), branch->name);
-	if (strcmp(branch->remote_name, remote->name))
+	if (triangular)
 		die(_("You are pushing to remote '%s', which is not the upstream of\n"
 		      "your current branch '%s', without telling me what to push\n"
 		      "to update which remote branch."),
 		    remote->name, branch->name);
-	if (simple && strcmp(branch->refname, branch->merge[0]->src))
-		die_push_simple(branch, remote);
+
+	if (push_default == PUSH_DEFAULT_SIMPLE) {
+		/* Additional safety */
+		if (strcmp(branch->refname, branch->merge[0]->src))
+			die_push_simple(branch, remote);
+	}
 
 	strbuf_addf(&refspec, "%s:%s", branch->name, branch->merge[0]->src);
 	add_refspec(refspec.buf);
 }
 
+static void setup_push_current(struct remote *remote, struct branch *branch)
+{
+	if (!branch)
+		die(_(message_detached_head_die), remote->name);
+	add_refspec(branch->name);
+}
+
 static char warn_unspecified_push_default_msg[] =
 N_("push.default is unset; its implicit value is changing in\n"
    "Git 2.0 from 'matching' to 'simple'. To squelch this message\n"
