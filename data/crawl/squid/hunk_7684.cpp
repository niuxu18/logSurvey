 {
     int fd;
     static char swapfilename[MAX_FILE_NAME_LEN];
-
+    int x;
+    MemObject *mem = e->mem_obj;
     /* Suggest a new swap file number */
     swapfileno = (swapfileno + 1) % (MAX_SWAP_FILE);
     /* Record the number returned */
     swapfileno = file_map_allocate(swapfileno);
     storeSwapFullPath(swapfileno, swapfilename);
-
-    fd = file_open(swapfilename, NULL, O_RDWR | O_CREAT | O_TRUNC);
+    fd = file_open(swapfilename, NULL, O_WRONLY | O_CREAT | O_TRUNC);
     if (fd < 0) {
 	debug(20, 0, "storeSwapOutStart: Unable to open swapfile: %s\n",
 	    swapfilename);
 	file_map_bit_reset(swapfileno);
 	e->swap_file_number = -1;
 	return -1;
     }
-    e->mem_obj->swap_fd = (short) fd;
+    mem->swapout_fd = (short) fd;
     debug(20, 5, "storeSwapOutStart: Begin SwapOut <URL:%s> to FD %d FILE %s.\n",
 	e->url, fd, swapfilename);
-
     e->swap_file_number = swapfileno;
-    if ((e->mem_obj->e_swap_access = file_write_lock(e->mem_obj->swap_fd)) < 0) {
+    if ((mem->e_swap_access = file_write_lock(mem->swapout_fd)) < 0) {
 	debug(20, 0, "storeSwapOutStart: Unable to lock swapfile: %s\n",
 	    swapfilename);
 	file_map_bit_reset(e->swap_file_number);
 	e->swap_file_number = -1;
 	return -1;
     }
     e->swap_status = SWAPPING_OUT;
-    e->mem_obj->swap_offset = 0;
-    e->mem_obj->e_swap_buf = get_free_8k_page();
-    e->mem_obj->e_swap_buf_len = 0;
-
-    storeCopy(e, 0, SWAP_BUF, e->mem_obj->e_swap_buf,
-	&(e->mem_obj->e_swap_buf_len));
-
+    mem->swap_offset = 0;
+    mem->e_swap_buf = get_free_8k_page();
+    mem->e_swap_buf_len = 0;
+    storeCopy(e,
+	0,
+	SWAP_BUF,
+	mem->e_swap_buf,
+	&(mem->e_swap_buf_len));
     /* start swapping daemon */
-    if (file_write(e->mem_obj->swap_fd,
-	    e->mem_obj->e_swap_buf,
-	    e->mem_obj->e_swap_buf_len,
-	    e->mem_obj->e_swap_access,
-	    storeSwapOutHandle,
-	    e) != DISK_OK) {
-	/* This shouldn't happen */
-	fatal_dump(NULL);
-    }
+    x = file_write(mem->swapout_fd,
+	mem->e_swap_buf,
+	mem->e_swap_buf_len,
+	mem->e_swap_access,
+	storeSwapOutHandle,
+	e,
+	NULL);
+    if (x != DISK_OK)
+	fatal_dump(NULL);	/* This shouldn't happen */
     return 0;
 }
 
