     {
       extern int _is_unixy_shell (const char *_path);
 
-      message (1, _("$SHELL changed (was `%s', now `%s')"), default_shell, shell);
+      DB (DB_BASIC, (_("$SHELL changed (was `%s', now `%s')\n"),
+                     default_shell, shell));
       unixy_shell = _is_unixy_shell (shell);
       default_shell = shell;
       /* we must allocate a copy of shell: construct_command_argv() will free
