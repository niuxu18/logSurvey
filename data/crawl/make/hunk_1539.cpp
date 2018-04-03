   return value;
 }
 
-/* Expand a simple reference to variable NAME, which LENGTH chars long.  */
+/* Warn that NAME is an undefined variable.  */
+
+#ifdef __GNUC__
+__inline
+#endif
+static void
+warn_undefined (name, length)
+     char *name;
+     unsigned int length;
+{
+  if (warn_undefined_variables_flag)
+    {
+      static const char warnmsg[] = "warning: undefined variable `%.*s'";
+      if (reading_filename != 0)
+	makefile_error (reading_filename, *reading_lineno_ptr,
+			warnmsg, length, name);
+      else
+	error (warnmsg, length, name);
+    }
+}
+
+/* Expand a simple reference to variable NAME, which is LENGTH chars long.  */
 
 #ifdef __GNUC__
 __inline