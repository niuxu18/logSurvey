 	 * Spawn cmd and feed the buffer contents through its stdin.
 	 */
 	struct child_process child_process;
-	int pipe_feed[2];
 	int write_err, status;
+	const char *argv[] = { "sh", "-c", cmd, NULL };
 
 	memset(&child_process, 0, sizeof(child_process));
+	child_process.argv = argv;
+	child_process.in = -1;
 
-	if (pipe(pipe_feed) < 0) {
-		error("cannot create pipe to run external filter %s", cmd);
-		return 1;
-	}
-
-	child_process.pid = fork();
-	if (child_process.pid < 0) {
-		error("cannot fork to run external filter %s", cmd);
-		close(pipe_feed[0]);
-		close(pipe_feed[1]);
-		return 1;
-	}
-	if (!child_process.pid) {
-		dup2(pipe_feed[0], 0);
-		close(pipe_feed[0]);
-		close(pipe_feed[1]);
-		execlp("sh", "sh", "-c", cmd, NULL);
-		return 1;
-	}
-	close(pipe_feed[0]);
+	if (start_command(&child_process))
+		return error("cannot fork to run external filter %s", cmd);
 
-	write_err = (write_in_full(pipe_feed[1], src, size) < 0);
-	if (close(pipe_feed[1]))
+	write_err = (write_in_full(child_process.in, src, size) < 0);
+	if (close(child_process.in))
 		write_err = 1;
 	if (write_err)
 		error("cannot feed the input to external filter %s", cmd);