 }
 
 /*
+ * Write out any suspect information which depends on the path. This must be
+ * handled separately from emit_one_suspect_detail(), because a given commit
+ * may have changes in multiple paths. So this needs to appear each time
+ * we mention a new group.
+ *
  * To allow LF and other nonportable characters in pathnames,
  * they are c-style quoted as needed.
  */
-static void write_filename_info(const char *path)
+static void write_filename_info(struct origin *suspect)
 {
+	if (suspect->previous) {
+		struct origin *prev = suspect->previous;
+		printf("previous %s ", oid_to_hex(&prev->commit->object.oid));
+		write_name_quoted(prev->path, stdout, '\n');
+	}
 	printf("filename ");
-	write_name_quoted(path, stdout, '\n');
+	write_name_quoted(suspect->path, stdout, '\n');
 }
 
 /*
