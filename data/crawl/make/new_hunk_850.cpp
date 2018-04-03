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

2000-06-22  Paul D. Smith  <psmith@gnu.org>

	* job.c (start_job_command): Increment commands_started before the
	special check for ":" (empty command) to avoid spurious "is up to
	date" messages.  Also move the test for question_flag after we
	expand arguments, and only stop if the expansion provided an
	actual command to run, not just whitespace.  This fixes PR/1780.

2000-06-21  Paul D. Smith  <psmith@gnu.org>

	* read.c (read_makefile): If we find a semicolon in the target
	definition, remember where it was.  If the line turns out to be a
	target-specific variable, add back the semicolon and everything
	after it.  Fixes PR/1709.

2000-06-19  Paul D. Smith  <psmith@gnu.org>

	* config.h-vms.template: #define uintmax_t for this system.
	* config.ami.template: Ditto.
	* config.h.W32.template: Ditto.

	* configure.in: We don't use select(2) anymore, so don't bother
	checking for it.
	* acconfig.h: Ditto.
	* acinclude.m4: Ditto.

	* file.c (all_secondary): New static global; if 1 it means
	.SECONDARY with no prerequisites was seen in the makefile.
	(snap_deps): Set it appropriately.
	(remove_intermediates): Check it.
	(num_intermediates): Remove this global, it's not used anywhere.
	(considered): Move this to remake.c and make it static.

	* NEWS: Document the change to .SECONDARY.
	* make.texinfo (Special Targets): Document the change to .SECONDARY.

	* implicit.c (pattern_search): Remove the increment of
	num_intermediates; it's not used.
	* filedef.h: Remove num_intermediates and considered.

	* function.c (handle_function): If the last argument was empty, we
	were pretending it didn't exist rather than providing an empty
	value.  Keep looking until we're past the end, not just at the end.

	* implicit.c (pattern_search): Multi-target implicit rules weren't
	expanding the "also made" targets correctly if the pattern didn't
	contain a slash but the target did; in that case the directory
	part wasn't being added back to the stem on the "also made"
	targets.  Reported by Seth M LaForge <sethml@newtonlabs.com>, with
	a patch.

2000-06-17  Eli Zaretskii  <eliz@is.elta.co.il>

	* Makefile.DOS.template (DESTDIR, bindir, datadir, libdir)
	(infodir, mandir, includedir): Support installation under a
	non-default DESTDIR.

	* remake.c (f_mtime): Fix the spelling of __MSDOS__.

	* configh.DOS.template (HAVE_FDOPEN, HAVE_MKSTEMP): Define.

2000-06-14  Paul D. Smith  <psmith@gnu.org>

	* acinclude.m4 (pds_WITH_GETTEXT): rewrite fp_WITH_GETTEXT and
	rename it to avoid confusion.  This version is very specific: it
	won't accept any gettext that isn't GNU.  If the user doesn't
	explicitly ask for the included gettext, we look to see if the
	system gettext is GNU (testing both the actual libintl library,
	and the libintl.h header file).  Only if the system gettext is
	really GNU gettext will we allow it to be used.
	(pds_CHECK_SYSTEM_GETTEXT): A helper function.

2000-06-13  Paul D. Smith  <psmith@gnu.org>

	* gettext.h: If we have libintl.h, use that instead of any of the
	contents of gettext.h.  We won't check for libintl.h unless we're
	using the system gettext.

	* function.c (func_word): Clarify error message.

2000-06-10  Paul Eggert  <eggert@twinsun.com>

	Support nanosecond resolution on hosts with 64-bit time_t and
	uintmax_t (e.g. 64-bit Sparc Solaris), by splitting
	FILE_TIMESTAMP into a 30-bit part for nanoseconds, with the
	rest for seconds, if FILE_TIMESTAMP is at least 64 bits wide.

	* make.h: Always define FILE_TIMESTAMP to be uintmax_t, for
	simplicity.

	* filedef.h (FILE_TIMESTAMP_HI_RES, FILE_TIMESTAMP_LO_BITS)
	(UNKNOWN_MTIME, NONEXISTENT_MTIME, OLD_MTIME)
	(ORDINARY_MTIME_MIN, ORDINARY_MTIME_MAX): New macros.
	(FILE_TIMESTAMP_STAT_MODTIME): Now takes fname arg.  All uses changed.
	(FILE_TIMESTAMP_DIV, FILE_TIMESTAMP_MOD)
	(FILE_TIMESTAMP_FROM_S_AND_NS): Remove.
	(FILE_TIMESTAMP_S, FILE_TIMESTAMP_NS): Use shifts instead of
	multiplication and division.  Offset the timestamps by
	ORDINARY_MTIME_MIN.
	(file_timestamp_cons): New decl.
	(NEW_MTIME): Now just the maximal timestamp value, as we no longer use
	-1 to refer to nonexistent files.

	* file.c (snap_deps, print_file): Use NONEXISTENT_MTIME,
	UNKNOWN_MTIME, and OLD_MTIME instead of magic constants.
	* filedef.h (file_mtime_1): Likewise.
	* main.c (main): Likewise.
	* remake.c (update_file_1, notice_finished_file, check_dep)
	(f_mtime, name_mtime, library_search): Likewise.
	* vpath.c (selective_vpath_search): Likewise.

	* remake.c (f_mtime): Do not assume that (time_t) -1 equals
	NONEXISTENT_MTIME.  When futzing with time stamps, adjust by
	multiples of 2**30, not 10**9.  Do not calculate timestamp
	adjustments on DOS unless they are needed.

	* commands.c (delete_target): Do not assume that
	FILE_TIMESTAMP_S yields -1 for a nonexistent file, as that is
	no longer true with the new representation.

	* file.c (file_timestamp_cons): New function, replacing
	FILE_TIMESTAMP_FROM_S_AND_NS.  All uses changed.
	(file_timestamp_now): Use FILE_TIMESTAMP_HI_RES instead of 1 <
	FILE_TIMESTAMPS_PER_S to determine whether we're using hi-res
	timestamps.
	(print_file): Print OLD_MTIME values as "very old" instead of
	as a timestamp.

2000-05-31  Paul Eggert  <eggert@twinsun.com>

	* remake.c (name_mtime): Check for stat failures.  Retry if EINTR.

2000-05-24  Paul D. Smith  <psmith@gnu.org>

	* main.c (decode_switches): The "positive_int" switch uses atoi()
	which succeeds for any input, and doesn't notice if extra,
	non-digit text is after the number.  This causes make to mis-parse
	command lines like "make -j 5foo" as "make -j5" (ignoring "foo"
	completely) instead of "make -j0 5foo" (where "5foo" is a
	target).  Fix this by checking the value by hand.  We could use
	strtol() if we were sure of having it; this is the only
	questionable use of atoi() I found so we'll just stick with that.
	Fixes PR/1716.

	* i18n/ja.po, i18n/nl.po, i18n/pt_BR.po: New translation files.
	* configure.in (ALL_LINGUAS): Added pt_BR.

2000-05-22  Paul Eggert  <eggert@twinsun.com>

	* remake.c (f_mtime): Fix bug when handling future odd
	timestamps in the WINDOWS32 case.  Do not bother initializing
	static var to zero.  Simplify code that works around WINDOWS32
	and __MSDOS__ time skew brain damage.

2000-05-22  Paul Eggert  <eggert@twinsun.com>

	* job.c: Don't include time.h, as make.h already does this.

2000-05-22  Paul Eggert  <eggert@twinsun.com>

	* configure.in (AC_CHECK_HEADERS): Add sys/time.h.
	(AC_HEADER_TIME): Add.
	(clock_gettime): Prefer -lrt to -lposix4, for Solaris 7.
	(gettimeofday): Add check for standard version of gettimeofday.
	This merges changes written by Paul D. Smith.

	* file.c (file_timestamp_now):  Use gettimeofday if available
	and if clock_gettime does not work.  Don't bother with
	high-resolution clocks if file timestamps have only one-second
	resolution.

	* make.h <sys/time.h>: Include, conditionally on the usual
	TIME_WITH_SYS_TIME and HAVE_SYS_TIME_H macros.  This is needed
	for gettimeofday.

2000-05-20  Paul D. Smith  <psmith@gnu.org>

	* read.c (read_makefile): We weren't keeping makefile names around
	unless there was a rule defined in them; but now we need to keep
	them for variables as well.  Forget trying to be fancy: just keep
	every makefile name we successfully open.

	* remote-cstms.c (start_remote_job_p): Change DB_EXTRA (?) to DB_JOBS.

2000-05-17  Paul Eggert  <eggert@twinsun.com>

	* commands.c (chop_commands): Ensure ctype macro args are nonnegative.
	* expand.c (variable_expand_string): Likewise.
	* function.c (subst_expand, lookup_function, msdos_openpipe):
	Likewise.
	* job.c (vms_redirect, start_job_command, new_job, child_execute_job,
	construct_command_argv_internal, construct_command_argv): Likewise.
	* main.c (decode_env_switches, quote_for_env): Likewise.
	* misc.c (collapse_continuations, end_of_token, end_of_token_w32,
	next_token): Likewise.
	* read.c (read_makefile, do_define, conditional_line,
	find_char_unquote,get_next_mword): Likewise.
	* variable.c (try_variable_definition): Likewise.
	* vpath.c (construct_vpath_list): Likewise.
	* w32/pathstuff.c (convert_vpath_to_windows32): Likewise.

2000-05-10  Eli Zaretskii  <eliz@is.elta.co.il>

	* main.c (main) [__MSDOS__]: Add SIGFPE to signals we block when
	running child programs, to prevent Make from dying on Windows 9X
	when the child triggers an FP exception.

2000-05-08  Paul D. Smith  <psmith@gnu.org>

	* dir.c (find_directory) [WINDOWS32]: If we strip a trailing "\"
	from the directory name, remember to add it back.  The argument
	might really be inside a longer string (e.g. %Path%) and if you
	don't restore the "\" it'll be truncated permanently.  Fixes PR/1722.
	Reported by <steven@surfcast.com>

2000-05-02  Paul D. Smith  <psmith@gnu.org>

	* job.c (construct_command_argv_internal) [WINDOWS32]: Added "rd"
	and "rmdir" to the list of command.com commands.
	Reported by Elod Horvath <Elod_Horvath@lnotes5.bankofny.com>

2000-04-24  Paul D. Smith  <psmith@gnu.org>

	* i18n/ja.po: New translation file from the Japanese language team.

2000-04-18  Paul D. Smith  <psmith@gnu.org>

	* remake.c (f_mtime): If ar_member_date() returns -1 (the member
	doesn't exist), then return (FILE_TIMESTAMP)-1 rather than
	returning the timestamp calculated from the value -1.  Fixes PR/1696.
	Reported by Gilles Bourhis <Gilles.Bourhis@univ-rennes1.fr>.

2000-04-17  Paul D. Smith  <psmith@gnu.org>

	* config.h.W32.template: Add LOCALEDIR macro resolving to "".
	* w32/subproc/sub_proc.c (process_begin): Remove reference to
	debug_flag; change it to a DB() call.  Fixes PR/1700.
	Reported by Jim Smith <jwksmith@attglobal.net>

2000-04-17  Bruno Haible  <haible@clisp.cons.org>

	* arscan.c [BeOS]: Add replacement for nonexistent <ar.h> from GNU
	binutils.

2000-04-11  Paul D. Smith  <psmith@gnu.org>

	* function.c (expand_builtin_function): If no arguments were
	provided, just quit early rather than changing each function to
	test for this.
	(function_table[]): Change the min # of arguments to 0 for all
	those functions for which it makes sense (currently everything
	that used to take a minimum of 1 argument, except $(call ...)).
	Fixes PR/1689.

2000-04-09  Eli Zaretskii  <eliz@is.elta.co.il>

	* README.DOS: Add instructions to install a binary distro.
	Mention latest versions of Windows.

2000-04-07  Eli Zaretskii  <eliz@is.elta.co.il>

	* main.c (main): Rename TMP_TEMPLATE into DEFAULT_TMPDIR, and use
	it for the directory of the temporary file.  If P_tmpdir is
	defined, use it in preference to "/tmp/".  Try $TMPDIR, $TEMP, and
	$TMP in the environment before defaulting to DEFAULT_TMPDIR.
	(print_version): Add year 2000 to the Copyright line.

2000-04-04  Paul D. Smith  <psmith@gnu.org>

	* Version 3.79 released.

	* make.texinfo: Update documentation with new features for 3.79.

	* function.c (func_wordlist): Don't re-order arguments to
	wordlist.

2000-04-03  Paul D. Smith  <psmith@gnu.org>

	* remake.c (f_mtime): Archive member timestamps are stored as
	time_t, without nanoseconds.  But, f_mtime() wants to return
	nanosecond info on those systems that support it.  So, convert the
	return value of ar_member_date() into a FILE_TIMESTAMP, using 0 as
	the nanoseconds.

2000-03-28  Paul D. Smith  <psmith@gnu.org>

	* Version 3.78.92 released.

	* build.template: Updates for gettext support; some bugs fixed.

2000-03-27  Paul D. Smith  <psmith@gnu.org>

	* config.guess, config.sub: Updated from config CVS archive at
	:pserver:anoncvs@subversions.gnu.org:/home/cvs as of today.

	* read.c (record_files): Check if expanding a static pattern
	rule's prerequisite pattern leaves an empty string as the
	prerequisite, and issue an error if so.  Fixes PR/1670.
	(read_makefile): Store the starting linenumber for a rule in
	TGTS_STARTED.
	(record_waiting_files): Use the TGTS_STARTED value for the file
	location passed to record_file() instead of the current
	linenumber, so error messages list the line where the target was
	defined instead of the line after the end of the rule definition.

	* remake.c (start_updating, finish_updating, is_updating): Fix
	PR/1671; circular dependencies in double-colon rules are not
	diagnosed.  These macros set the updating flag in the root
	double-colon file instead of the current one, if it's part of a
	double-colon list.  This solution provided by Tim Magill
	<magill@gate.net>; I just changed the macro names :).
	(update_file_1): Call them.
	(check_dep): Call them.

	The change to not automatically evaluate the $(call ...)
	function's arguments breaks recursive use of call.  Although using
	$(if ...) and $(foreach ...) in $(call ...) macros is important,
	the error conditions generated are simply to obscure for me to
	feel comfortable with.  If a method is devised to get both
	working, we'll revisit.  For now, remove this change.

	* function.c (function_table): Turn on the expand bit for func_call.
	(func_call): Don't expand arguments for builtin functions; that
	will have already been done.

2000-03-26  Paul D. Smith  <psmith@gnu.org>

	* file.c (remove_intermediates): Never remove targets explicitly
	requested on the command-line by checking the cmd_target flag.
	Fixed PR/1669.

2000-03-23  Paul Eggert  <eggert@twinsun.com>

	* filedef.h (FILE_TIMESTAMP_STAT_MODTIME): Use st_mtime instead of
	st_mtim.tv_sec; the latter doesn't work on Unixware.

2000-03-18  Paul D. Smith  <psmith@gnu.org>

	* file.c (file_hash_enter): If we're trying to change a file into
	itself, just return.  We used to assert this wasn't true, but
	someone came up with a weird case involving archives.  After
	playing with it for a while I decided it was OK to ignore it.

	* default.c: Define COFLAGS to empty to avoid spurious warnings.

	* filedef.h: Change #if ST_MTIM_NSEC to #ifdef; this is a macro
	containing the name of the nsec field, not true/false.
	* make.h: Ditto.
	Reported by Marco Franzen <Marco.Franzen@Thyron.com>.

2000-03-08  Tim Magill  <magill@gate.net>

	* remake.c (update_file): Return the exit status of the pruned
	file when pruning, not just 0.  Fixes PR/1634.

2000-02-24  Paul D. Smith  <psmith@gnu.org>

	* configure.in: Close a minor potential security hole; if you're
	reading makefiles from stdin (who does that?) you could run into a
	race condition with the temp file using mktemp() or tmpnam().  Add
	a check for mkstemp() and fdopen().
	* main.c (open_tmpfile): New function to open a temporary file.
	If we have mkstemp() (and fdopen()), use that.  If not use
	mktemp() or tmpnam().  If we have fdopen(), use open() to open the
	file O_CREAT|O_EXCL.  If not, fall back to normal fopen() (insecure).
	(main): Call it.
	* job.c (child_execute_job) [VMS]: Call it.

	* variable.c (lookup_variable): If we find a variable which is
	being expanded, then note it but keep looking through the rest of
	the set list to see if we can find one that isn't.  If we do,
	return that.  If we don't, return the original.  Fix for PR/1610.

	While implementing this I realized that it also solves PR/1380 in
	a much more elegant way.  I don't know what I was smoking before.
	So, remove the hackage surrounding the original fix for that (see
	below).  Change this function back to lookup_variable and remove
	the extra setlist argument.
	* variable.h (recursively_expand_setlist): Remove the macro,
	rename the prototype, and remove the extra setlist argument.
	(lookup_variable): Ditto.
	* expand.c (recursively_expand): Rename and remove the extra
	setlist argument.
	(reference_variable): Use lookup_variable() again.
	(allocated_variable_append): Remove the extra setlist argument.

2000-02-21  Paul D. Smith  <psmith@gnu.org>

	* README.template: A few updates.

	* i18n/de.po: New version from the German translation team.

2000-02-09  Paul D. Smith  <psmith@gnu.org>

	* Version 3.78.91 released.

2000-02-07  Paul D. Smith  <psmith@gnu.org>

	* read.c (read_makefile): Reset *p2 to ':', not *colonp.  If any
	filenames contained backslashes the resulting output (without
	backslashes) will be shorter, so setting *colonp doesn't change
	the right character.  Fix for PR/1586.

	For += target-specific variables we need to remember which
	variable set we found the variable in, so we can start looking
	from there in the next iteration (otherwise we might see it again
	in recursively_expand and fail!).  This is turning into a hack; if
	it gets any worse we'll have to rethink this entire algorithm...
	implementing expansion of these references separately from the
	"normal" expansion, say, instead of using the same codepath.
	Actually, it's already "worse enough" :-/.
	Fix for PR/1380.

	* variable.h (recursively_expand_setlist): Rename
	recursively_expand to add a struct variable_set_list argument, and
	make a macro for recursively_expand.
	(lookup_variable_setlist): Rename lookup_variable to add a struct
	variable_set_list argument, and make a macro for lookup_variable.

	* expand.c (recursively_expand_setlist): Take an extra struct
	variable_set_list argument and pass it to allocated_variable_append().
	(reference_variable): Use lookup_variable_setlist() and pass the
	returned variable_set_list to recursively_expand_setlist.
	(allocated_variable_append): Take an extra setlist argument and
	use this as the starting place when searching for the appended
	expansion.  If it's null, use current_variable_set_list as before.

	* variable.c (lookup_variable_setlist): If the LISTP argument is
	not nil, set it to the list containing the variable we found.

2000-02-04  Paul D. Smith  <psmith@gnu.org>

	* variable.c (print_variable): Write out filename/linenumber
	information for the variable definition if present.
	(define_variable_in_set): Store filename information if provided.
	(define_variable, define_variable_for_file): Removed.
	(try_variable_definition): Use define_variable_loc() to keep
	variable definition location information.
	* read.c (read_makefile): Keep variable definition location info.
	(do_define): Ditto.
	(record_target_var): Ditto.
	* variable.h (define_variable_in_set): New fileinfo argument.
	(define_variable, define_variable_loc, define_variable_for_file):
	Declare new macros.

	Fix PR/1407:

	* filedef.h (struct file): Rename patvar to pat_variables and make
	it just a variable_set_list; we need our own copy of the pattern
	variable's variable set list here to avoid overwriting the global
	one.
	* variable.c (initialize_file_variables): Move the instantiation
	of the pat_variables pointer here.  Only do the search after we're
	done reading the makefiles so we don't search too early.  If
	there's a pat_variables value, set up the variables next ptr.
	* expand.c (variable_expand_for_file): Remove the setup of the
	pat_variables info; it's done earlier now to ensure the parent's
	pattern variables are set up correctly as well.

2000-02-03  Paul D. Smith  <psmith@gnu.org>

	* job.c (sh_chars_dos) [WINDOWS32]: Add "&" as a shell
	metacharacter for the W32 DOS shell.
	Reported by Warren Jones <wjones@tc.fluke.com>.

2000-02-02  Paul D. Smith  <psmith@gnu.org>

	Fixes for the OpenVMS port from Hartmut Becker <becker@rto.dec.com>

	* config.h-vms [VMS]: Define LOCALEDIR to something; needed for
	the expansion of bindtextdomain() even though it's a no-op.
	* vmsfunctions.c (strcmpi): Remove duplicate definition of strcmpi().
	(readdir): Use DB() instead of testing debug_flag.
	* dir.c (file_impossible) [VMS]: Search "p" not "name".
	* job.c [VMS]: Switch from debug_flag to the new DB macro.  Add
	some i18n _() macros (even though VMS doesn't yet support it).

	* function.c (patsubst_expand): Change "len" to not be unsigned to
	avoid type mismatches.

	* main.c (main): Declare signame_init() if we're going to call it.

2000-01-29  Eli Zaretskii  <eliz@is.elta.co.il>

	* Makefile.DOS.template: Track changes in Makefile.in
	(install-recursive, uninstall-recursive): Add missing targets.
	(DESTDIR): Define.
	(install-binPROGRAMS, uninstall-binPROGRAMS): Use $(DESTDIR).

	* default.c (default_variables) [__MSDOS__]: Define CXX to gpp.

2000-01-27  Paul D. Smith  <psmith@gnu.org>

	* gettext.c: Some warning cleanups, and a fix for systems which
	don't define HAVE_ALLOCA (the workaround code was included
	twice).

2000-01-26  Paul D. Smith  <psmith@gnu.org>

	* Version 3.78.90 released.

2000-01-25  Paul D. Smith  <psmith@gnu.org>

	Change gettext support to use the simplified version in libit 0.7.

	* getopt.c, make.h: Use gettext.h instead of libintl.h.
	* ABOUT-NLS, gettext.h, gettext.c: New files from libit 0.7.
	Modified to remove some static declarations which aren't defined.
	* acconfig.h: Use new gettext #defines.
	* acinclude.m4: Add fp_WITH_GETTEXT; remove AM_GNU_GETTEXT.
	* configure.in: Call fp_WITH_GETTEXT instead.
	* Makefile.am: New gettext stuff.  Also force inclusion of glob
	files for systems which have LIBC glob.

	* i18n/Makefile.am, i18n/.cvsignore: New dir for translation files.
	* i18n/de.po, i18n/es.po, i18n/fr.po, i18n/ko.po, i18n/nl.po:
	* i18n/pl.po, i18n/ru.po: Import translations already done for
	earlier versions of GNU make.  Thanks for that work!!

	* po/Makefile.in.in, po/POTFILES.in: Removed.

2000-01-23  Paul D. Smith  <psmith@gnu.org>

	* main.c (decode_debug_flags): If debug_flag is set, enable all
	debugging levels.
	(debug_flag): Resurrect this flag variable.
	(switches): Make -d give the old behavior of turning on all
	debugging.  Change --debug alone to emit basic debugging and take
	optional arguments to expand debugging.
	* NEWS: Document the new debugging options.

	* remake.c (no_rule_error): Remove this function.  This tries to
	fix a real problem--see the description with the introduction of
	this function below.  However, the cure is worse than the disease
	and this approach won't work.
	(remake_file): Put the code from no_rule_error back here.
	(update_file_1): Remove call to no_rule_error.

	* filedef.h (struct file): Remove mfile_status field.

2000-01-22  Paul D. Smith  <psmith@gnu.org>

	Integrate GNU gettext support.

	* configure.in: Add AM_GNU_GETTEXT.
	* Makefile.am: Add options for setting LOCALEDIR, -Iintl, etc.
	* acinclude.m4: Add gettext autoconf macros.
	* acconfig.h: Add new gettext #defines.
	* make.h: Include libintl.h.  Make sure _() and N_() macros are
	declared.  Make gettext() an empty macro is NLS is disabled.
	* main.c (struct command_switch switches[]): Can't initialize
	static data with _() (gettext calls), so use N_() there then use
	gettext() directly when printing the strings.
	* remake.c (no_rule_error): The string constants can't be static
	when initializing _() macros.
	* file.c (print_file): Reformat a few strings to work better for
	translation.
	* po/POTFILES.in, po/Makefile.in.in: New files.  Take
	Makefile.in.in from the latest GNU tar distribution, as that
	version works better than the one that comes with gettext.
	* NEWS: Mention i18n ability.

2000-01-21  Paul D. Smith  <psmith@gnu.org>

	Installed patches for the VMS port.
	Patches provided by: Hartmut Becker <Hartmut.Becker@compaq.com>

	* readme.vms, arscan.c, config.h-vms, default.c, dir.c, file.c:
	* implicit.c, job.c, make.h, makefile.com, makefile.vms, rule.c:
	* variable.c, vmsdir.h, vmsfunctions.c, vmsify.c, glob/glob.c:
	* glob/glob.h: Installed patches.  See readme.vms for details.

2000-01-14  Andreas Schwab  <schwab@suse.de>

	* dir.c (read_dirstream): Initialize d_type if it exists.

2000-01-11  Paul D. Smith  <psmith@gnu.org>

	Resolve PR/xxxx: don't automatically evaluate the $(call ...)
	function's arguments.  While we're here, clean up argument passing
	protocol to always use simple nul-terminated strings, instead of
	sometimes using offset pointers to mark the end of arguments.
	This change also fixes PR/1517.
	Reported by Damien GIBOU <damien.gibou@st.com>.

	* function.c (struct function_table_entry): Remove the negative
	required_args hack; put in explicit min and max # of arguments.
	(function_table): Add in the max value.  Turn off the expand bit
	for func_call.
	(expand_builtin_function): Test against minimum_args instead of
	the obsolete required_args.
	(handle_function): Rewrite this.  We don't try to be fancy and
	pass one style of arguments to expanded functions and another
	style to non-expanded functions: pass pointers to nul-terminated
	strings to all functions.
	(func_call): Rewrite this.  If we are invoking a builtin function
	and it's supposed to have its arguments expanded, do that (since
	it's not done by handle_function for $(call ...) anymore).  For
	non-builtins, just add the variables as before but mark them as
	recursive so they'll be expanded later, as needed.
	(func_if): All arguments are vanilla nul-terminated strings:
	remove trickery with "argv[1]-1".
	(func_foreach): Ditto.

	* expand.c (expand_argument): If the second arg is NULL, expand
	the entire first argument.

	* job.c (new_job): Zero the child struct.  This change was just
	made to keep some heap checking software happy, not because there
	was an actual bug (the important memory was being cleared properly).

1999-12-15  Paul D. Smith  <psmith@gnu.org>

	* variable.c (print_variable): Print the variable with += if the
	append flag is set.

	* implicit.c (pattern_search): Remove the extra check of the
	implicit flag added on 8/24/1998.  This causes problems and the
	reason for the change was better resolved by the change made to
	check_deps() on 1998-08-26.  This fixes PR/1423.

1999-12-08  Paul D. Smith  <psmith@gnu.org>

	* dir.c (dir_setup_glob): On 64 bit ReliantUNIX (5.44 and above)
	in LFS mode, stat() is actually a macro for stat64().  Assignment
	doesn't work in that case.  So, stat is a macro, make a local
	wrapper function to invoke it.
	(local_stat): Wrapper function, if needed.
	Reported by Andrej Borsenkow <Andrej.Borsenkow@mow.siemens.ru>.

1999-12-02  Paul D. Smith  <psmith@gnu.org>

	* remake.c (update_file): Move the considered test outside the
	double-colon loop, _but_ make sure we test the double_colon target
	not the "current" target.  If we stop early because one
	double-colon target is running, mark all the rest considered and
	try to start their prerequisites (so they're marked considered).
	Fix for PR/1476 suggested by Tim Magill <tim.magill@telops.gte.com>.

1999-11-22  Rob Tulloh  <rob_tulloh@dev.tivoli.com>

	* function.c (windows32_openpipe, func_shell): Correct Windows32
	problem where $(shell nosuchfile) would incorrectly exit make. The
	fix is to print the error and let make continue.
	Reported by David Masterson <David.Masterson@kla-tencor.com>.

	* w32/subproc/misc.c (arr2envblk): Memory leak fix.

1999-11-21  Paul D. Smith  <psmith@gnu.org>

	Rework GNU make debugging to provide different levels of output.

	* NEWS: mention it.
	* debug.h: New file.  Define various debugging levels and macros.
	* function.c, implicit.c, job.c, main.c, misc.c, read.c, remake.c
	* remote-cstms.c, vmsfunctions.c: Replace all code depending on
	debug_flag with invocations of debugging macros.
	* make.h: Remove debug_flag and DEBUGPR, add db_level.

1999-11-18  Paul Eggert  <eggert@twinsun.com>

	* acinclude.m4 (AC_SYS_LARGEFILE_FLAGS): Work around a problem
	with the QNX 4.25 shell, which doesn't propagate exit status of
	failed commands inside shell assignments.

1999-11-17  Paul D. Smith  <psmith@gnu.org>

	* function.c (func_if): Find the end of the arg list by testing
	the next item for NULL; any other test is not correct.
	Reported by Graham Reed <grahamr@algorithmics.com> (PR/1429).

	Fix += when used in a target-specific variable context.

	* variable.h: New bitfield APPEND set if we have a +=
	target-specific variable.

	* variable.c (try_variable_definition): Add an argument to specify
	if we're trying a target-specific variable.  If we are and it's an
	append style, don't append it, record it as normal recursive, but
	set the APPEND flag so it'll be expanded later.
	* main.c (handle_non_switch_argument): Use new
	try_variable_definition() signature.
	* read.c (read_makefile,record_target_var): Ditto.

	* expand.c (allocated_variable_append): New function: like
	allocated_variable_expand(), but we expand the same variable name
	in the context of the ``next'' variable set, then we append this
	expanded value.
	(recursively_expand): Invoke it, if the APPEND bit is set.

1999-11-10  Paul D. Smith  <psmith@gnu.org>

	* file.c (snap_deps): If the .NOTPARALLEL target is defined, turn
	off parallel builds for this make only (still allow submakes to be
	run in parallel).
	* main.c: New variable, ``not_parallel''.
	* make.h: Add an extern for it.
	* job.c (new_job): Test NOT_PARALLEL as well as JOB_SLOTS.
	* NEWS: Add info on .NOTPARALLEL.
	* make.texinfo (Special Targets): Document it.

	* configure.in (GLOBDIR): Set to "glob" if we need to build the
	glob library.
	* Makefile.am (SUBDIRS): Use the GLOBDIR variable instead of
	"glob" so we don't try to build glob if we don't need to (if we
	have GLIBC glob).  Reported by Lars Hecking <lhecking@nmrc.ucc.ie>.

	* main.c (main): Don't put "***" in the clock skew warning
	message.  Reported by karl@gnu.org.

	* make.h: Remove unneeded signal setup.

	* signame.c: Remove extraneous #includes; some versions of Ultrix
	don't protect against multiple inclusions and it causes compile
	errors.  Reported by Simon Burge <simonb@thistledown.com.au>.

1999-10-15  Paul D. Smith  <psmith@gnu.org>

	* main.c (quote_for_env): Rename from quote_as_word().

	* make.h, *.c: Prefer strchr() and strrchr() in the code
	rather than index() and rindex().  Define strchr/strrchr in terms
	of index/rindex if the former aren't supported.

	* default.c (CHECKOUT,v): Replace the fancy, complicated
	patsubst/filter expression with a simple $(if ...) expression.

	* main.c (print_usage): Add the bug reporting mailing address to
	the --help output, as per the GNU coding standards.
	Reported by Paul Eggert <eggert@twinsun.com>.

	* README.customs: Installed information on running Customs-ized
	GNU make and setuid root, collected by Ted Stern <stern@tera.com>.

	* read.c (read_all_makefiles): PR/1394: Mark the end of the next
	token in the MAKEFILES value string _before_ we dup it.

1999-10-13  Paul D. Smith  <psmith@gnu.org>

	* configure.in (make_cv_sys_gnu_glob): We used to add the -Iglob
	flag to CPPFLAGS, but that loses if the user specifies his own
	CPPFLAGS; this one gets added _after_ his and if he happens to
	have an old or broken glob.h--boom.  Instead, put it in GLOBINC
	and SUBST it.

	* Makefile.am (INCLUDES): Add @GLOBINC@ to the INCLUDES macro;
	these things get on the compile line well before the user's
	CPPFLAGS.

1999-10-12  Paul D. Smith  <psmith@gnu.org>

	* remake.c (notice_finished_file): If we get here and -n is set,
	see if all the command lines are marked recursive.  If so, then we
	ran every command there is, so check the mtime on this file just
	like we would normally.  If not, we assume the command we didn't
	run would updates the target and set mtime of the target to "very new".

	* job.c (start_job_command): Update lines_flags in the file's cmds
	structure with any per-line tokens we found (`@', `-', `+').

1999-10-08  Paul D. Smith  <psmith@gnu.org>

	* variable.c (initialize_file_variables): Always recurse to
	initialize the parent's file variables: the parent might not have
	any rules to run so it might not have been initialized before
	this--we need this to set up the chain properly for
	target-specific variables.

1999-09-29  Paul Eggert  <eggert@twinsun.com>

	* main.c (quote_as_word): Always quote for decode_env_switches
        instead of for the shell, so that arguments with strange
        characters are are passed to submakes correctly.  Remove
        double_dollars arg; we always double dollars now.  All callers
        changed.
        (decode_env_switches): Don't run off the end of an environment
        variable whose contents ends in a unescaped backslash.

1999-09-23  Paul D. Smith  <psmith@gnu.org>

	* commands.c, function.c, job.c, read.c: Cast arguments to
	ctype.h functions/macros to _unsigned_ char for portability.

	* remake.c, function.c: Compiler warning fixes: the second
	argument to find_next_token() should be an _unsigned_ int*.
	Reported by Han-Wen Nienhuys <hanwen@cs.uu.nl>.

1999-09-23  Paul D. Smith  <psmith@gnu.org>

	* Version 3.78.1 released.

	* make.texinfo: Update version/date stamp.

	* main.c (main): Argh.  For some reason we were closing _all_ the
	jobserver pipes before we re-exec'd due to changed makefiles.
	This means that any re-exec got a "jobserver unavailable" error :-/.
	I can't believe we didn't notice this before.

1999-09-22  Paul D. Smith  <psmith@gnu.org>

	* Version 3.78 released.

	* main.c (main): Only fail on multiple --jobserver-fds options if
	they aren't all the same.  Some makefiles use things like
	$(MAKE) $(MFLAGS) which will cause multiple, identical copies of
	--jobserver-fds to show up.

1999-09-16  Paul D. Smith  <psmith@gnu.org>

	* main.c (define_makeflags): Zero out FLAGSTRING to avoid
	uninitialized memory reads when checking *p != '-' in the loop.

1999-09-15  Paul D. Smith  <psmith@gnu.org>

	* Version 3.77.97 released.

	* configure.in (MAKE_HOST): AC_SUBST this so it will go into the
	makefile.
	* Makefile.am (check-local): Print a success banner if the check
	succeeds.
	(check-regression): A bit of fine-tuning.

1999-09-15  Eli Zaretskii  <eliz@is.elta.co.il>

	* README.DOS.template: Document requirements for the test suite.
	* Makefile.DOS.template: Updates to allow the test suite to run
	from "make check".

	* main.c (main): Handle it if argv[0] isn't an absolute path.

1999-09-13  Paul D. Smith  <psmith@gnu.org>

	* Version 3.77.96 released.

	* Makefile.am (loadavg): Use CPPFLAGS, etc. to make sure we get
	all the right #defines to compile.
	(check-regression): Look for the regression test suite in the make
	package itself.  If we're building remotely, use symlinks to make
	a local copy.
	(dist-hook): Put the test suite into the tar file.

	* configure.in: Look for perl for the test suite.

1999-09-10  Paul Eggert  <eggert@twinsun.com>

        * acinclude.m4 (AC_SYS_LARGEFILE_FLAGS): If on HP-UX 10.20 or
        later, and using GCC, define __STDC_EXT__; this works around a
        bug in GCC 2.95.1.

1999-09-08  Paul D. Smith  <psmith@gnu.org>

	* main.c (print_version): Ugh.  GLIBC's configure tries to check
	make version strings and is too aggressive with their matching
	expressions.  I've struck a deal with them to leave the version
	output as-is for 3.78, and they'll change their configure checks
	so that I can change this back in the future.

1999-09-07  Eli Zaretskii  <eliz@is.elta.co.il>

	* job.c (construct_command_argv_internal) [__MSDOS__]: Add "echo"
	and "unset" to the list of builtin shell commands.

	* configh.DOS.template (MAKE_HOST): Define to "i386-pc-msdosdjgpp"
	which is the canonical name of the DJGPP host.

1999-09-05  Paul D. Smith  <psmith@gnu.org>

	* Version 3.77.95 released.

	* make.texinfo (Make Errors): Document some new jobserver error
	messages.

1999-09-04  Eli Zaretskii  <eliz@is.elta.co.il>

	* make.texinfo (Make Errors): Document the hint about 8 spaces
	instead of a TAB.
	(Call Function, Quick Reference): Use @code{$(1)}, not @var.

	* main.c (main) [__MSDOS__]: Say "on this platform" instead of "on
	MS-DOS", since the MSDOS version could run on Windows.

1999-09-03  Paul D. Smith  <psmith@gnu.org>

	* remake.c (notice_finished_file): Always set mtime_before_update
	if it's not been set, not just if we ran some rules.  Otherwise we
	may have a situation where a target's prerequisite was rebuilt but
	not changed, so this target's rules weren't run, then
	update_goal_chain() sees mtime_before_update != last_mtime and
	thinks that the top-level target changed when it really didn't.
	This can cause an infinite loop when remaking makefiles.
	(update_goal_chain): If we get back to the top and we don't know
	what the goal's last_mtime was, find it now.  We need to know so
	we can compare it to mtime_before_update later (this is only
	crucial when remaking makefiles--should we only do it then?)

1999-09-02  Paul D. Smith  <psmith@gnu.org>

	* read.c (read_makefile): If "override" appears as the first
	prerequisite, look further to ensure this is really a
	target-specific variable definition, and not just some
	prerequisite named "override".

1999-09-01  Paul D. Smith  <psmith@gnu.org>

	* function.c (IS_PATHSEP) [WINDOWS32]: Allow backslash separators
	for W32 platforms.
	* read.c (record_files) [WINDOWS32]: Allow backslash separators
	for W32 platforms.
	* implicit.c (pattern_search) [WINDOWS32]: Allow backslash
	separators for W32 platforms.

	* configure.in (MAKE_HOST): Define it to be the canonical build
	host info, now that we need AC_CANONICAL_HOST anyway (for large
	file support).
	* version.c (make_host): Define a variable to MAKE_HOST so we're
	sure to get it from the local config.h.
	* main.c (print_version): Use it in the version information.
	* config.ami.template: Add MAKE_HOST.
	* configh.dos.template: Ditto.
	* config.h.W32.template: Ditto.
	* config.h-vms.template: Ditto.

	* main.c (main): Close the jobserver file descriptors if we need
	to re-exec ourselves.
	Also print more reasonable error if users force -jN for submakes.
	This may be common for a while until people use the jobserver
	feature.  If it happens, we ignore the existing jobserver stuff
	and use whatever they specified on the commandline.
	(define_makeflags): Fixed a long-standing bug: if a long name
	only option comes immediately after a single letter option with no
	argument, then the option string is constructed incorrectly.  For
	example, with -w and --jobserver-fds you get "-w-jobserver-fds..."
	instead of "-w --jobserver-fds..."; add in an extra " -".

	* make.texinfo (Phony Targets): Add another example of using
	.PHONY with subdirectories/recursive make.

1999-08-30  Paul D. Smith  <psmith@gnu.org>

	* README.W32.template: Renamed from README.W32 so it's
	autogenerated during the dist.  A few minor modifications.

	* configure.in: Check for kstat_open before AC_FUNC_GETLOADAVG
	since the latter needs to know whether the former exists to give
	an accurate result.

1999-08-26  Rob Tulloh  <rob_tulloh@dev.tivoli.com>

	* NMakefile [WINDOWS32]: Now more robust. If you change a file
	under w32/subproc, the make.exe will be relinked. Also added some
	tests to make sure erase commands won't fail when executed in a
	pristine build environment.

	* w32/subproc/sub_proc.c [WINDOWS32]: Added support for
	HAVE_CYGWIN_SHELL. If you are using the Cygwin B20.1 release, it
	is now possible to have have native support for this shell without
	having to rely on klutzy BATCH_MODE_ONLY_SHELL.

	* config.h.W32 [WINDOWS32]: Added HAVE_CYGWIN_SHELL macro which
	users can define if they want to build make to use this shell.

	* README.W32 [WINDOWS32]: Added informaton about
	HAVE_CYGWIN_SHELL. Cleaned up text a bit to make it more current.

1999-08-26  Paul Eggert  <eggert@twinsun.com>

	Support large files in AIX, HP-UX, and IRIX.

	* acinclude.m4 (AC_LFS): Remove.  Superseded by AC_SYS_LARGEFILE.
	(AC_SYS_LARGEFILE_FLAGS, AC_SYS_LARGEFILE_SPACE_APPEND,
	AC_SYS_LARGEFILE_MACRO_VALUE, AC_SYS_LARGEFILE): New macros.
	(jm_AC_TYPE_UINTMAX_T): Check for busted compilers that can't
	shift or divide unsigned long long.
	(AM_PROG_CC_STDC): New macro; a temporary workaround of a bug in
	automake 1.4.

	* configure.in (AC_CANONICAL_HOST): Add; required by new
	AC_SYS_LARGEFILE.
	(AC_SYS_LARGEFILE): Renamed from AC_LFS.
	(AM_PROG_CC_STDC): Add.

	* config.guess, config.sub: New files, needed for AC_CANONICAL_HOST.

1999-08-25  Paul Eggert  <eggert@twinsun.com>

	* make.h (CHAR_MAX): New macro.
	* main.c (struct command_switch): c is now int,
	so that it can store values greater than CHAR_MAX.
	(switches): Replace small numbers N with CHAR_MAX+N-1,
	to avoid problems with non-ASCII character sets.
	(short_option): New macro.
	(init_switches, print_usage, define_makeflags): Use it instead of
	isalnum.

1999-08-25  Paul D. Smith  <psmith@gnu.org>

	* Version 3.77.94 released.

	* main.c (main) [__MSDOS__]: If the user uses -j, warn that it's
	not supported and reset it.

	* make.h (ISDIGIT): Obtained this from the textutils distribution.
	* main.c (decode_switches): Use it.
	* function.c (is_numeric): Use it.

	* main.c (struct command_switch): Store the switch char in an
	unsigned char to shut up GCC about using it with ctype.h macros.
	Besides, it _is_ always unsigned.

1999-08-24  Paul D. Smith  <psmith@gnu.org>

	* make.texinfo: Change "dependency" to "prerequisite" and
	"dependencies" to "prerequisites".  Various other cleanups related
	to the terminology change.
	* file.c: Change debugging and error messages to use
	"prerequisite" instead of "dependency".
	* implicit.c: Ditto.
	* remake.c: Ditto.
	* NEWS: Document it.

1999-08-23  Paul D. Smith  <psmith@gnu.org>

	* remake.c (update_file): Move the considered check into the
	double-colon rule loop, so we consider double-colon rules
	individually (otherwise after the first is pruned, the rest won't
	get run).

	* README.template: Minor changes.

	Remove the debugging features of the jobserver, so it no longer
	writes distinct tokens to the pipe.  Thus, we don't need to store
	the token we get.  A side effect of this is to remove a potential
	"unavailable token" situation: make-1 invokes make-2 with its
	special token and make-3 with a normal token; make-2 completes.
	Now we're waiting for make-3 but using 2 tokens; our special token
	is idle.  In the new version we don't have special tokens per se,
	we merely decide if we already have a child or not.  If we don't,
	we don't need a token.  If we do, we have to get one to run the
	next child.  Similar for putting tokens back: if we're cleaning up
	the last child, we don't put a token back.  Otherwise, we do.

	* main.c: Add a new, internal flag --jobserver-fds instead of
	overloading the meaning of -j.  Remove job_slots_str and add the
	stringlist jobserver_fds.
	(struct command_switch): We don't need the int_string type.
	(switches[]): Add a new option for --jobserver-fds and remove
	conditions around -j.  Make the description for the former 0 so it
	doesn't print during "make --help".
	(main): Rework jobserver parsing.  If we got --jobserver-fds
	make sure it's valid.  We only get one and job_slots must be 0.
	If we're the toplevel make (-jN without --jobserver-fds) create
	the pipe and write generic tokens.
	Create the stringlist struct for the submakes.
	Clean up the stringlist where necessary.
	(init_switches): Remove int_string handling.
	(print_usage): Don't print internal flags (description ptr is 0).
	(decode_switches): Remove int_string handling.
	(define_makeflags): Remove int_string handling.

	* job.c: Remove my_job_token flag and all references to the
	child->job_token field.
	(free_job_token): Remove this and merge it into free_child().
	(reap_children): Rework the "reaped a child" logic slightly.
	Don't call defunct free_job_token anymore.  Always call
	free_child, even if we're dying.
	(free_child): If we're not freeing the only child, put a token
	back in the pipe.  Then, if we're dying, don't bother to free.
	(new_job): If we are using the jobserver, loop checking to see if
	a) there are no children or b) we get a token from the pipe.

	* job.h (struct child): Remove the job_token field.

1999-08-20  Paul D. Smith  <psmith@gnu.org>

	* variable.c (try_variable_definition): Allocate for variable
	expansion in f_append with a simple variable: if we're looking at
	target-specific variables we don't want to trash the buffer.
	Noticed by Reiner Beninga <Reiner.Beninga@mchp.siemens.de>.

1999-08-16  Eli Zaretskii  <eliz@is.elta.co.il>

	* main.c (main) [__MSDOS__]: Mirror any backslashes in argv[0], to
	avoid problems in shell commands that use backslashes as escape
	characters.

1999-08-16  Paul D. Smith  <psmith@gnu.org>

	* Version 3.77.93 released.

1999-08-13  Paul D. Smith  <psmith@gnu.org

	* function.c (func_if): New function $(if ...) based on the
	original by Han-Wen but reworked quite a bit.
	(function_table): Add it.
	* NEWS: Introduce it.
	* make.texinfo (If Function): Document it.

	* job.c (free_job_token): Check for EINTR when writing tokens to
	the jobserver pipe.

1999-08-12  Paul D. Smith  <psmith@gnu.org>

	Another jobserver algorithm change.  We conveniently forgot that
	the blocking bit is shared by all users of the pipe, it's not a
	per-process setting.  Since we have many make processes all
	sharing the pipe we can't use the blocking bit as a signal handler
	flag.  Instead, we'll dup the pipe's read FD and have the SIGCHLD
	handler close the dup'd FD.  This will cause the read() to fail
	with EBADF the next time we invoke it, so we know we need to reap
	children.  We then re-dup and reap.

	* main.c (main): Define the job_rfd variable to hold the dup'd FD.
	Actually dup the read side of the pipe.  Don't bother setting the
	blocking bit on the file descriptor.
	* make.h: Declare the job_rfd variable.
	* job.c (child_handler): If the dup'd jobserver pipe is open,
	close it and assign -1 to job_rfd to notify the main program that
	we got a SIGCHLD.
	(start_job_command): Close the dup'd FD before exec'ing children.
	Since we open and close this thing so often it doesn't seem
	worth it to use the close-on-exec bit.
	(new_job): Remove code for testing/setting the blocking bit.
	Instead of EAGAIN, test for EBADF.  If the dup'd FD has been
	closed, re-dup it before we reap children.

	* function.c (func_shell): Be a little more accurate about the
	length of the error string to allocate.

	* expand.c (variable_expand_for_file): If there's no filenm info
	(say, from a builtin command) then reset reading_file to 0.

1999-08-09  Paul D. Smith  <psmith@gnu.org>

	* maintMakefile: Use g in sed (s///g) to replace >1 variable per
	line.

	* Makefile.DOS.template [__MSDOS__]: Fix mostlyclean-aminfo to
	remove the right files.

1999-08-01  Eli Zaretskii  <eliz@is.elta.co.il>

	* function.c (msdos_openpipe) [__MSDOS__]: *Really* return a FILE
	ptr.

1999-08-01  Paul D. Smith  <psmith@gnu.org>

	New jobserver algorithm to avoid a possible hole where we could
	miss SIGCHLDs and get into a deadlock.  The original algorithm was
	suggested by Roland McGrath with a nice refinement by Paul Eggert.
	Many thanks as well to Tim Magill and Howard Chu, who also
	provided many viable ideas and critiques.  We all had a fun week
	dreaming up interesting ways to use and abuse UNIX syscalls :).

	Previously we could miss a SIGCHLD if it happened after we reaped
	the children but before we re-entered the blocking read.  If this
	happened to all makes and/or all children, make would never wake
	up.

	We avoid this by having the SIGCHLD handler reset the blocking bit
	on the jobserver pipe read FD (normally read does block in this
	algorithm).  Now if the handler is called between the time we reap
	and the time we read(), and there are no tokens available, the
	read will merely return with EAGAIN instead of blocking.

	* main.c (main): Set the blocking bit explicitly here.
	* job.c (child_handler): If we have a jobserver pipe, set the
	non-blocking bit for it.
	(start_waiting_job): Move the token stuff back to new_job; if we
	do it here then we're not controlling the number of remote jobs
	started!
	(new_job): Move the check for job slots to _after_ we've created a
	child structure.  If the read returns without getting a token, set
	the blocking bit then try to reap_children.

	* make.h (EINTR_SET): Define to test errno if EINTR is available,
	or 0 otherwise.  Just some code cleanup.
	* arscan.c (ar_member_touch): Use it.
	* function.c (func_shell): Use it.
	* job.c (reap_children): Use it.
	* remake.c (touch_file): Use it.

1999-07-28  Paul D. Smith  <psmith@gnu.org>

	* make.h: Define _() and N_() macros as passthrough to initiate
	NLS support.
	* <all>: Add _()/N_() around translatable strings.

1999-07-27  Paul D. Smith  <psmith@gnu.org>

	* read.c: Make sure make.h comes before other headers.

1999-07-26  Paul D. Smith  <psmith@gnu.org>

	* make.texinfo (Quick Reference): Update with the new features.

1999-07-25  Eli Zaretskii  <eliz@is.elta.co.il>

	* remake.c [__MSDOS__]: Don't include variables.h, it's already
	included.

	* function.c (msdos_openpipe) [__MSDOS__]: Return FILE ptr.
	(func_shell) [__MSDOS__]: Fix the argument list.

	* Makefile.DOS.template: Update from Makefile.in.

	* README.DOS.template: Configure command fixed.

	* configh.dos.template: Update to provide definitions for
	uintmax_t, fd_set_size_t, and HAVE_SELECT.

1999-07-24  Paul D. Smith  <psmith@gnu.org>

	* Version 3.77.91 released.

	* configure.in: Changes to the boostrapping code: if build.sh.in
	doesn't exist configure spits an error and generates an empty
	build.sh file which causes make to be confused.
	* maintMakefile: Don't build README early.

1999-07-23  Paul D. Smith  <psmith@gnu.org>

	* job.c (my_job_token): This variable controls whether we've
	handed our personal token to a subprocess or not.  Note we could
	probably infer this from the value of job_slots_used, but it's
	clearer to just keep it separately.  Job_slots_used isn't really
	relevant when running the job server.
	(free_job_token): New function: free a job token.  If we don't
	have one, no-op.  If we have the personal token, reclaim it.  If
	we have another token, write it back to the pipe.
	(reap_children): Call free_job_token.
	(free_child): Call free_job_token.
	(start_job_command): Remove duplicate test for '+' in the command.
	If we don't appear to be running a recursive make, close the
	jobserver filedescriptors.
	(start_waiting_job): If our personal token is available, use that
	instead of going to the server pipe.
	(*): Add the token value to many debugging statements, and print
	the child target name in addition to the ptr hex value.
	Change the default "no token" value from '\0' to '-' so it looks
	better in the output.

	* main.c (main): Install the child_handler with sigaction()
	instead of signal() if we have it.  On SysV systems, signal() uses
	SysV semantics which are a pain.  But sigaction() always does what
	we want.
	(main): If we got job server FDs from the environment, test them
	to see if they're open.  If not, the parent make closed them
	because it didn't think we were a submake.  Print a warning and
	suggestion to use "+" on the submake invocation, and hard-set to
	-j1 for this instance of make.
	(main): Change the algorithm for assigning slots to be more
	robust.  Previously make checked to see if it thought a subprocess
	was a submake and if so, didn't give it a token.  Since make's
	don't consume tokens we could spawn many of makes fighting for a
	small number of tokens.  Plus this is unreliable because submakes
	might not be recognized by the parent (see above) then all the
	tokens could be used up by unrecognized makes, and no one could
	run.  Now every make consumes a token from its parent.  However,
	the make can also use this token to spawn a child.  If the make
	wants more than one, it goes to the jobserver pipe.  Thus there
	will never be more than N makes running for -jN, and N*2 processes
	(N makes and their N children).  Every make can always run at
	least one job, and we'll never deadlock.  (Note the closing of the
	pipe for non-submakes also solves this, but this is still a better
	algorithm.)  So!  Only put N-1 tokens into the pipe, since the
	topmost make keeps one for itself.

	* configure.in: Find sigaction.  Disable job server support unless
	the system provides it, in addition to either waitpid() or
	wait3().

1999-07-22  Rob Tulloh  <rob_tulloh@dev.tivoli.com>

	* arscan.c (ar_member_touch) [WINDOWS32]: The ar_date field is a
	string on Windows, not a timestamp.

1999-07-21  Paul D. Smith  <psmith@gnu.org>

	* Version 3.77.90 released.

	* Makefile.am (AUTOMAKE_OPTIONS): Require automake 1.4.

	* function.c: Rearrange so we don't need to predeclare the
	function_table array; K&R C compilers don't like that.

	* acinclude.m4 (AC_FUNC_SELECT): Ouch; this requires an ANSI C
	compiler!  Change to work with K&R compilers as well.

	* configure.in (AC_OUTPUT): Put build.sh back.  I don't know how I
	thought it would work this way :-/.  We'll have to think of
	something else.
	* Makefile.am: Remove rule to create build.sh.

	* default.c (default_suffix_rules): Rearrange the default command
	lines to conform to POSIX rules (put the filename argument $<
	_after_ the OUTPUT_OPTION, not before it).

	* various: Changed !strncmp() calls to strneq() macros.

	* misc.c (sindex): Make slightly more efficient.

	* dir.c (file_impossible): Change savestring(X,strlen(X)) to xstrdup().
	* implicit.c (pattern_search): Ditto.
	* main.c (enter_command_line_file): Ditto.
	(main): Ditto.
	* misc.c (copy_dep_chain): Ditto.
	* read.c (read_makefile): Ditto.
	(parse_file_seq): Ditto.
	(tilde_expand): Ditto.
	(multi_glob): Ditto.
	* rule.c (install_pattern_rule): Ditto.
	* variable.c (define_variable_in_set): Ditto.
	(define_automatic_variables): Ditto.
	* vpath.c (construct_vpath_list): Ditto.

	* misc.c (xrealloc): Some reallocs are non-standard: work around
	them in xrealloc by calling malloc if PTR is NULL.
	* main.c (main): Call xrealloc() directly instead of testing for
	NULL.

	* function.c (func_sort): Don't try to free NULL; some older,
	non-standard versions of free() don't like it.

	* configure.in (--enable-dmalloc): Install some support for using
	dmalloc (http://www.dmalloc.com/) with make.  Use --enable-dmalloc
	with configure to enable it.

	* function.c (function_table_entry): Whoops!  The function.c
	rewrite breaks backward compatibility: all text to a function is
	broken into arguments, and extras are ignored.  So $(sort a,b,c)
	returns "a"!  Etc.  Ouch.  Fix it by making a positive value in
	the REQUIRED_ARGS field mean exactly that many arguments to the
	function; any "extras" are considered part of the last argument as
	before.  A negative value means at least that many, but may be
	more: in this case all text is broken on commas.
	(handle_function): Stop when we've seen REQUIRED_ARGS args, if >0.
	(expand_builtin_function): Compare number of args to the absolute
	value of REQUIRED_ARGS.

1999-07-20  Paul D. Smith  <psmith@gnu.org>

	* job.c (start_job_command): Ensure that the state of the target
	is cs_running.  It might not be if we skipped all the lines due to
	-n (for example).

	* commands.c (execute_file_commands): If we discover that the
	command script is empty and succeed early, set cs_running so the
	modtime of the target is still rechecked.

	* rule.c (freerule): Free the dependency list for the rule.

	* implicit.c (pattern_search): When turning an intermediate file
	into a real target, keep the also_make list.
	Free the dep->name if we didn't use it during enter_file().

1999-07-16  Paul D. Smith  <psmith@gnu.org>

	* read.c (read_makefile): Don't allocate the commands buffer until
	we're sure we found a makefile and won't return early (mem leak).

	* job.c (start_job_command): Broken #ifdef test: look for F_SETFD,
	not FD_SETFD.  Close-on-exec isn't getting set on the bad_stdin
	file descriptor and it's leaking :-/.
	* getloadavg.c (getloadavg): Ditto.

1999-07-15  Paul D. Smith  <psmith@gnu.org>

	* read.c (read_makefile): Fix some potential memory stomps parsing
	`define' directives where no variable name is given.

	* function.c (func_call): Rename from func_apply.  Various code
	cleanup and tightening.
	(function_table): Add "call" as a valid builtin function.

	* make.texinfo (Call Function): Document it.

	* NEWS: Announce it.

1999-07-09  Eli Zaretskii  <eliz@is.elta.co.il>

	* variable.c (try_variable_definition) [__MSDOS__, WINDOWS32]:
	Treat "override SHELL=" the same as just "SHELL=".

1999-07-09  Paul D. Smith  <psmith@gnu.org>

	* job.c (start_waiting_job): Don't get a second job token if we
	already have one; if we're waiting on the load to go down
	start_waiting_job() might get called twice on the same file.

	* filedef.h (struct file): Add new field, mtime_before_update.
	When notice_finished_file runs it assigns the cached last_mtime to
	this field.
	* remake.c (update_goal_chain): Notice that a file wasn't updated
	by asking if it changed (g->changed) and comparing the current
	cached time (last_mtime) with the previous one, stored in
	mtime_before_update.  The previous check ("did last_mtime changed
	during the run of update_file?") fails for parallel builds because
	last_mtime is set during reap_children, before update_file is run.
	This causes update_goal_chain to always return -1 (nothing
	rebuilt) when running parallel (-jN).  This is OK during "normal"
	builds since our caller (main) treats these cases identically in
	that case, but if when rebuilding makefiles the difference is very
	important, as it controls whether we re-exec or not.
	* file.c (file_hash_enter): Copy the mtime_before_update field.
	(snap_deps): Initialize mtime_before_update to -1.
	* main.c (main): Initialize mtime_before_update on old (-o) and
	new (-W) files.

1999-07-08  Paul D. Smith  <psmith@gnu.org>

	* main.c (switches): Define a new switch -R (or
	--no-builtin-variables).  This option disables the defining of all
	the GNU make builtin variables.
	(main): If -R was given, force -r as well.
	* default.c (define_default_variables): Test the new flag.
	* make.h: Declare global flag.
	* make.texinfo (Options Summary): Document the new option.
	(Implicit Variables): Ditto.

1999-07-06  Paul D. Smith  <psmith@gnu.org>

	* make.texinfo (Options Summary): Correct examples in
	--print-data-base option summary (problem reported by David Morse
	<morse@nichimen.com>).

	* arscan.c: Add support for archives in Windows (VC++).  Frank
	Libbrecht <frankl@abzx.belgium.hp.com> provided info on how to do
	this.
	* NMakefile.template (CFLAGS_any): Remove NO_ARCHIVES from the
	compile line.
	* build_w32.bat: Ditto.

	* remake.c (no_rule_error): Fix -include/sinclude so it doesn't
	give errors if you try to -include the same file twice.
	(updating_makefiles): New variable: we need to know this info in
	no_rule_error() so we know whether to print an error or not.
	(update_file_1): Unconditionally call no_rule_error(), don't try
	to play games with the dontcare flag.

1999-06-14  Paul D. Smith  <psmith@gnu.org>

	* make.texinfo (Remaking Makefiles): Add a description of how to
	prevent implicit rule searches for makefiles.

	* make.1: Remove statement that make continues processing when -v
	is given.

1999-06-14  Paul D. Smith  <psmith@gnu.org>

	* read.c (read_makefile): Cast -1 arguments to
	variable_expand_string() to long.  Alexandre Sauve
	<Alexandre.SAUVE@ifp.fr> reports that without casts, this breaks
	on a NEC SUPER-UX SX-4 system (and it's wrong without a cast
	anyway).  Of course, (a) I'd really love to start using function
	prototypes, and (b) there's a whole slew of issues related to int
	vs. long and signed vs. unsigned in the length handling of
	variable buffers, etc.  Gross.  Needs a complete mucking-out.
	* expand.c (variable_expand): Ditto.

	* acinclude.m4 (AC_FUNC_SELECT): Slight enhancement for AIX 3.2 by
	Lars Hecking <lhecking@nmrc.ucc.ie>.

	* read.c (get_next_mword): Allow colons to be escaped in target
	names: fix for regression failure.

1999-04-26  Paul D. Smith  <psmith@gnu.org>

	* main.c (main): Reset read_makefiles to empty after processing so
	we get the right error message.

1999-04-25  Paul D. Smith  <psmith@gnu.org>

	* make.texinfo: Updates to @dircategory and @direntry suggested by
	Karl Berry <karl@cs.umb.edu>.

1999-04-23  Eli Zaretskii  <eliz@is.elta.co.il>

	* job.c (start_job_command) [__MSDOS__]: Call unblock_sigs before
	turning off dos_command_running, so child's signals produce the
	right effect.

	* commands.c (fatal_error_signal) [__MSDOS__]: Use EXIT_FAILURE
	instead of 1.

1999-04-18  Eli Zaretskii  <eliz@is.elta.co.il>

	* configh.dos.template: Update to recognize that version 2.02 of
	DJGPP contains sys_siglist stuff.

1999-04-14  Paul D. Smith  <psmith@gnu.org>

	* make.texinfo (Options/Recursion): Document the job server.
	(Parallel): Tweaks.

1999-04-13  Paul D. Smith  <psmith@gnu.org>

	Implement a new "job server" feature; the implementation was
	suggested by Howard Chu <hyc@highlandsun.com>.

	* configure.in (job-server): New disable option for job server
	support--it's enabled by default.  If it works well this will go
	away.

	* NEWS: Summarize the new feature.

	* acconfig.h: New definition MAKE_JOBSERVER if job server support
	is enabled.
	* config.h-vms.template: Undef MAKE_JOBSERVER for this port.
	* config.h.W32.template: Ditto.
	* config.ami.template: Ditto.

	* main.c (struct command_switch): Add a new type: int_string.
	(switches[]) Use int_string for -j if MAKE_JOBSERVER.
	(init_switches): Initialize the new int_string switch type.
	(print_usage): New function, extracted from decode_switches().
	(decode_switches): Call it.  Decode the new int_string switch type.
	(define_makeflags): Add new int_string switch data to MAKEFLAGS.
	(job_fds[]) Array to contain the pipe file descriptors.
	(main): Parse the job_slots_str option results.  If necessary,
	create the pipe and seed it with tokens.  Set the non-blocking bit
	for the read fd.  Enable the signal handler for SIGCHLD even if we
	have a non-hanging wait; it's needed to interrupt the select() in
	job.c:start_waiting_job().

	* make.h: Declare job_fds[].

	* job.h (struct child): Add job_token field to store the token for
	this job (if any).

	* job.c (reap_children): When a child is fully reaped, release the
	token back into the pipe.
	(free_child): If the child to be freed still has a token, put it
	back.
	(new_job): Initialize the job_token member.
	(start_waiting_job): For local jobs, if we're using the pipe, get
	a token before we check the load, etc.  We do this by performing a
	non-blocking read in a loop.  If the read fails, no token is
	available.  Do a select on the fd to wait for a token.  We need to
	re-enable the signal handler for SIGCHLD even if we have a
	non-hanging waitpid() or wait3(), so that the signal will
	interrupt the select() and we can wake up to reap children.
	(child_handler): Re-enable the signal handler.  The count is still
	kept although it's not needed or used unless you don't have
	waitpid() or wait3().

1999-04-10  Paul D. Smith  <psmith@gnu.org>

	* main.c (main): Reset the considered bit on all the makefiles if
	something failed to update; we need to examine them again if they
	appear as normal targets in order to get the proper error message.

1999-04-09  Paul D. Smith  <psmith@gnu.org>

	Performance enhancement from Tim Magill <tim.magill@telops.gte.com>.

	* remake.c (update_file): If you have large numbers of
	dependencies and you run in parallel, make can spend considerable
	time each pass through the graph looking at branches it has
	already seen.  Since we only reap_children() when starting a pass,
	not in the middle, if a branch has been seen already in that pass
	nothing interesting can happen until the next pass.  So, we toggle
	a bit saying whether we've seen this target in this pass or not.
	(update_goal_chain): Initially set the global considered toggle to
	1, since all targets initialize their boolean to 0.  At the end of
	each pass, toggle the global considered variable.
	* filedef.h (struct file): Per-file considered toggle bit.
	* file.c: New global toggle variable considered.

1999-04-05  Paul D. Smith  <psmith@gnu.org>

	* arscan.c (ar_scan): Added support for ARFZMAG (compressed
	archives?) for Digital UNIX C++.  Information provided by
	Patrick	E. Krogel <pekrogel@mtu.edu>.
	(ar_member_touch): Ditto.

1999-04-03  Paul D. Smith  <psmith@gnu.org>

	* remake.c (f_mtime): If: a) we found a file and b) we didn't
	create it and c) it's not marked as an implicit target and d) it
	is marked as an intermediate target, then it was so marked due to
	an .INTERMEDIATE special target, but it already existed in the
	directory.  In this case, unset the intermediate flag so we won't
	delete it when make is done.  It feels like it would be cleaner to
	put this check in update_file_1() but I worry it'll get missed...

1999-04-01  Paul D. Smith  <psmith@gnu.org>

	* job.c (construct_command_argv_internal): Use bcopy() to copy
	overlapping strings, rather than strcpy().  ISO C says the latter
	is undefined.  Found this in a bug report from 1996!  Ouch!

1999-03-31  Paul D. Smith  <psmith@gnu.org>

	* read.c (readline): Ignore carriage returns at the end of the
	line, to allow Windows-y CRLF line terminators.

1999-03-30  Paul D. Smith  <psmith@gnu.org>

	* configure.in: Don't put build.sh here, since build.sh.in doesn't
	exist initially.  This cause autoreconf and automake to fail when
	run on a clean CVS checkout.  Instead, we create build.sh in the
	Makefile (see below).

	* Makefile.am: Remove BUILT_SOURCES; this is no longer relevant.
	Put those files directly into EXTRA_DIST so they're distributed.
	Create a local build rule to create build.sh.
	Create a local maintainer-clean rule to delete all the funky
	maintainers files.

	* maintMakefile: Makefile.in depends on README, since automake
	fails if it doesn't exist.  Also don't remove glob/Makefile.in
	here, as it causes problems.

1999-03-26  Paul D. Smith  <psmith@gnu.org>

	* configure.in: Substitute GLOBLIB if we need the link the
	glob/libglob.a library.
	* Makefile.am (make_LDADD): Use the subst variable GLOBLIB so we
	don't link the local libglob.a at all if we don't need it.
	* build.template: Don't compile glob/*.o unless we want globlib.
	* maintMakefile (build.sh.in): Substitute the glob/*.o files
	separately.

1999-03-25  Paul D. Smith  <psmith@gnu.org>

	* make.texinfo: Various typos and additions, pointed out by James
	G. Sack <jsack@dornfeld.com>.

1999-03-22  Paul D. Smith  <psmith@gnu.org>

	* make.texinfo (Functions): Add a new section documenting the new
	$(error ...) and $(warning ...) functions.  Also updated copyright
	dates.
	* NEWS: Updated for the new functions.
	* function.c (func_error): Implement the new $(error ...) and
	$(warning ...) functions.
	(function_table): Insert new functions into the table.
	(func_firstword): Don't call find_next_token() with argv[0]
	itself, since that function modifies the pointer.
	* function.c: Cleanups and slight changes to the new method of
	calling functions.

1999-03-20  Han-Wen Nienhuys  <hanwen@cs.uu.nl>

	* function.c: Rewrite to use one C function per make function,
	instead of a huge switch statement.  Also allows some cleanup of
	multi-architecture issues, and a cleaner API which makes things
	like func_apply() simple.

	* function.c (func_apply): Initial implementation.  Expand either
	a builtin function or a make variable in the context of some
	arguments, provided as $1, $2, ... $N.

1999-03-19  Eli Zaretskii  <eliz@is.elta.co.il>
1999-03-19  Rob Tulloh  <rob_tulloh@dev.tivoli.com>

	* job.c (construct_command_argv_internal): Don't treat _all_
	backslashes as escapes, only those which really escape a special
	character.  This allows most normal "\" directory separators to be
	treated normally.

1999-03-05  Paul D. Smith  <psmith@gnu.org>

	* configure.in: Check for a system strdup().
	* misc.c (xstrdup): Created.  Suggestion by Han-Wen Nienhuys
	<hanwen@cs.uu.nl>.
	* make.h: Prototype xstrdup().
	* remake.c (library_search): Use it.
	* main.c (main): Use it.
	(find_and_set_default_shell): Use it.
	* job.c (construct_command_argv_internal): Use it.
	* dir.c (find_directory): Use it.

	* Makefile.am, configure.in: Use AC_SUBST_FILE to insert the
	maintMakefile instead of "include", to avoid automake 1.4
	incompatibility.

1999-03-04  Paul D. Smith  <psmith@gnu.org>

	* amiga.c, amiga.h, ar.c, arscan.c, commands.c, commands.h,
	* default.c, dep.h, dir.c, expand.c, file.c, filedef.h, function.c,
	* implicit.c, job.c, job.h, main.c, make.h, misc.c, read.c, remake.c
	* remote-cstms.c, remote-stub.c, rule.h, variable.c, variable.h,
	* vpath.c, Makefile.ami, NMakefile.template, build.template,
	* makefile.vms: Updated FSF address in the copyright notice.

	* variable.c (try_variable_definition): If we see a conditional
	variable and we decide to set it, re-type it as recursive so it
	will be expanded properly later.

1999-02-22  Paul D. Smith  <psmith@gnu.org>

	* NEWS: Mention new .LIBPATTERNS feature.

	* make.texinfo (Libraries/Search): Describe the use and
	ramifications of the new .LIBPATTERNS variable.

	* remake.c (library_search): Instead of searching only for the
	hardcoded expansion "libX.a" for a library reference "-lX", we
	obtain a list of patterns from the .LIBPATTERNS variable and
	search those in order.

	* default.c: Added a new default variable .LIBPATTERNS.  The
	default for UNIX is "lib%.so lib%.a".  Amiga and DOS values are
	also provided.

	* read.c: Remove bogus HAVE_GLOB_H references; always include
	vanilla glob.h.

1999-02-21  Paul D. Smith  <psmith@gnu.org>

	* function.c (expand_function): Set value to 0 to avoid freeing it.
	* variable.c (pop_variable_scope): Free the value of the variable.
	(try_variable_definition): For simple variables, use
	allocated_variable_expand() to avoid stomping on the variable
	buffer when we still need it for other things.

	* arscan.c: Modified to support AIX 4.3 big archives.  The changes
	are based on information provided by Phil Adams
	<padams@austin.ibm.com>.

1999-02-19  Paul D. Smith  <psmith@gnu.org>

	* configure.in: Check to see if the GNU glob library is already
	installed on the system.  If so, _don't_ add -I./glob to the
	compile line.  Using the system glob code with the local headers
	is very bad mojo!
	Rewrite SCCS macros to use more autoconf facilities.

	* Makefile.am: Move -Iglob out of INCLUDES; it'll get added to
	CPPFLAGS by configure now.
	Automake 1.4 introduced its own "include" feature which conflicts
	with the maintMakefile stuff.  A hack that seems to work is add a
	space before the include :-/.

	* build.template: Move -Iglob out of the compile line; it'll get
	added to CPPFLAGS by configure now.

1999-02-16  Glenn D. Wolf  <Glenn_Wolf@email.sps.mot.com>

	* arscan.c (ar_scan) [VMS]: Initialized VMS_member_date before
	calling lbr$get_index since if the archive is empty,
	VMS_get_member_info won't get called at all, and any leftover date
	will be used.  This bug shows up if any member of any archive is
	made, followed by a dependency check on a different, empty
	archive.

1998-12-13  Martin Zinser  <zinser@decus.decus.de>

	* config.h-vms [VMS]: Set _POSIX_C_SOURCE.  Redefine the getopt
	functions so we don't use the broken VMS versions.
	* makefile.com [VMS]: Allow debugging.
	* dir.c (dir_setup_glob) [VMS]: Don't extern stat() on VMS.

1998-11-30  Paul D. Smith  <psmith@gnu.org>

	* signame.c (init_sig): Check the sizes of signals being set up to
	avoid array overwrites (if the system headers have problems).

1998-11-17  Paul D. Smith  <psmith@gnu.org>

	* read.c (record_files): Clean up some indentation.

1998-11-08  Han-Wen Nienhuys  <hanwen@cs.uu.nl>

	* rule.c (print_rule_data_base): Fix arguments to fatal() call.

1998-10-13  Paul D. Smith  <psmith@gnu.org>

	* job.c (start_job_command): If the command list resolves to no
	chars at all (e.g.: "foo:;$(empty)") then command_ptr is NULL;
	quit early.

1998-10-12  Andreas Schwab  <schwab@issan.cs.uni-dortmund.de>

	* rule.c (print_rule_data_base): Ignore num_pattern_rules if it is
	zero.

1998-10-09  Paul D. Smith  <psmith@gnu.org>

	* read.c (read_makefile): Allow non-empty lines to expand to the
	empty string after variable, etc., expansion, and be ignored.

1998-09-21  Paul D. Smith  <psmith@gnu.org>

	* job.c (construct_command_argv_internal): Only add COMMAND.COM
	"@echo off" line for non-UNIXy shells.

1998-09-09  Paul D. Smith  <psmith@gnu.org>

	* w32/subproc/sub_proc.c: Add in missing HAVE_MKS_SHELL tests.

1998-09-04  Paul D. Smith  <psmith@gnu.org>

	* read.c (read_makefile): If we hit the "missing separator" error,
	check for the common case of 8 spaces instead of a TAB and give an
	extra comment to help people out.

1998-08-29  Paul Eggert  <eggert@twinsun.com>

	* configure.in (AC_STRUCT_ST_MTIM_NSEC):
	Renamed from AC_STRUCT_ST_MTIM.

	* acinclude.m4 (AC_STRUCT_ST_MTIM_NSEC):  Likewise.
	Port to UnixWare 2.1.2 and pedantic Solaris 2.6.

	* acconfig.h (ST_MTIM_NSEC):
	Renamed from HAVE_ST_MTIM, with a new meaning.

	* filedef.h (FILE_TIMESTAMP_FROM_S_AND_NS):
	Use new ST_MTIM_NSEC macro.

1998-08-26  Paul D. Smith  <psmith@gnu.org>

	* remake.c (check_dep): For any intermediate file, not just
	secondary ones, try implicit and default rules if no explicit
	rules are given.  I'm not sure why this was restricted to
	secondary rules in the first place.

1998-08-24  Paul D. Smith  <psmith@gnu.org>

	* make.texinfo (Special Targets): Update documentation for
	.INTERMEDIATE: if used with no dependencies, then it does nothing;
	old docs said it marked all targets as intermediate, which it
	didn't... and which would be silly :).

	* implicit.c (pattern_search): If we find a dependency in our
	internal tables, make sure it's not marked intermediate before
	accepting it as a found_file[].

1998-08-20  Paul D. Smith  <psmith@gnu.org>

	* ar.c (ar_glob): Use existing alpha_compare() with qsort.
	(ar_glob_alphacompare): Remove it.

	Modify Paul Eggert's patch so we don't abandon older systems:

	* configure.in: Warn the user if neither waitpid() nor wait3() is
	available.

	* job.c (WAIT_NOHANG): Don't syntax error on ancient hosts.
	(child_handler, dead_children): Define these if WAIT_NOHANG is not
	available.
	(reap_children): Only track the dead_children count if no
	WAIT_NOHANG.  Otherwise, it's a boolean.

	* main.c (main): Add back signal handler if no WAIT_NOHANG is
	available; only use default signal handler if it is.

1998-08-20  Paul Eggert  <eggert@twinsun.com>

	Install a more robust signal handling mechanism for systems which
	support it.

	* job.c (WAIT_NOHANG): Define to a syntax error if our host
	is truly ancient; this should never happen.
	(child_handler, dead_children): Remove.
	(reap_children): Don't try to keep separate track of how many
	dead children we have, as this is too bug-prone.
	Just ask the OS instead.
	(vmsHandleChildTerm): Fix typo in error message; don't mention
	child_handler.

	* main.c (main): Make sure we're not ignoring SIGCHLD/SIGCLD;
	do this early, before we could possibly create a subprocess.
	Just use the default behavior; don't have our own handler.

1998-08-18  Eli Zaretskii  <eliz@is.elta.co.il>

	* read.c (read_makefile) [__MSDOS__, WINDOWS32]: Add code to
	recognize library archive members when dealing with drive spec
	mess.  Discovery and initial fix by George Racz <gracz@mincom.com>.

1998-08-18  Paul D. Smith  <psmith@gnu.org>

	* configure.in: Check for stdlib.h explicitly (some hosts have it
	but don't have STDC_HEADERS).
	* make.h: Use HAVE_STDLIB_H.  Clean up some #defines.
	* config.ami: Re-compute based on new config.h.in contents.
	* config.h-vms: Ditto.
	* config.h.W32: Ditto.
	* configh.dos: Ditto.

	* dir.c (find_directory) [WINDOWS32]: Windows stat() fails if
	directory names end with `\' so strip it.

1998-08-17  Paul D. Smith  <psmith@gnu.org>

	* make.texinfo: Added copyright year to the printed copy.  Removed
	the price from the manual.  Change the top-level reference to
	running make to be "Invoking make" instead of "make Invocation",
	to comply with GNU doc standards.

	* make.h (__format__, __printf__): Added support for these in
	__attribute__ macro.
	(message, error, fatal): Use ... prototype form under __STDC__.
	Add __format__ attributes for printf-style functions.

	* configure.in (AC_FUNC_VPRINTF): Check for vprintf()/_doprnt().

	* misc.c (message, error, fatal): Add preprocessor stuff to enable
	creation of variable-argument functions with appropriate
	prototypes, that works with ANSI, pre-ANSI, varargs.h, stdarg.h,
	v*printf(), _doprnt(), or none of the above.  Culled from GNU
	fileutils and slightly modified.
	(makefile_error, makefile_error): Removed (merged into error() and
	fatal(), respectively).
	* amiga.c: Use them.
	* ar.c: Use them.
	* arscan.c: Use them.
	* commands.c: Use them.
	* expand.c: Use them.
	* file.c: Use them.
	* function.c: Use them.
	* job.c: Use them.
	* main.c: Use them.
	* misc.c: Use them.
	* read.c: Use them.
	* remake.c: Use them.
	* remote-cstms.c: Use them.
	* rule.c: Use them.
	* variable.c: Use them.

	* make.h (struct floc): New structure to store file location
	information.
	* commands.h (struct commands): Use it.
	* variable.c (try_variable_definition): Use it.
	* commands.c: Use it.
	* default.c: Use it.
	* file.c: Use it.
	* function.c: Use it.
	* misc.c: Use it.
	* read.c: Use it.
	* rule.c: Use it.

1998-08-16  Paul Eggert  <eggert@twinsun.com>

	* filedef.h (FILE_TIMESTAMP_PRINT_LEN_BOUND): Add 10, for nanoseconds.

1998-08-16  Paul Eggert  <eggert@twinsun.com>

	* filedef.h (FLOOR_LOG2_SECONDS_PER_YEAR): New macro.
	(FILE_TIMESTAMP_PRINT_LEN_BOUND): Tighten bound, and try to
	make it easier to understand.

1998-08-14  Paul D. Smith  <psmith@gnu.org>

	* read.c (read_makefile): We've already unquoted any colon chars
	by the time we're done reading the targets, so arrange for
	parse_file_seq() on the target list to not do so again.

1998-08-05  Paul D. Smith  <psmith@gnu.org>

	* configure.in: Added glob/configure.in data.  We'll have the glob
	code include the regular make config.h, rather than creating its
	own.

	* getloadavg.c (main): Change return type to int.

1998-08-01  Paul Eggert  <eggert@twinsun.com>

	* job.c (reap_children): Ignore unknown children.

1998-07-31  Paul D. Smith  <psmith@gnu.org>

	* make.h, filedef.h, dep.h, rule.h, commands.h, remake.c:
	Add prototypes for functions.  Some prototypes needed to be moved
	in order to get #include order reasonable.

1998-07-30  Paul D. Smith  <psmith@gnu.org>

	* make.h: Added MIN/MAX.
	* filedef.h: Use them; remove FILE_TIMESTAMP_MIN.

1998-07-30  Paul Eggert  <eggert@twinsun.com>

        Add support for sub-second timestamp resolution on hosts that
        support it (just Solaris 2.6, so far).

	* acconfig.h (HAVE_ST_MTIM, uintmax_t): New undefs.
	* acinclude.m4 (jm_AC_HEADER_INTTYPES_H, AC_STRUCT_ST_MTIM,
        jm_AC_TYPE_UINTMAX_T): New defuns.
	* commands.c (delete_target): Convert file timestamp to
        seconds before comparing to archive timestamp.  Extract mod
        time from struct stat using FILE_TIMESTAMP_STAT_MODTIME.
	* configure.in (C_STRUCT_ST_MTIM, jm_AC_TYPE_UINTMAX_T): Add.
        (AC_CHECK_LIB, AC_CHECK_FUNCS): Add clock_gettime.
	* file.c (snap_deps): Use FILE_TIMESTAMP, not time_t.
        (file_timestamp_now, file_timestamp_sprintf): New functions.
        (print_file): Print file timestamps as FILE_TIMESTAMP, not
        time_t.
	* filedef.h: Include <inttypes.h> if available and if HAVE_ST_MTIM.
        (FILE_TIMESTAMP, FILE_TIMESTAMP_STAT_MODTIME, FILE_TIMESTAMP_MIN,
        FILE_TIMESTAMPS_PER_S, FILE_TIMESTAMP_FROM_S_AND_NS,
        FILE_TIMESTAMP_DIV, FILE_TIMESTAMP_MOD, FILE_TIMESTAMP_S,
        FILE_TIMESTAMP_NS, FILE_TIMESTAMP_PRINT_LEN_BOUND): New macros.
        (file_timestamp_now, file_timestamp_sprintf): New decls.
        (struct file.last_mtime, f_mtime, file_mtime_1, NEW_MTIME):
        time_t -> FILE_TIMESTAMP.
	* implicit.c (pattern_search): Likewise.
	* vpath.c (vpath_search, selective_vpath_search): Likewise.
	* main.c (main): Likewise.
	* remake.c (check_dep, name_mtime, library_search, f_mtime): Likewise.
        (f_mtime): Use file_timestamp_now instead of `time'.
        Print file timestamp with file_timestamp_sprintf.
	* vpath.c (selective_vpath_search): Extract file time stamp from
        struct stat with FILE_TIMESTAMP_STAT_MODTIME.

1998-07-28  Paul D. Smith  <psmith@gnu.org>

	* Version 3.77 released.

	* dosbuild.bat: Change to DOS CRLF line terminators.

	* make-stds.texi: Update from latest version.

	* make.texinfo (Options Summary): Clarify that the -r option
	affects only rules, not builtin variables.

1998-07-27  Paul D. Smith  <psmith@gnu.org>

	* make.h: Make __attribute__ resolve to empty for non-GCC _and_
	for GCC pre-2.5.x.

	* misc.c (log_access): Print UID/GID's as unsigned long int for
	maximum portability.

	* job.c (reap_children): Print PIDs as long int for maximum
	portability.

1998-07-24  Eli Zaretskii  <eliz@is.elta.co.il>

	* Makefile.DOS (*_INSTALL, *_UNINSTALL): Replace `true' with `:'.

1998-07-25  Paul D. Smith  <psmith@gnu.org>

	* Version 3.76.94 released.

1998-07-23  Paul D. Smith  <psmith@gnu.org>

	* config.h.W32.template: Make sure all the #defines of macros here
	have a value (e.g., use ``#define HAVE_STRING_H 1'' instead of
	just ``#define HAVE_STRING_H''.  Keeps the preprocessor happy in
	some contexts.

	* make.h: Remove __attribute__((format...)) stuff; using it with
	un-prototyped functions causes older GCC's to fail.

	* Version 3.76.93 released.

1998-07-22  Paul D. Smith  <psmith@gnu.org>

	* file.c (print_file_data_base): Fix average calculation.

1998-07-20  Paul D. Smith  <psmith@gnu.org>

	* main.c (die): Postpone the chdir() until after
	remove_intermediates() so that intermediate targets with relative
	pathnames are removed properly.

1998-07-17  Paul D. Smith  <psmith@gnu.org>

	* filedef.h (struct file): New flag: did we print an error or not?

	* remake.c (no_rule_error): New function to print error messages,
	extraced from remake_file().

	* remake.c (remake_file): Invoke the new error print function.
	(update_file_1): Invoke the error print function if we see that we
	already tried this target and it failed, but that an error wasn't
	printed for it.  This can happen if a file is included with
	-include or sinclude and couldn't be built, then later is also
	the dependency of another target.  Without this change, make just
	silently stops :-/.

1998-07-16  Paul D. Smith  <psmith@gnu.org>

	* make.texinfo: Removed "beta" version designator.
	Updated ISBN for the next printing.

1998-07-13  Paul Eggert  <eggert@twinsun.com>

	* acinclude.m4: New AC_LFS macro to determine if special compiler
	flags are needed to allow access to large files (e.g., Solaris 2.6).
	* configure.in: Invoke it.

1998-07-08  Eli Zaretskii  <eliz@is.elta.co.il>

	* Makefile.DOS: track changes in Makefile.in.

1998-07-07  Paul D. Smith  <psmith@gnu.org>

	* remote-cstms.c (start_remote_job): Move gethostbyaddr() to the
	top so host is initialized early enough.

	* acinclude.m4: New file.  Need some special autoconf macros to
	check for network libraries (-lsocket, -lnsl, etc.) when
	configuring Customs.

	* configure.in (make_try_customs): Invoke new network libs macro.

1998-07-06  Paul D. Smith  <psmith@gnu.org>

	* Version 3.76.92 released.

	* README.customs: Added to the distribution.

	* configure.in (make_try_customs): Rewrite to require an installed
	Customs library, rather than looking at the build directory.

	* Makefile.am (man_MANS): Install make.1.
	* make.1: Renamed from make.man.

	* make.texinfo (Bugs): New mailing list address for GNU make bug
	reports.

1998-07-02  Paul D. Smith  <psmith@gnu.org>

	* Version 3.76.91 released.

	* default.c: Added default rule for new-style RCS master file
	storage; ``% :: RCS/%''.
	Added default rules for DOS-style C++ files with suffix ".cpp".
	They use the new LINK.cpp and COMPILE.cpp macros, which are set by
	default to be equal to LINK.cc and COMPILE.cc.

1998-06-19  Eli Zaretskii  <eliz@is.elta.co.il>

	* job.c (start_job_command): Reset execute_by_shell after an empty
        command was skipped.

1998-06-09  Paul D. Smith  <psmith@gnu.org>

	* main.c (main): Keep track of the temporary filename created when
	reading a makefile from stdin (-f-) and attempt to remove it
	as soon as we know we're not going to re-exec.  If we are, add it
	to the exec'd make's cmd line with "-o" so the exec'd make doesn't
	try to rebuild it.  We still have a hole: if make re-execs then
	the temporary file will never be removed.  To fix this we'd need
	a brand new option that meant "really delete this".
	* AUTHORS, getopt.c, getopt1.c, getopt.h, main.c (print_version):
	Updated mailing addresses.

1998-06-08  Paul D. Smith  <psmith@gnu.org>

	* main.c (main): Andreas Luik <luik@isa.de> points out that the
	check for makefile :: rules with commands but no dependencies
	causing a loop terminates incorrectly.

	* maintMakefile: Make a template for README.DOS to update version
	numbers.

1998-05-30  Andreas Schwab  <schwab@issan.informatik.uni-dortmund.de>

	* remake.c (update_file_1): Don't free the memory for the
	dependency structure when dropping a circular dependency.

1998-05-30  Eli Zaretskii  <eliz@is.elta.co.il>

	* dir.c (file_exists_p, file_impossible_p, file_impossible)
	[__MSDOS__, WINDOWS32]: Retain trailing slash in "d:/", and make
	dirname of "d:foo" be "d:".

1998-05-26  Andreas Schwab  <schwab@issan.informatik.uni-dortmund.de>

	* read.c (read_makefile): Avoid running past EOS when scanning
	file name after `include'.

1998-05-26  Andreas Schwab  <schwab@issan.informatik.uni-dortmund.de>

	* make.texinfo (Flavors): Correct description of conditional
	assignment, which is not equivalent to ifndef.
	(Setting): Likewise.

1998-05-24  Paul D. Smith  <psmith@gnu.org>

	* arscan.c (ar_name_equal): strncmp() might be implemented as a
	macro, so don't put preprocessor conditions inside the arguments
	list.

1998-05-23  Eli Zaretskii  <eliz@is.elta.co.il>

	* read.c (read_makefile) [__MSDOS__, WINDOWS32]: Skip colons in
	drive specs when parsing targets, target-specific variables and
	static pattern rules.  A colon can only be part of drive spec if
	it is after the first letter in a token.

1998-05-22  Eli Zaretskii  <eliz@is.elta.co.il>

	* remake.c (f_mtime) [__MSDOS__]: Allow up to 3 sec of skew before
	yelling bloody murder.

	* dosbuild.bat: Use -DINCLUDEDIR= and -DLIBDIR= where appropriate.

	* read.c (parse_file_seq): Combine the special file-handling code
	for WINDOWS32 and __MSDOS__ into a single snippet.
	(get_next_mword) [__MSDOS__, WINDOWS32]: Allow a word to include a
	colon as part of a drive spec.

	* job.c (batch_mode_shell) [__MSDOS__]: Declare.

1998-05-20  Paul D. Smith  <psmith@gnu.org>

	* Version 3.76.90 released.

1998-05-19  Paul D. Smith  <psmith@gnu.org>

	* make.texinfo (Make Errors): Added a new appendix describing
	common errors make might generate and how to resolve them (or at
	least more information on what they mean).

	* maintMakefile (NMAKEFILES): Use the new automake 1.3 feature
	to create a dependency file to construct Makefile.DOS, SMakefile,
	and NMakefile.
	(.dep_segment): Generate the dependency fragment file.

1998-05-14  Paul D. Smith  <psmith@gnu.org>

	* make.man: Minor changes.

1998-05-13  Paul D. Smith  <psmith@gnu.org>

	* function.c (pattern_matches,expand_function): Change variables
	and types named "word" to something else, to avoid compilation
	problems on Cray C90 Unicos.
	* variable.h: Modify the function prototype.

1998-05-11  Rob Tulloh  <rob_tulloh@tivoli.com>

	* job.c (construct_command_argv_internal) [WINDOWS32]: Turn off
	echo when using a batch file, and make sure the command ends in a
	newline.

1998-05-03  Paul D. Smith  <psmith@gnu.org>

	* configure.in (make_try_customs): Add some customs flags if the
	user configures custom support.

	* job.c, remote-cstms.c: Merge in changes for custom library.

	* remote-stub.c: Add option to stub start_remote_job_p().

1998-05-01  Paul D. Smith  <psmith@gnu.org>

	* remake.c (f_mtime): Install VPATH+ handling for archives; use
	the hname field instead of the name field, and rehash when
	appropriate.

1998-04-30  Paul D. Smith  <psmith@gnu.org>

	* rule.c (print_rule_data_base): Print out any pattern-specific
	variable values into the rules database.

	* variable.c (print_variable_set): Make this variable extern, to
	be called by print_rule_data_base() for pattern-specific variables.

	* make.texinfo (Pattern-specific): Document pattern-specific
	variables.

1998-04-29  Paul D. Smith  <psmith@gnu.org>

	* expand.c (variable_expand_for_file): Make static; its only
	called internally.  Look up this target in the list of
	pattern-specific variables and insert the variable set into the
	queue to be searched.

	* filedef.h (struct file): Add a new field to hold the
	previously-found pattern-specific variable reference.  Add a new
	flag to remember whether we already searched for this file.

	* rule.h (struct pattern_var): New structure for storing
	pattern-specific variable values.  Define new function prototypes.

	* rule.c: New variables pattern_vars and last_pattern_var for
	storage and handling of pattern-specific variable values.
	(create_pattern_var): Create a new pattern-specific variable value
	structure.
	(lookup_pattern_var): Try to match a target to one of the
	pattern-specific variable values.

1998-04-22  Paul D. Smith  <psmith@gnu.org>

	* make.texinfo (Target-specific): Document target-specific
	variables.

1998-04-21  Paul D. Smith  <psmith@gnu.org>

	* variable.c (define_variable_in_set): Made globally visible.
	(lookup_variable_in_set): New function: like lookup_variable but
	look only in a specific variable set.
	(target_environment): Use lookup_variable_in_set() to get the
	correct export rules for a target-specific variable.
	(create_new_variable_set): Create a new variable set, and just
	return it without installing it anywhere.
	(push_new_variable_scope): Reimplement in terms of
	create_new_variable_set.

	* read.c (record_target_var): Like record_files, but instead of
	files create a target-specific variable value for each of the
	listed targets.  Invoked from read_makefile() when the target line
	turns out to be a target-specific variable assignment.

1998-04-19  Paul D. Smith <psmith@gnu.org>

	* read.c (read_makefile): Rewrite the entire target parsing
	section to implement target-specific variables.  In particular, we
	cannot expand the entire line as soon as it's read in, since we
	may want to evaluate parts of it with different variable contexts
	active.  Instead, start expanding from the beginning until we find
	the `:' (or `::'), then determine what kind of line this is and
	continue appropriately.

	* read.c (get_next_mword): New function to parse a makefile line
	by "words", considering an entire variable or function as one
	word.  Return the type read in, along with its starting position
	and length.
	(enum make_word_type): The types of words that are recognized by
	get_next_mword().

	* variable.h (struct variable): Add a flag to specify a per-target
	variable.

	* expand.c: Make variable_buffer global.  We need this during the
	new parsing of the makefile.
	(variable_expand_string): New function.  Like variable_expand(),
	but start at a specific point in the buffer, not the beginning.
	(variable_expand): Rewrite to simply call variable_expand_string().

1998-04-13  Paul D. Smith  <psmith@gnu.org>

	* remake.c (update_goal_chain): Allow the rebuilding makefiles
	step to use parallel jobs.  Not sure why this was disabled:
	hopefully we won't find out :-/.

1998-04-11  Paul D. Smith  <psmith@gnu.org>

	* main.c (main): Set the CURDIR makefile variable.
	* make.texinfo (Recursion): Document it.

1998-03-17  Paul D. Smith  <psmith@gnu.org>

	* misc.c (makefile_fatal): If FILE is nil, invoke plain fatal().
	* variable.c (try_variable_definition): Use new feature.

1998-03-10  Paul D. Smith  <psmith@gnu.org>

	* main.c (main): Don't pass included, rebuilt makefiles to
	re-exec'd makes with -o.  Reopens a possible loop, but it caused
	too many problems.

1998-03-02  Paul D. Smith  <psmith@gnu.org>

	* variable.c (try_variable_definition): Implement ?=.
	* make.texinfo (Setting): Document it.

1998-02-28  Eli Zaretskii  <eliz@is.elta.co.il>

	* job.c (start_job_command): Reset execute_by_shell after an empty
        command, like ":", has been seen.

Tue Oct 07 15:00:00 1997  Phil Brooks <phillip_brooks@hp.com>

	* make.h [WINDOWS32]: make case sensitivity configurable
	* dir.c [WINDOWS32]: make case sensitivity configurable
	* README.W32: Document case sensitivity
	* config.ami: Share case warping code with Windows

Mon Oct  6 18:48:45 CDT 1997 Rob Tulloh <rob_tulloh@dev.tivoli.com>

	* w32/subproc/sub_proc.c: Added support for MKS toolkit shell
	(turn on HAVE_MKS_SHELL).
	* read.c [WINDOWS32]: Fixed a problem with multiple target rules
 	reported by Gilbert Catipon (gcatipon@tibco.com).  If multiple
 	path tokens in a rule did not have drive letters, make would
 	incorrectly concatenate the 2 tokens together.
	* main.c/variable.c [WINDOWS32]: changed SHELL detection code to
 	follow what MSDOS did. In addition to watching for SHELL variable
 	updates, make's main will attempt to default the value of SHELL
 	before and after makefiles are parsed.
	* job.c/job.h [WINDOWS32]: The latest changes made to enable use
 	of the GNUWIN32 shell from make could cause make to fail due to a
 	concurrency condition between parent and child processes.  Make
 	now creates a batch file per job instead of trying to reuse the
 	same singleton batch file.
	* job.c/job.h/function.c/config.h.W32 [WINDOWS32]: Renamed macro
 	from HAVE_CYGNUS_GNUWIN32_TOOLS to BATCH_MODE_ONLY_SHELL. Reworked
 	logic to reduce complexity. WINDOWS32 now uses the unixy_shell
 	variable to detect Bourne-shell compatible environments. There is
 	also a batch_mode_shell variable that determines whether not
 	command lines should be executed via script files. A WINDOWS32
 	system with no sh.exe installed would have unixy_shell set to
 	FALSE and batch_mode_shell set to TRUE. If you have a unixy shell
 	that does not behave well when invoking things via 'sh -c xxx',
 	you may want to turn on BATCH_MODE_ONLY_SHELL and see if things
 	improve.
	* NMakefile: Added /D DEBUG to debug build flags so that unhandled
 	exceptions could be debugged.

Mon Oct  6 00:04:25 1997  Rob Tulloh <rob_tulloh@dev.tivoli.com>

	* main.c [WINDOWS32]: The function define_variable() does not
 	handle NULL. Test before calling it to set Path.
	* main.c [WINDOWS32]: Search Path again after makefiles have been
	parsed to detect sh.exe.
	* job.c [WINDOWS32]: Added support for Cygnus GNU WIN32 tools.
	To use, turn on HAVE_CYGNUS_GNUWIN32_TOOLS in config.h.W32.
	* config.h.W32: Added HAVE_CYGNUS_GNUWIN32_TOOLS macro.

Sun Oct  5 22:43:59 1997  John W. Eaton <jwe@bevo.che.wisc.edu>

	* glob/glob.c (glob_in_dir) [VMS]: Globbing shouldn't be
	case-sensitive.
	* job.c (child_execute_job) [VMS]: Use a VMS .com file if the
	command contains a newline (e.g. from a define/enddef block).
	* vmsify.c (vmsify): Return relative pathnames wherever possible.
	* vmsify.c (vmsify): An input string like "../.." returns "[--]".

Wed Oct  1 15:45:09 1997  Rob Tulloh <rob_tulloh@tivoli.com>

	* NMakefile: Changed nmake to $(MAKE).
	* subproc.bat: Take the make command name from the command
	line. If no command name was given, default to nmake.
	* job.c [MSDOS, WINDOWS32]: Fix memory stomp: temporary file names
	are now always created in heap memory.
	* w32/subproc/sub_proc.c: New implementation of make_command_line()
	which is more compatible with different Bourne shell implementations.
	Deleted the now obsolete fix_command_line() function.
	* main.c [WINDOWS32]: Any arbitrary spelling of Path can be
	detected. Make will ensure that the special spelling `Path' is
	inserted into the environment when the path variable is propagated
	within itself and to make's children.
	* main.c [WINDOWS32]: Detection of sh.exe was occurring too
	soon. The 2nd check for the existence of sh.exe must come after
	the call to read_all_makefiles().

Fri Sep 26 01:14:18 1997  <zinser@axp602.gsi.de>

	* makefile.com [VMS]: Fixed definition of sys.
	* readme.vms: Comments on what's changed lately.

Fri Sep 26 01:14:18 1997  John W. Eaton <jwe@bevo.che.wisc.edu>

	* read.c (read_all_makefiles): Allow make to find files named
	"MAKEFILE" with no extension on VMS.
	* file.c (lookup_file): Lowercase filenames on VMS.

1997-09-29  Paul D. Smith  <psmith@baynetworks.com>

	* read.c (read_makefile): Reworked target detection again; the old
	version had an obscure quirk.

Fri Sep 19 09:20:49 1997  Paul D. Smith  <psmith@baynetworks.com>

	* Version 3.76.1 released.

	* Makefile.am: Add loadavg files to clean rules.

	* configure.in (AC_OUTPUT): Remove stamp-config; no longer needed.
	* Makefile.ami (distclean): Ditto.
	* SMakefile (distclean): Ditto.

	* main.c (main): Arg count should be int, not char!  Major braino.

Tue Sep 16 10:18:22 1997  Paul D. Smith  <psmith@baynetworks.com>

	* Version 3.76 released.

Tue Sep  2 10:07:39 1997  Paul D. Smith  <psmith@baynetworks.com>

	* function.c (expand_function): When processing $(shell...)
  	translate a CRLF (\r\n) sequence as well as a newline (\n) to a
 	space.  Also remove an ending \r\n sequence.
	* make.texinfo (Shell Function): Document it.

Fri Aug 29 12:59:06 1997  Rob Tulloh  <rob_tulloh@tivoli.com>

	* w32/pathstuff.c (convert_Path_to_windows32): Fix problem where
 	paths which contain single character entries like `.' are not
 	handled correctly.

	* README.W32: Document path handling issues on Windows systems.

Fri Aug 29 02:01:27 1997  Paul D. Smith  <psmith@baynetworks.com>

	* Version 3.75.93.

Thu Aug 28 19:39:06 1997  Rob Tulloh  <rob_tulloh@tivoli.com>

	* job.c (exec_command) [WINDOWS32]: If exec_command() is invoked
 	from main() to re-exec make, the call to execvp() would
 	incorrectly return control to parent shell before the exec'ed
 	command could run to completion. I believe this is a feature of
 	the way that execvp() is implemented on top of WINDOWS32 APIs. To
 	alleviate the problem, use the supplied process launch function in
 	the sub_proc library and suspend the parent process until the
 	child process has run.  When the child exits, exit the parent make
 	with the exit code of the child make.

Thu Aug 28 17:04:47 1997  Paul D. Smith  <psmith@baynetworks.com>

	* Makefile.DOS.template (distdir): Fix a line that got wrapped in
	email.

	* Makefile.am (loadavg): Give the necessary cmdline options when
	linking loadavg.

	* configure.in: Check for pstat_getdynamic for getloadvg on HP.

	* job.c (start_job_command) [VMS, _AMIGA]: Don't perform empty
	command optimization on these systems; it doesn't make sense.

Wed Aug 27 17:09:32 1997  Paul D. Smith  <psmith@baynetworks.com>

	* Version 3.75.92

Tue Aug 26 11:59:15 1997  Paul D. Smith  <psmith@baynetworks.com>

	* main.c (print_version): Add '97 to copyright years.

	* read.c (do_define): Check the length of the array before looking
	at a particular offset.

	* job.c (construct_command_argv_internal): Examine the last byte
	of the previous arg, not the byte after that.

Sat Aug 23 1997  Eli Zaretskii  <eliz@is.elta.co.il>

	* Makefile.DOS.template: New file (converted to Makefile.DOS in
	the distribution).

	* configure.bat: Rewrite to use Makefile.DOS instead of editing
        Makefile.in.  Add support for building from outside of the source
        directory.  Fail if the environment block is too small.

	* configh.dos: Use <sys/config.h>.

	* README.DOS: Update instructions.

Fri Aug 22 1997  Eli Zaretskii  <eliz@is.elta.co.il>

	* job.c (start_job_command) [__MSDOS__]: Don't test for "/bin/sh"
        literally, use value of unixy_shell instead.

	* filedef.h (NEW_MTIME): Use 1 less than maximum possible value if
        time_t is unsigned.

Sat Aug 16 00:56:15 1997  John W. Eaton  <jwe@bevo.che.wisc.edu>

	* vmsify.c (vmsify, case 11): After translating `..' elements, set
        nstate to N_OPEN if there are still more elements to process.
        (vmsify, case 2): After translating `foo/bar' up to the slash,
        set nstate to N_OPEN, not N_DOT.

Fri Aug  8 15:18:09 1997  John W. Eaton  <jwe@bevo.che.wisc.edu>

	* dir.c (vmsstat_dir): Leave name unmodified on exit.
	* make.h (PATH_SEPARATOR_CHAR): Set to comma for VMS.
	* vpath.c: Fix comments to refer to path separator, not colon.
        (selective_vpath_search): Avoid Unixy slash handling for VMS.

Thu Aug  7 22:24:03 1997  John W. Eaton  <jwe@bevo.che.wisc.edu>

	* ar.c [VMS]: Don't declare ar_member_touch.
	Delete VMS version of ar_member_date.
	Enable non-VMS versions of ar_member_date and ar_member_date_1 for
	VMS too.
	* arscan.c (VMS_get_member_info): New function.
	(ar_scan): Provide version for VMS systems.
	(ar_name_equal): Simply compare name and mem on VMS systems.
	Don't define ar_member_pos or ar_member_touch on VMS systems.

	* config.h-vms (pid_t, uid_t): Don't define.

	* remake.c: Delete declaration of vms_stat.
	(name_mtime): Don't call vms_stat.
	(f_mtime) [VMS]: Funky time value manipulation no longer necessary.

	* file.c (print_file): [VMS] Use ctime, not cvt_time.

	* make.h [VMS]: Don't define POSIX.

	* makefile.com (filelist): Include ar and arscan.
	Also include them in the link commands.
	Don't define NO_ARCHIVES in cc command.

	* makefile.vms (ARCHIVES, ARCHIVES_SRC): Uncomment.
	(defines): Delete NO_ARCHIVES from list.

	* remake.c (f_mtime): Only check to see if intermediate file is
	out of date if it also exists (i.e., mtime != (time_t) -1).

	* vmsdir.h (u_long, u_short): Skip typedefs if using DEC C.

Fri Jun 20 23:02:07 1997  Rob Tulloh  <rob_tulloh@tivoli.com>

	* w32/subproc/sub_proc.c: Get W32 sub_proc to handle shebang
	(#!/bin/sh) in script files correctly.
	Fixed a couple of memory leaks.
	Fixed search order in find_file() (w32/subproc/sub_proc.c) so that
	files with extensions are preferred over files without extensions.
	Added search for files with .cmd extension too.
	* w32/subproc/misc.c (arr2envblk): Fixed memory leak.

Mon Aug 18 09:41:08 1997  Paul D. Smith  <psmith@baynetworks.com>

	* Version 3.75.91

Fri Aug 15 13:50:54 1997  Paul D. Smith  <psmith@baynetworks.com>

	* read.c (do_define): Remember to count the newline after the endef.

Thu Aug 14 23:14:37 1997  Paul D. Smith  <psmith@baynetworks.com>

	* many: Rewrote builds to use Automake 1.2.

	* AUTHORS: New file.
	* maintMakefile: Contains maintainer-only make snippets.
	* GNUmakefile: This now only runs the initial auto* tools.
	* COPYING,texinfo.tex,mkinstalldirs,install-sh: Removed (obtained
	automatically by automake).
	* compatMakefile: Removed (not needed anymore).
	* README,build.sh.in: Removed (built from templates).
	* config.h.in,Makefile.in: Removed (built by tools).

Wed Aug 13 02:22:08 1997  Paul D. Smith  <psmith@baynetworks.com>

	* make.texinfo: Updates for DOS/Windows information (Eli Zaretskii)
	* README,README.DOS: Ditto.

	* remake.c (update_file_1,f_mtime): Fix GPATH handling.
	* vpath.c (gpath_search): Ditto.

	* file.c (rename_file): New function: rehash, but also rename to
	the hashname.
	* filedef.h: Declare it.

	* variable.c (merge_variable_set_lists): Remove free() of variable
	set; since various files can share variable sets we don't want to
	free them here.

Tue Aug 12 10:51:54 1997  Paul D. Smith  <psmith@baynetworks.com>

	* configure.in: Require autoconf 2.12

	* make.texinfo: Replace all "cd subdir; $(MAKE)" examples with a
	more stylistically correct "cd subdir && $(MAKE)".

	* main.c: Global variable `clock_skew_detected' defined.
	(main): Print final warning if it's set.
	* make.h: Declare it.
	* remake.c (f_mtime): Test and set it.

	* job.c (start_job_command): Add special optimizations for
 	"do-nothing" rules, containing just the shell no-op ":".  This is
 	useful for timestamp files and can make a real difference if you
 	have a lot of them (requested by Fergus Henderson <fjh@cs.mu.oz.au>).

	* configure.in,Makefile.in: Rewrote to use the new autoconf
	program_transform_name macro.

	* function.c (function_strip): Strip newlines as well as spaces
	and TABs.

Fri Jun  6 23:41:04 1997  Rob Tulloh <rob_tulloh@tivoli.com>

	* remake.c (f_mtime): Datestamps on FAT-based files are rounded to
	even seconds when stored, so if the date check fails on WINDOWS32
	 systems, see if this "off-by-one" error is the problem.

	* General: If your TZ environment variable is not set correctly
	then all your timestamps will be off by hours.  So, set it!

Mon Apr  7 02:06:22 1997  Paul D. Smith  <psmith@baynetworks.com>

	* Version 3.75.1

	* compatMakefile (objs): Define & use the $(GLOB) variable so
	that it's removed correctly from build.sh.in when it's built.

	* configure.in: On Solaris we can use the kstat_*() functions to
	get load averages without needing special permissions.  Add a
	check for -lkstat to see if we have it.

	* getloadavg.c (getloadavg): Use HAVE_LIBKSTAT instead of SUN5 as
	the test to enable kstat_open(), etc. processing.

Fri Apr  4 20:21:18 1997  Eli Zaretskii  <eliz@is.elta.co.il>

	* <lots>: Fixes to work in the DJGPP DOS environment.

Mon Mar 31 02:42:52 1997  Paul D. Smith  <psmith@baynetworks.com>

	* function.c (expand_function): Added new function $(wordlist).

	* make.texinfo (Filename Functions): Document $(wordlist) function.

	* vpath.c (build_vpath_lists): Construct the GPATH variable
	information in the same manner we used to construct VPATH.
	(gpath_search): New function to search GPATH.

	* make.h: Declare the new function.

	* remake.c (update_file_1): Call it, and keep VPATH if it's found.

	* make.texinfo (Search Algorithm): Document GPATH variable.

Sun Mar 30 20:57:16 1997  Paul D. Smith  <psmith@baynetworks.com>

	* main.c (handle_non_switch_argument): Defined the MAKECMDGOALS
	variable to contain the user options passed in on the cmd line.

	* make.texinfo (Goals): Document MAKECMDGOALS variable.

	* remake.c (f_mtime): Print a warning if we detect a clock skew
	error, rather than failing.

	* main.c (main): If we rebuild any makefiles and need to re-exec,
	add "-o<mkfile>" options for each makefile rebuilt to avoid
	infinite looping.

Fri Mar 28 15:26:05 1997  Paul D. Smith  <psmith@baynetworks.com>

	* job.c (construct_command_argv_internal): Track whether the last
	arg in the cmd string was empty or not (Roland).
	(construct_command_argv_internal): If the shell line is empty,
	don't do anything (Roland).

	* glob/glob.h,glob/glob.c,glob/fnmatch.c,glob/fnmatch.h: Install
	the latest changes from the GLIBC version of glob (Ulrich Drepper).

	* getloadavg.c,make-stds.texi: New version (Roland).

	* (ALL): Changed WIN32 to W32 or WINDOWS32 (RMS).

Mon Mar 24 15:33:34 1997  Rob Tulloh  <rob_tulloh@tivoli.com>

	* README.W32: Describe preliminary FAT support.

	* build_w32.bat: Use a variable for the final exe name.

	* dir.c (find_directory): W32: Find the filesystem type.
	(dir_contents_file_exists_p): W32: for FAT filesystems, always
	rehash since FAT doesn't change directory mtime on change.

	* main.c (handle_runtime_exceptions): W32: Add an
 	UnhandledExceptionFilter so that when make bombs due to ^C or a
 	bug, it won't cause a GUI requestor to pop up unless debug is
 	turned on.
	(main): Call it.

Mon Mar 24 00:57:34 1997  Paul D. Smith  <psmith@baynetworks.com>

	* configure.in, config.h.in, config.ami, config.h-vms, config.h.w32:
 	Check for memmove() function.

	* make.h (bcopy): If memmove() available, define bcopy() to use it.
	Otherwise just use bcopy().  Don't use memcpy(); it's not guaranteed
	to handle overlapping moves.

	* read.c (read_makefile): Fix some uninitialized memory reads
	(reported by Purify).

	* job.c (construct_command_argv_internal): Use bcopy() not
	strcpy(); strcpy() isn't guaranteed to handle overlapping moves.

	* Makefile.in: Change install-info option ``--infodir'' to
	``--info-dir'' for use with new texinfo.

	* function.c (expand_function): $(basename) and $(suffix) should
	only search for suffixes as far back as the last directory (e.g.,
	only the final filename in the path).

Sun Mar 23 00:13:05 1997  Paul D. Smith  <psmith@baynetworks.com>

	* make.texinfo: Add @dircategory/@direntry information.
	(Top): Remove previous reference to (dir) (from RMS).
	(Static Usage): Add "all:" rule to example.
	(Automatic Dependencies): fix .d file creation example.

	* Install VPATH+ patch:

	* filedef.h (struct file): Add in hname field to store the hashed
        filename, and a flag to remember if we're using the vpath filename
	or not.  Renamed a few functions for more clarity.

	* file.c (lookup_file,enter_file,file_hash_enter): Store filenames
	in the hash table based on their "hash name".  We can change this
	while keeping the original target in "name".
	(rehash_file): Renamed from "rename_file" to be more accurate.
	Changes the hash name, but not the target name.

	* remake.c (update_file_1): Modify -d output for more detailed
 	VPATH info.  If we don't need to rebuild, use the VPATH name.
	(f_mtime): Don't search for vpath if we're ignoring it.  Call
 	renamed function rehash_file.  Call name_mtime instead of
 	file_mtime, to avoid infinite recursion since the file wasn't
 	actually renamed.

	* implicit.c (pattern_search): if we find an implicit file in
	VPATH, save the original name not the VPATH name.

	* make.texinfo (Directory Search): Add a section on the new VPATH
	functionality.

Sun Dec  1 18:36:04 1996  Andreas Schwab  <schwab@issan.informatik.uni-dortmund.de>

	* dir.c (file_exists_p, file_impossible, file_impossible_p): If
	dirname is empty replace it by the name of the root directory.
	Note that this doesn't work (yet) for W32, Amiga, or VMS.

Tue Oct 08 13:57:03 1996  Rob Tulloh  <tulloh@tivoli.com>

	* main.c (main): W32 bug fix for PATH vars.

Tue Sep 17 1996  Paul Eggert  <eggert@twinsun.com>

	* filedef.h (NEW_MTIME): Don't assume that time_t is a signed
 	32-bit quantity.

	* make.h: (CHAR_BIT, INTEGER_TYPE_SIGNED, INTEGER_TYPE_MAXIMUM,
 	INTEGER_TYPE_MINIMUM): New macros.

Tue Aug 27 01:06:34 1996  Roland McGrath  <roland@baalperazim.frob.com>

	* Version 3.75 released.

	* main.c (print_version): Print out bug-reporting address.

Mon Aug 26 19:55:47 1996  Roland McGrath  <roland@baalperazim.frob.com>

	* main.c (print_data_base): Don't declare ctime; headers do it for us
 	already.

Sun Jul 28 15:37:09 1996  Rob Tulloh (tulloh@tivoli.com)

	* w32/pathstuff.c: Turned convert_vpath_to_w32() into a
	real function. This was done so that VPATH could contain
	white space separated pathnames. Please note that directory
	paths (in VPATH/vpath context) containing white space are not
	supported (just as they are not under Unix). See README.W32
	for suggestions.

	* w32/include/pathstuff.h: Added prototype for the new
	function convert_vpath_to_w32. Deleted macro for same.

	* README.W32: Added some notes about why I chose not to try
	and support pathnames which contain white space and some
	workaround suggestions.

Thu Jul 25 19:53:31 1996  Roland McGrath  <roland@delasyd.gnu.ai.mit.edu>

	* GNUmakefile (mkdep-nolib): Use -MM option unconditionally.

	* Version 3.74.7.

	* main.c (define_makeflags): Back up P to point at null terminator
	when killing final space and dash before setting MFLAGS.

	From Robert Hoehne <robert.hoehne@Mathematik.TU-Chemnitz.DE>:
	* dir.c [__MSDOS__ && DJGPP > 1]: Include <libc/dosio.h> and defin
	`__opendir_flags' initialized to 0.
	(dosify) [__MSDOS__ && DJGPP > 1]: Return name unchanged if _USE_LFN.
	(find_directory) [__MSDOS__ && DJGPP > 1]: If _USE_LGN, set
	__opendir_flags to __OPENDIR_PRESERVE_CASE.

	* vmsfunctions.c (vms_stat): `sys$dassgn (DevChan);' added by kkaempf.

	* GNUmakefile (w32files): Add NMakefile.

	* NMakefile (LDFLAGS_debug): Value fixed by tulloh.

Sat Jul 20 12:32:10 1996  Klaus K�mpf (kkaempf@progis.de)

	* remake.c (f_mtime) [VMS]: Add missing `if' conditional for future
	modtime check.
	* config.h-vms, makefile.vms, readme.vms, vmsify.c: Update address.

Sat Jul 20 05:29:43 1996  Roland McGrath  <roland@delasyd.gnu.ai.mit.edu>

	* configure.in: Require autoconf 2.10 or later.

Fri Jul 19 16:57:27 1996  Roland McGrath  <roland@delasyd.gnu.ai.mit.edu>

	* Version 3.74.6.

	* GNUmakefile (w32files): New variable.
	(distfiles): Add it.
	* w32: Updated by Rob Tulloh.

	* makefile.vms (LOADLIBES): Fix typo.

Sun Jul 14 12:59:27 1996  Roland McGrath  <roland@delasyd.gnu.ai.mit.edu>

	* job.c (construct_command_argv_internal): Fix up #else, #endifs.

	* configh.dos: Define HAVE_DIRENT_H instead of DIRENT.

	* remake.c (f_mtime): Don't compare MTIME to NOW if MTIME == -1.

	* Version 3.74.5.

	* main.c (main): Exit with status 2 when update_goal_chain returns 2.

Sat Jun 22 14:56:05 1996  Roland McGrath  <roland@delasyd.gnu.ai.mit.edu>

	* configure.in: Don't check for _sys_siglist.
	* make.h [HAVE__SYS_SIGLIST]: Don't test this; just punt if there is
	no strsignal or sys_siglist.

	* read.c (conditional_line): Strip ws in `ifeq (a , b)' so it is the
	same as `ifeq (a, b)'.

	* job.c (reap_children): Don't call die if handling_fatal_signal.

	* file.c (file_hash_enter): Allow renaming :: to : when latter is
	non-target, or : to :: when former is non-target.

	* job.c (start_job_command): Call block_sigs.
	(block_sigs): New function, broken out of start_job_command.
	(reap_children): Block fatal signals around removing dead child from
	chain and adjusting job_slots_used.
	* job.h: Declare block_sigs.

	* remote-stub.c (remote_setup, remote_cleanup): New (empty) functions.
	* main.c (main): Call remote_setup.
	(die): Call remote_cleanup.

	* job.c (reap_children): Quiescent value of shell_function_pid is
	zero, not -1.

	* main.c (print_version): Add 96 to copyright years.

Sat Jun 15 20:30:01 1996  Andreas Schwab  <schwab@issan.informatik.uni-dortmund.de>

	* read.c (find_char_unquote): Avoid calling strlen on every call
	just to throw away the value most of the time.

Sun Jun  2 12:24:01 1996  Roland McGrath  <roland@delasyd.gnu.ai.mit.edu>

	* main.c (decode_env_switches): Prepend '-' to ARGV[1] if it contains
	no '=', regardless of ARGC.
	(define_makeflags): Elide leading '-' from MAKEFLAGS value if first
	word is short option, regardless of WORDS.

Wed May 22 17:24:51 1996  Roland McGrath  <roland@delasyd.gnu.ai.mit.edu>

	* makefile.vms: Set LOADLIBES.
	* makefile.com (link_using_library): Fix typo.

Wed May 15 17:37:26 1996  Roland McGrath  <roland@delasyd.gnu.ai.mit.edu>

	* dir.c (print_dir_data_base): Use %ld dev and ino and cast them to
	long.

Wed May 15 10:14:14 CDT 1996  Rob Tulloh  <tulloh@tivoli.com>

	* dir.c: W32 does not support inode. For now, fully qualified
	pathname along with st_mtime will be keys for files.
	Fixed problem where vpath can be confused when files
	are added to a directory after the directory has already been
	read in. The code now attempts to reread the directory if it
	discovers that the datestamp on the directory has changed since
	it was cached by make. This problem only seems to occur on W32
	right now so it is lumped under port #ifdef WINDOWS32.

	* function.c: W32: call subproc library (CreateProcess()) instead of
	fork/exec.

	* job.c: W32: Added the code to do fork/exec/waitpid style processing
	on W32 systems via calls to subproc library.

	* main.c: W32: Several things added here. First, there is code
	for dealing with PATH and SHELL defaults. Make tries to figure
	out if the user has %PATH% set in the environment and sets it to
	%Path% if it is not set already. Make also looks to see if sh.exe
	is anywhere to be found. Code path through job.c will change
	based on existence of a working Bourne shell. The checking for
	default shell is done twice: once before makefiles are read in
	and again after. Fall back to MSDOS style execution mode if no sh.exe
	is found. Also added some debug support that allows user to pause make
	with -D switch and attach a debugger. This is especially useful for
	debugging recursive calls to make where problems appear only in the
	sub-make.

	* make.h: W32: A few macros and header files for W32 support.

	* misc.c: W32: Added a function end_of_token_w32() to assist
	in parsing code in read.c.

	* read.c: W32: Fixes similar to MSDOS which allow colon to
	appear in filenames. Use of colon in filenames would otherwise
	confuse make.

	* remake.c: W32: Added include of io.h to eliminate compiler
	warnings. Added some code to default LIBDIR if it is not set
	on W32.

	* variable.c: W32: Added support for detecting Path/PATH
	and converting them to semicolon separated lists for make's
	internal use. New function sync_Path_environment()
	which is called in job.c and function.c before creating a new
	process. Caller must set Path in environment since we don't
	have fork() to do this for us.

	* vpath.c: W32: Added detection for filenames containing
	forward or backward slashes.

	* NMakefile: W32: Visual C compatible makefile for use with nmake.
	Use this to build GNU make the first time on Windows NT or Windows 95.

	* README.W32: W32: Contains some helpful notes.

	* build_w32.bat: W32: If you don't like nmake, use this the first
	time you build GNU make on Windows NT or Windows 95.

	* config.h.W32: W32 version of config.h

	* subproc.bat: W32: A bat file used to build the
	subproc library from the top-level NMakefile. Needed because
	WIndows 95 (nmake) doesn't allow you to cd in a make rule.

	* w32/include/dirent.h
	* w32/compat/dirent.c: W32: opendir, readdir, closedir, etc.

	* w32/include/pathstuff.h: W32: used by files needed functions
	defined in pathstuff.c (prototypes).

	* w32/include/sub_proc.h: W32: prototypes for subproc.lib functions.

	* w32/include/w32err.h: W32: prototypes for w32err.c.

	* w32/pathstuff.c: W32: File and Path/Path conversion functions.

	* w32/subproc/build.bat: W32: build script for subproc library
	if you don't wish to use nmake.

	* w32/subproc/NMakefile: W32: Visual C compatible makefile for use
	with nmake. Used to build subproc library.

	* w32/subproc/misc.c: W32: subproc library support code
	* w32/subproc/proc.h: W32: subproc library support code
	* w32/subproc/sub_proc.c: W32: subproc library source code
	* w32/subproc/w32err.c: W32: subproc library support code

Mon May 13 14:37:42 1996  Roland McGrath  <roland@delasyd.gnu.ai.mit.edu>

	* Version 3.74.4.

	* GNUmakefile (vmsfiles): Fix typo.

	* GNUmakefile (amigafiles): Add amiga.h.

Sun May 12 19:19:43 1996  Aaron Digulla   <digulla@fh-konstanz.de>

	* dir.c: New function: amigafy() to fold filenames
	Changes HASH() to HASHI() to fold filenames on Amiga.
	Stringcompares use strieq() instead of streq()
	The current directory on Amiga is "" instead of "."
	* file.c: Likewise.

	* amiga.c: New function wildcard_expansion(). Allows to use
	Amiga wildcards with $(wildcard )

	* amiga.h: New file. Prototypes for amiga.c

	* function.c: Use special function wildcard_expansion() for
	$(wildcard ) to allow Amiga wildcards
	The current directory on Amiga is "" instead of "."

	* job.c: No Pipes on Amiga, too
	(load_too_high) Neither on Amiga
	ENV variable on Amiga are in a special directory and are not
	passed as third argument to main().

	* job.h: No envp on Amiga

	* make.h: Added HASHI(). This is the same as HASH() but converts
	it's second parameter to lowercase on Amiga to fold filenames.

	* main.c: (main), variable.c Changed handling of ENV-vars. Make
	stores now the names of the variables only and reads their contents
	when they are accessed to reflect that these variables are really
	global (ie. they CAN change WHILE make runs !) This handling is
	made in lookup_variable()

	* Makefile.ami: renamed file.h to filedep.h
	Updated dependencies

	* read.c: "find_semicolon" is declared as static but never defined.
	No difference between Makefile and makefile on Amiga; added
	SMakefile to *default_makefiles[].
	(read_makefile) SAS/C want's two_colon and pattern_percent be set
	before use.
	The current directory on Amiga is "" instead of "."
	Strange #endif moved.

	* README.Amiga: updated feature list

	* SMakefile: Updated dependencies

	* variable.c: Handling of ENV variable happens inside lookup_variable()

Sat May 11 17:58:32 1996  Roland McGrath  <roland@delasyd.gnu.ai.mit.edu>

	* variable.c (try_variable_definition): Count parens in lhs variable
	refs to avoid seeing =/:=/+= inside a ref.

Thu May  9 13:54:49 1996  Roland McGrath  <roland@delasyd.gnu.ai.mit.edu>

	* commands.c (fatal_error_signal) [SIGQUIT]: Make SIGQUIT check
	conditional.

	* main.c (main): Use unsigned for fread return.

	* read.c (parse_file_seq): Use `int' for char arg to avoid widening
	conflict issues.
	* dep.h: Fix prototype.

	* function.c (expand_function) [_AMIGA]: Fix some typos.
	(patsubst_expand): Make len vars unsigned.

	* GNUmakefile (globfiles): Add AmigaDOS support files.
	(distfiles): Add $(amigafiles).
	(amigafiles): New variable.

Thu Nov  7 10:18:16 1995  Aaron Digulla   <digulla@fh-konstanz.de>

	* Added Amiga support in commands.c, dir.c, function.c,
	job.c, main.c, make.h, read.c, remake.c
	* commands.c: Amiga has neither SIGHUP nor SIGQUIT
	* dir.c: Amiga has filenames with Upper- and Lowercase,
	but "FileName" is the same as "filename". Added strieq()
	which is use to compare filenames. This is like streq()
	on all other systems. Also there is no such thing as
	"." under AmigaDOS.
	* function.c: On Amiga, the environment is not passed as envp,
	there are no pipes and Amiga can't fork. Use my own function
	to create a new child.
	* job.c: default_shell is "" (The system automatically chooses
	a shell for me). Have to use the same workaround as MSDOS for
	running batch commands. Added HAVE_SYS_PARAM_H. NOFILE isn't
	known on Amiga. Cloned code to run children from MSDOS. Own
	version of sh_chars[] and sh_cmds[]. No dup2() or dup() on Amiga.
	* main.c: Force stack to 20000 bytes. Read environment from ENV:
	device. On Amiga, exec_command() does return, so I exit()
	afterwards.
	* make.h: Added strieq() to compare filenames.
	* read.c: Amiga needs special extension to have passwd. Only
	one include-dir. "Makefile" and "makefile" are the same.
	Added "SMakefile".  Added special code to handle device names (xxx:)
	and "./" in rules.
	* remake.c: Only one lib-dir. Amiga link-libs are named "%s.lib"
	instead of "lib%s.a".
	* main.c, rule.c, variable.c: Avoid floats at all costs.
	* vpath.c: Get rid of as many alloca()s as possible.

Thu May  9 13:20:43 1996  Roland McGrath  <roland@delasyd.gnu.ai.mit.edu>

	* read.c (read_makefile): Grok `sinclude' as alias for `-include'.

Wed Mar 20 09:52:27 1996  Roland McGrath  <roland@charlie-brown.gnu.ai.mit.edu>

	* GNUmakefile (vmsfiles): New variable.
	(distfiles): Include $(vmsfiles).

Tue Mar 19 20:21:34 1996  Roland McGrath  <roland@charlie-brown.gnu.ai.mit.edu>

	Merged VMS port from Klaus Kaempf <kkaempf@didymus.rmi.de>.
	* make.h (PARAMS): New macro.
	* config.h-vms: New file.
	* makefile.com: New file.
	* makefile.vms: New file.
	* readme.vms: New file.
	* vmsdir.h: New file.
	* vmsfunctions.c: New file.
	* vmsify.c: New file.
	* file.h: Renamed to filedef.h to avoid conflict with VMS system hdr.
	* ar.c: Added prototypes and changes for VMS.
	* commands.c: Likewise.
	* commands.h: Likewise.
	* default.c: Likewise.
	* dep.h: Likewise.
	* dir.c: Likewise.
	* expand.c: Likewise.
	* file.c: Likewise.
	* function.c: Likewise.
	* implicit.c: Likewise.
	* job.c: Likewise.
	* job.h: Likewise.
	* main.c: Likewise.
	* make.h: Likewise.
	* misc.c: Likewise.
	* read.c: Likewise.
	* remake.c: Likewise.
	* remote-stub.c: Likewise.
	* rule.c: Likewise.
	* rule.h: Likewise.
	* variable.c: Likewise.
	* variable.h: Likewise.
	* vpath.c: Likewise.
	* compatMakefile (srcs): Rename file.h to filedef.h.

Sat Aug 19 23:11:00 1995  Richard Stallman  <rms@mole.gnu.ai.mit.edu>

	* remake.c (check_dep): For a secondary file, try implicit and
	default rules if appropriate.

Wed Aug  2 04:29:42 1995  Richard Stallman  <rms@mole.gnu.ai.mit.edu>

	* remake.c (check_dep): If an intermediate file exists,
	do consider its actual date.

Sun Jul 30 00:49:53 1995  Richard Stallman  <rms@mole.gnu.ai.mit.edu>

	* file.h (struct file): New field `secondary'.
	* file.c (snap_deps): Check for .INTERMEDIATE and .SECONDARY.
	(remove_intermediates): Don't delete .SECONDARY files.

Sat Mar  2 16:26:52 1996  Roland McGrath  <roland@charlie-brown.gnu.ai.mit.edu>

	* compatMakefile (srcs): Add getopt.h; prepend $(srcdir)/ to getopt*.

Fri Mar  1 12:04:47 1996  Roland McGrath  <roland@charlie-brown.gnu.ai.mit.edu>

	* Version 3.74.3.

	* remake.c (f_mtime): Move future modtime check before FILE is
	clobbered by :: loop.

	* dir.c: Use canonical code from autoconf manual for dirent include.
	[_D_NAMLEN]: Redefine NAMLEN using this.
	(dir_contents_file_exists_p): Use NAMLEN macro.
	(read_dirstream) [_DIRENT_HAVE_D_NAMLEN]: Only set d_namlen #if this.

	* compatMakefile (objs): Add missing backslash.

Wed Feb 28 03:56:20 1996  Roland McGrath  <roland@charlie-brown.gnu.ai.mit.edu>

	* default.c (default_terminal_rules): Remove + prefix from RCS cmds.
	(default_variables): Put + prefix in $(CHECKOUT,v) value instead.

	* remake.c (f_mtime): Check for future timestamps; give error and mark
	file as "failed to update".

Fri Jan 12 18:09:36 1996  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* job.c: Don't declare unblock_sigs; job.h already does.

Sat Jan  6 16:24:44 1996  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* acconfig.h (HAVE_SYSCONF_OPEN_MAX): #undef removed.

	* job.c (NGROUPS_MAX): Don't try to define this macro.

Fri Dec 22 18:44:44 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* compatMakefile (GETOPT, GETOPT_SRC, GLOB): Variables removed.
	(objs, srcs): Include their values here instead of references.

Thu Dec 14 06:21:29 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* Version 3.74.2.

	* job.c (reap_children): Call unblock_sigs after start_job_command.

Thu Dec 14 07:22:03 1995  Roland McGrath  <roland@duality.gnu.ai.mit.edu>

	* dir.c (dir_setup_glob): Don't use lstat; glob never calls it anyway.
	Avoid & before function names to silence bogus sunos4 compiler.

	* configure.in: Remove check for `sysconf (_SC_OPEN_MAX)'.

Tue Dec 12 00:48:42 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* Version 3.74.1.

	* dir.c (read_dirstream): Fix braino: fill in the buffer when not
	reallocating it!

Mon Dec 11 22:26:15 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* misc.c (collapse_continuations): Fix skipping of trailing \s so
	it can never dereference before the beginning of the array.

	* read.c (find_semicolon): Function removed.
	(read_makefile): Don't use find_semicolon or remove_comments for
	rule lines.  Use find_char_unquote directly and handle quoted comments
	properly.

	* default.c: Remove all [M_XENIX] code.

	* dir.c [HAVE_D_NAMLEN]: Define this for __GNU_LIBRARY__ > 1.
	(D_NAMLEN): Macro removed.
	(FAKE_DIR_ENTRY): New macro.
	(dir_contents_file_exists_p): Test HAVE_D_NAMLEN instead of using
	D_NAMLEN.
	(read_dirstream): Return a struct dirent * for new glob interface.
	(init_dir): Function removed.
	(dir_setup_glob): New function.
	* main.c (main): Don't call init_dir.
	* read.c (multi_glob): Call dir_setup_glob on our glob_t and use
	GLOB_ALTDIRFUNC flag.

	* misc.c (safe_stat): Function removed.
	* read.c, commands.c, remake.c, vpath.c: Use plain stat instead of
	safe_stat.

Sat Nov 25 20:35:18 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* job.c [HAVE_UNION_WAIT]: Include sys/wait.h.

	* main.c (log_working_directory): Made global.
	Print entering msg only once.
	* make.h (log_working_directory): Declare it.
	* misc.c (message): Take new arg PREFIX.  Print "make: " only if
	nonzero.  Call log_working_directory.
	* remake.c: Pass new arg in `message' calls.
	* job.c (start_job_command): Pass new arg to `message'; fix
	inverted test in that call.

Tue Nov 21 19:01:12 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* job.c (start_job_command): Use `message' to print the command,
	and call it with null if the command is silent.
	* remake.c (touch_file): Use message instead of printf.

Tue Oct 10 14:59:30 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* main.c (enter_command_line_file): Barf if NAME is "".

Sat Sep  9 06:33:20 1995  Roland McGrath  <roland@whiz-bang.gnu.ai.mit.edu>

	* commands.c (delete_target): Ignore unlink failure if it is ENOENT.

Thu Aug 17 15:08:57 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* configure.in: Don't check for getdtablesize.
	* job.c (getdtablesize): Remove decls and macros.

Thu Aug 10 19:10:03 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* main.c (define_makeflags): Omit command line variable
 	definitions from MFLAGS value.

	* arscan.c (ar_scan) [AIAMAG]: Check for zero MEMBER_OFFSET,
 	indicating a valid, but empty, archive.

Mon Aug  7 15:40:03 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* dir.c (file_impossible_p): Correctly reset FILENAME to name
 	within directory before hash search.

	* job.c (child_error): Do nothing if IGNORED under -s.

	* job.c (exec_command): Correctly use ARGV[0] for script name when
 	running shell directly.

Tue Aug  1 14:39:14 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* job.c (child_execute_job): Close STDIN_FD and STDOUT_FD after
 	dup'ing from them.  Don't try to close all excess descriptors;
 	getdtablesize might return a huge value.  Any open descriptors in
 	the parent should have FD_CLOEXEC set.
	(start_job_command): Set FD_CLOEXEC flag on BAD_STDIN descriptor.

Tue Jun 20 03:47:15 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* read.c (read_all_makefiles): Properly append default makefiles
 	to the end of the `read_makefiles' chain.

Fri May 19 16:36:32 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* Version 3.74 released.

Wed May 10 17:43:34 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* Version 3.73.3.

Tue May  9 17:15:23 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* compatMakefile ($(infodir)/make.info): Make sure $$dir is set in
 	install-info cmd.

Wed May  3 15:56:06 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* file.c (print_file): Grok update_status of 1 for -q.

Thu Apr 27 12:39:35 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* Version 3.73.2.

Wed Apr 26 17:15:57 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* file.c (remove_intermediates): Fix inverted test to bail under
 	-n for signal case.  Bail under -q or -t.
	Skip files with update_status==-1.

	* job.c (job_next_command): Skip empty lines.
	(new_job): Don't test the return of job_next_command.
	Just let start_waiting_job handle the case of empty commands.

Wed Apr 19 03:25:54 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* function.c [__MSDOS__]: Include <fcntl.h>.  From DJ Delorie.

	* Version 3.73.1.

Sat Apr  8 14:53:24 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* remake.c (notice_finished_file): Set FILE->update_status to zero
 	if it's -1.

Wed Apr  5 00:20:24 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* Version 3.73 released.

Tue Mar 28 13:25:46 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* main.c (main): Fixed braino in assert.

	* Version 3.72.13.

Mon Mar 27 05:29:12 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* main.c: Avoid string in assert expression.  Some systems are broken.

Fri Mar 24 00:32:32 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* main.c (main): Handle 1 and 2 returns from update_goal_chain
 	makefile run properly.

	* Version 3.72.12.

	* main.c (handle_non_switch_argument): New function, broken out of
 	decode_switches.
	(decode_switches): Set optind to 0 to reinitialize getopt, not to 1.
	When getopt_long returns EOF, break the loop and handle remaining args
 	with a simple second loop.

	* remake.c (remake_file): Set update_status to 2 instead of 1 for
 	no rule to make.  Mention parent (dependent) in error message.
	(update_file_1): Handle FILE->update_status == 2 in -d printout.
	* job.c (start_job_command, reap_children): Set update_status to 2
 	instead of 1 for failed commands.

Tue Mar 21 16:23:38 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* job.c (search_path): Function removed (was already #if 0'd out).
	* configure.in: Remove AC_TYPE_GETGROUPS; nothing needs it any more.

Fri Mar 17 15:57:40 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* configure.bat: Write @CPPFLAGS@ translation.

Mon Mar 13 00:45:59 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* read.c (parse_file_seq): Rearranged `l(a b)' -> `l(a) l(b)' loop
 	to not skip the elt immediately preceding `l(...'.

Fri Mar 10 13:56:49 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* Version 3.72.11.

	* read.c (find_char_unquote): Make second arg a string of stop
 	chars instead of a single stop char.  Stop when any char in the
 	string is hit.  All callers changed.
	(find_semicolon): Pass stop chars "#;" to one find_char_unquote call,
	instead of using two calls.  If the match is not a ; but a #,
 	return zero.
	* misc.c: Changed find_char_unquote callers here too.

	* Version 3.72.10.

	* read.c (read_makefile, parse_file_seq): Fix typo __MS_DOS__ ->
 	__MSDOS__.

	* GNUmakefile (globfiles): Add glob/configure.bat.
	(distfiles): Add configh.dos, configure.bat.

Wed Mar  8 13:10:57 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	Fixes for MS-DOS from DJ Delorie.
	* read.c (read_makefile, parse_file_seq) [__MS_DOS__]: Don't see :
 	as separator in "C:\...".
	* configh.dos (STDC_HEADERS): Define only if undefined.
	(HAVE_SYS_PARAM_H): Don't define this.
	(HAVE_STRERROR): Define this.
	* job.c (construct_command_argv_internal) [__MSDOS__]: Fix typos.

	* Version 3.72.9.

	* main.c (decode_switches): Reset optind to 1 instead of 0.

Tue Mar  7 17:31:06 1995  Roland McGrath  <roland@geech.gnu.ai.mit.edu>

	* main.c (decode_switches): If non-option arg is "-", ignore it.

Mon Mar  6 23:57:38 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* Version 3.72.8.

Wed Feb 22 21:26:36 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* Version 3.72.7.

Tue Feb 21 22:10:43 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* main.c (main): Pass missing arg to tmpnam.

	* configure.in: Check for strsignal.
	* job.c (child_error): Use strsignal.
	* main.c (main): Don't call signame_init #ifdef HAVE_STRSIGNAL.

	* misc.c (strerror): Fix swapped args in sprintf.

Mon Feb 13 11:50:08 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* configure.in (CFLAGS, LDFLAGS): Don't set these variables.

Fri Feb 10 18:44:12 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* main.c (print_version): Add 95 to copyright years.

	* Version 3.72.6.

	* job.c (start_job_command): Remember to call notice_finished_file
 	under -n when not recursing.  To do this, consolidate that code
 	under the empty command case and goto there for the -n case.

Tue Feb  7 13:36:03 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* make.h [! STDC_HEADERS]: Don't declare qsort.  Sun headers
 	declare it int.

Mon Feb  6 17:37:01 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* read.c (read_makefile): For bogus line starting with tab, ignore
 	it if blank after removing comments.

	* main.c: Cast results of `alloca' to `char *'.
	* expand.c: Likewise.

Sun Feb  5 18:35:46 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* Version 3.72.5.

	* configure.in: Check for mktemp.
	* main.c (main) [! HAVE_MKTEMP]: Use tmpnam instead of mktemp.

	* configure.in (make_cv_sysconf_open_max): New check for `sysconf
 	(_SC_OPEN_MAX)'.
	* acconfig.h: Added #undef HAVE_SYSCONF_OPEN_MAX.
	* job.c [HAVE_SYSCONF_OPEN_MAX] (getdtablesize): Define as macro
 	using sysconf.

Fri Jan 27 04:42:09 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* remake.c (update_file_1): When !MUST_MAKE, don't set
 	FILE->update_status to zero before calling notice_finished_file.
	(notice_finished_file): Touch only when FILE->update_status is zero.
	(remake_file): Set FILE->update_status to zero after not calling
	execute_file_command and deciding to touch instead.

Thu Jan 26 01:29:32 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* main.c (debug_signal_handler): New function; toggles debug_flag.
	(main): Handle SIGUSR1 with that.

Mon Jan 16 15:46:56 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* compatMakefile (realclean): Remove Info files.

Sun Jan 15 08:23:09 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* Version 3.72.4.

	* job.c (start_job_command): Save and restore environ around vfork
        call.
	(search_path): Function #if 0'd out.
	(exec_command): Use execvp instead of search_path.

	* expand.c (variable_expand): Rewrote computed variable name and
	substitution reference handling to be simpler.  First expand the
	entire text between the parens if it contains any $s, then examine
	the result of that for subtitution references and do no further
	expansion while parsing them.

	* job.c (construct_command_argv_internal): Handle " quoting too,
	when no backslash, $ or ` characters appear inside the quotes.

	* configure.in (union wait check): If WEXITSTATUS and WTERMSIG are
        defined, just use int.

Tue Jan 10 06:27:27 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* default.c (default_variables) [__hpux]: Remove special
	definition of ARFLAGS.  Existence of the `f' flag is not
	consistent across HPUX versions; and one might be using GNU ar
	anyway.

	* compatMakefile (clean): Don't remove Info files.

	* compatMakefile (check): Remove gratuitous target declaration.

Sat Jan  7 11:38:23 1995  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* compatMakefile (ETAGS, CTAGS): Don't use -t.

	* arscan.c (ar_name_equal) [cray]: Subtract 1 like [__hpux].

	* main.c (decode_switches): For --help, print usage to stdout.

Mon Dec  5 12:42:18 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* Version 3.72.3.

	* remake.c (update_file_1): Do set_command_state (FILE,
	cs_not_started) only if old state was deps_running.

Mon Nov 28 14:24:03 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* job.c (start_waiting_job): Use set_command_state.

	* build.template (CPPFLAGS): New variable.
	(prefix, exec_prefix): Set from @...@.
	(compilation loop): Pass $CPPFLAGS to compiler.

	* GNUmakefile (build.sh.in): Make it executable.

	* GNUmakefile (globfiles): Add configure.in, configure.

	* Version 3.72.2.

	* configure.in (AC_OUTPUT): Don't write glob/Makefile.

	* configure.in (AC_CHECK_SYMBOL): Use AC_DEFINE_UNQUOTED.

	* configure.in: Don't check for ranlib.

Tue Nov 22 22:42:40 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* remake.c (notice_finished_file): Only mark also_make's as
	updated if really ran cmds.

Tue Nov 15 06:32:46 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* configure.in: Put dnls before random whitespace.

Sun Nov 13 05:02:25 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* compatMakefile (CPPFLAGS): New variable, set from @CPPFLAGS@.
	(RANLIB): Variable removed.
	(prefix, exec_prefix): Set these from @...@.
	(.c.o): Use $(CPPFLAGS).
	(glob/libglob.a): Don't pass down variables to sub-make.
	glob/Makefile should be configured properly by configure.
	(distclean): Remove config.log and config.cache (autoconf stuff).

Mon Nov  7 13:58:06 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* acconfig.h: Add #undef HAVE_UNION_WAIT.
	* configure.in: Converted to Autoconf v2.
	* dir.c: Test HAVE_DIRENT_H, HAVE_SYS_DIR_H, HAVE_NDIR_H instead
	of DIRENT, SYSDIR, NDIR.
	* build.sh.in (prefix, exec_prefix): Set these from @...@.
	(CPPFLAGS): New variable, set from @CPPFLAGS@.
	(compiling loop): Pass $CPPFLAGS before $CFLAGS.
	* install.sh: File renamed to install-sh.

	* main.c (define_makeflags): When no flags, set WORDS to zero.

Sun Nov  6 18:34:01 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* Version 3.72.1.

	* main.c (define_makeflags): Terminate properly when FLAGSTRING is
        empty.

Fri Nov  4 16:02:51 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* Version 3.72.

Tue Nov  1 01:18:10 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* Version 3.71.5.

	* job.c (start_job_command): When ARGV is nil, only set
	update_state and call notice_finished_file if job_next_command
	returns zero.

	* job.c (start_job_command): Call notice_finished_file for empty
        command line.

Thu Oct 27 02:02:45 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* file.c (snap_deps): Set COMMANDS_SILENT for .SILENT, not
        COMMANDS_NOERROR.

Wed Oct 26 02:14:10 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* Version 3.71.4.

Tue Oct 25 22:49:24 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* file.c (snap_deps): Set command_flags bits in all :: entries.

Mon Oct 24 18:47:50 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* make.h (posix_pedantic): Declare it.
	* main.c (main): Move checks .IGNORE, .SILENT, .POSIX to
        snap_deps.
	* file.c (snap_deps): Check .IGNORE, .SILENT, .POSIX here instead
	of in main.  If .IGNORE has deps, OR COMMANDS_NOERROR into their
	command_flags and don't set -i.  Likewise .SILENT.
	* job.c (start_job_command): In FLAGS initialization, OR in
	CHILD->file->command_flags.
	* file.h (struct file): New member `command_flags'.

Sun Oct 16 01:01:51 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* main.c (switches): Bump flag values for --no-print-directory and
	--warn-undefined-variables, so neither is 1 (which indicates a
	nonoption argument).

Sat Oct 15 23:39:48 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* main.c (main): Add missing code in .IGNORE test.

Mon Oct 10 04:09:03 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* variable.c (define_automatic_variables): Define +D and +F.

Sat Oct  1 04:07:48 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* main.c (main): Define hidden automatic variable with command
	vars, and MAKEOVERRIDES to a reference to that.
	(define_makeflags): If posix_pedantic, write a reference to that
	instead.

Thu Sep 29 00:14:26 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* main.c (posix_pedantic): New variable.
	(main): Set posix_pedantic if .POSIX is a target.
	Fix .IGNORE and .SILENT checks to require is_target.

	* commands.c (set_file_variables): Define new automatic variable
	$+, like $^ but before calling uniquize_deps.

	* job.c (reap_children): Call delete_child_targets for non-signal
	error if .DELETE_ON_ERROR is a target.

Tue Sep 27 01:57:14 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* Version 3.71.3.

Mon Sep 26 18:16:55 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* job.c (reap_children): Don't change C->file->command_state when
	dying.  Test it only after calling start_job_command for a new
	command line.  When no more cmds, just set C->file->update_status.
	(start_job_command): When the last line is empty or under -n, set
	C->file->update_status.
	(start_waiting_job): Grok cs_not_started after start_job_command
	as success.
	(new_job): Set C->file->update_status when there are no cmds.
	(job_next_command): When out of lines, don't set
	CHILD->file->update_status or CHILD->file->command_state.

	* main.c (quote_as_word): Renamed from shell_quote.  Take new arg;
	if nonzero, also double $s.
	(main): Define MAKEOVERRIDES from command_variables here.
	(define_makeflags): Don't use command_variables here; instead write a
	reference $(MAKEOVERRIDES) in MAKEFLAGS.  Make vars recursive.

	* dir.c [__MSDOS__]: Fixed typo.

	* vpath.c (selective_vpath_search): Reset EXISTS when stat fails.

Sat Sep 10 03:01:35 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* remake.c: Include <assert.h> and use assert instead of printfs
        and abort.

	* main.c (decode_switches): Loop until optind hits ARGC, not just
	until getopt_long returns EOF.  Initialize C to zero before loop;
	in loop if C is EOF, set optarg from ARGV[optind++], else call
	getopt_long.
	(decode_env_switches): Use variable_expand instead of
	allocated_variable_expand.  Allocate a fresh buffer to copy split
	words into; scan characters by hand to break words and
	debackslashify.
	(shell_quote): New function.
	(define_makeflags): Allocate doubled space for switch args, and command
	variable names and values; use shell_quote to quote those things.

Fri Sep  9 01:37:47 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* Version 3.71.2.

	* acconfig.h: Add HAVE_SYS_SIGLIST and HAVE__SYS_SIGLIST.

	* main.c (decode_switches): The non-option return from getopt is
	1, not 0.
	(command_variables): New type and variable.
	(decode_switches, decode_env_switches): After making a variable
	definition, record the struct variable pointer in the
	command_variables chain.
	(define_makeflags): If ALL, write variable definitions for
	command_variables.

	* main.c (other_args): Variable removed.
	(goals, lastgoal): New static variables (moved from auto in main).
	(main): Don't process OTHER_ARGS at all.
	Don't set variable MAKEOVERRIDES at all; define MAKE to just
        $(MAKE_COMMAND).
	(init_switches): Prepend a - {return in order} instead of a +
	{require order}.
	(decode_switches): Don't set OTHER_ARGS at all.
	Grok '\0' return from getopt_long as non-option argument; try
	variable definition and (if !ENV) enter goal targets here.
	(decode_env_switches): Use allocated_variable_expand to store value.
	Use find_next_token to simplify word-splitting loop.  Don't
	prepend a dash to uninterpreted value.  Instead, if split into
	only one word, try variable definition and failing that prepend a
	dash to the word and pass it to decode_switches as a single arg.

Wed Sep  7 03:02:46 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	* remake.c (notice_finished_file): Only recheck modtimes if
	FILE->command_state was cs_running on entry (meaning the commands
	actually just ran).
	(update_file_1): Whenever we set FILE->update_status, call
	notice_finished_file instead of just set_command_state.
	* job.c (start_job_command): Whenever we set
	CHILD->file->update_status, call notice_finished_file instead of
	just set_command_state.

Tue Sep  6 19:13:54 1994  Roland McGrath  <roland@geech.gnu.ai.mit.edu>

	* default.c: Add missing ".

	* job.c: Changed all assignments of command_state members to calls
	to set_command_state.
	* remake.c: Likewise.
	* file.c (set_command_state): New function.
	* file.h: Declare set_command_state.

	* main.c (init_switches): Put a + first in options.

Mon Jul 25 18:07:46 1994  Roland McGrath  <roland@churchy.gnu.ai.mit.edu>

	Merge MSDOS/GO32 port from DJ Delorie <dj@ctron.com>.
	* vpath.c: Changed all uses of ':' to PATH_SEPARATOR_CHAR.
	* main.c (directory_before_chdir): New variable, moved out of main
        (was local).
	(main) [__MSDOS__]: Look for \ or : to delimit last component of
	PROGRAM.  Don't frob ARGV[0] before setting MAKE_COMMAND variable.
	(die): Change back to `directory_before_chdir' before dying.
	* make.h (PATH_SEPARATOR_CHAR): New macro; differing defns for
        [__MSDOS__] and not.
	* job.c [__MSDOS__]: Include <process.h>.
	[__MSDOS__] (dos_pid, dos_status, dos_bname, dos_bename,
	dos_batch_file): New variables.
	(reap_children) [__MSDOS__]: Don't call wait; just examine those vars.
	(unblock_sigs) [__MSDOS__]: Do nothing.
	(start_job_command) [__MSDOS__]: Use spawnvpe instead of vfork & exec.
	(load_too_high) [__MSDOS__]: Always return true.
	(search_path) [__MSDOS__]: Check for : or / in FILE to punt.
	Use PATH_SEPARATOR_CHAR instead of ':'.
	(construct_command_argv_internal) [__MSDOS__]: Wholly different
	values for sh_chars and sh_cmds.  Wholly new code to handle shell
	scripts.
	* function.c (expand_function: `shell') [__MSDOS__]: Wholly new
        implementation.
	* dir.c [__MSDOS__] (dosify): New function.
	(dir_contents_file_exists_p) [__MSDOS__]: Call it on FILENAME and
	process the result instead of FILENAME itself.
	(file_impossible_p) [__MSDOS__]: Likewise.
	* default.c [__MSDOS__]: Define GCC_IS_NATIVE.
	(default_suffix_rules) [__MSDOS__]: Use `y_tab.c' instead of `y.tab.c'.
	(default_variables) [GCC_IS_NATIVE]: Set CC and CXX to `gcc', YACC to
	`bison -y', and LEX to `flex'.
	* configure.bat, configh.dos: New files.
	* commands.c (fatal_error_signal) [__MSDOS__]: Just remove
	intermediates and exit.

	* commands.c (set_file_variables): Add parens in length
	computation in .SUFFIXES dep loop to quiet compiler warning.  From
	Jim Meyering.

	* read.c (read_makefile): Free FILENAME if we allocated it.  From
        Jim Meyering.

Mon Jul  4 17:47:08 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* misc.c (safe_stat): New function, EINTR-safe wrapper around stat.
	* vpath.c (selective_vpath_search): Use safe_stat in place of stat.
	* read.c (construct_include_path): Use safe_stat in place of stat.
	* job.c (search_path): Use safe_stat in place of stat.
	* dir.c (find_directory): Use safe_stat in place of stat.
	* commands.c (delete_target): Use safe_stat in place of stat.
	* arscan.c (ar_member_touch) [EINTR]: Do EINTR looping around fstat.
	* remake.c (name_mtime): Use safe_stat in place of stat.
	(touch_file) [EINTR]: Do EINTR looping around fstat.

Fri Jun 24 05:40:24 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* read.c (read_makefile): Check for a shell command first, and
	then strip leading tabs before further checking if it's not a
	shell command line.

	* make.h [__arm]: Undefine POSIX.
	[!__GNU_LIBRARY__ && !POSIX && !_POSIX_VERSION]: Don't declare system
	functions that return int.

	* job.c (construct_command_argv_internal): After swallowing a
	backslash-newline combination, if INSTRING is set goto string_char
	(new label) for normal INSTRING handling code.

Sat Jun  4 01:11:20 1994  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* configure.in: Don't check for sys_siglist and _sys_siglist with
	AC_HAVE_FUNCS.  Instead use two AC_COMPILE_CHECKs.

Mon May 23 18:20:38 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.71.1 released.

	* make.h [!__GNU_LIBRARY__ && !POSIX]: Also test #ifndef
	_POSIX_VERSION for these declarations.

	* misc.c [GETLOADAVG_PRIVILEGED] [POSIX]: Remove bogus #ifndefs
	around #undefs of HAVE_SETREUID and HAVE_SETREGID.

Sat May 21 16:26:38 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.71 released.

	* misc.c [GETLOADAVG_PRIVILEGED] [POSIX]: Don't test [HAVE_SETUID]
	and [HAVE_SETGID].  Every system has those, and configure doesn't
	check for them.

	* make.h [_POSIX_VERSION]: Don't #define POSIX #ifdef ultrix.

	* compatMakefile (loadavg): Depend on and use loadavg.c instead of
	getloadavg.c.
	(loadavg.c): Link or copy it from getloadavg.c.
	(distclean): Remove loadavg.c.

Mon May 16 22:59:04 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.70.4.

	* misc.c [GETLOADAVG_PRIVILEGED] [! POSIX]: Undefine HAVE_SETEUID
	and HAVE_SETEGID.

	* default.c (default_terminal_rules): In SCCS rules, put
	$(SCCS_OUTPUT_OPTION) before $<.  On some systems -G is grokked
	only before the file name.
	* configure.in (SCCS_GET_MINUS_G check): Put -G flag before file name.

Tue May 10 16:27:38 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* job.c (construct_command_argv_internal): Swallow
	backslash-newline combinations inside '' strings too.

Thu May  5 04:15:10 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* read.c (do_define): Call collapse_continuations on each line
	before all else.

Mon Apr 25 19:32:02 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* job.c (construct_command_argv_internal): Notice newline inside
	'' string when RESTP is non-null.

Fri Apr 22 17:33:30 1994  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* Version 3.70.3.

	* remake.c (update_goal_chain): Reset FILE to G->file after the
	double-colon loop so it is never null for following code.

	* read.c (read_makefile): Fix `override define' parsing to skip
	whitespace after `define' properly.

	* compatMakefile (srcdir): Define as @srcdir@; don't reference
	$(VPATH).
	(glob/Makefile): New target.

Thu Apr 21 16:16:55 1994  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* Version 3.70.2.

	* misc.c (remove_comments): Use find_char_unquote.
	* make.h (find_char_unquote): Declare it.
	* read.c (find_char_unquote): New function, generalized from
	find_percent.
	(find_percent, find_semicolon, parse_file_seq): Use that.

Wed Apr 20 18:42:39 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* implicit.c (pattern_search): Always allocate new storage for
	FILE->stem.  It is not safe to store STEM's address because it
	might be auto storage.

	* configure.in: Check for seteuid and setegid.
	* misc.c [HAVE_SETEUID]: Declare seteuid.
	[HAVE_SETEGID]: Declare setegid.
	(make_access, user_access) [HAVE_SETEUID]: Use seteuid.
	[HAVE_SETEGID]: Use setegid.

	* remake.c (update_goal_chain): Set STATUS to FILE->update_status,
	to preserve whether it's 2 for error or 1 for -q trigger.  When
	STATUS gets nonzero and -q is set, always stop immediately.
	* main.c (main, decode_switches): Die with 2 for errors.
	(main): Accept 2 return from update_goal_chain and die with that.
	* misc.c (fatal, makefile_fatal): Die with 2; 1 is reserved for -q
	answer.
	* job.c (reap_children): Die with 2 for error.
	(start_job_command): Set update_status to 2 for error.  Set it to
	1 when we would run a command and question_flag is set.

	* read.c (read_makefile): Don't mark makefiles as precious.  Just
	like other targets, they can be left inconsistent and in need of
	remaking by aborted commands.

	* read.c (read_makefile): Write no error msg for -include file.

Tue Apr  5 05:22:19 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* commands.c (fatal_error_signal): Don't unblock signals.

	* file.h (struct file): Change member `double_colon' from flag to
	`struct file *'.
	* read.c (record_files): Set double_colon pointer instead of flag.
	* main.c (main): When disqualifying makefiles for updating, use
	double_colon pointer to find all entries for a file.
	* file.c (enter_file): If there is already a double-colon entry
	for the file, set NEW->double_colon to that pointer.
	(file_hash_enter): Use FILE->double_colon to find all entries to
	set name.
	* remake.c (update_goal_chain): Do inner loop on double-colon entries.
	(update_file): Use FILE->double_colon pointer to find all entries.
	(f_mtime): Likewise.
	(notice_finished_file): Propagate mtime change to all entries.

	* variable.c (try_variable_definition): Return after abort.

Fri Apr  1 18:44:15 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* read.c (read_makefile): Remove unused variable.
	(parse_file_seq): When removing an elt that is just `)', properly
	fix up the previous elt's next pointer.

Mon Mar 28 18:31:49 1994  Roland McGrath  (roland@mole.gnu.ai.mit.edu)

	* configure.in: Do AC_SET_MAKE.
	* GNUmakefile (Makefile.in): Edit MAKE assignment into @SET_MAKE@.

Fri Mar  4 00:02:32 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* function.c (subst_expand): If BY_WORD or SUFFIX_ONLY is set and
	the search string is the empty string, find a match at the end of
	each word (using end_of_token in place of sindex).

	* misc.c (end_of_token): Don't treat backslashes specially; you
	can no longer escape blanks with backslashes in export, unexport,
	and vpath.  This was never documented anyway.

Thu Mar  3 23:53:46 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* read.c (read_makefile): Variable name for `define' is not just
	first token; use whole rest of line and strip trailing blanks.

Wed Feb 16 16:03:45 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.70.1.

	* read.c (read_makefile): Add -d msg stating args.

	* read.c (read_makefile): Use isspace to skip over leading
	whitespace, and explicitly avoid skipping over tabs.  Don't want
	to skip just spaces though; formfeeds et al should be skipped.

	* default.c (default_variables) [__hpux]: Add f in ARFLAGS.

	* arscan.c (ar_name_equal) [__hpux]: Subtract 2 instead of 1 from
	sizeof ar_name for max length to compare.

	* misc.c [GETLOADAVG_PRIVILEGED] [POSIX]: Undefine HAVE_SETREUID
	#ifdef HAVE_SETUID; likewise HAVE_SETREGID and HAVE_SETGID.

	* main.c (main): Call user_access after setting `program', in case
	it needs to use it in an error message.

	* read.c (read_makefile): Ignore an empty line starting with a tab.

Thu Feb 10 21:45:31 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* configure.in (AC_SYS_SIGLIST_DECLARED): Use this instead of
	AC_COMPILE_CHECK that is now its contents.

Fri Feb  4 16:28:54 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* make.h: #undef strerror after #include <string.h>.
	[! ANSI_STRING]: Declare strerror.

Thu Feb  3 02:21:22 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* misc.c (strerror): #undef any macro before function definition.

Mon Jan 31 19:07:23 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* variable.c (try_variable_definition): Calculate BEG before loop
	to strip blanks by decrementing END.  Don't decr END to before BEG.

	* read.c (read_makefile): Skip over leading space characters, but
	not tabs, after removing continuations and comments (it used to
	use isspace).

Tue Jan 25 16:45:05 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* variable.c (define_automatic_variables): In $(@D) et al, use
	patsubst to remove trailing slash.

	* commands.c (delete_target): New function, broken out of
	delete_child_targets.  Check for archive members and give special msg.
	(delete_child_targets): Use delete_target.

Mon Jan 17 17:03:22 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* default.c (default_suffix_rules): Use $(TEXI2DVI_FLAGS) in
	texi2dvi rules.	Use $(MAKEINFO_FLAGS) in makeinfo rules.

Tue Jan 11 19:29:55 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* GNUmakefile (tarfiles): Omit make-doc.
	(make-$(version).tar): Include make.info*.

Fri Jan  7 16:27:00 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* compatMakefile (configure, config.h.in): Comment out rules.

Thu Jan  6 18:08:08 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* compatMakefile (binprefix, manprefix): New variables.
	(instname): Variable removed.
	(install): Use $({bin,man}prefix)make in place of $(instname).
	File targets likewised renamed.

Mon Jan  3 17:50:25 1994  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.70 released.

Thu Dec 23 14:46:54 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.69.3.

	* read.c (parse_file_seq): Inside multi-word archive ref
	translation loop, check NEW1==0 at end and break out of the loop.

	* GNUmakefile (make-$(version).tar): Distribute install.sh.
	* install.sh: New file.

	* configure.in (SCCS_GET_MINUS_G check): Put redirection for admin
	cmds outside subshell parens, to avoid "command not found" msgs
	from the shell.

Wed Dec 22 17:00:43 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* configure.in (SCCS_GET_MINUS_G check): Put -G flag last in get cmd.
	Redirect output & error from get to /dev/null.
	Fix reversed sense of test.

Fri Dec 17 15:31:36 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* configure.in (SCCS_GET_MINUS_G check): Use parens instead of
	braces inside if condition command; some shells lose.

Thu Dec 16 15:10:23 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.69.2.

	* arscan.c [M_UNIX]: Move #undef M_XENIX for PORTAR stuff.
	(PORTAR) [M_XENIX]: Define to 0 instead of 1.

	* main.c (define_makeflags): Only export MAKEFLAGS if !ALL.

Wed Dec 15 17:47:48 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* main.c (main): Cast result of pointer arith to unsigned int
	before passing to define_variable for envars.  Matters when
	sizeof(unsigned)!=sizeof(ptrdiff_t).

Tue Dec 14 14:21:16 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* configure.in: Add new check for SCCS_GET_MINUS_G.
	* config.h.in: Add #undef SCCS_GET_MINUS_G.
	* default.c (default_terminal_rules): Use `$(SCCS_OUTPUT_OPTION)' in
	place of `-G $@' in SCCS commands.
	(default_variables) [SCCS_GET_MINUS_G]: Define SCCS_OUTPUT_OPTION
	to "-G$@".

	* configure.in (AC_OUTPUT): Put touch stamp-config in second arg
	(so it goes in config.status), rather than afterward.

	* ar.c (ar_member_date): Don't call enter_file on the archive file
	if it doesn't exist (by file_exists_p).

	* compatMakefile ($(infodir)/make.info): Replace `$$d/foo.info'
	with `$$dir/make.info' in install-info invocation (oops).

	* vpath.c (construct_vpath_list): Only set LASTPATH set PATH when
	we do not unlink and free PATH.

	* file.c (print_file_data_base): Fix inverted calculation for
	average files per hash bucket.

	* read.c (readline): When we see a NUL, give only a warning and
	synthesize a newline to terminate the building line (used to
	fatal).  Move fgets call into the loop condition, and after the
	loop test ferror (used to test !feof in the loop).

Fri Dec  3 16:40:31 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* configure.in: Check for strerror in AC_HAVE_FUNCS.

Thu Dec  2 15:37:50 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	Differentiate different flavors of missing makefile error msgs,
	removing gratuitous `fopen: ' and giving caller for included makefiles.
	* misc.c [! HAVE_STRERROR]: Define our own strerror here.
	(perror_with_name, pfatal_with_name): Use strerror instead of
	replicating its functionality.
	* read.c (read_makefile): Return int instead of void.
	(read_all_makefiles, read_makefile): Change callers to notice zero
	return and give error msg.

Thu Nov 11 11:47:36 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.69.1.

	* default.c: Put `-G $@' before $< in SCCS cmds.

Wed Nov 10 06:06:14 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* read.c (read_makefile): After trying a variable defn, notice if
	the line begins with a tab, and diagnose an error.

Sun Nov  7 08:07:37 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.69.

Wed Nov  3 06:54:33 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.68.10.

	* implicit.c (try_implicit_rule): Look for a normal rule before an
	archive rule.

Fri Oct 29 16:45:28 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* function.c (expand_function: `sort'): Double NWORDS when it
	overflows, instead of adding five.

	* compatMakefile (clean): Remove loadavg.

Wed Oct 27 17:58:33 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.68.9.

	* file.h (NEW_MTIME): Define new macro.
	* main.c (main): Set time of NEW_FILES to NEW_MTIME, not to
	current time returned from system.  Removed variable NOW.
	* remake.c (notice_finished_file): Use NEW_MTIME in place of
	current time here too.

Tue Oct 26 19:45:35 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.68.8.

	* remake.c (update_file_1): Don't clear MUST_MAKE when FILE has no
	cmds and !DEPS_CHANGED unless also !NOEXIST.

Mon Oct 25 15:25:21 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* read.c (parse_file_seq): When converting multi-word archive
	refs, ignore a word beginning with a '('.

Fri Oct 22 02:53:38 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* configure.in: Check for sys/timeb.h.
	* make.h [HAVE_SYS_TIMEB_H]: Test this before including it.

Thu Oct 21 16:48:17 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.68.7.

	* rule.c (convert_suffix_rule): New local TARGPERCENT.  Set it to
	TARGNAME+1 for "(%.o)", to TARGNAME for "%.?".  Use it in place of
	TARGNAME to initialize PERCENTS[0].

Mon Oct 18 06:49:35 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* configure.in: Use AC_HAVE_HEADERS(unistd.h) instead of AC_UNISTD_H.
	Remove AC_USG; it is no longer used.

	* file.c (print_file): New function, broken out of
	print_file_data_base.
	(print_file_data_base): Call it.
	* rule.c (print_rule): New function, broken out of
	print_rule_data_base.
	(print_rule_data_base): Call it.

Thu Oct 14 14:54:03 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* default.c (install_default_suffix_rules): New function, broken
	out of install_default_implicit_rules.
	(install_default_implicit_rules): Move suffix rule code there.
	* make.h: Declare install_default_suffix_rules.
	* main.c (main): Call install_default_suffix_rules before reading
	makefiles.  Move convert_to_pattern call before
	install_default_implicit_rules.

	* job.h (struct child): Make `pid' member type `pid_t' instead of
	`int'.

	* compatMakefile (RANLIB): New variable, set by configure.
	(glob/libglob.a): Pass RANLIB value down to submake.

	Fixes for SCO 3.2 "devsys 4.2" from pss@tfn.com (Peter Salvitti).
	* make.h: Include <sys/timeb.h> before <time.h> for SCO lossage.
	* job.c [! getdtablesize] [! HAVE_GETDTABLESIZE]: If NOFILE is not
	defined but NOFILES_MAX is, define it to be that.

Mon Oct 11 19:47:33 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* GNUmakefile (make-$(version).tar): Depend on acconfig.h, so it
	is distributed.

Sun Oct  3 15:15:33 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* default.c (default_terminal_rules): Add `-G $@' to SCCS get cmds.

Tue Sep 28 14:18:20 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* job.c (construct_command_argv_internal): Add ^ to SH_CHARS; it
	is another symbol for | in some shells.
	* main.c (main): Add it to CMD_DEFS quoting list as well.

Mon Sep 20 18:05:24 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* job.c (construct_command_argv_internal): Remove '=' from
	SH_CHARS.  Only punt on '=' if it is unquoted in a word before the
	first word without an unquoted '='.

	* main.c (define_makeflags): Set v_export for MAKEFLAGS.

Fri Sep 17 00:37:18 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* remake.c (update_file_1): Use .DEFAULT cmds for phony targets.

	* make.h [_AIX && _POSIX_SOURCE]: Define POSIX.

	* commands.c (delete_child_targets): Don't delete phony files.

	* job.c (start_job_command): Set COMMANDS_RECURSE in FLAGS if we
	see a `+' at the beginning of the command line.

Thu Sep  9 17:57:14 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.68.6.

Wed Sep  8 20:14:21 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* main.c (define_makeflags): Define MAKEFLAGS with o_file, not o_env.

Mon Aug 30 12:31:58 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* expand.c (variable_expand): Fatal on an unterminated reference.

Thu Aug 19 16:27:53 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.68.5.

	* variable.c (define_automatic_variables): Define new o_default
	variable `MAKE_VERSION' from version_string and remote_description.

	* make.h (version_string, remote_description): Declare these here.
	* main.c: Don't declare version_string.
	(print_version): Don't declare remote_description.

Wed Aug 18 15:01:24 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* read.c (read_makefile): Free space pointed to by CONDITIONALS
	before restoring the old pointer.

Mon Aug 16 17:33:36 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* compatMakefile ($(objs)): Depend on config.h.

	* GNUmakefile (build.sh.in): Depend on compatMakefile.

	* configure.in: Touch stamp-config after AC_OUTPUT.

Fri Aug 13 16:04:22 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.68.4.

Thu Aug 12 17:18:57 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* make.h: Include <config.h> instead of "config.h".

Wed Aug 11 02:35:25 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* main.c (main): Make all variables interned from ENVP be v_export.
	* variable.c (try_variable_definition): In v_default case, don't
	check for an o_file variable that `getenv' finds.

	* job.c (reap_children): New local variable ANY_LOCAL; set it
	while setting ANY_REMOTE.  If !ANY_LOCAL, don't wait for local kids.

	* main.c (main): Don't call decode_env_switches on MFLAGS.  DOC THIS.

	* function.c (expand_function): #if 0 out freeing of ENVP since it
	is environ.

Mon Aug  9 17:37:20 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.68.3.

	* remote-stub.c (remote_status): Set errno to ECHILD before return.
	* job.c (reap_children): Scan the chain for remote children and
	never call remote_status if there are none.

	* function.c (expand_function: `shell'): #if 0 out calling
	target_environment; just set ENVP to environ instead.

	* job.c (reap_children): Check for negative return from
	remote_status and fatal for it.
	When blocking local child wait returns 0, then try a blocking call
	to remote_status.

Tue Aug  3 00:19:00 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* compatMakefile (clean): Delete make.info* and make.dvi here.
	(distclean): Not here.

	* dep.h (RM_*): Use #defines instead of enum to avoid lossage from
	compilers that don't like enum values used as ints.

Mon Aug  2 16:46:34 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* compatMakefile (loadavg): Add $(LOADLIBES).

Sun Aug  1 16:01:15 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.68.2.

	* compatMakefile (loadavg, check-loadavg): New targets.
	(check): Depend on check-loadavg.

	* compatMakefile (glob/libglob.a): Depend on config.h.

	* misc.c (log_access): Write to stderr instead of stdout.

Fri Jul 30 00:07:02 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.68.1.

Thu Jul 29 23:26:40 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* configure.in (SYS_SIGLIST_DECLARED): In test program include
	<unistd.h> #ifdef HAVE_UNISTD_H.

	* compatMakefile (.PHONY): Put after `all' et al.

	* configure.in: Add AC_IRIX_SUN.

Wed Jul 28 17:41:12 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.68.

Mon Jul 26 14:36:49 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.67.8.

Sun Jul 25 22:09:08 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.67.7.

	* compatMakefile ($(infodir)/make.info): Don't use $(instname).
	Run install-info script if present.

Fri Jul 23 16:03:50 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* make.h [STAT_MACROS_BROKEN]: Test this instead of [uts].

	* configure.in: Add AC_STAT_MACROS_BROKEN.

Wed Jul 14 18:48:11 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.67.6.

	* read.c (read_makefile): Recognize directive `-include', like
	`include' but sets RM_DONTCARE flag.

	* variable.c (target_environment): If FILE is nil, use
	current_variable_set_list in place of FILE->variables.
	* function.c (expand_function: `shell'): Get an environment for
	the child from target_environment instead of using environ.

	* dep.h: Declare read_all_makefiles here.
	(RM_*): Define new enum constants.
	* read.c (read_makefile): Second arg is FLAGS instead of TYPE.
	Treat it as a bit mask containing RM_*.
	(read_all_makefiles): For default makefiles, set D->changed to
	RM_DONTCARE instead of 1.
	* main.c: Don't declare read_all_makefiles here.
	(main): Check `changed' member of read_makefiles elts for RM_*
	flags instead of specific integer values.

Mon Jul 12 22:42:17 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* make.h [sequent && i386]: #undef POSIX.  From trost@cse.ogi.edu.

Thu Jul  8 19:51:23 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* vpath.c (construct_vpath_list): If ELEM is zero 0, free PATTERN
	as well as VPATH.
	(build_vpath_lists): Empty `vpaths' around construct_vpath_list
	call for $(VPATH).  Expand $(strip $(VPATH)), not just $(VPATH).

	* rule.c (convert_suffix_rule): Use alloca instead of xmalloc for
	PERCENTS, whose storage is not consumed by create_pattern_rule.

	* make.h [__mips && _SYSTYPE_SVR3]: #undef POSIX.

Wed Jun 30 18:11:40 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.67.5.

	* rule.c (max_pattern_targets): New variable.
	(count_implicit_rule_limits): Compute its value.
	* rule.h: Declare it.
	* implicit.c (pattern_search): Make TRYRULES max_target_patterns
	times bigger.  Move adding new TRYRULES elt inside the inner
	targets loop, so each matching target gets its own elt in MATCHES
	and CHECKED_LASTSLASH.

	* file.c (remove_intermediates): If SIG!=0 say `intermediate file'
	instead of just `file' in error msg.

Fri Jun 25 14:55:15 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* job.c (construct_command_argv): Turn off
	--warn-undefined-variables around expansion of SHELL and IFS.
	* read.c (tilde_expand): Likewise for HOME.
	(read_all_makefiles): Likewise for MAKEFILES.
	* vpath.c (build_vpath_lists): Likewise for VPATH.

	* main.c (warn_undefined_variables_flag): New flag variable.
	(switches): Add --warn-undefined-variables.
	* make.h (warn_undefined_variables_flag): Declare it.
	* expand.c (warn_undefined): New function.
	(reference_variable): Call it if the variable is undefined.
	(variable_expand): In substitution ref, call warn_undefined if the
	variable is undefined.

	* default.c (default_pattern_rules): Add `%.c: %.w %.ch' and
	`%.tex: %.w %.ch' rules.
	(default_suffix_rules: .w.c, .w.tex): Pass three args: $< - $@.
	(default_suffixes): Add `.ch'.

Mon Jun 21 17:55:39 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* default.c (default_suffixes): Replace `.cweb' with `.w'.
	(default_suffix_rules): Rename `.cweb.c' and `.cweb.tex' to `.w.c'
	and `.w.tex'.

Fri Jun 11 14:42:09 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* compatMakefile ($(bindir)/$(instname)): Add missing backslash.

Thu Jun 10 18:14:08 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.67.4.

	* read.c (multi_glob): Don't free OLD and OLD->name in the
	FOUND!=0 fork.  Use new block-local variable F instead of
	clobbering OLD.

	* ar.c (glob_pattern_p): New function, snarfed from glob/glob.c.
	(ar_glob): Call it; return nil immediately if MEMBER_PATTERN
	contains no metacharacters.

Wed Jun  9 16:25:35 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* ar.c (ar_glob{_match,_alphacompare}): New function.

	* dep.h [! NO_ARCHIVES]: Declare it.
	* read.c (multi_glob) [! NO_ARCHIVES]: Use it on archive member elts.

	* read.c (read_makefile): Pass flag (1) to parse_file_seq, not to
	multi_glob (which doesn't take a 3rd arg).
	* rule.c (install_pattern_rule): Likewise.
	* default.c (set_default_suffixes): Here too.
	* function.c (string_glob): Don't pass gratuitous arg to multi_glob.

	* read.c (parse_file_seq) [! NO_ARCHIVES]: Add post-processing
	loop to translate archive refs "lib(a b)" into "lib(a) lib(b)".

Mon Jun  7 19:26:51 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* compatMakefile (installdirs): Actually pass directory names.
	($(bindir)/$(instname)): Test chgrp&&chmod exit status with `if';
	if it fails, echo a warning msg, but don't make the rule fail.

	* read.c (tilde_expand): New function, broken out of tilde_expand.
	(multi_glob): Call it.
	(construct_include_path): Expand ~ in directory names.
	* dep.h: Declare tilde_expand.
	* main.c (enter_command_line_file): Expand ~ at the start of NAME.
	(main): Expand ~ in -C args.
	* read.c (read_makefile): Expand ~ in FILENAME unless TYPE==2.

Fri Jun  4 13:34:47 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* main.c (decode_env_switches): Use xmalloc instead of alloca for ARGS.

	* main.c (main): Put result of alloca in temporary variable with
	simple assignment, to make SGI compiler happy.

Thu Jun  3 20:15:46 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.67.3.

	* main.c (main): Before re-execing, remove intermediate files, and
	print the data base under -p.  Sexier debugging message.

	* implicit.c (pattern_search): Allocate an extra copy of the name
	of a winning intermediate file when putting it in FOUND_FILES.

Wed Jun  2 16:38:08 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* read.c (read_makefile): Pass flag (1) to parse_file_seq, not to
	multi_glob (which doesn't take a 3rd arg).

	* dir.c (dir_contents_file_exists_p): When reading dirents, ignore
	chars within D_NAMLEN that are NULs.

	* main.c (decode_switches): Don't savestring ARGV[0] to put it
	into `other_args'.
	For string switch, don't savestring `optarg'.
	(main): Don't free elts of makefiles->list that are "-".
	Use alloca'd rather than savestring'd storage for elts of
	makefiles->list that are temporary file names.
	* read.c (read_all_makefiles): Don't free *MAKEFILES.
	* file.c (enter_file): Don't strip `./'s.
	* main.c (enter_command_line_file): New function.
	(main): Use it in place of enter_file for command-line goals from
	other_files, and for old_files and new_files.

Mon May 31 18:41:40 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.67.2.

	* compatMakefile (.SUFFIXES): Add .info.
	($(infodir)/$(instname).info): Find make.info* in cwd if there,
	else in $srcdir.  Use basename to remove dir name from installed name.

Thu May 27 17:35:02 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* implicit.c (pattern_search): When interning FOUND_FILES, try
	lookup_file first; if found, free the storage for our copy of the name.

Wed May 26 14:31:20 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.67.1.

	* main.c (decode_switches): In usage msg, write `--switch=ARG' or
	`--switch[=OPTARG]' rather than `--switch ARG' or `--switch [ARG]'.

Mon May 24 16:17:31 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* rule.c (convert_suffix_rule): New function.
	(convert_to_pattern): Use it instead of doing all the work here
	several times.
	For target suffix `.a', generate both the archive magic rule and
	the normal rule.

	* compatMakefile (distclean): Remove stamp-config.

Sat May 22 16:15:18 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.67.

	* file.c (remove_intermediates): Don't write extra space after `rm'.

	* main.c (struct command_switch.type): Remove `usage_and_exit'.
	(print_usage_flag): New variable.
	(switches: --help): Make type `flag', to set print_usage_flag.
	(init_switches): Remove `usage_and_exit' case.
	(decode_switches): Likewise.
	(decode_switches): Print usage if print_usage_flag is set.
	When printing usage, die with status of BAD.
	(main): Die with 0 if print_version_flag.

Fri May 21 16:09:28 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.66.

Wed May 19 21:30:44 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* compatMakefile (installdirs): New target.
	(install): Depend on it.

Sun May 16 20:15:07 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.65.2.

Fri May 14 16:40:09 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* vpath.c (construct_vpath_list): In removal loop for DIRPATH==0,
	set LASTPATH to PATH, not NEXT.

	* dir.c (read_dirstream): Break out of loop after incrementing
	DS->buckets such that it reaches DIRFILE_BUCKETS; avoid trying to
	dereference DS->contents->files[DIRFILE_BUCKETS].

	* read.c (read_makefile): Clear no_targets after reading a
	targetful rule line.

	* main.c (main): If print_version_flag is set, exit after printing
	the version.
	(switches): Change --version docstring to say it exits.

	* make.h [butterfly]: #undef POSIX.

Wed May 12 15:20:21 1993  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* Version 3.65.1.

	* arscan.c (ar_scan) [! AIAMAG]: Don't declare LONG_NAME.
	[AIAMAG]: Pass TRUNCATE flag arg to (*FUNCTION), always zero.

	* function.c (handle_function): Use fatal instead of
	makefile_fatal when reading_filename is nil.

	* configure.in: Add AC_GETGROUPS_T.
	* job.c (search_path): Use GETGROUPS_T in place of gid_t.

Sun May  9 15:41:25 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.65.

Fri May  7 18:34:56 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* function.c (handle_function): Fatal for unmatched paren.

Thu May  6 16:13:41 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.64.3.

	* commands.c (handling_fatal_signal): New variable.
	(fatal_error_signal): Set it.
	* job.c (reap_children): Avoid nonreentrant operations if that is set.
	* make.h: Declare handling_fatal_signal.

	* expand.c (reference_variable): New function, snippet of code
	broken out of simple-reference case of variable_expand.
	(variable_expand): Use it for simple refs.
	(variable_expand): When checking for a computed variable name,
	notice a colon that comes before the final CLOSEPAREN.  Expand
	only up to the colon, and then replace the pending text with a
	copy containing the expanded name and fall through to subst ref
	handling.
	(variable_expand): Don't bother expanding the name if a colon
	appears before the first $.
	(expand_argument): Use alloca instead of savestring.
	(variable_expand): For subst ref, expand both sides of = before
	passing to [pat]subst_expand.  Use find_percent instead of lindex
	to check the lhs for a %.

Wed May  5 14:45:52 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.64.2.

Mon May  3 17:00:32 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* arscan.c (ar_name_equal) [AIAMAG]: Abort if TRUNCATED is nonzero.

	* read.c (read_makefile): Pass extra arg of 1 to parse_file_seq,
	not to multi_glob.

Thu Apr 29 19:47:33 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.64.1.

	* arscan.c (ar_scan): New local flag var LONG_NAME.  Set it when
	we read the member name in any of the fashions that allow it to be
	arbitrarily long.  Pass its negation to FUNCTION.
	(describe_member): Take TRUNCATED from ar_scan and print it.
	(ar_name_equal): Take new arg TRUNCATED; if nonzero, compare only
	the first sizeof (struct ar_hdr.ar_name) chars.
	(ar_member_pos): Take TRUNCATED from ar_scan, pass to ar_name_equal.
	* ar.c (ar_member_date_1): Likewise.

Wed Apr 28 21:18:22 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* job.c (reap_children): Before calling start_job_command to start
	the next command line, reset C->remote by calling start_remote_job_p.

Mon Apr 26 15:56:15 1993  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* arscan.c (ar_scan): New local var NAMEMAP.
	In loop, rename NAME to NAMEBUF; new var NAME is a pointer; new
	flag IS_NAMEMAP.  When extracting the member name, always put a
	null at its end first.  If the name is "//" or "/ARFILENAMES", set
	IS_NAMEMAP.  If we have already read in NAMEMAP, and NAME looks
	like " /N", get full name from NAMEMAP+N.
	Else if NAME looks like "#1/N", read N chars from the
	elt data to be the full name.  At end of loop, if IS_NAMEMAP, read
	the elt's data into alloca'd NAMEMAP.
	(ar_name_equal): #if 0 truncating code.

	* make.h: Don't declare vfork at all.  It returns int anyway,
	unless <unistd.h> declared it; and we conflicted with some systems.

	* main.c (define_makeflags): If FLAGSTRING[1] is '-', define
	MAKEFLAGS to all of FLAGSTRING, not &FLAGSTRING[1].  Don't want to
	define it to something like "-no-print-directory".
	Use %g format instead of %f for floating-valued things.

Thu Apr 22 18:40:58 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* GNUmakefile (Makefile.in): Use a substitution ref on nolib-deps
	to change remote-%.dep to remote-stub.dep.

Wed Apr 21 15:17:54 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.64.

Fri Apr 16 14:22:22 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* compatMakefile (install): Remove - prefix from chgrp+chmod.

	* Version 3.63.8.

Thu Apr 15 18:24:07 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* acconfig.h: New file; contains "#undef SCCS_GET" for autoheader.
	* configure.in: If /usr/sccs/get exists, define SCCS_GET to that,
	else to "get".
	* default.c (default_variables): Set GET to macro SCCS_GET.

	* read.c (parse_file_seq): Take extra arg STRIP; strip `./' only
	if nonzero.  I hope this is the last time this argument is added
	or removed.
	(read_makefile): Pass it 1 when parsing include file names.
	Pass it 1 when parsing target file names.
	Pass it 1 when parsing static pattern target pattern names.
	* rule.c (install_pattern_rule): Pass it 1 when parsing rule deps.
	* default.c (set_default_suffixes): Pass it 1 when parsing
	default_suffixes.
	* function.c (string_glob): Pass it 0 here.

Wed Apr 14 11:32:05 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* misc.c (log_access): New function.
	({init,user,make,child}_access): Call it.
	(child_access): Abort if !access_inited.

	* main.c (switches: --no-print-directory): Use 1 instead of -1 for
	single-letter option.
	(init_switches, decode_switches, define_makeflags): An option with
	no single-letter version is no longer indicated by a value of -1;
	instead a value that is !isalnum.
	(init_switches): Don't put such switches into the string, only
	into the long_option table.

	* make.h [!NSIG] [!_NSIG]: #define NSIG 32.

	* job.c [HAVE_WAITPID]: Remove #undef HAVE_UNION_WAIT.  AIX's
	bsdcc defined WIF* to use union wait.

	* main.c (struct command_switch): Change member `c' to type int.
	(switches): Make const.
	(decode_switches): Use `const struct command_switch *'.
	(define_makeflags): Likewise.

	* default.c (default_suffix_rules): Add `-o $@' to makeinfo rules.

Mon Apr 12 12:30:04 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.63.7.

	* configure.in (AC_HAVE_HEADERS): Check for string.h and memory.h.
	Removed AC_MEMORY_H.
	* make.h [USG, NeXT]: Don't test these.
	[HAVE_STRING_H]: Test this to include string.h and define ANSI_STRING.
	[HAVE_MEMORY_H]: Test this instead of NEED_MEMORY_H.
	[! ANSI_STRING]: Put decls of bcopy et al here.
	[sparc]: Don't test this for alloca.h; HAVE_ALLOCA_H is sufficient.
	[HAVE_SIGSETMASK]: Test this rather than USG.
	[__GNU_LIBRARY__ || POSIX]: Don't #include <unistd.h> again.
	* main.c (main): Handle SIGCHLD if defined, and SIGCLD if defined.
	It doesn't hurt to do both if they are both defined, and testing
	USG is useless.
	* dir.c: Rationalize directory header conditionals.
	* arscan.c [HAVE_FCNTL_H]: Test this rather than USG || POSIX.

	* default.c (default_suffixes): Add `.txinfo'.
	(default_suffix_rules): Add `.txinfo.info' and `.txinfo.dvi' rules.

	* variable.c (try_variable_definition): Replace RECURSIVE flag
	with enum FLAVOR, which can be simple, recursive, or append.
	Recognize += as append flavor.  Set new variable VALUE in a switch
	on FLAVOR.  For append flavor, prepend the variable's old value.
	If the variable was previously defined recursive, set FLAVOR to
	recursive; if it was defined simple, expand the new value before
	appending it to the old value.  Pass RECURSIVE flag to
	define_variable iff FLAVOR == recursive.

	* variable.c (try_variable_definition): Use alloca and bcopy for
	NAME, instead of savestring.  Might as well use stack storage
	since we free it immediately anyway.

Thu Apr  8 18:04:43 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* job.c (start_waiting_jobs): Move decl of JOB outside of loop.

	* main.c (define_makeflags): Rename `struct flag' member `switch'
	to `cs', which is not a reserved word.

Wed Apr  7 15:30:51 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* job.c (new_job): Call start_waiting_jobs first thing.
	(start_waiting_job): Changed return type from void to int.
	Return 0 when putting the child on the waiting_jobs chain.
	(start_waiting_jobs): Don't check load and job_slots here.
	Always take a job off the chain and call start_waiting_job on it;
	give up and return when start_waiting_job returns zero.

	* main.c (define_makeflags: struct flag): Change member `char c' to
	`struct command_switch *switch'.
	(ADD_FLAG): Set that to CS instead of CS->c.
	If CS->c is -1, increment FLAGSLEN for the long name.
	When writing out FLAGS, handle FLAGS->switch->c == -1 and write
	the long name instead.

	* compatMakefile (stamp-config): New target of old config.h rule.
	Touch stamp-config after running config.status.
	(config.h): Just depend on stamp-config, and have empty commands.

Mon Apr  5 20:14:02 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* job.c [HAVE_WAITPID]: #undef HAVE_UNION_WAIT.

	* configure.in (AC_HAVE_FUNCS): Check for psignal.

Fri Apr  2 17:15:46 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* main.c (long_option_aliases): Remove "new"; it is already an
	unambiguous prefix of "new-file".

Sun Mar 28 16:57:17 1993  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* Version 3.63.6.

Wed Mar 24 14:26:19 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* vpath.c (selective_vpath_search): When adding the
	name-within-directory at the end of NAME, and we don't add a
	slash, don't copy FILENAME in one char too far into NAME.

	* variable.c (define_automatic_variables): Find default_shell's
	length with strlen, not numerology.

Wed Mar 17 20:02:27 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* main.c (define_makeflags): Add the elts of a string option in
	reverse order, so they come out right when reversed again.

Fri Mar 12 15:38:45 1993  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* compatMakefile (make.info): Use `-o make.info'.

Thu Mar 11 14:13:00 1993  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* compatMakefile (REMOTE): Set to @REMOTE@; change comments to
	reflect new use.
	(objs): Replace remote.o with remote-$(REMOTE).o.
	(srcs): Replace remote.c with remote-$(REMOTE).c.
	(remote.o): Rule removed.

	* configure.in (REMOTE): Subst this in Makefile et al; default "stub".
	Use AC_WITH to grok --with-customs arg to set REMOTE=cstms.
	* GNUmakefile (build.sh.in): Filter out remote-% from objs list.
	* build.template (REMOTE): New var; set to @REMOTE@.
	(objs): Add remote-${REMOTE}.o.

Wed Mar 10 15:12:24 1993  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* Version 3.63.5.

	* implicit.c (pattern_search): Fix "dependent"->"dependency" in
	"Rejecting impossible" -d msg.

	* file.c (file_hash_enter): New local vars {OLD,NEW}BUCKET.  Store
	mod'd values there; never mod {OLD,NEW}HASH.

Mon Mar  8 13:32:48 1993  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* remake.c [eta10]: Include <fcntl.h> instead of <sys/file.h>.

	* compatMakefile (VPATH): Set this to @srcdir@.
	(srcdir): Set this to $(VPATH).

	* main.c (main): New local var DIRECTORY_BEFORE_CHDIR.  Save in it
	a copy of CURRENT_DIRECTORY after the first getcwd.  Use it
	instead of CURRENT_DIRECTORY when chdir'ing back before re-execing.

	* remake.c (notice_finished_file): Pass missing SEARCH arg to f_mtime.

	* read.c (read_makefile): Remove extraneous arg to parse_file_seq.

Mon Feb 22 14:19:38 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* compatMakefile ($(infodir)/$(instname).info): Use , instead of /
	as the sed delimiter char.

Sun Feb 21 14:11:04 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.63.4.

	* rule.h (struct rule): Removed `subdir' member.
	* rule.c (new_pattern_rule): No need to clear it.
	(count_implicit_rule_limits): Set the `changed' flag in each dep
	that refers to a nonexistent directory.  No longer set rule-global
	`subdir' flag with that information.
	(print_rule_data_base): Don't record info on `subdir' flags.

	* implicit.c (pattern_search): Check the DEP->changed flag rather
	than the (now gone) RULE->subdir flag.  Also test CHECK_LASTSLASH;
	if it is set, the file might exist even though the DEP->changed
	flag is set.

	* rule.c (count_implicit_rule_limits): Pass "", not ".", as file
	name arg to dir_file_exists_p to check for existence of directory.

	* implicit.c (pattern_search): Inside dep-finding loop, set
	CHECK_LASTSLASH from the value recorded in CHECKED_LASTSLASH[I],
	rather than computing it anew.

	* commands.c (set_file_variables): Must alloca space for PERCENT
	and copy it, to avoid leaving the trailing `)' in the value.

	* misc.c (remove_comments): Fixed backslash-checking loop
	condition to allow it to look at the first char on the line.
	P2 >= LINE, not P2 > LINE.

	* compatMakefile ($(bindir)/$(instname)): Before moving $@.new to
	$@, rm $@.old and mv $@ to $@.old.

	* variable.c (try_variable_definition): Take new args FILENAME and
	LINENO.  Fatal if the variable name is empty.
	* read.c (read_makefile): Change callers.
	* main.c (main): Likewise.

	* compatMakefile (group): Define to @KMEM_GROUP@, autoconf magic
	that configure will replace with the group owning /dev/kmem.

Mon Feb  8 14:26:43 1993  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* vpath.c (vpath_search): Take second arg MTIME_PTR, pass thru to
	selective_vpath_search.
	(selective_vpath_search): Take second arg MTIME_PTR.
	If the dir cache thinks a file exists, stat it to make sure, and
	put the modtime in *MTIME_PTR.
	* remake.c (library_search): Take second arg MTIME_PTR.
	When we find a match, record its mtime there.
	Pass MTIME_PTR through to vpath_search to do same.
	(f_mtime): Pass &MTIME as new 2nd arg to {vpath,library}_search;
	store it in FILE->last_mtime if set nonzero.
	* implicit.c (pattern_search): Pass nil 2nd arg to vpath_search.

	* compatMakefile (remote.o): Prepend `$(srcdir)/' to `remote-*.c',
	so globbing looks somewhere it will find things.

	* compatMakefile ($(infodir)/$(instname).info): Install `make.info*'
	not `$(srcdir)/make.info*'; no need to use basename.

Fri Feb  5 12:52:43 1993  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* Version 3.63.3.

	* compatMakefile (install): Add missing ;\s.

	Make -, @, and + prefixes on a pre-expanded command line affect
	all lines in the expansion, not just the first.
	* commands.h (struct commands): Replace `lines_recurse' member
	with `lines_flags'.
	(COMMANDS_{RECURSE,SILENT,NOERROR}): New macros, bits to set in
	that flag byte.
	* commands.c (chop_commands): Set `lines_flags' instead of
	`lines_recurse'.  Record not only + but also @ and - prefixes.
	* remake.c (notice_finished_file): Check the COMMANDS_RECURSE bit
	in FILE->cmds->lines_flags, rather than FILE->cmds->lines_recurse.
	* job.c (start_job_command): Replaced RECURSIVE and NOPRINT local
	var with FLAGS; initialize it to the appropriate `lines_flags' byte.
	Set CHILD->noerror if the COMMANDS_NOERROR bit is set in FLAGS.
	Set the COMMANDS_SILENT bit in FLAGS for a @ prefix.

	* remake.c (update_goal_chain): Set G->file to its prev after
	checking for G being finished, since that check needs to examine
	G->file.

	* configure.in (union wait check) [HAVE_WAITPID]: Try using
	waitpid with a `union wait' STATUS arg.  If waitpid and union wait
	don't work together, we should not use union wait.

	* Version 3.63.2.

	* remake.c (update_goal_chain): When G->file->updated, move
	G->file to its prev.  We aren't finished until G->file is nil.

Thu Feb  4 12:53:04 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* main.c (starting_directory): New global variable.
	(main): Set it to cwd after doing -Cs.
	(log_working_directory): Use it, rather than computing each time.
	* make.h: Declare it.

	* compatMakefile (SHELL): Define to /bin/sh for losing Unix makes.

	* main.c (decode_env_switches): Allocate (1 + LEN + 1) words for
	ARGV, rather than LEN words plus one byte.

Wed Feb  3 18:13:52 1993  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* compatMakefile ($(bindir)/$(instname)): Put - before
	install_setgid command line, so its failure won't be an error.
	(infodir): New variable.
	(install): Depend on $(infodir)/$(instname).info.
	($(infodir)/$(instname).info): New target.

	* read.c (read_makefile): If FILENAMES is nil when we see a line
	starting with a tab, don't treat it as a command.  Just fall
	through, rather than giving an error.

	* read.c (read_makefile): If the NO_TARGETS flag is set when we see a
	command line, don't clear it before continuing.  We want
	subsequent command lines to be ignored as well.

	* job.c (new_job): Before expanding each command line, collapse
	backslash-newline combinations that are inside var or fn references.

Mon Feb  1 16:00:13 1993  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* compatMakefile (exec_prefix): Default to $(prefix), not /usr/local.

	* compatMakefile (make.info): Pass -I$(srcdir) to makeinfo.

	* job.c [POSIX] (unblock_sigs): Made global.
	[!POSIX] (unblock_sigs): Move defns to job.h.
	* job.h [POSIX] (unblock_sigs): Declare.

Sun Jan 31 19:11:05 1993  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* read.c (read_makefile): In vpath parsing, after finding the
	pattern token, take entire rest of line as the search path, not
	just the next token.

	* compatMakefile (remote.o): Depend on remote-*.c.

Thu Jan 28 16:40:29 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* commands.c (set_file_variables): Don't define any F or D versions.
	* variable.c (define_automatic_variables): Define them here as
	recursively-expanded variables that use the dir and notdir funcs.

	* variable.c (target_environment): In v_default case, don't export
	o_default or o_automatic variables.

	* configure.in (union wait check): Remove ` and ' inside C code;
	they confuse the shell script.

Mon Jan 25 13:10:42 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.63.1.

	* vpath.c (construct_vpath_list): When skipping further processing
	of an elt that is ".", don't also skip the code that pushes P past
	the next separator.

	* compatMakefile (distclean): Don't remove make-*.

	* configure.in (HAVE_UNION_WAIT): Try to use WEXITSTATUS if it's
	defined.  If one cannot use WEXITSTATUS with a `union wait'
	argument, we don't want to believe the system has `union wait' at all.

	* remake.c (update_file): Do nothing to print "up to date" msgs.
	(update_goal_chain): Do it here instead.
	Use the `changed' flag of each goal's `struct dep' to keep track
	of whether files_remade (now commands_started) changed around a
	call to update_file for that goal.
	When a goal is finished, and its file's update_status is zero (i.e.,
	success or nothing done), test the `changed' flag and give an "up
	to date" msg iff it is clear.
	* make.h (files_remade): Renamed to commands_started.
	* remake.c: Changed defn.
	(update_goal_chain): Changed uses.
	* job.c (start_job_command): Increment commands_started here.
	(reap_children): Not here.

	* remake.c (update_goal_chain): Don't do anything with files'
	`prev' members.  update_file now completely handles this.

	* variable.c (target_environment): Don't expand recursive
	variables if they came from the environment.

	* main.c (define_makeflags): For flags with omitted optional args,
	store {"", 0} with ADD_FLAG.  When constructing FLAGSTRING, a flag
	so stored cannot have more flags appended to the same word.

Fri Jan 22 14:46:16 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* variable.c (print_variable_set): In vars/bucket calculation,
	don't spuriously multiply by 100.

	* Version 3.63.

	* job.c [!HAVE_UNION_WAIT] (WTERMSIG, WCOREDUMP, WEXITSTATUS):
	Don't define if already defined.

	* remake.c (update_file): Don't keep track of the command_state before
	calling update_file_1.  Remove local variable COMMANDS_FINISHED,
	and don't test it to decide to print the "is up to date" msg.
	Testing for files_remade having changed should always be sufficient.
	The old method lost when we are called in the goal chain run on a
	makefile, because the makefile's command_state is already
	`cs_finished' from the makefile chain run.

	* misc.c [HAVE_SETRE[GU]ID]: Test these to decl setre[gu]id.

	* configure.in: Rewrote wait checking.
	Use AC_HAVE_HEADERS to check for <sys/wait.h>.
	Use AC_HAVE_FUNCS to check for waitpid and wait3.
	Use a compile check to test just for `union wait'.
	* job.c: Rewrote conditionals accordingly.
	[HAVE_WAITPID]: Test this only to define WAIT_NOHANG.
	[HAVE_WAIT3]: Likewise.
	[HAVE_UNION_WAIT]: Test this to define WAIT_T and W*.

	* configure.in: Set CFLAGS and LDFLAGS before all checks.

	* dir.c: Add static forward decls of {open,read}_dirstream.

Thu Jan 21 17:18:00 1993  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* Version 3.62.31.

	* job.c [NGROUPS_MAX && NGROUPS_MAX==0]: #undef NGROUPS_MAX.

	* compatMakefile (CFLAGS, LDFLAGS): Set to @CFLAGS@/@LDFLAGS@.
	* build.template (CFLAGS, LDFLAGS): Same here.
	* configure.in: AC_SUBST(CFLAGS) and LDFLAGS.
	Set them to -g if not defined in the environment.

	* remake.c (library_search): Use LIBNAME consistently, setting it
	only once, to be the passed name sans `-l'.
	Pass new var FILE to be modified by vpath_search.

Mon Jan 18 14:53:54 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.62.30.

	* job.c (start_waiting_jobs): Return when job_slots_used is equal to
	job_slots.

	* configure.in: Add AC_CONST for the sake of getopt.

	* read.c (read_makefile): Continue after parsing `override'
	directive, rather than falling through to lossage.
	Check for EOL or blank after "override define".

	* compatMakefile (.c.o, remote.o): Put $(CFLAGS) after other switches.

Fri Jan 15 12:52:52 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.62.29.

	* main.c (define_makeflags): After writing everything into
	FLAGSTRING, only back up two chars if [-1] is a dash, meaning we
	just wrote " -".  Always terminate the string at *P.

	* remake.c (library_search): When constructing names in std dirs,
	use &(*LIB)[2] for the stem, not LIBNAME (which points at the
	buffer we are writing into!).

Thu Jan 14 13:50:06 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* read.c (read_makefile): Set IN_IGNORED_DEFINE for "override
	define" when IGNORING is true.

	* compatMakefile (distclean): Remove config.status and build.sh.

Wed Jan 13 16:01:12 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.62.28.

	* misc.c (xmalloc, xrealloc): Cast result of malloc/realloc to
	(char *).

	* arscan.c (ar_scan) [AIAMAG]: Cast read arg to (char *).

	* variable.c (define_automatic_variables): Override SHELL value for
	origin o_env_override as well as o_env.

	* GNUmakefile (build.sh.in): Don't replace %globobjs%.  Instead,
	add the names of the glob objects (w/subdir) to %objs%.
	* build.template (globobjs): Removed.
	Take basename of $objs before linking.

Tue Jan 12 12:31:06 1993  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* Version 3.62.27.

	* configure.in (AC_OUTPUT): Also edit build.sh.
	* build.template: New file.
	* GNUmakefile (build.sh.in): New rule to create it from build.template.
	(make-$(version).tar.Z): Depend on build.sh.in.

	* main.c (die): Call print_data_base if -p.
	(main): Don't call it here.

	* compatMakefile (defines): Add @DEFS@.  configure should turn this
	into -DHAVE_CONFIG_H.

Mon Jan 11 14:39:23 1993  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* Version 3.62.26.

	* misc.c (init_access): Surround with #ifdef GETLOADAVG_PRIVILEGED.
	({make,user,child}_access) [! GETLOADAVG_PRIVILEGED]: Make no-op.
	* compatMakefile (install_setgid): New var, set by configure.
	(install): Install setgid $(group) only if $(install_setgid) is true.

Fri Jan  8 15:31:55 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* job.c (load_too_high): If getloadavg fails with errno==0, give a
	message saying that load limits are not supported.

	* vpath.c (construct_vpath_list): Rewrote path deletion code to
	not try to use PATH's next link after freeing PATH.

	* main.c (define_makeflags): Rewritten; now handles string-valued
	option, and has no arbitrary limits.
	(switches): Set `toenv' flag for -I and -v.

	* main.c (decode_env_switches): Cast return value of alloca to char *.

	* misc.c (child_access) [HAVE_SETREUID, HAVE_SETREGID]: Use
	setre[gu]id in place of set[gu]id.

Wed Jan  6 15:06:12 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* main.c (main): Define MAKEOVERRIDES, MAKE, and MAKE_COMMAND with
	origin o_default.

	* make.h [POSIX]: Don't test this to use ANSI_STRING.
	Testing STDC_HEADERS should be sufficient.

	* job.h: Declare start_waiting_jobs.

	* read.c (read_makefile): Add missing parens in if stmt that find
	conditional directives.

	* main.c (main): Declare init_dir.
	* implicit.c (pattern_search): Always use two % specs in a
	DEBUGP2, and always pass two non-nil args.
	Cast field width args to int.
	Add missing parens in !RULE->subdir if stmt.
	* function.c (expand_function, patsubst_expand): Add parens around
	assignments inside `while' stmts.
	* commands.c (print_commands): Cast field width args to int.

	* read.c (do_define): Cast return value of alloca to (char *).

	* main.c (init_switches): New function, broken out of decode_switches.
	(decode_switches): Take new arg ENV.  If set, ignore non-option
	args; print no error msgs; ignore options with clear `env' flags.
	(decode_env_switches): Rewritten to chop envar value into words
	and pass them to decode_switches.
	(switches): Set `env' flag for -I and -v.

	* dir.c (init_dir): Cast free to __glob_closedir_hook's type.

Tue Jan  5 14:52:15 1993  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.62.25.

	* job.c [HAVE_SYS_WAIT || !USG]: Don't #include <sys/time.h> and
	<sys/resource.h>.  <sys/time.h> interacts badly with <time.h>, and
	we don't need these anyway.

	* configure.in (AC_HAVE_FUNCS): Check for setre[gu]id.
	* misc.c ({user,make}_access): Test #ifndef HAVE_SETRE[GU]ID, not
	#ifdef POSIX || USG.  SunOS 4.1 is supposedly POSIX.1 compliant,
	but its set[gu]id functions aren't; its setre[gu]id functions work.

	* misc.c ({user,make,child}_access): Give name of caller in error msgs.

	* job.c (load_too_high): Say "cannot enforce load limit" in error msg.

	* configure.in: Call AC_PROG_CC.
	* compatMakefile (CC): Define to @CC@ (autoconf magic).

	* compatMakefile: Add .NOEXPORT magic target.

Mon Jan  4 17:00:03 1993  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* main.c (print_version): Updated copyright to include 93.

Thu Dec 31 12:26:15 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* make.h [_AIX]: Don't declare alloca.

Tue Dec 29 13:45:13 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* Version 3.62.24.

	* compatMakefile (objs): Add signame.o.
	(srcs): Add signame.[ch].

	* compatMakefile (srcs): Add config.h.in.
	(remote.o): Add -I. before -I$(srcdir).

Mon Dec 28 15:51:26 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.62.23.

	* read.c (readline): Fatal when LEN==0, indicating a line starting
	with a NUL.
	(readline): Take new arg LINENO, for use in error msg.
	(read_makefile, do_define): Pass it.

	* compatMakefile (glob/libglob.a): Pass -DHAVE_CONFIG_H in CPPFLAGS.
	(.c.o): Add -I. before -I$(srcdir).

Wed Dec 23 12:12:04 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* read.c (read_makefile): Accept and ignore a rule with no targets.

	* compatMakefile (ALLOCA_SRC): New variable.
	(srcs): Include its value.

	* read.c (struct conditional): Renamed member `max_ignoring' to
	`allocated'; added new member `seen_else'.
	(conditional_line): Initialize seen_else flag when starting an `if...';
	set it when we see an `else'; fatal if set when we see `else'.
	(read_makefile): Fatal "missing `endif'" if there are any pending
	conditionals, not just if we are still ignoring.

Tue Dec 22 15:36:28 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* compatMakefile (manext): Set to 1, not l.
	($(mandir)/$(instname).$(manext)): Use $(srcdir) for make.man in cmds.

	* file.c (file_hash_enter): Don't call uniquize_deps here.
	* read.c (record_files): Likewise.
	* implicit.c (pattern_search): Likewise.
	* commands.c (set_file_variables): Call it only here.

	* default.c (default_variables) [__convex__]: FC=fc.

	* variable.c (target_environment): Expand the values of recursively
	expanded variables when putting them into the environment.
	* expand.c (recursively_expand): Made global.
	* make.h (recursively_expand): Declare it.

	* remake.c (check_dep): Set FILE->command_state to cs_deps_running
	when a dep's command_state is cs_running or cs_deps_running.

	* read.c (read_makefile): Changed error msg for spurious cmds to
	not say "first target".

Sun Dec 20 17:56:09 1992  Roland McGrath  (roland@albert.gnu.ai.mit.edu)

	* configure.in: Do AC_CONFIG_HEADER right after AC_INIT.
	* make.h (HAVE_CONFIG_H): #include "config.h", then #define this.
	* compatMakefile (config.h, configure, config.h.in): New rules.
	(defines): Removed @DEFS@.

Thu Dec 17 16:11:40 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* compatMakefile (realclean): Just depend on distclean; no cmds.
	(distclean): Do what realclean did before; also remove Makefile and
	config.h; don't remove configure.
	(info, dvi): New targets; depend on make.{info,dvi}.
	(doc): Removed target.
	(MAKEINFO, TEXI2DVI): New vars.
	(make.info, make.dvi): Use them instead of explicit cmds.

Wed Dec 16 16:25:24 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* configure.in: Added fcntl.h to AC_HAVE_HEADERS.  getloadavg cares.

Wed Dec  9 15:21:01 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* main.c (long_option_aliases): Add --new-file alias for -W.

	* default.c (default_variables): Change all C++ to CXX and C++FLAGS
	to CXXFLAGS.

	* read.c (do_define): Expand the variable name before using it.

	* main.c (main): Define variable "MAKE_COMMAND" to argv[0];
	define "MAKE=$(MAKE_COMMAND) $(MAKEOVERRIDES)" always.

	* remake.c (library_search): Search for libNAME.a in cwd; look in
	vpath before looking in standard dirs, not after.
	Changed order of std dirs to: /lib, /usr/lib, ${prefix}/lib.

Mon Nov 23 14:57:34 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* default.c (default_pattern_rules, default_terminal_rules): Added
	brackets around initializers.

	* variable.c (try_variable_definition): Don't check for LINE[0]=='\t'.
	(try_variable_definition): Expand the name before defining the var.

	* job.c (init_siglist): Removed function.
	Removed decl of `sys_siglist'.
	* make.h [! HAVE_SYS_SIGLIST]: #include "signame.h".
	[HAVE_SYS_SIGLIST && !SYS_SIGLIST_DECLARED]: Declare sys_siglist
	only under these conditions.
	* main.c (main): Don't declare init_siglist.
	(main) [! HAVE_SYS_SIGLIST]: Call signame_init instead of init_siglist.

Wed Nov 18 14:52:51 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* read.c (record_files): Don't try to append to FIRSTDEPS if it's
	nil; instead just set it to MOREDEPS.

Mon Nov 16 17:49:17 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* vpath.c (construct_vpath_list): Initialize P to DIRPATH before
	loop that sets MAXELEM.

Fri Nov 13 18:23:18 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.62.22.

Thu Nov 12 15:45:31 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* job.c (start_job_command): Under -n, increment files_remade after
	processing (i.e., printing) all command lines.

Tue Nov 10 15:33:53 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* read.c (record_files): Append new deps if this rule has no
	commands; prepend them to existing deps if this rule has no commands.

	* dir.c (open_dirstream): Return nil if DIR->contents->files is nil.

	* read.c (parse_file_seq): Removed last arg STRIP.  Always strip `./'s.
	(read_makefile): Changed callers.
	* function.c (string_glob): Likewise.
	* rule.c (install_pattern_rule): Likewise.

Mon Nov  9 17:50:16 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* remake.c (files_remade): Made global.
	(notice_finished_file): Don't increment files_remade here; this
	function gets called in many situations where no remaking was in
	fact done.
	* job.c (reap_children): Do it here instead, when we know that
	actual commands have been run for the file.
	* make.h (files_remade): Declare it.

Thu Nov  5 18:26:10 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* vpath.c (construct_vpath_list): Allow blanks as well as colons to
	separate elts in the search path.

	* read.c (read_makefile): Don't fatal on extra tokens in `vpath'.
	The search path can contain spaces now.

Tue Nov  3 20:44:32 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* compatMakefile (check): New target; no-op.

	* file.c (file_hash_enter): Mod OLDHASH by FILE_BUCKETS after
	testing for OLDHASH==0 but before using the value.
	(rename_file): Don't mod OLDHASH by FILE_BUCKETS before passing it
	to file_hash_enter.

	* file.c (rename_file): Notice when OLDFILE->cmds came from
	default.c, and don't try to print ->filename in that case.

Sun Oct 25 01:48:23 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* remake.c (update_file): Don't process F->also_make here.
	(notice_finished_file): Don't process FILE->also_make if no attempt
	to update FILE was actually made.
	Fixed to call f_mtime directly to refresh their modtimes.

Sat Oct 24 22:08:59 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* read.c (find_percent): Don't increment P again after skipping
	an escaped %.

	* expand.c (variable_expand): In call to patsubst_expand, don't
	find `%'s ourselves; let that function do it.

	* read.c (read_makefile: record_waiting_files): Don't call
	record_files if FILENAMES is nil.
	(read_makefile): All alternatives in the parsing, except for rule
	lines, fall through to the end of the loop.  At the end of the
	loop, do record_waiting_files so we notice later spurious cmds.

Fri Oct 23 15:57:37 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* variable.c (define_automatic_variables): Free old value of SHELL
	before replacing it.

Thu Oct 15 18:57:56 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* compatMakefile (.c.o): Add -I$(srcdir)/glob to flags.

	* dir.c (open_dirstream): Cast return value to __ptr_t.

	* default.c (default_variables: "GET") [_IBMR2]: Use USG defn.

	* make.h (MAXPATHLEN): Moved out of #ifndef POSIX.
	(GET_PATH_MAX): Moved from #ifdef POSIX to #ifdef PATH_MAX #else.
	Define as (get_path_max ()).
	[! PATH_MAX] (NEED_GET_PATH_MAX): Define.
	[! PATH_MAX] (get_path_max): Declare fn.
	* misc.c [NEED_GET_PATH_MAX] (get_path_max): New function.

Mon Oct 12 13:34:45 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* Version 3.62.21.

	* job.c (sys_siglist): Only declare #ifndef SYS_SIGLIST_DECLARED.
	* make.h [! HAVE_SYS_SIGLIST && HAVE__SYS_SIGLIST]: #define
	SYS_SIGLIST_DECLARED.

	* dir.c (file_impossible): When initializing DIR->contents, set
	DIR->contents->dirstream to nil.

	* compatMakefile (GLOB): Define new variable.
	(objs): Use it, rather than glob/libglob.a explicitly.

	* read.c (parse_file_seq): When stripping "./", handle cases like
	".///foo" and "./////".
	* file.c (lookup_file, enter_file): Likewise.

Sun Oct 11 17:00:35 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* dir.c (struct dirstream, {open,read}_dirstream): New
	data type and functions to read a directory sequentially.
	(init_dir): New function to hook it into glob.
	* main.c (main): Call init_dir.

	* compatMakefile (objs): Added glob/libglob.a.
	* configure.in: Remove code to test for glob.

Fri Oct  9 12:08:30 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* read.c (record_files): Generalized test for NAME pointing
	somewhere into F->name.

	* variable.c (define_variable_in_set): Free old value when replacing.

	* read.c (do_define): Free the linebuffer before returning.
	(record_files): When clearing .SUFFIXES deps, free their data.
	(multi_glob): Free OLD and its data when replacing it with results
	of glob run.

	* commands.c (set_file_variables): Use alloca in place of xmalloc
	for temp space for $^, $?, et al.

	* dir.c (struct directory): New member `contents' replaces `files'
	and `dirstream'.
	(struct directory_contents): New type.
	(directories_contents): New hash table.
	(dir_struct_file_exists_p): Take a struct directory_contents.
	(dir_file_exists_p): Pass it the `contents' member of the dir found.
	(dir_struct_file_exists_p): Renamed to dir_contents_file_exists_p;
	made static.  Return 0 if DIR is nil (meaning it couldn't be stat'd).
	(dir_file_exists_p, find_directory): Change all callers.
	(file_impossible): Use DIR->contents, initializing it if nil.
	(print_dir_data_base): Use DIR->contents, and print out device and
	inode numbers with each directory.

	* Changes for performance win from John Gilmore <gnu@cygnus.com>:
	* dir.c (DIRECTORY_BUCKETS): Increase to 199.
	(DIRFILE_BUCKETS): Decrease to 107.
	(find_directory): Allocate and zero a multiple of
	sizeof (struct dirfile *), not of sizeof (struct dirfile).
	(dir_struct_file_exists_p): New function, nearly all code from
	dir_file_exists_p.
	(dir_file_exists_p): Just call find_directory+dir_struct_file_exists_p.
	* vpath.c (selective_vpath_search): Remove redundant
	dir_file_exists_p call.

	* configure.in: Comment out glob check; always use our code.

Fri Oct  2 19:41:20 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* make.h [! HAVE_SYS_SIGLIST && HAVE__SYS_SIGLIST]: #define
	HAVE_SYS_SIGLIST; after doing #define sys_siglist _sys_siglist, we
	do have it.

Wed Sep 30 19:21:01 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* main.c (main): Don't do -w automatically if -s.

Tue Sep 29 21:07:55 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* main.c (printed_version): Move variable inside print_version.
	(print_version): Return immediately if printed_version is set.
	(die): Don't test printed_version here.
	(decode_switches): Under -v, do print_version before giving usage.
	(DESCRIPTION_COLUMN): New macro.
	(decode_switches): Use it when printing the usage message.
	Leave at least two spaces between options and their descriptions.

Fri Sep 25 13:12:42 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* Version 3.62.20.

Wed Sep 16 16:15:22 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* read.c (read_makefile): Save errno value from trying to open
	FILENAME, and restore it before erring; otherwise we get the errno
	value from the last elt of the search path.

Tue Sep 15 15:12:47 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* main.c (long_option_aliases): Add --stop for -S.

	* read.c (word1eq): Do strncmp before dereferencing someplace that
	may be out in space.

Wed Sep  9 15:50:41 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* remake.c (notice_finished_file): If all the command lines were
	recursive, don't do the touching.

	* job.c (start_job_command): Don't check for + here.
	* commands.c (chop_commands): Do it here instead.

	* default.c (default_terminal_rules): Prepend + to cmds for RCS.

Wed Sep  2 17:53:08 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* compatMakefile (objs): Include $(ALLOCA).

	* make.h [CRAY]: Move #define signal bsdsignal to before #includes.

Thu Aug 27 17:45:43 1992  Roland McGrath  (roland@wookumz.gnu.ai.mit.edu)

	* read.c (default_include_directories): Add INCLUDEDIR first.
	* compatMakefile (includedir): Define.
	(defines): Add -D for INCLUDEDIR="$(includedir)".

	* read.c (read_makefile): Grok multiple files in `include';
	globbing too.

	* remake.c (library_search): New function.
	(library_file_mtime): Remove function.
	(f_mtime): Use library_search instead of library_file_mtime.
	* compatMakefile (libdir): Define.
	(defines): Add -D for LIBDIR="$(libdir)".
	* make.texinfo (Libraries/Search): Document change.

	* file.c (rename_file): Fix file_hash_enter call with missing arg.

Wed Aug 26 17:10:46 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* Version 3.62.19.

	* main.c (main): Set command_state to cs_finished for temp files
	made for stdin makefiles.

	* main.c (decode_switches): Don't tell getopt to return non-option
	args in order.
	Ignore an argument of `-'.

Thu Aug 20 13:36:04 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* job.c (start_job_command): If (touch_flag && !RECURSIVE), ignore
	the command line and go to the next.
	(notice_finished_file): Under -t, touch FILE.
	* remake.c (remake_file): Don't touch it here.

Wed Aug 19 16:06:09 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* function.c (pattern_matches): Use temporary for strlen (WORD)
	instead of two function calls.

	* compatMakefile (LOAD_AVG): Remove variable and comments.

Tue Aug 18 14:58:58 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* make.texinfo (Running): Node renamed to `make Invocation'.

Fri Aug 14 12:27:10 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* arscan.c (ar_name_equal): Don't compare [MAX-3..MAX] if
	NAMELEN != MEMLEN.

Thu Aug 13 17:50:09 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.62.18.

	* main.c: Don't #include <time.h>; make.h already does.

Mon Aug 10 17:03:01 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* implicit.c (pattern_search): Fixed copying of suffix when building
	also_make elts.

	* function.c (expand_function: `shell'): Make sure BUFFER is
	null-terminated before replacing newlines.

	* compatMakefile (mandir): Use man$(manext), not always manl.

Sun Aug  2 01:42:50 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* rule.c (new_pattern_rule): Not static.
	* rule.h: Declare it.

	* file.c (file_hash_enter): New function, most code from rename_file.
	(rename_file): Call it.
	* file.h (file_hash_enter): Declare it.

	* dep.h: Doc fix.

Thu Jul 30 15:40:48 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* main.c (decode_switches): Handle usage_and_exit when building
	long options vector.

	* default.c (default_terminal_rules): Make RCS rules use $(CHECKOUT,v).
	(default_variables): Define CHECKOUT,v (hairy).

	* make.h [!HAVE_SYS_SIGLIST && HAVE__SYS_SIGLIST]: #define
	sys_siglist to _sys_siglist.

Sun Jul 26 16:56:32 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* NEWS: Add header and tail copyright info like Emacs NEWS.

	* make.h [ANSI_STRING]: Don't #define index, rindex, bcmp, bzero,
	bcopy if already #define'd.
	[STDC_HEADERS] (qsort, abort, exit): Declare here.
	[! __GNU_LIBRARY__ && !POSIX]: Not here.

	* make.h [_AIX]: #pragma alloca first thing.

	* job.c (start_waiting_job): Set the command_state to cs_running
	when we queue a job on waiting_jobs.

Fri Jul 24 02:16:28 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* variable.c (define_automatic_variables): Use "" instead of nil
	for empty value.

Thu Jul 23 22:31:18 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.62.17.

	* main.c (struct command_switch.type): Add alternative usage_and_exit.
	(command_switches): Add -h/--help.

Thu Jul 16 14:27:50 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* GNUmakefile (make-$(version).tar.Z): Include NEWS, not CHANGES.
	* README.template: Mention NEWS.
	* CHANGES: Renamed to NEWS.

	* main.c [! STDC_HEADERS] [sun]: Don't declare exit.

Tue Jul 14 18:48:41 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* main.c (main): Set -o files' command_states to cs_finished.

	* rule.c (count_implicit_rule_limits): Decrement num_pattern_rules
	when tossing a rule.

	* main.c (main): Use alloca only in simple local var assignment,
	for braindead SGI compiler.

	* rule.c (print_rule_data_base): Barf if num_pattern_rules is
	inconsistent with the number computed when listing them.

Mon Jul 13 17:51:53 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* commands.c (set_file_variables): For $? and $^ elts that are archive
	member refs, use member name only.

Fri Jul 10 00:05:04 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* variable.h (struct variable.export): Add new alternative v_ifset.
	* variable.c (target_environment): Check for it.
	(define_automatic_variables): Set it for MAKEFILES.

Thu Jul  9 21:24:28 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* compatMakefile (objs): Remove getloadavg.o; $(extras) gets it.
	(remote.o): Use $(srcdir)/remote.c, not $remote.c<.
	(distclean, mostlyclean): New targets.

Tue Jul  7 19:12:49 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.62.16.

	* compatMakefile (config.status): Remove rule.

	* job.c (start_waiting_job): Free C after using C->file, not before.

Sat Jul  4 20:51:49 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* commands.c, job.c, main.c, make.h, remote-cstms.c: Use #ifdef
	HAVE_* instead of #ifndef *_MISSING.
	* configure.in: Use AC_HAVE_FUNCS instead of AC_MISSING_FUNCS (gone).

Thu Jul  2 18:47:52 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* main.c (main): makelevel>0 or -C implies -w.

Tue Jun 30 20:50:17 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* file.c, job.c, function.c: Don't #include <errno.h>.
	make.h: Do it here instead.
	* arscan.c (ar_member_touch): Don't declare errno.

Thu Jun 25 17:06:55 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* GNUmakefile (make-$(version).tar.Z): Depend on INSTALL, configure.in.

	* remake.c (update_file): If commands or deps are running after
	update_file_1 returns, break out of the :: rule (->prev) loop and
	just return.

	* job.c	(job_next_command): New function; code from start_job.
	(start_job_command): Renamed from start_job.  Call job_next_command
	and recurse for empty command lines and -n.
	(start_waiting_job): Call start_job_command, not start_job.
	(new_job): Call job_next_command to prime the child structure, and
	then call start_waiting_job.
	(reap_children): Use job_next_command and start_job_command.
	(start_waiting_job): Call start_remote_job_p here, and store its
	result in C->remote.  If zero, check the load average and
	maybe put C on waiting_jobs.
	(start_job_command): Test CHILD->remote rather than calling
	start_remote_job_p.  Don't do load avg checking at all here.

	* main.c (main): Don't handle SIGILL, SIGIOT, SIGEMT, SIGBUS,
	SIGSEGV, SIGFPE or SIGTRAP.

	* compatMakefile (glob/libglob.a): Don't pass srcdir to sub-make.
	configure will set it in glob/Makefile.

Wed Jun 24 19:40:34 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* dir.c [DIRENT] (direct): Don't define to dirent.
	[! DIRENT] (direct): Define to dirent.
	(dir_file_exists_p): Use struct dirent instead of struct direct.

	* make.h (getcwd): No space between macro and ( for args!

	* job.c (start_job): Don't put the job on waiting_jobs if
	job_slots_used==0.

	* make.texinfo (Missing): Shortened title.

Tue Jun 23 18:42:21 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* file.c (remove_intermediates): Print "rm" commands under -n.

Mon Jun 22 16:20:02 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* Version 3.62.15.

Fri Jun 19 16:20:26 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* arscan.c [M_UNIX]: #undef M_XENIX.

Wed Jun 17 17:59:28 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* default.c (default_terminal_rules): Put @ prefix on RCS cmds.

Tue Jun 16 19:24:17 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* compatMakefile (getloadavg.o): Removed special rule.
	(CFLAGS): Don't include $(defines).
	(.c.o): Define suffix rule.
	(glob/libglob.a): Pass CPPFLAGS=$(defines) to submake.
	(GETOPT_SRC, srcs, tagsrcs): Prefix files with $(srcdir)/.

	* arscan.c (ar_name_equal): Moved local vars inside #if'd block.

	* make.h (max): Removed.
	* expand.c (variable_buffer_output): Don't use it.

	* compatMakefile (INSTALL): Define.
	(Makefile): New rule to make from Makefile.in.
	(srcdir): Define.
	(VPATH): Define.
	(getloadavg.o, remote.o): Use autoconf $foo< hack.

	* commands.c (fatal_error_signal): Removed return.

Mon Jun 15 17:42:51 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.62.14.

	* make.texinfo (Summary): New node.
	(Special Targets): Mention .EXPORT_ALL_VARIABLES here.

	* variable.c (max): Moved to make.h.

	* compatMakefile (objs, srcs): Added ar & arscan.

	* job.c (start_waiting_job): New function, 2nd half of new_job.
	(new_job): Call it.
	(start_waiting_jobs): New function.
	* remake.c (update_goal_chain): Call start_waiting_jobs at the top
	of the main loop.
	* compatMakefile (objs, srcs): Removed load, added getloadavg.

Fri Jun 12 19:33:16 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* job.c (load_too_high): New function.  Uses getloadavg.
	(waiting_jobs): New variable.
	(start_job): Don't call wait_to_start_job.  Instead, if
	load_too_high returns nonzero, add the child to the
	`waiting_jobs' chain and return without starting the job.

Thu Jun 11 00:05:28 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* expand.c (variable_buffer_output): Made global again.
	* variable.h: And declare it.

	* arscan.c (PORTAR): Define for all systems if PORT5AR is not defined.
	(AR_NAMELEN, AR_TRAILING_SLASH): Removed.
	(ar_scan): Don't use it.  Don't #ifdef AR_TRAILING_SLASH; just look
	for a slash in the archive at run time.
	(ar_name_equal): Rewrote .o hacking to not use AR_NAMELEN, and to
	cope with trailing-slash and non-trailing-slash archives.

	* main.c (main) [! SETVBUF_REVERSED]: Test this instead of USGr3 et al.
	[SETVBUF_REVERSED]: Always allocate a buffer ourselves.

	* load.c (load_average) [sgi]: Use sysmp call.

	* compatMakefile (INSTALL_DATA, INSTALL_PROGRAM): Define.
	($(bindir)/$(instname), $(mandir)/make.$(manext)): Use them.

	* make.h [HAVE_VFORK_H]: #include <vfork.h>.
	(vfork, VFORK_NAME): Don't define.
	* job.c (start_job): Use "vfork" in place of VFORK_NAME.

	* make.h [HAVE_LIMITS_H, HAVE_SYS_PARAM_H]: If #define'd, #include
	the each file.  Rearranged PATH_MAX hacking.
	* job.c: Rearranged NGROUPS_MAX hacking.

	* remake.c (fstat, time): Don't declare.

	* compatMakefile (defines): Value is @DEFS@.
	(LOADLIBES): Value is @LIBS@.
	(extras): Value is @LIBOBJS@.
	(ARCHIVES, ARCHIVES_SRC, ALLOCASRC): Removed.
	* arscan.c, ar.c: Surround body with #ifndef NO_ARCHIVES.

	* misc.c [! HAVE_UNISTD_H]: Test instead of !POSIX to decl get*id.

	* make.h [GETCWD_MISSING]: Test instead of !USG && !POSIX et al.
	(getcwd): Just declare if present.  If not, declare as a macro
	using getwd, and declare getwd.
	[PATH_MAX] (GET_PATH_MAX): #define to PATH_MAX.
	* main.c (main,	log_working_directory): Use getcwd instead of getwd.

	* main.c (main) [SETLINEBUF_MISSING]: Test this instead of USG.

	* make.h (SIGHANDLER, SIGNAL): Removed.
	(RETSIGTYPE): Define if not #define'd.
	* main.c (main): Use signal in place of SIGNAL.

	* main.c [SYS_SIGLIST_MISSING]: Test instead of USG.

	* job.c (search_path) [GETGROUPS_MISSING]: Test instead of USG.
	[HAVE_UNISTD_H]: Test instead of POSIX to not decl getgroups.

	* main.c [! HAVE_UNISTD_H]: Test instead of !POSIX to decl chdir.
	[! STDC_HEADERS]: Test instead of !POSIX to decl exit & atof.

	* job.c (child_handler), commands.c (fatal_error_signal): Return
	RETSIGTYPE instead of int.
	* main.c (main): Declare fatal_error_signal and child_handler here
	to return RETSIGTYPE; removed top-level decl of former.

	* commands.c (fatal_error_signal), job.c (unblock_sigs, start_job),
	main.c [SIGSETMASK_MISSING]: Test this instead of USG.

Wed Jun 10 22:06:13 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* job.c [HAVE_WAITPID]: Test this instead of USG.
	[! HAVE_UNISTD_H]: Test this instead of !POSIX to declare misc fns.
	(GID_T): Don't #define.
	(search_path): Use gid_t instead of GID_T.
	[GETDTABLESIZE_MISSING, SYS_SIGLIST_MISSING, DUP2_MISSING]: Test
	these individually instead of USG for all.
	* make.h (ctime): Don't declare.  #include time.h instead.
	[HAVE_UNISTD_H]: #include <unistd.h> and #define POSIX #ifdef
	_POSIX_VERSION.
	* dir.c [__GNU_LIBRARY__] (D_NAMLEN): Define to use d_namlen member.
	* make.h [NEED_MEMORY_H]: Only include memory.h #ifdef this.

	* arscan.c: Removed #ifdef mess about string.h et al.
	Just #include make.h instead.
	* make.h (fstat, atol): Declare.

	* commands.c (fatal_error_signal): Don't use sigmask to check for
	propagated signals; use ||s instead.
	(PROPAGATED_SIGNAL_MASK): Removed.
	(fatal_error_signal) [POSIX]: Use sigprocmask in place of sigsetmask.

	* variable.c (variable_buffer, variable_buffer_length,
	initialize_variable_output, variable_output): Moved to expand.c;
	made all static.
	(struct output_state, save_variable_output,
	restore_variable_output): Removed.
	* expand.c (initialize_variable_output): Put a NUL at the beginning
	of the new buffer after allocating it.
	(allocated_variable_expand_for_file): Don't use
	{save,restore}_variable_output.  Do it by hand instead, keeping
	state on the stack instead of malloc'ing it.
	(allocated_variable_expand): Removed.
	* variable.h (allocated_variable_expand): Define here as macro.
	(variable_buffer_output, initialize_variable_output,
	save_variable_output, restore_variable_output): Removed decls.

	* read.c (conditional_line): For an if cmd, if any elt of the
	conditionals stack is ignoring, just push a new level that ignores
	and return 1; don't evaluate the condition.

Thu Jun  4 21:01:20 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* main.c (main): Put #ifdef's around frobbing SIGSYS and SIGBUS.

	* job.c (getdtablesize): Don't declare or #define if already #define'd.

Wed Jun  3 23:42:36 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* file.c (snap_deps): If `.EXPORT_ALL_VARIABLES' is a target, set
	export_all_variables.
	* make.texinfo (Variables/Recursion): Document .EXPORT_ALL_VARIABLES.

Tue Jun  2 21:08:35 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* Version 3.62.13.

	* commands.c (set_file_variables): Calculate length for ^D and ?D
	individually, making sure to give them at least enough space for "./".

	* make.h [CRAY]: #define signal to bsdsignal.

	* default.c (default_variables) [CRAY]: Define PC, SEGLDR,
	CF77PPFLAGS, CF77PP, CFT, CF, and FC.

	* arscan.c (AR_HDR_SIZE): Define to sizeof (struct ar_hdr), if it
	wasn't defined by <ar.h>.

Thu May 28 00:56:53 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* Version 3.62.12.

Tue May 26 01:26:30 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* rule.c (new_pattern_rule): Initialize LASTRULE to nil, not
	pattern_rules.

Mon May 25 19:02:15 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* main.c (decode_switches): Initialize all the long_option elt members.

Thu May 21 16:34:24 1992  Roland McGrath  (roland@wookumz.gnu.ai.mit.edu)

	* make.texinfo (Text Functions): Correct filter-out description.

Tue May 19 20:50:01 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* compatMakefile (realclean): Don't remove backup files.

	* main.c (decode_switches): Allocate ARGC+1 elts in `other_args'.

Sun May 17 16:38:48 1992  Roland McGrath  (roland@albert.gnu.ai.mit.edu)

	* Version 3.62.11.

Thu May 14 16:42:33 1992  Roland McGrath  (roland@albert.gnu.ai.mit.edu)

	* job.c (reap_children): Don't die if wait returns EINTR.

Wed May 13 18:28:25 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* job.c (reap_children): Always run the next command for a
	successful target.  If we are going to die, we don't want to leave
	the target partially made.

Tue May 12 00:39:19 1992  Roland McGrath  (roland@albert.gnu.ai.mit.edu)

	* job.c (construct_command_argv_internal): After loop, if we only
	have one word, check it for being a shell command.

	* main.c (decode_switches): Allocate ARGC slots in other_args to
	begin with, so we never need to worry about growing it.
	If we get a non-option arg and POSIXLY_CORRECT is in the
	environment, break out of the loop.  After the loop, add all remaining
	args to other_args list.

	* main.c (decode_switches): For positive_int and floating switches
	when optarg is nil, use next arg if it looks right (start with a
	digit, or maybe decimal point for floating).

	* variable.c (define_automatic_variables): Always set SHELL to
	default if it comes from the environment.  Set its export bit.
	* make.texinfo (Environment): Document change.

Mon May 11 00:32:46 1992  Roland McGrath  (roland@albert.gnu.ai.mit.edu)

	* Version 3.62.10.

	* compatMakefile (tags, TAGS): Use vars for cmds.
	(ETAGS, CTAGS): Define.

	* main.c (decode_switches): If a switches elt has a nil long_name,
	make the long option name elt be "".
	Fixed loop to not ignore all the options.

	* make.texinfo (Option Summary): Added long options.

	* main.c (switches): Changed -m's description to "-b".
	(decode_switches): When printing the usage message, don't print
	switches whose descriptions start with -.
	When constructing the list of names for switch -C, search the
	switches vector for switches whose descriptions are "-C".

	* main.c (switches): Call -S --no-keep-going, not --dont-keep-going.
	Call -I --include-dir, not --include-path.
	(long_option_aliases): Added --new == -W, --assume-new == -W,
	--assume-old == -o, --max-load == -l, --dry-run == -n, --recon == -n,
	--makefile == -f.

	* main.c (switches): Removed bogus "silent" elt.
	(long_option_aliases): Define new var.
	(decode_switches): Add long_option_aliases onto the end of the long
	options vector created for getopt_long.
	Look through long_option_aliases for extra names to list
	in usage message.

Sat May  9 00:21:05 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* main.c (log_working_directory): Fixed to properly not print the
	leaving message when we haven't printed the entering message.

Fri May  8 21:55:35 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* main.c (struct command_switch): Added elts `long_name',
	`description', and `argdesc'.
	(switches): Added initializers for new members.
	(decode_switches): Rewritten to use getopt_long.
	* compatMakefile (GETOPT, GETOPT_SRC): Define.
	(objs, srcs): Include them.

	* job.c (child_died): Renamed to dead_children; made static.
	(child_handler): Increment dead_children instead of setting child_died.
	(reap_children): Decrement dead_children instead of clearing
	child_died.  The point of all this is to avoid printing "waiting
	for unfinished jobs" when we don't actually need to block.
	This happened when multiple SIGCHLDs before reap_children was called.

	* job.c (reap_children): If ERR is set, so we don't call start_job
	on the child being reaped, instead set its command_state to
	cs_finished.
	(reap_children, child_handler, new_job): I added several
	debugging printf's while fixing this.  I left them in if (debug_flag)
	because they may be useful for debugging this stuff again.

Wed May  6 22:02:37 1992  Roland McGrath  (roland@albert.gnu.ai.mit.edu)

	* read.c (read_makefile): v_export is not 1.

Mon May  4 17:27:37 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.62.9.

	* variable.c (export_all_variables): New variable.
	(target_environment): Export variables whose `export' member is
	v_default if export_all_variables is set and their names are benign.
	* variable.h: Declare export_all_variables.
	* read.c (read_makefile): If export or unexport is given with no
	args, set or clear export_all_variables, respectively.

	* variable.c (target_environment): Exclude MAKELEVEL in the loop,
	so it isn't duplicated when we add it at the end.

Sun May  3 17:44:48 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* Version 3.62.8.

	* variable.h (struct variable): Added new member `export'.
	* variable.c (define_variable_in_set): Initialize it to v_default.
	(target_environment): Don't check for .NOEXPORT.
	Export variables whose `export' member is v_default and that would
	have been exported under .NOEXPORT, and variables whose `export'
	member is v_export.
	(try_variable_definition): Return the variable defined.
	* variable.h (try_variable_definition): Changed decl.
	* read.c (read_makefile): Recognize `export' and `unexport' directives.

Fri May  1 11:39:38 1992  Roland McGrath  (roland@albert.gnu.ai.mit.edu)

	* main.c (main) [POSIX]: Reversed args to sigaddset.

Thu Apr 30 17:33:32 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* job.c [POSIX || !USG] (unblock_sigs): New fn.
	(start_job): Block signals before forking.
	(new_job): Unblock signals after putting the new child on the chain.
	* main.c (main) [POSIX]: Use sigset_t fatal_signal_set instead of
	int fatal_signal_mask.

	* load.c [sgi] (LDAV_CVT): Define.

Wed Apr 29 17:15:59 1992  Roland McGrath  (roland@albert.gnu.ai.mit.edu)

	* Version 3.62.7.

	* load.c (load_average) [sgi]: Clear the high bit of the address
	from the symbol table before looking it up in kmem.

	* misc.c (fatal, makefile_fatal): Put *** in fatal error messages.
	(remake_file): No longer needed in message here.

	* main.c (die): Call reap_children with BLOCK==1.

Tue Apr 28 20:44:35 1992  Roland McGrath  (roland@albert.gnu.ai.mit.edu)

	* rule.c (freerule): Don't set LASTRULE->next if LASTRULE is nil.

Sun Apr 26 15:09:51 1992  Roland McGrath  (roland@albert.gnu.ai.mit.edu)

	* rule.c (count_implicit_rule_limits): Initialize LASTRULE to nil,
	not to head of chain.  Extract next ptr before we might do
	freerule, and use that for next iteration.
	(freerule): Still do next ptr frobbing if LASTRULE is nil.

Tue Apr 21 03:16:29 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* job.c (child_error): Removed extra %s from error msg format.

	* Version 3.62.6.

	* job.c (reap_children): Don't start later commands in a sequence
	if ERR is nonzero.

	* job.c (new_job): Always call reap_children with BLOCK==0 first thing.

	* job.c (reap_children): New function; work that used to be done in
	child_handler.
	(child_died): New global var.
	(child_handler): Now just sets child_died.
	(wait_for_children): Removed.
	(unknown_children_possible, block_signals, unblock_signals,
	push_signals_blocked_p, pop_signals_blocked_p): Removed.
	(child_execute_job): Removed call to unblock_signals.
	(new_job): Removed calls to push_signals_blocked_p and
	pop_signals_blocked_p.
	* job.h: Declare reap_children, not wait_for_children.
	* commands.c (fatal_error_signal), job.c (new_job),
	load.c [LDAV_BASED] (wait_to_start_job), main.c (die),
	remake.c (update_goal_chain), function.c (expand_function: `shell'):
	Changed wait_for_children calls to reap_children.
	Some needed to be loops to wait for all children to die.
	* commands.c (fatal_error_signal), main.c (main,
	log_working_directory), function.c (expand_function): Removed calls
	to push_signals_blocked_p and pop_signals_blocked_p.
	* job.h: Removed decls.

	* job.h: Added copyright notice.

Wed Apr 15 02:02:40 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* job.c (child_error): No *** for ignored error.

Tue Apr 14 18:31:21 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* implicit.c (DEBUGP2): Use do ... while (0) instead of if ... else to
	avoid compiler warnings.

	* read.c (parse_file_seq): Don't remove ./ when it is followed by a
	blank.

Mon Apr 13 21:56:15 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* make.h (DEBUGPR): Use do ... while (0) instead of if ... else to
	avoid compiler warnings.

	* remake.c (notice_finished_file): Run file_mtime on the also_make
	files, so vpath_search can happen.

	* GNUmakefile (tests): Use perl test suite from csa@sw.stratus.com.
	(alpha-files): Include test suite tar file.

Fri Apr  3 00:50:13 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* Version 3.62.5.

Wed Apr  1 05:31:18 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* remake.c (update_file, update_file_1): Do check_renamed on elts
	of dep chains when traversing them.  Something unrelated might have
	renamed one of the files the dep chain points to.

	* file.c (rename_file): If FILE has been renamed, follow its
	`renamed' ptr, so we get to the final real FILE.  Using the renamed
	ones loses because they are not in the hash table, so the removal
	code loops infinitely.

	* read.c (read_all_makefiles): Clobber null terminator into
	MAKEFILES expansion, so string passed to read_makefile is properly
	terminated.

Mon Mar 30 20:18:02 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* commands.c (set_file_variables): $* for archive member with
	explicit cmds is stem of member, not of whole `lib(member)'.

Thu Mar 26 15:24:38 1992  Roland McGrath  (roland@albert.gnu.ai.mit.edu)

	* Version 3.62.4.

Tue Mar 24 05:20:51 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* rule.c (new_pattern_rule): Rules are identical only if all their
	targets match (regardless of order).

Wed Mar 11 13:49:54 1992  Roland McGrath  (roland@geech.gnu.ai.mit.edu)

	* remake.c (remake_file): Changed error "no way to make" to "no
	rule to make".  Fiat Hugh.

	* make.texinfo (Last Resort): Describe %:: rules and new .DEFAULT
	behavior.

	* remake.c (update_file_1): Only use .DEFAULT cmds if FILE is not a
	target.

Tue Mar 10 18:13:13 1992  Roland McGrath  (roland@wookumz.gnu.ai.mit.edu)

	* remote-stub.c, remote-cstms.c (start_remote_job): Take new arg,
	environment to pass to child.
	* job.c (start_job): Pass it.

Mon Mar  9 19:00:11 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* file.c (enter_file): Also strip ./s here, to get command-line
	target names.

	* remote-cstms.c: Add comment telling people to leave me alone.

	* compatMakefile (manpage install): Remove target before copying.

Tue Mar  3 18:43:21 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* make.texinfo (Missing): Renamed to "Incompatibilities and ...".
	Added paragraph describing $? incompatibility with Unix and POSIX.2.

Sun Mar  1 15:50:54 1992  Roland McGrath  (roland@nutrimat.gnu.ai.mit.edu)

	* function.c (expand_function: `shell'): Don't declare fork or pipe.
	Use vfork instead of fork.

Tue Feb 25 22:05:32 1992  Roland McGrath  (roland@wookumz.gnu.ai.mit.edu)

	* make.texinfo (Chained Rules): Clarify .PRECIOUS to save
	intermediate files.

	* load.c [sun] (LDAV_CVT): Define to divide by FSCALE.

Sun Feb 16 02:05:16 1992  Roland McGrath  (roland@wookumz.gnu.ai.mit.edu)

	* Version 3.62.3.

Sat Feb 15 17:12:20 1992  Roland McGrath  (roland@wookumz.gnu.ai.mit.edu)

	* compatMakefile (makeinfo): Use emacs batch-texinfo-format fn.

Fri Feb 14 00:11:55 1992  Roland McGrath  (roland@wookumz.gnu.ai.mit.edu)

	* read.c (read_makefile): Correctly handle define & endef in ifdefs.

	* read.c (record_files): Pass arg for %s in error msg.

	* main.c (main) [__IBMR2, POSIX]: Use correct (a la USGr3) setvbuf
	call.

Wed Feb 12 12:07:39 1992  Roland McGrath  (roland@wookumz.gnu.ai.mit.edu)

	* make.texinfo (Libraries/Search): Say it does /usr/local/lib too.

Sun Feb  9 23:06:24 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* read.c (read_makefile): Check for extraneous `endef' when ignoring.

Thu Feb  6 16:15:48 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* Version 3.62.2.

Tue Feb  4 20:04:46 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* job.c (construct_command_argv_internal): Correctly ignore
	whitespace after backslash-NL.

Fri Jan 31 18:30:05 1992  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* compatMakefile: Ignore errors from chgrp and chmod when installing.

Wed Jan 29 18:13:30 1992  Roland McGrath  (roland@albert.gnu.ai.mit.edu)

	* main.c (main): When setting MAKELEVEL in the env to re-exec,
	allocate space so as not to clobber past the end of the old string.

	* make.h [HAVE_ALLOCA_H]: Include <alloca.h>
	* compatMakefile (defines): Document HAVE_ALLOCA_H.

Mon Jan 20 13:40:05 1992  Roland McGrath  (roland@albert.gnu.ai.mit.edu)

	* make.h [VFORK_MISSING]: Use fork instead.
	* compatMakefile (defines): Document same.

	* job.c (construct_command_argv_internal): Don't create an empty
	arg if backslash-NL is at beginning of word.

Sun Jan 19 16:26:53 1992  Roland McGrath  (roland@albert.gnu.ai.mit.edu)

	* main.c [DGUX]: Call setvbuf as for USGr3.

	* job.c (construct_command_argv_internal): Notice correctly that
	backslash-NL is the end of the arg (because it is replaced with a
	space).

Thu Jan 16 18:42:38 1992  Roland McGrath  (roland@albert.gnu.ai.mit.edu)

	* job.c (construct_command_argv_internal): If SHELL is nil, set it
	to default_shell before proceeding.

	* make.h [sgi]: No alloca.h, after all.

Wed Jan 15 12:30:04 1992  Roland McGrath  (roland@albert.gnu.ai.mit.edu)

	* read.c (multi_glob): Cons up the chain of the results of glob
	from back to front, so it comes out in forward order.

	* job.c (construct_command_argv_internal): Don't eat char following
	backslash-NL.

Mon Jan 13 19:16:56 1992  Roland McGrath  (roland@albert.gnu.ai.mit.edu)

	* Version 3.62.1.

	* default.c (default_variables) [ultrix]: GET=get, like USG.

	* job.c (construct_command_argv_internal): Remove tabs following
	backslash-NL combos in the input line, so they don't show up when
	that line is printed.

	* read.c (read_makefile): Don't collapse_continuations the line on
	input; do it on the copy we do remove_comments on.
	For rule lines, collapse_continuations the line after chopping
	";cmds" off the end, so we don't eat conts in the cmds.
	Give error for ";cmds" with no rule.
	* job.c (construct_command_argv_internal): Eat backslash-NL combos
	when constructing the line to recurse on for slow, too.

Sat Jan 11 02:20:27 1992  Roland McGrath  (roland@albert.gnu.ai.mit.edu)

	* file.c (enter_file): Don't strip leading `./'s.
	* read.c (parse_file_seq): Take new arg STRIP; if nonzero, do it here.
	* default.c (set_default_suffixes), function.c (string_glob),
	read.c (read_makefile), rule.c (install_pattern_rule): Change callers.

	* default.c (default_variables) [_IBMR2]: FC=xlf

	* job.c (construct_command_argv_internal): Turn backslash-NL and
	following whitespace into a single space, rather than just eating
	the backslash.

	* make.texinfo (Copying): @include gpl.texinfo, rather than
	duplicating its contents.

Fri Nov  8 20:06:03 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* job.c (construct_command_argv_internal): Make sure not to bother
	processing an empty line.

	* Version 3.62.0.

	* job.c (construct_command_argv_internal): Always recurse for slow;
	simple case didn't handle finding newlines.

Tue Nov  5 18:51:10 1991  Roland McGrath  (roland@wookumz.gnu.ai.mit.edu)

	* job.c (construct_command_argv_internal): Set RESTP properly when
	slow; don't \ify past a newline.

Fri Nov  1 19:34:28 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)

	* make.h [sgi]: #include <alloca.h>.



See ChangeLog.1 for earlier changes.
