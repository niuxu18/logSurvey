       /* Third: Get the system type */
       if (!opt.server_response)
 	logprintf (LOG_VERBOSE, "==> SYST ... ");
-      err = ftp_syst (&con->rbuf, &con->rs);
+      err = ftp_syst (csock, &con->rs);
       /* FTPRERR */
       switch (err)
 	{
