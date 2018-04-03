 
 	commit = lookup_commit(sha1);
 	if (!commit)
-		die("couldn't look up newly created commit");
+		die(_("couldn't look up newly created commit"));
 	if (!commit || parse_commit(commit))
-		die("could not parse newly created commit");
+		die(_("could not parse newly created commit"));
 
 	strbuf_addstr(&format, "format:%h] %s");
 