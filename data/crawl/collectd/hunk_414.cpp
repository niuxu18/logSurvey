   for (meta = n->meta; meta != NULL; meta = meta->next)
   {
     if (meta->type == NM_TYPE_STRING)
-      fprintf (fh, "%s: %s\n", meta->name, meta->value_string);
+      fprintf (fh, "%s: %s\n", meta->name, meta->nm_value.nm_string);
     else if (meta->type == NM_TYPE_SIGNED_INT)
-      fprintf (fh, "%s: %"PRIi64"\n", meta->name, meta->value_signed_int);
+      fprintf (fh, "%s: %"PRIi64"\n", meta->name, meta->nm_value.nm_signed_int);
     else if (meta->type == NM_TYPE_UNSIGNED_INT)
-      fprintf (fh, "%s: %"PRIu64"\n", meta->name, meta->value_unsigned_int);
+      fprintf (fh, "%s: %"PRIu64"\n", meta->name, meta->nm_value.nm_unsigned_int);
     else if (meta->type == NM_TYPE_DOUBLE)
-      fprintf (fh, "%s: %e\n", meta->name, meta->value_double);
+      fprintf (fh, "%s: %e\n", meta->name, meta->nm_value.nm_double);
     else if (meta->type == NM_TYPE_BOOLEAN)
       fprintf (fh, "%s: %s\n", meta->name,
-	  meta->value_boolean ? "true" : "false");
+	  meta->nm_value.nm_boolean ? "true" : "false");
   }
 
   fprintf (fh, "\n%s\n", n->message);
