 			 * we need to show this line.
 			 */
 			if (last_shown && lno != last_shown + 1)
-				printf(hunk_mark);
+				fputs(hunk_mark, stdout);
 			show_line(opt, bol, eol, name, lno, '-');
 			last_shown = lno;
 		}
