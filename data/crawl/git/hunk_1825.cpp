 			free_fragment_list(patch->fragments);
 			patch->fragments = NULL;
 		} else if (status) {
-			return error(_("read of %s failed"), patch->old_name);
+			return error(_("failed to read %s"), patch->old_name);
 		}
 	}
 
