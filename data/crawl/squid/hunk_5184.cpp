 
     /* Initiate aio */
     if (aio_write(&qe->aq_e_aiocb) < 0) {
-        fatalf("Aiee! aio_read() returned error (%d)!\n", errno);
-        assert(1 == 0);
+        debug(79, 1) ("WARNING: aio_write() returned error: %s\n", xstrerror());
+        /* fall back to blocking method */
+        file_write(fd, offset, buf, len, callback, data, freefunc);
     }
 }
 
