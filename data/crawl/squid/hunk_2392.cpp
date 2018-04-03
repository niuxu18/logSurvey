     file_close(swaplog_fd);
 
     if (xrename(new_path, swaplog_path) < 0) {
-        fatal("commonUfsDirCloseTmpSwapLog: rename failed");
+        debugs(50, DBG_IMPORTANT, "ERROR: " << swaplog_path << ": " << xstrerror());
+        fatalf("Failed to rename log file %s with .new", swaplog_path);
     }
 
     fd = file_open(swaplog_path, O_WRONLY | O_CREAT | O_BINARY);
 
     if (fd < 0) {
-        debugs(50, 1, "" << swaplog_path << ": " << xstrerror());
-        fatal("commonUfsDirCloseTmpSwapLog: Failed to open swap log.");
+        debugs(50, DBG_IMPORTANT, "ERROR: " << swaplog_path << ": " << xstrerror());
+        fatalf("Failed to open swap log ", swaplog_path);
     }
 
     safe_free(swaplog_path);