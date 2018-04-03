+$description = "This script tests to make sure that Make looks for
+default makefiles in the correct order (GNUmakefile,makefile,Makefile)";
+
+# Create a makefile called "GNUmakefile"
+$makefile = "GNUmakefile";
+
+open(MAKEFILE,"> $makefile");
+
+print MAKEFILE "FIRST: ; \@echo It chose GNUmakefile\n";
+
+close(MAKEFILE);
+
+# DOS/WIN32 platforms preserve case, but Makefile is the same file as makefile.
+# Just test what we can here (avoid Makefile versus makefile test).
+#
+if ($osname !~ /DOS|Windows/i)
+{
+  # Create another makefile called "makefile"
+  open(MAKEFILE,"> makefile");
+
+  print MAKEFILE "SECOND: ; \@echo It chose makefile\n";
+
+  close(MAKEFILE);
+}
+
+
+# Create another makefile called "Makefile"
+open(MAKEFILE,"> Makefile");
+
+print MAKEFILE "THIRD: ; \@echo It chose Makefile\n";
+
+close(MAKEFILE);
+
+
+&run_make_with_options("","",&get_logfile);
+
+# Create the answer to what should be produced by this Makefile
+$answer = "It chose GNUmakefile\n";
+
+# COMPARE RESULTS
+
+&compare_output($answer,&get_logfile(1)) || &error("abort");
+unlink $makefile;
+
+# DOS/WIN32 platforms preserve case, but Makefile is the same file as makefile.
+# Just test what we can here (avoid Makefile versus makefile test).
+#
+if ($osname !~ /DOS|Windows/i)
+{
+  $answer = "It chose makefile\n";
+
+  &run_make_with_options("","",&get_logfile);
+
+  &compare_output($answer,&get_logfile(1)) || &error("abort");
+  unlink "makefile";
+}
+
+$answer = "It chose Makefile\n";
+
+&run_make_with_options("","",&get_logfile);
+
+&compare_output($answer,&get_logfile(1)) || &error("abort");
+unlink "Makefile";
