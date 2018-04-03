 		string_list_insert(rr, path)->util = id;
 
 		/*
-		 * If the directory does not exist, create
-		 * it.  mkdir_in_gitdir() will fail with
-		 * EEXIST if there already is one.
-		 *
-		 * NEEDSWORK: make sure "gc" does not remove
-		 * preimage without removing the directory.
+		 * Ensure that the directory exists.
+		 * mkdir_in_gitdir() will fail with EEXIST if there
+		 * already is one.
 		 */
-		if (mkdir_in_gitdir(rerere_path(id, NULL)))
-			continue;
+		if (mkdir_in_gitdir(rerere_path(id, NULL)) &&
+		    errno != EEXIST)
+			continue; /* NEEDSWORK: perhaps we should die? */
 
-		/*
-		 * We are the first to encounter this
-		 * conflict.  Ask handle_file() to write the
-		 * normalized contents to the "preimage" file.
-		 */
-		handle_file(path, NULL, rerere_path(id, "preimage"));
-		id->collection->status |= RR_HAS_PREIMAGE;
-		fprintf(stderr, "Recorded preimage for '%s'\n", path);
+		if (id->collection->status & RR_HAS_PREIMAGE) {
+			;
+		} else {
+			/*
+			 * We are the first to encounter this
+			 * conflict.  Ask handle_file() to write the
+			 * normalized contents to the "preimage" file.
+			 *
+			 * NEEDSWORK: what should happen if we had a
+			 * leftover postimage that is totally
+			 * unrelated?  Perhaps we should unlink it?
+			 */
+			handle_file(path, NULL, rerere_path(id, "preimage"));
+			id->collection->status |= RR_HAS_PREIMAGE;
+			fprintf(stderr, "Recorded preimage for '%s'\n", path);
+		}
 	}
 
 	for (i = 0; i < rr->nr; i++)
