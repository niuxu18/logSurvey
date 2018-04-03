 
 	assert(err);
 
-	for (i = 1; i < n; i++)
-		if (!strcmp(refnames->items[i - 1].string, refnames->items[i].string)) {
+	for (i = 1; i < n; i++) {
+		int cmp = strcmp(refnames->items[i - 1].string,
+				 refnames->items[i].string);
+
+		if (!cmp) {
 			strbuf_addf(err,
 				    "multiple updates for ref '%s' not allowed.",
 				    refnames->items[i].string);
 			return 1;
+		} else if (cmp > 0) {
+			die("BUG: ref_update_reject_duplicates() received unsorted list");
 		}
+	}
 	return 0;
 }
 