 	sigChldAction.sa_handler = SIG_IGN;
 	sigaction (SIGCHLD, &sigChldAction, NULL);
 
-	if ((pidfile == NULL)
-			&& ((pidfile = cf_get_option ("PIDFile", PIDFILE)) == NULL))
-	{
-		fprintf (stderr, "Cannot obtain pidfile. This shoud not happen. Ever.");
-		return (1);
-	}
-
 	if (daemonize)
 	{
 		if ((pid = fork ()) == -1)
