 
 static int git_transport_push(struct transport *transport, int refspec_nr, const char **refspec, int flags) {
 	struct git_transport_data *data = transport->data;
-	const char **argv;
-	char *rem;
-	int argc;
-	int err;
+	struct send_pack_args args;
 
-	argv = xmalloc((refspec_nr + 11) * sizeof(char *));
-	argv[0] = "send-pack";
-	argc = 1;
-	if (flags & TRANSPORT_PUSH_ALL)
-		argv[argc++] = "--all";
-	if (flags & TRANSPORT_PUSH_FORCE)
-		argv[argc++] = "--force";
-	if (flags & TRANSPORT_PUSH_DRY_RUN)
-		argv[argc++] = "--dry-run";
-	if (data->receivepack) {
-		char *rp = xmalloc(strlen(data->receivepack) + 16);
-		sprintf(rp, "--receive-pack=%s", data->receivepack);
-		argv[argc++] = rp;
-	}
-	if (data->thin)
-		argv[argc++] = "--thin";
-	rem = xmalloc(strlen(transport->remote->name) + 10);
-	sprintf(rem, "--remote=%s", transport->remote->name);
-	argv[argc++] = rem;
-	argv[argc++] = transport->url;
-	while (refspec_nr--)
-		argv[argc++] = *refspec++;
-	argv[argc] = NULL;
-	err = run_command_v_opt(argv, RUN_GIT_CMD);
-	switch (err) {
-	case -ERR_RUN_COMMAND_FORK:
-		error("unable to fork for %s", argv[0]);
-	case -ERR_RUN_COMMAND_EXEC:
-		error("unable to exec %s", argv[0]);
-		break;
-	case -ERR_RUN_COMMAND_WAITPID:
-	case -ERR_RUN_COMMAND_WAITPID_WRONG_PID:
-	case -ERR_RUN_COMMAND_WAITPID_SIGNAL:
-	case -ERR_RUN_COMMAND_WAITPID_NOEXIT:
-		error("%s died with strange error", argv[0]);
-	}
-	return !!err;
+	args.receivepack = data->receivepack;
+	args.send_all = !!(flags & TRANSPORT_PUSH_ALL);
+	args.force_update = !!(flags & TRANSPORT_PUSH_FORCE);
+	args.use_thin_pack = data->thin;
+	args.verbose = transport->verbose;
+	args.dry_run = !!(flags & TRANSPORT_PUSH_DRY_RUN);
+
+	return send_pack(&args, transport->url, transport->remote, refspec_nr, refspec);
 }
 
 static int disconnect_git(struct transport *transport)