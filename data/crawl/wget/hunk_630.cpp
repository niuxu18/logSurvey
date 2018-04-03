 static void
 print_version (void)
 {
-  const char *options_title = "Options    : ";
-  const char *wgetrc_title  = "Wgetrc     : ";
-  const char *locale_title  = "Locale     : ";
-  const char *compile_title = "Compile    : ";
-  const char *link_title    = "Link       : ";
-  const char *prefix_spaces = "             ";
-  const int prefix_space_length = strlen (prefix_spaces);
+  const char *wgetrc_title  = _("Wgetrc: ");
+  const char *locale_title  = _("Locale: ");
+  const char *compile_title = _("Compile: ");
+  const char *link_title    = _("Link: ");
   char *line;
   char *env_wgetrc, *user_wgetrc;
   int i;
 
-  printf ("GNU Wget %s\n", version_string);
-  printf (options_title);
+  printf (_("GNU Wget %s\n\n"), version_string);
   /* compiled_features is a char*[]. We limit the characters per
-     line to max_chars_per_line and prefix each line with a constant
+     line to MAX_CHARS_PER_LINE and prefix each line with a constant
      number of spaces for proper alignment. */
   for (i = 0; compiled_features[i] != NULL; ) 
     {
-      int line_length = max_chars_per_line - prefix_space_length;
+      int line_length = MAX_CHARS_PER_LINE;
       while ((line_length > 0) && (compiled_features[i] != NULL)) 
         {
           printf ("%s ", compiled_features[i]);