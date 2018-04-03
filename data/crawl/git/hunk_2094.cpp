 	/* Create file BISECT_ANCESTORS_OK. */
 	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
 	if (fd < 0)
-		warning("could not create file '%s': %s",
-			filename, strerror(errno));
+		warning_errno("could not create file '%s'",
+			      filename);
 	else
 		close(fd);
  done: