 			die_errno("unable to relay credential");
 	}
 
-	if (!send_request(socket, &buf))
-		return;
-	if (flags & FLAG_SPAWN) {
+	if (send_request(socket, &buf) < 0 && (flags & FLAG_SPAWN)) {
 		spawn_daemon(socket);
-		send_request(socket, &buf);
+		if (send_request(socket, &buf) < 0)
+			die_errno("unable to connect to cache daemon");
 	}
 	strbuf_release(&buf);
 }