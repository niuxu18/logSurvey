 	if (is_expected_rev(current_bad_oid)) {
 		char *bad_hex = oid_to_hex(current_bad_oid);
 		char *good_hex = join_sha1_array_hex(&good_revs, ' ');
-
-		fprintf(stderr, "The merge base %s is bad.\n"
-			"This means the bug has been fixed "
-			"between %s and [%s].\n",
-			bad_hex, bad_hex, good_hex);
-
+		if (!strcmp(term_bad, "bad") && !strcmp(term_good, "good")) {
+			fprintf(stderr, "The merge base %s is bad.\n"
+				"This means the bug has been fixed "
+				"between %s and [%s].\n",
+				bad_hex, bad_hex, good_hex);
+		} else {
+			fprintf(stderr, "The merge base %s is %s.\n"
+				"This means the first '%s' commit is "
+				"between %s and [%s].\n",
+				bad_hex, term_bad, term_good, bad_hex, good_hex);
+		}
 		exit(3);
 	}
 
-	fprintf(stderr, "Some good revs are not ancestor of the bad rev.\n"
+	fprintf(stderr, "Some %s revs are not ancestor of the %s rev.\n"
 		"git bisect cannot work properly in this case.\n"
-		"Maybe you mistook good and bad revs?\n");
+		"Maybe you mistook %s and %s revs?\n",
+		term_good, term_bad, term_good, term_bad);
 	exit(1);
 }
 
