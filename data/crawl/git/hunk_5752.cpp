 	uint32_t mark;
 	struct object_decoration *deco = idnums.hash;
 	FILE *f;
+	int e = 0;
 
 	f = fopen(file, "w");
 	if (!f)
-		error("Unable to open marks file %s for writing", file);
+		error("Unable to open marks file %s for writing.", file);
 
 	for (i = 0; i < idnums.size; i++) {
 		if (deco->base && deco->base->type == 1) {
 			mark = ptr_to_mark(deco->decoration);
-			fprintf(f, ":%"PRIu32" %s\n", mark,
-				sha1_to_hex(deco->base->sha1));
+			if (fprintf(f, ":%"PRIu32" %s\n", mark,
+				sha1_to_hex(deco->base->sha1)) < 0) {
+			    e = 1;
+			    break;
+			}
 		}
 		deco++;
 	}
 
-	if (ferror(f) || fclose(f))
+	e |= ferror(f);
+	e |= fclose(f);
+	if (e)
 		error("Unable to write marks file %s.", file);
 }
 