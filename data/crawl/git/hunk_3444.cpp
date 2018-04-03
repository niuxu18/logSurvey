 		struct ref *tmp_refs;
 		connect_setup(transport, 1, 0);
 
-		get_remote_heads(data->fd[0], NULL, 0, &tmp_refs, REF_NORMAL, NULL, NULL);
+		get_remote_heads(data->fd[0], NULL, 0, &tmp_refs, REF_NORMAL,
+				 NULL, &data->shallow);
 		data->got_remote_heads = 1;
 	}
-	if (data->shallow.nr)
-		die("pushing to a shallow repository is not supported");
 
 	memset(&args, 0, sizeof(args));
 	args.send_mirror = !!(flags & TRANSPORT_PUSH_MIRROR);