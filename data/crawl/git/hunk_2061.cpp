 
 		client = accept(fd, NULL, NULL);
 		if (client < 0) {
-			warning("accept failed: %s", strerror(errno));
+			warning_errno("accept failed");
 			return 1;
 		}
 		client2 = dup(client);
 		if (client2 < 0) {
-			warning("dup failed: %s", strerror(errno));
+			warning_errno("dup failed");
 			close(client);
 			return 1;
 		}