       /* parent, no error */
       printf (_("Continuing in background, pid %d.\n"), (int) pid);
       if (logfile_changed)
-        printf (_("Output will be written to `%s'.\n"), opt.lfilename);
+        printf (_("Output will be written to %s.\n"), quote (opt.lfilename));
       exit (0);                 /* #### should we use _exit()? */
     }
 
