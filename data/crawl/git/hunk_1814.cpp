 }
 
 /*
- * Return true iff the reference described by entry can be resolved to
- * an object in the database.  Emit a warning if the referred-to
- * object does not exist.
+ * Return true if refname, which has the specified oid and flags, can
+ * be resolved to an object in the database. If the referred-to object
+ * does not exist, emit a warning and return false.
  */
-static int entry_resolves_to_object(struct ref_entry *entry)
+static int ref_resolves_to_object(const char *refname,
+				  const struct object_id *oid,
+				  unsigned int flags)
 {
-	if (entry->flag & REF_ISBROKEN)
+	if (flags & REF_ISBROKEN)
 		return 0;
-	if (!has_sha1_file(entry->u.value.oid.hash)) {
-		error("%s does not point to a valid object!", entry->name);
+	if (!has_sha1_file(oid->hash)) {
+		error("%s does not point to a valid object!", refname);
 		return 0;
 	}
 	return 1;
 }
 
+/*
+ * Return true if the reference described by entry can be resolved to
+ * an object in the database; otherwise, emit a warning and return
+ * false.
+ */
+static int entry_resolves_to_object(struct ref_entry *entry)
+{
+	return ref_resolves_to_object(entry->name,
+				      &entry->u.value.oid, entry->flag);
+}
+
 /*
  * current_ref is a performance hack: when iterating over references
  * using the for_each_ref*() functions, current_ref is set to the