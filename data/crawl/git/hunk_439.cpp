 	commit_info_destroy(&ci);
 }
 
-static void output(struct scoreboard *sb, int option)
+static void output(struct blame_scoreboard *sb, int option)
 {
 	struct blame_entry *ent;
 