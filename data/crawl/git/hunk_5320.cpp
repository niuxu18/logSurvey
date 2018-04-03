 	child.use_shell = 1;
 	child.argv = argv;
 	child.out = -1;
-	if (start_command(&child) != 0 ||
-	    strbuf_read(&buf, child.out, 0) < 0 ||
-	    finish_command(&child) != 0) {
-		close(child.out);
-		strbuf_release(&buf);
+	if (start_command(&child)) {
 		remove_tempfile();
-		error("error running textconv command '%s'", pgm);
 		return NULL;
 	}
+
+	if (strbuf_read(&buf, child.out, 0) < 0)
+		err = error("error reading from textconv command '%s'", pgm);
 	close(child.out);
+
+	if (finish_command(&child) || err) {
+		strbuf_release(&buf);
+		remove_tempfile();
+		return NULL;
+	}
 	remove_tempfile();
 
 	return strbuf_detach(&buf, outsize);