      unsigned int lineno;
      char *s1, *s2, *s3, *s4, *s5, *s6;
 {
-  fprintf (stderr, "%s:%u: ", file, lineno);
+  fprintf (stderr, "%s:%u: *** ", file, lineno);
   fprintf (stderr, s1, s2, s3, s4, s5, s6);
   fputs (".  Stop.\n", stderr);
 