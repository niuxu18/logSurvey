 		if (opt & OUTPUT_ANNOTATE_COMPAT) {
 			const char *name;
 			if (opt & OUTPUT_SHOW_EMAIL)
-				name = ci.author_mail;
+				name = ci.author_mail.buf;
 			else
-				name = ci.author;
+				name = ci.author.buf;
 			printf("\t(%10s\t%10s\t%d)", name,
-			       format_time(ci.author_time, ci.author_tz,
+			       format_time(ci.author_time, ci.author_tz.buf,
 					   show_raw_time),
 			       ent->lno + 1 + cnt);
 		} else {
