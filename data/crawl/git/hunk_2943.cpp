 
 	if (!strcmp(arg, "mbox"))
 		*opt_value = PATCH_FORMAT_MBOX;
+	else if (!strcmp(arg, "stgit"))
+		*opt_value = PATCH_FORMAT_STGIT;
 	else
 		return error(_("Invalid value for --patch-format: %s"), arg);
 	return 0;