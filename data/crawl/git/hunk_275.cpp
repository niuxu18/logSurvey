 	}
 
 	if (is_tempfile_active(tempfile))
-		die("BUG: prepare_tempfile_object called for active object");
+		BUG("prepare_tempfile_object called for active object");
 	if (!tempfile->on_list) {
 		/* Initialize *tempfile and add it to tempfile_list: */
 		tempfile->fd = -1;
