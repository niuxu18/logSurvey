 		}
 	}
 done:
-	packet_write(fd[1], "done\n");
+	packet_buf_write(&req_buf, "done\n");
+	send_request(fd[1], &req_buf);
 	if (args.verbose)
 		fprintf(stderr, "done\n");
 	if (retval != 0) {
