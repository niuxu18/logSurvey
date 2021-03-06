     void *const p =
         mmap(NULL, theSize, PROT_READ | PROT_WRITE, MAP_SHARED, theFD, 0);
     if (p == MAP_FAILED) {
-        debugs(54, 5, HERE << "mmap " << theName << ": " << xstrerror());
+        int xerrno = errno;
+        debugs(54, 5, "mmap " << theName << ": " << xstrerr(xerrno));
         fatalf("Ipc::Mem::Segment::attach failed to mmap(%s): %s\n",
-               theName.termedBuf(), xstrerror());
+               theName.termedBuf(), xstrerr(xerrno));
     }
     theMem = p;
+
+    lock();
 }
 
 /// Unmap the shared memory segment from the process memory space.
