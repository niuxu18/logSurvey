   rv = fake_fork_child ();
   if (rv < 0)
     {
-      fprintf (stderr, "fake_fork_child() failed\n");
+      fprintf (stderr, _("fake_fork_child() failed\n"));
       abort ();
     }
   else if (rv == 0)