 		ALLOC_GROW(opts->xopts, opts->xopts_nr + 1, opts->xopts_alloc);
 		opts->xopts[opts->xopts_nr++] = xstrdup(value);
 	} else
-		return error(_("Invalid key: %s"), key);
+		return error(_("invalid key: %s"), key);
 
 	if (!error_flag)
-		return error(_("Invalid value for %s: %s"), key, value);
+		return error(_("invalid value for %s: %s"), key, value);
 
 	return 0;
 }
