 	return ret;
 }
 
+/*
+ * xread() is the same a read(), but it automatically restarts read()
+ * operations with a recoverable error (EAGAIN and EINTR). xread()
+ * DOES NOT GUARANTEE that "len" bytes is read even if the data is available.
+ */
 static inline ssize_t xread(int fd, void *buf, size_t len)
 {
 	ssize_t nr;
