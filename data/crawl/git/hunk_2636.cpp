 	}
 
 	strbuf_addstr(&msg, "\n\n");
-	if (strbuf_read_file(&msg, am_path(state, "msg"), 0) < 0)
-		die_errno(_("could not read '%s'"), am_path(state, "msg"));
+	strbuf_addbuf(&msg, &mi.log_message);
 	stripspace(&msg, 0);
 
 	if (state->signoff)
