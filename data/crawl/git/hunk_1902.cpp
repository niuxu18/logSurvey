 	const char *arg;
 
 	if (!len)
-		die("git fetch-pack: expected ACK/NAK, got EOF");
+		die(_("git fetch-pack: expected ACK/NAK, got EOF"));
 	if (!strcmp(line, "NAK"))
 		return NAK;
 	if (skip_prefix(line, "ACK ", &arg)) {
