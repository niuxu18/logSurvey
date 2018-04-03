      but we write this one to stderr because it might be
      run in a child fork whose stdout is piped.  */
 
-  fprintf (stderr, "%s access: user %d (real %d), group %d (real %d)\n",
-	   flavor, geteuid (), getuid (), getegid (), getgid ());
+  fprintf (stderr, "%s access: user %lu (real %lu), group %lu (real %lu)\n",
+	   flavor, (unsigned long) geteuid (), (unsigned long) getuid (),
+           (unsigned long) getegid (), (unsigned long) getgid ());
   fflush (stderr);
 }
 
