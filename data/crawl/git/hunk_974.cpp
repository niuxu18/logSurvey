 
 	int msg_fd = hold_lock_file_for_update(&msg_file, filename, 0);
 	if (msg_fd < 0)
-		return error_errno(_("Could not lock '%s'"), filename);
+		return error_errno(_("could not lock '%s'"), filename);
 	if (write_in_full(msg_fd, buf, len) < 0) {
 		rollback_lock_file(&msg_file);
-		return error_errno(_("Could not write to '%s'"), filename);
+		return error_errno(_("could not write to '%s'"), filename);
 	}
 	if (append_eol && write(msg_fd, "\n", 1) < 0) {
 		rollback_lock_file(&msg_file);
-		return error_errno(_("Could not write eol to '%s"), filename);
+		return error_errno(_("could not write eol to '%s"), filename);
 	}
 	if (commit_lock_file(&msg_file) < 0) {
 		rollback_lock_file(&msg_file);
-		return error(_("Error wrapping up '%s'."), filename);
+		return error(_("failed to finalize '%s'."), filename);
 	}
 
 	return 0;
