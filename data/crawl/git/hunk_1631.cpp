 
 	if (!cache_tree_fully_valid(active_cache_tree) &&
 	    cache_tree_update(&the_index, 0) < 0) {
-		error(_("error building trees"));
+		err(o, _("error building trees"));
 		return NULL;
 	}
 