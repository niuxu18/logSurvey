 			die("stat(%s): %s", name, strerror(errno));
 		}
 		if (S_ISLNK(st.st_mode)) {
-			int ret;
-			char buf[PATH_MAX + 1]; /* ought to be SYMLINK_MAX */
-			ret = readlink(name, buf, sizeof(buf));
-			if (ret < 0)
+			struct strbuf sb = STRBUF_INIT;
+			if (strbuf_readlink(&sb, name, st.st_size) < 0)
 				die("readlink(%s)", name);
-			if (ret == sizeof(buf))
-				die("symlink too long: %s", name);
-			prep_temp_blob(name, temp, buf, ret,
+			prep_temp_blob(name, temp, sb.buf, sb.len,
 				       (one->sha1_valid ?
 					one->sha1 : null_sha1),
 				       (one->sha1_valid ?
 					one->mode : S_IFLNK));
+			strbuf_release(&sb);
 		}
 		else {
 			/* we can borrow from the file in the work tree */