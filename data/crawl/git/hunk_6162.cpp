 		int fd;
 
 		mtime.sec = st.st_mtime;
-#ifdef USE_NSEC
-		mtime.usec = st.st_mtim.usec;
-#endif
+		mtime.nsec = ST_MTIME_NSEC(st);
 		if (stat(shallow, &st)) {
 			if (mtime.sec)
 				die("shallow file was removed during fetch");
 		} else if (st.st_mtime != mtime.sec
 #ifdef USE_NSEC
-				|| st.st_mtim.usec != mtime.usec
+				|| ST_MTIME_NSEC(st) != mtime.nsec
 #endif
 			  )
 			die("shallow file was changed during fetch");
