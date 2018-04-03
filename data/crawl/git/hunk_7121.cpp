 	if (!from_stdin) {
 		close(input_fd);
 	} else {
+		fsync_or_die(output_fd, curr_pack_name);
 		err = close(output_fd);
 		if (err)
 			die("error while closing pack file: %s", strerror(errno));
