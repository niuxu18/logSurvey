 			 */
 			goto retry;
 		else {
-			struct strbuf err = STRBUF_INIT;
 			unable_to_lock_message(ref_file, errno, &err);
 			error("%s", err.buf);
-			strbuf_release(&err);
 			goto error_return;
 		}
 	}
 	return old_sha1 ? verify_lock(lock, old_sha1, mustexist) : lock;
 
  error_return:
 	unlock_ref(lock);
+	strbuf_release(&err);
 	errno = last_errno;
 	return NULL;
 }
