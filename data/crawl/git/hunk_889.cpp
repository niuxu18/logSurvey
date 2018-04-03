 	return hresult;
 }
 
+static HANDLE swap_osfhnd(int fd, HANDLE new_handle)
+{
+	/*
+	 * Create a copy of the original handle associated with fd
+	 * because the original will get closed when we dup2().
+	 */
+	HANDLE handle = (HANDLE)_get_osfhandle(fd);
+	HANDLE duplicate = duplicate_handle(handle);
 
-/*
- * Make MSVCRT's internal file descriptor control structure accessible
- * so that we can tweak OS handles and flags directly (we need MSVCRT
- * to treat our pipe handle as if it were a console).
- *
- * We assume that the ioinfo structure (exposed by MSVCRT.dll via
- * __pioinfo) starts with the OS handle and the flags. The exact size
- * varies between MSVCRT versions, so we try different sizes until
- * toggling the FDEV bit of _pioinfo(1)->osflags is reflected in
- * isatty(1).
- */
-typedef struct {
-	HANDLE osfhnd;
-	char osflags;
-} ioinfo;
-
-extern __declspec(dllimport) ioinfo *__pioinfo[];
-
-static size_t sizeof_ioinfo = 0;
+	/* Create a temp fd associated with the already open "new_handle". */
+	int new_fd = _open_osfhandle((intptr_t)new_handle, O_BINARY);
 
-#define IOINFO_L2E 5
-#define IOINFO_ARRAY_ELTS (1 << IOINFO_L2E)
+	assert((fd == 1) || (fd == 2));
 
-#define FPIPE 0x08
-#define FDEV  0x40
+	/*
+	 * Use stock dup2() to re-bind fd to the new handle.  Note that
+	 * this will implicitly close(1) and close both fd=1 and the
+	 * originally associated handle.  It will open a new fd=1 and
+	 * call DuplicateHandle() on the handle associated with new_fd.
+	 * It is because of this implicit close() that we created the
+	 * copy of the original.
+	 *
+	 * Note that the OS can recycle HANDLE (numbers) just like it
+	 * recycles fd (numbers), so we must update the cached value
+	 * of "console".  You can use GetFileType() to see that
+	 * handle and _get_osfhandle(fd) may have the same number
+	 * value, but they refer to different actual files now.
+	 *
+	 * Note that dup2() when given target := {0,1,2} will also
+	 * call SetStdHandle(), so we don't need to worry about that.
+	 */
+	dup2(new_fd, fd);
+	if (console == handle)
+		console = duplicate;
+	handle = INVALID_HANDLE_VALUE;
 
-static inline ioinfo* _pioinfo(int fd)
-{
-	return (ioinfo*)((char*)__pioinfo[fd >> IOINFO_L2E] +
-			(fd & (IOINFO_ARRAY_ELTS - 1)) * sizeof_ioinfo);
-}
+	/* Close the temp fd.  This explicitly closes "new_handle"
+	 * (because it has been associated with it).
+	 */
+	close(new_fd);
 
-static int init_sizeof_ioinfo(void)
-{
-	int istty, wastty;
-	/* don't init twice */
-	if (sizeof_ioinfo)
-		return sizeof_ioinfo >= 256;
-
-	sizeof_ioinfo = sizeof(ioinfo);
-	wastty = isatty(1);
-	while (sizeof_ioinfo < 256) {
-		/* toggle FDEV flag, check isatty, then toggle back */
-		_pioinfo(1)->osflags ^= FDEV;
-		istty = isatty(1);
-		_pioinfo(1)->osflags ^= FDEV;
-		/* return if we found the correct size */
-		if (istty != wastty)
-			return 0;
-		sizeof_ioinfo += sizeof(void*);
-	}
-	error("Tweaking file descriptors doesn't work with this MSVCRT.dll");
-	return 1;
-}
+	fd_is_interactive[fd] |= FD_SWAPPED;
 
-static HANDLE swap_osfhnd(int fd, HANDLE new_handle)
-{
-	ioinfo *pioinfo;
-	HANDLE old_handle;
-
-	/* init ioinfo size if we haven't done so */
-	if (init_sizeof_ioinfo())
-		return INVALID_HANDLE_VALUE;
-
-	/* get ioinfo pointer and change the handles */
-	pioinfo = _pioinfo(fd);
-	old_handle = pioinfo->osfhnd;
-	pioinfo->osfhnd = new_handle;
-	return old_handle;
+	return duplicate;
 }
 
 #ifdef DETECT_MSYS_TTY
