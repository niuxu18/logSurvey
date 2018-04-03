 	}
 
 	strcpy(date, git_default_date);
-	if (date_str)
-		parse_date(date_str, date, sizeof(date));
+	if (date_str) {
+		if (*date_str)
+			parse_date(date_str, date, sizeof(date));
+		else
+			date[0] = '\0';
+	}
 
 	i = copy(buffer, sizeof(buffer), 0, name);
 	i = add_raw(buffer, sizeof(buffer), i, " <");
 	i = copy(buffer, sizeof(buffer), i, email);
-	i = add_raw(buffer, sizeof(buffer), i, "> ");
+	i = add_raw(buffer, sizeof(buffer), i, date[0] ? "> " : ">");
 	i = copy(buffer, sizeof(buffer), i, date);
 	if (i >= sizeof(buffer))
 		die("Impossibly long personal identifier");