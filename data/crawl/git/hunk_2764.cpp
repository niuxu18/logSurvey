 			if (!strcmp(type, blob_type)) {
 				unsigned long size;
 				if (sha1_object_info(sha1, &size) == OBJ_BAD)
-					strcpy(size_text, "BAD");
+					xsnprintf(size_text, sizeof(size_text),
+						  "BAD");
 				else
-					snprintf(size_text, sizeof(size_text),
-						 "%lu", size);
+					xsnprintf(size_text, sizeof(size_text),
+						  "%lu", size);
 			} else
-				strcpy(size_text, "-");
+				xsnprintf(size_text, sizeof(size_text), "-");
 			printf("%06o %s %s %7s\t", mode, type,
 			       find_unique_abbrev(sha1, abbrev),
 			       size_text);
