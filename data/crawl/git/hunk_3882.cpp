 
 		if (show_log_first && i == 0) {
 			show_log(rev);
+
 			if (rev->verbose_header && opt->output_format)
-				putchar(opt->line_termination);
+				printf("%s%c", diff_line_prefix(opt),
+				       opt->line_termination);
 		}
 		diff_flush(&diffopts);
 	}
