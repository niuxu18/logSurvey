 	    tmp_filename, swaplog_file, xstrerror());
 	fatal_dump("storeRebuiltFromDisk: rename failed");
     }
-    if (file_write_unlock(swaplog_fd, swaplog_lock) != DISK_OK)
-	fatal_dump("storeRebuiltFromDisk: swaplog unlock failed");
     file_close(swaplog_fd);
     if ((swaplog_fd = file_open(swaplog_file, NULL, O_WRONLY | O_CREAT)) < 0)
 	fatal_dump("storeRebuiltFromDisk: file_open(swaplog_file) failed");
-    swaplog_lock = file_write_lock(swaplog_fd);
 }
 
 static void