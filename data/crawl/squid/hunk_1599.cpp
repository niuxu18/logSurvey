         set_our_signal();
 
         if (put_fd < 0) {
-            fprintf(stderr, "%s: can't open file (%s)\n", argv[0],
-                    xstrerror());
+            std::cerr << "ERROR: can't open file (" << xstrerror() << ")" << std::endl;
             exit(-1);
         }
 #if _SQUID_WINDOWS_
         setmode(put_fd, O_BINARY);
 #endif
 
         if (fstat(put_fd, &sb) < 0) {
-            fprintf(stderr, "%s: can't identify length of file (%s)\n", argv[0], xstrerror());
+            std::cerr << "ERROR: can't identify length of file (" << xstrerror() << ")" << std::endl;
         }
     }
 
