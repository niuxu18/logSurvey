2013-10-09  Paul Smith  <psmith@gnu.org>

	Version 4.0 released.

	* configure.ac: Updated for the release.
	* NEWS: Updated for the release.

	* maintMakefile (tag-release): New target to add a Git tag.
	* read.c (eval): Typo fix.
	* ChangeLog.1: Typo fixes.
	* w32/subproc/sub_proc.c (process_cleanup): Typo fix.

2013-10-07  Eli Zaretskii  <eliz@gnu.org>

	* w32/compat/posixfcn.c (tmpfile): Move declaration of h before
	the first executable statement.  Reported by Gisle Vanem
	<gvanem@yahoo.no>.

2013-10-05  Paul Smith  <psmith@gnu.org>

	* makeint.h (MAP_USERFUNC): A new map type for function names.
	* main.c (initialize_stopchar_map): Set up the function name map.

	* gnumake.h (gmk_func_ptr): Define a type for function pointers.
	(gmk_add_function): Convert the last argument to FLAGS.
	(GMK_FUNC_*): Define flags for the function.  Change the default
	behavior to "expand" since that's the most common one.

	* function.c (function_table_entry): Use new function pointer type.
	(lookup_function): Accept any valid function name character based
	on the MAP_USERFUNC values.
	(define_new_function): Use the new calling signature.  Verify that
	registered functions have valid names.

	* guile.c (guile_gmake_setup): Use new calling signatures.
	* loadapi.c (gmk_add_function): Ditto.
	* variable.h (define_new_function): Ditto.

	* doc/make.texi (Loaded Object API): Make the registered function
	API documentation more clear.

2013-10-03  Eli Zaretskii  <eliz@gnu.org>

	* function.c (abspath): Reset root_len to one for Cygwin only when
	HAVE_DOS_PATHS is defined.  Suggested by Christopher Faylor.

2013-10-02  Eli Zaretskii  <eliz@gnu.org>

	* w32/compat/posixfcn.c (tmpfile): New function, a replacement for
	the Windows libc version.

	Fix $abspath on Cygwin when HAVE_DOS_PATHS is in effect.
	* function.c (IS_ABSOLUTE) [__CYGWIN__]: Special definition for
	Cygwin.
	(abspath) [__CYGWIN__]: Reset root_len to 1 if the absolute file
	name has the Posix /foo/bar form.
	[HAVE_DOS_PATHS]: Use root_len instead of hard-coded 2.

2013-10-01  Paul Smith  <psmith@gnu.org>

	* configure.ac: Update version to 3.99.93.
	* NEWS: Ditto.

2013-09-30  Paul Smith  <psmith@gnu.org>

	* guile.c: Portability fixes for Guile 1.8.

2013-09-29  Paul Smith  <psmith@gnu.org>

	* output.c (output_dump): Always write Enter/Leave messages to stdio.
	(log_working_directory): This now always writes to stdio, so we
	don't need the struct output parameter anymore.
	(output_start): Show the working directory when output_sync is not
	set or is recursive.
	* main.c (main): Ensure the special "already shown Enter message"
	token is removed from MAKE_RESTARTS before the user can see it.
	* function.c (func_shell_base): If the output_context stderr
	exists but is invalid, write to the real stderr.
	Fixes suggested by Frank Heckenbach <f.heckenbach@fh-soft.de>.

	* output.c: Guard unistd.h inclusion, add io.h.
	* gnumake.h: Move GMK_EXPORT before the declarations.
	* make_msvc_net2003.vcproj: Add missing files.
	Changes for MSVC suggested by Gerte Hoogewerf <g.hoogewerf@gmail.com>

	* function.c (func_shell_base) [EMX]: Fix EMX support for output-sync.
	* job.c (child_execute_job) [EMX]: Ditto.
	* job.h (child_execute_job) [EMX]: Ditto.
	* w32/compat/posixfcn.c: Invert the test for NO_OUTPUT_SYNC.

	* guile.c (GSUBR_TYPE): Pre-2.0 Guile doesn't provide a typedef
	for gsubr pointers.  Create one.
	(guile_define_module): Use it.
	(internal_guile_eval): Force UTF-8 encoding for Guile strings.

	* main.c (main): Clear GNUMAKEFLAGS after parsing, to avoid
	proliferation of options.
	* NEWS: Document it.
	* doc/make.texi (Options/Recursion): Ditto.

2013-09-23  Eli Zaretskii  <eliz@gnu.org>

	* w32/compat/posixfcn.c: Fix the forgotten OUTPUT_SYNC conditional.

	* job.h: Ditto, but in a comment.

2013-09-22  Paul Smith  <psmith@gnu.org>

	* configure.ac: Update version to 3.99.92.
	* NEWS: Ditto.

	* implicit.c (pattern_search): After second expansion be sure to
	handle order-only markers inside the expansion properly.
	Fixes Savannah bug #31155.

	* guile.c (guile_define_module): Technically a void* cannot
	contain a pointer-to-function and some compilers warn about this.
	Cast the function pointers.
	* load.c (load_object): Ditto.

	* read.c (eval): If load_file() returns -1, don't add this to the
	"to be rebuilt" list.
	* doc/make.texi (load Directive): Document it.

	* guile.c (guile_gmake_setup): Don't initialize Guile so early.
	(func_guile): Lazily initialize Guile the first time the $(guile ..)
	function is invoked.  Guile can steal file descriptors which
	confuses our jobserver FD checking, so we don't want to initialize
	it before we have to.

	VMS port updates by Hartmut Becker <becker.ismaning@freenet.de>

	* makefile.com: Add output to the filelist.
	* output.c (va_copy): Add an implementation of this macro for VMS.
	* commands.c: Ensure filedef.h is #included before dep.h.
	* dir.c: Ditto.
	* file.c: Ditto.
	* guile.c: Ditto.
	* main.c: Ditto.
	* misc.c: Ditto.
	* read.c: Ditto.
	* rule.c: Ditto.
	* variable.c: Ditto.
	* readme.vms: Renamed to README.VMS and updates for this release.
	* Makefile.am: Ditto.
	* NEWS: Ditto.
	* README.template: Ditto.
	* Makefile.DOS.template: Ditto.

2013-09-21  Paul Smith  <psmith@gnu.org>

	* maintMakefile (check-alt-config): Create a target to test
	alternative configurations.  Each one will build make with a
	different configuration then run the test suite.

	Invert the output-sync #define to NO_OUTPUT_SYNC

	* configure.ac: Don't set OUTPUT_SYNC.
	* makeint.h: Ditto.
	* main.c: Use NO_OUTPUT_SYNC instead of OUTPUT_SYNC.
	* output.c: Ditto.
	* output.h: Ditto.
	* job.h: Ditto.
	* job.c: Ditto.
	* config.ami.template: Set NO_OUTPUT_SYNC.
	* config.h-vms.template: Ditto.
	* config.h.W32.template: Ditto.
	* configh.dos.template: Ditto.

	Output generated while reading makefiles should be synced.

	* main.c (make_sync): Define a context for syncing while reading
	makefiles and other top-level operations.
	(main): If we request syncing, enable it while we are parsing
	options, reading makefiles, etc. to capture that output.  Just
	before we start to run rules, dump the output if any.
	(die): Dump any output we've been syncing before we die
	* output.h (OUTPUT_SET): Disable output_context if not syncout.

	Stderr generated from shell functions in recipes should be synced.

	* job.h (FD_STDIN, FD_STDOUT, FD_STDERR): Create new macros to
	avoid magic numbers.
	(child_execute_job): Take a FD for stderr.
	* job.c (child_execute_job): Handle STDERR FD's in addition to
	stdin and stdout.
	(start_job_command): Call child_execute_job() with the new STDERR
	parameter.  Instead of performing the dup() here, send it to
	child_execute_job() where it's already being done.
	* function.c (func_shell_base): Pass the OUTPUT_CONTEXT stderr to
	child_execute_job() if it's set, otherwise FD_STDERR.
	* main.c (main): Pass FD_STDERR to child_execute_job().

2013-09-19  Paul Smith  <psmith@gnu.org>

	* main.c (main): Set MAKE_RESTARTS to negative before re-exec if
	we've already generated an "Entering" message.  If we are started
	and notice that MAKE_RESTARTS is negative, assume we already wrote
	"Entering" and don't write it again.

2013-09-18  Paul Smith  <psmith@gnu.org>

	* main.c (main): Set starting_directory before we write any
	errors.  Fixes Savannah bug #40043.

2013-09-16  Eli Zaretskii  <eliz@gnu.org>

	* output.c [WINDOWS32]: Include windows.h and sub_proc.h, to avoid
	compiler warnings for CLOSE_ON_EXEC.

2013-09-16  Paul Smith  <psmith@gnu.org>

	* configure.ac: Update version to 3.99.91.
	* NEWS: Ditto.

2013-09-15  Paul Smith  <psmith@gnu.org>

	* doc/make.texi (Error Messages): Add a bit more info to the
	section on static pattern errors, since they're common.
	Fixes Savannah bug #31326.

	* read.c (eval_makefile): If the file open fails with an
	unrecoverable error, stop now rather than trying to make it.
	Fixes Savannah bug #27374.

	* main.c (main): Perform the validation of the jobserver FDs
	early, before we read makefiles, to ensure that something hasn't
	opened and used those FDs for some other reason.
	Fixes Savannah bug #39934.

	* main.c (main): Don't set MAKEFLAGS in the environment when we
	restart.  We have the original command line flags so keep the
	original MAKEFLAGS settings as well.
	Fixes Savannah bug #39203.

2013-09-14  Paul Smith  <psmith@gnu.org>

	* main.c (decode_debug_flags): Add support for the "n" flag to
	disable all debugging.
	* make.1: Document the "n" (none) flag.
	* doc/make.texi (Options Summary): Ditto.
	* NEWS: Ditto.
	Fixes Savannah bug #35248.

	* misc.c (close_stdout): Move to output.c.
	* main.c (main): Move atexit call to output_init().
	* makeint.h: Remove close_stdout() declaration.
	* output.c (output_init): Add close_stdout at exit only if it's	open.
	Fixes Savannah bug #33134.  Suggested by David Boyce <dsb@boyski.com>.

2013-09-14  Paul Smith  <psmith@gnu.org>

	* misc.c (set_append_mode, open_tmpfd, open_tmpfile): Move to output.c.
	* misc.h: Ditto.
	* output.h: Ditto.
	* main.c (main): Move stdio init into output.c:output_init().
	Change open_tmpfile() to output_tmpfile().
	* output.c: Rename open_*() to output_*().  set_append_mode() and
	open_tmpfd() are static.
	(_outputs, log_working_directory): Accept a struct output and
	print to that rather than the global context.
	(output_dump): In recurse mode print enter/leave once for the
	whole makefile.
	(output_init): Initialize this processes stdio as well as child's.

	* vmsjobs.c: Reformat to be closer to convention.

2013-09-12  Paul Smith  <psmith@gnu.org>

	Rework output to handle synchronization and directory logging more
	reliably.

	* output.c: New file.  Implement lazy synchronization and
	directory logging so that we manage them "just in time", and the
	destination of the output is set via a global state variable.
	* output.h: New file.
	* function.c (func_shell_base): Ensure the output is set up before
	running a shell command, in case it writes to stderr.
	(func_error): Use outputs() to generate output.
	* job.h (struct child): Add struct output to track the child's output.
	* job.c: Use struct output in the child structure to track output.
	(child_out, sync_init, assign_child_tempfiles, pump_from_tmp)
	(acquire_semaphore, release_semaphore, sync_output): Move most of
	the output_sync handling to output.c.
	(child_error): Set output, then use simple message() and error()
	not _s versions.
	* main.c (log_working_directory): Moved to output.c
	(trace_option, decode_trace_flags) Remove.  Remove support for
	different trace modes; we don't use it anymore.
	(die) Invoke output_close() before we exit.
	* misc.c (message_s, error_s): Removed; no longer needed.
	(message, error, fatal, perror_with_name, pfatal_with_name): Moved
	to output.c.
	* makeint.h: Remove message_s(), error_s(), and
	log_working_directory().  Remove the TRACE_* macros.
	* doc/make.texi: Enhance documentation for output sync, and remove
	MODE assignment for --trace.
	* make.1: Remove MODE assignment for --trace.
	* Makefile.am: Add new files.
	* NMakefile.template: Ditto.
	* SMakefile.template: Ditto.
	* build_w32.bat: Ditto.
	* dosbuild.bat: Ditto.
	* make.lnk: Ditto.
	* make_nsvc_net2003.vcproj: Ditto.
	* makefile.vms: Ditto.
	* po/POTFILES.in: Ditto.

2013-08-22  Petr Machata  <pmachata@redhat.com>

	* function.c (func_shell_base): Get rid of any avoidable limit on
	stack size for processes spawned via $(shell).

2013-07-22  Paul Smith  <psmith@gnu.org>

	* implicit.c (pattern_search): Use PARSE_SIMPLE_SEQ() even for
	non-second expansion prerequisites, to handle globbing in patterns.
	Fixes Savannah bug #39310.

	* dep.h (PARSE_SIMPLE_SEQ): Macro for simple file sequence parsing.
	* default.c (set_default_suffixes): Use it.
	* file.c (split_prereqs): Ditto.
	* main.c (main): Ditto.
	* read.c (eval): Ditto.
	* rule.c (install_pattern_rule): Ditto.
	* file.c (split_prereqs): Use PARSEFS_NONE instead of 0.

2013-07-21  Paul Smith  <psmith@gnu.org>

	Cleanups detected by cppcheck.  Fixes Savannah bug #39158.
	* arscan.c (ar_scan): Reduce the scope of local variables.
	* dir.c (vms_hash): Ditto.
	(find_directory): Ditto.
	(file_impossible_p): Ditto.
	* expand.c (variable_expand_string): Ditto.
	* function.c (func_sort): Ditto.
	(func_and): Ditto.
	* job.c (reap_children): Ditto.
	(exec_command): Ditto.
	* main.c (main): Ditto.
	* misc.c (collapse_continuations): Ditto.
	* read.c (eval): Ditto.
	(parse_file_seq): Ditto.
	* vpath.c (gpath_search): Ditto.
	(selective_vpath_search): Ditto.
	* job.c (is_bourne_compatible_shell): Simplify for non-Windows systems.
	* remake.c (f_mtime): Remove duplicate test.
	* signame.c (strsignal): Fix bogus conditional.

	* job.c (assign_child_tempfiles): Assign OUTFD to -1 for safety.
	(start_job_command): Don't test output_sync and sync_cmd: redundant.
	Changes suggested by Frank Heckenbach <f.heckenbach@fh-soft.de>.

2013-07-14  Paul Smith  <psmith@gnu.org>

	* filedef.h (update_status): Convert UPDATE_STATUS from a char to
	an enumeration.  Some systems declare "char" to be "unsigned"
	which broke the code (which expected to be able to use -1 as a
	flag).  Using magic values was unpleasant, so rather than just
	force "signed char" I reworked it to use an enum.

	* dep.h (update_goal_chain): Return an update_status value not int.
	* remake.c (touch_file): Ditto.
	(update_goal_chain): Track the update_status enum.

	* file.c (enter_file): Use new enumeration values with update_status.
	(remove_intermediates): Ditto.
	(print_file): Ditto.
	* commands.c (execute_file_commands): Ditto.
	* job.c (reap_children): Ditto.
	(start_job_command): Ditto.
	(start_waiting_job): Ditto.
	* main.c (main): Ditto.
	* remake.c (update_file): Ditto.
	(complain): Ditto.
	(update_file_1): Ditto.
	(notice_finished_file): Ditto.
	(remake_file): Ditto.
	* vmsjobs.c (vmsHandleChildTerm): Ditto.

2013-07-09  Paul Smith  <psmith@gnu.org>

	* implicit.c (pattern_search): Keep a local copy of the number of
	deps in deplist: the global max might change due to recursion.
	Fixes a bug reported by Martin d'Anjou <martin.danjou14@gmail.com>.

2013-06-28  Paul Smith  <psmith@gnu.org>

	* misc.c (set_append_mode): Set the O_APPEND flag on a file descriptor.
	(open_tmpfd): Set append mode on the temporary file descriptor.
	* main.c (main): Set append mode on stdout and stderr.
	* makeint.h (set_append_mode): Declare it.

2013-06-22  Eli Zaretskii  <eliz@gnu.org>

	* build_w32.bat (LinkGCC): Prevent a comment from being displayed
	at build time.

	* job.c (construct_command_argv_internal) [WINDOWS32]: Use
	case-insensitive comparison with internal commands of non-Unix
	shells.

	* main.c (find_and_set_default_shell): Don't use file_exists_p or
	dir_file_exists_p, as those call readdir, which can fail if PATH
	includes directories with non-ASCII characters, and that would
	cause Make to fail at startup with confusing diagnostics.  See
	https://sourceforge.net/mailarchive/message.php?msg_id=30846737
	for the details.

2013-06-22  Paul Smith  <psmith@gnu.org>

	Improve performance by using a character map to determine where we
	want to stop searching strings, rather than discrete comparisons.

	* read.c (find_char_unquote): Pass a stop map instead of various
	flags and use that to check when to stop parsing the string.
	(eval): Use the new find_char_unquote() calling signature.
	(remove_comments): Ditto.
	(unescape_char): Ditto.
	(find_percent_cached): Ditto.
	(parse_file_seq): Use a stop-map flag.
	* main.c (stopchar_map): Character map definition.
	(initialize_stopchar_map): Initialize the map definition.
	(main): Invoke the map initialization function.
	* misc.c (end_of_token_w32): Remove unused function.
	* dir.c (dosify): Use STOP_SET to check for stop chars.
	* main.c (main): Ditto.
	* misc.c (end_of_token): Ditto.
	* function.c (subst_expand): Ditto.
	(func_notdir_suffix): Ditto.
	(func_basename_dir): Ditto.
	(abspath): Ditto.
	* job.c (is_bourne_compatible_shell): Ditto.
	* variable.c (parse_variable_definition): Ditto.
	* read.c (eval): Ditto.
	(conditional_line): Ditto.
	(find_percent_cached): Ditto.
	* dep.h (PARSE_FILE_SEQ): Update function declaration.
	* default.c (set_default_suffixes): Update PARSE_FILE_SEQ() call.
	* file.c (split_prereqs): Ditto.
	* function.c (string_glob): Ditto.
	* implicit.c (pattern_search): Ditto.
	* rule.c (install_pattern_rule): Ditto.
	* main.c (main): Ditto.

2013-06-21  Paul Smith  <psmith@gnu.org>

	* main.c (verify_flag): Global variable to determine whether to
	verify the database or not.
	(decode_debug_flags): If debug mode, enable verify_flag.
	(main): If MAKE_MAINTAINER_MODE, enable verify_flag, otherwise not.
	(die): Only verify the database if verify_flag is set.
	* file.c (enter_file): Don't check caching unless verify_flag.
	* makeint.h: Export verify_flag.

2013-05-27  Paul Smith  <psmith@gnu.org>

	* variable.c (define_automatic_variables): Create a new variable
	MAKE_HOST.

2013-05-27  Hartmut Becker  <becker.ismaning@freenet.de>

	* function.c (func_shell_base) [VMS]: Support VMS.
	* makefile.com [VMS]: Ditto.
	* makefile.vms [VMS]: Ditto.
	* makeint.h [VMS]: Ditto.
	* vmsjobs.c [VMS]: Ditto.
	* job.h: Define RECORD_SYNC_MUTEX() when OUTPUT_SYNC is not set.
	* load.c (unload_file): Fix signature if MAKE_LOAD is not set.

2013-05-26  Paul Smith  <psmith@gnu.org>

	* remake.c (f_mtime): Ensure that archive file names are in the
	string cache.  Fixes Savannah bug #38442.

	* read.c (readline): To be safe, move the entire buffer if we
	detect a CR.  Fixes Savannah bug #38945.

	* job.c (new_job): Compare OUT to the beginning of the OUT
	var/function, not IN.  Fixes Savannah bug #39035.

2013-05-22  Paul Smith  <psmith@gnu.org>

	* main.c (switches[]): Order switches so simple flags all come first.
	(define_makeflags): Rework to make option passing more
	reliable and the code less tricksy.  Ensure simple flags are kept
	in the initial batch of flags.  Do not allow any flags with
	options in that batch.  If there are only non-simple flags MAKEFLAGS
	begins with ' '.
	(print_data_base): Print the version.  Fixes part of Savannah #35336.

	* read.c (eval_buffer): Initialize lineno.

2013-05-18  Alexey Pavlov  <alexpux@gmail.com>  (tiny change)

	* w32/Makefile.am (libw32_a_SOURCES): Add compat/posixfcn.c.

	* configure.ac (OUTPUT_SYNC): Define for mingw32 target.

	* job.c (construct_command_argv_internal) <sh_cmds_dos>
	[WINDOWS32]: Add "move".  Fixes Savannah bug #30714.

	* guile.c: Move inclusion of makeint.h before gnumake.h.  This
	order must be observed when building Make, because gnumake.h must
	be included with GMK_BUILDING_MAKE defined, which makeint.h
	already does.  Otherwise, the linker will look for, and fail to
	find, gmk_* functions in some external dynamic library.

2013-05-17  Benno Schulenberg  <bensberg@justemail.net>

	* main.c (decode_output_sync_flags): Fix output message.
	* read.c (EXTRANEOUS): Ditto.
	(record_files): Ditto.
	* remake.c (update_file_1): Ditto.

2013-05-17  Eli Zaretskii  <eliz@gnu.org>

	* main.c (prepare_mutex_handle_string): Define conditioned on
	OUTPUT_SYNC.

	* build_w32.bat: Copy config.h.W32 to config.h regardless of
	whether or not we are building from SCM.

2013-05-17  Paul Smith  <psmith@gnu.org>

	* configure.ac: Update version to 3.99.90.
	* NEWS: Ditto.

	* Source (*.[ch]): Remove TABs, use GNU coding styles.

	* ALL: Update copyright.

	* hash.c (CALLOC): Use xcalloc() to handle out of memory errors.

	* makeint.h: Prototype new unload_file() function.
	* load.c (unload_file): Create a function to unload a file.
	(struct load_list): Type to remember loaded objects.
	(loaded_syms): Global variable of remembered loaded objects so we
	can unload them later.  We don't have to remove from the list
	because the only time we unload is if we're about to re-exec.
	(load_object): Remove unneeded extra DLP argument.
	(load_file): Remove unneeded extra DLP argument.
	* filedef.h (struct file): Remove the DLP pointer and add the
	LOADED bit flag.  Saves 32/64 bytes per file, as this pointer is
	almost never needed.
	* read.c (eval): Set the new LOADED bit flag on the file.
	* file.c (rehash_file): Merge the loaded bitfield.
	* commands.c (execute_file_commands): Call unload_file() instead
	of dlclose() directly.

2013-05-14  Paul Smith  <psmith@gnu.org>

	* doc/make.texi (Loaded Object API): Document the requirement for
	the plugin_is_GPL_compatible symbol.
	* load.c (load_object): Check for plugin_is_GPL_compatible symbol.

2013-05-13  Paul Smith  <psmith@gnu.org>

	* filedef.h (struct file): Add a builtin flag.
	* file.c (enter_file): Unset the builtin flag.
	(rehash_file): Ditto.
	(print_file): Don't print builtin files if we've omitted them.
	* default.c (undefine_default_variables): New function: go through
	the default variables and undefine them.
	(set_default_suffixes): Mark these suffix rules as builtin.
	* makeint.h: Prototype.
	* main.c (main): Handle addition of -r and -R to MAKEFLAGS in the
	makefile.  Fixes Savannah bug #20501.

	* main.c (define_makeflags): Assign o_env_override level to
	MAKEFLAGS to ensure it's set even in the presence of -e.
	Fixes Savannah bug #2216.

	* makeint.h (TRACE_NONE, TRACE_RULE, TRACE_DIRECTORY): Define
	constants for the trace mode.
	* main.c: Add new --trace mode parsing.
	(decode_trace_flags): New function.
	(decode_switches): Call it.
	(define_makeflags): Fix a bug with long-name options.
	* misc.c (fatal): Remove special output-sync handling.
	* make.1: Document new --trace mode flags.
	* doc/make.texi (Options Summary): Ditto.

2013-05-11  Eli Zaretskii  <eliz@gnu.org>

	* job.c (child_out): Output the newline following the message
	before fllush-ing the stream.  Avoids displaying the following
	failure message, which goes to stderr, on the same line.

2013-05-06  Eli Zaretskii  <eliz@gnu.org>

	* gnumake.h (GMK_EXPORT) [_WIN32]: Move the dllexport declaration
	here from makeint.h.

	* makeint.h (GMK_BUILDING_MAKE) [WINDOWS32]: Define before
	including gnumake.h.

	* doc/make.texi (Loaded Object Example): Add a note about building
	shared objects on MS-Windows.

2013-05-05  Paul Smith  <psmith@gnu.org>

	* makeint.h (OUTPUT_SYNC_LINE, OUTPUT_SYNC_RECURSE): Rename
	output-sync options "job" to "line" and "make" to "recurse".
	* main.c (decode_output_sync_flags): Ditto.
	* job.c (reap_children): Ditto.
	(start_job_command): Ditto.
	* make.1: Ditto.
	* doc/make.texi (Parallel Output): Ditto.

	* job.c (child_out): Write newlines explicitly, and don't do
	anything if the message is empty.
	(sync_output): Put working dir messages around stdout AND stderr.
	(start_job_command): Move the tmp file assignment earlier.  After
	we do it, write the command line to the temp file to get the order
	correct.

	* misc.c (message): Remove special handling for output_sync.
	(error): Ditto.

2013-05-04  Paul Smith  <psmith@gnu.org>

	* loadapi.c (gmk_alloc): New function.
	* gnumake.h: Add gmk_alloc().  Clean GMK_EXPORT a bit to avoid MAIN.
	* makeint.h (GMK_EXPORT): New handling, vs. MAIN.
	* doc/make.texi (Loaded Object API): Add information on the memory
	handling functions.
	(Loaded Object Example): Create an example.

	* job.c (pump_from_tmp): (Rename) Write to stdout/stderr using
	FILE* rather than fd.  It's not a good idea to mix and match.

2013-05-04  Eli Zaretskii  <eliz@gnu.org>

	* makeint.h (ftruncate) [_MSC_VER]: Redirect to _chsize.
	(_S_ISDIR): If not defined (MinGW64), define to S_ISDIR.

2013-05-04  Paul Smith  <psmith@gnu.org>

	* job.c (child_out): Handle EINTR and incomplete write scenarios.
	(sync_init): New function: separate the initialization code.
	(assign_child_tempfiles): Remove truncation from this function,
	(sync_output): and add it here after output is generated.
	(reap_children): Always call sync_output() in case output_sync was
	reset after the child started, due to error.
	(start_job_command): Create new sync_cmd variable.  Use new method
	for initializing the handle.
	If we're not syncing the output be sure any output we've saved is
	dumped immediately before starting the child.

2013-05-04  Eli Zaretskii  <eliz@gnu.org>

	* job.c (start_job_command): Make the condition for creating a
	temporary output file be identical to the Posix code branch.
	Suggested by Frank Heckenbach <f.heckenbach@fh-soft.de>.

2013-05-03  Eli Zaretskii  <eliz@gnu.org>

	* w32/subproc/sub_proc.c: Include makeint.h.  Remove a private
	incompatible prototype of xmalloc.
	(batch_file_with_spaces): New function, detects Windows batch
	files whose names include whitespace characters.
	(process_begin): If exec_name is a batch file with whitespace
	characters in its name, pass NULL as the first argument to
	CreateProcess.  This avoids weird failures due to buggy quoting by
	CreateProcess.  For the details, see the discussion starting at
	http://lists.gnu.org/archive/html/make-w32/2013-04/msg00008.html.

	* load.c (load_object, load_file): Accept an additional argument
	DLP and return in it a pointer that can be used to unload the
	dynamic object.

	* read.c (eval): Call load_file with an additional argument, and
	record the pointer returned there in the 'struct file' object of
	dynamic objects in that object's 'struct file'.

	* commands.c (execute_file_commands): Unload dynamic objects
	before remaking them, to avoid failure to remake if the OS doesn't
	allow overwriting objects that are in use.

	* filedef.h (struct file): New member dlopen_ptr.

	* gnumake.h (GMK_EXPORT): Define to dllexport/dllimport
	decorations for Windows and to nothing on other platforms.
	(gmk_eval, gmk_expand, gmk_add_function): Add GMK_EXPORT qualifier
	to prototypes.

	* makeint.h (MAIN): Define before including gnumake.h, to give
	correct dllexport decorations to exported functions.
	(load_file): Adjust prototype.

	* loadapi.c: Don't include gnumake.h, since makeint.h already
	includes it, and takes care of defining MAIN before doing so.

	* build_w32.bat (LinkGCC): Produce an import library for functions
	exported by Make for loadable dynamic objects.

	* w32/compat/posixfcn.c (dlclose): New function.

	* w32/include/dlfcn.h (dlclose): Add prototype.

2013-05-01  Eli Zaretskii  <eliz@gnu.org>

	* job.c (start_job_command) [WINDOWS32]: Make the same fix for
	MS-Windows as the previous commit did for Posix platforms.
	(construct_command_argv_internal): Don't treat a backslash as an
	escape character before whitespace, if the shell is not a Posix
	shell.   For the description of the problem, see
	http://lists.gnu.org/archive/html/make-w32/2013-04/msg00014.html.

2013-05-01  Paul Smith  <psmith@gnu.org>

	* job.c (start_job_command): Don't redirect output for recursive
	make jobs, unless we're in makefile synchronization mode.

2013-04-30  Stefano Lattarini <stefano.lattarini@gmail.com>  (tiny change)

	build: enable the 'silent-rules' automake options

	* configure.ac (AM_INIT_AUTOMAKE): Here.  The future major Automake
	version 2.0 (ETA about one, one and half year from now) will enable
	it by default, so better prepare ourselves.

2013-04-30  Stefano Lattarini <stefano.lattarini@gmail.com>  (tiny change)

	build: require Autoconf >= 2.62 and Automake >= 1.11.1

	Older versions of those tools should be considered fully obsolete.
	Also, GNU make already requires Gettext >= 0.18.1, which has been
	released six months after Automake 1.11.1 and two years after
	Autoconf 2.62; so the new requirement shouldn't be problematic
	for people already bootstrapping GNU make from the Git repository.

	* configure.ac (AC_PREREQ): Require Autoconf 2.62 or later.
	(AM_INIT_AUTOMAKE): Require Automake 1.11.1 or later (1.11 had
	some serious bugs, and should not be used).

2013-04-30  Stefano Lattarini <stefano.lattarini@gmail.com>  (tiny change)

	build: get rid of 'HAVE_ANSI_COMPILER' C preprocessor conditional

	GNU make already assume C89 or later throughout the codebase, and
	that preprocessor conditional was no longer used anyway.

	* configure.ac: Remove AC_DEFINE of HAVE_ANSI_COMPILER.
	* config.ami.template: Remove #define of HAVE_ANSI_COMPILER.
	* config.h-vms.template: Likewise.
	* config.h.W32.template: Likewise.
	* configh.dos.template: Likewise.

2013-04-30  Stefano Lattarini <stefano.lattarini@gmail.com>  (tiny change)

	cosmetics: fix few innocuous typos

	Most of these were found using Lucas De Marchi's 'codespell' tool.

	* ChangeLog: Fix minor typos.
	* ChangeLog.2: Likewise.
	* README.Amiga: Likewise.
	* TODO.private: Likewise.
	* function.c: Likewise.
	* glob/glob.h: Likewise.
	* job.c: Likewise.
	* main.c: Likewise.
	* readme.vms: Likewise.
	* remake.c: Likewise.
	* tests/ChangeLog: Likewise.
	* tests/NEWS: Likewise.
	* tests/README: Likewise.
	* tests/scripts/variables/private: Likewise.
	* vmsdir.h: Likewise.
	* signame.c: Likewise.  While at it, improve line wrapping in the
	touched comment.

2013-04-29  Eli Zaretskii  <eliz@gnu.org>

	* w32/include/dlfcn.h: New file.

	* w32/compat/posixfcn.c: Include dlfcn.h.
	(dlopen, dlerror, dlsym) [MAKE_LOAD]: New functions, in support of
	dynamic loading.

	* config.h.W32.template (MAKE_LOAD): Define.

	* load.c (load_object) [HAVE_DOS_PATHS]: Support backslashes and
	drive letters in file names of dynamic objects.

	* job.c (construct_command_argv_internal) [WINDOWS32]: Return
	right after generating new_argv for one_shell case.  This fixes
	the Windows build for both Unixy shell and stock Windows shells.

2013-04-28  Eli Zaretskii  <eliz@gnu.org>

	* dir.c (local_stat) [WINDOWS32]: Use the wrapper on MS-Windows.
	If the argument ends in "dir/.", make sure the parent dir exists
	and is indeed a directory.  Fixes Savannah bug #37065.

2013-04-28  Paul Smith  <psmith@gnu.org>

	* makeint.h (message_s, error_s): Functions that print to strings
	rather than directly to files.
	* misc.c (message_s, error_s): Create them.
	* job.c (child_error): Print error messages to the output sync
	logs, if one exists, rather then directly to the terminal.
	(reap_children): Move the per-line sync after child_error().

	* configure.ac: Remove support for pre-ANSI variadic function calls.
	* makeint.h: Ditto.
	* misc.c: Ditto.
	* config.ami.template: Ditto.
	* config.h-vms.template: Ditto.
	* config.h.W32.template: Ditto.
	* configh.dos.template: Ditto.

	Implement a "per-job" output synchronization option.

	* main.c (decode_output_sync_flags): Recognize the new option.
	* makeint.h (OUTPUT_SYNC_JOB): Add new values for "job"
	* job.c (assign_child_tempfiles): In per-job mode, truncate the
	temp file for re-use by the next job.
	(sync_output): Don't close the temp files as we may still use them.
	(free_child): Close the temp files here as we definitely don't
	need them.
	(new_job): In per-job output mode, sync_output() after each job.
	* job.h (struct child): Avoid ifdefs.
	* make.1: Add new options to the man page.
	* doc/make.texi (Parallel Output): Break documentation on input
	and output into separate sections for readability.  Document the
	new "job" and "none" modes.

2013-04-27  Paul Smith  <psmith@gnu.org>

	* job.c (construct_command_argv_internal): Fix oneshell support
	for non-POSIX-sh shells.

	* load.c (load_object): Extract all POSIX-isms into a separate
	function for portability.
	(load_file): Check the .LOADED variable first and don't invoke
	load_object() if it's already been loaded.

2013-04-27  Eli Zaretskii  <eliz@gnu.org>

	* read.c (record_files): Pay attention to .ONESHELL in MS-Windows.

	* job.c (construct_command_argv_internal): Support .ONESHELL on
	MS-Windows, when the shell is not a Unixy shell.

2013-04-27  Eli Zaretskii  <eliz@gnu.org>

	* job.c: Fix compilation error on GNU/Linux due to "label at end
	of compound statement".

2013-04-27  Frank Heckenbach <f.heckenbach@fh-soft.de>  (tiny change)

	* job.c (sync_output): Don't discard the output if
	acquire_semaphore fails; instead, dump the output unsynchronized.

2013-04-27  Eli Zaretskii  <eliz@gnu.org>

	Support --output-sync on MS-Windows.
	* w32/compat/posixfcn.c: New file, with emulations of Posix
	functions and Posix functionality for MS-Windows.

	* w32/subproc/sub_proc.c: Include io.h.
	(process_noinherit): New function, forces a file descriptor to not
	be inherited by child processes.
	(process_easy): Accept two additional arguments, and use them to
	set up the standard output and standard error handles of the child
	process.

	* w32/include/sub_proc.h (process_easy): Adjust prototype.
	(process_noinherit): Add prototype.

	* read.c [WINDOWS32]: Include windows.h and sub_proc.h.

	* makeint.h (LOCALEDIR) [WINDOWS32}: Define to NULL if not
	defined.  This is needed because the MS-Windows build doesn't have
	a canonical place for LOCALEDIR.
	(WIN32_LEAN_AND_MEAN) [WINDOWS32]: Define, to avoid getting from
	windows.h header too much stuff that could conflict with the code.

	* main.c <sync_mutex>: New static variable.
	<switches>: Add support for "--sync-mutex" switch.
	(decode_output_sync_flags): Decode the --sync-mutex= switch.
	(prepare_mutex_handle_string) [WINDOWS32]: New function.
	(main): Add "output-sync" to .FEATURES.

	* job.h (CLOSE_ON_EXEC) [WINDOWS32]: Define to call
	process_noinherit.
	(F_GETFD, F_SETLKW, F_WRLCK, F_UNLCK, struct flock) [WINDOWS32]:
	New macros.
	(RECORD_SYNC_MUTEX): New macro, a no-op for Posix platforms.
	(sync_handle_t): New typedef.

	* job.c <sync_handle>: Change type to sync_handle_t.
	(FD_NOT_EMPTY): Seek to the file's end.  Suggested by Frank
	Heckenbach <f.heckenbach@fh-soft.de>.
	(pump_from_tmp_fd) [WINDOWS32]: Switch to_fd to binary mode for
	the duration of this function, and then change back before
	returning.
	(start_job_command) [WINDOWS32]: Support output_sync mode on
	MS-Windows.  Use a system-wide mutex instead of locking
	stdout/stderr.  Call process_easy with two additional arguments:
	child->outfd and child->errfd.
	(exec_command) [WINDOWS32]: Pass two additional arguments, both
	-1, to process_easy, to adjust for the changed function signature.

	* function.c (windows32_openpipe) [WINDOWS32]: This function now
	returns an int, which is -1 if it fails and zero otherwise.  It
	also calls 'error' instead of 'fatal', to avoid exiting
	prematurely.
	(func_shell_base) [WINDOWS32]: Call perror_with_name if
	windows32_openpipe fails, now that it always returns.  This avoids
	a compiler warning that error_prefix is not used in the MS-Windows
	build.

	* config.h.W32.template (OUTPUT_SYNC): Define.

	* build_w32.bat: Add w32/compat/posixfcn.c to compilation and
	linking commands.

2013-04-20  Stefano Lattarini <stefano.lattarini@gmail.com>  (tiny change)

	* README.git: Our autoconf input file is 'configure.ac', not
	'configure.in'.  Adjust accordingly.
	* build_w32.bat: Likewise.
	* config.h-vms.template: Likewise.
	* Makefile.DOS.template: Likewise.

2013-04-16  Paul Smith  <psmith@gnu.org>

	* misc.c (open_tmpfd): Add a new function that returns a temporary
	file by file descriptor.
	(open_tmpfile): Move here from main.c.
	* job.c (assign_child_tempfiles): Use the new open_tmpfd().

2013-04-15  Paul Smith  <psmith@gnu.org>

	* makeint.h (OUTPUT_SYNC_TARGET, OUTPUT_SYNC_MAKE): Rename.
	* job.c (start_job_command): Use new constants.
	* main.c: New -O argument format.

	* doc/make.texi (Options Summary): Document the argument to -O.
	* make.1: Ditto.

	* main.c (define_makeflags): Don't add space between a single-char
	option and its argument.

2013-04-06  Paul Smith  <psmith@gnu.org>

	* doc/make.texi (Implicit Variables): Clarify LDFLAGS vs. LDLIBS.
	Fixes Savannah bug #37970.

	* remake.c (check_dep): Reconsider files waiting on prerequisites,
	as they may have finished.  Fixes Savannah bug #37703.

2013-02-28  Paul Smith  <psmith@gnu.org>

	* function.c (func_realpath): On Solaris (at least) realpath() can
	fail due to EINTR, so loop it.  Fixes Savannah bug #38420.

2013-02-25  Paul Smith  <psmith@gnu.org>

	Add a proposed supported API for GNU make loaded objects.

	* doc/make.texi (Loaded Object API): Document it.
	* Makefile.am (make_SOURCES): Add new loadapi.c.
	* dep.h: Remove eval_buffer(); moved to loadapi.c:gmk_eval().
	* read.c (eval_buffer): Change eval_buffer() signature.
	* main.c (main): Change eval_buffer() signature.
	* variable.h (define_new_function): Change func_ptr signature.
	* load.c (SYMBOL_EXTENSION): Change the extension.
	* loadapi.c: Implement the new API.
	* gnumake.h (gmk_eval): New function prototype.
	(gmk_expand) Ditto.
	(gmk_add_function) Ditto.
	* gmk-default.scm (gmk-eval): Remove: now implemented in guile.c.
	* guile.c (guile_expand_wrapper): Use gmk_expand()
	(guile_eval_wrapper): Implement eval here to avoid double-expansion.
	(guile_define_module): Define gmk-eval.
	(func_guile): Use new func_ptr calling model.
	(guile_gmake_setup): Use gmk_add_function() to declare $(guile ...)
	* function.c (function_table_entry): Provide alternative func_ptr.
	(func_eval): New signature for eval_buffer();
	(function_table_init): New initialization for function_table_entry.
	(expand_builtin_function): Support alternative invocation signature.
	(define_new_function): Ditto.

2013-01-20  Paul Smith  <psmith@gnu.org>

	* gnumake.h: New file to contain externally-visible content.
	* makeint.h: Include gnumake.h.  Move gmk_floc type to gnumake.h.
	* Makefile.am (include_HEADERS): Install the gnumake.h header.

	* makeint.h: Change struct floc to gmk_floc typedef.
	* Many: Use the new typedef.

	* make.h: Rename to makeint.h.
	* Many: Use the new name makeint.h.

2013-01-19  Paul Smith  <psmith@gnu.org>

	* doc/make.texi (load Directive): Update to discuss location of
	loaded object file.
	(Remaking Loaded Objects): Document remaking of loaded objects.

	* main.c (main): Rename READ_MAKEFILES to READ_FILES.
	* read.c: Change READ_MAKEFILES to READ_FILES since it now
	contains loaded object files as well.
	(read_all_makefiles): Ditto.
	(eval_makefile): Ditto.
	(eval): Add any loaded file to the READ_FILES list, so that it
	will be considered for re-build.

	* load.c (load_file): Return the simple filename (no symbol) in
	the LDNAME argument (now a const char **).
	This filename should no longer have "./" prepended: modify the
	function to always check the current directory if the name has no
	"/", before using the normal methods.
	* make.h: Change the load_file() prototype.

	* README.git: Add a bit more documentation on Git workflow & rules.

2013-01-13  Paul Smith  <psmith@gnu.org>

	* main.c (main): Restore all make flags after re-exec is complete.
	Fixes Savannah bug #38051.

2013-01-12  Paul Smith  <psmith@gnu.org>

	Convert CVS archive to Git.

	* configure.in: Rename to configure.ac.
	* README.cvs: Rename to README.git and rework for Git.
	* maintMakefile: Use git clean for cleanup.
	* ChangeLog: Use new Git repository URL.
	* ChangeLog.2: Ditto.
	* Makefile.am: Change documentation for Git
	* Makefile.DOS.template: Ditto.
	* README.template: Ditto.
	* build_w32.bat: Ditto.
	* prepare_w32.bat: Ditto.
	* .cvsignore: Rename to .gitignore, and change to Git format.

2012-12-08  Eli Zaretskii  <eliz@gnu.org>

	* job.c (create_batch_file): Fix last change: always increment the
	counter of batch files before trying to use it.

2012-12-07  Eli Zaretskii  <eliz@gnu.org>

	* job.c (construct_command_argv_internal): Remove " from
	sh_chars_dos[].  Ignore an escaped backslash inside a string
	quoted with "..".  This lifts the 4KB or 8KB command-line length
	limitation imposed by the Windows shells when a command uses quoted
	strings, because we now don't call the shell in that case.

	* job.c (create_batch_file): Declare the counter of batch files
	static, to avoid having 2 jobs using the same file name and
	stepping on each other's toes.  When all 64K names are used up,
	make one more loop looking for slots that became vacant.  This
	avoids leaving behind temporary batch files in the temporary
	directory, which happens frequently on a fast machine when using
	parallel builds.
	(reap_children): Add debug message for when removal of a temporary
	batch file fails.

2012-10-29  Paul Smith  <psmith@gnu.org>

	New feature: "load" directive for dynamically-loaded objects.

	* NEWS: Document new "load" directive.
	* doc/make.texi (Extending make): New chapter on extensions to make.
	* configure.in: Check for dlopen/dlsym/dlerror and -ldl.
	* Makefile.am (make_SOURCES): Add new file load.c.
	* make.h: Prototype for load_file().
	* main.c (main): Add "load" to .FEATURES if it's available.
	* read.c (eval): Parse "load" and "-load" directives.

2012-09-29  Paul Smith  <psmith@gnu.org>

	* configure.in: Require a new version of gettext (1.18.1).
	Fixes Savannah bug #37307.

2012-09-09  Paul Smith  <psmith@gnu.org>

	* configure.in (bsd_signal): Define _GNU_SOURCE, a la make.h.
	Fixes Savannah bug #32247.

	* remake.c (update_file_1): Force intermediate files to be
	considered, not pruned, if their non-intermediate parent needs to
	be remade.  Fixes Savannah bug #30653.

	* job.c (construct_command_argv_internal): Keep the command line
	on the heap for very long lines.  Fixes Savannah bug #36451.

	* function.c (func_realpath): BSD realpath(3) doesn't fail if the
	file does not exist: use stat.  Fixes Savannah bug #35919.

	* file.c (expand_deps): Duplicate the current variable buffer, not
	the old pointer.  Fixes Savannah bug #36925.

	* read.c (eval): If we detect an initial UTF-8 BOM, skip it.
	Fixes Savannah bug #36529.
	(record_target_var): Remove unused variable "fname".
	(eval): Use the correct pointer when adding to the variable buffer.
	Fixes Savannah bug #36106.

2012-09-09  Eli Zaretskii  <eliz@gnu.org>

	* read.c (unescape_char): Fix a thinko in the last change.

2012-09-09  Paul Smith  <psmith@gnu.org>

	* default.c (default_variables): Use a correct default LIBPPATERNS
	for MacOS.  Fixes Savannah bug #37197.

	* read.c (record_files): Reset the default macro values if .POSIX
	is set.  Fixes Savannah bug #37069.
	(parse_file_seq): Break out of an infinite loop if we're not
	making progress when parsing archive references.

2012-09-01  Eli Zaretskii  <eliz@gnu.org>

	* README.W32.template: Update for job-server and Guile support.

	* read.c (unescape_char): Advance 'p' after copying the unescaped
	characters.  Otherwise the backslashes are incorrectly erased from
	the original string.

2012-03-05  Paul Smith  <psmith@gnu.org>

	Update copyright notices to use year ranges, as allowed by
	clarifications in the GNU Maintainer's Manual.

2012-03-04  Paul Smith  <psmith@gnu.org>

	* read.c (unescape_char): New function to remove escapes from a char.
	(record_files): Call it on the dependency string to unescape ":".
	Fixes Savannah bug #12126 and bug #16545.

	* make.h (CSTRLEN): Determine the length of a constant string.
	* main.c: Use the new macro.
	* read.c: Ditto.
	* variable.h: Ditto.
	* function.c: Simplify checks for function alternatives.

	* expand.c (variable_append): If the current set is local and the
	next one is not a parent, then treat the next set as
	local as well.  Fixes Savannah bug #35468.

2012-03-03  Paul Smith  <psmith@gnu.org>

	* acinclude.m4 (AC_STRUCT_ST_MTIM_NSEC): Add support for AIX 5.2+
	nanosecond timestamps.  Fixes Savannah bug #32485.

	Convert uses of `foo' for quoting to 'foo' to reflect changes in
	the GNU Coding Standards.  Fixes Savannah bug #34530.

	* job.c (construct_command_argv_internal): In oneshell we need to
	break the SHELLFLAGS up for argv.  Fixes Savannah bug #35397.

	* function.c (func_filter_filterout): Recompute the length of each
	filter word in case it was compressed due to escape chars.  Don't
	reset the string as it's freed.  Fixes Savannah bug #35410.

	* misc.c (collapse_continuations): Only use POSIX-style
	backslash/newline handling if the .POSIX target is set.
	Addresses Savannah bug #16670 without backward-incompatibility.
	* NEWS: Document behavior change.
	* doc/make.texi (Splitting Lines): New section describing how to
	use backslash/newline to split long lines.

2012-02-26  Paul Smith  <psmith@gnu.org>

	* implicit.c (pattern_search): Check the stem length to avoid
	stack overflows in stem_str.  Fixes Savannah bug #35525.

2012-02-03  Eli Zaretskii  <eliz@gnu.org>

	* w32/subproc/sub_proc.c (proc_stdin_thread, proc_stdout_thread)
	(proc_stderr_thread, process_pipe_io): Ifdef away unused
	functions.

	* w32/subproc/w32err.c (map_windows32_error_to_string) [_MSC_VER]:
	Don't use TLS storage for szMessageBuffer.  Ifdef away special
	code for handling Winsock error codes.  Make the function return a
	`const char *'.  Suggested by Ozkan Sezer.  Fixes Savannah bug #34832.

2012-01-29  Paul Smith  <psmith@gnu.org>

	* gmk-default.scm (to-string-maybe): Variables map to empty strings.
	In Guile 2.0, (define ...) results in a variable object so make
	sure that maps to an empty string in make.

	* variable.c (parse_variable_definition): New POSIX assignment ::=
	Take a struct variable to return more information after parsing.
	(assign_variable_definition): New parse_variable_definition() call.
	* variable.h: New declaration of parse_variable_definition().
	* read.c (do_define): New parse_variable_definition() call.
	(parse_var_assignment): Ditto.
	(get_next_mword): Parse ::= as a variable assignment.
	* doc/make.texi (Flavors): Describe the new ::= syntax.
	* NEWS: Mention the ::= operator.

	* variable.h (struct variable): Rearrange elts to reduce struct size.

	* function.c (func_file): Create a new function, $(file ...)
	* doc/make.texi (File Function): Document the $(file ..) function.
	* NEWS: Announce it.

	* gmk-default.scm (to-string-maybe): Use a more portable way to
	test for unprintable characters.
	* configure.in [GUILE]: Guile 1.6 doesn't have pkg-config
	* build_w32.bat: Ditto.

2012-01-28  Eli Zaretskii  <eliz@gnu.org>

	* config.h.W32.template: Update from config.h.in.

	Support a Windows build with Guile.

	* README.W32.template: Update with instructions for building with
	Guile.

	* build_w32.bat: Support building with Guile.

	* make.h [HAVE_STDINT_H]: Include stdint.h.

	* main.c (main, clean_jobserver): Move declarations of variables
	not used in the WINDOWS32 build to the #else branch, to avoid
	compiler warnings.

	Fix failures on MS-Windows when Make's standard handles are invalid.
	This can happen when Make is invoked from a GUI application.

	* w32/subproc/sub_proc.c (process_init_fd): Don't dereference
	pproc if it is a NULL pointer.
	(process_begin, process_cleanup): Don't try to close pipe handles
	whose value is INVALID_HANDLE_VALUE.
	(process_easy): Initialize hIn, hOut, and hErr to
	INVALID_HANDLE_VALUE.  If DuplicateHandle fails with
	ERROR_INVALID_HANDLE, duplicate a handle for the null device
	instead of STD_INPUT_HANDLE, STD_OUTPUT_HANDLE or
	STD_ERROR_HANDLE.  Don't try to close pipe handles whose value is
	INVALID_HANDLE_VALUE.

	* function.c (windows32_openpipe): Initialize hIn and hErr to
	INVALID_HANDLE_VALUE.  If DuplicateHandle fails with
	ERROR_INVALID_HANDLE, duplicate a handle for the null device
	instead of STD_INPUT_HANDLE or STD_ERROR_HANDLE.  Fix indentation.
	Don't try to close handles whose value is INVALID_HANDLE_VALUE.

2012-01-25  Eli Zaretskii  <eliz@gnu.org>

	* function.c (define_new_function): Fix format strings in calls to
	`fatal'.

2012-01-17  Paul Smith  <psmith@gnu.org>

	* guile.c (func_guile): Handle NULL returns from Guile.

2012-01-16  Paul Smith  <psmith@gnu.org>

	* make.h (PATH_SEPARATOR_CHAR): Allow resetting for crosscompiling
	for Windows.  Patch by Chris Sutcliffe <ir0nh34d@gmail.com>
	Fixes Savannah bug #34818.

2012-01-15  Paul Smith  <psmith@gnu.org>

	* variable.h: Prototype an interface for defining new make functions.
	* function.c (define_new_function): Define it.
	(func_guile): Remove the "guile" function.
	(function_table_init): Ditto.
	* guile.c (func_guile): Add the "guile" function here.
	(setup_guile): Call define_new_function() to define it.
	(guile_eval_string): Obsolete.

	* all: Update copyright notices.

2012-01-12  Paul Smith  <psmith@gnu.org>

	Support GNU Guile as an embedded extension language for GNU make.

	* NEWS: Note the new Guile capability.
	* Makefile.am (EXTRA_DIST, make_SOURCES): Add new guile source files.
	(AM_CFLAGS): Add Guile compiler flags.
	(guile): Add a rule for converting default SCM into a C header.
	* configure.in: Add support for --with-guile.
	Also, convert the entire file to properly escaped autoconf m4, and
	utilize newer features such as AS_IF() and AS_CASE().
	* doc/make.texi (Guile Function): Document the GNU guile integration.
	* make.h (guile_eval_string, guile_boot): Prototypes for Guile.
	* main.c (main): Run guile_boot() to handle main().
	(real_main): All the previous content of main() is here.
	(real_main): Add "guile" to the .FEATURES variable.
	* function.c (func_guile): Call Guile.
	* guile.c: New file implementing GNU make integration with GNU Guile.
	* gmk-default.scm: The integration of GNU make with Guile uses
	Guile itself for much of the parsing and conversion of return
	types, etc.  This implementation is embedded into GNU make.
	* config.h-vms.template: Disable Guile support.
	* config.h.W32.template: Ditto.
	* configh.dos.template: Ditto.
	* config.ami.template: Ditto.
	* makefile.vms: Add new Guile files.
	* Makefile.DOS.template: Ditto.
	* Makefile.ami: Ditto.
	* NMakefile.template: Ditto.
	* SMakefile.template: Ditto.
	* build_w32.bat: Ditto.
	* dosbuild.bat: Ditto.
	* make_msvc_net2001.vcproj: Ditto.

2011-11-15  Paul Smith  <psmith@gnu.org>

	* main.c (main): Use %ld when printing DWORD values.
	* job.c (new_job): Ditto.
	* w32/include/sub_proc.h: Use const.
	* w32/subproc/sub_proc.c (open_jobserver_semaphore): Use const.
	Fixes Savannah bug #34830.  Changes suggested by Ozkan Sezer.

	* configure.in (MAKE_JOBSERVER): Enable jobserver on W32 systems.
	* config.h.W32.template (MAKE_JOBSERVER): Ditto.

2011-11-14  Paul Smith  <psmith@gnu.org>

	* read.c (eval): parse_file_seq() might shorten the string due to
	backslash removal.  Start parsing again at the colon.
	Fixes Savannah bug #33399.

2011-11-13  Paul Smith  <psmith@gnu.org>

	* file.c (file_timestamp_cons): Match up data types to avoid warnings.
	* filedef.h: Ditto.
	* misc.c (concat): Ditto.
	* read.c (eval): Assign value to avoid warnings.
	* function.c (func_shell_base): Use fork() instead of vfork() to
	avoid warnings.
	* make.h (INTEGER_TYPE_SIGNED): Use <=0 to avoid warnings.
	Fixes Savannah bug #34608.

	* job.c (construct_command_argv): Remove _p.
	(construct_command_argv_internal): Remove _ptr.
	Fixes Savannah bug #32567.

	* main.c (clean_jobserver): Don't write the free token to the pipe.
	Change suggested by Tim Newsome <tnewsome@aristanetworks.com>

	* acinclude.m4 (AC_STRUCT_ST_MTIM_NSEC): Add support for Darwin.
	* filedef.h (FILE_TIMESTAMP_STAT_MODTIME): Ditto.
	Patch provided by Troy Runkel <Troy.Runkel@mathworks.com>

2011-10-11  Troy Runkel  <Troy.Runkel@mathworks.com>

	* config.h.W32: Enable job server support for Windows.
	* main.c [WINDOWS32]: Include sub_proc.h
	(main): Create a named semaphore to implement the job server.
	(clean_jobserver): Free the job server semaphore when make is finished.
	* job.c [WINDOWS32]: Define WAIT_NOHANG
	(reap_children): Support non-blocking wait for child processes.
	(free_child): Release job server semaphore when child process finished.
	(job_noop): Don't define function on Windows.
	(set_child_handler_action_flags): Don't define function on Windows.
	(new_job): Wait for job server semaphore or child process termination.
	(exec_command): Pass new parameters to process_wait_for_any.
	* w32/include/sub_proc.h [WINDOWS32]: New/updated EXTERN_DECL entries.
	* w32/subproc/sub_proc.c [WINDOWS32]: Added job server implementation.
	(open_jobserver_semaphore): Open existing job server semaphore by name.
	(create_jobserver_semaphore): Create new job server named semaphore.
	(free_jobserver_semaphore): Close existing job server semaphore.
	(acquire_jobserver_semaphore): Decrement job server semaphore count.
	(release_jobserver_semaphore): Increment job server semaphore count.
	(has_jobserver_semaphore): Returns whether job server semaphore exists.
	(get_jobserver_semaphore_name): Returns name of job server semaphore.
	(wait_for_semaphore_or_child_process): Wait for either the job server
	semaphore to become signalled or a child process to terminate.
	(process_wait_for_any_private): Support for non-blocking wait for child.
	(process_wait_for_any): Added support for non-blocking wait for child.
	(process_file_io): Pass new parameters to process_wait_for_any_private.

2011-09-18  Paul Smith  <psmith@gnu.org>

	* main.c (main): If we're re-exec'ing and we're the master make,
	then restore the job_slots value so it goes back into MAKEFLAGS
	properly.  See Savannah bug #33873.

	* remake.c (library_search): STD_DIRS is computed when other
	static vars like buflen etc. are computed, so it must be static
	as well.  See Savannah bug #32511.

2011-09-16  Paul Smith  <psmith@gnu.org>

	* maintMakefile (do-po-update): Apparently we have to avoid
	certificate checks on the http://translationproject.org site now.

2011-09-12  Paul Smith  <psmith@gnu.org>

	* read.c (eval): Ensure exported variables are defined in the
	global scope.  Fixes Savannah bug #32498.

2011-09-11  Paul Smith  <psmith@gnu.org>

	* Makefile.am (dist-hook): Remove w32/Makefile and .deps/ from the
	dist file.  Fixes Savannah bug #31489.

	* doc/make.texi (Complex Makefile): Add a hint about using
	#!/usr/bin/make (for Savannah support request #106459)

2011-09-02  Paul Smith  <psmith@gnu.org>

	* remake.c (touch_file): If we have both -n and -t, -n takes
	precedence.  Patch from Michael Witten <mfwitten@gmail.com>

2011-08-29  Paul Smith  <psmith@gnu.org>

	* expand.c (variable_expand_string): Always allocate a new buffer
	for a string we're expanding.  The string we're working on can get
	freed while we work on it (for example if it's the value of a
	variable which modifies itself using an eval operation).
	See Savannah patch #7534 for the original report by Lubomir Rintel.

2011-06-12  Paul Smith  <psmith@gnu.org>

	* read.c (parse_file_seq): Move the check for empty members out of
	the loop so we can go to the next member properly.
	Another fix for Savannah bug #30612.

	* config.h-vms.template: Newer versions of VMS have strncasecmp()
	Patch provided by: Hartmut Becker <becker.ismaning@freenet.de>

2011-05-07  Paul Smith  <psmith@gnu.org>

	* expand.c (variable_append): Add a LOCAL argument to track
	whether this is the first invocation or not.  If it's not and
	private_var is set, then skip this variable and try the next one.
	Fixes Savannah bug #32872.

	* read.c (parse_file_seq): Ensure existence checks use glob().

2011-05-07  Eli Zaretskii  <eliz@gnu.org>

	* job.c (construct_command_argv_internal): Don't assume shellflags
	is always non-NULL.  Escape-protect characters special to the
	shell when copying the value of SHELL into new_line.  Fixes
	Savannah bug #23922.

2011-05-02  Paul Smith  <psmith@gnu.org>

	* doc/make.texi (Special Variables): Add documentation for the new
	words in .FEATURES.  Fixes Savannah bug #32058.
	(Flavor Function): Rewrite the section on the flavor function.
	Fixes Savannah bug #31582.

	* function.c (func_sort): Use the same algorithm to count the
	number of words we will get after the split, as we use to split.
	Based on a patch from Matthias Hopf.  Fixes Savannah bug #33125.

	* make.h: Make global variable stack_limit extern.
	Fixes Savannah bug #32753.

2011-05-01  Paul Smith  <psmith@gnu.org>

	* read.c (parse_file_seq): Don't try to invoke glob() unless there
	are potential wildcard characters in the filename.  Performance
	enhancement suggested by Michael Meeks <michael.meeks@novell.com>

2011-04-29 Boris Kolpackov  <boris@codesynthesis.com>

	* read.c (eval_makefile): Delay caching of the file name until after
	all the expansions and searches.

2011-04-17  David A. Wheeler  <dwheeler@dwheeler.com>

	* doc/make.texi (Reading Makefiles): Document "!=".
	(Setting): Ditto.
	(Features): Ditto.
	* variable.h (enum variable_flavor): New type "f_shell".
	* variable.c (shell_result): Send a string to the shell and store
	the output.
	(do_variable_definition): Handle f_shell variables: expand the
	value, then send it to the shell and store the result.
	(parse_variable_definition): Parse "!=" shell assignments.
	* read.c (get_next_mword): Treat "!=" as a varassign word.
	* function.c (fold_newlines): If trim_newlines is set remove all
	trailing newlines; otherwise remove only the last newline.
	(func_shell_base): Move the guts of the shell function here.
	(func_shell): Call func_shell_base().

2011-02-21  Paul Smith  <psmith@gnu.org>

	* strcache.c (various): Increase performance based on comments
	from Ralf Wildenhues <Ralf.Wildenhues@gmx.de>.  Stop looking for
	a buffer when we find the first one that fits, not the best fit.
	If there is not enough free space in a buffer move it to a
	separate list so we don't have to walk it again.
	* make.h (NDEBUG): Turn off asserts unless maintainer mode is set.
	(strcache_add_len, strcache_setbufsize): Use unsigned length/size.
	* maintMakefile (AM_CPPFLAGS): Enable MAKE_MAINTAINER_MODE.

	* remake.c (complain): Move translation lookups closer to use.

2011-02-13  Paul Smith  <psmith@gnu.org>

	* doc/make.texi: Clean up references to "static" variables and
	semicolon errors.  Patch from Michael Witten <mfwitten@gmail.com>.

2010-12-27  Paul Smith  <psmith@gnu.org>

	* make.1: Update the header/footer info in the man page.

2010-11-28  Paul Smith  <psmith@gnu.org>

	* read.c (record_target_var): Don't reset v if it's the same as
	the global version.  Fixes Savannah bug #31743.

2010-11-06  Paul Smith  <psmith@gnu.org>

	* variable.c (print_auto_variable): Print auto variables; ignore others.
	(print_noauto_variable): Print non-auto variables; ignore others.
	(print_variable_set): Allow the caller to select which type to print.
	(print_target_variables): Show all the non-auto variables for a target.

	* default.c (install_default_suffix_rules): Initialize recipe_prefix.
	* rule.c (install_pattern_rule): Ditto.
	* read.c (record_files): Pass in the current recipe prefix.  Remember
	it in the struct command for these targets.
	(eval): Remember the value of RECIPEPREFIX when we start parsing.
	Do not remove recipe prefixes from the recipe here: we'll do it later.
	* job.c (start_job_command): Remove recipe prefix characters early,
	before we print the output or chop it up.
	* file.c (print_file): If recipe_prefix is not standard, reset it
	in -p output.  Assign target variables in -p output as well.

	* commands.c (chop_commands): Max command lines is USHRT_MAX.
	Set any_recurse as a bitfield.
	* make.h (USHRT_MAX): Define if not set.

2010-10-27  Paul Smith  <psmith@gnu.org>

	* commands.h (struct commands): Rearrange to make better use of
	memory.  Add new recipe_prefix value.

2010-10-26  Paul Smith  <psmith@gnu.org>

	* doc/make.texi (Setting): Document the treatment of
	backslash-newline in variable values.
	* misc.c (collapse_continuations): Do not collapse multiple
	backslash-newlines into a single space.  Fixes Savannah bug #16670.

2010-08-29  Paul Smith  <psmith@gnu.org>

	* doc/make.texi (Implicit Variables): Document LDLIBS and LOADLIBES.
	Fixes Savannah bug #30807.
	(Instead of Execution): Mention that included makefiles are still
	rebuilt even with -n.  Fixes Savannah bug #30762.

	* configure.in: Bump to 3.82.90.

	* make.h: Add trace_flag variable.
	* main.c (switches): Add --trace option.
	(trace_flag): Declare variable.
	* job.c (start_job_command): Show recipe if trace_flag is set.
	(new_job): Show trace messages if trace_flag is set.
	* doc/make.texi (Options Summary): Document the new --trace option.
	* make.1: Add --trace documentation.
	* NEWS: Mention --trace.

	* job.c	(child_error): Show recipe filename/linenumber on error.
	Also show "(ignored)" when appropriate even for signals/coredumps.
	* NEWS: Mention file/linenumber change.

	* main.c (main): Print version info when DB_BASIC is set.

	* job.c (construct_command_argv_internal): If shellflags is not
	set, choose an appropriate default value.  Fixes Savannah bug #30748.

2010-08-27  Eli Zaretskii  <eliz@gnu.org>

	* variable.c (define_automatic_variables) [__MSDOS__ || WINDOWS32]:
	Remove trailing backslashes in $(@D), $(<D), etc., for consistency
	with forward slashes.  Fixes Savannah bug #30795.

2010-08-13  Paul Smith  <psmith@gnu.org>

	* NEWS: Accidentally forgot to back out the sorted wildcard
	enhancement in 3.82, so update NEWS.
	Also add NEWS about the error check for explicit and pattern
	targets in the same rule, added to 3.82.

	* main.c (main): Add "oneshell" to $(.FEATURES) (forgot to add
	this in 3.82!)

	* read.c (parse_file_seq): Fix various errors parsing archives
	with multiple objects in the parenthesis, as well as wildcards.
	Fixes Savannah bug #30612.

2010-08-10  Paul Smith  <psmith@gnu.org>

	* main.c (main): Expand MAKEFLAGS before adding it to the
	environment when re-exec'ing.  Fixes Savannah bug #30723.

2010-08-07  Eli Zaretskii  <eliz@gnu.org>

	* w32/subproc/build.bat: Make all 3 cl.exe compile command lines
	use the same /I switches.  Fixes Savannah bug #30662.

	* function.c (func_shell) [WINDOWS32]: Reset just_print_flag
	around the call to construct_command_argv, so that a temporary
	batch file _is_ created when needed for $(shell).
	Fixes Savannah bug #16362.

2010-08-07 Juan Manuel Guerrero  <juan.guerrero@gmx.de>

	* configh.dos.template (HAVE_STRNCASECMP): Define.

2010-07-28  Paul Smith  <psmith@gnu.org>

	Version 3.82 released.

	* configure.in: Change release version.
	* NEWS: Change the date.

	* read.c (parse_file_seq): Remove GLOB_NOSORT for
	backward-compatibility.  We'll add it back in next release.
	* NEWS: Note it.

2010-07-24  Eli Zaretskii  <eliz@gnu.org>

	* job.c (pid2str) [WINDOWS32]: Fix CPP conditionals for using %Id
	format.

2010-07-18  Paul Smith  <psmith@gnu.org>

	* configure.in: Switch bsd_signal to AC_CHECK_DECLS() to make sure
	we have a declaration.  Fixes Savannah bug #25713 (maybe?)
	* doc/make.texi (Complex Makefile): Cleanup variable assignments.
	(One Shell): New subsection for the .ONESHELL special target.

	Patches by Ozkan Sezer <sezeroz@gmail.com>:

	* misc.c (strncasecmp): Local implementation for systems without.
	* config.h.W32.template (HAVE_STRNICMP): Define on Windows.
	* configure.in: Check for strncasecmp/strncmpi/strnicmp.
	* job.c [WINDOWS32]: Don't define dup2 on Windows.
	(pid2str): Use "%Id" even with MSVC
	(exec_command): Cast to pid_t when calling pid2str().
	* w32/subproc/sub_proc.c [WINDOWS32]: Include config.h first.
	Use stddef.h on MSVC to get intptr_t.
	* w32/subproc/misc.c [WINDOWS32]: Include config.h first.
	* w32/compat/dirent.c [WINDOWS32]: Include config.h first.
	(readdir): Cast -1 to correct type for d_ino.
	* w32/pathstuff.c [WINDOWS32]: Ensure make.h is included first.
	* make.h [WINDOWS32]: Don't prototype alloca() on Windows.
	Add configuration for strncasecmp().
	* main.c (ADD_SIG) [WINDOWS32]: Avoid warnings in MSVC.
	* config.h.W32.template [WINDOWS32]: Don't warn on unsafe
	functions or variables.
	* NMakefile.template [WINDOWS32]: Remove /MACHINE:I386.
	* main.c (clean_jobserver): Cast due to MSVC brokenness.
	(decode_switches): Ditto.
	* vpath.c (construct_vpath_list): Ditto.
	* rule.c (freerule): Ditto.
	* ar.c (ar_glob): Ditto.

2010-07-16  Boris Kolpackov  <boris@codesynthesis.com>

	* misc.c (concat): Fix buffer overrun.

2010-07-12  Paul Smith  <psmith@gnu.org>

	Update copyrights to add 2010.

	* build_w32.bat: Support for MSVC Windows x86_64 builds.
	* job.c: Don't define execve() on MSVC/64bit.
	Patch by Viktor Szakats.  Fixes Savannah bug #27590.

2010-07-12  Eli Zaretskii  <eliz@gnu.org>

	* make.h (alloca) [!__GNUC__]: Don't define prototype.
	(int w32_kill): Use pid_t for process ID argument.
	Fixes Savannah bug #27809.

2010-07-12  Paul Smith  <psmith@gnu.org>

	Integrated new .ONESHELL feature.
	Patch by David Boyce <dsb@boyski.com>.  Modified by me.

	* NEWS: Add a note about the new feature.
	* job.c (is_bourne_compatible_shell): Determine whether we're
	using a standard POSIX shell or not.
	(start_job_command): Accept '-ec' as POSIX shell flags.
	(construct_command_argv_internal): If one_shell is set and we are
	using a POSIX shell, remove "interior" prefix characters such as
	"@", "+", "-".  Also treat "\n" as a special character when
	choosing the slow path, if ONESHELL is set.
	* job.h (is_bourne_compatible_argv): Define the new function.

	* make.h (one_shell): New global variable to remember setting.
	* main.c: Declare it.
	* read.c (record_files): Set it.
	* commands.c (chop_commands): If one_shell is set, don't chop
	commands into multiple lines; just keep one line.

2010-07-09  Eli Zaretskii  <eliz@gnu.org>

	* w32/subproc/sub_proc.c: Include stdint.h.
	(sub_process_t): Use intptr_t for file handles and pid_t for
	process ID.
	(process_pipes, process_init_fd, process_begin): Use intptr_t for
	file handles and pid_t for process ID.  Fixes Savannah bug #27809.
	Patch by Ozkan Sezer <sezeroz@gmail.com>

	* function.c (abspath): Support absolute file names in UNC format.
	Fixes Savannah bug #30312.

	* job.c (pid2str) [WINDOWS32]: Don't use %Id with GCC < 4.x.
	(exec_command) [WINDOWS32]: Use pid2str instead of non-portable
	%Id.

	* main.c (handle_runtime_exceptions): Use %p to print addresses,
	to DTRT on both 32-bit and 64-bit hosts.  Savannah bug #27809.

	* job.c (w32_kill, start_job_command, create_batch_file): Use
	pid_t for process IDs and intptr_t for the 1st arg of
	_open_osfhandle.
	* function.c (windows32_openpipe): Use pid_t for process IDs and
	intptr_t for the 1st arg of _open_osfhandle.
	(func_shell): Use pid_t for process IDs.
	* main.c (main) [WINDOWS32]: Pacify the compiler.
	* config.h.W32.template (pid_t): Add a definition for 64-bit
	Windows builds that don't use GCC.  Fixes Savannah bug #27809.
	Patch by Ozkan Sezer <sezeroz@gmail.com>

2010-07-07  Paul Smith  <psmith@gnu.org>

	* configure.in: Bump to a new prerelease version 3.81.91.

2010-07-06  Paul Smith  <psmith@gnu.org>

	* main.c (main): Set a default value of "-c" for .SHELLFLAGS.
	* NEWS: Mention the new behavior of .POSIX and the new .SHELLFLAGS
	variable.
	* job.c (construct_command_argv): Retrieve the .SHELLFLAGS value
	and pass it to construct_command_argv_internal().
	(construct_command_argv_internal): If .SHELLFLAGS is non-standard
	use the slow path.  Use that value instead of hard-coded "-c".

2010-07-05  Paul Smith  <psmith@gnu.org>

	* implicit.c (pattern_search): lastslash can be const.
	* dir.c (downcase): Remove unused variable.
	* hash.c (hash_init): Cast sizeof for error message.
	* arscan.c (ar_scan): Cast to char* for WINDOWS32.
	(ar_member_touch): Ditto.
	* ar.c (glob_pattern_p): Avoid symbol collision: open -> opened
	* signame.c (strsignal): Ditto: signal -> sig
	* job.c (create_batch_file): Ditto: error -> error_string
	(pid2str): Portably convert a pid_t into a string
	(reap_children): Use it.
	(start_waiting_job): Use it.
	Savannah bug #27809.  Patch by Ozkan Sezer <sezeroz@gmail.com>

2010-07-03  Paul Smith  <psmith@gnu.org>

	* read.c (parse_file_seq): All archive groups must end with ')' as
	the LAST character in a word.  If there is no word ending in ')'
	then it's not an archive group.  Fixes Savannah bug #28525.

2010-07-01  Paul Smith  <psmith@gnu.org>

	* main.c (main): Append optional features using separate calls.
	Not as efficient but not all compilers allow conditionals inside
	macro calls.  Fixes Savannah bug #29244.

2010-01-10  Paul Smith  <psmith@gnu.org>

	* make.h (patheq): Rename strieq() to patheq() for clarity.
	* dir.c (dir_contents_file_exists_p): Use it.

	* dir.c (file_impossible): Convert xmalloc/memset to xcalloc.
	* file.c (enter_file): Ditto.
	* job.c (new_job): Ditto.

2009-12-11  Eli Zaretskii  <eliz@gnu.org>

	* job.c (construct_command_argv_internal) <sh_cmds_dos>
	[WINDOWS32]: Add "echo." and a few more commands that are built
	into cmd.exe.  Fixes Savannah bug #28126.

	* file.c (lookup_file) [HAVE_DOS_PATHS]: Treat '\\' like we do
	with '/'.

2009-11-15  Paul Smith  <psmith@gnu.org>

	Patches for VMS provided by Hartmut Becker <Hartmut.Becker@hp.com>

	* vmsjobs.c (ctrlYPressed) [VMS]: Deal with CTRL-Y.
	(vmsHandleChildTerm) [VMS]: Ditto.
	(astYHandler) [VMS]: Ditto.
	(tryToSetupYAst) [VMS]: Ditto.
	(child_execute_job) [VMS]: Ditto.

	* vmsify.c (trnlog) [VMS]: Fix const errors.
	(vmsify) [VMS]: Ditto.

	* readme.vms [VMS]: Update with notes for 3.82.

	* job.h (comname) [VMS]: Remember the temporary command filename

	* dir.c (vmsify) [VMS]: Fix const errors.
	(vms_hash) [VMS]: Ditto.
	(vmsstat_dir) [VMS]: Ditto.
	(find_directory) [VMS]: Fix case-insensitive option for VMS
	(dir_contents_file_exists_p) [VMS]: Ditto.
	(file_impossible) [VMS]: Ditto.

	* config.h-vms.template (HAVE_FDOPEN) [VMS]: Have it.
	(HAVE_STRCASECMP) [VMS]: Ditto.

	* arscan.c (VMS_get_member_info) [VMS]: Fix timezone computation.
	(ar_scan) [VMS]: Fix const error.

2009-11-12  Boris Kolpackov  <boris@codesynthesis.com>

	* vpath.c (vpath_search, selective_vpath_search): Add index arguments
	which allows the caller to get the index of the matching directory.

	* make.h (vpath_search): Update prototype.

	* remake.c (library_search): Implement linker-compatible library
	search. Use the new VPATH_SEARCH index functionality to keep track
	of the directory index for each match. Select the match with the
	lowest directory index.

	* implicit.c (pattern_search): Pass NULL for the index arguments in
	the VPATH_SEARCH call.

	* doc/make.texi (Directory Search for Link Libraries): Describe the
	new search behavior.

	* NEWS: Add a note about the new behavior.

2009-10-25  Paul Smith  <psmith@gnu.org>

	* AUTHORS, et.al.: Update copyright years.

	* implicit.c (stemlen_compare): Fix qsort() compare bug that
	caused implicit rules with equal stem lengths to be sorted
	indeterminately.

2009-10-24  Paul Smith  <psmith@gnu.org>

	* main.c (usage): Add --eval to the usage string.
	(switches): Add the --eval switch.
	(main): If --eval is given, add them to the simply-expanded variable
	-*-eval-flags-*- (necessary to allow recursion to work properly).
	(define_makeflags): Add -*-eval-flags-*- to MAKEFLAGS.

	* NEWS: Describe the new --eval command line argument.
	* doc/make.texi (Options Summary): Document --eval.

	* dep.h: eval_buffer() returns void.
	* read.c (eval_buffer): Ditto.
	(eval): Ditto.

	* variable.h (define_variable_cname): New macro for constant
	variable names.
	* default.c (set_default_suffixes): Use it.
	* main.c (main): Ditto.
	(handle_non_switch_argument): Ditto.
	(define_makeflags): Ditto.
	* read.c (read_all_makefiles): Ditto.
	* variable.c (define_automatic_variables): Ditto.

	* commands.c (dep_hash_cmp): Avoid casts.
	(dep_hash_1): Ditto.
	(dep_hash_2): Ditto.

2009-10-22  Boris Kolpackov  <boris@codesynthesis.com>

	* read.c (read_all_makefiles): Mark the default makefile dependency
	dontcare.

2009-10-07  Boris Kolpackov  <boris@codesynthesis.com>

	* read.c (do_undefine): Free the expanded variable name.

	* commands.c (dep_hash_cmp, set_file_variables): Move the order-only
	to normal upgrade logic from  dep_hash_cmp to set_file_variables.

2009-10-06  Boris Kolpackov  <boris@codesynthesis.com>

	* dep.h (uniquize_deps): Remove.

	* read.c (uniquize_deps): Merge into set_file_variables in
	commands.c.
	(dep_hash_1, dep_hash_2, dep_hash_cmp): Move to commands.c.

	* commands.c (set_file_variables): Avoid modifying the dep
	chain to achieve uniqueness. Fixes savannah bug 25780.

	* implicit.c (pattern_search): Instead of re-setting all automatic
	variables for each rule we try, just update $*.

2009-10-06  Boris Kolpackov  <boris@codesynthesis.com>

	* variable.h (undefine_variable_in_set): New function declaration.
	(undefine_variable_global): New macro.

	* variable.c (undefine_variable_in_set): New function implementation.

	* read.c (vmodifiers): Add undefine_v modifier.
	(parse_var_assignment): Parse undefine.
	(do_undefine): Handle the undefine directive.
	(eval): Call do_undefine if undefine_v is set.

	* main.c (.FEATURES): Add a keyword to indicate the new feature.

	* doc/make.texi (Undefine Directive): Describe the new directive.

	* NEWS: Add a note about the new directive.

2009-10-05  Boris Kolpackov  <boris@codesynthesis.com>

	* implicit.c (pattern_search): Initialize file variables only
	if we need to parse a rule that requires the second expansion.

2009-10-03  Paul Smith  <psmith@gnu.org>

	* make.h: Include <alloca.h> even on systems where __GNUC__ is
	defined.  Not sure why it was done the other way.
	Requested by David Boyce <dsb@boyski.com>.

2009-09-30  Boris Kolpackov  <boris@codesynthesis.com>

	* dep.h (dep): Add the DONTCARE bitfield.

	* filedef.h (file):Add the NO_DIAG bitfield.

        * read.c (eval_makefile): Set the DONTCARE flag in struct dep,
	not struct file (a file can be a dependency of many targets,
	some don't care, some do).

	* remake.c (update_goal_chain): Propagate DONTCARE from struct
	dep to struct file before updating the goal and restore it
	afterwards.
	(update_file): Don't prune the dependency graph if this target
	has failed but the diagnostics hasn't been issued.
	(complain): Scan the file's dependency graph to find the file
	that caused the failure.
	(update_file_1): Use NO_DIAG instead of DONTCARE to decide
	whether to print diagnostics.

	Fixes Savannah bugs #15110, #25493, #12686, and #17740.

2009-09-28  Paul Smith  <psmith@gnu.org>

	* doc/make.texi (Pattern Intro): Move the match algorithm
	discussion into the "Pattern Match" node.
	(Pattern Match): Expand on the pattern rule matching algorithm.

2009-09-28  Andreas Buening  <andreas.buening@nexgo.de>

	* job.c (construct_command_argv_internal) [OS2]: Don't eat too
	much of the command line on a single pass.

2009-09-28  Boris Kolpackov  <boris@codesynthesis.com>

	* varible.c (create_pattern_var): Insert variables into the
	PATTERN_VARS list in the shortest patterns first order.

	* implicit.c (tryrule): Add STEMLEN and ORDER members. These are
	used to sort the rules.
	(stemlen_compare): Compare two tryrule elements.
	(pattern_search): Sort the rules so that they are in the shortest
	stem first order.

	* main.c (.FEATURES): Add a keyword to indicate the new behavior.

	* doc/make.texi (Pattern-specific Variable Values): Describe the
	new pattern-specific variables application order.
	(Introduction to Pattern Rules): Describe the new pattern rules
	search order.

	* NEWS: Add a note about the new behavior.

2009-09-27  Paul Smith  <psmith@gnu.org>

	* doc/make.texi (Double-Colon): Mention that pattern rules with
	double-colons have a different meaning.  Savannah bug #27497.

2009-09-27  Juan Manuel Guerrero  <juan.guerrero@gmx.de>

	* configh.dos.template: Remove unconditional definition of
	SYS_SIGLIST_DECLARED.
	Include <sys/version.h> because ports of GCC 4.3.0 and later no
	longer include it, so macros like __DJGPP_MINOR__ are no longer
	defined automatically.

	* Makefile.DOS.template (INCLUDES): Use $(prefix) and the
	corresponding variables to define LIBDIR, INCLUDEDIR and LOCALEDIR
	instead of using the hardcoded ones.
	(SUBDIRS): doc subdir added.
	(INFO_DEPS, DVIS): Values changed to 'make.info' and 'make.dvi'.
	(TEXI2HTML, TEXI2HTML_FLAGS): Removed.  Use makeinfo --html to
	create html formated docs.  texi2html may not be ported to DOS.
	(make.info, make.dvi, make.ps, make.html): Make targets depend on
	'make.texi'.
	(.texi.info, .texi, .texi.dvi): Now invoked recursively.  Change
	-I switch to look in ./ instead of ./doc.
	(html): Target depend on html-recursive instead of make_1.html.
	(make_1.html): Removed.
	(mostlyclean-aminfo): Use $(srcdir)/doc instead of ./ as prefix.
	(all-recursive): Allow for more than one subdir in the build
	process.
	(mostlyclean-recursive, clean-recursive, distclean-recursive)
	(maintainer-clean-recursive, check-recursive): Enter in doc/ too.
	(tags-recursive): Allow for more than one subdir in the build
	process.
	(info-recursive, dvi-recursive, ps-recursive, html-recursive): New
	targets.  Enter into doc/ to produce the targets.
	(all-am): $(INFO_DEPS) replaced by info.

2009-09-26  Paul Smith  <psmith@gnu.org>

	* read.c (record_files): Use free_ns() to free struct nameseq.
	(eval): Ditto.

	* rule.c (freerule): Use free_dep_chain().

	* read.c (record_files): Free FILENAMES chain for implicit rules.
	(eval): Static pattern targets go into the string cache.

	* function.c (string_glob): Free NAME in the nameseq chain.

2009-09-25  Boris Kolpackov  <boris@codesynthesis.com>

	* implicit.c (pattern_search): Terminate early if we haven't
	found any rules to try (performance improvement).

2009-09-25  Boris Kolpackov  <boris@codesynthesis.com>

	* implicit.c (pattern_search): Merge three parallel arrays,
	TRYRULES, MATCHES, and CHECKED_LASTSLASH, into one array
	of struct TRYRULE. In the old version the latter two arrays
	had insufficient length.

2009-09-24  Paul Smith  <psmith@gnu.org>

	* implicit.c (pattern_search): Add back support for order-only
	prerequisites for secondary expansion implicit rules, that were
	accidentally dropped.  If we find a "|", enable order-only mode
	and set IGNORE_MTIME on all deps that are seen afterward.
	(pattern_search): Fix memory leaks: for intermediate files where
	we've already set the file variable and pattern variable sets, be
	sure to either save or free them as appropriate.

2009-09-23  Paul Smith  <psmith@gnu.org>

	Rework the way secondary expansion is stored, for efficiency.
	This changes secondary expansion so that ONLY WHEN we know we have
	a possibility of needing secondary expansion, do we defer the
	secondary expansion.  This means more parsing the deps but we use
	a lot less memory (due to the strcache).  Also, this fixes
	Savannah bug #18622.

	* read.c (eval): Don't parse the dep string here anymore.
	(record_files): Take the dep argument as an unparsed string.  If
	secondary expansion is enabled AND the prereq string has a '$' in
	it, then set NEED_2ND_EXPANSION and keep the entire string.
	Otherwise, parse the dep string here to construct the dep list
	with the names in the strcache.

	* misc.c (copy_dep_chain): For NEED_2ND_EXPANSION, we need to
	duplicate the name string (others are in the strcache).

	* implicit.c: Remove struct idep and free_idep_chain(): unused.
	(struct patdeps): New structure to store prereq information.
	(pattern_search): Use the NEED_2ND_EXPANSION flag to determine
	which prerequisites need expansion, and expand only those.

	* file.c (split_prereqs): Break parse_prereqs() into two parts: this
	and enter_prereqs().  split_prereqs() takes a fully-expanded string
	and splits it into a DEP list, handling order-only prereqs.
	(enter_prereqs): This function enters a list of DEPs into the file
	database.  If there's a stem defined, expand any pattern chars.
	(expand_deps): Only try to expand DEPs which have NEED_2ND_EXPANSION
	set.  Use the above functions.
	(snap_deps): Only perform second expansion on prereqs that need it,
	as defined by the NEED_2ND_EXPANSION flag.
	(print_prereqs): New function to print the prereqs
	(print_file): Call print_prereqs() rather than print inline.

	* hash.h (STRING_COMPARE): Take advantage of strcache() by
	comparing pointers.
	(STRING_N_COMPARE): Ditto.
	(ISTRING_COMPARE): Ditto.

	* dep.h (PARSE_FILE_SEQ): New macro to reduce casts.
	(parse_file_seq): Return void*
	* read.c (parse_file_seq): Return void*.
	(eval): Invoke macroized version of parse_file_seq()
	* default.c (set_default_suffixes): Ditto.
	* file.c (split_prereqs): Ditto.
	* function.c (string_glob): Ditto.
	* main.c (main): Ditto.
	* rule.c (install_pattern_rule): Ditto.

	* filedef.h: Add split_prereqs(), enter_prereqs(), etc.

2009-09-16  Paul Smith  <psmith@gnu.org>

	* misc.c (alloc_dep, free_dep): Now that we have xcalloc(),
	convert to macros.
	* dep.h: Create alloc_dep() / free_dep() macros.

	* implicit.c (pattern_search): Take advantage of the new
	parse_file_seq() to add the directory prefix to each prereq.

	* dep.h: Remove multi_glob() and enhance parse_file_seq() to do it
	all.  Avoid reversing chains.  Support adding prefixes.
	* read.c (parse_file_seq): Rewrite to support globbing.  Allow for
	cached/non-cached results.
	(eval): Remove multi_glob() & invoke new parse_file_seq().
	* rule.c (install_pattern_rule): Ditto.
	* main.c (main): Ditto.
	* implicit.c (pattern_search): Ditto.
	* function.c (string_glob): Ditto.
	* file.c (parse_prereqs): Ditto.
	* default.c (set_default_suffixes): Ditto.

	* variable.c (parse_variable_definition): Don't run off the end of
	the string if it ends in whitespace (found with valgrind).

	* commands.c (set_file_variables): Keep space for all targets in
	$? if -B is given (found with valgrind).

2009-09-15  Paul Smith  <psmith@gnu.org>

	* misc.c (concat): Make concat() variadic so it takes >3 arguments.
	(xcalloc): Add new function.
	* make.h: New declarations.

	* ar.c (ar_glob_match): New calling method for concat().
	* main.c (main): Ditto.
	(decode_env_switches): Ditto.
	* read.c (eval_makefile): Ditto.
	(tilde_expand): Ditto.
	(parse_file_seq): Ditto.
	* variable.c (target_environment): Ditto.
	(sync_Path_environment): Ditto.

	* ar.c (ar_glob_match): Use xcalloc().
	* dir.c (file_impossible): Ditto.
	* file.c (enter_file): Ditto.
	* job.c (new_job): Ditto.
	* read.c (parse_file_seq): Ditto.
	* vmsfunctions.c (opendir): Ditto.

2009-09-14  Rafi Einstein  <rafi.einstein@gmail.com>  (tiny patch)

	* w32/subproc/sub_proc.c (process_begin): Check *ep non-NULL
	inside the loop that looks up environment for PATH.

2009-08-31  Eli Zaretskii  <eliz@gnu.org>

	* function.c (windows32_openpipe): Update envp after calling
	sync_Path_environment.

2009-08-02  Paul Smith  <psmith@gnu.org>

	* remake.c (notice_finished_file): Ensure file->cmds is not null
	before looping through them.  Fixes Savannah bug #21824.

	* doc/make.texi (Wildcard Examples): Clarify when objects is
	wildcard-expanded.  Fixes Savannah bug #24509.  Patch by Martin Dorey.
	(Include): Clarify the behavior of -include.
	Fixes Savannah bug #18963.

2009-08-01  Paul Smith  <psmith@gnu.org>

	* doc/make.texi (Catalogue of Rules): Clarify where -c, -F,
	etc. come on the command line.  Fixes Savannah bug #27093.

	* expand.c (expand_argument): If the argument is large enough use
	xmalloc() instead of alloca().  Fixes Savannah bug #27143.

	* variable.c (do_variable_definition): Avoid using alloca() to
	hold values, which can be large.  Fixes Savannah bug #23960.

	* job.c (new_job): Use memmove() instead of strcpy() since both
	pointers are in the same memory block.  Fixes Savannah bug #27148.
	Patch by Petr Machata.

2009-07-29  Ralf Wildenhues  <Ralf.Wildenhues@gmx.de>

        * job.c (construct_command_argv_internal): Add "ulimit" and
        "unset" to the sh_cmds for Unixy shells.

2009-07-29  Ralf Wildenhues  <Ralf.Wildenhues@gmx.de>

        * configure.in: Move side-effects outside AC_CACHE_VAL arguments
        that set make_cv_sys_gnu_glob, so they are also correctly set
        when the cache has been populated before.

2009-07-04  Eli Zaretskii  <eliz@gnu.org>

	* function.c (func_realpath) [!HAVE_REALPATH]: Require the file to
	exist, as realpath(3) does where it's supported.

2006-07-04  Eli Zaretskii  <eliz@gnu.org>

	* function.c (IS_ABSOLUTE, ROOT_LEN): New macros.
	(abspath): Support systems that define HAVE_DOS_PATHS (have
	drive letters in their file names).  Use IS_PATHSEP instead of a
	literal '/' comparison.  Fixes Savannah bug #26886.

2009-06-14  Paul Smith  <psmith@gnu.org>

	* remake.c (update_file_1): Remember the original file we marked
	as updating, so we can clear that flag again.  If we find a target
	via vpath, FILE might change.
	(check_dep): Ditto.  Fixes Savannah bug #13529.
	Patch by Reid Madsen <reid.madsen@tek.com>.

2009-06-13  Paul Smith  <psmith@gnu.org>

	* doc/make.texi (MAKEFILES Variable): Be explicit that files
	included by MAKEFILES cannot give default goals.
	* read.c (eval): If set_default is not set, pass the no-default-goal
	value when we read included makefiles.  Fixes Savannah bug #13401.

	* ar.c (ar_name): Ensure that targets with empty parens aren't
	considered archive member references: archive members must have a
	non-empty "member" string.  Fixes Savannah bug #18435.

	* function.c (string_glob): Rely on multi_glob() to determine
	whether files exist or not.  Remove call to file_exists_p() which
	is not always correct.  Fixes Savannah bug #21231.
	* read.c (multi_glob): Add a new argument EXISTS_ONLY; if true
	then only files that really exist will be returned.
	* dep.h: Add new argument to multi_glob().
	* rule.c (install_pattern_rule): Ditto.
	* read.c (eval): Ditto.
	* main.c (main): Ditto.
	* implicit.c (pattern_search): Ditto.
	* file.c (parse_prereqs): Ditto.
	* default.c (set_default_suffixes): Ditto.

2009-06-09  Paul Smith  <psmith@gnu.org>

	* commands.c (set_file_variables): If always_make_flag is set,
	always add the prereq to $?.  Fixes Savannah bug #17825.

	* remake.c (update_file_1): When rebuilding deps of FILE, also try
	to rebuild the deps of all the also_make targets for that file.
	Fixes Savannah bug #19108.

	* implicit.c (pattern_search): Undo test for is_target, added by
	BorisK on 21 Sep 2004.  This goes against step 5c in the "Implicit
	Rule Search Algorithm".  Fixes Savannah bug #17752.

	* main.c (clean_jobserver): Clear the jobserver_fds options and
	set job_slots to the default when we clean up.
	(define_makeflags): Return the new MAKEFLAGS value.
	(main): Reset MAKEFLAGS in the environment when we re-exec.
	Fixes Savannah bug #18124.

2009-06-08  Paul Smith  <psmith@gnu.org>

	* read.c (eval): Collapse continuations post-semicolon on target-
	specific variables.  Fixes Savannah bug #17521.

2009-06-07  Paul Smith  <psmith@gnu.org>

	* job.c (reap_children): For older systems without waitpid() (are
	there any of these left?) run wait(2) inside EINTRLOOP to handle
	EINTR errors.  Fixes Savannah bug #16401.

	* (various): Debug message cleanup.  Fixes Savannah bug #16469.

	* main.c: Fix bsd_signal() typedef.  Fixes Savannah bug #16473.

	* file.c (snap_deps): Set SNAPPED_DEPS at the start of snapping,
	not the end, to catch second expansion $(eval ...) defining new
	target/prereq relationships during snap_deps.
	Fixes Savannah bug #24622.

	* read.c (record_files): The second-expansion "f->updating" hack
	was not completely correct: if assumed that the target with
	commands always had prerequisites; if one didn't then the ordering
	was messed up.  Fixed for now to use f->updating to decide whether
	to preserve the last element in the deps list... but this whole
	area of constructing and reversing the deps list is too confusing
	and needs to be reworked.  Fixes Savannah bug #21198.

2009-06-06  Paul Smith  <psmith@gnu.org>

	* hash.c (hash_insert): Remove useless test for NULL.
	Fixes Savannah bug #21823.

	* make.h: Move SET_STACK_SIZE determination to make.h.
	* main.c (main): New global variable, STACK_LIMIT, holds the
	original stack limit when make was started.
	* job.c (start_job_command): Reset the stack limit, if we changed it.
	Fixes Savannah bug #22010.

	* remake.c (check_dep): Only set the target's state to not-started
	if it's not already running.  Found this while testing -j10 builds
	of glibc: various targets were being rebuilt multiple times.
	Fix from Knut St. Osmundsen; fixes a problem reported in Savannah
	bug #15919.

	* read.c (multi_glob): Don't pass GLOB_NOCHECK to glob(3); instead
	handle the GLOB_NOMATCH error.  This is to work around Sourceware.org
	Bugzilla bug 10246.

2009-06-04  Paul Smith  <psmith@gnu.org>

	* read.c (eval): Skip initial whitespace (ffeed, vtab, etc.)

	* maintMakefile: Modify access of config and gnulib Savannah
	modules to use GIT instead of CVS.

	* main.c (main): Initialize the LENGTH field in SHELL_VAR.
	Fixes Savannah bug #24655.

	* read.c (eval_buffer): Don't dereference reading_file if it's NULL;
	this can happen during some invocations of $(eval ...) for example.
	Fixes Savannah bug #24588.  Patch by Lars Jessen <ljessen@ljessen.dk>

2009-06-02  Paul Smith  <psmith@gnu.org>

	* configure.in: Check for fileno()
	* read.c (eval_makefile): If fileno() is available, set CLOSE_ON_EXEC
	for the makefile file so invocations of $(shell ...) don't inherit it.
	Fixes Savannah bug #24277.

2009-06-01  Paul Smith  <psmith@gnu.org>

	* main.c (main): The previous fix for .DEFAULT_GOAL had issues;
	expansion was handled incorrectly.  Rework the default goal
	handling to save the variable only.  Remove default_goal_file and
	default_goal_name.
	* read.c (eval): Check default_goal_var, not default_goal_name.
	* read.c (record_target_var): Don't check default_goal_file here.

2009-05-31  Paul Smith  <psmith@gnu.org>

	* main.c (main): Expand the .DEFAULT_GOAL variable before using
	it, and if the multi_glob() returns nothing (say it expanded to
	nothing but spaces) then don't crash.  Fixes Savannah bug #25697.

	* doc/make.texi (Quick Reference): Add $(if ..), $(or ..), and
	$(and ..) to the reference.  Fixes Savannah bug #25694.

	* make.1: Be clear that some recipes will be executed even with -n.
	* doc/make.texi: Ditto.  Fixes Savannah bug #25460.

	* doc/make.texi (Override Directive): Make more clear how
	overrides and appends interact.
	Elucidates part of Savannah bug #26207.

	* read.c (record_target_var): Don't reset the origin on
	target-specific variables; try_variable_definition() will handle
	this correctly.  Fixes Savannah bug #26207.

	* maintMakefile (do-po-update): Copy PO files into $(top_srcdir).
	Fixes Savannah bug #25712.

	* implicit.c (pattern_search): Keep a pointer to the beginning of
	the filename and save that instead of the constructed pointer.
	Fixes Savannah bug #26593.
	Patch by Mark Seaborn <mrs@mythic-beasts.com>

2009-05-30  Paul Smith  <psmith@gnu.org>

	* doc/make.texi (Multi-Line): Add a description of the new abilities
	of define/endef.  Rename "Sequences" to "Multi-Line" and fix some
	"command sequence" vs. "recipe" syntax.
	* read.c (do_define): Modify to allow assignment tokens (=, :=, etc.)
	after a define, to create variables with those flavors.

2009-05-25  Paul Smith  <psmith@gnu.org>

	Reworked the parser for variable assignments to allow multiple
	modifiers, and in any order.  Also allows variable and
	prerequisites to be modifier names ('export', 'private', etc.)

	* NEWS: Add notes about user-visible changes.

	* read.c (struct vmodifiers): Remember what modifiers were seen.
	(parse_var_assignment): New function to parse variable assignments.
	(eval): Call the new function.  Handle variable assignments earlier.

	* variable.c (parse_variable_definition): Only parse; don't create var.
	(assign_variable_definition): Call parse, then create the var.

2009-05-24  Paul Smith  <psmith@gnu.org>

	* doc/make.texi: Fix the ISBN for the GNU make manual.  Incorrect
	value noticed by Hans Stol <hans.stol@nc3a.nato.int>.

2009-03-14  Eli Zaretskii  <eliz@gnu.org>

	* w32/pathstuff.c (convert_Path_to_windows32): Fix last change.
	Fixes Savannah bug #25412.

	* w32/subproc/sub_proc.c <top level>: Update Copyright years.  Add
	prototype for xmalloc.
	(find_file): Accept 3 arguments PATH_VAR, FULL_FNAME, and FULL_LEN
	instead of an LPOFSTRUCT pointer.  Use xmalloc instead of malloc.
	Loop over an array of extensions, instead of duplicating the same
	code inline.  Use SearchPath followed by CreateFile, instead of
	the obsolete OpenFile.  Fixes Savannah bug #17277.
	(process_begin): Find $(PATH) in `envp', and pass a pointer to it
	to `find_file'.  Fixes Savannah bug #25662.

2009-03-07  Eli Zaretskii  <eliz@gnu.org>

	* function.c (func_shell): Don't close pipedes[1] if it is -1.
	Fixes Savannah bug #20495.

2009-02-28  Ralf Wildenhues  <address@hidden>

        * doc/make.texi (Instead of Execution): Document interaction of
        -t with phony targets.

2009-02-23  Ramon Garcia  <ramon.garcia.f@gmail.com>

	Introduce a new keyword "private" which applies to target-specific
	variables and prevents their values from being inherited.

	* variable.h (struct variable): Add private_var flag to each variable.
	Add a flag to specify which list entry switches to the parent target.
	* variable.c (define_variable_in_set): Initialize private_var flag.
	(lookup_variable): Skip private variables in parent contexts.
	(initialize_file_variables): Set next_is_parent appropriately.
	(print_variable): Show the private_var flag.
	* read.c (eval): Recognize the private keyword.
	(record_target_var): Set private_var.
	* doc/make.texi (Suppressing Inheritance): Add documentation.

2008-10-26  Paul Smith  <psmith@gnu.org>

	* configure.in: Check for strndup().
	* misc.c (xstrndup): Rename savestring to xstrndup.  Use strndup
	if it's available.
	* make.h: Rename savestring to xstrndup.
	* commands.c (chop_commands): Ditto.
	* function.c (func_foreach): Ditto.
	* read.c (eval, record_files): Ditto.
	* variable.c (define_variable_in_set): Ditto.

2008-09-30  Eli Zaretskii  <eliz@gnu.org>

	* build_w32.bat (GCCBuild): Use "-gdwarf-2 -g3" instead of
	"-gstabs+ -ggdb3".

	* w32/subproc/build.bat (GCCBuild): Likewise.

2008-09-30  David Russo  <d-russo@ti.com>  (tiny change)

	* job.c (construct_command_argv_internal): Avoid extra backslash
	in batch-mode Unixy shells.  Under DB_JOBS, display the contents
	of the batch file.

2008-05-31  Eli Zaretskii  <eliz@gnu.org>

	* README.W32.template: Remove obsolete text about non-support for
	-jN without Unixy shell.  Remove obsolete text about not supplying
	Visual Studio project files (we do supply them).  Modify text to
	prefer GCC builds to MSC builds.

2008-04-02  Ralf Wildenhues  <Ralf.Wildenhues@gmx.de>

	* doc/make.texi (Empty Targets): Fix typo.

2008-03-27  Paul Smith  <psmith@gnu.org>

	Fix Savannah bug #22379:
	* ar.c (ar_glob_match): Zero the allocated structure.
	* read.c (parse_file_seq): Ditto.

2008-03-08  Brian Dessent  <brian@dessent.net>

	* maintMakefile: Update Translation Project location.

2008-01-26  Eli Zaretskii  <eliz@gnu.org>

	* variable.c (target_environment): Don't use shell_var if its
	`value' field is NULL.

2007-12-22  Eli Zaretskii  <eliz@gnu.org>

	Suggested by Juan Manuel Guerrero <juan.guerrero@gmx.de>:

	* Makefile.DOS.template (info_TEXINFOS): Remove unused variable.
	(TEXINFOS): Value changed to `doc/make.texi'.
	(.SUFFIXES): Use .texi instead of .texinfo.
	(make.info, make.dvi): Depend on doc/make.texi.
	(.texi.info): New target, instead of ".texinfo.info".  Change -I
	switch to $(MAKEINFO) to look in doc/.  Use --no-split.
	(.texi): New target, instead of ".texinfo".  Change -I switch to
	$(MAKEINFO) to look in doc/.  Use --no-split.
	(.texi.dvi): New target, instead of ".texinfo.dvi".  Change -I
	switch to $(MAKEINFO) to look in doc/.
	(install-info-am, uninstall-info): Don't look for "*.i[0-9]" and
	"*.i[0-9][0-9]" (due to --no-split above).
	(noinst_TEXINFOS, TEXI2HTML, TEXI2HTML_FLAGS): New variables.
	(html, make_1.html): New targets.
	(.PHONY): Add "html".
	(.SUFFIXES): Add .html.

2007-12-22  Juan Manuel Guerrero  <juan.guerrero@gmx.de>  (tiny change)

	* configh.dos.template [__DJGPP__]: Replace HAVE_SYS_SIGLIST with
	HAVE_DECL_SYS_SIGLIST.

	* job.c (child_execute_job): Remove __MSDOS__ because MSDOS/DJGPP
	build does not use child_execute_job.

	* variable.c (define_automatic_variables) [__MSDOS__]: Always
	export the SHELL environment variable to the child.

2007-12-22  Eli Zaretskii  <eliz@gnu.org>

	* config.h.W32: Include sys/types.h.
	[!_PID_T_] (pid_t): Define only if not already defined by sys/types.h.

	* vpath.c (construct_vpath_list) [HAVE_DOS_PATHS]: Support VPATH
	values that use `:' in drive letters, when PATH_SEPARATOR_CHAR is
	also `:'.

2007-11-04  Paul Smith  <psmith@gnu.org>

	* doc/make.texi: Convert references to "commands", "command
	lines", and "command script" to "recipe".
	* NEWS: Ditto.
	* commands.c, file.c, job.c, remake.c, read.c, variable.c, main.c:
	Ditto.

2007-10-27  Bruno Haible  <bruno@clisp.org>

	* remake.c (f_mtime): Print time difference values between 100 and
	ULONG_MAX in fixed-point notation rather than in exponention notation.

2007-10-12  Eli Zaretskii  <eliz@gnu.org>

	* variable.c (do_variable_definition): Allow $(SHELL) to expand to
	a more complex value than a simple shell: if it's not a default
	shell now then expand it and see if is a default shell then.

2007-10-10  Eli Zaretskii  <eliz@gnu.org>

	* dir.c (find_directory) [WINDOWS32]: Remove trailing slashes from
	pathnames, with const strings.
	* build_w32.bat [WINDOWS32]: If no config.h.W32 exists, create one
	from the template (used for building from CVS, not a dist).

2007-10-10  Paul Smith  <psmith@gnu.org>

	* make.h: Add a prototype for w32_kill() (change suggested by
	Yongwei Wu <wuyongwei@gmail.com>).

2007-09-21  Eli Zaretskii  <eliz@gnu.org>

	* w32/pathstuff.c (convert_Path_to_windows32): Handle quoted
	directories in Path.

2007-09-12  Paul Smith  <psmith@gnu.org>

	* doc/make.texi: Applied wording cleanups from Savannah patch #6195.
	Provided by Diego Biurrun <diego@biurrun.de>
	(Complex Makefile): Remove .PHONY setting for tar: patch #6196.
	Provided by Diego Biurrun <diego@biurrun.de>

2007-09-11  Paul Smith  <psmith@gnu.org>

	* doc/make.texi (Special Variables): Moved this into the "How to
	Use Variables" chapter.  Added a table entry for .RECIPEPREFIX.
	(MAKEFILE_LIST) No longer a section; this was added into the
	"Special Variables" section.
	(Rule Introduction): Reference .RECIPEPREFIX.
	(Simple Makefile): Ditto.
	(Rule Syntax): Ditto.
	(Command Syntax): Ditto.
	(Error Messages): Ditto.

2007-09-10  Paul Smith  <psmith@gnu.org>

	* commands.c (print_commands): Don't print an extra line in the
	command scripts.  Prefix the command scripts with cmd_prefix, not \t.

	* read.c (construct_include_path): Add the full string to the cache; we
	were chopping the last char.

	* NEWS: Announce the .RECIPEPREFIX special variable.
	* variable.c (lookup_special_var): Rename from handle_special_var().
	(lookup_variable): Call the new name.
	(set_special_var): New function: handle setting of special variables.
	When setting .RECIPEPREFIX, reset the cmd_prefix global variable.
	(do_variable_definition): Call it.
	* make.h (RECIPEPREFIX_DEFAULT): Define the default command prefix char.
	(RECIPEPREFIX_NAME): Define the command prefix special variable name.
	* main.c (main): Create the .RECIPEPREFIX special variable.
	* read.c (eval): Remove the cmd_prefix characters from the command
	scripts here, so they're not stored in the commands array at all,
	rather than waiting and stripping them out during command construction.
	* job.c (construct_command_argv_internal): Don't skip cmd_prefix here.

2007-08-15  Paul Smith  <psmith@gnu.org>

	* doc/make.texi (GNU Free Documentation License): The fdl.texi
	file has had the section info removed, so add some to make.texi
	before we include it.

2007-08-15  Icarus Sparry  <savannah@icarus.freeuk.com>

	* remake.c (check_dep): Reset the target state for intermediate
	files.  They might have been considered before but not updated
	then (order-only for example) but they will be this time.
	Fixes Savannah bug #'s 3330 and 15919.

2007-07-21  Eli Zaretskii  <eliz@gnu.org>

	Fix Savannah bug #20549:
	* function.c (func_shell): Call construct_command_argv with zero
	value of FLAGS.
	* job.c (construct_command_argv_internal): New argument FLAGS; all
	callers changed.
	[WINDOWS32]: If FLAGS has the COMMANDS_RECURSE bit set, ignore
	just_print_flag.
	* job.h (construct_command_argv_internal): Update prototype.

2007-07-13  Paul Smith  <psmith@gnu.org>

	* file.c (expand_deps): Use variable_buffer as the start of the
	buffer, not the original pointer (in case it was reallocated).
	Fix suggested by Rafi Einstein <rafi.einstein@formalism-labs.com>.
	Fixes Savannah bug #20452.

2007-07-04  Paul Smith  <psmith@gnu.org>

	* (ALL FILES): Update to GPLv3.
	* (ALL FILES): Update copyright for 2007.

	* main.c (print_version): Move the host type info to the second line.

2007-06-29  Thiemo Seufer  <ths@mips.com>

	* maintMakefile: Update Translation Project location.

2007-06-13  Paul Smith  <psmith@gnu.org>

	* doc/make.texi (Reading Makefiles): "Expansion of deferred" ->
	"Expansion of a deferred"
	Fixes Savannah bug #20018.

	* expand.c (variable_expand_for_file): Preserve the value of
	reading_file rather than setting it to 0 at the end.
	Fixes Savannah bug #20033.

2007-05-11  Paul Smith  <psmith@gnu.org>

	* job.c (new_job): Add debug info to specify where make found the
	command script it is running to build a target.
	Fixes Savannah bug #18617.

	* default.c (default_suffixes,default_suffix_rules,default_variables):
	Add support for Objective C.  Fixes Savannah bug #16389.
	Based on a patch provided by Peter O'Gorman <peter@pogma.com>.

	* function.c (func_lastword): Initialize p.

	* doc/make.texi (Eval Function, Implicit Variables, Special Targets):
	Doc fixes noticed by Bob <twobanjobob@sbcglobal.net>.  Patch from
	Dave Korn <dave.korn@artimi.com>

2007-05-08  Paul Smith  <psmith@gnu.org>

	Fix Savannah bug #19656:

	* configure.in: Check for strcasecmp(), strcmpi(), and stricmp().

	* make.h: Change all case-insensitive string compares to use
	strcasecmp() (from POSIX).  If we don't have that but do have one
	of the others, define strcasecmp to be one of those instead.  If
	we don't have any, declare a prototype for our own version.

	* misc.c (strcasecmp): Use this if we can't find any native
	case-insensitive string comparison function.
	* vmsfunctions.c: Remove strcmpi(); we'll use misc.c:strcasecmp().
	* main.c (find_and_set_default_shell): Use strcasecmp() instead of
	strcmpi().
	* job.c (_is_unixy_shell, construct_command_argv_internal): Use
	strcasecmp() instead of stricmp().
	* hash.h (ISTRING_COMPARE, return_ISTRING_COMPARE): Use strcasecmp()
	instead of strcmpi().
	* acinclude.m4: Remove the strcasecmp() check from here.

2007-03-21  Paul Smith  <psmith@gnu.org>

	* configure.in: Don't turn on case-insensitive file system support
	if --disable-... is given.  Fixes Savannah bug #19348.

2007-03-19  Paul Smith  <psmith@gnu.org>

	* ALL: Use the strcache for all file name strings, or other
	strings which we will never free.  The goal is to save memory by
	avoiding duplicate copies of strings.  However, at the moment this
	doesn't save much memory in most situations: due to secondary
	expansion we actually save prerequisite lists twice (once before
	the secondary expansion, and then again after it's been parsed
	into individual file names in the dep list).  We will resolve this
	in a future change, by doing the parsing up-front for targets
	where secondary expansion is not set.

	Moving things into the strcache also allows us to use const
	pointers in many more places.

2007-01-03  Paul Smith  <psmith@gnu.org>

	* make.h (ENULLLOOP): Reset errno after each failed invocation of
	the function, not just the first.  Fixes Savannah bug #18680.

2006-11-18  Paul Smith  <psmith@gnu.org>

	* strcache.c (strcache_add_len): Don't allocate a new buffer
	unless the string is not already nil-terminated.  Technically this
	is a violation of the standard, since we may be passed an array
	that is not long enough to test one past.  However, in make this
	is never true since we only use nil-terminated strings or
	sub-strings thereof.

	* read.c (eval, do_define): Use cmd_prefix instead of '\t'.

	* main.c: New global cmd_prefix, defaults to '\t'.
	* job.c (construct_command_argv_internal): Use cmd_prefix instead
	of '\t'.

	* dir.c: Constified.
	(dir_contents_file_exists_p): Check for an error return	from
	readdir(), just in case.

	* commands.c: Constified.
	* default.c: Constified.
	* expand.c: Constified.
	* function.c: Partial constification.
	* variable.c: Partial constification.
	* vmsify.c: Constification.  Hard to test this but I hope I didn't
	screw it up!
	* vpath.c: Partial constification.
	* w32/pathstuff.c: Partial constification.

2006-11-16  Eli Zaretskii  <eliz@gnu.org>

	* main.c (main) [HAVE_DOS_PATHS]: Treat DOS style argv[0] with
	backslashes and drive letters as absolute.

2006-10-22  Paul Smith  <psmith@gnu.org>

	* main.c (struct command_switch): Use const and void*.

2006-10-21  Paul Smith  <psmith@gnu.org>

	* ar.c: Constified.
	* arscan.c: Constified.

2006-09-30  Paul Smith  <psmith@gnu.org>

	* doc/make.texi (MAKEFILE_LIST Variable): Modify reference to
	point to lastword since the example was updated.
	Fixes Savannah bug #16304.
	(Secondary Expansion): Correct example description.
	Fixes Savannah bug #16468.
	(Makefile Contents): Clarify that comments cannot appear within
	variable references or function calls.
	Fixes Savannah bug #16577.
	(Special Targets): Clarify how .NOTPARALLEL works in recursion.
	Fixes Savannah bug #17701.
	Reported by Ralf Wildenhues <Ralf.Wildenhues@gmx.de>:
	(Prerequisite Types): Added an example of using	order-only
	prerequisites.  Fixes Savannah bug #17880.
	(Rule Syntax): "lise" -> "list"
	(Multiple Rules): ... -> @dots{}
	(Splitting Lines): ditto.

	* remake.c (update_file_1): Prereqs that don't exist should be
	considered changed, for the purposes of $?.
	Fixes Savannah bug #16051.

	* make.1: Remove extraneous "+".
	Fixes Savannah bug #16652.

2006-09-06  Paul D. Smith  <psmith@gnu.org>

	* configure.in: Include sys/types.h when checking for sys/wait.h.

2006-08-18  Eli Zaretskii  <eliz@gnu.org>

	* configure.in (PATH_SEPARATOR_CHAR): Define to the value of
	$PATH_SEPARATOR.

	* make.h (PATH_SEPARATOR_CHAR): Define only if still undefined.
	Normally, it is defined in config.h.

	* config/dospaths.m4 <ac_cv_dos_paths>: Define to yes on Cygwin as
	well.

	* job.c (construct_command_argv_internal) [HAVE_DOS_PATHS]: Define
	sh_chars_sh for Windows platforms that emulate Unix.

2006-05-07  Paul D. Smith  <psmith@gnu.org>

	* README.OS2.template: Updates provided by Andreas Buening
	<andreas.buening@nexgo.de>.

2006-04-30  Paul D. Smith  <psmith@gnu.org>

	* make.h: Include <direct.h> if HAVE_DIRECT_H.
	* config.h.W32.template (HAVE_DIRECT_H): Set it if it's available.

2006-04-26  Paul D. Smith  <psmith@gnu.org>

	* README.cvs: Add a reminder to notify the GNU translation robot.

	* doc/make.texi: Change @direcategory (requested by Karl Berry).

2006-04-20  Paul D. Smith  <psmith@gnu.org>

	* maintMakefile (po-check): Use Perl instead of grep -E, for systems
	that don't have extended grep.
	(cvsclean): Use $(PERL) instead of perl.

2006-04-09  Paul D. Smith  <psmith@gnu.org>

	* maintMakefile: Add some extra warning options (GCC 4.1 only?)

	* expand.c, implicit.c, main.c, read.c: Rename variables so that
	inner-scope variables don't mask outer-scope variables.

	* ar.c, arscan.c, commands.c, default.c, dir.c, expand.c, file.c:
	* function.c, getloadavg.c, implicit.c, job.c, main.c, misc.c, read.c:
	* remake.c, remote-cstms.c, rule.c, strcache.c, variable.c:
	* vmsfunctions.c, vmsify.c, vpath.c: Remove all casts of returned
	values from memory allocation functions: they return void* and so
	don't need to be cast.  Also remove (char *) casts of arguments to
	xrealloc().

	* configure.in: Remove checks for memcpy/memmove/strchr.

	* make.h: Remove bcmp/bcopy/bzero/strchr/strrchr macros.

	* ar.c, arscan.c, commands.c, dir.c: Convert all bzero/bcopy/bcmp
	calls to memset/memcpy/memmove/memcmp calls.
	* expand.c, file.c, function.c, getloadavg.c, implicit.c: Ditto.
	* job.c, main.c, misc.c, read.c, remake.c, rule.c: Ditto.
	* variable.c, vpath.c: Ditto.

	* make.h (EXIT_FAILURE): Should be 1, not 0.

2006-04-06  Paul D. Smith  <psmith@gnu.org>

	* configure.in: Removed AM_C_PROTOTYPES.  Starting now on we
	require an ISO C 1989 standard compiler and runtime library.

	* Makefile.am: Remove the ansi2knr feature.

	* make.h: Remove the PARAMS() macro definition and all uses of it.

	* amiga.h, ar.c, arscan.c: Remove all uses of the PARAMS() macro.
	* commands.c, commands.h, config.h-vms.template: Ditto.
	* dep.h, dir.c, expand.c, filedef.h, function.c: Ditto.
	* implicit.c, job.c, job.h, main.c, read.c, remake.c: Ditto.
	* rule.c, rule.h, variable.h, vmsdir.h, vmsjobs.c, vpath.c: Ditto.

	* NEWS: Update.

2006-04-01  Paul D. Smith  <psmith@gnu.org>

	Version 3.81 released.

	* NEWS: Updated for 3.81.

	* README.cvs: Mention that vpath builds are not supported out of
	CVS.  Fixes Savannah bug #16236.
	Remove update of make.texi from the list of things to do; we use
	version.texi now.

2006-03-26  Paul D. Smith  <psmith@gnu.org>

	* doc/make.texi: Clean up licensing.  Use @copying and version.texi
	support from automake, as described in the Texinfo manual.

2006-03-25  Eli Zaretskii  <eliz@gnu.org>

	* implicit.c (pattern_search) [HAVE_DOS_PATHS]: Don't compare b
	with lastslash, since the latter points to filename, not to
	target.
	* job.c (construct_command_argv_internal) [HAVE_DOS_PATHS]:
	Declare and define sh_chars_sh[].

2006-03-23  Paul D. Smith  <psmith@gnu.org>

	* configure.in: Look for build.sh.in in $srcdir so it will be
	built for remote configurations as well.

	* Makefile.am: Make sure to clean up build.sh during distclean.
	Fixes Savannah bug #16166.

	* misc.c (log_access): Takes a const char *.
	* function.c (fold_newlines): Takes an unsigned int *.
	Both fixes for Savannah bug #16170.

2006-03-22  Boris Kolpackov  <boris@kolpackov.net>

	* implicit.c (pattern_search): Call set_file_variables only
	if we have prerequisites that need second expansion. Fixes
	Savannah bug #16140.

2006-03-19  Paul D. Smith  <psmith@gnu.org>

	* remake.c (update_file): Add alloca(0) to clean up alloca'd
	memory on hosts that don't support it directly.

	* README.cvs: Add information on steps for making a release (to
	make sure I don't forget any).

	* main.c (clean_jobserver): Move jobserver cleanup code into a new
	function.
	(die): Cleanup code was removed from here; call the new function.
	(main): If we are re-execing, clean up the jobserver first so we
	don't leak file descriptors.
	Reported by Craig Fithian <craig.fithian@citigroup.com>

2006-03-17  Paul D. Smith  <psmith@gnu.org>

	* maintMakefile (do-po-update): Rewrite this rule to clean up and
	allow multiple concurrent runs.
	Patch from Joseph Myers <joseph@codesourcery.com>

2006-03-17  Boris Kolpackov  <boris@kolpackov.net>

	* dep.h (struct dep): Add the stem field.
	* misc.c (alloc_dep, free_dep): New functions.
	(copy_dep_chain): Copy stem.
	(free_dep_chain): Use free_dep.
	* read.c (record_files): Store stem in the dependency line.
	* file.c (expand_deps): Use stem stored in the dependency line. Use
	free_dep_chain instead of free_ns_chain.
	* implicit.c (pattern_search): Use alloc_dep and free_dep.
	* read.c (read_all_makefiles, eval_makefile, eval): Ditto.
	* main.c (main, handle_non_switch_argument): Ditto.
	* remake.c (check_dep): Ditto.
	* rule.c (convert_suffix_rule, freerule): Ditto.

2006-03-14  Paul D. Smith  <psmith@gnu.org>

	* expand.c (variable_append): Instead of appending everything then
	expanding the result, we expand (or not, if it's simple) each part
	as we add it.
	(allocated_variable_append): Don't expand the final result.
	Fixes Savannah bug #15913.

2006-03-09  Paul Smith  <psmith@gnu.org>

	* remake.c (update_file_1): Revert the change of 3 Jan 2006 which
	listed non-existent files as changed.  Turns out there's a bug in
	the Linux kernel builds which means that this change causes
	everything to rebuild every time.  We will re-introduce this fix
	in the next release, to give them time to fix their build system.
	Fixes Savannah bug #16002.
	Introduces Savannah bug #16051.

	* implicit.c (pattern_search) [DOS_PATHS]: Look for DOS paths if
	we *don't* find UNIX "/".
	Reported by David Ergo <david.ergo@alterface.com>

2006-03-04  Eli Zaretskii  <eliz@gnu.org>

	* variable.c (do_variable_definition) [WINDOWS32]: Call the shell
	locator function find_and_set_default_shell if SHELL came from the
	command line.

2006-02-20  Paul D. Smith  <psmith@gnu.org>

	* variable.c (merge_variable_set_lists): It's legal for *setlist0
	to be null; don't core in that case.

2006-02-19  Paul D. Smith  <psmith@gnu.org>

	* commands.c (set_file_variables): Realloc, not malloc, the static
	string values to avoid memory leaks.

	* expand.c (recursively_expand_for_file): Only set reading_file to
	an initialized value.

	* implicit.c (pattern_search): We need to make a copy of the stem
	if we get it from an intermediate dep, since those get freed.

	* file.c (lookup_file) [VMS]: Don't lowercase special targets that
	begin with ".".
	(enter_file) [VMS]: Ditto.
	Patch provided by Hartmut Becker <Hartmut.Becker@hp.com>.

2006-02-24  Eli Zaretskii  <eliz@gnu.org>

	* job.c (construct_command_argv_internal): Fix last change.

	* w32/subproc/sub_proc.c (process_pipe_io): Make dwStdin,
        dwStdout, and dwStderr unsigned int: avoids compiler warnings in
        the calls to _beginthreadex.

	* expand.c (recursively_expand_for_file): Initialize `save' to
        prevent compiler warnings.

2006-02-18  Eli Zaretskii  <eliz@gnu.org>

        * job.c (construct_command_argv_internal): Don't create a temporary
	script/batch file if we are under -n.  Call _setmode to switch the
	script file stream to text mode.

2006-02-17  Paul D. Smith  <psmith@gnu.org>

	* variable.c (merge_variable_set_lists): Don't try to merge the
	global_setlist.  Not only is this useless, but it can lead to
	circularities in the linked list, if global_setlist->next in one
	list gets set to point to another list which also ends in
	global_setlist.
	Fixes Savannah bug #15757.

2006-02-15  Paul D. Smith  <psmith@gnu.org>

	Fix for Savannah bug #106.

	* expand.c (expanding_var): Keep track of which variable we're
	expanding.  If no variable is being expanded, it's the same as
	reading_file.
	* make.h (expanding_var): Declare it.
	* expand.c (recursively_expand_for_file): Set expanding_var to the
	current variable we're expanding, unless there's no file info in
	it (could happen if it comes from the command line or a default
	variable).  Restore it before we exit.
	* expand.c (variable_expand_string): Use the expanding_var file
	info instead of the reading_file info.
	* function.c (check_numeric): Ditto.
	(func_word): Ditto.
	(func_wordlist): Ditto.
	(func_error): Ditto.
	(expand_builtin_function): Ditto.
	(handle_function): Ditto.

2006-02-14  Paul D. Smith  <psmith@gnu.org>

	* read.c (eval): Even if the included filenames expands to the
	empty string we still need to free the allocated buffer.

	* implicit.c (pattern_search): If we allocated a variable set for
	an impossible file, free it.
	* variable.c (free_variable_set): New function.
	* variable.h: Declare it.

	* read.c (read_all_makefiles): Makefile names are kept in the
	strcache, so there's never any need to alloc/free them.
	(eval): Ditto.

	* main.c (main): Add "archives" to the .FEATURES variable if
	archive support is enabled.
	* doc/make.texi (Special Variables): Document it.

2006-02-13  Paul D. Smith  <psmith@gnu.org>

	* implicit.c (pattern_search): Add checking for DOS pathnames to
	the pattern rule target LASTSLASH manipulation.
	Fixes Savannah bug #11183.

2006-02-11  Paul D. Smith  <psmith@gnu.org>

	* (ALL FILES): Updated copyright and license notices.

2006-02-10  Paul D. Smith  <psmith@gnu.org>

	A new internal capability: the string cache is a read-only cache
	of strings, with a hash table interface for fast lookup.  Nothing
	in the cache will ever be freed, so there's no need for reference
	counting, etc.  This is the beginning of a full solution for
	Savannah bug #15182, but for now we only store makefile names here.

	* strcache.c: New file.  Implement a read-only string cache.
	* make.h: Add prototypes for new functions.
	* main.c (initialize_global_hash_tables): Initialize the string cache.
	(print_data_base): Print string cache stats.
	* read.c (eval_makefile): Use the string cache to store makefile
	names.  Rewrite the string allocation to be sure we free everything.

2006-02-10  Eli Zaretskii  <eliz@gnu.org>

	* dir.c (dir_contents_file_exists_p): Don't opendir if the
	directory time stamp didn't change, except on FAT filesystems.
	Suggested by J. David Bryan <jdbryan@acm.org>.

2006-02-09  Paul D. Smith  <psmith@gnu.org>

	* function.c (func_or): Implement a short-circuiting OR function.
	(func_and): Implement a short-circuiting AND function.
	(function_table_init): Update the table with the new functions.
	* doc/make.texi (Conditional Functions): Changed the "if" section
	to one on general conditional functions.  Added documentation for
	$(and ...) and $(or ...) functions.
	* NEWS: Note new $(and ...) and $(or ...) functions.

2006-02-08  Boris Kolpackov  <boris@kolpackov.net>

	* job.h (struct child): Add the dontcare bitfield.
	* job.c (new_job): Cache dontcare flag.
	* job.c (reap_children): Use cached dontcare flag instead of the
	one in struct file. Fixes Savannah bug #15641.

2006-02-06  Paul D. Smith  <psmith@gnu.org>

	* vpath.c (selective_vpath_search): If the file we find has a
	timestamp from -o or -W, use that instead of the real time.
	* remake.c (f_mtime): If the mtime is a special token from -o or
	-W, don't overwrite it with the real mtime.
	Fixes Savannah bug #15341.

	Updates from Markus Mauhart <qwe123@chello.at>:

	* w32/subproc/sub_proc.c (process_begin): Remove no-op tests.
	(process_signal, process_last_err, process_exit_code): Manage
	invalid handle values.
	(process_{outbuf,errbuf,outcnt,errcnt,pipes}): Unused and don't
	manage invalid handles; remove them.
	* job.c (start_job_command) [WINDOWS32]: Jump out on error.
	* config.h.W32.template [WINDOWS32]: Set flags for Windows builds.
	* README.cvs: Updates for building from CVS.

2006-02-05  Paul D. Smith  <psmith@gnu.org>

	* file.c (enter_file): Keep track of the last double_colon entry,
	to avoid walking the list every time we want to add a new one.
	Fixes Savannah bug #15533.
	* filedef.h (struct file): Add a new LAST pointer.

	* dir.c (directory_contents_hash_cmp): Don't use subtraction to do
	the comparison.  For 64-bits systems the result of the subtraction
	might not fit into an int.  Use comparison instead.
	Fixes Savannah bug #15534.

	* doc/make.texi: Update the chapter on writing commands to reflect
	the changes made in 3.81 for backslash/newline and SHELL handling.

2006-02-01  Paul D. Smith  <psmith@gnu.org>

	* dir.c (dir_contents_file_exists_p) [WINDOWS32]: Make sure
	variable st is not used when it's not initialized.
	Patch from Eli Zaretskii <eliz@gnu.org>.

2006-01-31  Paul D. Smith  <psmith@gnu.org>

	* README.W32.template: Applied patch #4785 from
	Markus Mauhart <qwe123@chello.at>.
	* README.cvs: Applied patch #4786 from
	Markus Mauhart <qwe123@chello.at>.
	* make_msvc_net2003.vcproj [WINDOWS32]: New version from
	J. Grant <jg@jguk.org>.

	* main.c: Update the copyright year in the version output.
	* prepare_w32.bat: Remove this file from the distribution.

2006-01-21  Eli Zaretskii  <eliz@gnu.org>

	* remake.c (update_goal_chain): Set g->changed instead of
	incrementing it, as it is only 8-bit wide, and could overflow if
	many commands got started in update_file.

	* w32/include/sub_proc.h: Add a prototype for process_used_slots.

	* w32/subproc/sub_proc.c: Change dimension of proc_array[] to
	MAXIMUM_WAIT_OBJECTS.
	(process_wait_for_any_private): Change dimension of handles[]
	array to MAXIMUM_WAIT_OBJECTS.
	(process_used_slots): New function.
	(process_register): Don't register more processes than the
	available number of slots.
	(process_easy): Don't start new processes if all slots are used	up.

	* job.c (load_too_high, start_waiting_jobs) [WINDOWS32]: If there
	are already more children than sub_proc.c can handle, behave as if
	the load were too high.
	(start_job_command): Fix a typo in error message when process_easy
	fails.

2006-01-14  Eli Zaretskii  <eliz@gnu.org>

	* main.c (main) [WINDOWS32]: Don't refuse to run with -jN, even if
	the shell is not sh.exe.

	* job.c (create_batch_file): Renamed from create_batch_filename;
	all callers changed.  Don't close the temporary file; return its
	file descriptor instead.  New arg FD allows to return the file
	descriptor.
	(construct_command_argv_internal): Use _fdopen instead of fopen to
	open the batch file.

2006-01-04  Paul D. Smith  <psmith@gnu.org>

	* readme.vms: Updates for case-insensitive VMS file systems from
	Hartmut Becker <Hartmut.Becker@hp.com>.
	* dir.c (vms_hash): Ditto.
	* vmsify.c (copyto): Ditto.
	* vmsfunctions.c (readdir): Ditto.

	* make.1: Add a section on the exit codes for make.

	* doc/make.texi: A number of minor updates to the documentation.

2006-01-03  Paul D. Smith  <psmith@gnu.org>

	* remake.c (update_file_1): Mark a prerequisite changed if it
	doesn't exist.

	* read.c (eval): Be sure to strip off trailing whitespace from the
	prerequisites list properly.  Also, initialize all fields in
	struct dep when creating a new one.

2005-12-28  Paul D. Smith  <psmith@gnu.org>

	* config.h.W32.template [WINDOWS32]: Add in some pragmas to
	disable warnings for MSC.
	Patch by Rob Tulloh <rtulloh@yahoo.com>.

2005-12-17  Eli Zaretskii  <eliz@gnu.org>

	* doc/make.texi (Execution): Add a footnote about changes in
	handling of backslash-newline sequences.  Mention the differences
	on MS-DOS and MS-Windows.

	* NEWS: More details about building the MinGW port and a pointer
	to README.W32.  Fix the section name that describes the new
	backward-incompatible processing of backslash-newline sequences.
	The special processing of SHELL set to "cmd" is only relevant to
	MS-Windows, not MS-DOS.

2005-12-17  Eli Zaretskii  <eliz@gnu.org>

	* main.c (handle_runtime_exceptions): Cast exrec->ExceptionAddress
	to DWORD, to avoid compiler warnings.
	* job.c (exec_command): Cast hWaitPID and hPID to DWORD, and
	use %ld in format, to avoid compiler warnings.

	* doc/make.texi (Special Targets): Fix a typo.
	(Appending): Fix cross-reference to Setting.
	(Special Variables, Secondary Expansion, File Name Functions)
	(Flavor Function, Pattern Match, Quick Reference): Ensure two
	periods after a sentence.
	(Execution): Add @: after "e.g.".
	(Environment): Fix punctuation.
	(Target-specific, Call Function, Quick Reference): Add @: after "etc."
	(Shell Function, Target-specific): Add @: after "vs."

2005-12-14  Boris Kolpackov  <boris@kolpackov.net>

	* read.c (record_target_var): Initialize variable's export field
	with v_default instead of leaving it "initialized" by whatever
	garbage happened to be on the heap.

2005-12-12  Paul D. Smith  <psmith@gnu.org>

	* make.1: Fix some display errors and document all existing options.
	Patch by Mike Frysinger <vapier@gentoo.org>.

2005-12-11  Paul D. Smith  <psmith@gnu.org>

	* implicit.c (pattern_search): If 2nd expansion is not set for
	this implicit rule, replace the pattern with the stem directly,
	and don't re-expand the variable list.  Along with the other
	.SECONDEXPANSION changes below, fixes bug #13781.

2005-12-09  Boris Kolpackov  <boris@kolpackov.net>

	* implicit.c (pattern_search): Mark other files that this rule
	builds as targets so that they are not treated as intermediates
	by the pattern rule search algorithm. Fixes bug #13022.

2005-12-07  Boris Kolpackov  <boris@kolpackov.net>

	* remake.c (notice_finished_file): Propagate the change of
	modification time to all the double-colon entries only if
	it is the last one to be updated. Fixes bug #14334.

2005-11-17  Boris Kolpackov  <boris@kolpackov.net>

	* function.c (func_flavor): Implement the flavor function which
	returns the flavor of a variable.
	* doc/make.texi (Functions for Transforming Text): Document it.
	* NEWS: Add it to the list of new functions.

2005-11-14  Boris Kolpackov  <boris@kolpackov.net>

	* read.c (construct_include_path): Set the .INCLUDE_DIRS special
	variable.
	* doc/make.texi (Special Variables): Document .INCLUDE_DIRS.
	* NEWS: Add .INCLUDE_DIRS to the list of new special variables.

2005-10-26  Paul Smith  <psmith@gnu.org>

	* read.c (record_files): Don't set deps flags if there are no deps.
	* maintMakefile: We only need to build the templates when we are
	creating a distribution, so don't do it for "all".

2005-10-24  Paul D. Smith  <psmith@gnu.org>

	Make secondary expansion optional: its enabled by declaring the
	special target .SECONDEXPANSION.

	* NEWS: Update information on second expansion capabilities.
	* doc/make.texi (Secondary Expansion): Document the
	.SECONDEXPANSION special target and its behavior.
	* dep.h (struct dep): Add a flag STATICPATTERN, set to true if the
	prerequisite list was found in a static pattern rule.
	(free_dep_chain): Declare a prototype.
	* file.c (parse_prereqs): New function: break out some complexity
	from expand_deps().
	(expand_deps): If we aren't doing second expansion, replace % with
	the stem for static pattern rules.  Call the new function.
	* filedef.h (parse_prereqs): Declare a prototype.
	* implicit.c (pattern_search): Initialize the new staticpattern
	field.
	* main.c (second_expansion): Declare a global variable to remember
	if the special target has been seen.  Initialize the new
	staticpattern field for prerequisites.
	* make.h: Extern for second_expansion.
	* misc.c (free_dep_chain): New function: frees a struct dep list.
	* read.c (read_all_makefiles): Initialize the staticpattern field.
	(eval_makefile): Ditto.
	(record_files): Check for the .SECONDEXPANSION target and set
	second_expansion global if it's found.
	Use the new free_dep_chain() instead of doing it by hand.
	Set the staticpattern field for prereqs of static pattern targets.

2005-10-16  Paul D. Smith  <psmith@gnu.org>

	* main.c (main): Set CURDIR to be a file variable instead of a
	default, so that values of CURDIR inherited from the environment
	won't override the make value.

2005-09-26  Paul D. Smith  <psmith@gnu.org>

	* job.c (construct_command_argv_internal): If the line is empty
	remember to free the temporary argv strings.
	Fixes bug # 14527.

2005-09-16  Paul D. Smith  <psmith@gnu.org>

	* job.c (start_job_command): The noerror flag is a boolean (single
	bit); set it appropriately.
	Reported by Mark Eichin <eichin@metacarta.com>

2005-08-29  Paul D. Smith  <psmith@gnu.org>

	* function.c (func_error): On Windows, output from $(info ...)
	seems to come in the wrong order.  Try to force it with fflush().

2005-08-10  Boris Kolpackov  <boris@kolpackov.net>

	* read.c (record_files): Move code that sets stem for static
	pattern rules out of the if (!two_colon) condition so it is
	also executed for two-colon rules. Fixes Savannah bug #13881.

2005-08-08  Paul D. Smith  <psmith@gnu.org>

	* make.h: Don't test that __STDC__ is non-0.  Some compilers
	(Windows for example) set it to 0 to denote "ISO C + extensions".
	Fixes bug # 13594.

2005-08-07  Paul D. Smith  <psmith@gnu.org>

	* w32/pathstuff.c (getcwd_fs): Fix warning about assignment in a
	conditional (slightly different version of a fix from Eli).

	Fix a bug reported by Michael Matz <matz@suse.de>: patch included.
	If make is running in parallel without -k and two jobs die in a
	row, but not too close to each other, then make will quit without
	waiting for the rest of the jobs to die.

	* main.c (die): Don't reset err before calling reap_children() the
	second time: we still want it to be in the error condition.
	* job.c (reap_children): Use a static variable, rather than err,
	to control whether or not the error message should be printed.

2005-08-06  Eli Zaretskii  <eliz@gnu.org>

	* w32/subproc/sub_proc.c: Include signal.h.
	(process_pipe_io, process_file_io): Pass a pointer to a local
	DWORD variable to GetExitCodeProcess.  If the exit code is
	CONTROL_C_EXIT, put SIGINT into pproc->signal.

	* job.c [WINDOWS32]: Include windows.h.
	(main_thread) [WINDOWS32]: New global variable.
	(reap_children) [WINDOWS32]: Get the handle for the main thread
	and store it in main_thread.

	* commands.c [WINDOWS32]: Include windows.h and w32err.h.
	(fatal_error_signal) [WINDOWS32]: Suspend the main thread before
	doing anything else.  When we are done, close the main thread
	handle and exit with status 130.

2005-07-30  Eli Zaretskii  <eliz@gnu.org>

	* w32/subproc/sub_proc.c (process_begin): Don't pass a NULL
	pointer to fprintf.

	* main.c (find_and_set_default_shell): If found a DOSish shell,
	set sh_found and the value of default_shell, and report the
	findings in debug mode.

	* job.c (construct_command_argv_internal): Check unixy_shell, not
	no_default_sh_exe, to decide whether to use Unixy or DOSish
	builtin commands.

	* README.W32: Update with info about the MinGW build.

	* build_w32.bat: Support MinGW.

	* w32/subproc/build.bat: Likewise.

	* w32/subproc/sub_proc.c (process_easy): Fix format strings for
	printing DWORD args.

	* function.c (windows32_openpipe): Fix format strings for printing
	DWORD args.

	* job.c (reap_children) [WINDOWS32]: Don't declare 'status' and
	'reap_mode'.
	(start_job_command): Fix format string for printing the result of
	process_easy.
	(start_job_command) [WINDOWS32]: Do not define.
	(exec_command): Fix format string for printing HANDLE args.

	* main.c (handle_runtime_exceptions): Fix sprintf format strings
	to avoid compiler warnings.
	(open_tmpfile): Declare fd only if HAVE_FDOPEN is defined.
	(Note: some of these fixes were submitted independently by J. Grant)

2005-07-30  J. Grant <jg@jguk.org>

	* prepare_w32.bat: Copy config.h.w32 to config.h if not exist.
	* make_msvc_net2003.vcproj, make_msvc_net2003.sln: MSVC Project files.
	* Makefile.am (EXTRA_DIST): Add MSVC Project files.

2005-07-15  Paul Smith  <psmith@gnu.org>

	* job.c (construct_command_argv_internal) [DOS,WINDOWS32,OS/2]: If
	we don't have a POSIX shell, then revert to the old
	backslash-newline behavior (where they are stripped).
	Fixes bug #13665.

2005-07-08  Paul D. Smith  <psmith@gnu.org>

	* config.h.W32.template: Reorder to match the standard config.h,
	for easier comparisons.
	From J. Grant <jg@jguk.org>

	* maintMakefile: Remove .dep_segment before overwriting it, in
	case it's not writable or noclobber is set.
	* expand.c (variable_expand_string): Cast result of pointer
	arithmetic to avoid a warning.
	* main.c (switches): Add full-fledged final initializer.

2005-07-06  Paul D. Smith  <psmith@gnu.org>

	* configure.in: IRIX has _sys_siglist.  Tru64 UNIX has __sys_siglist.
	* signame.c (strsignal): If we found _sys_siglist[] or
	__sys_siglist[] use those instead of sys_siglist[].
	From Albert Chin <china@thewrittenword.com>

2005-07-04  Paul D. Smith  <psmith@gnu.org>

	* config.h-vms.template [VMS]: Latest VMS has its own glob() and
	globfree(); set up to use the GNU versions.
	From Martin Zinser <zinser@zinser.no-ip.info>

2005-07-03  Paul D. Smith  <psmith@gnu.org>

	From J. Grant <jg@jguk.org>:

	* README.W32.template: Update the Windows and tested MSVC versions.
	* NMakefile.template (CFLAGS_any): Change warning level from W3 to W4.
	* w32/subproc/NMakefile (CFLAGS_any): Ditto.
	* build_w32.bat: Ditto.
	* w32/subproc/build.bat: Ditto.

2005-06-28  Paul D. Smith  <psmith@gnu.org>

	* signame.c: HAVE_DECL_* macros are set to 0, not undef, if the
	declaration was checked but not present.

2005-06-27  Paul D. Smith  <psmith@gnu.org>

	* dir.c (find_directory): Change type of fs_serno/fs_flags/fs_len
	to unsigned long.  Fixes Savannah bug #13550.

	* w32/subproc/sub_proc.c: Remove (HANDLE) casts on lvalues.
	(process_pipe_io): Initialize tStdin/tStdout/tStderr variables.
	Fixes Savannah bug #13551.

2005-06-26  Paul D. Smith  <psmith@gnu.org>

	* make.h: Fix bug in ANSI_STRING/strerror() handling; only define
	it if ANSI_STRING is not set.

2005-06-25  Paul D. Smith  <psmith@gnu.org>

	* read.c (eval): If no filenames are passed to any of the
	"include" variants, don't print an error.
	* doc/make.texi (Include): Document this.
	Fixes Savannah bug #1761.

	* job.c (construct_command_argv_internal): Sanitize handling of
	backslash/newline pairs according to POSIX: that is, keep the
	backslash-newline in the command script, but remove a following
	TAB character, if present.  In the fast path, make sure that the
	behavior matches what the shell would do both inside and outside
	of quotes.  In the slow path, quote the backslash and put a
	literal newline in the string.
	Fixes Savannah bug #1332.
	* doc/make.texi (Execution): Document the new behavior and give
	some examples.
	* NEWS: Make a note of the new behavior.

	* make.h [WINDOWS32]: #include <direct.h>.
	Fixes Savannah bug #13478.

	* remake.c (name_mtime): If the stat() of a file fails and the -L
	option was given and the file is a symlink, take the best mtime of
	the symlink we can get as the mtime of the file and don't fail.
	Fixes Savannah bug #13280.

	* read.c (find_char_unquote): Accept a new argument IGNOREVARS.
	If it's set, then don't	stop on STOPCHARs or BLANKs if they're
	inside a variable reference.  Make this function static as it's
	only used here.
	(eval): Call find_char_unquote() with IGNOREVARS set when we're
	parsing an unexpanded line looking for semicolons.
	Fixes Savannah bug #1454.
	* misc.c (remove_comments): Move this to read.c and make it static
	as it's only used there.  Call find_char_unquote() with new arg.
	* make.h: Remove prototypes for find_char_unquote() and
	remove_comments() since they're static now.

	* main.c (main): If we see MAKE_RESTARTS in the environment, unset
	its export flag and obtain its value.  When we need to re-exec,
	increment the value and add it into the environment.
	* doc/make.texi (Special Variables): Document MAKE_RESTARTS.
	* NEWS: Mention MAKE_RESTARTS.
	* main.c (always_make_set): New variable.  Change the -B option to
	set this one instead.
	(main): When checking makefiles, only set always_make_flag if
	always_make_set is set AND the restarts flag is 0.  When building
	normal targets, set it IFF always_make_set is set.
	(main): Avoid infinite recursion with -W, too: only set what-if
	files to NEW before we check makefiles if we've never restarted
	before.  If we have restarted, set what-if files to NEW _after_ we
	check makefiles.
	Fixes Savannah bug #7566:

2005-06-17  Paul D. Smith  <psmith@gnu.org>

	* default.c: Change VMS implicit rules to use $$$$ instead of $$
	in the prerequisites list.

2005-06-12  Paul D. Smith  <psmith@gnu.org>

	Fix Savannah bug # 1328.

	* configure.in: Check for atexit().
	* misc.c (close_stdout): Test stdout to see if writes to it have
	failed.  If so, be sure to exit with a non-0 error code.  Based on
	code found in gnulib.
	* make.h: Prototype.
	* main.c (main): Install close_stdout() with atexit().

2005-06-10  Paul D. Smith  <psmith@gnu.org>

	VMS build updates from Hartmut Becker <Hartmut.Becker@hp.com>:

	* vmsjobs.c [VMS]: Updates to compile on VMS: add some missing
	headers; make vmsWaitForChildren() static; extern vmsify().
	* job.c [VMS]: Move vmsWaitForChildren() prototype to be global.
	Don't create child_execute_job() here (it's in vmsjobs.c).
	* makefile.vms (job.obj) [VMS]: Add vmsjobs.c as a prerequisite.

2005-06-09  Paul D. Smith  <psmith@gnu.org>

	* variable.c (push_new_variable_scope): File variables point
	directly to the global_setlist variable.  So, inserting a new
	scope in front of that has no effect on those variables: they
	don't go through current_variable_set_list.  If we're pushing a
	scope and the current scope is global, push it "the other way" so
	that the new setlist is in the global_setlist variable, and
	next points to a new setlist with the global variable set.
	(pop_variable_scope): Properly undo a push with the new
	semantics.
	Fixes Savannah bug #11913.

2005-05-31  Boris Kolpackov  <boris@kolpackov.net>

	* job.c (reap_children): Don't die of the command failed but
	the dontcare flag is set. Fixes Savannah bug #13216.

	* implicit.c (pattern_search): When creating a target from
	an implicit rule match, lookup pattern target and set precious
	flag in a newly created target. Fixes Savannah bug #13218.

2005-05-13  Paul D. Smith  <psmith@gnu.org>

	Implement "if... else if... endif" syntax.

	* read.c (eval): Push all checks for conditional words ("ifeq",
	"else", etc.) down into the conditional_line() function.
	(conditional_line): Rework to allow "else if..." clause.  New
	return value -2 for lines which are not conditionals.  The
	ignoring flag can now also be 2, which means "already parsed a
	true branch".  If that value is seen no other branch of this
	conditional can be considered true.  In the else parsing if there
	is extra text after the else, invoke conditional_line()
	recursively to see if it's another conditional.  If not, it's an
	error.  If so, raise the conditional value to this level instead
	of creating a new conditional nesting level.  Special check for
	"else" and "endif", which aren't allowed on the "else" line.
	* doc/make.texi (Conditional Syntax): Document the new syntax.

2005-05-09  Paul D. Smith  <psmith@gnu.org>

	* Makefile.am (EXTRA_make_SOURCES): Add vmsjobs.c
	(MAYBE_W32): Rework how SUBDIRS are handled so that "make dist"
	recurses to the w32 directory, even on non-Windows systems.  Use
	the method suggested in the automake manual.
	* configure.in: Add w32/Makefile to AC_CONFIG_FILES.
	* maintMakefile (gnulib-url): They moved the texinfo.tex files.

2005-05-07  Paul D. Smith  <psmith@gnu.org>

	* main.c (die): If we're dying with a fatal error (not that a
	command has failed), write back any leftover tokens before we go.

	* job.c (set_child_handler_action_flags): If there are jobs
	waiting for the load to go down, set an alarm to go off in 1
	second.  This allows us to wake up from a potentially long-lasting
	read() and start a new job if the load has gone down.  Turn it off
	after the read.
	(job_noop): Dummy signal handler function.
	(new_job): Invoke it with the new semantics.

	* docs/make.texi: Document secondary expansion.  Various cleanups
	and random work.

2005-05-03  Paul D. Smith  <psmith@gnu.org>

	Rename .DEFAULT_TARGET to .DEFAULT_GOAL: in GNU make terminology
	the targets which are to ultimately be made are called "goals";
	see the GNU make manual.  Also, MAKECMDGOALS, etc.

	* filedef.h, read.c, main.c: Change .DEFAULT_TARGET to
	.DEFAULT_GOAL, and default_target_name to default_goal_name.
	* doc/make.texi (Special Variables): Document .DEFAULT_GOAL.

2005-05-02  Paul D. Smith  <psmith@gnu.org>

	* job.c, vmsjobs.c (vmsWaitForChildren, vms_redirect,
	vms_handle_apos, vmsHandleChildTerm, reEnableAst, astHandler,
	tryToSetupYAst, child_execute_job) [VMS]: Move VMS-specific
	functions to vmsjobs.c.  #include it into jobs.c.

	Grant Taylor <gtaylor@picante.com> reports that -j# can lose
	jobserver tokens.  I found that this happens when an exported
	recursive variable contains a $(shell ...) function reference: in
	this situation we could "forget" to write back a token.

	* job.c, job.h: Add variable jobserver_tokens: counts the tokens
	we have.  It's not reliable to depend on the number of children in
	our linked list so keep a separate count.
	(new_job): Check jobserver_tokens rather than children &&
	waiting_jobs.  Increment jobserver_tokens when we get one.
	(free_child): If jobserver_tokens is 0, internal error.  If it's
	>1, write a token back to the jobserver pipe (we don't write a
	token for the "free" job).  Decrement jobserver_tokens.

	* main.c: Add variable master_job_slots.
	(main): Set it to hold the number of jobs requested if we're the
	master process, when using the jobserver.
	(die): Sanity checks: first test jobserver_tokens to make sure
	this process isn't holding any tokens we didn't write back.
	Second, if master_job_slots is set count the tokens left in the
	jobserver pipe and ensure it's the same as master_job_slots (- 1).

2005-04-24  Paul D. Smith  <psmith@gnu.org>

	Grant Taylor <gtaylor@picante.com> reports that -j# in conjunction
	with -l# can lose jobserver tokens, because waiting jobs are not
	consulted properly when checking for the "free" token.

	* job.c (free_child): Count waiting_jobs as having tokens.
	* job.c (new_job): Ditto.  Plus, call start_waiting_jobs() here to
	handle jobs waiting for the load to drop.

2005-04-23  Paul D. Smith  <psmith@gnu.org>

	* main.c (main): Be careful to not core if a variable setting in
	the environment doesn't contain an '='.  This is illegal but can
	happen in broken setups.
	Reported by Joerg Schilling <schilling@fokus.fraunhofer.de>.

2005-04-12  Paul D. Smith  <psmith@gnu.org>

	The second expansion feature causes significant slowdown.  Timing
	a complex makefile (GCC 4.1) shows a slowdown from .25s to just
	read the makefile before the feature, to 11+s to do the same
	operations after the feature.  Additionally, memory usage
	increased drastically.  To fix this I added some intelligence that
	avoids the overhead of the second expansion unless it's required.

	* dep.h: Add a new boolean field, need_2nd_expansion.

	* read.c (eval): When creating the struct dep for the target,
	check if the name contains a "$"; if so set need_2nd_expansion to 1.
	(record_files): If there's a "%" in a static pattern rule, it gets
	converted to "$*" so set need_2nd_expansion to 1.

	* file.c (expand_deps): Rework to be more efficient.  Only perform
	initialize_file_variables(), set_file_variables(), and
	variable_expand_for_file() if the need_2nd_expansion is set.

	* implicit.c (pattern_search): Default need_2nd_expansion to 0.
	(pattern_search): Ditto.
	* main.c (handle_non_switch_argument): Ditto.
	(main): Ditto.
	* read.c (read_all_makefiles): Ditto.
	(eval_makefile): Ditto.

2005-04-07  Paul D. Smith  <psmith@gnu.org>

	* main.c (main) [WINDOWS32]: Export PATH to sub-shells, not Path.
	* variable.c (sync_Path_environment): Ditto.
	Patch by Alessandro Vesely.  Fixes Savannah bug #12209.

	* main.c (main): Define the .FEATURES variable.
	* NEWS: Announce .FEATURES.
	* doc/make.texi (Special Variables): Document .FEATURES.

	* remake.c (check_dep): If a file is .PHONY, update it even if
	it's marked intermediate.  Fixes Savannah bug #12331.

2005-03-15  Boris Kolpackov  <boris@kolpackov.net>

	* file.c (expand_deps): Factor out the second expansion and
	prerequisite line parsing logic from snap_deps().

	* file.c (snap_deps): Use expand_deps(). Expand and parse
	prerequisites of the .SUFFIXES special target first. Fixes
	Savannah bug #12320.

2005-03-13  Paul D. Smith  <psmith@gnu.org>

	* main.c (main) [MSDOS]: Export SHELL in MSDOS.  Requested by Eli
	Zaretskii.

2005-03-11  Paul D. Smith  <psmith@gnu.org>

	* signame.c (strsignal): HAVE_DECL_SYS_SIGLIST is 0 when not
	available, not undefined (from Earnie Boyd).

2005-03-10  Boris Kolpackov  <boris@kolpackov.net>

	* implicit.c (pattern_search): Mark an intermediate target as
	precious if it happened to be a prerequisite of some (other)
	target. Fixes Savannah bug #12267.

2005-03-09  Paul D. Smith  <psmith@gnu.org>

	* read.c (eval_makefile): Add alloca(0).
	(eval_buffer): Ditto.

2005-03-09  Boris Kolpackov  <boris@kolpackov.net>

	* main.c (main): Use o_file instead of o_default when defining
	the .DEFAULT_TARGET special variable.
	* read.c (eval): Use define_variable_global() instead of
	define_variable() when setting new value for the .DEFAULT_TARGET
	special variable.  Fixes Savannah bug #12266.

2005-03-04  Boris Kolpackov  <boris@kolpackov.net>

	* imlicit.c (pattern_search): Mark files for which an implicit
	rule has been found as targets. Fixes Savannah bug #12202.

2005-03-04  Paul D. Smith  <psmith@gnu.org>

	* AUTHORS: Update.
	* doc/make.texi (Automatic Variables): Document $|.

2005-03-03  Boris Kolpackov  <boris@kolpackov.net>

	* read.c (record_files): Instead of substituting % with
	actual stem value in dependency list replace it with $*.
	This fixes stem triple expansion bug.

	* implicit.c (pattern_search): Copy stem to a separate
	buffer and make it a properly terminated string. Assign
	this buffer instead of STEM (which is not terminated) to
	f->stem. Instead of substituting % with actual stem value
	in dependency list replace it with $*. This fixes stem
	triple expansion bug.

2005-03-01  Paul D. Smith  <psmith@gnu.org>

	* commands.c (fatal_error_signal) [WINDOWS32]: Don't call kill()
	on Windows, as it takes a handle not a pid.  Just exit.
	Fix from patch #3679, provided by Alessandro Vesely.

	* configure.in: Update check for sys_siglist[] from autoconf manual.
	* signame.c (strsignal): Update to use the new autoconf macro.

2005-03-01  Boris Kolpackov  <boris@kolpackov.net>

	* read.c (record_files): Add a check for the list of prerequisites
	of a static pattern rule being empty. Fixes Savannah bug #12180.

2005-02-28  Paul D. Smith  <psmith@gnu.org>

	* doc/make.texi (Text Functions): Update docs to allow the end
	ordinal for $(wordlist ...) to be 0.
	* function.c (func_wordlist): Fail if the start ordinal for
	$(wordlist ...) is <1.  Matches documentation.
	Resolves Savannah support request #103195.

	* remake.c (update_goal_chain): Fix logic for stopping in -q:
	previously we were stopping when !-q, exactly the opposite.  This
	has been wrong since version 1.34, in 1994!
	(update_file): If we got an error don't break out to run more
	double-colon rules: just return immediately.
	Fixes Savannah bug #7144.

2005-02-27  Paul D. Smith  <psmith@gnu.org>

	* misc.c (end_of_token): Make argument const.
	* make.h: Update prototype.

	* function.c (abspath, func_realpath, func_abspath): Use
	PATH_VAR() and GET_PATH_MAX instead of PATH_MAX.
	* dir.c (downcase): Use PATH_VAR() instead of PATH_MAX.
	* read.c (record_files): Ditto.
	* variable.c (do_variable_definition): Ditto.

	* function.c (func_error): Create a new function $(info ...) that
	simply prints the message to stdout with no extras.
	(function_table_init): Add new function to the table.
	* NEWS: Add $(info ...) reference.
	* doc/make.texi (Make Control Functions): Document it.

	New feature: if the system supports symbolic links, and the user
	provides the -L/--check-symlink-time flag, then use the latest
	mtime between the symlink(s) and the target file.

	* configure.in (MAKE_SYMLINKS): Check for lstat() and
	readlink().  If both are available, define MAKE_SYMLINKS.
	* main.c: New variable: check_symlink_flag.
	(usage): Add a line for -L/--check-symlink-times to the help string.
	(switches): Add -L/--check-symlink-times command line argument.
	(main): If MAKE_SYMLINKS is not defined but the user specified -L,
	print a warning and disable it again.
	* make.h: Declare check_symlink_flag.
	* remake.c (name_mtime): If MAKE_SYMLINKS and check_symlink_flag,
	if the file is a symlink then check each link in the chain and
	choose the NEWEST mtime we find as the mtime for the file.  The
	newest mtime might be the file itself!
	* NEWS: Add information about this new feature.
	* doc/make.texi (Options Summary): Add -L/--check-symlink-times docs.

	Avoid core dumps described in Savannah bug # 12124:

	* file.c: New variable snapped_deps remember whether we've run
	snap_deps().
	(snap_deps): Set it.
	* filedef.h: Extern it.
	* read.c (record_files): Check snapped_deps; if it's set then
	we're trying to eval a new target/prerequisite relationship from
	within a command script, which we don't support.  Fatal.

2005-02-28  Boris Kolpackov  <boris@kolpackov.net>

	Implementation of the .DEFAULT_TARGET special variable.

	* read.c (eval): If necessary, update default_target_name when
	reading rules.
	* read.c (record_files): Update default_target_file if
	default_target_name has changed.
	* main.c (default_target_name): Define.
	* main.c (main): Enter .DEFAULT_TARGET as make variable. If
	default_target_name is set use default_target_file as a root
	target to make.
	* filedef.h (default_target_name): Declare.
	* dep.h (free_dep_chain):
	* misc.c (free_dep_chain): Change to operate on struct nameseq
	and change name to free_ns_chain.
	* file.c (snap_deps): Update to use free_ns_chain.

2005-02-27  Boris Kolpackov  <boris@kolpackov.net>

	Implementation of the second expansion in explicit rules,
	static pattern rules and implicit rules.

	* read.c (eval): Refrain from chopping up rule's dependencies.
	Store them in a struct dep as a single dependency line. Remove
	the code that implements SySV-style automatic variables.

	* read.c (record_files): Adjust the code that handles static
	pattern rules to expand all percents instead of only the first
	one. Reverse the order in which dependencies are stored so that
	when the second expansion reverses them again they appear in
	the makefile order (with some exceptions, see comments in
	the code). Remove the code that implements SySV-style automatic
	variables.

	* file.c (snap_deps): Implement the second expansion and chopping
	of dependency lines for explicit rules.

	* implicit.c (struct idep): Define an auxiliary data type to hold
	implicit rule's dependencies after stem substitution and
	expansion.

	* implicit.c (free_idep_chain): Implement.

	* implicit.c (get_next_word): Implement helper function for
	parsing implicit rule's dependency lines into words taking
	into account variable expansion requests. Used in the stem
	splitting code.

	* implicit.c (pattern_search): Implement the second expansion
	for implicit rules. Also fixes bug #12091.

	* commands.h (set_file_variables): Declare.
	* commands.c (set_file_variables): Remove static specifier.

	* dep.h (free_dep_chain): Declare.
	* misc.c (free_dep_chain): Implement.

	* variable.h (variable_expand_for_file): Declare.
	* expand.c (variable_expand_for_file): Remove static specifier.

	* make.h (strip_whitespace): Declare.
	* function.c (strip_whitespace): Remove static specifier.

2005-02-26  Paul D. Smith  <psmith@gnu.org>

	* main.c (main): Check for ferror() when reading makefiles from stdin.
	Apparently some shells in Windows don't close pipes properly and
	require this check.

2005-02-24  Jonathan Grant  <jg@jguk.org>

	* configure.in: Add MinGW configuration options, and extra w32 code
	directory.
	* Makefile.am: Add MinGW configuration options, and extra w32 code
	directory.
	* main.c: Determine correct program string (after last \ without .exe).
	* subproc/sub_proc.c: `GetExitCodeProcess' from incompatible pointer
	type fix x2
	* w32/Makefile.am: Import to build win32 lib of sub_proc etc.
	* subproc/w32err.c: MSVC thread directive not applied to MinGW builds.
	* tests/run_make_tests.pl, tests/test_driver.pl: MSYS testing
	environment support.

2004-04-16  Dmitry V. Levin  <ldv@altlinux.org>

	* function.c (func_shell): When initializing error_prefix, check
	that reading file name is not null.  This fixes long-standing
	segfault in cases like "make 'a1=$(shell :)' 'a2:=$(a1)'".

2005-02-09  Paul D. Smith  <psmith@gnu.org>

	* maintMakefile: Update the CVS download URL to simplify them.
	Also, the ftp://ftp.gnu.org/GNUinfo site was removed so I'm
	downloading the .texi files from Savannah now.

	Fixed these issues reported by Markus Mauhart <qwe123@chello.at>:

	* main.c (handle_non_switch_argument): Only add variables to
	command_variables if they're not already there: duplicate settings
	waste space and can be confusing to read.

	* w32/include/sub_proc.h: Remove WINDOWS32.  It's not needed since
	this header is never included by non-WINDOWS32 code, and it
	requires <config.h> to define which isn't always included first.

	* dir.c (read_dirstream) [MINGW]: Use proper macro names when
	testing MINGW32 versions.

	* main.c (log_working_directory): flush stdout to be sure the WD
	change is printed before any stderr messages show up.

2005-02-01  Paul D. Smith  <psmith@gnu.org>

	* maintMakefile (po_repo): Update the GNU translation site URL.

2004-12-01  Paul D. Smith  <psmith@gnu.org>

	* main.c (main): Change char* env_shell to struct variable shell_var.
	* variable.c (target_environment): Use new shell_var.

2004-11-30  Paul D. Smith  <psmith@gnu.org>

	* configure.in: The old way we avoided creating build.sh from
	build.sh.in before build.sh.in exists doesn't work anymore; we
	have to use raw M4 (thanks to Andreas Schwab <schwab@suse.de> for
	the help!).  This also keeps automake from complaining.
	* Makefile.am (README): Add a dummy target so automake won't
	complain that this file doesn't exist when we checkout from CVS.
	* maintMakefile (.dep_segment): Rewrite this rule since newer
	versions of automake don't provide DEP_FILES.

2004-11-30  Boris Kolpackov  <boris@kolpackov.net>

	Implementation of `realpath' and `abspath' built-in functions.

	* configure.in: Check for realpath.
	* function.c (abspath): Return an absolute file name that does
	not contain any `.' or `..' components, nor repeated `/'.
	* function.c (func_abspath): For each name call abspath.
	* function.c (func_realpath): For each name call realpath
	from libc or delegate to abspath if realpath is not available.
	* doc/make.texi (Functions for File Names): Document new functions.
	* doc/make.texi (Quick Reference): Ditto.

2004-11-28  Paul D. Smith  <psmith@gnu.org>

	* main.c (main) [WINDOWS32]: Remove any trailing slashes from -C
	arguments.  Fixes bug #10252.

	Fix for bug #1276: Handle SHELL according to POSIX requirements.

	* main.c (main): Set SHELL to v_noexport by default.  Remember the
	original environment setting of SHELL in the env_shell variable.
	* main.h: Export new env_shell variable.
	* variable.c (target_environment): If we find a v_noexport
	variable for SHELL, add a SHELL variable with the env_shell value.
	* doc/make.texi (Quick Reference): Document the POSIX behavior.
	* doc/make.texi (Variables/Recursion): Ditto.

2004-11-28  Paul D. Smith  <psmith@gnu.org>

	* main.c (find_and_set_default_shell) [WINDOWS32]: check for
	equality of "cmd"/"cmd.exe", not inequality.  Fixes bug #11155.
	Patch by Alessandro Vesely.

2004-11-12  Paul D. Smith  <psmith@gnu.org>

	* job.c (child_execute_job) [VMS]: Don't treat "#" as a comment on
	the command line if it's inside a string.
	Patch by: Hartmut Becker <Hartmut.Becker@hp.com>

2004-10-21  Boris Kolpackov  <boris@kolpackov.net>

	* function.c (func_lastword): New function: return last word
	from the list of words.
	* doc/make.texi: Document $(lastword ). Fix broken links in
	Quick Reference section.

2004-10-06  Paul D. Smith  <psmith@gnu.org>

	Apply patch from Alessandro Vesely, provided with bug # 9748.
	Fix use of tmpnam() to work with Borland C.

	* job.c (construct_command_argv_internal) [WINDOWS32]: Remove
	construction of a temporary filename, and call new function
	create_batch_filename().
	(create_batch_filename) [WINDOWS32]: New function to create a
	temporary filename.

2004-10-05  Boris Kolpackov  <boris@kolpackov.net>

	* read.c (record_target_var): Expand simple pattern-specific
	variable.
	* variable.c (initialize_file_variables): Do not expand simple
	pattern-specific variable.

2004-09-28  Boris Kolpackov  <boris@kolpackov.net>

	* remake.c (update_file_1): When rebuilding makefiles inherit
	dontcare flag from a target that triggered update.

2004-09-27  Boris Kolpackov  <boris@kolpackov.net>

	* variable.c (initialize_file_variables): Mark pattern-specific
	variable as a per-target and copy export status.

2004-09-21  Boris Kolpackov  <boris@kolpackov.net>

	* file.c (snap_deps): Mark .PHONY prerequisites as targets.

	* implicit.c (pattern_search): When considering an implicit rule's
	prerequisite check that it is actually a target rather then
	just an entry in the file hashtable.

2004-09-21  Paul D. Smith  <psmith@gnu.org>

	* read.c (readstring): Fix some logic errors in backslash handling.
	(eval): Remove some unnecessary processing in buffer handling.
	(record_target_var): Assert that parse_variable_definition() succeeded.
	Reported by: Markus Mauhart <qwe123@chello.at>.

	* misc.c: Removed the sindex() function.  All instances of this
	function were trivially replaceable by the standard strstr()
	function, and that function will always have better (or certainly
	no worse) performance than the very simple-minded algorithm
	sindex() used.  This can matter with complex makefiles.
	* make.h: Remove the prototype for sindex().
	* function.c (subst_expand): Convert sindex() call to strstr().
	This means we no longer need to track the TLEN value so remove that.
	(func_findstring): Convert sindex() to strstr().
	* commands.c (chop_commands): Convert sindex() calls to strstr().
	Suggested by: Markus Mauhart <qwe123@chello.at>.

	* main.c (find_and_set_default_shell) [WINDOWS32]: Implement the
	idea behind Savannah Patch #3144 from david.baird@homemail.com.
	If SHELL is set to CMD.EXE then assume it's batch-mode and
	non-unixy.  I wrote the code differently from the patch, though,
	to make it safer.  This also resolves bug #9174.

2004-09-20  Paul D. Smith  <psmith@gnu.org>

	* expand.c (variable_expand_string): Modify to invoke
	patsubst_expand() instead of subst_expand(); the latter didn't
	handle suffix patterns correctly.
	* function.c (subst_expand): Remove the SUFFIX_ONLY parameter; it
	was used only from variable_expand_string() and is no longer used
	there.
	(func_subst): Ditto, on call to subst_expand().
	(patsubst_expand): Require the percent pointers to point to the
	character after the %, not to the % itself.
	* read.c (record_files): New call criteria for patsubst_expand().
	* variable.h: Remove SUFFIX_ONLY from subst_expand() prototype.
	This is to fix a bug reported by Markus Mauhart <qwe123@chello.at>.

2004-09-19  Paul D. Smith  <psmith@gnu.org>

	* function.c (subst_expand): Fix a check in by_word: look for a
	previous blank if we're beyond the beginning of the string, not
	the beginning of the word.
	Bugs reported by Markus Mauhart <qwe123@chello.at>.

2004-05-16  Paul D. Smith  <psmith@gnu.org>

	* remake.c (update_goal_chain): Change the argument specifying
	whether we're rebuilding makefiles to be a global variable,
	REBUILDING_MAKEFILES.
	(complain): Extract the code that complains about no rules to make
	a target into a separate function.
	(update_file_1): If we tried to rebuild a file during the makefile
	rebuild phase and it was dontcare, then no message was printed.
	If we then try to build the same file during the normal build,
	print a message this time.
	(remake_file): Don't complain about un-remake-able files when
	we're rebuilding makefiles.

2004-05-11  Paul D. Smith  <psmith@gnu.org>

	* job.c (construct_command_argv_internal): OS/2 patches from
	Andreas Buening <andreas.buening@nexgo.de>.

2004-05-10  Paul D. Smith  <psmith@gnu.org>

	* remake.c (update_file): Don't walk the double-colon chain unless
	this is a double-colon rule.  Fix suggested by Boris Kolpackov
	<boris@kolpackov.net>.

	* makefile.vms (CFLAGS): Remove glob/globfree (see readme.vms docs)
	* readme.vms: New section describing OpenVMS support and issues.
	* default.c (default_variables): Add support for IA64.
	* job.c (tryToSetupYAst) [VMS]: On VMS running make in batch mode
	without some privilege aborts make with the error
	%SYSTEM-F-NOPRIV. It happens when setting up a handler for
	pressing Ctrl+Y and the input device is no terminal. The change
	catches this error and just continues.

	Patches by Hartmut Becker <Hartmut.Becker@hp.com>

2004-04-25  Paul D. Smith  <psmith@gnu.org>

	* commands.c (set_file_variables): Set $< properly in the face of
	order-only prerequisites.
	Patch from Boris Kolpackov <boris@kolpackov.net>

2004-04-21  Bob Byrnes  <byrnes@curl.com>

	* main.c (main): Notice failures to remake makefiles.

2004-03-28  Paul D. Smith  <psmith@gnu.org>

	Patches for Acorn RISC OS by Peter Naulls <peter@chocky.org>

	* job.c: No default shell for RISC OS.
	(load_too_high): Hard-code the return to 1.
	(construct_command_argv_internal): No sh_chars or sh_cmds.
	* getloadavg.c: Don't set LOAD_AVE_TYPE on RISC OS.

2004-03-20  Paul D. Smith  <psmith@gnu.org>

	* variable.c (do_variable_definition): Don't append from the
	global set if a previous non-appending target-specific variable
	definition exists.  Reported by Oliver Schmidt <oschmidt@gmx.net>
	(with fix).

	* expand.c (reference_variable): Don't give up on variables with
	no value that have the target-specific append flag set: they might
	have a value after all.  Reported by Oliver Schmidt
	<oschmidt@gmx.net> (with fix) and also by Maksim A. Nikulin
	<nikulin@dx1cmd.inp.nsk.su>.

	* rule.c (count_implicit_rule_limits): Don't delete patterns which
	refer to absolute pathnames in directories that don't exist: some
	portion of the makefile could create those directories before we
	match the pattern.  Fixes bugs #775 and #108.

	Fixes from Jonathan R. Grant  <jg-make@jguk.org>:

	* main.c (main): Free makefile_mtimes if we have any.
	* README.W32.template: Update documentation for the current status
	of the MS-Windows port.
	* NMakefile.template (MAKE): Add "MAKE = nmake".  A conflicting
	environment variable is sometimes already defined which causes the
	build to fail.
	* main.c (debug_signal_handler): Only define this function if
	SIGUSR1 is available.

	Fixes for OS/2 from Andreas Beuning <andreas.buening@nexgo.de>:

	* configure.in [OS/2]: Relocate setting of HAVE_SA_RESTART for OS/2.
	* README.OS2.template: Documentation updates.
	* build.template: Add LIBINTL into LOADLIBES.  Add $CFLAGS to the
	link line for safety.
	* maintMakefile (build.sh.in): Remove an extraneous ")".
	* job.c (child_execute_job): Close saved FDs.
	* job.c (exec_command) [OS/2]: exec_command(): If the command
	can't be exec'ed and if the shell is not Unix-sh, then try again
	with argv = { "cmd", "/c", ... }. Normally, this code is never
	reached for the cmd shell unless the command really doesn't exist.
	(construct_command_argv_internal) [OS/2]: The code for cmd
	handling now uses new_argv = { "cmd", "/c", "original line", NULL}.
	The CMD builtin commands are case insensitive so use strcasecmp().

2004-03-19  Paul D. Smith  <psmith@gnu.org>

	* read.c (do_define): Re-order line counter increment so the count
	is accurate (we were losing one line per define).  Reported by
	Dave Yost <Dave@Yost.com>.

2004-03-06  Paul D. Smith  <psmith@gnu.org>

	* configure.in (HAVE_ANSI_COMPILER): Define if we have an ANSI/ISO
	compiler.
	* make.h: Convert uses of __STDC__ to HAVE_ANSI_COMPILER.
	* misc.c (message,error,fatal): Ditto.
	* configh.dos.template: Define HAVE_ANSI_COMPILER.
	* config.h.W32.template: Ditto.
	* config.h-vms.template: Ditto.
	* config.ami.template: Ditto.

2004-03-04  Paul D. Smith  <psmith@gnu.org>

	* README.template: Add a note about broken /bin/sh on SunOS
	4.1.3_U1 & 4.1.4.  Fix up Savannah links.

	* misc.c (message, error, fatal): Don't use "..." if we're using
	varargs.  ansi2knr should handle this but it doesn't work: it
	translates "..." to va_dcl etc. but _AFTER_ the preprocessor is
	done.  On many systems (SunOS for example) va_dcl is a #define.
	So, force the use of the non-"..." version on pre-ANSI compilers.

	* maintMakefile (sign-dist): Create some rules to help automate
	the new GNU ftp upload method.

2004-02-24  Paul D. Smith  <psmith@gnu.org>

	* config.h.W32.template: Add HAVE_STDARG_H
	* config.h-vms.template: Ditto.
	* config.ami.template: Ditto.

2004-02-23  Jonathan Grant  <jg-make@jguk.org>

	* README.W32.template: Add a notation about -j with BATCH_MODE_ONLY.
	* build_w32.bat: Remove extra "+".

2004-02-23  Paul D. Smith  <psmith@gnu.org>

	* make.h: Create an UNUSED macro to mark unused parameters.
	* (many): Clean up warnings by applying UNUSED, fixing
	signed/unsigned incompatibilities, etc.

	* acinclude.m4 (AC_STRUCT_ST_MTIM_NSEC): Add quoting to silence
	autoconf warnings.
	* filedef.h: Name the command_state enumeration.
	* file.c (set_command_state): Use the enumeration in the function
	argument.

	* configure.in: Explicitly set SET_MAKE to empty, to disable
	MAKE=make even when no make already exists.  Fix bug #3823.

2004-02-22  Paul D. Smith  <psmith@gnu.org>

	* maintMakefile: Perl script to clean up all non-CVS files.  Use
	it on all the subdirectories for the cvs-clean target.

	* main.c (decode_switches): Require non-empty strings for all our
	string command-line options.  Fixes Debian bug # 164165.

	* configure.in: Check for stdarg.h and varargs.h.
	* make.h (USE_VARIADIC): Set this if we can use variadic functions
	for printing messages.
	* misc.c: Check USE_VARIADIC instead of (obsolete) HAVE_STDVARARGS.
	(message): Ditto.
	(error): Ditto.
	(fatal): Ditto.

	A number of patches for OS/2 support from Andreas Buening
	<andreas.buening@nexgo.de>:

	* job.c (child_handler) [OS/2]: Allow this on OS/2 but we have to
	disable the SIGCHLD handler.
	(reap_children) [OS/2]: Remove special handling of job_rfd.
	(set_child_handler_action_flags) [OS/2]: Use this function in OS/2.
	(new_job) [OS/2]: Disable the SIGCHLD handler on OS/2.
	* main.c (main) [OS/2]: Special handling for paths in OS/2.
	* configure.in [OS/2]: Force SA_RESTART for OS/2.
	* Makefile.am (check-regression): Use $(EXEEXT) for Windows-type
	systems.

2004-02-21  Paul D. Smith  <psmith@gnu.org>

	* w32/subproc/sub_proc.c (process_easy) [W32]: Christoph Schulz
	<mail@kristov.de> reports that if process_begin() fails we don't
	handle the error condition correctly in all cases.
	* w32/subproc/w32err.c (map_windows32_error_to_string): Make sure
	to have a newline on the message.

	* job.c (construct_command_argv_internal): Add "test" to UNIX
	sh_cmds[].  Fixes Savannah bug # 7606.

2004-02-04  Paul D. Smith  <psmith@gnu.org>

	* job.c (vms_handle_apos) [VMS]: Fix various string handling
	situations in VMS DCL.  Fixes Savannah bug #5533.  Fix provided by
	Hartmut Becker <Hartmut.Becker@hp.com>.

2004-01-21  Paul D. Smith  <psmith@gnu.org>

	* job.c (load_too_high): Implement an algorithm to control the
	"thundering herd" problem when using -l to control job creation
	via the load average.  The system only recomputes the load once a
	second but we can start many jobs in a second.  To solve this we
	keep track of the number of jobs started in the last second and
	apply a weight to try to guess what a correct load would be.
	The algorithm was provided by Thomas Riedl <thomas.riedl@siemens.com>.
	Also fixes bug #4693.
	(reap_children): Decrease the job count for this second.
	(start_job_command): Increase the job count for this second.

	* read.c (conditional_line): Expand the text after ifn?def before
	checking to see if it's a single word.  Fixes bug #7257.

2004-01-09  Paul D. Smith  <psmith@gnu.org>

	* file.c (print_file): Recurse to print all targets in
	double-colon rules.  Fixes bug #4518, reported (with patch) by
	Andrew Chatham <chatham@google.com>.

2004-01-07  Paul D. Smith  <psmith@gnu.org>

	* acinclude.m4: Remove make_FUNC_SETVBUF_REVERSED.
	* configure.in: Change make_FUNC_SETVBUF_REVERSED to
	AC_FUNC_SETVBUF_REVERSED.

	* doc/make.texi (Target-specific): Fix Savannah bug #1772.
	(MAKE Variable): Fix Savannah bug #4898.

	* job.c (construct_command_argv_internal): Add "!" to the list of
	shell escape chars.  POSIX sh allows it to appear before a
	command, to negate the exit code.  Fixes bug #6404.

	* implicit.c (pattern_search): When matching an implicit rule,
	remember which dependencies have the ignore_mtime flag set.
	Original fix provided in Savannah patch #2349, by Benoit
	Poulot-Cazajous <Benoit.Poulot-Cazajous@jaluna.com>.

2003-11-22  Paul D. Smith  <psmith@gnu.org>

	* README.W32.template (Outputs): Clarification on -j with
	BATCH_MODE_ONLY_SEHLL suggested by Jonathan R. Grant
	<jg-make@jguk.org>.

2003-11-02  Paul D. Smith  <psmith@gnu.org>

	* function.c (func_if): Strip all the trailing whitespace from the
	condition, then don't expand it.  Fixed bug # 5798.

	* expand.c (recursively_expand_for_file): If we're expanding a
	variable with no file context, then use the variable's context.
	Fixes bug # 6195.

2003-10-21  Paul D. Smith  <psmith@gnu.org>

	* main.c (log_working_directory): Add newlines to printf()s.

	* README.cvs: Add a note to ignore warnings during autoreconf.

	* maintMakefile (po_repo): Set a new URL for PO file updates.
	(get-config/config.guess get-config/config.sub): Get these files
	from the Savannah config project instead of ftp.gnu.org.

2003-10-05  Paul Eggert  <eggert@twinsun.com>

	* main.c (main): Avoid potential subscript error if environ has
	short strings.

2003-08-22  Paul D. Smith  <psmith@gnu.org>

	* misc.c (xmalloc, xrealloc): Add one to 0 sizes, to cater to
	systems which don't yet implement the C89 standard :-/.

2003-07-18  Paul D. Smith  <psmith@gnu.org>

	* dir.c (directory_contents_hash_1, directory_contents_hash_1)
	[WINDOWS32]: Initialize hash.

2003-06-19  Earnie Boyd  <earnie@uses.sf.net>

	* dir.c (read_dirstream): Provide a workaround for broken versions of
	the MinGW dirent structure.

2003-05-30  Earnie Boyd  <earnie@users.sf.net>

	* w32/include/dirent.h: Add __MINGW32__ filter.

2003-05-30  Earnie Boyd  <earnie@users.sf.net>

	* make.h: Add global declaration of *make_host.
	* main.c (print_usage): Remove local declaration of *make_host.
	(print_version): Display "This program built for ..." after Copyright
	notice.

2003-05-30  Earnie Boyd  <earnie@users.sf.net>

	* doc/make.texi: Change "ifinfo" to "ifnottex" as suggested by the
	execution of "makeinfo --html make.texi".

2003-04-30  Paul D. Smith  <psmith@gnu.org>

	* build.template: Make some changes to maybe allow this script to
	work on DOS/Windows/OS2 systems.  Suggested by Andreas Buening.

	* README.OS2.template: New file for OS/2 support.  Original
	contributed by Andreas Buening.
	* configure.in: Invoke new pds_AC_DOS_PATHS macro to test for
	DOS-style paths.

2003-04-19  Paul D. Smith  <psmith@gnu.org>

	Fix bug #1405: allow a target to match multiple pattern-specific
	variables.

	* rule.c (create_pattern_var, lookup_pattern_var): Move these to
	variable.c, where they've always belonged.
	* rule.h: Move the prototypes and struct pattern_var as well.
	* variable.c (initialize_file_variables): Invoke
	lookup_pattern_var() in a loop, until no more matches are found.
	If a match is found, create a new variable set for the target's
	pattern variables.  Then merge the contents of each matching
	pattern variable set into the target's pattern variable set.
	(lookup_pattern_var): Change this function to be usable
	in a loop.  It takes a starting position: if NULL, start at the
	beginning; if non-NULL, start with the pattern variable after that
	position, and return the next matching pattern.
	(create_pattern_var): Create a unique instance of
	pattern-specific variables for every definition in the makefile.
	Don't combine the same pattern together.  This allows us to
	process the variable handling properly even when the same pattern
	is used multiple times.
	(parse_variable_definition): New function: break out the parsing
	of a variable definition line from try_variable_definition.
	(try_variable_definition): Call parse_variable_definition to
	parse.
	(print_variable_data_base): Print out pattern-specific variables.
	* variable.h (struct variable): Remember when a variable is
	conditional.  Also remember its flavor.
	(struct pattern_var): Instead of keeping a variable set, we just
	keep a single variable for each pattern.
	* read.c (record_target_var): Each pattern variable contains only a
	single variable, not a set, so create it properly.
	* doc/make.texi (Pattern-specific): Document the new behavior.

2003-04-17  Paul D. Smith  <psmith@gnu.org>

	* dir.c (file_exists_p) [VMS]: Patch provided with Bug #3018 by
	Jean-Pierre Portier <portierjp2@free.fr>.  I don't understand the
	file/directory naming rules for VMS so I can't tell whether this
	is correct or not.

2003-04-09  Paul D. Smith  <psmith@gnu.org>

	* configure.in (HAVE_DOS_PATHS): Define this on systems that need
	DOS-style pathnames: backslash separators and drive specifiers.

2003-03-28  Paul D. Smith  <psmith@gnu.org>

	* file.c (snap_deps): If .SECONDARY with no targets is given, set
	the intermediate flag on all targets.  Fixes bug #2515.

2003-03-24  Paul D. Smith  <psmith@gnu.org>

	* configure.in, Makefile.am, glob/Makefile.am, doc/Makefile.am:
	Upgrade to autoconf 2.57 and automake 1.7.3.

	* job.c: More OS/2 changes from Andreas Buening.

	* file.c (print_file): Fix variable initialization.
	Fixes bug #2892.

	* remake.c (notice_finished_file):

	* make.h (ENULLLOOP): Set errno = 0 before invoking the command;
	some calls (like readdir()) return NULL in valid situations
	without resetting errno.  Fixes bug #2846.

2003-02-25  Paul D. Smith  <psmith@gnu.org>

	Port to OS/2 (__EMX__) by Andreas Buening <andreas.buening@nexgo.de>.

	* job.c (_is_unixy_shell) [OS/2]: New function.
	Set default shell to /bin/sh.
	(reap_children): Close the job_rfd pipe here since we don't use a
	SIGCHLD handler.
	(set_child_handler_action_flags): define this to empty on OS/2.
	(start_job_command): Close the jobserver pipe and use
	child_execute_job() instead of fork/exec.
	(child_execute_job): Rewrite to handle stdin/stdout FDs and spawn
	rather than exec'ing, then reconfigure stdin/stdout.
	(exec_command): Rewrite to use spawn instead of exec.  Return the
	PID of the child.

	* main.c (main) [OS/2]: Call initialize_main().  Handle argv[0] as
	in DOS.  Handle the TEMP environment variable as in DOS.  Don't
	use a SIGCHLD handler on OS/2.  Choose a shell as in DOS.  Don't
	use -j in DOS mode.  Use child_execute_job() instead of
	exec_command().

	* function.c (func_shell) [OS/2]: Can't use fork/exec on OS/2: use
	spawn() instead.

	* job.h [OS/2]: Move CLOSE_ON_EXEC here from job.c.  Add
	prototypes that return values.

	* remake.c (f_mtime) [OS/2]: Handle FAT timestamp offsets for OS/2.

	* read.c (readline) [OS/2]: Don't handle CRLF specially on OS/2.
	* default.c (default_suffixes) [OS/2]: Set proper default suffixes
	for OS/2.
	* vpath.c (construct_vpath_list) [OS/2]: Handle OS/2 paths like
	DOS paths.

2003-02-24  Paul D. Smith  <psmith@gnu.org>

	* default.c [VMS]: New default rules for .cxx -> .obj compiles.
	* job.c (child_execute_job) [VMS]: New code for handling spawn().
	(child_execute_job) [VMS]: Handle error status properly.
	Patches provided by Hartmut Becker <Hartmut.Becker@compaq.com>.

	* function.c (func_shell): Use EINTRLOOP() while reading from the
	subshell pipe (Fixes bug #2502).
	* job.c (free_child): Use EINTRLOOP() while writing tokens to the
	jobserver pipe.
	* main.c (main): Ditto.

2003-01-30  Paul D. Smith  <psmith@gnu.org>

	* read.c (eval): eval() was not fully reentrant, because the
	collapsed buffer was static.  Change it to be an automatic
	variable so that eval() can be invoked recursively.
	Fixes bug # 2238.
	(eval): Apply patch # 1022: fix memory reference error on long
	target-specific variable lines.
	Patch provided by Steve Brown <Steve.Brown@macquarie.com>.

	* function.c (check_numeric): Combine the is_numeric() function
	into this function, since it's only called from one place.
	Constify this function.  Have it print the incorrect string in the
	error message.  Fixes bug #2407.
	(strip_whitespace): Constify.
	(func_if): Constify.
	* expand.c (expand_argument): Constify.

2003-01-29  Paul D. Smith  <psmith@gnu.org>

	Fix bug # 2169, also reported by other people on various systems.

	* make.h: Some systems, such as Solaris and PTX, do not fully
	implement POSIX-compliant SA_RESTART functionality; important
	system calls like stat() and readdir() can still fail with EINTR
	even if SA_RESTART has been set on the signal handler.  So,
	introduce macros EINTRLOOP() and ENULLLOOP() which can loop on
	EINTR for system calls which return -1 or 0 (NULL), respectively,
	on error.
	Also, remove the old atomic_stat()/atomic_readdir() and
	HAVE_BROKEN_RESTART handling.

	* configure.in: Remove setting of HAVE_BROKEN_RESTART.

	* arscan.c (ar_member_touch): Use EINTRLOOP() to wrap fstat().
	* remake.c (touch_file): Ditto.

	* commands.c (delete_target): Use EINTRLOOP() to wrap stat().
	* read.c (construct_include_path): Ditto.
	* remake.c (name_mtime): Ditto.
	* vpath.c (selective_vpath_search): Ditto.
	* dir.c (find_directory): Ditto.
	(local_stat): Ditto.
	(find_directory): Use ENULLLOOP() to wrap opendir().
	(dir_contents_file_exists_p): Use ENULLLOOP() to wrap readdir().

	* misc.c: Remove HAVE_BROKEN_RESTART, atomic_stat(), and
	atomic_readdir() handling.

2003-01-22  Paul D. Smith  <psmith@gnu.org>

	* function.c (func_call): Fix Bug #1744.  If we're inside a
	recursive invocation of $(call ...), mask any of the outer
	invocation's arguments that aren't used by this one, so that this
	invocation doesn't "inherit" them accidentally.

2002-12-05  Paul D. Smith  <psmith@gnu.org>

	* function.c (subst_expand): Valery Khamenia reported a
	pathological performance hit when doing substitutions on very
	large values with lots of words: turns out we were invoking
	strlen() a ridiculous number of times.  Instead of having each
	call to sindex() call strlen() again, keep track of how much of
	the text we've seen and pass the length to sindex().

2002-11-19  Paul D. Smith  <psmith@gnu.org>

	* README.cvs, configure.in: Upgrade to require autoconf 2.56.


2002-11-16  Paul D. Smith  <psmith@gnu.org>

	* NMakefile.template (OBJS): Add hash.c object file.
	* SMakefile.template (srcs): Ditto.
	* Makefile.ami (objs): Ditto.
	* build_w32.bat: Ditto.

	* Makefile.DOS.template: Remove extra dependencies.

2002-10-25  Paul D. Smith  <psmith@gnu.org>

	* expand.c (install_variable_buffer): New function.  Install a new
	variable_buffer context and return the previous one.
	(restore_variable_buffer): New function.  Free the current
	variable_buffer context and put a previously saved one back.
	* variable.h: Prototypes for {install,restore}_variable_buffer.
	* function.c (func_eval): Push a new variable_buffer context
	before we eval, then restore the old one when we're done.
	Fixes Bug #1517.

	* read.c (install_conditionals): New function.  Install a new
	conditional context and return the previous one.
	(restore_conditionals): New function.  Free the current
	conditional context and put a previously saved one back.
	(eval): Use the {install,restore}_conditionals for "include"
	handling.
	(eval_buffer): Use {install,restore}_conditionals to preserve the
	present conditional state before we evaluate the buffer.
	Fixes Bug #1516.

	* doc/make.texi (Quick Reference): Add references to $(eval ...)
	and $(value ...).
	(Recursion): Add a variable index entry for CURDIR.

	* README.cvs: Update to appropriate versions.
	* Makefile.am (nodist_loadavg_SOURCES): automake gurus point out I
	don't need to copy loadavg.c: automake is smart enough to create
	it for me.  Still have a bug in automake related to ansi2knr tho.

2002-10-14  Paul D. Smith  <psmith@gnu.org>

	* remake.c (notice_finished_file): Only touch targets if they have
	at least one command (as per POSIX).  Resolve Bug #1418.

	* *.c: Convert to using ANSI C-style function definitions.
	* Makefile.am: Enable the ansi2knr feature of automake.
	* configure.in: ditto.

2002-10-13  Paul D. Smith  <psmith@gnu.org>

	* commands.c (set_file_variables): Bug #1379: Don't use alloca()
	for automatic variable values like $^, etc.  In the case of very
	large lists of prerequisites this causes problems.  Instead reuse
	a static buffer (resizeable) for each variable.

	* read.c (eval): Fix Bug #1391: allow "export" keyword in
	target-specific variable definitions.  Check for it and set an
	"exported" flag.
	(record_target_var): Set the export field to v_export if the
	"exported" flag is set.
	* doc/make.texi (Target-specific): Document the ability to use
	"export".

	* doc/make.texi: Change the name of the section on automatic
	variables from "Automatic" to "Automatic Variables".  Added text
	clarifying the scope of automatic variables.

2002-10-04  Paul D. Smith  <psmith@gnu.org>

	* read.c (eval): Allow SysV $$@ variables to use {} braces as well
	as () braces.
	(record_files): Ditto.

	* expand.c (variable_expand_string): In $(A:x=y) expansion limit
	the search for the '=' to only within the enclosing parens.

2002-10-03  Paul D. Smith  <psmith@gnu.org>

	Version 3.80 released.

	* dir.c: Change hash functions to use K&R function definition style.
	* function.c: Ditto.
	* read.c: Ditto.
	* variable.c: Ditto.

	Update to automake 1.7.

	* Makefile.am (AUTOMAKE_OPTIONS): Update to require 1.7.
	(pdf): Remove this target as automake now provides one.

	* configure.in: Change AM_CONFIG_HEADER to AC_CONFIG_HEADERS.

2002-09-30  Martin P.J. Zinser  <zinser@decus.de>

	* makefile.com: Updates for GNU make 3.80.
	* makefile.vms: Ditto.

2002-09-23  Paul D. Smith  <psmith@gnu.org>

	* read.c (enum make_word_type): Remove w_comment.
	(get_next_mword): Don't treat comment characters as special; where
	this function is used we will never see a comment (it's stripped
	before we get here) and treating comments specially means that
	targets like "foo\#bar" aren't handled properly.

2002-09-18  Paul D. Smith  <psmith@gnu.org>

	* doc/make.texi (Bugs): Update with some info on Savannah, etc.

	* read.c (eval): Expansion of arguments to export/unexport was
	ignoring all arguments after the first one.  Change the algorithm
	to expand the whole line once, then parse the results.

2002-09-17  Paul D. Smith  <psmith@gnu.org>

	Fix Bug #940 (plus another bug I found while looking at this):

	* read.c (record_target_var): enter_file() will add a new entry if
	it's a double-colon target: we don't want to do that in this
	situation.  Invoke lookup_file() and only enter_file() if it does
	not already exist.  If the file we get back is a double-colon then
	add this variable to the "root" double-colon target.

	* variable.c (initialize_file_variables): If this file is a
	double-colon target but is not the "root" target, then initialize
	the root and make the root's variable list the parent of our
	variable list.

2002-09-13  Paul D. Smith  <psmith@gnu.org>

	* doc/make.texi (MAKE Variable): Add some indexing for "+".

	* hash.c (round_up_2): Get rid of a warning.

2002-09-12  Paul D. Smith  <psmith@gnu.org>

	* Makefile.am (loadavg_SOURCES, loadavg.c): Tiptoe around automake
	so it doesn't complain about getloadavg.c.

	* commands.c (set_file_variables): Make sure we always alloca() at
	least 1 character for the value of $? (for '\0').

2002-09-11  Paul D. Smith  <psmith@gnu.org>

	* hash.h (STRING_COMPARE, ISTRING_COMPARE, STRING_N_COMPARE): Fix
	macro to use RESULT instead of the incorrect _RESULT_.

	* make.h (HAVE_BROKEN_RESTART): Add prototypes for atomic_stat()
	and atomic_readdir().  We need to #include dirent.h to get this to
	work.
	* misc.c (atomic_readdir): Fix typos.

2002-09-10  Paul D. Smith  <psmith@gnu.org>

	* read.c (eval): Expand variable lists given to export and
	unexport, so that "export $(LIST_OF_VARIABLES)" (etc.) works.
	(conditional_line): Ditto for "ifdef".  Fixes bug #103.

	* doc/make.texi (Variables/Recursion): Document this.
	(Conditional Syntax): And here.

2002-09-09  Paul D. Smith  <psmith@gnu.org>

	* configure.in: Check for memmove().

2002-09-07  Paul D. Smith  <psmith@gnu.org>

	* configure.in (HAVE_BROKEN_RESTART): Define this on PTX systems;
	Michael Sterrett <msterret@coat.com> reports that while it has
	SA_RESTART, it does not work properly.

	* misc.c (atomic_stat): If HAVE_BROKEN_RESTART, create a function
	that invokes stat() and loops to do it again if it returns EINTR.
	(atomic_readdir): Ditto, with readdir().

	* make.h (stat, readdir): If HAVE_BROKEN_RESTART, alias stat()
	and readdir() to atomic_stat() and atomic_readdir().

2002-09-04  Paul D. Smith  <psmith@gnu.org>

	* implicit.c (pattern_search): Daniel <barkalow@reputation.com>
	reports that GNU make sometimes doesn't recognize that targets can
	be made, when directories can be created as prerequisites.  He
	reports that changing the order of predicates in the DEP->changed
	flag test so that lookup_file() is always performed, solves this
	problem.

2002-08-08  Paul D. Smith  <psmith@gnu.org>

	* configure.in: Require a newer version of gettext.

	* misc.c (perror_with_name): Translate the format string (for
	right-to-left language support).
	(pfatal_with_name): Ditto.

	* main.c: Create a static array of strings to store the usage
	text.  This is done to facilitate translations.
	(struct command_switch): Remove argdesc and description fields.
	(switches): Remove values for obsolete fields.
	(print_usage): Print each element of the usage array.

	* hash.c: Change function definitions to be K&R style.

2002-08-02  Paul D. Smith  <psmith@gnu.org>

	* NEWS: Remove the mention of .TARGETS; we aren't going to publish
	this one because it's too hard to get right.  We'll look at it for
	a future release.
	* main.c (main): Don't create the .TARGETS variable.
	* variable.c (handle_special_var): Don't handle .TARGETS.

2002-08-01  Paul D. Smith  <psmith@gnu.org>

	* main.c (switches): Add a new option, -B (--always-make).  If
	specified, make will rebuild all targets that it encounters even
	if they don't appear to be out of date.
	(always_make_flag): New flag.
	* make.h: Extern always_make_flag.
	* remake.c (update_file_1): Check always_make_flag; if it's set we
	will always rebuild any target we can, even if none of its
	prerequisites are newer.
	* NEWS: Mention it.

	* doc/make.texi (Shell Function): Make it clear that make
	variables marked as "export" are not passed to instances of the
	shell function.

	Add new introspection variable .VARIABLES and .TARGETS.

	* variable.c (handle_special_var): New function.  If the variable
	reference passed in is "special" (.VARIABLES or .TARGETS),
	calculate the new value if necessary.  .VARIABLES is handled here:
	walk through the hash of defined variables and construct a value
	which is a list of the names.  .TARGETS is handled by
	build_target_list().
	(lookup_variable): Invoke handle_special_var().
	* file.c (build_target_list): Walk through the hask of known files
	and construct a list of the names of all the ones marked as
	targets.
	* main.c (main): Initialize them to empty (and as simple variables).
	* doc/make.texi (Special Variables): Document them.
	* NEWS: Mention them.

	* variable.h (struct variable): Add a new flag "exportable" which
	is true if the variable name is valid for export.
	* variable.c (define_variable_in_set): Set "exportable" when a new
	variable is defined.
	(target_environment): Use the "exportable" flag	instead of
	re-checking the name here... an efficiency improvement.

2002-07-31  Paul D. Smith  <psmith@gnu.org>

	* config.h-vms.template: Updates to build on VMS.  Thanks to
	Brian_Benning@aksteel.com for helping verify the build.
	* makefile.com: Build the new hash.c file.
	* hash.h: Use strcpmi(), not stricmp(), in the
	HAVE_CASE_INSENSITIVE_FS case.

2002-07-30  Paul D. Smith  <psmith@gnu.org>

	* hash.h (ISTRING_COMPARE, return_ISTRING_COMPARE): Add missing
	backslashes to the HAVE_CASE_INSENSITIVE_FS case.
	Reported by <Brian_Benning@aksteel.com>.

2002-07-10  Paul D. Smith  <psmith@gnu.org>

	* variable.c (pop_variable_scope): Remove variable made unused by
	new hash infrastructure.
	* read.c (dep_hash_cmp): Rewrite this to handle ignore_mtime
	comparisons as well as name comparisons.
	* variable.h: Add a prototype for new hash_init_function_table().
	* file.c (lookup_file): Remove variables made unused by new hash
	infrastructure.
	* dir.c (directory_contents_hash_2): Missing return of hash value.
	(dir_contents_file_exists_p): Remove variables made unused by new
	hash infrastructure.


	Installed Greg McGary's integration of the hash functions from the
	GNU id-utils package:

2002-07-10  Greg McGary  <greg@mcgary.org>

	* scripts/functions/filter-out: Add literals to to the
	pattern space in order to add complexity, and trigger
	use of an internal hash table.  Fix documentation strings.
	* scripts/targets/INTERMEDIATE: Reverse order of files
	passed to expected `rm' command.

2002-07-10  Greg McGary  <greg@mcgary.org>

	* Makefile.am (SRCS): Add hash.c (noinst_HEADERS): Add hash.h
	* hash.c: New file, taken from id-utils.
	* hash.h: New file, taken from id-utils.

	* make.h (HASH, HASHI): Remove macros.
	(find_char_unquote): Change arglist in decl.
	(hash_init_directories): New function decl.
	* variable.h (hash.h): New #include.
	(MAKELEVEL_NAME, MAKELEVEL_LENGTH): New constants.
	* filedef.h (hash.h): New #include.
	(struct file) [next]: Remove member.
	(file_hash_enter): Remove function decl.
	(init_hash_files): New function decl.

	* ar.c (ar_name): Delay call to strlen until needed.
	* main.c (initialize_global_hash_tables): New function.
	(main): Call it.  Use MAKELEVEL_NAME & MAKELEVEL_LENGTH.
	* misc.c (remove_comments): Pass char constants to find_char_unquote.
	* remake.c (notice_finished_file): Update last_mtime on `prev' chain.

	* dir.c (hash.h): New #include.
	(struct directory_contents) [next, files]: Remove members.
	[ctime]: Add member for VMS.  [dirfiles]: Add hash-table member.
	(directory_contents_hash_1, directory_contents_hash_2,
	directory_contents_hash_cmp): New functions.
	(directories_contents): Change type to `struct hash_table'.
	(struct directory) [next]: Remove member.
	(directory_hash_1, directory_hash_2, directory_hash_cmp): New funcs.
	(directory): Change type to `struct hash_table'.
	(struct dirfile) [next]: Remove member.
	[length]: Add member.  [impossible]: widen type to fill alignment gap.
	(dirfile_hash_1, dirfile_hash_2, dirfile_hash_cmp): New functions.
	(find_directory): Use new hash table package.
	(dir_contents_file_exists_p): Likewise.
	(file_impossible): Likewise.
	(file_impossible_p): Likewise.
	(print_dir_data_base): Likewise.
	(open_dirstream): Likewise.
	(read_dirstream): Likewise.
	(hash_init_directories): New function.

	* file.c (hash.h): New #include.
	(file_hash_1, file_hash_2, file_hash_cmp): New functions.
	(files): Change type to `struct hash_table'.
	(lookup_file): Use new hash table package.
	(enter_file): Likewise.
	(remove_intermediates): Likewise.
	(snap_deps): Likewise.
	(print_file_data_base): Likewise.

	* function.c
	(function_table_entry_hash_1, function_table_entry_hash_2,
	function_table_entry_hash_cmp): New functions.
	(lookup_function): Remove `table' argument.
	Use new hash table package.
	(struct a_word) [chain, length]: New members.
	(a_word_hash_1, a_word_hash_2, a_word_hash_cmp): New functions.
	(struct a_pattern): New struct.
	(func_filter_filterout): Pass through patterns noting boundaries
	and '%', if present.  Note a_word length.  Use a hash table if
	arglists are large enough to justify cost.
	(function_table_init): Renamed from function_table.
	(function_table): Declare as `struct hash_table'.
	(FUNCTION_TABLE_ENTRIES): New constant.
	(hash_init_function_table): New function.

	* read.c (hash.h): New #include.
	(read_makefile): Pass char constants to find_char_unquote.
	(dep_hash_1, dep_hash_2, dep_hash_cmp): New functions.
	(uniquize_deps): Use hash table to efficiently identify duplicates.
	(find_char_unquote): Accept two char-constant stop chars, rather
	than a string constant, avoiding zillions of calls to strchr.
	Tighten inner search loops to test only for desired delimiters.

	* variable.c (variable_hash_1, variable_hash_2,
	variable_hash_cmp): New functions.
	(variable_table): Declare as `struct hash_table'.
	(global_variable_set): Remove initialization.
	(init_hash_global_variable_set): New function.
	(define_variable_in_set): Use new hash table package.
	(lookup_variable): Likewise.
	(lookup_variable_in_set): Likewise.
	(initialize_file_variables): Likewise.
	(pop_variable_scope): Likewise.
	(create_new_variable_set): Likewise.
	(merge_variable_sets): Likewise.
	(define_automatic_variables): Likewise.
	(target_environment): Likewise.
	(print_variable_set): Likewise.

2002-07-10  Paul D. Smith  <psmith@gnu.org>

	Implement the SysV make syntax $$@, $$(@D), and $$(@F) in the
	prerequisite list.  A real SysV make will expand the entire
	prerequisites list _twice_: we don't do that as it's a big
	backward-compatibility problem.  We only replace those specific
	variables.

	* read.c (record_files): Replace any $@, $(@D), and $(@F) variable
	references left in the list of prerequisites.  Check for .POSIX as
	we record targets, so we can disable non-POSIX behavior while
	reading makefiles as well as running them.
	(eval): Check the prerequisite list to see if we have anything
	that looks like a SysV prerequisite variable reference.

2002-07-09  Paul D. Smith  <psmith@gnu.org>

	* doc/make.texi (Prerequisite Types): Add a new section describing
	order-only prerequisites.

	* read.c (uniquize_deps): If we have the same file as both a
	normal and order-only prereq, get rid of the order-only prereq,
	since the normal one supersedes it.

2002-07-08  Paul D. Smith  <psmith@gnu.org>

	* AUTHORS: Added Greg McGary to the AUTHORS file.
	* NEWS: Blurbed order-only prerequisites.
	* file.c (print_file): Show order-only deps properly when printing
	the database.

	* maintMakefile: Add "update" targets for wget'ing the latest
	versions of various external files.  Taken from Makefile.maint in
	autoconf, etc.

	* dosbuild.bat: Somehow we got _double_ ^M's.  Remove them.
	Reported by Eli Zaretskii <eliz@is.elta.co.il>.

2002-07-07  Paul D. Smith  <psmith@gnu.org>

	* po/*.po: Remove.  We'll use wget to retrieve them at release
	time.

	* variable.c (do_variable_definition) [W32]: On W32 using cmd
	rather than a shell you get an exception.  Make sure we look up
	the variable.  Patch provided by Eli Zaretskii <eliz@is.elta.co.il>.

	* remake.c (notice_finished_file): Fix handling of -t flag.
	Patch provided by Henning Makholm <henning@makholm.net>.

	* implicit.c (pattern_search): Some systems apparently run short
	of stack space, and using alloca() in this function caused an
	overrun.  I modified it to use xmalloc() on the two variables
	which seemed like they might get large.  Fixes Bug #476.

	* main.c (print_version): Update copyright notice to conform with
	GNU standards.
	(print_usage): Update help output.

	* function.c (func_eval): Create a new make function, $(eval
	...).  Expand the arguments, put them into a buffer, then invoke
	eval_buffer() on the resulting string.
	(func_quote): Create a new function, $(quote VARNAME).  Inserts
	the value of the variable VARNAME without expanding it any
	further.

	* read.c (struct ebuffer): Change the linebuffer structure to an
	"eval buffer", which can be either a file or a buffer.
	(eval_makefile): Move the code in the old read_makefile() which
	located a makefile into here: create a struct ebuffer with that
	information.  Have it invoke the new function eval() with that
	ebuffer.
	(eval_buffer): Create a new function that creates a struct ebuffer
	that holds a string buffer instead of a file.  Have it invoke
	eval() with that ebuffer.
	(eval): New function that contains the guts of the old
	read_makefile() function: this function parses makefiles.  Obtains
	data to parse from the provided ebuffer.  Some modifications to
	make the flow of the function cleaner and clearer.  Still could
	use some work here...
	(do_define): Takes a struct ebuffer instead of a FILE*.  Read the
	contents of the define/endef variable from the ebuffer.
	(readstring): Read the next line from a string-style ebuffer.
	(readline): Read the next line from an ebuffer.  If it's a string
	ebuffer, invoke readstring().  If it's a FILE* ebuffer, read it
	from the file.

	* dep.h (eval_buffer): Prototype eval_buffer();

	* variable.c (do_variable_definition): Make sure that all
	non-target-specific variables are registered in the global set.
	If we're invoked from an $(eval ...) we might be inside a $(call
	...) or other function which has pushed a variable scope; we still
	want to define our variables from evaluated makefile code in the
	global scope.

2002-07-03  Greg McGary  <greg@mcgary.org>

	* dep.h (struct dep) [ignore_mtime]: New member.
	[changed]: convert to a bitfield.
	* implicit.c (pattern_search): Zero ignore_mtime.
	* main.c (main, handle_non_switch_argument): Likewise.
	* rule.c (convert_suffix_rule): Likewise.
	* read.c (read_all_makefiles, read_makefile, multi_glob): Likewise.
	(read_makefile): Parse '|' in prerequisite list.
	(uniquize_deps): Consider ignore_mtime when comparing deps.
	* remake.c (update_file_1, check_dep): Don't force remake for
	dependencies that have d->ignore_mtime.
	* commands.c (FILE_LIST_SEPARATOR): New constant.
	(set_file_variables): Don't include a
	prerequisite in $+, $^ or $? if d->ignore_mtime.
	Define $|.

2002-06-18  Paul D. Smith  <psmith@gnu.org>

	* make.texinfo: Updates for next revision.  New date/rev/etc.
	Recreate all Info menus.  Change license on the manual to the GNU
	Free Documentation License.  A number of typos.
	(Variables Simplify): Don't use "-" before it's defined.
	(Automatic Prerequisites): Rewrite the target example to work
	properly if the compile fails.  Remove incorrect comments about
	how "set -e" behaves.
	(Text Functions): Move the "word", "wordlist", "words", and
	"firstword" functions here, from "File Name Functions".
	* make-stds.texi: Update from latest GNU version.
	* fdl.texi: (created) Import the latest GNU version.

2002-06-06  Paul D. Smith  <psmith@gnu.org>

	* variable.c (do_variable_definition): New function: extract the
	part of try_variable_definition() that actually sets the value
	into a separate function.
	(try_variable_definition): Call do_variable_definition() after
	parsing the variable definition string.
	(define_variable_in_set): Make the name argument const.

	* variable.h (enum variable_flavor): Make public.
	(do_variable_definition): Create prototype.

	* read.c (read_all_makefiles): Create a new built-in variable,
	MAKEFILE_LIST.
	(read_makefile): Add each makefile read in to this variable value.

2002-05-18  Eli Zaretskii  <eliz@is.elta.co.il>

	* Makefile.DOS.template: Tweak according to changes in the
	distribution.  Add back the dependencies of *.o files.

	* configh.dos.template: Synchronize with config.h.in.

2002-05-09  Paul D. Smith  <psmith@gnu.org>

	* file.c (file_timestamp_now): Use K&R function declaration.

	* getloadavg.c (getloadavg): Merge setlocale() fix from sh-utils
	getloadavg.c.  Autoconf thinks QNX is SVR4-like, but it isn't, so
	#undef it.  Remove predefined setup of NLIST_STRUCT.  Decide
	whether to include nlist.h based on HAVE_NLIST_H.  Change obsolete
	NLIST_NAME_UNION to new HAVE_STRUCT_NLIST_N_UN_N_NAME.
	* configure.in (NLIST_STRUCT): Define this if we have nlist.h and
	nlist.n_name is a pointer rather than an array.

	* acinclude.m4 (make_FUNC_SETVBUF_REVERSED): Grab the latest
	version of AC_FUNC_SETVBUF_REVERSED from autoconf CVS.
	* configure.in: Use it instead of the old version.

	* main.c (main): Prefer setvbuf() to setlinebuf().

2002-05-08  Paul D. Smith  <psmith@gnu.org>

	* Makefile.am (make_LDADD): Add GETLOADAVG_LIBS.
	(loadavg_LDADD): Ditto.

2002-04-29  Paul D. Smith  <psmith@gnu.org>

	* expand.c (recursively_expand_for_file): Rename
	recursively_expand() to recursively_expand_for_file() and provide
	an extra argument, struct file.  If the argument is provided, set
	the variable scope to that of the file before expanding.
	* variable.h (recursively_expand): Make this a macro that invokes
	recursively_expand_for_file() with a NULL file pointer.
	* variable.c (target_environment): Call the renamed function and
	provide the current file context.
	Fixes Debian bug #144306.

2002-04-28  Paul D. Smith  <psmith@gnu.org>

	Allow $(call ...) user-defined variables to be self-referencing
	without throwing an error.  Allows implementation of transitive
	closures, among other possibly useful things.
	Requested by: Philip Guenther <guenther@sendmail.com>

	* variable.h (struct variable): Add a new field: exp_count, and
	new macros to hold its size and maximum value.
	(warn_undefined): Make this a macro.
	* variable.c (define_variable_in_set): Initialize it.
	* expand.c (recursively_expand): If we detect recursive expansion
	of a variable, check the exp_count field.  If it's greater than 0
	allow the recursion and decrement the count.
	(warn_undefined): Remove this (now a macro in variable.h).
	* function.c (func_call): Before we expand the user-defined
	function, modify its exp_count field to contain the maximum
	number of recursive calls we'll allow.  After the call, reset it
	to 0.

2002-04-21  Paul D. Smith  <psmith@gnu.org>

	Modified to use latest autoconf (2.53), automake (1.6.1), and
	gettext (0.11.1).  We're using gettext's new "external" support,
	to avoid including libintl source with GNU make.

	* README.cvs: New file.  Explain how to build GNU make from CVS.

	* configure.in: Modify checking for the system glob library.
	Use AC_EGREP_CPP instead of AC_TRY_CPP.  Remove the setting of
	GLOBDIR (we will always put "glob" in SUBDIRS, so automake
	etc. will manage it correctly).  Set an automake conditional
	USE_LOCAL_GLOB to decide whether to compile the glob library.

	* getloadavg.c (main): Include make.h in the "TEST" program to
	avoid warnings.

	* Makefile.am: Remove special rules for loadavg.  Replace them
	with Automake capabilities for building extra programs.

	* signame.c: This file does nothing if the system provide
	strsignal().  If not, it implements strsignal().  If the system
	doesn't define sys_siglist, then we make our own; otherwise we use
	the system version.
	* signame.h: Removed.

	* main.c (main): No need to invoke signame_init().  Update copyright.

	* ABOUT-NLS: Removed.
	* gettext.c: Removed.
	* gettext.h: Get a simplified copy from the gettext package.
	* po/*: Created.
	* i18n/*.po: Moved to po/.
	* i18n/: Removed.

	* config/*: Created.  Contains package configuration helper files.
	* config.guess, config.sub: Moved to config directory.

	* configure.in (AC_CONFIG_FILES): Add po/Makefile.in, config/Makefile.
	Rework to use new-style autoconf features.  Use the "external"
	mode for gettext.  Make the build.sh config file conditional on
	whether build.sh.in exists, to avoid autoconf errors.
	* acinclude.m4: Removed almost all macros as being obsolete.
	Rewrote remaining macros to use AC_DEFINE.
	* acconfig.h: Removed.

	* Makefile.am (EXTRA_DIST): Add config/config.rpath.  Use a
	conditional to handle customs support.  Remove special handling
	for i18n features.

2002-04-20  Paul D. Smith  <psmith@gnu.org>

	* function.c (func_call): Don't mark the argument variables $1,
	etc. as recursive.  They've already been fully expanded so
	there's no need to do it again, and doing so strips escaped $'s.
	Reported by Sebastian Glita <glseba@yahoo.com>.

	* remake.c (notice_finished_file): Walk through double-colon
	entries via the prev field, not the next field!
	Reported by Greg McGary <greg@mcgary.org>.

	* main.c (main): If the user specifies -q and asks for a specific
	target which is a makefile, we got an assert.  In that case it
	turns out we should continue normally instead.

	* i18n/de.po, i18n/fr.po: Installed an updated translation.

	* i18n/he.po: Installed a new translation.

2002-01-07  Paul D. Smith  <psmith@gnu.org>

	* i18n/es.po, i18n/ru.po: Installed an updated translation.

2001-12-04  Paul D. Smith  <psmith@gnu.org>

	* i18n/ja.po: Installed an updated translation.

2001-09-06  Paul Eggert  <eggert@twinsun.com>

	* configure.in (AC_CHECK_HEADERS): Add sys/resource.h.
	(AC_CHECK_FUNCS): Add getrlimit, setrlimit.

	* main.c: Include <sys/resource.h> if it, getrlimit, and setrlimit
	are available.
	(main): Get rid of any avoidable limit on stack size.

2001-09-04  Paul D. Smith  <psmith@gnu.org>

	* i18n/da.po: Installed an updated translation.

2001-08-03  Paul D. Smith  <psmith@gnu.org>

	* i18n/fr.po: Installed an updated translation.
	Resolves Debian	bug #106720.

2001-06-13  Paul D. Smith  <psmith@gnu.org>

	* i18n/da.po, configure.in (ALL_LINGUAS): Installed a new
	translation.

2001-06-11  Paul D. Smith  <psmith@gnu.org>

	* i18n/ko.po: Installed a new translation.

2001-05-06  Paul D. Smith  <psmith@gnu.org>

	Modify the EINTR handling.

	* job.c (new_job): Reorganize the jobserver algorithm.  Reorder
	the way in which we manage the file descriptor/signal handler race
	trap to be more efficient.

2001-05-06  Paul Eggert  <eggert@twinsun.com>

	Restart almost all system calls that are interrupted, instead
	of worrying about EINTR.  The lone exception is the read() for
	job tokens.

	* configure.in (HAVE_SA_RESTART): New macro.
	(MAKE_JOBSERVER): Define to 1 only if HAVE_SA_RESTART.
	* main.c (main): Use SA_RESTART instead of the old,
	nonstandard SA_INTERRUPT.

	* configure.in (AC_CHECK_FUNCS): Add bsd_signal.
	* main.c (bsd_signal): New function or macro,
	if the implementation doesn't supply it.
	(The bsd_signal function will be in POSIX 1003.1-200x.)
	(HANDLESIG): Remove.
	(main, FATAL_SIG): Use bsd_signal instead of signal or HANDLESIG.

	* make.h (EINTR_SET): Remove.
	(SA_RESTART): New macro.

	* arscan.c (ar_member_touch): Don't worry about EINTR.
	* function.c (func_shell): Likewise.
	* job.c (reap_children, free_child, new_job): Likewise.
	* main.c (main): Likewise.
	* remake.c (touch_file, name_mtime): Likewise.

	* arscan.c (ar_member_touch): Fix bug uncovered by EINTR removal;
	if fstat failed with errno!=EINTR, the error was ignored.

	* job.c (set_child_handler_action_flags): New function.
	(new_job): Use it to temporarily clear the SIGCHLD action flags
	while reading the token.

2001-05-02  Paul D. Smith  <psmith@gnu.org>

	* job.c (start_job_command): Don't add define/endef per-line flags
	to the top-level flags setting.

2001-04-03  Paul D. Smith  <psmith@gnu.org>

	* arscan.c (VMS_get_member_info,ar_scan) [VMS]: VMS sets the low
	bit on error, so check for odd return values, not non-0 return
	values.
	(VMS_get_member_info): Calculate the timezone differences correctly.
	Reported by John Fowler <jfowler@nyx.net>.


2001-03-14  Paul D. Smith  <psmith@gnu.org>

	* variable.c (lookup_variable) [VMS]: Null-terminate the variable
	value before invoking define_variable().
	Reported by John Fowler <jfowler@nyx.net>.

2001-02-07  Paul D. Smith  <psmith@gnu.org>

	* read.c (record_target_var): If we reset the variable due to a
	command-line variable setting overriding it, turn off the "append"
	flag.

2001-01-17  Paul D. Smith  <psmith@gnu.org>

	* variable.c (lookup_variable) [VMS]: When getting values from the
	environment, allocate enough space for the _value_ plus escapes,
	not enough space for the name plus escapes :-/.
	Reported by John Fowler <jfowler@nyx.net>.

	* remake.c (f_mtime): Removed the "***" prefix from the mod time
	warnings that make generates, so it doesn't look like an error.
	Reported by Karl Berry <karl@gnu.org>.


	Fix for PR/2020:  Rework appended target-specific variables.  I'm
	fairly confident this algorithm is finally correct.

	* expand.c (allocated_variable_append): Rewrite.  Instead of
	expanding each appended variable then adding all the expanded
	strings together, we append all the unexpanded values going up
	through the variable set contexts, then expand the final result.
	This behaves just like non-target-specific appended variable
	values, while the old way didn't in various corner cases.
	(variable_append): New function: recursively append the unexpanded
	value of a variable, walking from the outermost variable scope to
	the innermost.
	* variable.c (lookup_variable): Remove the code that looked up the
	variable set list if the found variable was "append".  We don't
	need this anymore.
	(lookup_variable_in_set): Make this non-static so we can use it
	elsewhere.
	(try_variable_definition): Use lookup_variable_in_set() rather
	than faking out current_variable_set_list by hand (cleanup).
	* variable.h: Add a prototype for the now non-static
	lookup_variable_in_set().

2000-11-17  Paul D. Smith  <psmith@gnu.org>

	* remake.c (f_mtime) [WINDOWS32]: On various advice, I changed the
	WINDOWS32 port to assume timestamps can be up to 3 seconds away
	before throwing a fit.

2000-11-17  Paul D. Smith  <psmith@gnu.org>

	* read.c (readline): CRLF calculations had a hole, if you hit the
	buffer grow scenario just right.  Reworked the algorithm to avoid
	the need for len or lastlen at all.  Problem description with
	sample code chages provided by Chris Faylor <cgf@redhat.com>.

2000-10-24  Paul D. Smith  <psmith@gnu.org>

	* gettext.c (SWAP): Declare this with the prototype, otherwise
	some systems don't work (non-32-bit?  Reported for Cray T3E).
	Reported by Thorstein Thorsteinsson <thor@signe.teokem.lu.se>.

2000-10-05  Paul D. Smith  <psmith@gnu.org>

	* acinclude.m4 (AM_LC_MESSAGES): Remove undefined macro
	AM_LC_MESSAGES; it doesn't seem to do anything anyway??

	* i18n/gl.po, configure.in (ALL_LINGUAS): New Galician translation.

2000-09-22  Paul D. Smith  <psmith@gnu.org>

	* gettext.c: Don't #define _GETTEXT_H here; we only include some
	parts of the real gettext.h here, and we expect to really include
	the real gettext.h later.  If we keep this #define, it's ignored.

2000-09-21  Paul D. Smith  <psmith@gnu.org>

	* main.c (log_working_directory): Rework the text to use complete
	sentences, to make life simpler for the translators.

2000-08-29  Paul D. Smith  <psmith@gnu.org>

	* file.c (remove_intermediates): Print a debug message before we
	remove intermediate files, so the user (if she uses -d) knows
	what's going on.

2000-08-21  Paul D. Smith  <psmith@gnu.org>

	* variable.c (try_variable_definition): Change how we handle
	target-specific append variable defns: instead of just setting the
	value, expand it as an append _but_ only within the current
	target's context.  Otherwise we lose all but the last value if the
	variable is appended more than once within the current target
	context.  Fixes PR/1831.

2000-08-16  Paul D. Smith  <psmith@gnu.org>

	* function.c (func_shell): Nul-terminate the buffer before
	printing an exec error message (just in case it's not!).
	Fixes PR/1860, reported by Joey Hess <joey@valinux.com>.

2000-07-25  Paul D. Smith  <psmith@gnu.org>

	* job.c (construct_command_argv_internal): Add "~" to the list of
	sh_chars[] which disallow optimizing out the shell call.

2000-07-23  Paul Eggert  <eggert@twinsun.com>

	* NEWS, make.texinfo: Document .LOW_RESOLUTION_TIME, which
	supersedes --disable-nsec-timestamps.
	* make.texinfo: Consistently use "time stamp" instead of "timestamp".
	* README: Remove --disable-nsec-timestamps.

	* filedef.h (struct file.low_resolution_time): New member.
	* file.c (snap_deps): Add support for .LOW_RESOLUTION_TIME.
	* remake.c (update_file_1):
	Avoid spurious rebuilds due to low resolution time stamps,
	generalizing the earlier code that applied only to archive members.
	(f_mtime): Archive members always have low resolution time stamps.

	* configure.in: Remove --disable-nsec-timestamps, as this has
	been superseded by .LOW_RESOLUTION_TIME.

2000-07-23  Paul Eggert  <eggert@twinsun.com>

	* configure.in (enable_nsec_timestamps): Renamed from
	make_cv_nsec_timestamps, since enable/disable options
	shouldn't be cached.

2000-07-23  Bruno Haible  <haible@clisp.cons.org>
       and  Paul Eggert  <eggert@twinsun.com>

	* file.c (file_timestamp_now):
	Use preprocessor-time check for FILE_TIMESTAMP_HI_RES
	so that clock_gettime is not linked unless needed.

	* filedef.h (FILE_TIMESTAMP_HI_RES):
	Remove definition; "configure" now does this.

	* configure.in (jm_AC_TYPE_UINTMAX_T): Move up,
	to before high resolution file timestamp check,
	since that check now uses uintmax_t.
	(FILE_TIMESTAMP_HI_RES): Define to nonzero if the code should use
	high resolution file timestamps.
	(HAVE_CLOCK_GETTIME): Do not define if !FILE_TIMESTAMP_HI_RES,
	so that we don't link in clock_gettime unnecessarily.

2000-07-17  Paul D. Smith  <psmith@gnu.org>

	* i18n/ja.po: New version of the translation file.

2000-07-07  Paul D. Smith  <psmith@gnu.org>

	* remake.c (f_mtime): If NO_FLOAT is defined, don't bother with
	the offset calculation.
	(name_mtime): Replace EINTR test with EINTR_SET macro.

2000-07-07  Paul Eggert  <eggert@twinsun.com>

	Fix for PR/1811:

	* remake.c (update_file_1):
	Avoid spurious rebuilds of archive members due to their
	timestamp resolution being only one second.
	(f_mtime): Avoid spurious warnings of timestamps in the future due to
	the clock's resolution being lower than file timestamps'.
	When warning about future timestamps, report only the discrepancy,
	not the absolute value of the timestamp and the current time.

	* file.c (file_timestamp_now): New arg RESOLUTION.
	* filedef.h (file_timestamp_now): Likewise.
	(FILE_TIMESTAMP_NS): Now returns int.  All uses changed.

2000-07-05  Paul D. Smith  <psmith@gnu.org>

	* variable.c (lookup_variable) [VMS]: Remove vestigial references
	to listp.  Fixes PR/1793.

2000-06-26  Paul Eggert  <eggert@twinsun.com>

	* Makefile.am (MAINTAINERCLEANFILES): New macro, with stamp-pot in it.

	* dir.c (vms_hash): Ensure ctype macro args are nonnegative.

	* remake.c (f_mtime): Remove unused var memtime.

2000-06-25  Martin Buchholz  <martin@xemacs.org>

	* make.texinfo, NEWS, TODO.private: Minor spelling corrections.
	Ran spell-check	on make.texinfo.

2000-06-23  Paul D. Smith  <psmith@gnu.org>

	* main.c (main): Replace EXIT_SUCCESS, EXIT_FAILURE, and
	EXIT_TROUBLE with MAKE_SUCCESS, MAKE_FAILURE, and MAKE_TROUBLE.
	* make.h: Define these macros.

	* Version 3.79.1 released.

	* configure.in: Add a new option, --disable-nsec-timestamps, to
	avoid using sub-second timestamps on systems that support it.  It
	can lead to problems, e.g. if your makefile relies on "cp -p".
	* README.template: Document the issue with "cp -p".

	* config.guess, config.sub: Updated.



See ChangeLog.2, available in the Git repository at:

	http://git.savannah.gnu.org/cgit/make.git/tree/

for earlier changes.


Copyright (C) 2000-2013 Free Software Foundation, Inc.
This file is part of GNU Make.

GNU Make is free software; you can redistribute it and/or modify it under the
terms of the GNU General Public License as published by the Free Software
Foundation; either version 3 of the License, or (at your option) any later
version.

GNU Make is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program.  If not, see <http://www.gnu.org/licenses/>.
