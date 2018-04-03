 		if (offset <= ceil_offset)
 			return setup_nongit(cwd, nongit_ok);
 		if (one_filesystem) {
-			if (stat("..", &buf)) {
-				cwd[offset] = '\0';
-				die_errno("failed to stat '%s/..'", cwd);
-			}
-			if (buf.st_dev != current_device) {
+			dev_t parent_device = get_device_or_die("..", cwd);
+			if (parent_device != current_device) {
 				if (nongit_ok) {
 					if (chdir(cwd))
 						die_errno("Cannot come back to cwd");