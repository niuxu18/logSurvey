 static int is_active(int argc, const char **argv, const char *prefix)
 {
 	if (argc != 2)
-		die("submodule--helper is-active takes exactly 1 arguments");
+		die("submodule--helper is-active takes exactly 1 argument");
 
 	gitmodules_config();
 