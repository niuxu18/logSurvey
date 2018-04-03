    it.  <CR> and <LF> characters are stripped from the line, and the
    line is 0-terminated.  All the response lines but the last one are
    skipped.  The last line is determined as described in RFC959.  */
+
 uerr_t
 ftp_response (int fd, char **ret_line)
 {
   while (1)
     {
+      char *p;
       char *line = fd_read_line (fd);
       if (!line)
 	return FTPRERR;
+
+      /* Strip trailing CRLF before printing the line, so that
+	 escnonprint doesn't include bogus \012 and \015. */
+      p = strchr (line, '\0');
+      if (p > line && p[-1] == '\n')
+	*--p = '\0';
+      if (p > line && p[-1] == '\r')
+	*--p = '\0';
+
       if (opt.server_response)
-        logputs (LOG_NOTQUIET, escnonprint (line));
+	logprintf (LOG_NOTQUIET, "%s\n", escnonprint (line));
       else
-        DEBUGP (("%s", escnonprint (line)));
+        DEBUGP (("%s\n", escnonprint (line)));
+
+      /* The last line of output is the one that begins with "ddd ". */
       if (ISDIGIT (line[0]) && ISDIGIT (line[1]) && ISDIGIT (line[2])
 	  && line[3] == ' ')
 	{
-	  char *p = line + strlen (line);
-	  if (p > line && p[-1] == '\n')
-	    *--p = '\0';
-	  if (p > line && p[-1] == '\r')
-	    *--p = '\0';
 	  strncpy (ftp_last_respline, line, sizeof (ftp_last_respline));
 	  ftp_last_respline[sizeof (ftp_last_respline) - 1] = '\0';
 	  *ret_line = line;