 
 	execvp (shell, new_argv);
 	if (errno == ENOENT)
-	  error (NILF, "%s: Shell program not found", shell);
+	  error (NILF, _("%s: Shell program not found"), shell);
 	else
 	  perror_with_name ("execvp: ", shell);
 	break;
