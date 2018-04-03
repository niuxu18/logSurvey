$example = "EXAMPLE_FILE";

open(MAKEFILE,"> $makefile");
print MAKEFILE qq!
all: ; \@echo This makefile did not clean the dir... good
clean: ; $CMD_rmfile $example
!;
close(MAKEFILE);

touch($example);
run_make_with_options($makefile,"",&get_logfile,0);

$answer = "This makefile did not clean the dir... good\n";
compare_output($answer,&get_logfile(1)) || error("abort");


$answer = "$CMD_rmfile $example\n";
run_make_with_options($makefile,"clean",&get_logfile,0);
if (-f $example) {
  $test_passed = 0;
}
compare_output($answer,&get_logfile(1)) || error("abort");

1;
