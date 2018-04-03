 		return 0;
 
 	/* Check for ENOSPC and EIO errors.. */
-	if (ferror(stdout))
-		die("write failure on standard output");
-	if (fflush(stdout) || fclose(stdout))
+	if (fflush(stdout))
 		die("write failure on standard output: %s", strerror(errno));
-
+	if (ferror(stdout))
+		die("unknown write failure on standard output");
+	if (fclose(stdout))
+		die("close failed on standard output: %s", strerror(errno));
 	return 0;
 }
 