+2013-10-09  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/patspecific_vars: Typo fixes.
+
+2013-10-05  Paul Smith  <psmith@gnu.org>
+
+	* test_driver.pl (run_all_tests): Rewrite to be more clear.
+	* scripts/features/jobserver: Avoid using $ENV{HOME} as it doesn't
+	exist everywhere.
+	* scripts/features/default_names: End with 1;
+
+	* scripts/features/loadapi: Use new calling signatures.  Verify
+	the NOEXPAND flag works.  Test with all valid function name
+	characters.
+
+2013-09-29  Paul Smith  <psmith@gnu.org>
+
+	* scripts/variables/SHELL: Solaris /bin/sh can't handle options in
+	multiple words; skip that test.
+	* scripts/targets/ONESHELL: Ditto.
+
+	* scripts/variables/GNUMAKEFLAGS: Verify that GNUMAKEFLAGS is
+	cleared and options are not duplicated.
+
+2013-09-23  Paul Smith  <psmith@gnu.org>
+
+	* scripts/options/print-directory: Rename dash-w to
+	print-directory to avoid conflicts with dash-W on case-insensitive
+	filesystems.
+
+2013-09-22  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/se_implicit: Verify that order-only tokens
+	inside second expansion are parsed correctly.
+	Test for Savannah bug #31155.
+
+	* run_make_tests.pl (set_more_defaults): If we can't find
+	gnumake.h based on the make program we might be running from a
+	remote build directory.  Parse the Makefile for the right path.
+
+	Fix some test issues on Solaris.
+
+	* scripts/features/archives: Determine what output ar gives when
+	adding and replacing objects and compare with that.
+	* scripts/features/escape: Solaris /bin/sh doesn't properly handle
+	backslashes inside single quotes, so don't rely on it.
+	* scripts/features/output-sync: false(1) gives different exit
+	codes on different systems; use "exit 1" instead.
+	* scripts/features/parallelism: Increase the timeout for slower systems.
+
+2013-09-21  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/archives: Some versions of ar (MacOSX) generate
+	different output when creating archives.  Run it and verify the
+	real output.
+	* scripts/features/default_names: MacOSX is, like Windows,
+	case-preserving / case-insensitive.  Redo the test to avoid
+	checking for "UNIX".
+	* test_driver.pl (attach_default_output): Don't dup stdout into
+	stderr.  Reported by Denis Excoffier <bug-tar@Denis-Excoffier.org>
+
+	* scripts/features/se_explicit: Fix a test that behaves
+	differently with/without archive capability enabled.
+	* scripts/features/output-sync: Don't test output-sync if it's not
+	enabled.  We also skip it if parallelism is not enabled, although
+	strictly speaking some of the output-sync tests are valid even
+	without parallelism.
+	* scripts/features/jobserver: Move some tests that require the
+	jobserver from features/parallelism to a separate suite.  Only run
+	this if jobserver mode is enabled.
+
+	* scripts/features/output-sync: Test shell functions writing to
+	stderr in recipes: ensure it's captured via output-sync.  Test
+	output generated while reading makefiles and make sure it's
+	captured via output-sync.  Make sure that fatal errors dump the
+	output so it's not lost.
+
+	* scripts/options/dash-w: Add a test for -w flag.
+
+2013-09-15  Paul Smith  <psmith@gnu.org>
+
+	* scripts/misc/fopen-fail: Check for failure on infinite recursion.
+	* run_make_tests.pl (run_make_test): Allow the answer string to be
+	undef, which means that we shouldn't compare it at all.  Only the
+	exit code matters in this case.
+	* test_driver.pl (compare_output): Ditto.
+	Test for Savannah bug #27374.
+
+	* scripts/features/parallelism: Test broken jobserver on recursion.
+	Test for Savannah bug #39934.
+
+	* scripts/options/eval: Verify --eval during restart.
+	Test for Savannah bug #39203.
+
+2013-09-14  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/output-sync: Verify -Orecurse properly.
+
+2013-09-12  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/output-sync: Modify for output sync behavior.
+	* scripts/variables/MAKE_RESTARTS: Ditto.
+	* scripts/variables/MAKEFLAGS: Remove mode for --trace.
+	* scripts/variables/GNUMAKEFLAGS: Ditto.
+
+2013-07-22  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/rule_glob: Add tests for wildcards in rules.
+	Test for Savannah bug #39310.
+
+2013-07-09  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/se_implicit: Add a test for SE rules depending
+	on other SE rules to be built.
+
+2013-05-26  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/archives: Test for Savannah bug #38442.
+
+	* scripts/misc/bs-nl: Test for Savannah bug #39035.
+	Add a test for Savannah bug #38945.
+
+2013-05-22  Paul Smith  <psmith@gnu.org>
+
+	* scripts/options/dash-n: Fix results after MAKEFLAGS fixes.
+	* scripts/variables/MAKEFLAGS: Ditto.
+	* scripts/variables/GNUMAKEFLAGS: Ditto.
+
+2013-05-14  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/loadapi: Add plugin_is_GPL_compatible symbol.
+	* scripts/features/load: Ditto.
+
+2013-05-13  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/output-sync (output_sync_set): Update for new
+	--trace behavior.
+
+2013-05-05  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/output-sync (output_sync_set): Remove
+	extraneous enter/leave lines, which are no longer printed.
+	Add tests for syncing command line printing.
+	(output_sync_set): Rename options: "job"->"line"; "make"->"recurse"
+
+2013-05-04  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/loadapi: Use the new alloc functions.
+
+	* scripts/features/output-sync (output_sync_set): New test for
+	ordered recursive output for -Ojob / -Otarget.
+
+2013-05-03  Eli Zaretskii  <eliz@gnu.org>
+
+	* scripts/features/load: Fix signatures of testload_gmk_setup and
+	explicit_setup, to bring them in line with the documentation.
+
+2013-04-28  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/output-sync (output_sync_set): Add tests for
+	the per-job syntax mode.
+	(output_sync_set): Test improved error message location.
+
+2013-04-15  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/output-sync (output_sync_set): New arg syntax.
+
+2013-04-14  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/output-sync: Rewrite to be more reliable.
+
+	* test_driver.pl (_run_command): Don't set SIGALRM until after we
+	start the child.  Print errors to the top-level output, which will
+	be stderr.
+	(attach_default_output): Use a list of file handles as the stack.
+	(detach_default_output): Ditto.
+
+	* scripts/features/output-sync: Add a test for output-sync.
+
+2013-02-25  Paul Smith  <psmith@gnu.org>
+
+	* run_make_tests.pl (valid_option): Support the -srcdir flag.
+	(set_more_defaults): Set up $srcdir if it's not set yet.
+
+	* scripts/functions/guile: Verify gmk-eval doesn't expand twice.
+	* scripts/features/load: Rework to test just the load capability.
+	* scripts/features/loadapi: New set of tests for the load API.
+
+2013-01-19  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/load: Test loaded files with and without "./"
+	prefix.  Add tests for automatically rebuilding loaded files if
+	they are out of date or non-existent.
+
+2013-01-13  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/archives: Add a check targets that have parens,
+	but are not archives.  See Savannah bug #37878.
+
+	* scripts/options/dash-n: Verify -n is preserved after recursive /
+	re-exec.  See Savannah bug #38051.
+
+2013-01-12  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/parallelism: Change rule so it doesn't depend
+	on invocation order, etc.
+
+2012-10-29  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/load: New test suite for the "load" directive.
+
+2012-09-09  Paul Smith  <psmith@gnu.org>
+
+	* scripts/functions/file: Get errors in the C locale, not the
+	current locale.  Fixes Savannah bug #35764.
+
+	* scripts/features/escape: Check that backslashes before
+	non-special characters are not removed.
+
+	* scripts/features/utf8: New test for UTF-8 support.
+	See Savannah bug #36529.
+
+	* scripts/targets/POSIX: Add tests for default macro values as
+	specified by IEEE Std 1003.1-2008.  See Savannah bug #37069.
+
+2012-03-04  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/se_explicit: Test $(x:%=%) format in secondary
+	expansion prerequisite lists.  See Savannah bug #16545.
+
+	* scripts/features/escape: Test escaped ":" in prerequisite lists.
+	See Savannah bug #12126.
+
+	* scripts/variables/private: Test appending private variables in
+	pattern-specific target rules.  See Savannah bug #35468.
+
+2012-03-03  Paul Smith  <psmith@gnu.org>
+
+	* scripts/variables/SHELL: Ensure .SHELLFLAGS works with options
+	separated by whitespace.
+
+	* scripts/targets/ONESHELL: Try .ONESHELL in combination with
+	whitespace-separated options in .SHELLFLAGS.  See Savannah bug #35397.
+
+	* scripts/functions/filter-out: Add filter tests and test escape
+	operations.  See Savannah bug #35410.
+
+	* guile.supp: Suppress valgrind errors from Guile
+	* run_make_tests.pl: Use the Guile suppression file.
+
+	* scripts/misc/bs-nl: Check for POSIX and non-POSIX
+	backslash/newline handling.  Addresses Savannah bug #16670.
+
+2012-01-29  Paul Smith  <psmith@gnu.org>
+
+	* scripts/variables/flavors: Add tests for ::=
+	* scripts/variables/define: Ditto
+
+	* scripts/functions/file: Test the new $(file ...) function.
+
+2012-01-12  Paul Smith  <psmith@gnu.org>
+
+	* scripts/functions/guile: New regression tests for Guile support.
+
+2011-12-10  Paul Smith  <psmith@gnu.org>
+
+	* scripts/targets/SECONDARY: Add prereq statements to ensure rules
+	are printed in the right order for test #9
+
+2011-11-14  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/double_colon: Check double-colon with escaped
+	filenames.  See Savannah bug #33399.
+
+2011-09-18  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/parallelism: On re-exec make sure we preserve
+	the value of MAKEFLAGS when necessary.  See Savannah bug #33873.
+
+	* scripts/features/vpath3: Verify handling of -lfoo libraries
+	found via vpath vs. the standard directory search.
+	See Savannah bug #32511.
+
+2011-09-12  Paul Smith  <psmith@gnu.org>
+
+	* scripts/functions/call: Verify that using export in a $(call ...)
+	context creates a global variable.  See Savannah bug #32498.
+
+2011-09-02  Paul Smith  <psmith@gnu.org>
+
+	* scripts/options/dash-n: Verify that in "-n -t", the -n takes
+	priority.  Patch from Michael Witten <mfwitten@gmail.com>.
+
+2011-08-29  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/varnesting: Test resetting of variables while
+	expanding them.  See Savannah patch #7534
+
+2011-06-12  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/archives: Check archives with whitespace at the
+	beginning, end, and extra in the middle.
+	Another test for Savannah bug #30612.
+
+2011-05-07  Paul Smith  <psmith@gnu.org>
+
+	* scripts/variables/private: Ensure we skip private variables when
+	appending.  Test for Savannah bug #32872.
+
+	* scripts/functions/wildcard: Verify wildcard used to test for
+	file existence/non-existence.
+
+2011-05-02  Paul Smith  <psmith@gnu.org>
+
+	* scripts/functions/sort: Add a test for Savannah bug #33125.
+
+2011-04-17  David A. Wheeler  <dwheeler@dwheeler.com>
+
+	* scripts/features/shell_assignment: Regression for "!=" feature
+
+2010-11-06  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/targetvars: Fix known-good output for BS/NL changes.
+	* scripts/functions/call: Ditto.
+	* scripts/variables/special: Ditto.
+
+	* scripts/misc/bs-nl: New test suite for backslash/newline testing.
+
+2010-08-29  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/errors: Add new error message to output text.
+	* scripts/variables/SHELL: Ditto.
+	* scripts/targets/POSIX: Ditto.
+	* scripts/options/dash-k: Ditto.
+	* scripts/features/vpathplus: Ditto.
+	* scripts/features/patternrules: Ditto.
+	* scripts/features/parallelism: Ditto.
+
+2010-08-13  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/archives: New regression tests for archive
+	support.  Test for fix to Savannah bug #30612.
+
+	* run_make_tests.pl (set_more_defaults): Set a %FEATURES hash to
+	the features available in $(.FEATURES).
+
+2010-08-10  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/reinvoke: Ensure command line variable settings
+	are preserved across make re-exec.  Tests Savannah bug #30723.
+
+2010-07-28  Paul Smith  <psmith@gnu.org>
+
+	* scripts/targets/POSIX: Compatibility issues with Solaris (and
+	Tru64?); "false" returns different exit codes, and set -x shows
+	output with extra whitespace.  Run the commands by hand first to
+	find out what the real shell would do, then compare what make does.
+	* scripts/variables/SHELL: Ditto.
+
+2010-07-12  Paul Smith  <psmith@gnu.org>
+
+	* test_driver.pl: Add a new $perl_name containing the path to Perl.
+	* run_make_tests.pl (run_make_test): Replace the special string
+	#PERL# in a makefile etc. with the path the Perl executable so
+	makefiles can use it.
+
+	* scripts/targets/ONESHELL: Add a new set of regression tests for
+	the .ONESHELL feature.
+
+2010-07-06  Paul Smith  <psmith@gnu.org>
+
+	* scripts/variables/SHELL: Test the new .SHELLFLAGS variable.
+
+	* scripts/targets/POSIX: New file.  Test the .POSIX special target.
+	Verify that enabling .POSIX changes the shell flags to set -e.
+
+2010-07-01  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/recursion: Add a space to separate command-line
+	args.  Fixes Savannah bug #29968.
+
+2009-11-12  Boris Kolpackov  <boris@codesynthesis.com>
+
+	* scripts/features/vpath3: Test for the new library search
+	behavior.
+
+2009-10-06  Boris Kolpackov  <boris@codesynthesis.com>
+
+	* scripts/features/se_explicit: Enable the test for now fixed
+	Savannah bug 25780.
+
+2009-10-06  Boris Kolpackov  <boris@codesynthesis.com>
+
+	* scripts/variables/undefine: Tests for the new undefine feature.
+
+2009-10-03  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/parallelism: Test for open Savannah bug #26846.
+
+	* scripts/variables/MAKE: Rewrite for new run_make_test() format.
+
+	* scripts/variables/MAKEFLAGS: Created.
+	Add test for Savannah bug #2216 (still open).
+
+	* scripts/features/include: Test for Savannah bug #102 (still open).
+
+2009-09-30  Boris Kolpackov  <boris@codesynthesis.com>
+
+	* scripts/features/include: Add diagnostics issuing tests for
+	cases where targets have been updated and failed with the
+	dontcare flag. Savannah bugs #15110, #25493, #12686, #17740.
+
+2009-09-28  Paul Smith  <psmith@gnu.org>
+
+	* scripts/functions/shell: Add regression test for Savannah bug
+	#20513 (still open).
+
+	* scripts/features/se_explicit: Add regression tests for Savannah
+	bug #25780 (still open).
+
+	* run_make_tests.pl (valid_option): Add a new flag, -all([-_]?tests)?
+	that runs tests we know will fail.  This allows us to add
+	regression tests to the test suite for bugs that haven't been
+	fixed yet.
+
+2009-09-28  Boris Kolpackov  <boris@codesynthesis.com>
+
+	* scripts/features/patspecific_vars: Add a test for the shortest
+	stem first order.
+
+	* scripts/features/patternrules: Add a test for the shortest stem
+	first order.
+
+2009-09-24  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/se_implicit: Add a test for order-only
+	secondary expansion prerequisites.
+
+2009-09-23  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/patternrules: Test that we can remove pattern
+	rules, both single and multiple prerequisites.  Savannah bug #18622.
+
+	* scripts/features/echoing: Rework for run_make_test().
+
+2009-06-14  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/vpath: Verify we don't get bogus circular
+	dependency warnings if we choose a different file via vpath during
+	update.  Savannah bug #13529.
+
+2009-06-13  Paul Smith  <psmith@gnu.org>
+
+	* scripts/variables/MAKEFILES: Verify that MAKEFILES included
+	files (and files included by them) don't set the default goal.
+	Savannah bug #13401.
+
+	* scripts/functions/wildcard: Test that wildcards with
+	non-existent glob matchers return empty.
+
+2009-06-09  Paul Smith  <psmith@gnu.org>
+
+	* scripts/options/dash-B: Test the $? works correctly with -B.
+	Savannah bug #17825.
+
+	* scripts/features/patternrules: Test that dependencies of
+	"also_make" targets are created properly.  Savannah bug #19108.
+
+	* test_driver.pl (compare_output): Create a "run" file for failed
+	tests containing the command that was run.
+	(get_runfile): New function.
+
+	* run_make_tests.pl (valid_option): Enhanced support for valgrind:
+	allow memcheck and massif tools.
+
+	* scripts/features/patternrules: Have to comment out a line in the
+	first test due to backing out a change that broke the implicit
+	rule search algorithm.  Savannah bug #17752.
+	* scripts/misc/general4: Remove a test that is redundant with
+	patternrules.
+
+	* scripts/features/parallelism: Add a test for re-exec with
+	jobserver master override.  Savannah bug #18124.
+
+2009-06-08  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/targetvars: Add a test for continued target
+	vars after a semicolon.  Savannah bug #17521.
+
+2009-06-07  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/se_explicit: Make sure we catch defining
+	prereqs during snap_deps().  Savannah bug #24622.
+
+	* scripts/variables/automatic: Check prereq ordering when the
+	target with the recipe has no prereqs.  Savannah bug #21198.
+
+	* scripts/variables/LIBPATTERNS: Add a new set of test for
+	$(.LIBPATTERNS) (previously untested!)
+
+2009-06-04  Paul Smith  <psmith@gnu.org>
+
+	* scripts/variables/SHELL: The export target-specific SHELL test
+	has an incorrect known-good-value.
+
+	* scripts/misc/general4: Check for whitespace (ffeed, vtab, etc.)
+
+	* scripts/features/se_explicit: Add tests for Savannah bug #24588.
+
+2009-05-31  Paul Smith  <psmith@gnu.org>
+
+	* scripts/variables/DEFAULT_GOAL: Add tests for Savannah bug #25697.
+
+	* scripts/features/targetvars: Add tests of overrides for Savannah
+	bug #26207.
+	* scripts/features/patspecific_vars: Ditto.
+
+	* scripts/features/patternrules: Add a test for Savannah bug #26593.
+
+2009-05-30  Paul Smith  <psmith@gnu.org>
+
+	* scripts/variables/flavors: Update with new variable flavor tests.
+	* scripts/variables/define: Create a new set of tests for
+	define/endef and move those aspects of the flavors suite here.
+
+2009-05-25  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/targetvars: Ditto.
+
+	* scripts/features/export: Test new variable parsing abilities.
+
+2009-02-23  Ramon Garcia  <ramon.garcia.f@gmail.com>
+
+	* scripts/variables/private: Create a new suite of tests for 'private'.
+
+2007-11-04  Paul Smith  <psmith@gnu.org>
+
+	* scripts/functions/eval: Update error message for command -> recipe.
+
+	* test_driver.pl (compare_output): Allow the answer to be a regex,
+	if surrounded by '/'.
+	* scripts/misc/close_stdout: Use a regex for the answer, since
+	sometimes the error will have a description and sometimes it won't.
+
+2007-09-10  Paul Smith  <psmith@gnu.org>
+
+	* scripts/variables/special: Add tests for .RECIPEPREFIX variable.
+
+2007-08-15  Paul Smith  <psmith@gnu.org>
+
+	These test cases were contributed by
+	Icarus Sparry <savannah@icarus.freeuk.com> and J. David Bryan for
+	Savannah bugs #3330 and #15919.
+
+	* scripts/targets/SECONDARY: Add tests for Savannah bugs 3330 and
+	15919.
+
+	* scripts/features/parallelism: Add tests for wrong answer/hang
+	combining INTERMEDIATE, order-only prereqs, and parallelism.
+	See Savannah bugs 3330 and 15919.
+
+2007-07-13  Paul Smith  <psmith@gnu.org>
+
+	Install a timeout so tests can never loop infinitely.
+	Original idea and patch for a single-test version provided by
+	Icarus Sparry <savannah@icarus.freeuk.com>
+
+	* test_driver.pl (_run_command): New function: this is called by
+	other functions to actually run a command.  Before we run it,
+	install a SIGALRM handler and set up a timer to go off in the
+	future (default is 5s; this can be overridden by individual tests).
+	(run_command): Call it.
+	(run_command_with_output): Call it.
+
+	* run_make_tests.pl (run_make_with_options): Override the default
+	timeout if the caller requests it.
+	(run_make_test): Pass any timeout override to run_make_with_options.
+
+	* scripts/features/parallelism: Increase the timeout for long tests.
+	* scripts/options/dash-l: Ditto.
+
+2006-10-01  Paul Smith  <psmith@paulandlesley.org>
+
+	* run_make_tests.pl (set_more_defaults): Remove setting of LANG in
+	ENV here.  This doesn't always work.
+	* test_driver.pl (toplevel): Set LC_ALL to 'C' in the make
+	environment.  Fixes Savannah bug #16698.
+
+2006-09-30  Paul Smith  <psmith@paulandlesley.org>
+
+	* scripts/variables/automatic: Add back the test for bug #8154.
+
+2006-04-01  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/functions/realpath: Don't run tests with multiple
+	initial slashes on Windows: those paths mean something different.
+
+2006-03-19  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/parallelism: Test that the jobserver is
+	properly managed when we have to re-exec the master instance of
+	make.
+
+2006-03-17  Boris Kolpackov  <boris@kolpackov.net>
+
+	* scripts/features/statipattrules: Add tests for bug #16053.
+
+2006-03-09  Paul Smith  <psmith@gnu.org>
+
+	* scripts/features/escape: Use "pre:" not "p:" to avoid conflicts
+	with DOS drive letters.  Fixes Savannah bug #15947.
+
+	* test_driver.pl (run_each_test): Set the status properly even
+	when a test fails to execute.  Fixes Savannah bug #15942.
+
+	* scripts/functions/foreach: Use a different environment variable
+	other than PATH to avoid differences with Windows platforms.
+	Fixes Savannah bug #15938.
+
+2006-03-05  Paul D. Smith  <psmith@gnu.org>
+
+	* run_make_tests.pl (set_more_defaults): Add CYGWIN_NT as a port
+	type W32.  Fixed Savannah bug #15937.
+
+	* scripts/features/default_names: Don't call error() when the test
+	fails.  Fixes Savannah bug #15941.
+
+2006-02-17  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/targetvars: Test a complex construction which
+	guarantees that we have to merge variable lists of different
+	sizes.  Tests for Savannah bug #15757.
+
+2006-02-15  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/functions/error: Make sure filename/lineno information
+	is related to where the error is expanded, not where it's set.
+	* scripts/functions/warning: Ditto.
+	* scripts/functions/foreach: Check for different error conditions.
+	* scripts/functions/word: Ditto.
+	* scripts/variables/negative: Test some variable reference failure
+	conditions.
+	* scripts/options/warn-undefined-variables: Test the
+	--warn-undefined-variables flag.
+
+2006-02-09  Paul D. Smith  <psmith@gnu.org>
+
+	* run_make_tests.pl (set_more_defaults): Update valgrind support
+	for newer versions.
+	* test_driver.pl (toplevel): Skip all hidden files/directories (ones
+	beginning with ".").
+
+	* scripts/functions/andor: Tests for $(and ...) and $(or ...)
+	functions.
+
+2006-02-08  Boris Kolpackov  <boris@kolpackov.net>
+
+	* scripts/features/parallelism: Add a test for bug #15641.
+
+2006-02-06  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/options/dash-W: Add a test for bug #15341.
+
+2006-01-03  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/variables/automatic: Add a test for bug #8154.
+
+	* README: Update to reflect the current state of the test suite.
+
+2005-12-12  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/parallelism, scripts/functions/wildcard,
+	scripts/targets/FORCE, scripts/targets/PHONY,
+	scripts/targets/SILENT: Use the default setting for
+	$delete_command.  Fixes bug #15085.
+
+	* run_make_tests.pl (get_this_pwd) [VMS]: Use -no_ask with delete_file.
+
+2005-12-11  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/misc/general4: Test implicit rules with '$' in the
+	prereq list & prereq patterns.
+	* scripts/features/se_implicit: Add in .SECONDEXPANSION settings.
+
+2005-12-09  Boris Kolpackov  <boris@kolpackov.net>
+
+	* scripts/features/patternrules: Add a test for bug #13022.
+
+2005-12-07  Boris Kolpackov  <boris@kolpackov.net>
+
+	* scripts/features/double_colon: Add a test for bug #14334.
+
+2005-11-17  Boris Kolpackov  <boris@kolpackov.net>
+
+	* scripts/functions/flavor: Add a test for the flavor function.
+
+2005-11-14  Boris Kolpackov  <boris@kolpackov.net>
+
+	* scripts/variables/INCLUDE_DIRS: Add a test for the .INCLUDE_DIRS
+	special variable.
+
+2005-10-24  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/misc/general4: Test '$$' in prerequisites list.
+	* scripts/features/statipattrules: Rewrite to use run_make_test().
+	Add various static pattern info.
+	* scripts/features/se_statpat: Enable .SECONDEXPANSION target.
+	* scripts/features/se_explicit: Add tests for handling '$$' in
+	prerequisite lists with and without setting .SECONDEXPANSION.
+	* scripts/features/order_only: Convert to run_make_test().
+	* run_make_tests.pl (set_more_defaults): If we can't get the value
+	of $(MAKE) from make, then fatal immediately.
+
+2005-08-31  Paul D. Smith  <psmith@gnu.org>
+
+	* run_make_tests.pl (get_this_pwd): Require the POSIX module (in
+	an eval to trap errors) and if it exists, use POSIX::getcwd to
+	find the working directory.  If it doesn't exist, go back to the
+	previous methods.  This tries to be more accurate on Windows
+	systems.
+
+2005-08-29  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/functions/abspath: Add some text to the error messages
+	to get a better idea of what's wrong.  Make warnings instead of
+	errors.
+
+	* scripts/features/patspecific_vars: Don't use "test", which is
+	UNIX specific.  Print the values and let the test script match
+	them.
+
+2005-08-25  Paul Smith  <psmith@gnu.org>
+
+	* scripts/variables/SHELL: Use a /./ prefix instead of //: the
+	former works better with non-UNIX environments.  Fixes Savannah
+	bug #14129.
+
+2005-08-13  Boris Kolpackov  <boris@kolpackov.net>
+
+	* scripts/functions/wildcard: Wrap calls to $(wildcard) with
+	$(sort) so that the resulting order is no longer filesystem-
+	dependent.
+
+2005-08-10  Boris Kolpackov  <boris@kolpackov.net>
+
+	* scripts/features/statipattrules: Add a test for Savannah bug #13881.
+
+2005-08-07  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/parallelism: Add a test for a bug reported by
+	Michael Matz (matz@suse.de) in which make exits without waiting
+	for all its children in some situations during parallel builds.
+
+2005-07-08  Paul D. Smith  <psmith@gnu.org>
+
+	* test_driver.pl: Reset the environment to a clean value every
+	time before we invoke make.  I'm suspicious that the environment
+	isn't handled the same way in Windows as it is in UNIX, and some
+	variables are leaking out beyond the tests they are intended for.
+	Create an %extraENV hash tests can set to add more env. vars.
+	* tests/scripts/features/export: Change to use %extraENV.
+	* tests/scripts/functions/eval: Ditto.
+	* tests/scripts/functions/origin: Ditto.
+	* tests/scripts/options/dash-e: Ditto.
+	* tests/scripts/variables/SHELL: Ditto.
+
+2005-06-27  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/options/dash-W: Use 'echo >>' instead of touch to update
+	files.
+	* scripts/features/reinvoke: Rewrite to be safer on systems with
+	subsecond timestamps.
+	* scripts/features/patternrules: False exits with different error
+	codes on different systems (for example, Linux => 1, Solaris => 255).
+
+	* scripts/options/dash-W: Set the timestamp to foo.x in the future,
+	to be sure it will be considered updated when it's remade.
+
+2005-06-26  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/functions/shell: New test suite for the shell function.
+
+2005-06-25  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/include: Test include/-include/sinclude with no
+	arguments.  Tests fix for Savannah bug #1761.
+
+	* scripts/misc/general3: Implement comprehensive testing of
+	backslash-newline behavior in command scripts: various types of
+	quoting, fast path / slow path, etc.
+	Tests fix for Savannah bug #1332.
+
+	* scripts/options/symlinks: Test symlinks to non-existent files.
+	Tests fix for Savannah bug #13280.
+
+	* scripts/misc/general3: Test semicolons in variable references.
+	Tests fix for Savannah bug #1454.
+
+	* scripts/variables/MAKE_RESTARTS: New file: test the
+	MAKE_RESTARTS variable.
+	* scripts/options/dash-B: Test re-exec doesn't loop infinitely.
+	Tests fix for Savannah bug #7566.
+	* scripts/options/dash-W: New file: test the -W flag, including
+	re-exec infinite looping.
+
+2005-06-12  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/misc/close_stdout: Add a test for Savannah bug #1328.
+	This test only works on systems that have /dev/full (e.g., Linux).
+
+2005-06-09  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/functions/foreach: Add a test for Savannah bug #11913.
+
+2005-05-31  Boris Kolpackov  <boris@kolpackov.net>
+
+	* scripts/features/include: Add a test for Savannah bug #13216.
+	* scripts/features/patternrules: Add a test for Savannah bug #13218.
+
+2005-05-13  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/conditionals: Add tests for the new if... else
+	if... endif syntax.
+
+2005-05-03  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/variables/DEFAULT_GOAL: Rename DEFAULT_TARGET to
+	DEFAULT_GOAL.
+
+2005-05-02  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/parallelism: Add a test for exporting recursive
+	variables containing $(shell) calls.  Rewrite this script to use
+	run_make_test() everywhere.
+
+2005-04-07  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/targets/SECONDARY: Add a test for Savannah bug #12331.
+
+2005-03-15  Boris Kolpackov  <boris@kolpackov.net>
+
+	* scripts/variables/automatic: Add a test for Savannah bug #12320.
+
+2005-03-10  Boris Kolpackov  <boris@kolpackov.net>
+
+	* scripts/features/patternrules: Add a test for Savannah bug #12267.
+
+2005-03-09  Boris Kolpackov  <boris@kolpackov.net>
+
+	* scripts/variables/DEFAULT_TARGET: Add a test for Savannah
+	bug #12266.
+
+2005-03-04  Boris Kolpackov  <boris@kolpackov.net>
+
+	* scripts/features/patternrules: Add a test for Savannah bug #12202.
+
+2005-03-03  Boris Kolpackov  <boris@kolpackov.net>
+
+	* scripts/features/se_implicit: Add a test for stem
+	termination bug. Add a test for stem triple-expansion bug.
+
+	* scripts/features/se_statpat: Add a test for stem
+	triple-expansion bug.
+
+	* scripts/features/statipattrules: Change test #4 to reflect
+	new way empty prerequisite list is handled.
+
+
+2005-03-01  Boris Kolpackov  <boris@kolpackov.net>
+
+	* scripts/features/statipattrules: Add a test for
+	Savannah bug #12180.
+
+2005-02-28  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/options/dash-q: Add a test for Savannah bug # 7144.
+
+	* scripts/options/symlinks: New file to test checking of symlink
+	timestamps.  Can't use filename dash-L because it conflicts with
+	dash-l on case-insensitive filesystems.
+
+	* scripts/variables/MAKEFILE_LIST, scripts/variables/MFILE_LIST:
+	Rename MAKEFILE_LIST test to MFILE_LIST, for systems that need 8.3
+	unique filenames.
+
+2005-02-28  Boris Kolpackov  <boris@kolpackov.net>
+
+	* scripts/variables/DEFAULT_TARGET: Test the .DEFAULT_TARGET
+	special variable.
+
+2005-02-27  Boris Kolpackov  <boris@kolpackov.net>
+
+	* scripts/features/se_explicit: Test the second expansion in
+	explicit rules.
+	* scripts/features/se_implicit: Test the second expansion in
+	implicit rules.
+	* scripts/features/se_statpat: Test the second expansion in
+	static pattern rules.
+	* scripts/variables/automatic: Fix to work with the second
+	expansion.
+
+	* scripts/misc/general4: Add a test for bug #12091.
+
+2005-02-27  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/functions/eval: Check that eval of targets within
+	command scripts fails.  See Savannah bug # 12124.
+
+2005-02-26  Paul D. Smith  <psmith@gnu.org>
+
+	* test_driver.pl (compare_output): If a basic comparison of the
+	log and answer doesn't match, try harder: change all backslashes
+	to slashes and all CRLF to LF.  This helps on DOS/Windows systems.
+
+2005-02-09  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/recursion: Test command line variable settings:
+	only one instance of a given variable should be provided.
+
+2004-11-30  Boris Kolpackov  <boris@kolpackov.net>
+
+	* tests/scripts/functions/abspath: New file: test `abspath'
+	built-in function.
+
+	* tests/scripts/functions/realpath: New file: test `realpath'
+	built-in function.
+
+2004-11-28  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/options/dash-C [WINDOWS32]: Add a test for bug #10252;
+	this doesn't really test anything useful in UNIX but...
+
+	* scripts/variables/SHELL: New file: test proper handling of SHELL
+	according to POSIX rules.  Fixes bug #1276.
+
+2004-10-21  Boris Kolpackov  <boris@kolpackov.net>
+
+	* scripts/functions/word: Test $(firstword ) and $(lastword ).
+
+2004-10-05  Boris Kolpackov  <boris@kolpackov.net>
+
+	* scripts/features/patspecific_vars: Test simple/recursive
+	variable expansion.
+
+2004-09-28  Boris Kolpackov  <boris@kolpackov.net>
+
+	* scripts/features/include: Test dontcare flag inheritance
+	when rebuilding makefiles.
+
+2004-09-27  Boris Kolpackov  <boris@kolpackov.net>
+
+	* scripts/features/patspecific_vars: Test exported variables.
+
+2004-09-22  Paul D. Smith  <psmith@gnu.org>
+
+	* run_make_tests.pl (run_make_test): Don't add newlines to the
+	makestring or answer if they are completely empty.
+
+	* scripts/features/patternrules: Rename from implicit_prereq_eval.
+
+	* scripts/test_template: Rework the template.
+
+2004-09-21  Boris Kolpackov  <boris@kolpackov.net>
+
+	* run_make_tests.pl: Change `#!/usr/local/bin/perl' to be
+	`#!/usr/bin/env perl'.
+
+	* scripts/features/implicit_prereq_eval: Test implicit rule
+	prerequisite evaluation code.
+
+2004-09-21  Paul D. Smith  <psmith@gnu.org>
+
+	* run_make_tests.pl (run_make_test): Enhance to allow the make
+	string to be undef: in that case it reuses the previous make
+	string.  Allows multiple tests on the same makefile.
+
+	* scripts/variables/flavors: Add some tests for prefix characters
+	interacting with define/endef variables.
+
+2004-09-20  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/functions/substitution: Rewrite to use run_make_test()
+	interface, and add test for substitution failures reported by
+	Markus Mauhart <qwe123@chello.at>.
+
+2004-03-22  Paul D. Smith  <psmith@gnu.org>
+
+	* test_driver.pl (run_each_test, toplevel, compare_output): Change
+	to track both the testing categories _AND_ the number of
+	individual tests, and report both sets of numbers.
+
+2004-02-21  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/functions/origin: Set our own environment variable
+	rather than relying on $HOME.
+
+2004-01-21  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/conditionals: Test arguments to ifn?def which
+	contain whitespace (such as a function that is evaluated).  Bug
+	#7257.
+
+2004-01-07  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/order_only: Test order-only prerequisites in
+	pattern rules (patch #2349).
+
+2003-11-02  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/functions/if: Test if on conditionals with trailing
+	whitespace--bug #5798.
+
+	* scripts/functions/eval: Test eval in a non-file context--bug #6195.
+
+2003-04-19  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/patspecific_vars: Test multiple patterns
+	matching the same target--Bug #1405.
+
+2003-04-09  Paul D. Smith  <psmith@gnu.org>
+
+	* run_make_tests.pl (set_more_defaults): A new $port_type of
+	'OS/2' for (surprise!) OS/2.  Also choose a wait time of 2 seconds
+	for OS/2.
+
+2003-03-28  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/targets/SECONDARY: Test the "global" .SECONDARY (with
+	not prerequisites)--Bug #2515.
+
+2003-01-30  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/targetvars: Test very long target-specific
+	variable definition lines (longer than the default make buffer
+	length).  Tests patch # 1022.
+
+	* scripts/functions/eval: Test very recursive $(eval ...) calls
+	with simple variable expansion (bug #2238).
+
+	* scripts/functions/word: Test error handling for word and
+	wordlist functions (bug #2407).
+
+2003-01-22  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/functions/call: Test recursive argument masking (bug
+	#1744).
+
+2002-10-25  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/functions/eval: Test using $(eval ...) inside
+	conditionals (Bug #1516).
+
+2002-10-14  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/options/dash-t: Add a test for handling -t on targets
+	with no commands (Bug #1418).
+
+2002-10-13  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/targetvars: Add a test for exporting
+	target-specific vars (Bug #1391).
+
+2002-10-05  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/variables/automatic: Add tests for $$(@), $${@}, $${@D},
+	and $${@F}.
+
+2002-09-23  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/escape: Test handling of escaped comment
+	characters in targets and prerequisites.
+
+2002-09-18  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/export: Test export/unexport of multiple
+	variables in a single command.
+
+2002-09-17  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/targetvars: Tests for Bug #940: test
+	target-specific and pattern-specific variables in conjunction with
+	double-colon targets.
+
+2002-09-10  Paul D. Smith  <psmith@gnu.org>
+
+	* test_driver.pl (compare_output): Match the new format for time
+	skew error messages.
+
+	* scripts/features/export: Created.  Add tests for export/unexport
+	capabilities, including exporting/unexporting expanded variables.
+
+	* scripts/features/conditionals: Add a test for expanded variables
+	in ifdef conditionals.
+
+2002-09-04  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/reinvoke: Change touch/sleep combos to utouch
+	invocations.
+	* scripts/features/vpathgpath: Ditto.
+	* scripts/features/vpathplus: Ditto.
+	* scripts/options/dash-n: Ditto.
+	* scripts/targets/INTERMEDIATE: Ditto.
+	* scripts/targets/SECONDARY: Ditto.
+
+	* scripts/options/dash-t: Added a test for the -t bug fixed by
+	Henning Makholm.  This test was also contributed by Henning.
+
+	* scripts/misc/general4: Add a test suite for obscure algorithmic
+	features of make.  First test: make sure creation subdirectories
+	as prerequisites of targets works properly.
+
+	* scripts/misc/version: Remove this bogus test.
+
+2002-08-07  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/misc/general3: Add a test for makefiles that don't end
+	in newlines.
+
+	* scripts/variables/special: Create tests for the special
+	variables (.VARIABLES and .TARGETS).  Comment out .TARGETS test
+	for now as it's not yet supported.
+
+2002-08-01  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/options/dash-B: Add a test for the new -B option.
+
+2002-07-11  Paul D. Smith  <psmith@gnu.org>
+
+	* run_make_tests.pl (valid_option): Add support for Valgrind.  Use
+	-valgrind option to the test suite.
+	(set_more_defaults): Set up the file descriptor to capture
+	Valgrind output.  We have to unset its close-on-exec flag; we
+	hardcode the value for F_SETFD (2) rather than load it; hopefully
+	this will help us avoid breaking the Windows/DOS test suite.
+
+2002-07-10  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/variables/automatic: Add some tests for $$@, $$(@D), and
+	$$(@F).
+
+	* test_driver.pl (utouch): Create a new function that creates a
+	file with a specific timestamp offset.  Use of this function will
+	let us avoid lots of annoying sleep() invocations in the tests
+	just to get proper timestamping, which will make the tests run a
+	lot faster.  So far it's only used in the automatic test suite.
+
+2002-07-09  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/variables/automatic: Create a test for automatic variables.
+
+2002-07-08  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/order_only: Test new order-only prerequisites.
+
+2002-07-07  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/functions/eval: Test new function.
+	* scripts/functions/value: Test new function.
+	* scripts/variables/MAKEFILE_LIST: Test new variable.
+
+2002-04-28  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/functions/call: New test: transitive closure
+	implementation using $(call ...) to test variable recursion.
+
+2002-04-21  Paul D. Smith  <psmith@gnu.org>
+
+	* test_driver.pl (compare_dir_tree): Ignore CVS and RCS
+	directories in the script directories.
+
+2001-05-02  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/variables/flavors: Test define/endef scripts where only
+	one of the command lines is quiet.
+
+2000-06-22  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/options/dash-q: New file; test the -q option.  Includes
+	a test for PR/1780.
+
+2000-06-21  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/targetvars: Added a test for PR/1709: allowing
+	semicolons in target-specific variable values.
+
+2000-06-19  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/functions/addsuffix: Test for an empty final argument.
+	Actually this bug might have happened for any function, but this
+	one was handy.
+
+2000-06-17  Eli Zaretskii  <eliz@is.elta.co.il>
+
+	* scripts/options/general: If parallel jobs are not supported,
+	expect a warning message from Make.
+
+2000-06-15  Eli Zaretskii  <eliz@is.elta.co.il>
+
+	* scripts/options/general: Don't try -jN with N != 1 if parallel
+	jobs are not supported.
+
+2000-05-24  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/options/general: Test general option processing (PR/1716).
+
+2000-04-11  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/functions/strip: Test empty value to strip (PR/1689).
+
+2000-04-08  Eli Zaretskii  <eliz@is.elta.co.il>
+
+	* scripts/features/reinvoke: Sleep before updating the target
+	files in the first test, to ensure its time stamp really gets
+	newer; otherwise Make might re-exec more than once.
+
+2000-04-07  Eli Zaretskii  <eliz@is.elta.co.il>
+
+	* scripts/features/double_colon: Don't run the parallel tests if
+	parallel jobs aren't supported.
+
+2000-04-04  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/functions/word: wordlist doesn't swap arguments anymore.
+
+2000-03-27  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/statipattrules: Test that static pattern rules
+	whose prerequisite patterns resolve to empty strings throw an
+	error (instead of dumping core).  Fixes PR/1670.
+
+	* scripts/features/reinvoke: Make more robust by touching "b"
+	first, to ensure it's not newer than "a".
+	Reported by Marco Franzen <Marco.Franzen@Thyron.com>.
+	* scripts/options/dash-n: Ditto.
+
+	* scripts/functions/call: Whoops.  The fix to PR/1527 caused
+	recursive invocations of $(call ...) to break.  I can't come up
+	with any way to get both working at the same time, so I backed out
+	the fix to 1527 and added a test case for recursive calls.  This
+	also tests the fix for PR/1610.
+
+	* scripts/features/double_colon: Test that circular dependencies
+	in double-colon rule sets are detected correctly (PR/1671).
+
+2000-03-26  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/targets/INTERMEDIATE: Test that make doesn't remove
+	.INTERMEDIATE files when given on the command line (PR/1669).
+
+2000-03-08  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/options/dash-k: Add a test for error detection by
+	multiple targets depending on the same prerequisite with -k.
+	For PR/1634.
+
+2000-02-07  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/escape: Add a test for backslash-escaped spaces
+	in a target name (PR/1586).
+
+2000-02-04  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/patspecific_vars: Add a test for pattern-specific
+	target variables inherited from the parent target (PR/1407).
+
+2000-02-02  Paul D. Smith  <psmith@gnu.org>
+
+	* run_make_tests.pl (set_more_defaults): Hard-code the LANG to C
+	to make sure sorting order, etc. is predictable.
+	Reported by Andreas Jaeger <aj@suse.de>.
+
+	* run_make_tests.pl (set_more_defaults): Set the $wtime variable
+	depending on the OS.  Eli Zaretskii <eliz@is.elta.co.il> reports
+	this seems to need to be *4* on DOS/Windows, not just 2.  Keep it
+	1 for other systems.
+	* scripts/features/vpathplus (touchfiles): Use the $wtime value
+	instead of hardcoding 2.
+	* scripts/targets/SECONDARY: Ditto.
+	* scripts/targets/INTERMEDIATE: Ditto.
+
+2000-01-27  Paul D. Smith  <psmith@gnu.org>
+
+	* test_driver.pl (toplevel): Don't try to run test scripts which
+	are really directories.
+
+2000-01-23  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/include: Remove a check; the fix caused more
+	problems than the error, so I removed it and removed the test for
+	it.
+
+2000-01-11  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/functions/call: Add a test for PR/1517 and PR/1527: make
+	sure $(call ...) doesn't eval its arguments and that you can
+	invoke foreach from it without looping forever.
+
+1999-12-15  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/targets/INTERMEDIATE: Add a test for PR/1423: make sure
+	.INTERMEDIATE settings on files don't disable them as implicit
+	intermediate possibilities.
+
+1999-12-01  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/double_colon: Add a test for PR/1476: Try
+	double-colon rules as non-goal targets and during parallel builds
+	to make sure they're handled serially.
+
+1999-11-17  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/functions/if: Add a test for PR/1429: put some text
+	after an if-statement to make sure it works.
+
+	* scripts/features/targetvars: Add a test for PR/1380: handling +=
+	in target-specific variable definitions correctly.
+
+1999-10-15  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/variables/MAKEFILES: This was really broken: it didn't
+	test anything at all, really.  Rewrote it, plus added a test for
+	PR/1394.
+
+1999-10-13  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/options/dash-n: Add a test for PR/1379: "-n doesn't
+	behave properly when used with recursive targets".
+
+1999-10-08  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/targetvars: Add a check for PR/1378:
+	"Target-specific vars don't inherit correctly"
+
+1999-09-29  Paul D. Smith  <psmith@gnu.org>
+
+	* test_driver.pl (get_osname): Change $fancy_file_names to
+	$short_filenames and reverse the logic.
+	(run_each_test): Change test of non-existent $port_host to use
+	$short_filenames--problem reported by Eli Zaretskii.
+
+1999-09-23  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/parallelism: Add a check to ensure that the
+	jobserver works when we re-invoke.  Also cleaned up the tests a
+	little, reducing the number of rules we use so the test won't need
+	as many "sleep" commands.
+
+1999-09-16  Paul D. Smith  <psmith@gnu.org>
+
+	* scripts/features/reinvoke: Remove invocations of "touch" in
+	makefiles.  See the comments on the touch function rewrite below.
+	Note that UNIX touch behaves the same way if the file already
+	exists: it sets the time to the _local_ time.  We don't want
+	this.  This is probably a good tip for makefile writers in
+	general, actually... where practical.
+	* scripts/options/dash-l: Ditto.
+	* scripts/options/dash-n: Ditto.
+
+	* test_driver.pl (run_each_test): In retrospect, I don't like the
+	.lN/.bN/.dN postfix required by DOS.  So, for non-DOS systems I
+	changed it back to use .log, .base, and .diff.
+
+	* run_make_tests.pl (set_more_defaults): Move the check for the
+	make pathname to here from set_defaults (that's too early since it
+	happens before the command line processing).
+	Create a new variable $port_type, calculated from $osname, to
+	specify what kind of system we're running on.  We should integrate
+	the VOS stuff here, too.
+	(valid_option): Comment out the workdir/-work stuff so people
+	won't be fooled into thinking it works... someone needs to fix
+	this, though!
+
+	* scripts/functions/origin: Use $port_type instead of $osname.
+	* scripts/functions/foreach: Ditto.
+	* scripts/features/default_names: Ditto.
+
+1999-09-15  Paul D. Smith  <psmith@gnu.org>
+
+	* test_driver.pl (touch): Rewrite this function.  Previously it
+	used to use utime() to hard-set the time based on the current
+	local clock, or, if the file didn't exist, it merely created it.
+	This mirrors exactly what real UNIX touch does, but it fails badly
+	on networked filesystems where the FS server clock is skewed from
+	the local clock: normally modifying a file causes it to get a mod
+	time based on the _server's_ clock.  Hard-setting it based on the
+	_local_ clock causes gratuitous errors and makes the tests
+	unreliable except on local filesystems.  The new function will
+	simply modify the file, allowing the filesystem to set the mod
+	time as it sees fit.
+
+	* scripts/features/parallelism: The second test output could
+	change depending on how fast some scripts completed; use "sleep"
+	to force the order we want.
+
+	* test_driver.pl (toplevel): A bug in Perl 5.000 to Perl 5.004
+	means that "%ENV = ();" doesn't do the right thing.  This worked
+	in Perl 4 and was fixed in Perl 5.004_01, but use a loop to delete
+	the environment rather than require specific versions.
+
+	* run_make_tests.pl (set_more_defaults): Don't use Perl 5 s///
+	modifier "s", so the tests will run with Perl 4.
+	(set_more_defaults): Set $pure_log to empty if there's no -logfile
+	option in PURIFYOPTIONS.
+	(setup_for_test): Don't remove any logs unless $pure_log is set.
+
+1999-09-15  Eli Zaretskii  <eliz@is.elta.co.il>
+
+	* scripts/features/reinvoke: Put the SHELL definition in the right
+	test makefile.
+
+1999-09-15  Paul D. Smith  <psmith@gnu.org>
+
+	ChangeLog file for the test suite created.
+
+
+Copyright (C) 1992-2013 Free Software Foundation, Inc.
+This file is part of GNU Make.
+
+GNU Make is free software; you can redistribute it and/or modify it under the
+terms of the GNU General Public License as published by the Free Software
+Foundation; either version 3 of the License, or (at your option) any later
+version.
+
+GNU Make is distributed in the hope that it will be useful, but WITHOUT ANY
+WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
+A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
+
+You should have received a copy of the GNU General Public License along with
+this program.  If not, see <http://www.gnu.org/licenses/>.
