 	return fn(osha1, nsha1, sb->buf + 82, timestamp, tz, message, cb_data);
 }
 
-int for_each_recent_reflog_ent(const char *refname, each_reflog_ent_fn fn, long ofs, void *cb_data)
+static char *find_beginning_of_line(char *bob, char *scan)
+{
+	while (bob < scan && *(--scan) != '\n')
+		; /* keep scanning backwards */
+	/*
+	 * Return either beginning of the buffer, or LF at the end of
+	 * the previous line.
+	 */
+	return scan;
+}
+
+int for_each_reflog_ent_reverse(const char *refname, each_reflog_ent_fn fn, void *cb_data)
 {
-	FILE *logfp;
 	struct strbuf sb = STRBUF_INIT;
-	int ret = 0;
+	FILE *logfp;
+	long pos;
+	int ret = 0, at_tail = 1;
 
 	logfp = fopen(git_path("logs/%s", refname), "r");
 	if (!logfp)
 		return -1;
 
-	if (ofs) {
-		struct stat statbuf;
-		if (fstat(fileno(logfp), &statbuf) ||
-		    statbuf.st_size < ofs ||
-		    fseek(logfp, -ofs, SEEK_END) ||
-		    strbuf_getwholeline(&sb, logfp, '\n')) {
-			fclose(logfp);
-			strbuf_release(&sb);
-			return -1;
+	/* Jump to the end */
+	if (fseek(logfp, 0, SEEK_END) < 0)
+		return error("cannot seek back reflog for %s: %s",
+			     refname, strerror(errno));
+	pos = ftell(logfp);
+	while (!ret && 0 < pos) {
+		int cnt;
+		size_t nread;
+		char buf[BUFSIZ];
+		char *endp, *scanp;
+
+		/* Fill next block from the end */
+		cnt = (sizeof(buf) < pos) ? sizeof(buf) : pos;
+		if (fseek(logfp, pos - cnt, SEEK_SET))
+			return error("cannot seek back reflog for %s: %s",
+				     refname, strerror(errno));
+		nread = fread(buf, cnt, 1, logfp);
+		if (nread < 0)
+			return error("cannot read %d bytes from reflog for %s: %s",
+				     cnt, refname, strerror(errno));
+		pos -= cnt;
+
+		scanp = endp = buf + cnt;
+		if (at_tail && scanp[-1] == '\n')
+			/* Looking at the final LF at the end of the file */
+			scanp--;
+		at_tail = 0;
+
+		while (buf < scanp) {
+			/*
+			 * terminating LF of the previous line, or the beginning
+			 * of the buffer.
+			 */
+			char *bp;
+
+			bp = find_beginning_of_line(buf, scanp);
+
+			if (*bp != '\n') {
+				strbuf_splice(&sb, 0, 0, buf, endp - buf);
+				if (pos)
+					break; /* need to fill another block */
+				scanp = buf - 1; /* leave loop */
+			} else {
+				/*
+				 * (bp + 1) thru endp is the beginning of the
+				 * current line we have in sb
+				 */
+				strbuf_splice(&sb, 0, 0, bp + 1, endp - (bp + 1));
+				scanp = bp;
+				endp = bp + 1;
+			}
+			ret = show_one_reflog_ent(&sb, fn, cb_data);
+			strbuf_reset(&sb);
+			if (ret)
+				break;
 		}
-	}
 
-	while (!ret && !strbuf_getwholeline(&sb, logfp, '\n'))
+	}
+	if (!ret && sb.len)
 		ret = show_one_reflog_ent(&sb, fn, cb_data);
+
 	fclose(logfp);
 	strbuf_release(&sb);
 	return ret;
 }
 
 int for_each_reflog_ent(const char *refname, each_reflog_ent_fn fn, void *cb_data)
 {
-	return for_each_recent_reflog_ent(refname, fn, 0, cb_data);
-}
+	FILE *logfp;
+	struct strbuf sb = STRBUF_INIT;
+	int ret = 0;
+
+	logfp = fopen(git_path("logs/%s", refname), "r");
+	if (!logfp)
+		return -1;
 
+	while (!ret && !strbuf_getwholeline(&sb, logfp, '\n'))
+		ret = show_one_reflog_ent(&sb, fn, cb_data);
+	fclose(logfp);
+	strbuf_release(&sb);
+	return ret;
+}
 /*
  * Call fn for each reflog in the namespace indicated by name.  name
  * must be empty or end with '/'.  Name will be used as a scratch
