 		delete_tempfile(&temporary_sharedindex);
 		return ret;
 	}
+	ret = adjust_shared_perm(get_tempfile_path(&temporary_sharedindex));
+	if (ret) {
+		int save_errno = errno;
+		error("cannot fix permission bits on %s", get_tempfile_path(&temporary_sharedindex));
+		delete_tempfile(&temporary_sharedindex);
+		errno = save_errno;
+		return ret;
+	}
 	ret = rename_tempfile(&temporary_sharedindex,
 			      git_path("sharedindex.%s", sha1_to_hex(si->base->sha1)));
 	if (!ret) {