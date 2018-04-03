$example = "EXAMPLE_FILE";

open(MAKEFILE,"> $makefile");

# The Contents of the MAKEFILE ...

print MAKEFILE "all: \n";
print MAKEFILE "\t\@echo This makefile did not clean the dir... good\n";
print MAKEFILE "clean: \n";
print MAKEFILE "\t$delete_command EXAMPLE_FILE\n";

# END of Contents of MAKEFILE

close(MAKEFILE);

&touch($example);


&run_make_with_options($makefile,"",&get_logfile,0);

# Create the answer to what should be produced by this Makefile
$answer = "This makefile did not clean the dir... good\n";

&compare_output($answer,&get_logfile(1)) || &error ("abort");


$answer = "$delete_command $example\n";
&run_make_with_options($makefile,"clean",&get_logfile,0);
if (-f $example) {
  $test_passed = 0;
}
&compare_output($answer,&get_logfile(1)) || &error ("abort");

1;









