 }
 
 void
-file_map_bit_reset(int file_number)
+file_map_bit_reset(fileMap * fm, int file_number)
 {
     unsigned long bitmask = (1L << (file_number & LONG_BIT_MASK));
-
     fm->file_map[file_number >> LONG_BIT_SHIFT] &= ~bitmask;
     fm->n_files_in_map--;
 }
 
 int
-file_map_bit_test(int file_number)
+file_map_bit_test(fileMap * fm, int file_number)
 {
     unsigned long bitmask = (1L << (file_number & LONG_BIT_MASK));
     /* be sure the return value is an int, not a u_long */
     return (fm->file_map[file_number >> LONG_BIT_SHIFT] & bitmask ? 1 : 0);
 }
 
 int
-file_map_allocate(int suggestion)
+file_map_allocate(fileMap * fm, int suggestion)
 {
     int word;
     int bit;
     int count;
-
-    if (!file_map_bit_test(suggestion)) {
+    if (!file_map_bit_test(fm, suggestion)) {
 	fm->last_file_number_allocated = suggestion;
-	return file_map_bit_set(suggestion);
+	return file_map_bit_set(fm, suggestion);
     }
     word = suggestion >> LONG_BIT_SHIFT;
     for (count = 0; count < fm->nwords; count++) {
 	if (fm->file_map[word] != ALL_ONES)
 	    break;
 	word = (word + 1) % fm->nwords;
     }
-
     for (bit = 0; bit < BITS_IN_A_LONG; bit++) {
 	suggestion = ((unsigned long) word << LONG_BIT_SHIFT) | bit;
-	if (!file_map_bit_test(suggestion)) {
+	if (!file_map_bit_test(fm, suggestion)) {
 	    fm->last_file_number_allocated = suggestion;
-	    return file_map_bit_set(suggestion);
+	    return file_map_bit_set(fm, suggestion);
 	}
     }
-
-    debug(8, 0, "file_map_allocate: All %d files are in use!\n", fm->max_n_files);
-    debug(8, 0, "You need to recompile with a larger value for MAX_SWAP_FILE\n");
-    fatal_dump(NULL);
-    return (0);			/* NOTREACHED */
+    fatal_dump("file_map_allocate: Exceeded filemap limit");
+    return 0;			/* NOTREACHED */
 }
 
 void
-filemapFreeMemory(void)
+filemapFreeMemory(fileMap * fm)
 {
     safe_free(fm->file_map);
     safe_free(fm);
