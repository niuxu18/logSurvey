 {
   char typeflag;
   tar_extractor_t fun;
+  bool skip_dotdot_name;
 
   fatal_exit_hook = extract_finish;
 
   set_next_block_after (current_header);
 
+  skip_dotdot_name = (!absolute_names_option
+		      && contains_dot_dot (current_stat_info.orig_file_name));
+  if (skip_dotdot_name)
+    ERROR ((0, 0, _("%s: Member name contains '..'"),
+	    quotearg_colon (current_stat_info.orig_file_name)));
+
   if (!current_stat_info.file_name[0]
+      || skip_dotdot_name
       || (interactive_option
 	  && !confirm ("extract", current_stat_info.file_name)))
     {