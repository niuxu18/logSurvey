 
 /*
  * Write sha1 into the open lockfile, then close the lockfile. On
- * errors, rollback the lockfile and set errno to reflect the problem.
+ * errors, rollback the lockfile, fill in *err and
+ * return -1.
  */
 static int write_ref_to_lockfile(struct ref_lock *lock,
-				 const unsigned char *sha1)
+				 const unsigned char *sha1, struct strbuf *err)
 {
 	static char term = '\n';
 	struct object *o;
 
 	o = parse_object(sha1);
 	if (!o) {
-		error("Trying to write ref %s with nonexistent object %s",
-			lock->ref_name, sha1_to_hex(sha1));
+		strbuf_addf(err,
+			    "Trying to write ref %s with nonexistent object %s",
+			    lock->ref_name, sha1_to_hex(sha1));
 		unlock_ref(lock);
-		errno = EINVAL;
 		return -1;
 	}
 	if (o->type != OBJ_COMMIT && is_branch(lock->ref_name)) {
-		error("Trying to write non-commit object %s to branch %s",
-			sha1_to_hex(sha1), lock->ref_name);
+		strbuf_addf(err,
+			    "Trying to write non-commit object %s to branch %s",
+			    sha1_to_hex(sha1), lock->ref_name);
 		unlock_ref(lock);
-		errno = EINVAL;
 		return -1;
 	}
 	if (write_in_full(lock->lk->fd, sha1_to_hex(sha1), 40) != 40 ||
 	    write_in_full(lock->lk->fd, &term, 1) != 1 ||
 	    close_ref(lock) < 0) {
-		int save_errno = errno;
-		error("Couldn't write %s", lock->lk->filename.buf);
+		strbuf_addf(err,
+			    "Couldn't write %s", lock->lk->filename.buf);
 		unlock_ref(lock);
-		errno = save_errno;
 		return -1;
 	}
 	return 0;
