 
 	if (sb->final_buf_size && cp[-1] != '\n')
 		putchar('\n');
+
+	commit_info_destroy(&ci);
 }
 
 static void output(struct scoreboard *sb, int option)
