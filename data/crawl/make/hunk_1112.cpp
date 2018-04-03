 	{
 	  if (errno == 0)
 	    /* An errno value of zero means getloadavg is just unsupported.  */
-	    error (NILF, "cannot enforce load limits on this operating system");
+	    error (NILF, _("cannot enforce load limits on this operating system"));
 	  else
-	    perror_with_name ("cannot enforce load limit: ", "getloadavg");
+	    perror_with_name (_("cannot enforce load limit: "), "getloadavg");
 	}
       lossage = errno;
       load = 0;