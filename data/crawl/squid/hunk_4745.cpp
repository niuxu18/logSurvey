  * free_func is used to free the passed buffer when the write has completed.
  */
 void
-comm_old_write(int fd, const char *buf, int size, CWCB * handler, void *handler_data, FREE * free_func) {
-    CommWriteStateData *state = fd_table[fd].wstate;
-
+comm_write(int fd, const char *buf, int size, IOCB * handler, void *handler_data, FREE * free_func)
+{
     assert(!fd_table[fd].flags.closing);
 
     debug(5, 5) ("comm_write: FD %d: sz %d: hndl %p: data %p.\n",
                  fd, size, handler, handler_data);
 
-    if (NULL != state) {
+    if (commio_has_callback(fd, IOCB_WRITE, COMMIO_FD_WRITECB(fd))) {
         /* This means that the write has been scheduled, but has not
          * triggered yet 
          */
-        fatalf ("comm_write: fd_table[%d].wstate != NULL\n", fd);
-        comm_write_pool->free(state);
-        fd_table[fd].wstate = NULL;
+        fatalf ("comm_write: fd %d: pending callback!\n", fd);
     }
-
-    fd_table[fd].wstate = state = (CommWriteStateData *)comm_write_pool->alloc();
-    state->buf = (char *) buf;
-    state->size = size;
-    state->offset = 0;
-    state->handler = handler;
-    state->handler_data = cbdataReference(handler_data);
-    state->free_func = free_func;
-    commSetSelect(fd, COMM_SELECT_WRITE, commHandleWrite, state, 0);
+    /* XXX ugly */
+    commio_set_callback(fd, IOCB_WRITE, COMMIO_FD_WRITECB(fd), handler, handler_data, (char *)buf, free_func, size);
+    commSetSelect(fd, COMM_SELECT_WRITE, commHandleWrite, COMMIO_FD_WRITECB(fd), 0);
 }
 
 /* a wrapper around comm_write to allow for MemBuf to be comm_written in a snap */
 void
-comm_old_write_mbuf(int fd, MemBuf *mb, CWCB * handler, void *handler_data) {
-    comm_old_write(fd, mb->buf, mb->size, handler, handler_data, mb->freeFunc());
+comm_write_mbuf(int fd, MemBuf *mb, IOCB * handler, void *handler_data) {
+    comm_write(fd, mb->buf, mb->size, handler, handler_data, mb->freeFunc());
 }
 
 
