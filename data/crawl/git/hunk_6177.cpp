 
 	if (!(ls_options & LS_NAME_ONLY)) {
 		if (ls_options & LS_SHOW_SIZE) {
+			char size_text[24];
 			if (!strcmp(type, blob_type)) {
-				sha1_object_info(sha1, &size);
-				printf("%06o %s %s %7lu\t", mode, type,
-				       abbrev ? find_unique_abbrev(sha1, abbrev)
-				              : sha1_to_hex(sha1),
-				       size);
+				unsigned long size;
+				if (sha1_object_info(sha1, &size) == OBJ_BAD)
+					strcpy(size_text, "BAD");
+				else
+					snprintf(size_text, sizeof(size_text),
+						 "%lu", size);
 			} else
-				printf("%06o %s %s %7c\t", mode, type,
-				       abbrev ? find_unique_abbrev(sha1, abbrev)
-				              : sha1_to_hex(sha1),
-				       '-');
+				strcpy(size_text, "-");
+			printf("%06o %s %s %7s\t", mode, type,
+			       abbrev ? find_unique_abbrev(sha1, abbrev)
+				      : sha1_to_hex(sha1),
+			       size_text);
 		} else
 			printf("%06o %s %s\t", mode, type,
 			       abbrev ? find_unique_abbrev(sha1, abbrev)
