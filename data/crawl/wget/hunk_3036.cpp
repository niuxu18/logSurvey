 }
 
 char *
-xstrdup_debug (const char *s, const char *source_file, int source_line)
+debugging_strdup (const char *s, const char *source_file, int source_line)
 {
-  char *copy = xstrdup_real (s);
+  char *copy = checking_strdup (s);
   ++malloc_count;
   register_ptr (copy, source_file, source_line);
   return copy;
 }
 
 void
-xfree_debug (void *ptr, const char *source_file, int source_line)
+debugging_free (void *ptr, const char *source_file, int source_line)
 {
-  /* See xfree_real for rationale of this abort.  We repeat it here
+  /* See checking_free for rationale of this abort.  We repeat it here
      because we can print the file and the line where the offending
      free occurred.  */
   if (ptr == NULL)
     {
-      fprintf ("%s: xfree(NULL) at %s:%d\n",
+      fprintf (stderr, "%s: xfree(NULL) at %s:%d\n",
 	       exec_name, source_file, source_line);
       abort ();
     }
+  if (!unregister_ptr (ptr))
+    {
+      fprintf (stderr, "%s: bad xfree(%0*lx) at %s:%d\n",
+	       exec_name, 2 * sizeof (void *), (long) ptr,
+	       source_file, source_line);
+      abort ();
+    }
   ++free_count;
-  unregister_ptr (ptr);
-  xfree_real (ptr);
+
+  checking_free (ptr);
 }
 
 #endif /* DEBUG_MALLOC */
