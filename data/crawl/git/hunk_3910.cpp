 				close_pair(fdout);
 			else if (cmd->out)
 				close(cmd->out);
+			str = "standard error";
 fail_pipe:
-			error("cannot create pipe for %s: %s",
-				cmd->argv[0], strerror(failed_errno));
+			error("cannot create %s pipe for %s: %s",
+				str, cmd->argv[0], strerror(failed_errno));
 			errno = failed_errno;
 			return -1;
 		}