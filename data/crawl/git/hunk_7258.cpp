 
 		fd = open(arg, O_RDONLY);
 		if (fd < 0)
-			usage(apply_usage);
+			die("can't open patch '%s': %s", arg, strerror(errno));
 		read_stdin = 0;
 		set_default_whitespace_mode(whitespace_option);
 		errs |= apply_patch(fd, arg, inaccurate_eof);