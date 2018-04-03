 	int rest = eol - bol;
 
 	if (opt->pre_context || opt->post_context) {
-		if (opt->last_shown && lno > opt->last_shown + 1)
+		if (opt->last_shown == 0) {
+			if (opt->show_hunk_mark)
+				fputs("--\n", stdout);
+			else
+				opt->show_hunk_mark = 1;
+		} else if (lno > opt->last_shown + 1)
 			fputs("--\n", stdout);
 	}
 	opt->last_shown = lno;
