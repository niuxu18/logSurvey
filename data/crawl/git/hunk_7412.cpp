 	close(ifd);
 	return 0;
 }
+
+int copy_file(const char *dst, const char *src, int mode)
+{
+	int fdi, fdo, status;
+
+	mode = (mode & 0111) ? 0777 : 0666;
+	if ((fdi = open(src, O_RDONLY)) < 0)
+		return fdi;
+	if ((fdo = open(dst, O_WRONLY | O_CREAT | O_EXCL, mode)) < 0) {
+		close(fdi);
+		return fdo;
+	}
+	status = copy_fd(fdi, fdo);
+	if (close(fdo) != 0)
+		return error("%s: write error: %s", dst, strerror(errno));
+
+	if (!status && adjust_shared_perm(dst))
+		return -1;
+
+	return status;
+}
