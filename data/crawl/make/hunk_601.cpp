 		      0,
 		      TRUE,
 		      DUPLICATE_SAME_ACCESS) == FALSE) {
-    fatal (NILF, _("create_child_process: DuplicateHandle(Err) failed (e=%ld)\n"),
+    fatal (NILF, _("windows32_open_pipe(): DuplicateHandle(Err) failed (e=%ld)\n"),
 	   GetLastError());
   }
 