 static const char pre_receive_hook[] = "hooks/pre-receive";
 static const char post_receive_hook[] = "hooks/post-receive";
 
-static int run_status(int code, const char *cmd_name)
-{
-	if (code > 0)
-		error("%s exited with error code %d", cmd_name, code);
-	return code;
-}
-
 static int run_receive_hook(const char *hook_name)
 {
 	static char buf[sizeof(commands->old_sha1) * 2 + PATH_MAX + 4];
