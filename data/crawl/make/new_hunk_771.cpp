#                                                                    -*-perl-*-

$description = "<FILL IN SHORT DESCRIPTION HERE>";
$details = "<FILL IN DETAILS OF HOW YOU TEST WHAT YOU SAY YOU ARE TESTING>";

# Run a make test.  See the documentation of run_make_test() in
# run_make_tests.pl, but briefly the first argument is a string with the
# contents of a makefile to be tested, the second is a string containing the
# arguments to be passed to the make invocation, the third is a string
# containing the expected output.  The fourth is the expected exit code for
# make.  If not specified, it's assumed that the make program should succeed
# (exit with 0).

run_make_test('Your test makefile goes here',
              'Arguments to pass to make go here',
              'Expected output from the invocation goes here');

# There are various special tokens, options, etc.  See the full documentation
# in run_make_tests.pl.


# This tells the test driver that the perl test script executed properly.
1;
