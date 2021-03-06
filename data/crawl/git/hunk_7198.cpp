 	return 1;
 }
 
-static void determine_author_info(struct strbuf *sb)
-{
-	char *name, *email, *date;
-
-	name = getenv("GIT_AUTHOR_NAME");
-	email = getenv("GIT_AUTHOR_EMAIL");
-	date = getenv("GIT_AUTHOR_DATE");
-
-	if (use_message) {
-		const char *a, *lb, *rb, *eol;
-
-		a = strstr(use_message_buffer, "\nauthor ");
-		if (!a)
-			die("invalid commit: %s", use_message);
-
-		lb = strstr(a + 8, " <");
-		rb = strstr(a + 8, "> ");
-		eol = strchr(a + 8, '\n');
-		if (!lb || !rb || !eol)
-			die("invalid commit: %s", use_message);
-
-		name = xstrndup(a + 8, lb - (a + 8));
-		email = xstrndup(lb + 2, rb - (lb + 2));
-		date = xstrndup(rb + 2, eol - (rb + 2));
-	}
-
-	if (force_author) {
-		const char *lb = strstr(force_author, " <");
-		const char *rb = strchr(force_author, '>');
-
-		if (!lb || !rb)
-			die("malformed --author parameter");
-		name = xstrndup(force_author, lb - force_author);
-		email = xstrndup(lb + 2, rb - (lb + 2));
-	}
-
-	strbuf_addf(sb, "author %s\n", fmt_ident(name, email, date, IDENT_ERROR_ON_NO_NAME));
-}
-
 static int parse_and_validate_options(int argc, const char *argv[],
 				      const char * const usage[])
 {