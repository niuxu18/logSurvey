 	diffcore_std(&revs->diffopt);
 	diff_flush(&revs->diffopt);
 
+	strbuf_release(&replacement);
+
 	/*
 	 * The return code for --no-index imitates diff(1):
 	 * 0 = no changes, 1 = changes, else error
