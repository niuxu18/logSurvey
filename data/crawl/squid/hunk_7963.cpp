 	}
     }
 
-    debug(0, "file_map_allocate: All %d files are in use!\n", fm->max_n_files);
-    debug(0, "You need to recompile with a larger value for MAX_SWAP_FILE\n");
+    debug(0, 0, "file_map_allocate: All %d files are in use!\n", fm->max_n_files);
+    debug(0, 0, "You need to recompile with a larger value for MAX_SWAP_FILE\n");
     fatal_dump(NULL);
     return (0);			/* NOTREACHED */
 }
