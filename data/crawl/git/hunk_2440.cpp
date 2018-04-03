 
 	if (diff_hunks(&file_p, &file_o, 0, blame_chunk_cb, &d))
 		die("unable to generate diff (%s -> %s)",
-		    sha1_to_hex(parent->commit->object.sha1),
-		    sha1_to_hex(target->commit->object.sha1));
+		    oid_to_hex(&parent->commit->object.oid),
+		    oid_to_hex(&target->commit->object.oid));
 	/* The rest are the same as the parent */
 	blame_chunk(&d.dstq, &d.srcq, INT_MAX, d.offset, INT_MAX, parent);
 	*d.dstq = NULL;
