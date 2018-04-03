 		if (S_ISLNK(st.st_mode)) {
 			int ret;
 			char buf[PATH_MAX + 1]; /* ought to be SYMLINK_MAX */
-			size_t sz = xsize_t(st.st_size);
-			if (sizeof(buf) <= st.st_size)
-				die("symlink too long: %s", name);
-			ret = readlink(name, buf, sz);
+			ret = readlink(name, buf, sizeof(buf));
 			if (ret < 0)
 				die("readlink(%s)", name);
-			prep_temp_blob(temp, buf, sz,
+			if (ret == sizeof(buf))
+				die("symlink too long: %s", name);
+			prep_temp_blob(temp, buf, ret,
 				       (one->sha1_valid ?
 					one->sha1 : null_sha1),
 				       (one->sha1_valid ?