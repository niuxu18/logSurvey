 		struct origin *suspect = ent->suspect;
 
 		printf("%s %d %d %d\n",
-		       sha1_to_hex(suspect->commit->object.sha1),
+		       oid_to_hex(&suspect->commit->object.oid),
 		       ent->s_lno + 1, ent->lno + 1, ent->num_lines);
 		emit_one_suspect_detail(suspect, 0);
 		write_filename_info(suspect->path);
