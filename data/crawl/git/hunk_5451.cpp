 	if (reset_type == NONE)
 		reset_type = MIXED; /* by default */
 
-	if ((reset_type == HARD || reset_type == MERGE)
-	    && !is_inside_work_tree())
-		die("%s reset requires a work tree",
-		    reset_type_names[reset_type]);
+	if (reset_type == HARD || reset_type == MERGE)
+		setup_work_tree();
 
 	/* Soft reset does not touch the index file nor the working tree
 	 * at all, but requires them in a good order.  Other resets reset
