 		if (parse_commit(commit) != 0)
 			printf("(bad commit)\n");
 		else {
-			const char *s;
-			int len;
-			for (s = commit->buffer; *s; s++)
-				if (*s == '\n' && s[1] == '\n') {
-					s += 2;
-					break;
-				}
-			for (len = 0; s[len] && '\n' != s[len]; len++)
-				; /* do nothing */
-			printf("%.*s\n", len, s);
+			const char *title;
+			int len = find_commit_subject(commit->buffer, &title);
+			if (len)
+				printf("%.*s\n", len, title);
 		}
 	}
 }