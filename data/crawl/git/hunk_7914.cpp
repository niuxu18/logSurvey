 	raise(signo);
 }
 
-static int spawn_prog(const char *pgm, const char **arg)
-{
-	pid_t pid;
-	int status;
-
-	fflush(NULL);
-	pid = fork();
-	if (pid < 0)
-		die("unable to fork");
-	if (!pid) {
-		execvp(pgm, (char *const*) arg);
-		exit(255);
-	}
-
-	while (waitpid(pid, &status, 0) < 0) {
-		if (errno == EINTR)
-			continue;
-		return -1;
-	}
-
-	/* Earlier we did not check the exit status because
-	 * diff exits non-zero if files are different, and
-	 * we are not interested in knowing that.  It was a
-	 * mistake which made it harder to quit a diff-*
-	 * session that uses the git-apply-patch-script as
-	 * the GIT_EXTERNAL_DIFF.  A custom GIT_EXTERNAL_DIFF
-	 * should also exit non-zero only when it wants to
-	 * abort the entire diff-* session.
-	 */
-	if (WIFEXITED(status) && !WEXITSTATUS(status))
-		return 0;
-	return -1;
-}
-
 /* An external diff command takes:
  *
  * diff-cmd name infile1 infile1-sha1 infile1-mode \