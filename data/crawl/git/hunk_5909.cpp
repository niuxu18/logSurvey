 	do {
 		ssize_t n = pread(pack_fd, data + rdy, len - rdy, from + rdy);
 		if (n < 0)
-			die("cannot pread pack file: %s", strerror(errno));
+			die_errno("cannot pread pack file");
 		if (!n)
 			die("premature end of pack file, %lu bytes missing",
 			    len - rdy);