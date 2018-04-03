 	qsort(array->refs, array->nr, sizeof(*array->refs), ref_entry_cmp);
 
 	/* Remove any duplicates from the ref_array */
-	for (; j < array->nr; j++) {
-		struct ref_entry *a = array->refs[i];
-		struct ref_entry *b = array->refs[j];
-		if (!strcmp(a->name, b->name)) {
-			if (hashcmp(a->sha1, b->sha1))
-				die("Duplicated ref, and SHA1s don't match: %s",
-				    a->name);
-			warning("Duplicated ref: %s", a->name);
-			free(b);
+	i = 0;
+	for (j = 1; j < array->nr; j++) {
+		if (is_dup_ref(array->refs[i], array->refs[j])) {
+			free(array->refs[j]);
 			continue;
 		}
-		i++;
-		array->refs[i] = array->refs[j];
+		array->refs[++i] = array->refs[j];
 	}
 	array->nr = i + 1;
 }