     fd = file_open(swaplog_path, O_WRONLY | O_CREAT | O_BINARY);
 
     if (fd < 0) {
-        debugs(50, DBG_IMPORTANT, "ERROR: " << swaplog_path << ": " << xstrerror());
+        int xerrno = errno;
+        debugs(50, DBG_IMPORTANT, "ERROR: " << swaplog_path << ": " << xstrerr(xerrno));
         fatalf("Failed to open swap log %s", swaplog_path);
     }
 