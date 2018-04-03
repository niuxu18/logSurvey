+Tue Oct 29 20:57:36 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* Version 3.62.
+
+	* remake.c (update_file_1): Check for deps still running before
+	giving up if any dep has failed.
+
+Sat Oct 26 16:20:00 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* make.h [uts]: #undef S_ISREG and S_ISDIR if defined.
+
+Fri Oct 25 19:50:39 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* Version 3.60.17.
+
+Thu Oct 24 16:58:36 1991  Roland McGrath  (roland@wookumz.gnu.ai.mit.edu)
+
+	* job.c (start_job): Don't check for empty cmds before tweaking the
+	command_ptr.  Just let construct_command_argv do it.
+
+Tue Oct 22 20:21:03 1991  Roland McGrath  (roland@wookumz.gnu.ai.mit.edu)
+
+	* remake.c, arscan.c [POSIX]: <fcntl.h> instead of <sys/file.h>.
+
+	* make.h [POSIX]: Declare vfork as pid_t.
+
+Mon Oct 21 15:37:30 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* Version 3.60.16.
+
+	* job.c (construct_command_argv, construct_command_argv_internal):
+	Take new 2nd arg RESTP.  If non-NULL, stop parsing at newline, and
+	store addr of the NL in *RESTP.
+	(start_job): Don't chop expanded cmd lines up; use above code to do it.
+	* function.c (expand_function: `shell'): Pass RESTP==NULL.
+
+Sat Oct 19 15:36:34 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* Version 3.60.15.
+
+Fri Oct 18 15:26:55 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* job.c (start_job): If on the same cmds->command_lines elt, look
+	at cmds->lines_recurse[CHILD->command_line - 1] instead of
+	[CHILD->command_line].
+
+	* dir.c [sgi]: <sys/dir.h>, not ndir or anything else.
+
+Thu Oct 17 16:28:55 1991  Roland McGrath  (roland@geech.gnu.ai.mit.edu)
+
+	* file.c (print_file_data_base): Remove unused var.
+
+	* make.h [NeXT]: No #define ANSI_STRING.
+
+Tue Oct 15 20:08:41 1991  Roland McGrath  (roland@geech.gnu.ai.mit.edu)
+
+	* Version 3.60.14.
+
+Fri Oct 11 16:23:52 1991  Roland McGrath  (roland@geech.gnu.ai.mit.edu)
+
+	* make.h: Use PATH_MAX for getwd defn.
+
+	* make.h: Move getcwd/getwd outside of #ifndef POSIX, and make it
+	#if USG||POSIX.
+
+Thu Oct 10 11:53:31 1991  Roland McGrath  (roland@geech.gnu.ai.mit.edu)
+
+	* Version 3.60.13.
+
+	* read.c (read_all_makefiles): When processing MAKEFILES, save the
+	malloc'd ptr to be freed, instead of freeing part-way thru it.
+
+	* remake.c (update_file_1): Don't tweak FILE->also_make.
+	(update_file): Do it here.  After calling update_file_1, set the
+	command_state, update_status, and updated members of each also_make
+	elt to FILE's values.
+
+Tue Oct  8 14:56:04 1991  Roland McGrath  (roland@albert.gnu.ai.mit.edu)
+
+	* Version 3.60.12.
+
+	* remake.c (notice_finished_file): Set command_state of FILE and
+	its also_make chain to cs_finished here.
+	* commands.c (execute_file_commands), job.c (child_handler),
+	remake.c (remake_file): Don't set it before calling
+	notice_finished_file.
+
+	* file.h (struct file): Changed `also_make' to struct dep *.
+	* job.c (delete_child_targets), file.c (print_file_data_base),
+	remake.c (notice_finished_file), implicit.c (pattern_search):
+	Use dep chain instead of array of file names.
+
+Mon Oct  7 17:04:33 1991  Roland McGrath  (roland@geech.gnu.ai.mit.edu)
+
+	* Version 3.60.11.
+
+	* arscan.c: Declare open.
+	* misc.c: Declare {get,set}{re,}[ug]id.
+	* variable.c (target_environment): Declare getenv.
+
+Sat Oct  5 15:13:03 1991  Roland McGrath  (roland@albert.gnu.ai.mit.edu)
+
+	* make.h [NeXT]: <string.h> instead of <strings.h>.
+
+Fri Oct  4 16:05:41 1991  Roland McGrath  (roland@albert.gnu.ai.mit.edu)
+
+	* default.c (default_suffixes, defualt_suffix_rules): Add .texi
+	just like .texinfo.
+
+	* Version 3.60.10.
+
+	* job.c: Move vfork decl into make.h.
+
+Fri Sep 27 18:45:30 1991  Roland McGrath  (roland@albert.gnu.ai.mit.edu)
+
+	* compatMakefile (glob/libglob.a): Pass CC value to submake.
+
+Thu Sep 26 00:08:15 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* load.c (load_average): Made not static.
+
+	* load.c [ultrix && vax]: Define LDAV_TYPE and LDAV_CVT for Ultrix 4.2.
+
+Tue Sep 24 00:17:20 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* Version 3.60.9.
+
+	* read.c (record_files): Warn about extra cmds even if the target's
+	name begins with a dot.  I think the lusers can handle this.
+
+Mon Sep 23 22:33:26 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* make.h, arscan.c: Don't declare bcmp, bzero, or bcopy if they're
+	#define'd.
+	* make.h: Declare write and open.
+
+	* default.c (default_suffixes, default_suffix_rules,
+	default_variables): Add .C just like .cc.
+	* make.texinfo (Catalogue of Rules): Document .C.
+
+	* make.man (-w): Fix gramo.
+
+Fri Sep 20 17:18:16 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* make.h: No text after #endif.
+
+Sun Sep 15 16:20:46 1991  Roland McGrath  (roland@albert.gnu.ai.mit.edu)
+
+	* Version 3.60.8.
+
+	* implicit.c (pattern_search): In the second pass, recurse on rule
+	deps that don't have a %.  Why did I make it not do this?
+
+Fri Sep 14 18:29:39 1991  Roland McGrath  (roland@geech.gnu.ai.mit.edu)
+
+	* read.c (record_files): For extra cmds, use the last ones given.
+	If the target's name doesn't begin with a dot (bletch!!), emit a
+	two-line warning, one line giving the old cmds' location and the
+	other the new cmds' location.
+
+	* misc.c (makefile_error, makefile_fatal): New fns.
+	* make.h: Declare them.
+	* Use them instead of error/fatal for all msgs including a file
+	name and line number.
+
+Thu Sep 13 16:35:54 1991  Roland McGrath  (roland@albert.gnu.ai.mit.edu)
+
+	* make.h: Declare define_default_variables.
+	Declare ar_parse_name, instead of ar_name_parse (M-t).
+
+Mon Sep 10 18:35:40 1991  Roland McGrath  (roland@wookumz.gnu.ai.mit.edu)
+
+	* Version 3.60.7.
+
+	* make.texinfo (Variables: Setting): Say whitespace is removed if
+	"immediately after =", rather than simply "after =".
+
+	* job.c: Don't declare wait #ifdef POSIX.
+
+	* make.h [__GNUC__]: #undef alloca and then #define it.
+
+	* main.c (main): When pruning makefiles which might loop from the
+	read_makefiles chain, look at all `prev' entries of double-colon rules.
+
+Fri Sep  7 00:41:53 1991  Roland McGrath  (roland@albert.gnu.ai.mit.edu)
+
+	* main.c (main): Only remove makefiles with cmds but no deps from
+	the list of makefiles to be rebuilt if they are :: targets.
+	: targets with cmds and no deps are not dangerous.
+
+Wed Sep  5 17:35:51 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* compatMakefile (defines): Add comment that some compilers take
+	ENUM_BITFIELDS but produce bogus code.
+	(LOAD_AVG): Fix examples to \ "s.
+	(LOADLIBES): Add comment that SGI Irix needs -lmld for nlist.
+
+Tue Sep  4 20:26:26 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* Version 3.60.6.
+
+Fri Aug 30 19:34:04 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* remake.c (update_file_1): When checking the command_state of
+	deps, check through the prev chain.
+	(update_goal_chain): When a target is finished, start checking its
+	prev (if it has one) instead.
+
+Wed Aug  7 17:32:03 1991  Roland McGrath  (roland@geech.gnu.ai.mit.edu)
+
+	* rule.c (convert_to_pattern): Allow files with deps to define
+	suffix rules (really this time).
+
+Mon Aug  5 17:09:21 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* misc.c (user_access, make_access): Do saved-IDs (USG) flavor
+	#ifdef POSIX.
+
+	* file.c (enter_file): Strip ./s here.
+	* read.c (parse_file_seq): Not here.
+
+Tue Jul 23 23:34:30 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* compatMakefile: Added comment that -lPW alloca is broken on HPUX.
+
+Thu Jul 18 03:10:41 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* Version 3.60.5.
+
+	* read.c (read_makefile): Ignore lines containing chars that are
+	all isspace, not just all isblank.
+
+	* make.texinfo (Copying): @include gpl.texinfo, rather than copying
+	the text.
+	* gpl.texinfo: New file (symlink to /gd/gnu/doc/gpl.texinfo).
+	* GNUmakefile: Put gpl.texinfo in distribution.
+
+Tue Jul 16 12:50:35 1991  Roland McGrath  (roland@albert.gnu.ai.mit.edu)
+
+	* make.h: #define _GNU_SOURCE before including headers.
+	Include <ctype.h> and define isblank if <ctype.h> doesn't.
+	* commands.c: Don't include <ctype.h> here.
+	* *.c: Use isblank instead of explicit ' ' || '\t'.
+
+Mon Jul 15 17:43:38 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* function.c (expand_function: `filter'/`filter-out'): Fixed to not
+	loop infinitely.
+
+Fri Jul 12 12:18:12 1991  Roland McGrath  (roland@albert.gnu.ai.mit.edu)
+
+	* function.c (expand_function: `filter'/`filter-out'): Rewritten to
+	handle filter-out of multiple patterns properly.  Also no longer
+	mallocs and reallocs for temp array; uses alloca and a linked-list
+	instead.
+
+Wed Jul 10 22:34:54 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* Version 3.60.4.
+
+	* make.texinfo: Moved some @groups that were outside @examples to
+	be inside them.
+
+	* load.c [apollo] (load_average): Define using special syscall for
+	Apollo DOMAIN/OS SR10.n.
+
+Thu Jul  4 12:32:53 1991  Roland McGrath  (roland@albert.gnu.ai.mit.edu)
+
+	* make.texinfo (Missing): Added Unix excessive implicit rule
+	search; mention that POSIX.2 doesn't require any of the missing
+	features.
+	(Top): Updated printed manual price to $15.
+
+Wed Jul  3 18:17:50 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* file.c (rename_file): Carry over last_mtime when merging files.
+	* remake.c (f_mtime): Tail-recurse after renaming VPATH file, to
+	check for saved date in existing renamed-to file.
+
+	* remote-cstms.c (start_remote_job): Use PATH_VAR.
+
+	* commands.c [POSIX || __GNU_LIBRARY__]: Don't declare getpid.
+
+	* compatMakefile (glob-{clean,realclean}): Run clean/realclean in glob.
+	(clean, realclean): Require those.
+
+	* make.h: Always declare environ.
+	Don't declare old glob functions.
+
+	* GNUmakefile: Make no-lib deps for load.c and remote.c.
+
+Tue Jul  2 18:35:20 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* Version 3.60.3.
+
+Mon Jul  1 16:58:30 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* read.c (multi_glob): Don't pass GLOB_QUOTE flag to glob.
+
+	* make.h [POSIX]: Include <unistd.h>, and don't declare things that
+	should be there.
+
+	* main.c (main) [USG && sgi]: malloc a buffer for broken sgi stdio.
+
+Sat Jun 29 11:22:21 1991  Roland McGrath  (roland@albert.gnu.ai.mit.edu)
+
+	* function.c (expand_function: `shell'): Use alloca for the error
+	msg buffer, instead of assuming an arbitrary max size.
+
+Fri Jun 28 18:15:08 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* job.c [POSIX] (search_path): Do real 1003.1 goop to get NGROUPS_MAX.
+
+Wed Jun 26 11:04:44 1991  Roland McGrath  (roland@albert.gnu.ai.mit.edu)
+
+	* default.c (define_default_variables): New fn.
+	(install_default_implicit_rules): Code for above fn moved there.
+	* main.c (main): Do define_default_variables before reading the
+	makefile.
+
+Tue Jun 25 17:30:46 1991  Roland McGrath  (roland@albert.gnu.ai.mit.edu)
+
+	* main.c (main): Quote ; in MAKEOVERRIDES.
+
+Tue Jun 18 13:56:30 1991  Roland McGrath  (roland@albert.gnu.ai.mit.edu)
+
+	* compatMakefile: Fixed typo in comment.
+
+Tue Jun 11 00:14:59 1991  Roland McGrath  (roland@albert.gnu.ai.mit.edu)
+
+	* Version 3.60.2.
+
+Mon Jun 10 14:46:37 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* make.h: Always include <sys/types.h>.
+	[POSIX]: Include <limits.h> and #define MAXPATHLEN to be PATH_MAX.
+
+	* default.c (default_suffix_rules: .texinfo.dvi): Use $(TEXI2DVI).
+	(default_variables): Define TEXI2DVI.
+
+Thu Jun  6 16:49:19 1991  Roland McGrath  (roland@geech.gnu.ai.mit.edu)
+
+	* Version 3.60.1.
+
+	* make.h (SIGNAL): Cast handler arg to SIGHANDLER type.
+
+Wed Jun  5 06:00:43 1991  Roland McGrath  (roland@geech.gnu.ai.mit.edu)
+
+	* read.c (multi_glob): Use POSIX.2 `glob' function.
+	If a glob pattern matches nothing, leave it as is (a la sh, bash).
+	Also, if can't find USER for ~USER, leave it as is (a la bash).
+
+Mon Jun  3 16:36:00 1991  Roland McGrath  (roland@albert.gnu.ai.mit.edu)
+
+	* compatMakefile: Rewrote comments about -Ds to be easier to use.
+
+	* make.h, arscan.c, remake.c, main.c, dir.c, job.c: Changed tests
+	of _POSIX_SOURCE to POSIX.
+
+	* job.c: Take getdtablesize out of #ifdef __GNU_LIBRARY__.
+	Put separately #ifdef USG.
+
+	* COPYING: Replaced with version 2.
+	* Changed copyright notices to refer to GPL v2.
+
+Thu May 30 00:31:11 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* make.h: Don't declare sigblock for POSIX.
+
+	* main.c (main, log_working_directory) [USG]: Get getcwd failure
+	mode from errno, not passed buffer like BSD getwd.
+
+	* misc.c (child_access): New fn to set access for a child process;
+	like user_access, but you can't change back.
+	* make.h: Declare it.
+	* job.c (exec_command): Use it in place of user_access.
+
+Wed May 29 23:28:48 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* default.c (default_variables) [pyr]: PC = pascal.
+
+Tue May 28 20:24:56 1991  Roland McGrath  (roland@churchy.gnu.ai.mit.edu)
+
+	* variable.c (print_variable): Put a newline before `endef'.
+
+Sat May 25 02:39:52 1991  Roland McGrath  (roland@geech.gnu.ai.mit.edu)
+
+	* Version 3.60.
+
+Wed May 22 19:41:37 1991  Roland McGrath  (roland@geech.gnu.ai.mit.edu)
+
+	* Version 3.59.5.
+
+Thu May 16 13:59:24 1991  Roland McGrath  (roland@geech.gnu.ai.mit.edu)
+
+	* main.c (main): Do USGr3 setvbuf behavior #ifdef APOLLO.
+	Don't handle SIGCHLD #ifdef USG (Apollo is USG but defines SIGCHLD).
+
+Fri May 10 14:59:33 1991  Roland McGrath  (roland@geech.gnu.ai.mit.edu)
+
+	* remake.c [sgi]: Don't include <sys/file.h>.
+
+Wed May  8 01:54:08 1991  Roland McGrath  (roland@geech.gnu.ai.mit.edu)
+
+	* make.h (SIGHANDLER): #define as (void *) #if __STDC__,
+	else (int (*)()).
+	(SIGNAL): Use it to cast return value.
+	* main.c (main): Cast SIG_IGN to SIGHANDLER when comparing.
+	* job.c (block_signals, unblock_signals): Use SIGNAL instead of signal.
+
+	* main.c: Declare mktemp to return char*, not int.
+
+	* job.c (new_job): Don't increment files_remade.
+	* remake.c (notice_finished_file): Do it here.
+
+	* read.c (do_define): Don't clobber DEFINITION[-1] on empty defns.
+	Free storage that is no longer needed.
+
+Wed Apr 24 20:49:48 1991  Roland McGrath  (roland at churchy.gnu.ai.mit.edu)
+
+	* misc.c (message): New fn to print informational msgs with
+	leading "make: " or "make[N]: ".
+	* make.h: Declare it.
+	* remake.c (update_file): Use it instead of printf.
+
+Fri Apr 19 05:52:45 1991  Roland McGrath  (roland at churchy.gnu.ai.mit.edu)
+
+	* main.c (main): When there are no targets, if there were no
+	makefiles, print a different error message, which mentions makefiles.
+
+Tue Apr 16 03:22:45 1991  Roland McGrath  (roland at geech.gnu.ai.mit.edu)
+
+	* remake.c (update_file): Print "nothing to be done" instead of "is
+	up to date" if FILE->cmds == 0.
+
+	* job.c [!WIFEXITED]: Define if not already defined.
+
+Thu Apr 11 18:00:50 1991  Roland McGrath  (roland at wookumz.gnu.ai.mit.edu)
+
+	* arscan.c (ar_name_equal): Fixed truncation comparison.
+
+Tue Apr  2 16:17:35 1991  Roland McGrath  (roland at churchy.gnu.ai.mit.edu)
+
+	* glob.c: Use common version from djm.
+	* dir.c: Snarfed #ifdef mess for <dirent.h> or whatever from glob.c.
+	(dir_file_exists_p): Ignore directory entries with d_ino==0.
+
+Mon Apr  1 20:49:45 1991  Roland McGrath  (roland at albert.gnu.ai.mit.edu)
+
+	* Version 3.59.4.
+
+Fri Mar 29 19:16:18 1991  Roland McGrath  (roland at albert.gnu.ai.mit.edu)
+
+	* job.c (free_child): Free CHILD->environment and its elts.
+
+Sat Mar 23 14:08:09 1991  Roland McGrath  (roland at albert.gnu.ai.mit.edu)
+
+	* read.c (read_makefile): Don't ignore lines containing only
+	comments if they start with a tab.  Such lines should be passed to
+	the shell for it to decide about the comments.
+
+	* job.c (free_child): Free CHILD->command_lines and its elts, not
+	CHILD->commands (which is obsolete).
+	* job.h, job.c: Remove obsolete `commands' member of `struct child'.
+
+Sun Mar 17 18:40:53 1991  Roland McGrath  (roland at albert.ai.mit.edu)
+
+	* remake.c (update_file): Print a msg for a top-level up-to-date
+	phony target (a different one than for a real file).
+
+	* read.c (conditional_line): Boundary check so we don't check the
+	value of the -1th elt of the stack (which is bogus).
+
+Sat Mar 16 16:58:47 1991  Roland McGrath  (roland at albert.ai.mit.edu)
+
+	* read.c (conditional_line): Don't evaluate an if* when we're
+	already ignoring.  Instead, just push a new level, with a value of
+	1, to keep ignoring.
+
+Tue Mar 12 00:16:52 1991  Roland McGrath  (roland at geech.ai.mit.edu)
+
+	* Version 3.59.3.
+
+Mon Mar 11 23:56:57 1991  Roland McGrath  (roland at geech.ai.mit.edu)
+
+	* job.c (construct_command_argv_internal): Quote backslashes
+	when building the shell -c line.
+
+Fri Mar  8 01:40:18 1991  Roland McGrath  (roland at geech.ai.mit.edu)
+
+	* job.c (exec_command): Call user_access rather than setgid(getgid()).
+
+	* misc.c (remove_comments): Renamed from collapse_line; took out
+	collapse_continuations call.
+	* make.h: Change decl.
+	* read.c (read_makefile): Collapse continuations on the line buffer
+	immediately after reading it.  Call remove_comments rather than
+	collapse_line (which is now defunct).
+
+Thu Feb 21 18:06:51 1991  Roland McGrath  (mcgrath at cygint.cygnus.com)
+
+	* misc.c (user_access, make_access): New fns to toggle btwn permissions
+	for user data (files and spawning children), and permissions for make
+	(for taking the load average, mostly).
+	* make.h: Declare them.
+	* job.c (start_job): Call make_access before wait_to_start_job, and
+	user_access after.
+	* main.c (main): Call user_access before doing much.
+
+Mon Feb  3 15:02:03 1991  Roland McGrath  (roland at albert.ai.mit.edu)
+
+	* Version 3.59.2.
+
+Tue Jan 29 20:30:50 1991  Roland McGrath  (roland at cygint.cygnus.com)
+
+	* read.c (read_all_makefiles): Use allocated_variable_expand to expand
+	`$(MAKEFILES)', since the results are used across calls to
+	read_makefile, which could clobber them.
+
+Wed Jan 23 00:24:10 1991  Roland McGrath  (roland at cygint.cygnus.com)
+
+	* main.c (main): Call install_default_implicit_rules after reading
+	makefiles, not before.
+	* default.c (install_default_implicit_rules): If a suffix-rule file
+	entry has cmds, don't give it any from default_suffix_rules.
+
+Fri Jan 17 17:39:49 1991  Roland McGrath  (roland at albert.ai.mit.edu)
+
+	* arscan.c: Added support for AIX archives.
+
+	* remake.c: Don't include ar.h.
+	* main.c: Removed unused atol decl.
+	* arscan.c (ar_scan): Declare arg FUNCTION to return long int.
+	* ar.c (ar_touch): Don't perror for an invalid archive.
+	* make.h: Declare lseek as long int.
+
+	* job.c [hpux]: Define getdtablesize a la USG.
+
+Sun Jan 12 21:08:34 1991  Roland McGrath  (roland at albert.ai.mit.edu)
+
+	* Version 3.59.1.
+
+Fri Jan 10 03:48:08 1991  Roland McGrath  (roland at albert.ai.mit.edu)
+
+	* job.c (search_path): Take new arg, place to put full pathname (rather
+	than mallocing it).
+	(exec_command): Pass it, using auto storage.
+
+	* main.c (print_version): Updated copyright years.
+
+Wed Jan  8 19:46:19 1991  Roland McGrath  (roland at albert.ai.mit.edu)
+
+	* job.c [_POSIX_SOURCE]: Just #include <sys/wait.h>, and define macro
+	WAIT_NOHANG in terms of waitpid.
+	[!_POSIX_SOURCE && (HAVE_SYS_WAIT || !USG)]: Don't #include <signal.h>
+	(make.h does).
+	Define macro WAIT_NOHANG in terms of wait3.
+	(child_handler): #ifdef on WAIT_NOHANG, not HAVE_SYS_WAIT || !USG.
+	Use WAIT_NOHANG macro instead of wait3.
+
+	* file.h (struct file.command_state): Remove unused elt.
+
+Wed Dec 26 18:10:26 1990  Roland McGrath  (roland at albert.ai.mit.edu)
+
+	* commands.c (set_file_variables): If FILE got its commands from
+	.DEFAULT, make $< == $@ (4.3 BSD/POSIX.2d11 compat).
+
+Mon Dec 24 17:36:27 1990  Roland McGrath  (roland at albert.ai.mit.edu)
+
+	* default.c (default_variables): Rename 2nd LINK.s defn to LINK.S.
+
+Fri Dec 14 15:05:25 1990  Roland McGrath  (roland at albert.ai.mit.edu)
+
+	* vpath.c (selective_vpath_search): Check for makefile-mentioned before
+	checking for actual existence.  The old order loses if the containing
+	directory doesn't exist (but a rule might make it).
+
+	* make.h [__GNUC__]: Don't #define alloca if already #define'd.
+
+	* rule.c (convert_to_pattern): Don't look at the target constructed for
+	the empty rule when making the null-suffix rule.  Construct it over
+	again, since the former may have been freed already.
+
+Thu Dec 13 17:21:03 1990  Roland McGrath  (roland at churchy.ai.mit.edu)
+
+	* make.h [__GNU_LIBRARY__]: Include <unistd.h> to get random fn decls.
+
+Wed Dec 12 17:12:59 1990  Roland McGrath  (roland at churchy.ai.mit.edu)
+
+	* make.h, arscan.c, glob.c: Only include <memory.h> #ifdef USG.
+
+	* variable.c (define_variable_in_set): Replace env_overrides check that
+	wasn't really redundant (undoing Sep 28 change).  Add comment saying
+	why this check is necessary.
+
+	* job.c, main.c [DGUX]: Needs siglist like USG.
+
+Mon Dec 11 01:19:29 1990  Roland McGrath  (roland at albert.ai.mit.edu)
+
+	* default.c [M_XENIX]: For rules that are different for Xenix, use the
+	generic Unix version #ifdef __GNUC__.
+
+	* main.c [M_XENIX]: Use USGr3-style setvbuf call.
+
+	* read.c (find_percent): Do backslash folding correctly, not leaving
+	extra crud on the end of the string.
+
+Sun Dec 10 21:48:36 1990  Roland McGrath  (roland at albert.ai.mit.edu)
+
+	* job.c: Don't declare wait3 if it's #defined.
+
+	* GNUmakefile, compatMakefile, make.texinfo: Change make-info
+	to make.info.
+
+Thu Dec  7 21:20:01 1990  Roland McGrath  (roland at churchy.ai.mit.edu)
+
+	* make.h [STDC_HEADERS || __GNU_LIBRARY__ || _POSIX_SOURCE]: Use
+	ANSI <string.h> and names for str/mem functions.
+	Use <stdlib.h> to declare misc fns rather than explicit decls.
+	[_POSIX_SOURCE]: Don't declare kill (<signal.h> will).
+	Include <sys/types.h> before <signal.h> because some braindead
+	nonconformant 1003.1 implementation needs it.
+	* misc.c: Don't declare malloc, realloc.  Do it in make.h.
+	* arscan.c, glob.c: Use sequence for string fns from make.h verbatim.
+	* make.h (S_ISDIR, S_ISREG): Declare if necessary.
+	* commands.c (delete_child_targets), job.c (search_path), read.c
+	(construct_include_path): Use S_ISfoo(m) instead of
+	(m & S_IFMT) == S_IFfoo.
+	* dir.c, glob.c [_POSIX_SOURCE]: Use dirent.
+
+Wed Nov 29 22:53:32 1990  Roland McGrath  (roland at geech.ai.mit.edu)
+
+	* Version 3.59.
+
+Tue Nov 28 16:00:04 1990  Roland McGrath  (roland at churchy.ai.mit.edu)
+
+	* arscan.c (ar_name_equal) [APOLLO]: Don't do `.o' hacking.  On Apollos
+	the full file name is elsewhere, and there is no length restriction (or
+	so I'm told).
+
+Thu Nov 23 17:33:11 1990  Roland McGrath  (roland at albert.ai.mit.edu)
+
+	* load.c [hp300 && BSD] (LDAV_CVT): Define for this system.
+
+Tue Nov 21 07:58:40 1990  Roland McGrath  (roland at albert.ai.mit.edu)
+
+	* read.c (record_files): Fix trivial bug with deciding to free storage
+	for a file name.
+
+Thu Nov 16 06:21:38 1990  Roland McGrath  (roland at geech.ai.mit.edu)
+
+	* compatMakefile ($(bindir)/make): Install it setgid kmem.
+
+Thu Nov  1 16:12:55 1990  Roland McGrath  (roland at churchy.ai.mit.edu)
+
+	* GNUmakefile (make-*.tar.Z): Use `h' option to tar (dereference
+	symlinks), to grab texinfo.tex from wherever it lives.
+
+Tue Oct 30 16:15:20 1990  Roland McGrath  (roland at churchy.ai.mit.edu)
+
+	* Version 3.58.13.
+
+Fri Oct 26 14:33:34 1990  Roland McGrath  (roland at churchy.ai.mit.edu)
+
+	* GNUmakefile: make-*.tar.Z: Include texinfo.tex.
+
+Tue Oct 23 19:34:33 1990  Roland McGrath  (roland at churchy.ai.mit.edu)
+
+	* main.c (define_makeflags): When there are no flags to write, make
+	sure the array has two leading nulls, since `MAKEFLAGS' is defined from
+	&flags[1].
+
+	* main.c (default_keep_going_flag): New variable (constant one).
+	(command_switches: -k, -S): Use above for default value.
+	(define_makeflags): Only write flag/flag_off switches if they are on,
+	and either there is no default value, or they are not the default.
+
+Mon Oct 22 16:14:44 1990  Roland McGrath  (roland at churchy.ai.mit.edu)
+
+	* main.c (struct command_switch): New member `no_makefile'.
+	(command_switches: -n, -q, -t): Set no_makefile == 1.
+	(define_makeflags): Take new arg MAKEFILE: if nonzero, don't use
+	options whose `no_makefile' flags are set.
+	(main): Call define_makeflags with MAKEFILE==1 before remaking
+	makefiles, and again with MAKEFILE==0 before remaking goals.
+
+Tue Oct  2 17:16:45 1990  Roland McGrath  (roland at geech.ai.mit.edu)
+
+	* Version 3.58.12.
+
+Mon Oct  1 15:43:23 1990  Roland McGrath  (roland at churchy.ai.mit.edu)
+
+	* arscan.c [HPUX]: Use PORTAR==1 format.
+
+Sat Sep 29 16:38:05 1990  Roland McGrath  (roland at churchy.ai.mit.edu)
+
+	* make.h, remake.c, arscan.c: Don't declare `open'.
+
+Fri Sep 28 04:46:23 1990  Roland McGrath  (roland at churchy.ai.mit.edu)
+
+	* variable.c (define_variable_in_set): Remove redundant -e check.
+
+Wed Sep 26 00:28:59 1990  Roland McGrath  (roland at geech.ai.mit.edu)
+
+	* job.c (start_job): Set RECURSIVE from the right elt of
+	CHILD->file->cmds->lines_recurse.
+
+	* commands.c (chop_commands): Don't botch the line count for allocating
+	CMDS->lines_recurse.
+
+	* Version 3.58.11.
+
+	* job.c (start_job): Don't always increment CHILD->command_line!  Only
+	do it when CHILD->command_ptr has run out!  (Dumb bug.  Sigh.)
+
+Thu Sep 20 02:18:51 1990  Roland McGrath  (roland at geech.ai.mit.edu)
+
+	* GNUmakefile [ARCH]: Give explicit rule for remote.{c,dep} to use
+	variable `REMOTE' for more flags.
+	($(prog)): Link in $(LOADLIBES).
+
+Wed Sep 19 02:30:36 1990  Roland McGrath  (roland at churchy.ai.mit.edu)
+
+	* commands.h (struct commands): New member `ncommand_lines', the number
+	of elts in `command_lines' et al.
+	* commands.c (chop_commands): Set `ncommand_lines' elt of CMDS, and
+	don't put a nil pointer at the end of `command_lines'.
+	* job.h (struct child): New member `command_lines' to hold
+	variable-expanded command lines.
+	* job.c (new_job): Store expanded command lines in `command_lines'
+	member of new child.  Don't clobber FILE->cmds.
+	(start_job): Use CHILD->command_lines in place of
+	CHILD->file->cmds->command_lines.
+
+	* variable.h, variable.c, job.c, expand.c: Undo yesterday's change,
+	which is no longer necessary since we have cleverly avoided the issue.
+
+	* job.c (start_job): Don't variable-expand each command line.
+	(new_job): Do them all here, storing the expansions in the array.
+
+Tue Sep 18 01:23:13 1990  Roland McGrath  (roland at churchy.ai.mit.edu)
+
+	* variable.h (struct variable): Remove `expanding' member.
+	* variable.c (define_variable_in_set): Don't initialize it.
+	* expand.c (struct variable_expanding): New type, a linked list
+	containing `struct variable' pointers.
+	(variables_expanding): New variable, the chain of variables currently
+	being expanded.
+	(recursively_expand): Don't test and set `expanding' member.
+	Instead, run through the `variables_expanding' chain looking for a link
+	referring to V to find self-reference.  Add a new link to the chain,
+	describing V, before recursive expansion, and pop it off afterward.
+	* job.c (child_handler): Save `variables_expanding' and clear it before
+	calling start_job, and restore it afterward.  This avoids major lossage
+	when the SIGCHLD comes in the middle of variable expansion.
+
+Mon Sep 17 14:46:26 1990  Roland McGrath  (roland at geech.ai.mit.edu)
+
+	* job.c, commands.c: Don't define sigmask.
+	* make.h: Put it here instead.
+
+	* variable.c (target_environment): If `.NOEXPORT' was specified as a
+	target, only export command-line and environment variables, and
+	file-origin variables that were in the original environment.
+
+	* make.man: Add missing ?roff control for `-I' option description.
+
+Thu Sep 13 14:10:02 1990  Roland McGrath  (roland at churchy.ai.mit.edu)
+
+	* load.c [UMAX]: Move #include <sys/sysdefs.h> to [not UMAX_43].
+
+Wed Sep 12 15:10:15 1990  Roland McGrath  (roland at churchy.ai.mit.edu)
+
+	* expand.c (recursively_expand): Don't use `reading_filename' and
+	`reading_lineno_ptr' if they're nil.
+
+Thu Aug 30 17:32:50 1990  Roland McGrath  (roland at geech)
+
+	* Version 3.58.10.
+
+Tue Aug 28 04:06:29 1990  Roland McGrath  (roland at churchy.ai.mit.edu)
+
+	* job.c [USG] (unknown_children_possible): New variable, set nonzero
+	when it's possible for children not in the `children' chain to die.
+	(block_signals) [USG]: Set it.
+	(unblock_signals) [USG]: Clear it.
+	(child_handler) [USG]: Don't complain about unknown children if
+	`unknown_children_possible' is set.
+
+	* read.c (do_define): Make sure there's enough space for the newline,
+	so we don't write off the end of allocated space.
+
+	* arscan.c (ar_name_equal): Fixed to work when MEM is AR_NAMELEN-1 but
+	NAME is not the same length.
+
+Sat Aug 25 16:17:14 1990  Roland McGrath  (roland at geech)
+
+	* job.c (construct_command_argv_internal): Use a static char array for
+	a constant, since old C has no auto aggregate initializers.
+
+Thu Aug 23 16:11:03 1990  Roland McGrath  (roland at churchy.ai.mit.edu)
+
+	* job.c (search_path): If PATH is nil or "" use a default path.
+
+Wed Aug 22 01:05:32 1990  Roland McGrath  (roland at churchy.ai.mit.edu)
+
+	* Version 3.58.9.
+
+	* job.c (exec_command): Don't take PATH and SHELL args.  Get them from
+	ENVP.
+	(child_execute_job): Don't take FILE arg, and don't pass path and shell
+	to exec_command.
+	(start_job): Don't pass FILE arg to child_execute_job.
+	* function.c (expand_function: `shell'): Ditto.
+	* main.c (main): Don't pass path and shell to exec_command.
+
+Fri Aug 17 23:17:27 1990  Roland McGrath  (roland at geech)
+
+	* job.c (construct_command_argv_internal): New fn broken out of
+	construct_command_argv.  Takes strings SHELL and IFS instead of doing
+	variable expansion for them.  Recurse to make an argv for SHELL,
+	passing SHELL==0.  When SHELL==0, don't recurse for shell argv; make a
+	simple one using /bin/sh.
+	(construct_command_argv): Do the variable expansions and call above.
+
+Thu Aug 16 19:03:14 1990  Roland McGrath  (roland at geech)
+
+	* read.c (multi_glob): For ~USER/FILE, if USER isn't found, don't
+	change the file name at all.
+
+Tue Aug  7 18:33:28 1990  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* function.c (expand_function: `suffix'/`notdir'): Don't kill the last
+	space if we never wrote one.
+
+	* function.c (expand_function: `suffix'): Retain the dot, like the
+	documentation says.
+
+Mon Aug  6 14:35:06 1990  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.58.8.
+
+	* main.c (decode_switches): For positive_int and floating cases, move
+	SW past the arg (and don't set it to ""), so another switch can follow.
+
+Fri Aug  3 00:43:15 1990  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* job.c (child_execute_job): Use unblock_signals instead of
+	push_signals_blocked_p (0).
+
+	* main.c (fatal_signal_mask): New variable, mask of signals caught with
+	fatal_error_signal.
+	(main): Set it.
+	* job.c ({block,unblock}_children): Renamed to {block,unblock}_signals.
+	Block/unblock both child signal and signals in fatal_signal_mask.
+	(children_blocked_p_{stack,max,depth}, {push,pop}_children_blocked_p):
+	Renamed from children to signals.  Use {block,unblock}_signals instead
+	of {block,unblock}_children.
+	* commands.c (fatal_error_signal), job.c (wait_for_children, new_job,
+	child_execute_job, main, log_working_directory), function.c
+	(expand_function: `shell'), job.h: Rename {push,pop}_children_blocked_p
+	to {push,pop}_signals_blocked_p.
+	* job.c (child_handler): Call {block,unblock}_signals instead of just
+	{block,unblock}_remote_children.  We need to block the fatal signals.
+
+Thu Aug  2 22:41:06 1990  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* main.c, function.c: Fixed typos in comments.
+
+	* file.c (print_file_data_base): Fix computation of avg files/bucket.
+
+Tue Jul 31 22:11:14 1990  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.58.7.
+
+Wed Jul 25 16:32:38 1990  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* arscan.c (ar_name_equal): Fixed to really do it right.
+	(ar_member_pos): Fixed order of args.
+	* ar.c (ar_member_date_1): Ditto.
+
+Fri Jul 20 15:30:26 1990  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* arscan.c (ar_name_equal): Rewritten.  Accounts for a possible
+	trailing slash in MEM.
+
+	* remake.c (f_mtime): Keep track of whether ARNAME is used and free it
+	if not.  Also free MEMNAME.
+	* ar.c (ar_member_date, ar_touch): Ditto.
+
+	* arscan.c (arscan) [HPUX or hpux]: Treat same as USGr3 PORTAR==1.
+
+	* make.h: If NSIG is not defined, but _NSIG is, #define NSIG _NSIG.
+
+	* compatMakefile: Don't use $* in explicit rules.
+
+	* default.c (default_variables: "PREPROCESS.S"): Include $(CPPFLAGS).
+
+	* remake.c (f_mtime): If FILE is an ar ref, get the member modtime.
+
+	* function.c (string_glob): Terminate the string properly when it's
+	empty.
+
+Wed Jul 18 11:26:56 1990  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.58.6.
+
+	* commands.c (set_file_variables): Fixed computation for ^F/?F elt len.
+
+Sat Jul 14 13:41:24 1990  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* job.c (construct_command_argv): Always use
+	allocated_variable_expand_for_file instead of variable_expand_for_file
+	because we might be called from inside a variable expansion (for the
+	`shell' function).
+
+	* function.c (expand_function: `shell'): Free the arglist's storage
+	correctly.  construct_command_argv only allocates ARGV and ARGV[0].
+
+	* job.c (children_blocked_p_idx): Renamed to children_blocked_p_depth.
+	(push_children_blocked_p, pop_children_blocked_p): Use ..._depth
+	instead of ..._idx, and do it right!
+
+Wed Jul 11 15:35:43 1990  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* make.h (SIGNAL): New macro to replace `signal' calls.  Does arg and
+	ret value casts to (void *) #ifdef __STDC__ to avoid conflicts btwn
+	ANSI and BSD `signal' and handler types.
+	* main.c (main), job.c (child_handler): Use it.
+
+Fri Jul  6 00:00:38 1990  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* ar.c (ar_member_date, ar_touch): Pass 2nd arg to f_mtime.
+
+	* read.c (read_makefile): Search the include path for MAKEFILES
+	variable makefiles (TYPE == 1), like it says in the manual.
+
+	* file.h (struct file), main.c (struct command_switch): Remove trailing
+	commas from enums.
+
+	* commands.c (execute_file_commands): Remove unused variables.
+	* commands.h: Declare chop_commands.
+	* make.h: Declare uniquize_deps.
+	* main.c (main): Remove unused variable.
+	(decode_switches): Remove unused label.
+	* remake.c: Include "ar.h" for ar_parse_name decl.
+	* implicit.c (try_implicit_rule): Remove unused variable.
+	* function.c (expand_function: `shell'): Declare fork, pipe.
+	* ar.c: Declare ar_name_equal.
+
+	* GNUmakefile: If using gcc, add warning flags to CFLAGS.
+
+	* remake.c: Remove decl of ar_member_date, since it's done in make.h.
+
+	* remake.c (f_mtime): For ar refs, allow the archive to be found via
+	VPATH search if we're searching, and change the ar ref accordingly.
+
+	* ar.c (ar_parse_name): New global fn to parse archive-member
+	references into the archive and member names.
+	(ar_member_date, ar_touch): Use it.
+	* make.h: Declare it.
+
+	* remake.c (f_mtime): After doing rename_file, do check_renamed instead
+	of assuming rename_file will always set FILE->renamed (which it won't).
+
+	* vpath.c (selective_vpath_search): Only accept prospective files that
+	don't actually exist yet are mentioned in a makefile if the file we are
+	searching for isn't a target.
+
+Wed Jul  4 04:11:55 1990  Roland McGrath  (mcgrath at helen.Berkeley.EDU)
+
+	* remake.c (update_goal_chain): Do check_renamed after calling
+	file_mtime.
+	(check_dep): Ditto after update_file.
+
+	* file.c (rename_file): Prettied up long message for merging cmds.
+
+	* remake.c (update_file_1): Get each dep file's modtime, and allow for
+	it being renamed, before checking for a circular dep, since a renaming
+	may have introduced one.
+
+Tue Jul  3 18:15:01 1990  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* ar.c (ar_touch): Don't free ARNAME since enter_file holds onto the
+	storage.
+
+	* function.c (string_glob): Don't leave a trailing space.
+
+	* read.c (do_define): Allow leading whitespace before `endef'.
+
+Mon Jul  2 14:10:16 1990  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* implicit.c (pattern_search): No longer take NAME arg.  Instead take
+	ARCHIVE flag.  If ARCHIVE is nonzero, FILE->name is of the form
+	"LIB(MEMBER)"; rule for "(MEMBER)" is searched for, and LASTSLASH is
+	set to nil.  Since NAME was only non-nil when it was the archive member
+	name passed by try_implicit_rule, this change easily allows turning off
+	LASTSLASH checking for archive members without excessive kludgery.
+	(try_implicit_rule): Pass ARCHIVE flag instead of file name.
+
+	* Version 3.58.5.
+
+	* commands./c (set_file_variables): Don't kill last char of $(^D) elts.
+
+Sat Jun 30 00:53:38 1990  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* ar.c (ar_member_date): Don't free ARNAME since enter_file holds onto
+	the storage.
+
+	* arscan.c (ar_scan) [sun386 && PORTAR == 1]: Treat like USGr3.
+
+Wed Jun 27 14:38:49 1990  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* main.c (main): Put a newline on the debugging message when deciding
+	not to remake a makefile to avoid a possible loop.
+	Only decide not to remake makefiles that have commands (as well as
+	being targets and having no deps).
+
+Fri Jun 22 12:35:37 1990  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* default.c (default_variables): Define `LINK.s' and `LINK.S'.
+	(default_suffix_rules): Define .S.o rule.
+
+	* job.c (construct_command_argv): If we decide to go the slow route,
+	free all storage for the chopped args.
+	(start_job): Free the argument list's storage correctly.
+	construct_command_argv only allocates ARGV and ARGV[0].
+
+Tue Jun 19 18:27:43 1990  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.58.4.
+
+Fri Jun 15 21:12:10 1990  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* glob.c: New version from ai-lab which doesn't do [^abc].
+
+Thu Jun  7 00:30:46 1990  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* dir.c: Copied dirent vs direct et al mess from glob.c.
+
+	* glob.c: Replaced with updated version from djm.
+	* glob.c: Check macro DIRENT instead of _POSIX_SOURCE for <dirent.h>.
+	__GNU_LIBRARY__ implies DIRENT and STDC_HEADERS.
+
+Thu May 31 22:19:49 1990  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* vpath.c (vpath_search): Don't stop the loop if a pattern matches but
+	the search fails.  All matching patterns have their paths searched
+	(like it says in the manual).
+
+	* make.texinfo (Rules: Directory Search: Selective Search): Say that
+	multiple `vpath' directives with the same pattern DO accumulate, not
+	supersede earlier ones.
+
+	* vpath.c (print_vpath_data_base): Increment the count of vpaths on
+	each loop iteration, rather than letting it stay zero.
+
+	* Version 3.58.3.
+
+	* job.c (block_children, unblock_children): Made static.
+	(push_children_blocked_p, pop_children_blocked_p): New functions to
+	push and pop whether children are blocked or not.
+	* job.h: Declare push_children_blocked_p, pop_children_blocked_p and
+	not block_children, unblock_children.
+	* commands.c (fatal_error_signal), job.c (wait_for_children, new_job,
+	child_execute_job), main.c (main, log_working_directory): Use sequences
+	of push_children_blocked_p (1) and pop_children_blocked_p () instead of
+	explicitly blocking and unblocking children.
+	* function.c (expand_function: `shell'): Don't unblock children.  The
+	push-pop sequence in wait_for_children makes it unnecessary.
+
+Tue May 29 21:30:00 1990  Roland McGrath  (mcgrath at helen.Berkeley.EDU)
+
+	* read.c (do_define): Don't include the last newline in the definition.
+
+	* function.c (expand_function: `shell'): Call construct_command_argv
+	before forking and don't fork if it returns nil.  Free the argument
+	list's storage before finishing.
+
+	* job.c (start_job): Free the storage for the child's argument list
+	in the parent side of the fork after the child has been spawned.
+
+	* job.c (start_job): If construct_command_argv returns nil, go to the
+	next command line.
+
+	* job.c (construct_command_argv): Use the shell if the command contains
+	an unterminated quote.
+
+Wed May 23 19:54:10 1990  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.58.2.
+
+	* read.c (read_makefile): Parse "override define" correctly.
+
+Thu May 17 15:25:58 1990  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* arscan.c [USG]: Don't declare memcpy and memcmp.  <memory.h> should
+	do this anyway (and lack of declarations is harmless).
+
+	* remote-customs.c: Renamed to remote-cstms.c for System V.
+	* remote.c [CUSTOMS]: Changed accordingly.
+
+Sun May 13 14:38:39 1990  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* GNUmakefile: Use same cmds for doc tar.Z as for dist tar.Z (so the
+	contents go in make-N.NN).
+
+Thu Apr 26 19:33:25 1990  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* Version 3.58.1.
+
+Wed Apr 25 20:27:52 1990  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* job.c (init_siglist): Don't do SIGUSR1 and SIGUSR2 if they are the
+	same as SIGIO and SIGURG (true on Cray).
+
+Tue Apr 24 20:26:41 1990  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* arscan.c (ar_scan): Do behavior for PORTAR == 1 and USGr3 also
+	#ifdef APOLLO.
+
+Wed Apr 11 10:00:39 1990  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* job.c (exec_command): Set the effective GID to the real GID.  Somehow
+	this code got lost.
+
+	* implicit.c (pattern_search): Use the right index variable when
+	seeing if we need to expand FILE->also_make.
+
+Sun Mar  4 09:18:58 1990  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* Version 3.58.0.
+
+	* remake.c (remake_file): Treat non-targets without commands under -t
+	the same as anything else without commands.
+
+Sat Feb 24 17:46:04 1990  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* default.c (default_variables: PREPROCESS.S): Removed $< from defn.
+
+	* main.c (main): Ignore arguments that are the empty string, rather
+	than feeding them to enter_file and barfing therein.
+
+Wed Feb 14 16:28:37 1990  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* main.c (main): Call construct_include_path after doing chdirs.
+
+Thu Feb  8 13:43:44 1990  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* Version 3.58.
+
+Sat Feb  3 22:06:55 1990  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* Version 3.57.7.
+
+	* make.texinfo (Implicit: Catalogue of Rules): For RCS, noted that
+	working files are never overwritten by the default rule.
+
+Thu Feb  1 17:27:54 1990  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* rule.c (count_implicit_rule_limits): Redid loop control to not run
+	twice on freed rules.
+
+	* GNUmakefile: Made `.dep' files be architecture-specific too.
+
+	* main.c (main, log_working_directory) [USG]: Block children around
+	calls to `getwd' (actually `getcwd' on USG), because that function
+	sometimes spawns a child running /bin/pwd on USG.
+
+Tue Jan 30 14:02:50 1990  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* function.c (subst_expand): Pay attention to SUFFIX_ONLY, putz.
+
+Wed Jan 24 21:03:29 1990  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* make.man: Fixed repeated word.
+
+	* make.texinfo (Missing): Reworded a buggy sentence.
+
+Mon Jan 22 12:39:22 1990  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* main.c (print_version): Added 1990 to copyright notice.
+
+	* Version 3.57.6.
+
+Sat Jan 20 11:52:01 1990  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* file.c (rename_file): Don't free the storage for the old name, since
+	it might not have been malloc'd.
+
+	* job.c (construct_command_argv): Call
+	allocated_variable_expand_for_file instead of variable_expand_for_file
+	to expand `$(SHELL)'.
+
+	* make.texinfo (Bugs): Change address from roland@wheaties.ai.mit.edu
+	to roland@prep.ai.mit.edu.
+
+Tue Jan 16 19:22:33 1990  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* Version 3.57.5.
+
+Sun Jan 14 16:48:01 1990  Roland McGrath  (mcgrath at helen.Berkeley.EDU)
+
+	* job.c (start_job): Only call wait_to_start_job for the first command
+	line in each sequence.
+
+Thu Jan  4 14:27:20 1990  Roland McGrath  (mcgrath at helen.Berkeley.EDU)
+
+	* load.c [LDAV_BASED] (wait_to_start_job): Loop while job_slots_used >
+	0, not > 1.
+
+	* job.c (search_path): Don't return a pointer to local storage.
+	Allocate data space for the pathname instead.
+
+	* function.c (expand_function: `shell'): Don't write garbage if the
+	child wrote no output.
+
+Wed Jan  3 15:28:30 1990  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.57.4.
+
+	* file.h (struct file): New member `renamed', a `struct file *' that is
+	the place this file has been renamed to (or nil).
+	(check_renamed): Macro to check for a file having been renamed.
+	Dereferences the renaming and sets the given variable.
+	* file.c (rename_file): Completely rewritten.  Renames in place if
+	possible, or moves FILE to a different hash bucket if there is no
+	existing file with the new name.  If there is an existing file with the
+	new name, FILE is merged into it and FILE->renamed is set to point to
+	it.
+	* variable.c (merge_variable_sets): New fn to merge two variable sets.
+	(merge_variable_set_lists): New fn to merge two variable set lists.
+	* variable.h: Declare merge_variable_set_lists.
+	* remake.c (update_file_1, check_dep): Run `check_renamed' after
+	calling file_mtime, check_dep.
+	(update_file): Same after update_file_1.
+	(update_goal_chain, update_file_1, check_dep): Same after update_file.
+
+	* read.c (uniquize_deps): New fn, broken out of record_files, to remove
+	duplicate deps from a chain.
+	(record_files): Use it.
+	* implicit.c (pattern_search): Use uniquize_deps.
+
+	* file.h (file_mtime_1): New macro, like file_mtime, but take second
+	arg, passed to f_mtime.
+	(file_mtime): Implement as file_mtime_1 (file, 1).
+	(file_mtime_no_search): New macro: file_mtime (file, 0).
+	* remake.c (f_mtime): Take new arg SEARCH.  Only do VPATH and `-lNAME'
+	searching if it is nonzero.
+	* main.c (main): Use file_mtime_no_search for makefiles.
+	* remake.c (update_goal_chain): Use file_mtime_no_search if MAKEFILES.
+
+	* main.c (printed_version): New variable, init'd to zero.
+	(print_version): Set it to nonzero before returning.
+	(die): If -v and !printed_version, call print_version before clean up
+	and death.
+
+	* main.c (log_working_directory): Keep track of whether or not the
+	"Entering" message has been printed, and return without printing the
+	"Leaving" message if not.
+
+	* main.c (decode_switches): Don't complain about missing args before
+	checking for a noarg_value elt in the command_switch structure.
+
+Tue Jan  2 15:41:08 1990  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* make.texinfo (Commands: Recursion: Options/Recursion): Document
+	special case of -j.
+
+	* make.texinfo, main.c, job.c: Changed copyright notices to include
+	1990.
+
+	* make.texinfo (Top): Fixed introductory paragraph, which said that
+	`make' itself (instead of the manual) has various chapters.
+	(Variables: Advanced: Substitution Refs): When pxref'ing about
+	`patsubst', use node `Text Functions', not `Functions'.
+	Add an xref about `patsubst' after description of $(var:a%b=c%d).
+	(Functions: Syntax of Functions): Explain why mixing delimiters in
+	function/var refs is unwise.  Clarify fn arg evaluation order.
+	(Options): Reworded sentence about `-e'.
+	(Implicit: Implicit Variables): Don't say `RM' is unused.
+	Say the dflt values for the flag vars is empty unless otherwise noted,
+	since some have defaults.
+	(Implicit: Pattern Rules: Pattern Examples): Clarified use of $< and $@
+	in first example.
+	(Implicit: Last Resort): Don't say the .DEFAULT example creates files
+	"silently".  It's automatic, but not silent.
+	(Implicit: Search Algorithm): Fixed confusing ungrammatical sentence
+	for item 5.1.
+	(Archives: Archive Update): Added missing `next' pointer.
+	(Archives: Archive Symbols): Note that GNU `ar' deals with this
+	automatically.
+
+	* job.c (search_path): New fn, to search for an executable file in a
+	search path (broken out of exec_command).
+	(exec_command): Take fourth arg, the shell program to use (if
+	necessary).  Use search_path for the program, and the shell program.
+	Pass args "file args ..." to shell program (with no -c), where FILE is
+	the full pathname of the program (script) to be run.
+	(child_execute_job): Pass shell program to exec_command.
+	* main.c (main): Ditto.
+
+	* main.c (main): Don't write a message if exec_command returns, because
+	it will never return.
+
+Fri Dec 22 16:19:58 1989  Roland McGrath  (mcgrath at hecuba.Berkeley.EDU)
+
+	* default.c (default_variables: "LINK.cc"): Use $(C++FLAGS) instead of
+	$(CFLAGS).
+
+Wed Dec 20 09:58:48 1989  Roland McGrath  (mcgrath at hecuba.Berkeley.EDU)
+
+	* job.c (new_job): If start_job set the child's `command_state' to
+	`cs_finished', call notice_finished_file.
+
+Sun Dec 17 19:45:41 1989  Roland McGrath  (mcgrath at hecuba.Berkeley.EDU)
+
+	* Version 3.57.3.
+
+Wed Dec 13 17:57:12 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* rule.c (convert_to_pattern): Accept files with dependencies as
+	suffix rules.
+
+Thu Nov 30 15:47:13 1989  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* Version 3.57.2.
+
+	* function.c (expand_function: `shell'): Don't clobber BUFFER and then
+	try to free it.
+
+	* remake.c (update_file_1): Took code to force remake of nonexistent
+	deps out of #if 0, and changed the test to nonexistent non-intermediate
+	deps.  In version 4, I think removing this test completely will
+	implement the new feature that if a: b and b: c and c is newer than a,
+	b need not be remade.
+
+Sun Nov 26 16:12:41 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* compatMakefile (load.o, remote.o): Use $*.c instead of explicit file
+	names so that using VPATH works.
+
+Tue Nov 21 14:57:18 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.57.1.
+
+Fri Nov 10 03:28:40 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* remake.c (check_dep): Set *MUST_MAKE_PTR if FILE does not exist after
+	being updated.  (The exact opposite test was here before; why???)
+	(update_file_1): Set a dep's `changed' member after updating it if it
+	is phony and has commands (because they will then always be executed).
+
+Thu Nov  9 13:47:12 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* load.c [UMAX]: #ifdef UMAX_43 include different headers for the
+	`inq_stats' call.
+	* compatMakefile (LOAD_AVG): Document UMAX_43.
+
+	* Version 3.57.0.
+
+	* commands.c (chop_commands): New function to chop commands into lines.
+	* job.c (new_job): Break that code out, and call chop_commands.
+	* remake.c (remake_file): Call chop_commands before looking at
+	FILE->cmds->any_recurse.
+
+	* make.texinfo (Running: Goals): Don't say that the default target
+	won't be taken from an included makefile.
+
+	* remake.c (update_file_1): #if 0 out setting MUST_MAKE if a dep
+	doesn't exist.
+
+Fri Nov  3 15:53:03 1989  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* Version 3.57.
+
+	* variable.c (try_variable_definition): Don't calculate useless value.
+
+	* main.c (define_makeflags): Fixed -j propagation.
+
+	* commands.c (execute_file_commands): Removed unused variable.
+
+Sun Oct 29 11:11:15 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* commands.c (execute_file_commands): If the commands are empty, call
+	notice_finished_file before returning.
+
+Sat Oct 28 23:06:32 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* remake.c (update_file_1): Don't always update a target that has no
+	deps.  Only do this for double-colon targets.
+
+Wed Oct 25 16:36:16 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* main.c (main) [hpux]: hpux == HPUX.
+	* compatMakefile (defines): Document that HPUX should be defined.
+
+Tue Oct 24 19:19:48 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.56.8.
+
+	* job.c (exec_command): Fixed what mode bits are checked.
+
+	* remake.c (update_file_1): "No cmds and no deps actually changed"
+	loses if ! FILE->is_target.
+
+	* make.texinfo (Variables: Setting): Don't say that spaces after a
+	variable definition are ignored (since they aren't).
+
+Mon Oct 23 14:34:23 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.56.7.
+
+	* remake.c (update_file_1): If, after being updated, any dependency
+	does not exist, remake the target.
+
+	* remake.c (update_file_1): Always update if FILE has commands but no
+	deps.
+
+	* commands.c (execute_file_commands): If we return early because there
+	are no commands, set FILE->updated.
+
+Thu Oct 19 18:47:37 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* arscan.c (ar_scan) [M_XENIX]: Don't run atoi or atol on the
+	`struct ar_hdr' members that are int or long int on Xenix.
+
+Sat Oct 14 10:43:03 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* arscan.c (ar_scan): Cosmetic clean ups.
+	(ar_name_equal): New function to compare names, handling truncated
+	member names and special `.o' truncation.
+	(ar_member_pos): Use ar_name_equal.
+	* ar.c (ar_member_date_1): Use ar_name_equal.
+
+	* Version 3.56.6.
+
+	* file.h (struct file): Made `update_status' a `short int', and moved
+	it before `command_state' so the bitfields can be packed better.
+
+	* remake.c (files_remade): Made global.
+	(notice_finished_file): Don't increment files_remade.
+	* job.c (new_job): Do.
+
+	* job.c (start_job): Don't return a value.  Always set
+	CHILD->file->command_state to either cs_running or cs_finished.
+	(new_job, child_handler): Don't expect start_job to return a value.
+	Instead, look at the file's command_state.
+
+	* commands.c (chop_commands): Merged into job.c (new_job).
+	* commands.h: Don't declare chop_commands.
+
+	* job.c (start_job): Made static.
+	(new_job): New function to create a `struct child' and call start_job.
+	(free_child): New function to free a `struct child'.
+	(child_handler, new_job): Call it.
+	* job.h: Don't declare start_job.  Do declare new_job.
+	* commands.c (execute_file_commands): Call new_job.
+
+	* commands.c (execute_file_commands): Don't set FILE->update_status if
+	start_job fails.
+
+	* function.c (expand_function): Don't use `reading_filename' and
+	`reading_lineno_ptr' if they're nil.
+
+Fri Oct 13 18:16:00 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* read.c (find_semicolon): New function to look for an unquoted ; not
+	preceded by an unquoted # in a string.
+	(read_makefile): Call it before expanding the line.  If it finds a ;,
+	cut the line short there before expanding it.  If not, call it again
+	after expanding.
+
+	* commands.c (execute_file_commands): Don't check FILE->command_state.
+	We won't get called unless it's cs_not_started.
+
+	* read.c (read_makefile): Call collapse_line on the variable-expanded
+	rule line after checking for ; and #.
+
+	* job.c (start_job): When there are no more commands, always return 0.
+	* commands.c (execute_file_commands): Don't put the new child in the
+	`children' chain unless FILE->command_state is cs_running.
+
+	* read.c (read_makefile): Rewrote ;-handling to only do it once (why
+	did I do it twice??) and to check for a # before the ;.
+
+	* job.c (start_job): Set CHILD->file->update_status to 0 when we run
+	out of commands.  Set it to 1 before returning failure.
+	(child_handler): Don't set C->file->update_status to 0 when start_job
+	returns success and commands are not running.
+
+	* read.c (read_makefile): If there is a # before the ; for commands,
+	forget the ; and commands.
+
+Thu Oct 12 15:48:16 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* job.c (child_execute_job): Pass -c to the shell.
+
+Wed Oct 11 18:41:10 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.56.5.
+
+	* main.c (define_makeflags): Cleaned up to keep better track of dashes
+	written, etc.
+
+	* function.c (expand_function: `shell'): When converting newlines to
+	spaces in output, search with `index' calls rather than a simple loop.
+
+	* main.c (main): Make sure stdout is line-buffered.
+
+	* main.c (decode_switches): Always check for missing switch arg.
+
+Mon Oct  9 17:17:23 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.56.4.
+
+Sat Oct  7 00:32:25 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* commands.c (set_file_variables): #ifdef NO_ARCHIVES, still set $@ and
+	$%.
+
+	* commands.c (set_file_variables): Include a trailing slash in the
+	directory variables (@D, etc.).
+
+	* job.c (child_handler): Call notice_finished_file after changing a
+	child's state to `cs_finished'.
+	* remake.c (update_file_1): Don't call notice_finished_file if
+	FILE->command_state == cs_finished.
+
+Wed Oct  4 16:09:33 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.56.3.
+
+Tue Oct  3 21:09:51 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* read.c (read_all_makefiles): When setting elements of MAKEFILES from
+	the contents of read_makefiles, make sure we're using the right
+	element.
+
+	* dir.c, glob.c [USGr3 || DIRENT]: Don't define d_ino as d_fileno.
+
+	* Version 3.56.2.
+
+	* remake.c (update_file_1): Return zero after calling remake_file if
+	FILE->command_state != cs_finished.  Test update_status thoroughly.
+
+	* commands.c (execute_file_commands): Don't call notice_finished_file.
+
+	* remake.c (remake_file): Return immediately after calling
+	execute_file_commands.
+
+Sat Sep 30 14:57:05 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.56.1 (alpha).
+
+	* file.h (struct file): Made `update_status' not be a bitfield, since
+	some broken compilers don't handle it right.
+
+	* function.c (expand_function: `join'): Don't clobber the pointers and
+	then try to free them.
+
+	* job.c (exec_command): Fixed & vs = precedence problem.
+
+Thu Sep 28 17:29:56 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* remake.c (update_file_1): Fixed typo in debugging output.
+
+	* remake.c (library_file_mtime): Search for /usr/local/lib/libLIB.a
+	after /usr/lib/libLIB.a.
+
+Tue Sep 26 16:07:58 1989  Roland McGrath  (mcgrath at helen.Berkeley.EDU)
+
+	* read.c (conditional_line): For `ifeq (a, b)', swallow space after the
+	comma.
+
+Sun Sep 24 13:25:32 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* function.c (patsubst_function): If BY_WORD and the match is not a
+	full word, update the text pointer correctly.
+
+	* function.c (expand_function: `word'): Don't lose track of the second
+	arg's expansion and free something else instead.
+
+Fri Sep 22 16:15:29 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.56.
+
+Thu Sep 21 14:28:42 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* main.c (main): Make an array of the mtimes of the makefiles before
+	updating them, and compare their file_mtimes against this later.  Don't
+	re-exec if a makefile was successfully updated but didn't change.  If a
+	makefile failed to be remade and no longer exists, die.  If a makefile
+	failed to be remade, but changed anyway, re-exec.  If a makefile failed
+	to be remade, but is unchanged, continue on.
+
+Wed Sep 20 18:02:07 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.55.6.
+
+	* implicit.c (pattern_search): Maintain an array CHECK_LASTSLASH of the
+	CHECK_LASTSLASH flag values used to match each member of TRYRULES.
+	When making FILE->stem, if CHECKED_LASTSLASH[FOUNDRULE], prepend the
+	part of FILENAME before LASTSLASH.
+
+Tue Sep 19 17:44:08 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* dir.c (dir_file_exists_p): Check for FILENAME being nil before
+	checking for it being "".
+
+	* main.c (define_makeflags): Fixed test for whether a flag/flag_off
+	option was non-default.  Also changed to generate a string that Unix
+	Make will grok (except for FP/int values and new flags).
+
+	* job.c (child_execute_job): Don't use the shell's -c option.
+	Also fixed an off-by-one bug in the ARGV -> shell arg list copying.
+
+Mon Sep 18 15:17:31 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.55.5.
+
+	* read.c (parse_file_seq): Check the beginning of the file name for a
+	`./', not the two chars after the end of the name (Q rather than P).
+
+	* job.c (child_execute_job): Include all of ARGV in the arg list for
+	the shell.
+
+	* main.c (define_makeflags): Don't include floating and positive_int
+	options in !PF.
+
+	* job.c (exec_command): Set the effective gid to the real gid before
+	execing.
+
+	* job.c (child_execute_job): Don't clobber the arg list when execing
+	the shell.
+
+Sun Sep 17 15:27:19 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* main.c (define_makeflags): Moved all the checking inside the switch.
+
+	* load.c [LDAV_BASED] (load_average): When we can't get the load
+	average, return zero instead of running off the end.
+
+	* file.c: Include variables.h.
+	* job.c: Declare dup2 and {block,unblock}_remote_children.
+	* file.h: Declare f_mtime.
+	* job.c: Don't declare construct_command_argv, since job.h does.
+	* function.c, main.c, load.c, remake.c: Include job.h.
+	* load.c [LDAV_BASED] (load_average): Declare nlist.
+	* variable.h: Declare print_file_variables.
+	* job.c [!USG]: Don't declare sigsetmask.
+	[!USG]: Declare getdtablesize.
+	Don't declare load_average.  Do declare wait_to_start_job.
+	Declare vfork, gete[gu]id, execve.
+	* commands.c: Declare remote_kill, getpid.
+	* make.h: Declare kill, exit, sigblock, pipe, close, ctime, open,
+	lseek, read.
+	* make.h [not USG]: Declare sigsetmask.
+	* job.h: Declare wait_for_children and {block,unblock}_children.
+
+	* dir.c (dir_file_exists_p): If FILENAME is nil, read in the whole
+	directory.
+	(find_directory): When we want to read in the whole directory, call
+	dir_file_exists_p with nil instead of "".
+
+	* file.h (struct file), job.h (struct child),
+	  variable.h (struct variable): Use bitfields for flags.
+	* make.h (ENUM_BITFIELD): If GCC or #ifdef ENUM_BITFIELDS, define as
+	:BITS, else empty.
+	* compatMakefile (defines): Document ENUM_BITFIELDS.
+
+Sat Sep 16 12:38:58 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.55.4 (alpha).
+
+	* GNUmakefile (dist): Depend on default and doc.
+
+	* load.c [LDAV_BASED]: Include <nlist.h> rather than <a.out.h>; #ifdef
+	NLIST_NAME_UNION, use n_un.n_name instead of n_name.
+	* compatMakefile (LOAD_AVG): Document NLIST_NAME_UNION.
+
+	* job.c [USG-ish]: Don't redefine WIF{SIGNALED,EXITED} if they're
+	already defined.
+
+Fri Sep 15 13:59:42 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* glob.c, dir.c [USGr3 or DIRENT]: If neither d_ino, nor d_fileno is
+	defined, define d_ino as d_fileno.
+
+Thu Sep 14 18:29:38 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* job.c: Don't declare exec_command static.
+
+	* make.texinfo (Name Index): Changed title to include directives.
+
+	* Version 3.55.3 (alpha).
+
+	* make.texinfo (Running: Options): Document -e.
+
+	* main.c (main): Always give imported environment variables origin
+	`o_env'.
+	* variable.c (define_variable_in_set): Under -e, if ORIGIN, or an
+	existing variable's origin, is `o_env', make it `o_env_override'.
+
+	* load.c: Use the symbol KERNEL_FILE_NAME instead of KERNEL_FILE.
+	* compatMakefile: Changed the comment for `LOAD_AVG' accordinly.
+
+Thu Sep  7 16:46:26 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.55.2 (alpha).
+
+	* variable.c (print_variable_set), rule.c (print_rule_data_base),
+	file.c (print_file_data_base): If NO_FLOAT is defined, don't use
+	floating-point for printing statistics.
+	* compatMakefile (defines): Document NO_FLOAT.
+
+	* make.h (HASH): New macro to add the hashing value of one char to a
+	variable.c.
+	* file.c (lookup_file, enter_file, rename_file): Use it.
+	* dir.c (find_directory, dir_file_exists_p, file_impossible_p): Ditto.
+	* variable.c (define_variable_in_set, lookup_variable): Same here.
+
+	* variable.c, file.c, dir.c: Don't define *_BUCKETS if they are already
+	defined.
+
+	* compatMakefile (defines): Added comment about defining NO_ARCHIVES.
+	(ARCHIVES, ARCHIVES_SRC): New variables for {ar,arscan}.[oc].
+	(objs, srcs): Use $(ARCHIVES) and $(ARCHIVES_SRC).
+	* commands.c (set_file_variables), dir.c (file_exists_p),
+	remake.c (touch_file, name_mtime), implicit.c (try_implicit_rule,
+	pattern_search), make.h: If NO_ARCHIVES is #defined, don't do any
+	archive stuff.
+
+	* commands.c (set_file_variables): Don't kill the last char of
+	directory names in $([@*<%?^]D).
+
+Wed Sep  6 15:23:11 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* default.c (default_terminal_rules {%:: %,v}, {%:: RCS/%,v}): Don't
+	run co if the target exists.
+
+	* glob.c (glob_match): [!xyz], rather than [^xyz], means none of [xyz].
+
+	* glob.c: Misc minor cosmetic changes.
+
+Tue Sep  5 14:49:56 1989  Roland McGrath  (mcgrath at saffron.Berkeley.EDU)
+
+	* load.c [LDAV_BASED] (load_average): Check for == -1, rather than < 0
+	to see if lseek fails.  On some systems, `avenrun' is at an offset >
+	(2**31)-1, and lseek succeeds, returning a negative value.
+
+Mon Sep  4 11:07:58 1989  Roland McGrath  (mcgrath at saffron.Berkeley.EDU)
+
+	* rule.c (new_pattern_rule): Return `int' instead of `void': nonzero if
+	the passed rule was used, zero if not.
+	(install_pattern_rule): Pay attention to the return from
+	new_pattern_rule, and don't set the rule's `terminal' flag or give it
+	commands unless it's used.
+	(create_pattern_rule): Same idea.
+
+	* dir.c (find_directory): Removed unused variable.
+
+	* commands.c (execute_file_commands): Removed unused variable.
+
+	* read.c (record_files): Don't use NAME after freeing it.
+
+Sat Sep  2 00:33:19 1989  Roland McGrath  (mcgrath at saffron.Berkeley.EDU)
+
+	* Version 3.55.1 (alpha).
+
+	* function.c (string_glob): Don't add spaces after file names that
+	aren't added.  (Also means don't add spaces without checking the size
+	of the buffer.)
+
+	* remake.c (update_goal_chain): Don't remove makefiles with cmds and no
+	deps from the chain.
+	* main.c (main): Do it here, before calling update_goal_chain.
+
+	* remake.c (update_goal_chain): When updating fails, change STATUS even
+	if MAKEFILES is set.  Also stop remaking when updating fails if not
+	under -k and MAKEFILES is not set.
+
+	* remake.c (remake_file, update_file_1, notice_finished_file),
+	commands.c (execute_file_commands), make.h, commands.h: The functions
+	remake_file, notice_finished_file, and execute_file_commands no longer
+	return values, and their callers no longer expect values returned.
+
+	* remake.c (notice_finished_file): Don't set FILE's modtime to now if
+	it is a non-target with no commands.
+
+Fri Sep  1 00:04:39 1989  Roland McGrath  (mcgrath at saffron.Berkeley.EDU)
+
+	* read.c (read_all_makefiles): After freeing each element on MAKEFILES,
+	replace it with the name stored in read_makefiles by read_makefile.
+
+	* remake.c (update_file_1): Don't decide not to remake if FILE has no
+	cmds and no deps actually changed if FILE doesn't have any deps.
+
+	* file.c (remove_intermediate): Remove precious files that also have
+	the `dontcare' flag set.
+
+	* remake.c (update_file_1): Don't always remake if FILE has cmds but no
+	deps; only if FILE is double-colon.  (I don't know why this should be
+	done for double-colon targets, but that's what Unix make does.)
+
+	* load.c [LDAV_BASED] (load_average): Write error messages if the
+	various system calls fail.  Keep track of if we've failed before.
+	The first time we fail, write a message saying -l won't be enforced.
+	The first time we succeed after having failed, write a message saying
+	-l will be enforced again.
+
+	* remake.c [USG]: Don't #include <sys/file.h>
+
+	* load.c [generic Unix LDAV_BASED]: #include <fcntl.h> #ifdef USG,
+	else <sys/file.h> instead.
+
+	* job.c [USG && !USGr3 && !HAVE_DUP2]: Remove redundant
+	#include <errno.h> and declaration of `errno'.
+	[...] (dup2): Fixed so it won't always lose.
+
+	* default.c (default_suffix_rules: .texinfo.dvi): Copy, rather than
+	move, the aux and index files, so the TeX run can use them.
+
+	* compatMakefile: Remove redundant comment.
+
+	* load.c [generic Unix LDAV_BASED]: Include <a.out.h> instead of
+	<nlist.h>, since the `struct nlist' declaration in <nlist.h> varies
+	more than the one in <a.out.h>.
+	(load_average): Use the `n_un.n_name' field of the `struct nlist',
+	since the <a.out.h> declaration uses the union.
+
+	* main.c (main): For the temporary files made for stdin makefiles, set
+	the `intermediate' and `dontcare' flags.
+	* file.c (remove_intermediates): Don't print any messages for files
+	whose `dontcare' flag is set.  (The only files that will be
+	intermediate and `dontcare' will be the temporary files made for stdin
+	makefiles.)
+
+	* job.c (exec_command): Made global.
+	* job.h: Declare it.
+	* main.c (main): Use exec_command when re-execing.
+
+	* make.h: Declare environ.
+	* make.c: Don't.
+
+	* job.c (child_execute_job): New function to perform everything done in
+	the child side of a fork (for a job or `shell' function).
+	(start_job): Call it.
+	* job.h: Declare construct_command_argv and child_execute_job.
+	* function.c (expand_function: `shell'): Use child_execute_job.
+
+Thu Aug 31 18:42:51 1989  Roland McGrath  (mcgrath at saffron.Berkeley.EDU)
+
+	* function.c (expand_function: `shell'): Remove a trailing newline
+	instead of turning it into a space.
+
+	* main.c (main): Do init_siglist #ifdef HAVE_SIGLIST.
+
+	* job.c [WTERMSIG || (USG && !HAVE_SYS_WAIT)]: Test each W* macro
+	separately and define all those that aren't defined.
+
+Sat Aug 26 15:13:21 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* ar.c (ar_name): Return zero for `(foo)'.
+
+	* Version 3.55.
+
+	* make.texinfo (Rules: Multiple Targets): Make this node's `next'
+	pointer point to `Static Pattern'.
+	* make.texinfo (Makefiles: MAKEFILES Variable): Make this node's `prev'
+	pointer point to `Makefile Names'.
+
+	* make.1: Renamed to make.man.
+	* compatMakefile: Define `mandir' and `manext'.
+	(install): Depend on $(mandir)/make.$(manext).
+	($(mandir)/make.$(manext)): Depend on make.man and copy it to $@.
+	($(bindir)/make): Use `make' rather than $<; so Unix make can grok it.
+
+Thu Aug 24 03:35:48 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* variable.c (target_environment): Allow variables that start with
+	underscores.
+
+Wed Aug 23 22:50:32 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* variable.c (target_environment): Reject variables that don't start
+	with letters.
+
+Tue Aug 22 04:14:29 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* GNUmakefile (make-$(version).tar.Z): Put make.1 (the Unix manual
+	page) in the tar file.
+
+	* variable.c (target_environment): Don't write variables with origin
+	o_default (i.e., ones from default.c).
+	* make.texinfo (Commands: Recursion: Variables/Recursion): Document
+	that default variables are not put in the environment.
+
+	* remake.c (update_file_1): Remake all targets with commands but no
+	deps.
+
+Sat Aug 19 06:03:16 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* remake.c (update_file_1): In the final loop, set the deps'
+	`changed' members if they are newer than FILE.
+
+	* remake.c (update_goal_chain): Under -d, print a message if we decide
+	not to remake a makefile so as to avoid a possible infinite loop.
+
+Fri Aug 18 20:30:14 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* remake.c (remake_file): Cleaned up.
+
+	* commands.c (execute_file_commands): If the commands are empty, set
+	FILE->update_status to zero before returning.
+
+	* remake.c (notice_finished_file): Set `last_mtime' fields to zero
+	instead of calling name_mtime; file_mtime will do that later if anybody
+	cares.
+
+Thu Aug 17 10:01:11 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* make.texinfo (Rules: Wildcards: Wildcard Examples): Give this node a
+	`prev' pointer.
+
+	* Version 3.54.9 (alpha).
+
+	* make.texinfo: Fixed some @nodes.
+
+	* remake.c (check_dep): Don't set *MUST_MAKE_PTR if FILE doesn't exist
+	after running update_file.
+
+	* remake.c (notice_finished_file): If FILE has no commands, pretend its
+	modtime is now.
+
+	* remake.c (update_file_1): In the loops that call update_file on the
+	deps, compare modtimes before and after (unless deps are still being
+	made) and set the deps' `changed' members.  Do not set the `changed'
+	members in the loop that prints the newer/older debugging messages.
+	* remake.c (update_file_1): If no deps changed and FILE has no
+	commands, decide it doesn't need remaking.
+
+	* remake.c (update_file_1): Print a debugging message if we take
+	commands from default_file.
+
+	* make.texinfo (Rules: Directory Search: Selective Search): Removed
+	note about warning for `vpath' with a constant pathname, since it isn't
+	warned about anymore.
+
+	* remake.c (update_goal_chain): If MAKEFILES, remove makefiles which
+	are targets and have no deps.
+	* make.texinfo (Makefiles: Remaking Makefiles): Document that makefiles
+	will not be remade if they are targets but have no dependencies.
+
+Tue Aug 15 00:00:08 1989  Roland McGrath  (roland at apple-gunkies.ai.mit.edu)
+
+	* remake.c (notice_finished_file): Increment files_remade for non-phony
+	files if they didn't exist before (even if they still don't).
+
+	* job.c: Include <errno.h> and declare errno.
+
+	* job.c (exec_command): If the execve fails with ENOEXEC (Exec format
+	error), return instead of exiting the child process.
+
+	* job.c (start_job): In the child side, if exec_command fails, try
+	using the shell.
+
+	* job.c (start_job): In the child side, call unblock_children instead
+	of sigsetmask.
+
+	* remake.c (notice_finished_file): Under -n or -q, always increment
+	files_remade for non-phony files.
+
+	* rule.c (intall_pattern_rule): Use find_percent.
+
+	* vpath.c (vpath_search): Pass the `percent' members to
+	pattern_matches.
+
+Mon Aug 14 23:30:24 1989  Roland McGrath  (roland at apple-gunkies.ai.mit.edu)
+
+	* vpath.c (struct vpath): New member `percent', to hold a pointer into
+	the pattern where the % is.
+	(construct_vpath_list): Call find_percent on the pattern and set the
+	new `percent' member.
+	* read.c (read_makefile): Don't run find_percent on `vpath' directive
+	patterns.
+
+	* function.c (pattern_matches): Take new arg PERCENT, a pointer into
+	PATTERN where the % is.  If PERCENT is nil, copy PATTERN into local
+	space and run find_percent on it.
+	(expand_function: `filter', `filter-out'): Pass new arg to
+	pattern_matches.
+	* read.c (record_files): Pass PATTERN_PERCENT to pattern_matches for
+	static pattern rules.  Save the percent pointer into implicit rule
+	targets, and pass them to create_pattern_rule.
+	* rule.c (convert_to_pattern): Pass new arg to create_pattern_rule.
+	(create_pattern_rule): Take new arg TARGET_PERCENTS, nil or an array of
+	pointers into the corresponding elements of TARGETS, where the %s are.
+
+Sun Aug 13 00:29:19 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* Version 3.54.8.
+
+	* README.templatate, README-doc.template: New files, turned into README
+	and README-doc to go into the two distribution tar files.
+	* GNUmakefile: Added a rule to edit the version number in
+	README.template and README-doc.template, producing README and
+	README-doc.
+
+	* remake.c (update_goal_chain): If -n or -q is in effect for a
+	makefile, and it got updated, don't change STATUS, so we can still
+	return -1 (meaning nothing was done).  This avoids an infinite loop on
+	"make -n Makefile".
+
+Sat Aug 12 23:14:24 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* remake.c (notice_finished_file): Treat -q the same as -n.
+
+	* remake.c (update_goal_chain): Fixed handling of return from
+	update_file.  If -n or -q is in effect, ignore it.
+
+	* job.c (start_job): Don't test for -t.  We should never get called in
+	that case.
+
+Fri Aug 11 04:09:14 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* function.c (expand_function): Removed unused variables.
+	(handle_function): Removed unused variable.
+
+	* main.c (main): Removed unused variable.
+
+Wed Aug  9 09:37:10 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* Version 3.54.7.
+
+	* remake.c (notice_finished_file): If FILE's modtime actually changed,
+	increment files_remade.
+	(remake_file): Don't increment files_remade.
+
+	* remake.c (update_file): Don't print "up to date" messages for
+	phony files.
+
+	* job.c (child_handler): Don't set C->file->update_status to 1 if
+	start_job returns nonzero under -n or -t.
+
+	* expand.c (variable_expand): Count parens in $(foo:a=b) refs.
+
+	* main.c: Removed old declaration of `glob_tilde' (which hasn't existed
+	for a few months).
+
+Tue Aug  8 23:53:43 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* job.c (exec_command): Fixed to not ignore the last path component and
+	to do the right thing with an empty path.
+
+Fri Aug  4 15:58:19 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* remake.c (library_file_mtime): Look for libLIB.a, not /libLIB.a.
+	Do VPATH search on libLIB.a, not /usr/lib/libLIB.a
+
+Thu Aug  3 20:42:00 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* job.c [HAVE_SYS_WAIT or not USG]: If WIFSIGNALED is not defined by
+	<sys/wait.h>, define it as (WTERMSIG != 0).
+
+Tue Aug  1 19:25:34 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* remake.c (remake_file): If FILE has no commands and is a target,
+	don't set its time to now.  The time gets reset by notice_finished_file
+	anyway, and it isn't needed since check_dep checks for nonexistence.
+
+	* Version 3.54.6.
+
+	* read.c (read_makefile): Don't read off the end of the string after an
+	`include'.
+
+	* job.c (exec_command): New function to search the path for a file and
+	execute it.
+	(start_job): Use exec_command rather than execvp.
+
+	* read.c (read_makefile): Expand `include' directive args before
+	parsing them.  Allow trailing whitespace after filename.
+
+	* variable.c (target_environment): Put makelevel + 1, rather than
+	makelevel, in the `MAKELEVEL' envariable.
+
+Sat Jul 29 10:27:04 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* remake.c (notice_finished_file): Don't get the new modtime of phony
+	files.
+
+	* remake.c (remake_file): Run commands instead of touching under -t if
+	FILE->cmds->any_recurse is set.
+
+	* commands.h (struct commands): Add new member `any_recurse', to be set
+	nonzero if any `lines_recurse' element is nonzero.
+	* commands.c (chop_commands): Set the `any_recurse' member.
+
+	* commands.c (execute_file_commands): Split chopping of commands into
+	lines into new function chop_commands.
+	* commands.h: Declare chop_commands.
+
+	* read.c (read_makefile): Test for a line beginning with a tab after
+	checking for conditional lines, but before all other checks.
+
+Fri Jul 28 18:10:29 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* read.c (read_makefile): Match directives against collapsed line
+	and use that for their args.
+
+	* read.c (read_makefile): Warn about extra text after `include'.
+
+Tue Jul 25 14:34:25 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* make.texinfo (Rules: Directory Search: Selective Search): Fixed
+	example to use correct `vpath' syntax.
+
+Mon Jul 24 12:10:58 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* Version 3.54.5.
+
+	* job.c (start_job): In the child side, unblock SIGCHLD.
+
+Fri Jul 21 18:25:59 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* make.h: Don't include <sys/types.h> #ifdef sun.
+
+Mon Jul 17 14:29:10 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* implicit.c (pattern_search): If ar_name (FILENAME), don't check for
+	directory names.
+
+	* job.c (wait_for_children): Changed "waiting for children" message to
+	"waiting for unfinished jobs".
+
+Fri Jul 14 13:17:13 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* load.c (load_average): Use an unsigned offset into kmem.
+
+Thu Jul 13 18:44:49 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* variable.c (pop_variable_scope): Don't free the head of the chain of
+	variables in each bucket twice.
+
+Tue Jul 11 06:45:24 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* GNUmakefile: Include COPYING in the doc tar file.
+
+	* variable.c, read.c, misc.c, job.c, function.c: Replace some identical
+	"for" loops with next_token or end_of_token calls.
+
+Mon Jul 10 16:55:08 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* Version 3.54.4.
+
+	* compatMakefile: Documented new conditionals.
+
+	* job.c: Don't define sys_siglist if HAVE_SIGLIST is defined.
+	Don't define dup2 if HAVE_DUP2 is defined.
+
+	* job.c (child_handler): Interpret the return from start_job correctly.
+
+	* remake.c (update_file_1): Don't write "target not remade because of
+	errors" message under -n or -q.
+
+	* read.c: Declare getpwnam.
+
+	* glob.c: Use <dirent.h> if DIRENT is defined.
+	[USG]: Don't declare memcpy, since <memory.h> does.
+
+Fri Jul  7 20:53:13 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* misc.c (collapse_line): Copy the line over in the right place.
+
+Fri Jul  7 18:33:24 1989  Roland McGrath    (fsf at void.ai.mit.edu)
+
+	* remake.c: Conditionalize inclusion of <sys/file.h> on not
+	USG, since HP-UX defines a `struct file' there.
+
+Fri Jul  7 12:11:30 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* job.c: If WTERMSIG is defined by <sys/wait.h>, define WAIT_T as int,
+	and don't define other macros; this covers HP-UX.
+	If WTERMSIG is not defined, use int or union wait based on USG and
+	HAVE_SYS_WAIT; this covers BSD and SysV.
+
+	* Version 3.54.3 (alpha).
+
+	* job.c [USG and not USGr3]: Include <errno.h> and declare errno.
+
+	* job.c (unblock_children [USG]): Declare child_handler.
+
+	* job.c: Renamed WRETCODE to WEXITSTATUS.
+	[HAVE_SYS_WAIT or not USG]: Undefine WTERMSIG, WCOREDUMP, and
+	WEXITSTATUS before defining them.  The HP-UX <sys/wait.h> defines them.
+
+	* main.c (main): If there are no goals, fatal AFTER printing the data
+	base under -p.
+
+Thu Jul  6 22:43:33 1989  Roland McGrath  (roland at apple-gunkies.ai.mit.edu)
+
+	* glob.c [USG]: #define rindex as strrchr.
+
+	* job.c [USG]: Include <sys/param.h> and #define getdtablesize() as
+	NOFILE.
+
+Wed Jul  5 09:36:00 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* Version 3.54.2 (alpha).
+
+	* expand.c (variable_expand): When expanding recursive variable
+	references (${${a}}), use the correct delimiters in the constructed
+	variable reference.
+
+Mon Jul  3 18:29:26 1989  Roland McGrath  (roland at apple-gunkies.ai.mit.edu)
+
+	* compatMakefile: Clear out and redefine the .SUFFIXES list because
+	silly Sun 4 make defines .cps.h.
+
+	* compatMakefile: Fix comment about -DNO_MINUS_C_MINUS_O.
+
+	* remake.c: Include <sys/file.h> for O_* on 4.2.
+
+	* commands.c: Define sigmask if it's not defined.
+
+Fri Jun 30 07:33:08 1989  Roland McGrath  (roland at apple-gunkies.ai.mit.edu)
+
+	* remake.c (remake_file): Don't always increment files_remade.
+
+	* variable.c (push_new_variable_scope): Zero the new variable hash
+	table.
+
+Thu Jun 29 17:14:32 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* expand.c (variable_expand): When terminating the variable expansion
+	buffer, use variable_buffer_output instead of a simply zero store,
+	because the buffer may need to be enlarged.
+
+Wed Jun 28 16:53:47 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* Version 3.54.
+
+	* default.c (default_suffixes): Added `.ln'.
+	(default_suffix_rules): Changed lint rules to use -C.
+
+Thu Jun 22 20:49:35 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* job.c (start_job): Set `environ' to CHILD->environment before execing
+	in the child process!
+
+Tue Jun 20 17:23:13 1989  Roland McGrath  (roland at spiff.ai.mit.edu)
+
+	* compatMakefile: Put job.h and rule.h in `srcs'.
+
+	* Version 3.53.
+
+Mon Jun 19 16:25:18 1989  Roland McGrath  (roland at spiff.ai.mit.edu)
+
+	* job.c (start_job): If there are no more commands, return nonzero
+	under -n or -t.
+
+	* compatMakefile (make): Pass `-f' to mv.
+
+	* GNUmakefile: If `ARCH' or `machine' is defined, make $(ARCH)/*.o and
+	$(ARCH)/make instead of *.o and make.
+
+	* function.c (string_glob): Don't try to use freed storage!
+
+	* read.c (readline): If there is only one byte of space in the buffer,
+	enlarge the buffer before reading more.
+
+	* arscan.c [M_XENIX]: Miscellaneous minor changes for Xenix.
+
+Sun Jun 18 13:07:45 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* GNUmakefile (depend): Split commands into two lines so they won't be
+	so long when variable-expanded.
+
+	* compatMakefile: Documented MINUS_C_MINUS_O meaning.  The line
+	describing it got removed when the USG/wait stuff was documented.
+
+Sat Jun 17 22:56:54 1989  Roland McGrath  (roland at hobbes.ai.mit.edu)
+
+	* Version 3.52.
+
+Mon Jun 12 17:45:11 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* remake.c (check_dep): Drop circular dependencies instead of fataling.
+	(update_file_1 already does this.)
+
+	* default.c (default_suffix_rules): For .s -> .o, put the -o flag to
+	the assembler before the source file name.
+
+Sun Jun 11 12:00:52 1989  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* Version 3.51.
+
+	* make.texinfo (Features): Noted 1003.2 requirement of `+' meaning.
+
+	* file.c (remove_intermediates): If !SIG, write a single "rm" command
+	line, listing all files.
+
+	* read.c (read_makefile): Don't free the storage for the passed
+	filename, since it might not be malloc'd.  When doing an included
+	makefile, free the name's storage.
+	(read_all_makefiles): Use variable_expand to find the value of
+	`MAKEFILES'.  Free the storage for the names of -f makefiles.
+	(read_makefile): Allocate storage for the makefile name in the
+	`struct file' in read_makefiles.
+
+	* make.texinfo (Running: Instead of Execution): Document the effect of
+	+ and $(MAKE)/${MAKE}.
+
+	* make.texinfo (Functions: Foreach Function): Document that if the
+	iteration variable was undefined before the `foreach' call, it will be
+	undefined after the call.
+
+	* commands.c: Split into commands.c, job.h, and job.c.
+
+	* rule.c (try_implicit_rule, pattern_search): Moved to new file
+	implicit.c.
+
+	* rule.c: Split into rule.h, rule.c, and default.c.
+	* default.c (install_default_pattern_rules): Renamed to
+	install_default_implicit_rules.
+	* make.h, main.c (main): Renamed uses.
+
+	* make.c: Renamed to misc.c.
+
+	* make.c (main, log_working_directory, decode_switches,
+	decode_env_switches, define_makeflags, die, print_version,
+	print_data_base): Moved to new file main.c.
+
+	* commands.c (execute_file_commands): Don't collapse backslash-newlines
+	here.  When chopping the commands up into lines, don't chop at
+	backslash-newlines.
+	(start_job): Collapse backslash-newlines after printing the line.
+
+	* commands.c (start_job): Don't collapse backslash-newlines here.
+	(execute_file_commands): Collapse backslash-newlines before chopping
+	the commands up into lines.
+
+	* commands.c (set_file_variables): Initialize the length counters for
+	$^ and $? to zero!
+
+	* commands.c (start_job): Use vfork instead of fork.  Someone else says
+	the child and parent DO have separate file descriptors.
+
+	* variable.c: Split internals into variable.c, function expansion into
+	function.c, and variable expansion into expand.c.
+	* function.c (handle_function): New function to check for a function
+	invocation and expand it.
+	* expand.c (variable_expand): Use handle_function.
+	* variable.c (push_new_variable_scope): New function to push a new
+	empty variable set onto the current setlist.
+	(pop_variable_scope): New function to pop the topmost set from the
+	current setlist and free its storage.
+	* function.c (expand_function: `foreach'): Push a new variable scope
+	for the iteration variable and pop the scope when finished.
+	* variable.h: Declare new functions.
+	* variable.c (initialize_variable_output): New function to return a
+	pointer to the beginning of the output buffer.
+	(save_variable_output): New function to save the variable output state.
+	(restore_variable_output): New function to restore it.
+	* expand.c (variable_expand): Use initialize_variable_output.
+	(allocated_variable_expand): Use {save,restore}_variable_output.
+	* variable.c (current_setlist): Renamed to current_variable_set_list
+	and made global.
+
+Sat Jun 10 00:11:25 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* remake.c (library_file_mtime): Check for libNAME.a in the current
+	directory before doing VPATH search.
+
+	* variable.c (print_variable_set): Don't write "# Variables", and write
+	fewer blank lines.
+	(print_variable_data_base): Precede the variables with "# Variables".
+
+	* make.c (main): Print the data base under -p after doing everything
+	else, just before exitting.  This way it gets info determined in
+	updating the goal targets.
+
+	* variable.c (print_variable_data_base): Split into print_variable,
+	which prints one variable, and print_variable_set, which prints a set.
+	Replaced with a call to print_variable_set for the global set.
+	(print_file_variables): New function to print a given file's local
+	variables.
+
+	* file.c (print_file_data_base): Call print_file_variables to print
+	each file's local variables.
+
+	* commands.c (set_file_variables): Actually define the values for
+	the $^ and $? variables!!!
+
+	* make.texinfo (Implicit: Pattern Rules: Automatic): Document new D and
+	F versions of $^ and $?.
+
+	* commands.c (start_job): In the child fork, use getdtablesize and a
+	loop to close all file descriptors other than 0, 1, and 2.  We need to
+	do this since not only the bad stdin pipe, but also some directories,
+	may be open.
+
+	* commands.c (start_job): Use fork instead of vfork, because a vfork
+	parent and child share file descriptors, and our child needs to diddle
+	with stdin.
+
+	* variable.c (initialize_file_variables): When created a new variable
+	set, zero out the hash table.
+
+	* variable.c (target_environment): Don't use variables whose names are
+	not made up of alphanumerics and underscores.
+
+	* remake.c (update_file_1): Set the `parent' member of each dependency
+	to FILE before updating it.
+
+	* file.h (struct file): Add `parent' member.
+
+	* variable.c (initialize_file_variables): Don't take second arg PARENT.
+	Use FILE->parent instead.  If FILE->parent->variables is nil, recurse
+	to initialize it.
+
+	* variable.h: Declare {allocated_}variable_expand_for_file.
+
+	* variable.c (allocated_variable_expand): Now
+	allocated_variable_expand_for_file, calling variable_expand_for_file,
+	and taking second arg FILE.
+	(allocated_variable_expand): New function, a wrapper around
+	allocated_variable_expand_for_file, passing a nil second arg.
+
+Fri Jun  9 12:11:45 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* commands.c (start_job): On the child side of the fork, always close
+	the bad stdin file descriptor.
+
+	* commands.c (struct child): New member `environment', to hold the
+	environment for the child.
+	(execute_file_commands): Set the new childs `environment' member to nil
+	before calling start_job.
+	(start_job): Set up CHILD->environment before running the commands if
+	it is nil.
+
+	* make.c (main): Don't call new_environ.  `shell' functions will now be
+	run with the environment make was called with.
+
+	* commands.c (child_handler): Don't check C->command_ptr before calling
+	start_job since we now have to check C->file->cmds->command_lines and
+	it's easier to let start_job handle all that.
+
+	* commands.c (struct child): New member `command_line', to hold an
+	index into file->cmds->command_lines.
+	(execute_file_commands): Set the new child's `command_line' to 0 and
+	its `commands' and `commands_ptr' to nil.
+	(start_job): When CHILD->command_ptr runs out, increment
+	CHILD->command_line and run the corresponding line from
+	CHILD->file->cmds->command_lines.  Run it even under -t, -q, or -n if
+	the CHILD->file->cmds->lines_recurse element for that line is set.
+
+	* commands.c (execute_file_commands): Chop CMDS up into lines, setting
+	its `command_lines' and `lines_recurse' members, if it wasn't already
+	chopped.
+
+	* commands.h (struct commands): New members `command_lines' and
+	`lines_recurse'.  The first is an array of chopped-up lines; the second
+	is an array of flags, each nonzero if the corresponding line is
+	recursive.
+
+	* variable.c (variable_expand_for_file): If FILE is nil, just do a
+	vanilla variable_expand.
+	(expand_function: `shell'): Pass second arg (as nil) to
+	construct_command_argv.
+
+	* commands.c (construct_command_argv): Use variable_expand_for_file on
+	`$(SHELL)' and `$(IFS)' instead of lookup_variable to check those
+	variables.  This handles file-local and recursive values correctly.
+	To support this, take an additional argument FILE.
+
+	* variable.c (initialize_file_variables): New function to initialize
+	FILE's variable set list from PARENT's setlist.  PARENT is the
+	immediate dependent that caused FILE to be remade, or nil if FILE is a
+	goal.  (When user-level per-file variables are implemented, PARENT
+	should be passed as nil when defining per-file variables.)
+
+	* variable.c (variable_expand_for_file): New function to expand a line
+	using the variable set of a given file, and reporting error messages
+	for the file and line number of that file's commands.
+
+	* variable.h: Don't declare lookup_variable_for_file.
+
+	* variable.c (lookup_variable_*): Turned back into lookup_variable.  It
+	now uses current_setlist.
+	(global_setlist): New static `struct variable_set_list', a setlist
+	containing global_variable_set.
+	(current_setlist): New static `struct variable_set_list *', a pointer
+	to the current variable set list.
+	(define_variable): Define in the current top-level set, not the global
+	set.
+
+	* commands.c (set_file_variables): New function to set up the automatic
+	variables for a file in its own variable set.
+	(execute_file_commands): Use set_file_variables.
+
+	* variable.c (new_environ): Replaced with target_environment, taking an
+	argument FILE, and returning an environment for FILE's commands.
+
+	* variable.c, variable.h: Remove all global special variable pointers.
+
+	* variable.c (define_variable_for_file): New function like
+	define_variable, but takes additional arg FILE, and defines the
+	variable in the variable set at the top of FILE's chain.
+	(lookup_variable_for_file): New function like lookup_variable, but
+	takes additional arg FILE, and looks the variable up in all of FILE's
+	variable sets.
+
+	* file.h (struct file): New member `variables', a `struct
+	variable_set_list' containing the list of variable sets used in the
+	expansion of the file's commands.
+
+	* variable.c (variables): Replaced with static `struct variable_set'
+	global_variable_set.
+	(define_variable): Now define_variable_in_set, taking additional
+	argument SET, the `struct variable_set' to define it in.
+	(define_variable): Use define_variable_in_set with global_variable_set.
+	(lookup_variable): Now lookup_variable_in_set, taking additional
+	argument SET, the `struct variable_set' to look it up in.
+	(lookup_variable): Use lookup_variable_in_set with global_variable_set.
+	(lookup_variable_in_setlist): New function to look up a variable in a
+	`struct variable_set_list' using lookup_variable_in_set.
+
+	* variable.h (struct variable_set): New structure, containing a hash
+	table and the number of hash buckets.
+	(struct variable_set_list): New structure, containing a link for a
+	linked-list, and a `struct variable_set'.
+
+	* commands.c (start_job): Under -n, return what the recursive start_job
+	call returns, since it might actually start a child.
+
+	* make.texinfo (Rules: Wildcards): Document ~ and ~USER expansion.
+
+	* commands.c (execute_file_commands): If start_job returns
+	failure, but -t is set, set FILE->update_status to success.
+	(start_job): If -t is set, and the commands are not recursive, return
+	failure (is is done for -q).
+
+	* remake.c (touch_file): New function to touch FILE.
+	(remake_file): Use touch_file.  When touching a file, still do
+	execute_file_commands.
+
+	* remake.c (remake_file): Don't check question_flag (-q), since we
+	can't know here if the commands are recursive.
+
+	* commands.c (start_job): Don't use the `recursive' member of
+	CHILD->file->cmds.  Instead, check for leading +s and $(MAKE) or
+	${MAKE} in the command line here.
+
+	* commands.h (struct commands): Remove `recursive' member.
+
+	* rule.c (install_default_pattern_rules): Remove use of `recursive'
+	member.
+
+	* read.c (record_files): Don't check commands from $(MAKE) and set
+	their `recursive' member.
+
+	* commands.c (fatal_error_signal): Treat SIGQUIT like SIGINT, SIGHUP,
+	and SIGTERM, but don't send it to ourselves because it will cause a
+	core dump.
+
+Thu Jun  8 20:30:04 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.50.
+
+	* variable.c (variable_expand): Use allocated_variable_expand instead
+	of expand_argument in a few places.
+
+	* variable.c (allocated_variable_expand): Do static variable shuffling
+	here instead of using expand_argument.
+	(expand_argument): Use allocated_variable_expand.
+
+	* variable.c (recursively_expand): New function to recursively expand
+	its argument (a `struct variable'), returning the malloc'd value.
+	(variable_expand): Use recursively_expand.
+
+Sun May 28 12:49:27 1989  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* make.c (main): Fixed buggy fix in deciding to increase space for
+	command-line variable definitions.  (First it never did it, then it
+	always did it; now it does it when necessary.)
+
+Sat May 27 14:01:54 1989  Roland McGrath  (mcgrath at hecuba.Berkeley.EDU)
+
+	* make.c (main): Fixed bug in deciding to increase space for
+	command-line variable definitions.
+
+Fri May 26 15:48:01 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* read.c (multi_glob): Use allocated_expand_variable for checking
+	`HOME' variable for ~ expansion, since this may be called from inside a
+	`wildcard' function expansion.
+
+	* variable.h: Declare allocated_expand_variable.
+
+	* variable.c (allocated_expand_variable): New function to do variable
+	expansion in an allocated buffer, rather than the static one.
+
+	* make.c (main): Don't set glob_tilde (it no longer exists).
+
+	* variable.c (string_glob): Use multi_glob and parse_file_seq.
+
+	* read.c (multi_glob): Do ~ expansion here.
+
+	* glob.c (glob_tilde, glob_filename): Removed ~ expansion.
+
+	* variable.c (define_variable, lookup_variable): Use a smarter hashing
+	algorithm (the same one used for files and directories).
+	(VARIABLE_BUCKETS): Increased to 523.
+
+	* file.c (enter_file, lookup_file, rename_file): Use a smarter hashing
+	algorithm, spreading the bits about somewhat.
+
+	* make.c (log_working_directory): Under `-p', precede the directory
+	message with a `#'.
+
+	* make.c (print_version): Under `-p', precede each line with a `#'.
+	(print_data_base): Precede the header line with a `#' and include the
+	date and time on it.
+
+	* vpath.c (print_vpath_data_base): Precede non-directive
+	lines with `#'s.
+
+	* commands.c (print_commands): Precede the non-command line with a `#'.
+
+	* rule.c (print_rule_data_base), file.c (print_file_data_base): Precede
+	non-rule lines with `#'s.
+
+	* dir.c (print_dir_data_base): Precede all lines with `#'s.
+
+	* variable.c (print_variable_data_base): Changed format so that it can
+	be makefile input.  Lines that are not variable definitions are
+	preceded with `#'.  Nonrecursive variable definitions are made with all
+	dollar signs doubled to reproduce the initial value.  Recursive
+	variable definitions containing newlines are done with `define'
+	directives.  Nonrecursive variable definitions containing newlines, and
+	variable names containing :, =, or newlines, will come out garbled.
+
+Wed May 24 00:20:04 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.49.
+
+Tue May 23 19:18:00 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* variable.c (expand_function: `filter'/`filter-out'): Use
+	find_percent instead of pattern_p.
+
+	* variable.c (expand_function: `patsubst'): Pass new args (both nil)
+	to patsubst_expand.
+	(variable_expand): For $(var:pat%=rep%) references, pass new args to
+	patsubst_expand so as to avoid find_percent and thus disallow
+	quoting the %s.
+
+	* read.c (record_files): Pass new args to patsubst_expand.
+
+	* variable.c (patsubst_expand): Take two new args: PATTERN_PERCENT
+	and REPLACE_PERCENT.  Each of these, if non-nil, means that PATTERN
+	(or REPLACE) has already been run through find_percent, and
+	PATTERN_PERCENT (or REPLACE_PERCENT) is the result.
+
+	* make.h: Declare find_percent instead of pattern_p.
+
+	* read.c (pattern_p): Changed to find_percent, returning a pointer
+	to the %, or nil if there is none.
+	(record_files): Take another arg, PATTERN_PERCENT, a pointer to the
+	% in PATTERN.
+	(read_makefile): Pass PATTERN_PERCENT to record_files.
+
+	* make.texinfo (Rules: Static Pattern: Static Usage,
+	Rules: Directory Search: Selective Search,
+	Functions: Text Functions): Documented that `%' can be quoted.
+
+	* variable.c (expand_function: `filter'/`filter-out'): Use pattern_p
+	to allow quoted %s in patterns.
+
+	* variable.c (patsubst_expand): Use pattern_p on PATTERN and REPLACE
+	to allow quoted %s.  Quoting backslashes are removed from REPLACE
+	even if PATTERN contains no unquoted %.
+
+	* read.c (pattern_p): Made global.
+	* make.h: Declare pattern_p.
+
+	* read.c (pattern_p): New function to search for an unquoted % in a
+	string.  Backslashes quote %s and backslashes.  Quoting backslashes
+	are removed from the string by compacting it into itself.  Returns
+	nonzero if an unquoted % was found, zero if not.
+	(record_files): Use pattern_p to check for implicit rules.
+	(read_makefile): Use pattern_p to check for static pattern rules.
+	Also use it to allow quoted %s in `vpath' patterns; warn about
+	`vpath' patterns with no %s.
+
+Mon May 22 16:31:52 1989  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* glob.c (glob_filename): Replace a `1' with the `l' that should
+	have been there.  This incidentally stops it from dumping core.
+
+	* glob.c (glob_filename): If the path is just a directory, with no
+	file name pattern, return the directory alone.
+
+	* glob.c (glob_tilde): New global variable (int), defaults to zero.
+	(glob_filename): If glob_tilde is nonzero, expand ~ or ~USER.
+
+	* variable.c (string_glob): Keep a static allocated buffer for file
+	names taken from the list, instead of allocating and freeing one
+	every time.
+
+Fri May 19 18:06:26 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* make.c (decode_switches): Get floating numbers from the right string.
+
+Sun May 14 13:48:04 1989  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* commands.c (delete_child_targets): When deleting `also_make'
+	files, include the target's name in the message:
+		make: *** [foo] Deleting file `bar'
+
+Sat May 13 17:34:26 1989  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* make.c (max_load_average, default_load_average): Default to -1.
+
+	* load.c (wait_to_start_job): Return if max_load_average is < 0.0,
+	not equal.
+
+Fri May 12 16:08:05 1989  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* variable.c (variable_buffer_output): Don't try to do pointer
+	arithmetic between objects not in the same array.
+
+Wed May 10 15:55:29 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* rule.c [M_XENIX] (default_suffix_rules, default_variables): Minor
+	changes to allow for strange compiler syntax.
+
+	* rule.c (default_variables): Don't include "> $@" in
+	$(PREPROCESS.S), since it's already in the .S.s rule.
+
+	* file.c (enter_file): Make a new double-colon file the `prev'
+	member of the bottom `prev' file (the one whose `prev' is nil).
+
+	* read.c (do_define): Append newlines after copying the lines into
+	the value buffer, so we end up with a trailing newline.
+
+	* make.c (print_version): If the global variable
+	`remote_description' is not nil or "", append "-%s" (its value) to
+	the version number.
+	* remote-*.c: Define remote_description appropriately.
+
+Sun May  7 15:15:53 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* commands.c (error_status): Converted to new function child_error,
+	taking new arguments TARGET_NAME and IGNORED, and writing an error
+	message: "*** [target] Error 1" (or signal #, etc.), appending
+	" (ignored)" if IGNORED is nonzero.
+	(child_handler): Use child_error instead of error_status.
+
+	* compatMakefile (all): Don't depend on `doc'.
+
+	* compatMakefile (clean): Don't remove make-info*.
+	(realclean): New rule, depends on `clean', removes tags, TAGS,
+	and all Info and TeX files.
+
+Thu May  4 17:00:46 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* variable.c (print_variable_data_base), file.c
+	(print_file_data_base), rule.c (print_rule_data_base),
+	Use floating-point for averages and percentages.
+
+	* make.c (print_data_base): Print messages before and after the data
+	base information.
+
+	* commands.c (print_commands): Changed output format to separate
+	lines in commands and prefix them with tabs.
+
+	* dir.c (print_dir_data_base): Changed output format slightly.
+
+	* vpath.c (struct vpath, construct_vpath_list,
+	selective_vpath_search): Remove the `exists' member and its uses.
+
+	* vpath.c (print_vpath_data_base): New function to print all
+	selective and general VPATH search paths (for -p).
+
+	* make.c (print_data_base): Call print_vpath_data_base.
+
+	* file.c (print_file_data_base): Changed format to look more like a
+	makefile rule.  Now reports all information in the `struct file'.
+
+	* rule.c (print_rule_data_base): Changed format of display from:
+	  %: (terminal)
+	   depends on: RCS/%,v
+	to:
+	  %: RCS/%,v
+	    is terminal.
+	    references nonexistent subdirectory.
+	Also include number and percent that refer to nonexistent
+	subdirectories.
+
+Thu Apr 27 15:45:40 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* make.c (main): Figure out the level of recursion before writing
+	the `Entering directory' message.
+	* variable.c (define_automatic_variables): Don't figure out the
+	level of recursion from `MAKELEVEL'.  It's now done in main.
+
+	* Version 3.48.
+
+Wed Apr 26 16:39:17 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* commands.c (child_handler): Set `update_status' to zero when there
+	are no more commands.
+
+	* make.c (log_working_directory): If MAKELEVEL > 0, indicate the
+	recurson in the message (make[1]: ...).
+
+	* commands.c (child_handler): Change status to `cs_finished' when
+	commands fail.
+
+	* commands.c (start_job): Return 0 (success) if there were no more
+	commands for the child.
+	(child_handler): Change the status to `cs_finished' when start_job
+	fails to start the commands.
+
+	* make.c (main): Don't handle SIGEMT if it's not defined.
+	Do handle SIGDANGER if it is defined.
+
+	* commands.c (child_handler): Reorganized inner loop so that it
+	doesn't try to inspect the child before finding it.
+
+Tue Apr 25 16:28:24 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* make.c (end_of_token): Fixed bug wherein backslashes caused
+	immediate return.
+
+	* Version 3.47.
+
+	* make.texinfo (Implicit: Pattern Rules: Automatic): Document
+	setting of `$*' for explicit rules.  Add note clarifying that
+	automatic variables, though referred to in the documentation as
+	`$<', etc. are no different than `$(<)', etc.
+
+Fri Apr 21 18:00:12 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* file.c (enter_file): Don't strip leading `./'s.
+
+	* read.c (parse_file_seq): Strip leading `./'s.
+
+Thu Apr 13 17:26:41 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* make.texinfo (Commands: Parallel, Running: Options): Document that
+	-l with no argument removes a previous load limit.
+
+	* make.c (struct command_switch): New member `default_value'.
+	(default_job_slots): Default value (of 1) for -j.
+	(default_load_average): Default value (of 0, unlimited) for -l.
+	(command_switches): Use default values for -j and -l.
+	Also, -l without an arg now means no load limit.
+	(define_makeflags): Don't write positive_int or floating options
+	whose values are their defaults.
+
+	* make.c (main): Under -w, write a `Leaving directory' message
+	before re-execing.
+
+Tue Apr 11 16:46:29 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.46.
+
+	* Makefile: Provide an easy place for system-specific definitions
+	(-DUSG, etc.) and extra object files (for whatever).
+
+	* make.texinfo: Miscellaneous fixes from RMS.
+
+Mon Apr 10 19:31:34 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* rule.c (pattern_search): Put rules with `subdir' flags set in
+	TRYRULES, since these might be valid with VPATHs.  In the TRYRULES
+	loop, don't do lookup_file or file_exists_p calls for dependencies
+	of rules with `subdir' flags set, but still do vpath_search calls
+	and intermediate-file searches.
+
+Thu Apr  6 16:33:00 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* make.texinfo (Implicit: Pattern Rules: Automatic): Document the
+	new definition of $* for explicit rules.
+
+	* commands.c (execute_file_commands): If FILE->stem is nil, figure
+	out if FILE->name ends in a suffix in the .SUFFIXES list; if so,
+	store the name sans suffix in FILE->stem (and $*).
+
+Wed Apr  5 15:24:48 1989  Roland McGrath  (mcgrath at helen.Berkeley.EDU)
+
+	* file.c (remove_intermediates): Don't use `file_exists_p' to check
+	for the existence of intermediate files, because the hashed
+	directories will probably be out of date.
+
+	* commands.c (child_handler): Free the good stdin before running the
+	next command line.
+
+	* commands.c [USG] (init_siglist): Don't case SIGEMT if it's not
+	defined.  Do case SIGDANGER (for IBM RT) if it is defined.
+
+	* commands.c: Changed `SYS_WAIT' to `HAVE_SYS_WAIT'.
+	(child_handler): Use `wait3' if HAVE_SYS_WAIT is #defined.
+
+	* file.c (enter_file): If any `./'s are stripped off, allocate a new
+	copy of the shortened name.
+
+	* rule.c (pattern_search): Allocate the right length strings for
+	`also_make' members.
+
+Sat Apr  1 13:28:38 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.45.
+
+	* GNUmakefile: Make a separate tarfile of the DVI and info files.
+
+	* make.c (define_makeflags): If a switch that takes an argument has
+	its default value, put the switch in MAKEFLAGS with no arguments.
+
+	* make.c (command_switches): Pass `-l' in MAKEFLAGS.
+
+Wed Mar 29 17:50:05 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* GNUmakefile: Don't include the DVI and info files in the dist.
+
+	* commands.c (child_handler): Don't call
+	check_changed_{directories,vpaths}.
+
+	* make.h: Don't declare check_changed_{directories,vpaths}.
+
+	* vpath.c (check_changed_vpaths): Removed this function.
+
+	* dir.c (struct directory): Remove `modtime' member.
+	(find_directory): Don't set `modtime' member.
+	(check_changed_directories): Removed this function.
+
+	* remake.c (update_file_1): Set FILE->command_state to cs_finished
+	if it didn't need to be remade.
+
+	* remake.c (update_file): Only write the "up to date" message if the
+	target went from `not_started' state to `finished' state without
+	incrementing the count of files remade.
+
+	* commands.c [USG] (init_siglist): If both SIGCHLD and SIGCLD are
+	defined, don't put them both in the `switch'.
+
+Tue Mar 28 15:37:02 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* file.c (rename_file): Change FILE's name!!!
+
+	* rule.c (create_pattern_rule): Set the `terminal' member of the new
+	rule after calling new_pattern_rule, which zeros it.
+
+	* rule.c (default_variables): Use $(C++) in $(COMPILE.cc)!
+
+Sun Mar 26 15:52:30 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Makefile: Added a `clean' target.
+
+Fri Mar 24 15:08:46 1989  Roland McGrath  (mcgrath at helen.Berkeley.EDU)
+
+	* Version 3.44.
+
+	* file.c (rename_file): If a `struct file' for the renamed-to name
+	exists, and it is a target or has deps or commands, barf.
+	If not just remove the old one for put in the new one.
+
+	* remake.c (update_file_1, check_dep): Changed it back so that equal
+	modtimes to NOT make dependencies be considered newer.  RCS checks
+	out files with equal modtimes as the RCS files, so this screws it.
+
+	* make.h, glob.c: If __GNUC__ is defined, use __builtin_alloca.
+
+	* Makefile: Use variables `ALLOCA' and `ALLOCASRC' so systems
+	without a good standard alloca can get it from the Emacs
+	distribution (or somewhere).
+
+	* dir.c: Don't include <sys/stat.h>, since make.h does.
+
+	* make.c: Removed debugging version of getwd.
+
+Thu Mar 23 16:16:27 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.43.
+
+	* remake.c (update_file_1): If a dependency loop is found, don't
+	fatal.  Emit an error message and remove the dependency.
+
+	* remake.c (library_file_mtime): Fixed to use the right names.
+	(update_file_1, check_dep): Consider a dependency "newer" than its
+	dependent if they have the same modification time.
+
+Wed Mar 22 19:31:35 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* file.c (remove_intermediates): Don't try to remove nonexistent files.
+
+Mon Mar 20 10:21:22 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.42.
+
+	* rule.c (default_variables): Set F77 to $(FC) and F77FLAGS to
+	$(FFLAGS) so explicit rules expecting these (which are in System V)
+	will work.  However, there is no way to make setting these affect
+	the implicit rules, unless we trash FC and FFLAGS (which BSD uses).
+	[USG]: Set GET to `get' rather than `/usr/sccs/get'.
+
+Sun Mar 19 20:00:27 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* vpath.c (construct_vpath_list): Don't replace VPATH[ELEM] with
+	dir_name (V), because the latter may get freed.
+
+Sat Mar 18 15:01:39 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.41.
+
+	* make.texinfo: Cleaned-up edition 0.1 Beta from RMS and Bob Chassell.
+
+	* file.c (rename_file): If a file with the new name already existed,
+	use the same storage space, after freeing the old file's name, deps,
+	and `also_make' member, preserving the link in the chain.
+	Also write an error message telling the user to report the incident;
+	I don't think this should be able to happen, but I'm not sure.
+
+	* file.c (rename_file): Don't add the hash values of the old and new
+	names together!  Reset HASHVAL before computing the second value.
+
+	* dir.c (check_changed_directories): Zero the new file hash table
+	after allocating it.
+
+	* dir.c (dir_file_exists_p): If FILENAME is "", return 1 if the
+	directory exists.
+
+	* vpath.c (check_changed_vpaths): New function to run through the
+	search paths of all VPATHs, making the `exists' members correspond
+	to reality.
+
+	* commands.c (child_handler): Call check_changed_vpaths.
+
+	* make.h: Declare check_changed_vpaths.
+
+	* vpath.c (struct vpath): New element `exists', an array of char
+	flags; exists[N] is nonzero if searchpath[N] exists.
+	(construct_vpath_list): Set the `exists' member.
+	(selective_vpath_search): Don't search directories whose `exists'
+	elements are zero.
+
+	* read.c (read_makefile): Set the `dontcare' flag of makefiles
+	from the MAKEFILES variable if they were not mentioned anywhere but
+	in the MAKEFILES variable.
+
+	* read.c (read_makefile): Don't write an error message if fopen
+	fails for a makefile from the MAKEFILES variable.
+
+	* dir.c (struct directory): Add `modtime' member to record the
+	modification time of the directory when it was opened.
+	(check_changed_directories): New function to check all known
+	directories; if their modtimes have changed since they were opened,
+	their file tables are cleared and they are reset to be read in.
+
+	* commands.c (child_handler): Call check_changed_directories before
+	returning.
+	make.h: Declare check_changed_directories.
+
+Tue Mar 14 20:07:13 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.40.
+
+	* make.c (print_version): Made the copyright say 1988, 1989.
+
+	* read.c (read_all_makefiles): Don't set *MAKEFILES to the name of
+	the end of the read_makefiles chain, since the latter may be from an
+	included makefile.  (Why did I do this before?)
+
+	* make.c (main): Set argv[0] to "" if it was nil.  Don't put the
+	command-line variable definitions into argv[0], only into the MAKE
+	variable!
+
+Sun Mar  5 20:44:08 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* ar.c (ar_member_date, ar_touch): Remove the trailing ) from the
+	member name.
+
+Fri Mar  3 18:15:15 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* commands.c (construct_command_argv): Initialize NEW_ARGV to 0.  At
+	`slow' label, if NEW_ARGV is not 0, free it; then allocate 4 strings.
+
+Tue Feb 28 14:29:39 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.39.
+
+	* COPYING, make.texinfo: New GNU General Public License, version 1.
+
+	* *.c, *.h, Makefile: New copyright notices for the new GNU General
+	Public License, version 1.
+
+	* commands.c [USG]: Define WRETCODE correctly (again).
+
+	* variable.c (expand_function: `shell'): Don't capture the standard
+	error output of the shell command.
+
+	* ar.c (ar_touch, ar_member_date): Allocate MEMNAME with the right
+	length.
+
+	* load.c [not UMAX] (load_average): Don't clobber the first nlist
+	member when trying to set the second!
+
+Thu Feb 23 13:13:53 1989  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* commands.c (child_handler): Really ignore errors under -i and for
+	- lines, don't just print a different message.
+
+	* make.c (decode_switches): Fixed handling of arguments (or lack
+	thereof) to switches.
+
+Wed Feb 22 16:25:39 1989  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* commands.c (construct_command_argv): Don't clobber LINE when
+	checking the IFS variable.
+
+Sun Feb 19 11:17:07 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* load.c [UMAX, not NO_LDAV] (load_average): Return 0.0 rather than
+	randomness when calls fail.
+
+	* Version 3.38.
+
+	* commands.c (fatal_error_signal): If handling a user kill signal
+	(TERM, INT, HUP), wait for the children without printing the
+	"Waiting for children" message, since they will die quickly.
+
+	* Version 3.37.
+
+	* remote-stub.c (remote_status): Take another arg, BLOCK.  If this
+	is nonzero block waiting for remote children.  If not, return 0 if
+	we would have to block.
+
+	* commands.c (child_handler) [not USG]: If called as a signal
+	handler, use wait3 and don't block.
+	[USG]: If called as a signal handler, return after handling one child.
+
+Sat Feb 18 13:37:04 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* file.c (snap_deps): Process all double-colon entries of each file,
+	not just the first one.
+
+	* Version 3.36.
+
+	* remote-stub.c: remote.c renamed.
+	remote.c: Just include remote-stub.c
+
+	* commands.c (child_handler): If we were called as a signal handler,
+	return after handling one child.
+
+	* commands.c [not USG]: Include <signal.h> and define `sigmask' if
+	<signal.h> doesn't.
+	(block_children, unblock_children): Use sigmask rather than
+	bitshifting explicitly (and incorrectly).
+
+	* remote.c (remote_kill): New function to send a signal to a
+	remote child.
+
+	* commands.c (fatal_error_signal): If we get a SIGTERM, send one to
+	each living child.  If we get a SIGTERM, SIGINT, or SIGHUP, delete
+	all pending targets before waiting for children.
+	(struct child): Add new member `deleted'.
+	(start_job): Initialize `deleted' member to 0.
+	(delete_child_targets): New function to delete a given child's
+	targets, unless the `deleted' flag in the `struct child' says they
+	have already been deleted.  Sets this flag before returning.
+
+Thu Feb 16 18:32:07 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* commands.c [USG]: Define `WRETCODE' correctly (X & 0xff00).
+
+Tue Feb 14 16:05:00 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* commands.c (construct_command_argv): Don't make the 0th element of
+	the argument list be "sh" when executing /bin/sh, because start_job
+	uses the 0th element as the program name.
+
+Sun Feb 12 17:42:05 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.35.
+
+	* read.c (readline): Put a null in the beginning of the buffer
+	before starting the reading loop.
+
+	* read.c (read_makefile): Made main reading loop while
+	!feof (infile), and removed EOF check after calling readline.
+
+Sun Feb  5 19:52:38 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* remote.c (block_remote_children, unblock_remote_children): New
+	(stub) functions to block and restore asynchronous notification of
+	remote child death.
+
+	* commands.c (block_children): Call block_remote_children.
+	(unblock_children): Call unblock_remote_children.
+	(child_handler): If called as a signal handler, block remote
+	children on entry and unblock them before returning.
+
+	* commands.c (child_handler): For unknown children, if they are
+	remote, give their remote ID; if local, give their PID and make's.
+
+	* commands.c (execute_file_command): Don't put a new child in the
+	chain unless start_job succeeds.  Block children before calling
+	start_job, and unblock them after putting the child in the chain and
+	incrementing `job_slots_used' (if start_job succeeded).
+
+	* commands.c (block_children, unblock_children): Make these globally
+	visible (not `static').
+	commands.h: Declare block_children and unblock_children.
+
+	* variable.c (expand_function: `shell'): Use
+	`shell_function_completed'.  Block children before forking and
+	unblock after `shell_function_pid' is set properly and
+	`shell_functon_completed' is reset to 0.
+
+	* commands.c (child_handler): When the child of the `shell' function
+	completes, set `shell_function_completed' to 1 if it actually ran,
+	or -1 if it didn't (due to fork or exec failure).
+
+	* commands.c (block_children, unblock_children): New functions to
+	block and unblock the child termination signal.
+	(wait_for_children): Use block_children and unblock_children.
+	(execute_file_commands): Block children around the critical section
+	wherein a new child is put on the chain.
+
+	* make.c (main): Change the environment to contain the correct
+	MAKELEVEL before re-execing.
+
+Sat Feb  4 18:28:48 1989  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.34.
+
+Fri Feb  3 16:36:49 1989  Roland McGrath  (mcgrath at helen.Berkeley.EDU)
+
+	* rule.c (default_variables): Fixed $(LINK.c).
+
+Wed Feb  1 18:05:07 1989  Roland McGrath  (mcgrath at pepper.Berkeley.EDU)
+
+	* Version 3.33.
+
+	* version.c: Removed copyright notice, since this is a one-line file.
+
+	* commands.c (error_status): Made it return BUF, rather than running
+	off the end (this apparently worked on Sun 3s for some reason).
+
+	* ar.c, commands.c, dep.h, load.c, make.c, make.h, read.c, remake.c,
+	rule.c, variable.c, Makefile: Changed copyrght notices to cover 1989.
+
+Mon Jan 30 15:51:28 1989  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* Version 3.32.
+
+Fri Jan 27 20:09:24 1989  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* remake.c (remake_file): Don't touch phony targets.
+
+	* rule.c (convert_to_pattern): Fixed an incorrect length passed to
+	savestring.
+
+	* variable.c (expand_function: `shell'): Close the read side of the
+	pipe on the parent side of the fork.
+
+	* commands.c (start_job): On the child of the fork, close the
+	BAD_STDIN fd if we're not using it.
+
+	* read.c (record_files): A file beginning with a dot can be a
+	default target if it also contains a slash (as in `../foo').
+
+	* commands.c (wait_for_children): For BSD, block SIGCHLD rather than
+	ignoring it to avoid a race condition when child_handler is returning.
+
+	* commands.c (child_handler): Do blocking waits.
+	(error_status): Return a string describing exit status.  (Split out
+	of child_handler).
+
+	* read.c (multi_glob): Change VECTOR to VEC for Alliant.
+
+Thu Jan  5 00:06:51 1989  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* Version 3.31.
+
+	* make.texinfo (Features): Noted $(foo:PAT=SUB) from SunOS 4.0.
+
+	* make.texinfo (Options/Recursion): -d and -p go in the environment.
+
+	* load.c: Include "commands.h".
+
+Wed Jan  4 17:49:25 1989  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* make.c (switches): -d and -p can come from the environment and are
+	put into it.
+
+	* read.c (record_files): Fixed the checking for duplicate deps so it
+	doesn't clobber the first one.
+
+	* make.texinfo: Documented default implicit rule changes.
+
+	* rule.c: Revamped default suffix rules.  They now use Sun's style
+	of using variables `COMPILE.c', `LINK.c', etc. for each suffix, and
+	use `TARGET_ARCH' and `TARGET_MACH' variable where appropriate.
+	Also support Modula-2 compilation (suffixes .sym, .def, and .mod).
+	Ratfor Yacc support is gone, since nobody has yacc -r.
+	All EFL support is gone, since nobody uses EFL.
+
+	* ar.c, arscan.c: Don't assume `long int' and `int' are the same.
+
+	* commands.c [USG]: Fixed wait status bit encoding.
+	[USG and not USGr3] (dup2): Define this for SysVr2.
+
+	* make.h, dep.h, make.c [iAPX286]: Make allowances for this
+	brain-damaged compiler.
+
+	* make.texinfo (Variables: Flavors): Fixed a typo.
+
+Tue Jan  3 18:09:31 1989  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* ar.c (ar_member_date, ar_touch): Truncate member names to 15 chars.
+
+	* Version 3.30.
+
+	* commands.c [SYS_WAIT]: If this is defined, use BSD <sys/wait.h>
+	and wait3 even if USG.
+
+	* read.c (record_files): Defining .DEFAULT with no deps or commands
+	clears its commands.
+
+	* rule.c (default_suffixes): Added `.sh'.
+	(default_suffix_rules): Added single-suffix .sh rule, copies source
+	to target and makes target executable.
+	make.texinfo (Catalogue of Rules): Documented .sh rule and its use
+	in conjunction with SCCS.
+
+	* rule.c (set_default_suffixes): Define variable `SUFFIXES' to the
+	default list ("" under -r).
+	make.texinfo (Suffix Rules): Document `SUFFIXES' variable.
+
+	* rule.c (default_variables), make.texinfo (Implicit Variables):
+	Variable AR defaults to `ar', ARFLAGS to `rv', and RM to `rm -f'.
+
+	* rule.c (install_default_pattern_rules): Default variables are made
+	recursive.
+	(default_variables): Added "CPP", defined to "$(CC) -E".
+	(default_suffixes): Added `.S', before `.s'.
+	(default_suffix_rules): New rule for .S to .s, runs CPP.
+	All rules that use CPP now include "$(CPPFLAGS)".
+	make.texinfo (Catalogue of Implicit Rules, Implicit Variables):
+	Documented above changes.
+
+	* commands.c [USG] (sys_siglist): Don't define.
+	[USG] (init_siglist): New function to initialize sys_siglist.
+
+	* make.texinfo (Variables: Reference): Documented `$(foo:PAT=SUB)'
+	references.
+
+	* variable.c (variable_expand): A reference `$(foo:PAT=SUB)' is
+	equivalent to `$(patsubst PAT,SUB,$(foo))'.
+
+	* variable.c (variable_expand): Free the storage for the expansion
+	of a recursive variable when it is nod longer needed.
+
+	* variable.c (variable_expand): When checking for `$($(foo))', use
+	lindex so as not to search for the second `$' outside the parens.
+
+	* make.c (struct stringlist, main, decode_switches): Changed `index'
+	member to `idx'.
+
+Sat Dec 24 16:02:32 1988  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* commands.c (wait_for_children [USG]): Handle SIGCLD with SIG_DFL,
+	rather than SIG_IGN.  Ignoring SIGCLD reportedly makes wait return -1.
+
+	* arscan.c [USGr3]: Define PORTAR to 1 (as with sun386).
+	(ar_scan [USGr3]): Remove trailing slashes from member names.
+
+Thu Dec 22 17:54:05 1988  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* make.texinfo (Makefiles: Overriding Makefiles): New node
+	documenting use of .DEFAULT to have one makefile defer unmakeable
+	targets to another.
+
+	* make.texinfo (Implicit: Using Implicit, Implicit: Last Resort):
+	Mention empty commands and xref node `Empty Commands'.
+
+Wed Dec 21 20:12:40 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* Version 3.29.
+
+	* make.c (struct command_switch, command_switches, et al): New
+	member `noarg_value', if not nil, ptr to value to use if no arg is
+	given to a switch that would otherwise require one.  The -j option
+	can now be given w/o an arg, to mean infinite jobs.
+	* commands.c: If job_slots is zero, infinite jobs.
+
+	* read.c (read_all_makefiles, read_makefile): Make makefiles precious.
+
+	* make.c (decode_switches): For a positive_int or floating option,
+	if we moved to the next argument word, but found no argument for the
+	option, move back to the correct word.
+
+	* make.c (decode_switches): If we got any unknown options, die after
+	processing all arguments.
+
+	* GNUmakefile: Moved `include depend' to the end, so the default
+	goal will be set before then.
+
+	* load.c (wait_to_start_job [Unix, UMAX]): Merged into one version
+	under #ifdef LDAV_BASED.  Only loop while we have jobs running.
+	Sleep for increasing amounts (increase one second per iteration)
+	before checking the load average (after the first check).
+	Get the load average from function load_average.
+	(wait_to_start_job [not LDAV_BASED]): Always return.
+	(load_average [UMAX]): Fetch load average for Encore UMAX.
+	(load_average [not NO_LDAV]): Fetch load average from /dev/kmem.
+	[not NO_LDAV]: Define LDAV_BASED.
+
+Tue Dec 20 18:54:50 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* Version 3.28.
+
+	* commands.c (wait_for_children): Take second arg, ERROR.  If
+	nonzero, and there are children, print a message on stderr.
+	(execute_file_commands, fatal_error_signal): Pass second arg.
+	* make.c (die), remake.c (update_goal_chain), variable.c
+	(expand_function: `shell'): Ditto.
+
+Sat Dec 17 01:05:38 1988  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* commands.c (start_job): Call wait_to_start_job before forking.
+
+	* load.c (load_average): Converted to wait_to_start_job.
+
+	* remote.c: New file for remote execution functions.
+	(start_remote_job_p): Return nonzero if the next job should be run
+	remotely.
+	(start_remote_job): Start a remote job and return an ID for it.
+	(remote_status): Get status of dead remote children.
+
+Fri Dec 16 16:51:07 1988  Roland McGrath  (mcgrath at hecuba.Berkeley.EDU)
+
+	* commands.c (start_job): If start_remote_job_p () returns nonzero,
+	call start_remote_job to start the job rather than fork and exec.
+	(child_handler):
+
+	* commands.c (execute_file_commands): Moved load average checking to
+	start_job.
+
+	* commands.c (child_handler: USG): Record the pid wait returns.
+
+	* load.c (UMAX): Added some #include's needed for UMAX.
+
+	* read.c (multi_glob), variable.c (string_glob): Ignore a (char **)
+	-1 return from glob_filename.
+
+	* variable.c (variable_expand): Make sure we don't increment past
+	the end of the string we were passed.
+
+	* variable.c (variable_expand): Terminate the expansion.
+
+	* file.c (rename_file): If there is already a file under the new
+	name, set its contents equal to FILE's (ick).
+
+	* variable.c (define_automatic_variables): Pass all the args to
+	define_variable when defining MAKELEVEL!
+
+	* commands.c (execute_file_commands): If max_load_average > 0, and
+	we have children running, don't start up another child until the
+	load average goes below max_load_average.
+
+	* make.c: New variable `max_load_average'.
+	(struct command_switch, decode_switches, decode_env_switches):
+	Handle floating-point (double) args.
+	(command_switches): Added `-l' switch to set `max_load_average'.
+
+	* load.c (load_average): New file and function to return a double
+	that is the current load average (1.00 scale).
+	* GNUmakefile, oldMakefile: Pass flags in $(LOAD_AVG) for load.c.
+
+Thu Dec 15 15:22:08 1988  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* Makefile: Renamed to oldMakefile.
+	* GNUmakefile: Make Makefile from oldMakefile and depend.
+
+	* read.c (read_all_makefiles): When putting the default makefiles in
+	the read_makefiles chain so they will be remade, put them in the
+	right order.
+
+	* remake.c (update_goal_chain): If MAKEFILES is nonzero, always make
+	in serial, and return as soon as one goal whose `changed' member is
+	nonzero  is successfully remade.
+
+	* commands.c: Don't include <sys/fcntl.h>.
+
+	* commands.c (construct_command_argv): Added ` to sh_chars.
+
+	* make.h: Don't declare construct_makeflags.
+
+	* make.c (main): Set up MAKEFLAGS and MFLAGS and make an environment
+	both before and after reading the makefiles, so the makefiles can
+	use them and possible change them, and later children will get the
+	right information.
+	(construct_makeflags): Replaced with define_makeflags (static void),
+	which defines the two variables.
+	* variable.c (define_automatic_variables): Don't define MAKEFLAGS
+	and MFLAGS.
+
+Mon Dec 12 14:40:31 1988  Roland McGrath  (mcgrath at helen.Berkeley.EDU)
+
+	* Version 3.27.
+
+	* commands.c (child_handler): Reset the handler to ourselves when
+	called for USG, since it has no safe signals.
+
+	* commands.c: For USG, use an int rather than a `union wait' for
+	wait calls, and dissect it with bitmasks.
+	(child_handler): No wait3 system call in USG.  Since we can't
+	protect from hanging, always return immediately if we have no
+	children we know about and we're not running a `shell' function.
+	(There is still the danger of hanging waiting for a child that died
+	without our being notified.)
+
+	* remake.c: Include <fcntl.h> instead of <sys/file.h>.  What we need
+	is really in <fcntl.h>, and while BSD <sys/file.h> includes
+	<fcntl.h>, USG doesn't.
+
+	* make.c (main): Figure out the program name before doing anything
+	which might need it (in a call to error or fatal).
+
+	* dir.c, glob.c: Use `struct dirent' and <dirent.h> for USGr3.
+
+	* arscan.c (ar_scan): Added missing & before buf (which is an int)
+	if SARMAG is not defined (SysV).
+
+Fri Dec  9 18:44:13 1988  Roland McGrath  (mcgrath at pepper.Berkeley.EDU)
+
+	* Version 3.26.
+
+	* dir.c (find_directory, dir_file_exists_p): Keep track of how many
+	directories we have open and don't let it be more than
+	MAX_OPEN_DIRECTORIES (currently 10).
+
+	* variable.c (expand_function: `foreach'): Use expand_argument
+	rather than variable_expand so each repetition doesn't clobber the
+	last!!!
+
+Mon Dec  5 15:58:46 1988  Roland McGrath  (mcgrath at hecuba.Berkeley.EDU)
+
+	* Version 3.25.
+
+	* Makefile: Define `install' target.
+
+	* GNUmakefile: Don't include GNUmakefile or depend in the
+	distribution file.
+
+Wed Nov 30 15:53:42 1988  Roland McGrath  (mcgrath at helen.Berkeley.EDU)
+
+	* commands.c (execute_file_commands): Don't clobber a null into
+	random storage if there were no $^ and/or $? words.
+
+	* remake.c (check_dep): Set *MUST_MAKE_PTR nonzero if a dependency
+	doesn't exist.
+
+	* ar.c (ar_member_date, ar_touch): Make sure the modtime of the
+	archive file itself is known before we fetch or change the modtime
+	of one of its members.
+
+	* read.c (read_makefile): Expand variable and function references
+	before parsing rules so variable can contain special characters
+	(colons and semicolons).
+
+Sat Nov 26 11:36:31 1988  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* variable.c (expand_function: `filter', `filter-out'): Fixed so
+	that filter-out works right.
+
+	* variable.c (expand_function: `filter', `filter-out'): Made these
+	functions use each word of their first argument as a pattern.
+
+Fri Nov 25 10:51:47 1988  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.24.
+
+	* read.c (record_files): If a target is listed more than once in a
+	single rule (that defines commands), give a warning message rather
+	than the counter-intuitive message saying commands were already
+	defined (in the same place).
+
+	* make.c (fatal, error): Made them both take 6 args since there is
+	at least one error message that need that many.  Too bad vfprintf is
+	not universal!
+
+	* Version 3.23.
+
+	* read.c (read_makefile): Moved the construction of the `struct
+	commands' into record_files.  Call record_files before recursing for an
+	included makefile so the higher-up will determine the default goal.
+	(record_files): Take arguments COMMANDS, COMMANDS_IDX and
+	COMMANDS_STARTED and construct a `struct commands.
+
+Thu Nov 24 14:36:33 1988  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.22.
+
+	* make.c (main): Made it a fatal error if we can't move back to the
+	directory we started in before re-execing.
+
+	* make.c (main): Get the current directory before doing anything
+	else, so we know it even if we don't need it for the value of
+	`MAKE', since we might want it when re-execing.
+
+Wed Nov 23 13:34:44 1988  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* Version 3.21.
+
+	* read.c (record_files): Eliminate duplicate deps in a chain.
+
+	* variable.c (expand_function: `sort'): Pass the right number to
+	qsort, not one less.
+
+	* remake.c (remake_file): Always call notice_finished_file if
+	FILE->command_state == cs_finished.
+
+	* commands.c (execute_file_commands): Call notice_finished_file to
+	set FILE's status correctly when start_job fails (because it's out
+	of commands or running under -n).
+
+Fri Nov 18 15:31:12 1988  Roland McGrath  (mcgrath at saffron.Berkeley.EDU)
+
+	* Version 3.20.
+
+	* remake.c (update_file_1): Set the `update_status' of FILE to
+	nonzero and set FILE's `updated' bit if we have decided to give up
+	on remaking FILE because of errors in the dependencies.
+
+	* rule.c (pattern_search): Debugging messages use `dependency' (vs.
+	`dependent') properly.
+
+	* make.texinfo (Conditionals: Conditional Syntax): Function index
+	entries for `ifndef' and `ifneq'.
+
+	* variable.c (define_automatic_variables): Define `MAKELEVEL' to the
+	decimal number of the makelevel, since it may be malformed or blank.
+
+	* remake.c (remake_file): Call notice_finished_file after touching.
+
+Sat Nov 12 19:29:34 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* Version 3.19.
+
+	* GNUmakefile (dist): Pass the `-f' flag to compress.
+
+	* vpath.c (build_vpath_lists): Check for VPATHS being nil after
+	constructing the general VPATH list from the `VPATH' variable.
+
+Fri Nov 11 08:02:26 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* make.c (fatal, error): Made error messages for recursive runs be
+	shorter.
+
+Thu Nov 10 16:51:36 1988  Roland McGrath  (mcgrath at basil.Berkeley.EDU)
+
+	* Version 3.18.
+
+	* read.c (read_makefile): Made it eat leading spaces and formfeeds
+	(but not tabs), like it's documented to.
+
+	* read.c (read_makefile): Let included makefiles determine the
+	default goal, as is done by System V Make.
+
+Tue Nov  1 19:03:08 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* variable.c (new_environ): Don't increment VCNT when a variable is
+	rejected.
+
+Fri Oct 28 16:54:15 1988  Roland McGrath  (mcgrath at basil.Berkeley.EDU)
+
+	* Version 3.17.
+
+	* rule.c (convert_to_pattern): Don't use the same storage for a name
+	in two rules since new_pattern_rule may free this storage when a
+	rule is discarded.
+
+	* rule.c (new_pattern_rule): Undid useless change I made Oct 25.
+
+Thu Oct 27 19:17:53 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* Version 3.16.
+
+	* GNUmakefile, Makefile: Fixed a typo in a comment.
+	* Makefile: Removed malloc.o from object file list.
+
+	* variable.c: Removed old debugging #define's for xmalloc and
+	xrealloc so non-ANSI cpp's won't barf.
+
+	* make.c (main): Made local array for temp file name static so
+	compilers that don't do auto aggregate initialization won't barf.
+
+	* read.c: Removed static declaration of copy_dep_chain since it is
+	no longer static.
+
+Tue Oct 25 16:59:30 1988  Roland McGrath  (mcgrath at pepper.Berkeley.EDU)
+
+	* rule.c (new_pattern_rule): If we threw out the new rule because it
+	matched an old one and OVERRIDE was zero, don't put the freed
+	pointer in the chain!
+
+Wed Oct 19 15:07:43 1988  Roland McGrath  (mcgrath at pepper.Berkeley.EDU)
+
+	* Version 3.15.
+
+	* variable.c (expand_function: `sort'): Don't do the sorting and
+	writing out if there were no words in the first place.
+
+	* remake.c (remake_file): Only fail with a "no way to make" message
+	for a dependency (non-target) file.  If we don't know how to remake
+	a target file, pretend it was successfully remade and is very new.
+
+	* remake.c (remake_file): Don't increment `files_remade' for a
+	non-target file we don't know how to remake.
+
+	* read.c (record_files): Don't die with "both : and :: entries" for
+	a file whose `is_target' flag is not set.
+
+Tue Oct 18 17:24:11 1988  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* variable.c (expand_function: `patsubst', `subst'): Free the right
+	things!
+
+	* variable.c (expand_function: `subst'): Don't clobber the
+	pointer to the end of the second arg and then try to use it!!!
+
+Mon Oct 17 16:44:45 1988  Roland McGrath  (mcgrath at catnip.Berkeley.EDU)
+
+	* variable.c (expand_function: `patsubst'): Don't clobber the
+	pointer to the end of the second arg and then try to use it!!!
+
+	* variable.c (expand_function: `word' function): Made it parse its
+	second argument correctly.
+
+	* ar.c (ar_touch): Return 1 rather than -1 for on errors.
+
+Sat Oct 15 15:12:16 1988  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* Version 3.14.
+
+	* GNUmakefile: Removed explicit rule for make.dvi since the built-in
+	implicit rule now works.
+
+	* rule.c (default_suffix_rules): Fixed .texinfo.dvi rule yet again
+	so that it really works, now that parens are counted.
+
+	* remake.c (update_file_1): Set FILE's `updated' flag after calling
+	remake_file if it failed or finished immediately.
+
+	* remake.c (update_file): Use the `updated' flag rather than the
+	command state to decide if a file was fully considered, and
+	therefore might give an "up to date" message.
+
+	* variable.c (expand_function): Made all functions that take more
+	than one argument count parens of the appropriate flavor in their
+	args and ignore commands nested in parens.
+
+Fri Oct 14 18:35:00 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* read.c (read_all_makefiles): Pass second arg to read_makefile for
+	default makefiles.
+
+Thu Oct 13 16:40:08 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* Version 3.13.
+
+	* GNUmakefile: Added an explicit rule for make.dvi since the
+	built-in .texinfo.dvi implicit rule is screwed up.
+
+	* rule.c (default_suffix_rules): Added a comment that the
+	.texinfo.dvi rule does not work because of an ahem, feature of Make
+	that at some point will be fixed--er, enhanced to alleviate this
+	difficulty.
+
+	* rule.c (default_suffix_rules): Fixed Texinfo -> DVI rule (again).
+
+	* make.texinfo (Commands: Execution): Documented new competing for
+	standard input among children.
+
+	* commands.c (struct child): Added `good_stdin' flag to tell if this
+	child has the stdin that doesn't point into nirvana.
+	(good_stdin_used): New variable to tell if any child has the good
+	standard input.
+	(child_handler): Reset `good_stdin_used' if a dead child's
+	`good_stdin' flag is set.
+	(start_job): Give the new child the good standard input if
+	`good_stdin_used' is no set, and set the child's `good_stdin' flag
+	appropriately.
+
+	* rule.c (default_suffix_rules): Changed Texinfo -> DVI rule to work
+	better (I hope).
+
+	* read.c (read_all_makefiles): Stop reading default makefiles after
+	one is found.
+
+	* read.c (read_makefile): Reset `reading_filename' and
+	`reading_lineno_ptr' after recursing for an included makefile.
+
+	* GNUmakefile: New GNU Make-specific makefile that does everything
+	Makefile does plus distribution stuff, and doesn't contain any hacks
+	to try to work with Unix make.
+
+	* Makefile: Removed distribution stuff.
+
+	* make.c (main): Use mktemp to construct the names of temporary
+	files used for standard input makefiles.
+
+	* make.c (main): Don't turn standard input into a broken pipe.
+
+	* commands.c (start_job): Keep two extra file descriptors around: a
+	good standard input, and a bad one that reads from a broken pipe.
+	On the child side of the fork, if there are other children, give
+	this one the broken pipe so they won't compete; if this is the only
+	one, give it the good standard input.
+
+	* make.h: Declare notice_finished_file.
+
+	* commands.c (execute_file_commands): Use noticed_finished_file
+	after waiting for the child when there is only one job slot.
+
+	* remake.c (notice_finished_file): New function to re-check mtime's
+	and such things to be done when commands finish.
+	(update_file_1): Use notice_finished_file.
+
+	* commands.c (child_handler, execute_file_commands): Use new
+	variable `job_slots_used' to record the number of jobs currently
+	running, rather than diddling with `job_slots'.
+	(execute_file_commands): Increment `job_slots_used' before calling
+	start_job and decrement it on failure to avoid race condition.
+	If there is only one job slot, wait for the child to finish and
+	return its status so commands are run in linear order, as if there
+	were no parallelism.
+
+Wed Oct 12 15:59:03 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* remake.c (remake_file): Don't print a "No way to make" message for
+	targets whose `dontcare' flags are set.
+
+	* read.c (read_all_makefiles): Set the `dontcare' flag of the
+	`struct file' each default makefile added to the chain.
+
+	* file.h (struct file): Add `dontcare' member.
+
+	* read.c (read_all_makefiles): When no default makefiles are found,
+	put the names of all those tried in the `read_makefiles' chain so
+	they will be updated if possible, giving their `struct dep's'
+	`changed' members the value of 0 so we won't care if they cannot be
+	found or remade.
+
+	* make.texinfo (Makefiles: Remaking Makefiles): Documented that
+	default makefiles will be remade if not found.
+
+	* read.c (read_all_makefiles): If no default makefiles can be found,
+	go through the list of default names, trying to make one, stopping
+	if one is made.
+
+	* remake.c (remake_file): Set STATUS to 0 after successfully touching.
+
+	* dir.c (file_impossible, file_impossible_p): Don't clobber FILENAME
+	to "" and then try to to a strcmp on it!!!
+
+Mon Oct 10 16:09:18 1988  Roland McGrath  (mcgrath at cinnamon.Berkeley.EDU)
+
+	* make.c (main): Don't do `dir_load (".")'.
+
+	* rule.c (count_implicit_rule_limits), vpath.c
+	(construct_vpath_list): Test the existence of a given directory by
+	`dir_file_exists_p (DIR, ".")' and assume that if this returns zero,
+	it means the directory really does not exist.
+
+	* dir.c (struct dirdata): Replaced with `struct directory' for
+	directories, each containing a chain of `struct dirfiles', one for
+	each file (real or impossible).
+	(dir_load): Removed.
+	(find_directory): New function to find the `struct directory' for a
+	named directory and return it (possibly creating a new one).
+	(dir_file_exists_p): Read the directory on the fly if its stream is
+	still valid (and ever was) if the file we're looking for is not
+	already in the hash tables.
+	(file_impossible, file_impossible_p, dir_name, print_dir_data_base):
+	Use the new directory/file scheme.
+
+	* make.texinfo: Miscellaneous editorial changes and clarifiactions.
+
+	* commands.c (struct child): Remove `environ' member.
+	(child_handler, start_job, execute_file_commands): Remove use of
+	`environ' member and new_environ.
+
+	* make.c (main): Call new_environ after reading makefiles.
+
+	* variable.h: Declare `new_environ' to return void.
+
+	* variable.c (new_environ): Put the environment in `environ' and
+	return void.
+
+Fri Oct  7 15:48:39 1988  Roland McGrath  (mcgrath at pepper.Berkeley.EDU)
+
+	* Version 3.12.
+
+	* Makefile: Don't make the uncompressed tar file.
+
+	* variable.c (expand_function: `shell' function): Made it not expect
+	read to null-terminate the buffer.
+
+	* Makefile: Made it use a temporary symlink to . rather than a
+	temporary directory to make the distribution tar file.
+
+Thu Oct  6 17:52:35 1988  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.11.
+
+	* make.texinfo: Fixed a line that got garbaged somehow.
+
+Mon Oct  3 16:14:39 1988  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* make.c (main): Try to move back to the directory we started in
+	before re-exec ourself.
+
+	* remake.c (update_file_1): A double-colon target with no deps
+	always needs to be remade.
+
+	* remake.c (remake_file): Changed "No way to make" message to say
+	`target' rather than `file'.
+
+Sun Oct  2 12:50:47 1988  Roland McGrath  (mcgrath at catnip.Berkeley.EDU)
+
+	* remake.c (update_file_1): Set FILE->update_status to the return
+	value of remake_file.
+
+	* rule.c (convert_to_pattern): Fixed swapped lengths passed to
+	xmalloc for source/target suffixes.
+
+	* make.texinfo: Documented that MAKEFLAGS and MFLAGS are read in
+	from makefiles.  Updated the `Features' section a bit.
+
+	* make.c (main): Read switches from MAKEFLAGS and MFLAGS variables
+	after reading in makefiles.
+
+	* make.c (main): Put a line "/tmp/foo:;" rather than ".PHONY:
+	/tmp/foo" in front of temp files made for stdin makefiles.
+
+	* remake.c (update_file): Test the state of the right `struct file'
+	for double-colon files.
+
+	* make.c (main): Put a ".PHONY: /tmp/foo" line in front of temp
+	files made for stdin makefiles so they won't be remade when we
+	re-exec.  Kludge-o-matic!!
+
+	* remake.c (update_goal_chain): Judge files as being finished based
+	on their `updated' flag, not their state.
+
+	* read.c (read_makefile): Don't check for FILENAME being "-".
+	(read_all_makefiles): Set each element of MAKEFILES to the name put
+	in READ_MAKEFILES by read_makefile, since read_makefile may free the
+	storage for the name it is passed, and someone might want to look at
+	the elements of MAKEFILES again.
+
+	* make.c (main): For each `-f' flag with arg `-' (standard input),
+	read standard input into a temp file and pass the temp file's name
+	to read_all_makefiles, after making sure it will not be remade.
+
+	* make.c (construct_makeflags): Always put out `-j1'.
+
+Sat Oct  1 00:19:59 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* commands.c (execute_file_commands): If commands are nothing but
+	whitespace, set the state to `cs_finished' before returning 0.
+
+	* make.c (decode_switches): Allocate space for args in stringlists
+	so they can be freed later.
+
+	* make.h: Declare `makelevel'.
+
+	* variable.c (makelevel): Moved to make.c (and made global).
+
+	* make.c (fatal, error): Print the makelevel if it's > 0.
+	(perror_with_name): Use error rather than calling fprintf directly.
+	(pfatal_with_name): Use fatal rather than fprintf and die.
+
+	* variable.c (new_environ): Don't put default variables (origin
+	`o_default') into the environment; they just take up space.
+
+	* read.c (read_makefile): Don't add FILENAME to the chain of read
+	makefiles if it's "-" (standard input).
+
+	* remake.c (update_goal_chain): Set STATUS correctly when nothing
+	happens (as well as in all other situations).
+
+	* make.c (construct_makeflags): Put a `-' before each switch and
+	spaces between them.
+
+	* Version 3.10.
+
+	* commands.c (wait_for_children): Don't check if `children' is nil.
+	This is the case when waiting for the child of a `shell' function.
+
+	* dir.c (dir_load): Don't add a hash-table entry for directory
+	DIRNAME and filename "" if DIRNAME doesn't exist.
+
+	* commands.c (execute_file_commands): Return 0 after start_job
+	returns 1 (failure) under the -n flag.
+
+	* remake.c (remake_file): Set the state to `cs_finished' when not
+	calling execute_file_commands.
+
+	* remake.c (update_goal_chain): Second arg is now MAKEFILES, nonzero
+	meaning to disable -t, -q, and -n for each target unless the target
+	was also given on the command-line.
+
+	* read.c (read_makefile): Enter the `struct file's for the makefiles
+	added to the `read_makefiles' `struct dep' chain.
+
+	* remake.c (update_goal_chain): Made it not enter the files for the
+	goals in the chain.  It will already have been done.
+
+	* rule.c (convert_to_pattern): Null-terminate the names of targets
+	and deps of the pattern rules properly.
+
+Fri Sep 30 18:56:20 1988  Roland McGrath  (mcgrath at nutmeg.Berkeley.EDU)
+
+	* make.c (main): Call install_default_pattern_rules.
+
+	* make.h: Declare copy_dep_chain.
+
+	* read.c (copy_dep_chain): Moved to make.c (and made global).
+
+	* make.c (main): Call update_goal_chain to update goals.
+	Update read makefiles and re-exec self if they change.
+
+	* remake.c (update_file): Make this function static.
+	(update_goal_chain): New function to update a `struct dep' chain of
+	goals, waiting until they are all finished before returning.
+
+	* make.h: Don't declare update_file.  Declare update_goal_chain.
+
+	* make.c (main): Call snap_deps, etc. that were in read_all_makefiles.
+
+	* read.c (find_makefile): Removed this function.
+	(read_all_makefiles): Don't update makefiles, don't diddle with
+	pattern rules, don't call snap_deps, etc.  Return a `struct dep'
+	chain of all makefiles read.
+	(read_makefile): Now takes two args: FILENAME and TYPE, which is 0
+	for a normal makefile, 1 for MAKEFILES variable or 2 for an included
+	makefile.  Add a `struct dep' containing the name of the makefile
+	(as it was found in the search path for type 2s), and TYPE in the
+	`changed' member to the global `read_makefiles' chain.
+
+	* make.h, rule.c (displace_pattern_rules,
+	add_displaced_pattern_rules): Removed these functions.
+
+	* read.c (read_makefile): Variable-expand the name of an `include'd
+	makefile before calling find_makefile on it.
+
+	* file.c (snap_deps): If the `struct file' for a `struct dep'
+	already exists, free the `struct dep's `name' member before setting
+	it to nil (since this info is in the `struct file').
+
+	* read.c (copy_dep_chain): Made it copy each name rather than
+	leaving multiple `struct dep's with the same pointers.
+
+Thu Sep 29 19:08:13 1988  Roland McGrath  (mcgrath at catnip.Berkeley.EDU)
+
+	* make.c (decode_switches): Fixed second decode_env_switches call to
+	use correct length of "MFLAGS" (6, not 5).
+
+	* read.c (read_makefile): Don't stop reading when readline returns
+	zero lines read.  Only stop when the stream reaches EOF.  This makes
+	it recognize the last line of a makefile without a newline.
+
+	* remake.c (remake_file): If we don't know how to make FILE, set its
+	command state to `cs_finished'.
+
+	* remake.c (update_file): Don't write the "up to date" message if
+	update_file_1 returned a nonzero status.
+
+Wed Sep 28 16:30:07 1988  Roland McGrath  (mcgrath at catnip.Berkeley.EDU)
+
+	* commands.c (child_handler): Set the `update_status' member
+	properly for ignored errors.
+
+	* rule.c (convert_to_pattern): Made it not care about if the target
+	suffix comes before the source suffix in the .SUFFIXES list.
+
+	* make.texinfo: Misc editorial changes.
+
+	* commands.c (wait_for_children): Return immediately if `children'
+	is nil (there are no children).
+
+Tue Sep 27 15:33:14 1988  Roland McGrath  (mcgrath at pepper.Berkeley.EDU)
+
+	* Version 3.09.
+
+	* commands.c (struct child): New member `command_ptr' to hold the
+	current position in the commands.  The `commands' member is never
+	changed.
+	(start_job, child_handler, execute_file_commands): Use new method
+	for `commands' and `command_ptr' members.
+
+	* make.c (decode_env_switches): Skip past an invalid letter (instead
+	of looping forever).
+
+	* commands.c (struct child): Add `environ' member to hold the
+	environment for this child.
+	(execute_file_commands): Get a new environment from new_environ and
+	put in the the new `struct child's `environ' member.
+	(child_handler): When freeing a child, free its `commands' member, the
+	elements of its `environ' array and its `environ' member itself.
+	(start_job): Set `environ' to the child's `environ' member before
+	exec'ing the command.
+
+	* variable.h, variable.c (new_environ): Made it return the new
+	environment, not putting it in `environ'.
+
+	* remake.c (update_file): Don't give a "is up to date" message
+	unless no files were remade and the state went from `cs_not_started'
+	to `cs_finished', so repeat calls to finish jobs won't get the message.
+
+Mon Sep 26 16:26:08 1988  Roland McGrath  (mcgrath at helen.Berkeley.EDU)
+
+	* Version 3.08.
+
+	* make.texinfo (Commands: Execution): Documented that children will
+	be waited for rather than killed.
+
+	* commands.c (fatal_error_signal): Wait for children.
+	(kill_children): Removed this function.
+
+	* make.c (main, die): Wait for children to die, don't kill them.
+
+	* variable.c (expand_function): Use wait_for_children.
+
+	* make.c (main): Use wait_for_children rather than child_handler.
+
+	* commands.c (wait_for_children): New function to block waiting for
+	children, insuring that child_handler is not called recursively.
+	(execute_file_commands, kill_children): Use wait_for_children.
+
+	* commands.c (child_handler): Start up additional commands in a
+	sequence after an ignored error.
+
+	* remake.c (update_file): Don't print "`foo' is up to date" messages
+	when update_file_1 returns while commands are executing.
+
+	* remake.c (update_file_1): Pass the file name to name_mtime, not
+	the bloody `struct file', dammit!!
+
+	* commands.c (child_handler): Print out the "*** ..." error message
+	when not under -i.  (I somehow forgot this.)
+
+	* remake.c (update_file_1): Use name_mtime rather than file_mtime to
+	re-get the mtime of a file whose commands have finished.
+
+	* make.c (command_switches, decode_switches, decode_env_switches):
+	Make all switches that take string args allow them right after the
+	switch letter.
+
+	* commands.c (child_handler): Check for a child being the `shell'
+	function's command returning and set the global variable for
+	expand_function to check.
+
+	* variable.c (expand_function): For the `shell' function, instead of
+	waiting for the child shell ourselves, let child_handler do it and
+	loop around waiting for something to happen.
+
+	* make.c (print_version): Made the copyright year static, not dynamic.
+
+	* make.h, make.c: Remove construct_argv function.
+
+	* make.c (main): Say "no goal target" instead of "no target".
+
+	* make.texinfo (Commands: Parallel): Don't send SIGKILL.
+
+	* commands.c (kill_children): Don't send SIGKILL to children that
+	aren't killed by the first signal.
+
+	* make.c (main), commands.c (kill_children): Decide between SIGCHLD
+	and SIGCLD based on whether or not SIGCHLD is defined, not on USG.
+
+	* Makefile: Link make with $(LOADLIBES).
+
+	* read.c (construct_include_path): Fixed another bad xrealloc call.
+
+	* make.c (decode_switches): Fixed an xrealloc call with no first arg.
+
+Sat Sep 24 01:16:21 1988  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* Version 3.07.
+
+	* remake.c (update_file_1): If deps are running, set state to
+	`cs_deps_running' and return 0.  If deps are done, run commands.
+
+	* commands.c (child_handler): Made it delete non-precious targets
+	killed by fatal signals.
+
+	* make.texinfo: Documented parallelism.
+
+Fri Sep 23 16:52:27 1988  Roland McGrath  (mcgrath at helen.Berkeley.EDU)
+
+	* remake.c (update_file_1): Don't return if FILE's state is
+	`cs_deps_running'.  In that case, we need to run through and check
+	the states of all our dependencies.
+
+	* commands.c (execute_file_commands): Decrement `job_slots' after
+	starting a new job to run file commands.
+
+	* commands.c (start_job): Made it set the state to `cs_running'.
+
+	* make.c (main): Fixed usage of `g', `lastgoal', and `goals' in the
+	goal-making loop.
+
+	* commands.c (child_handler): When commands finish, set the
+	corresponding file's `update_status' and `updated' flags as
+	appropriate, and reset the modtimes of the file and any `also_make'
+	files it has.
+
+	* remake.c (remake_file): Don't re-set `last_mtime' and set `updated'.
+
+	* commands.c (fatal_error_signal): Don't swallow all the children
+	with a loop around `wait ((union wait *) 0)'!!!
+
+	* make.c (struct command_switch): Added `positive_int' type.
+	(switches): Added -j (job_slots).
+	(construct_makeflags, decode_switches, decode_env_switches):
+	Handle`positive_int'-type switches.
+
+	* glob.c (glob_vector): Rename local variable `vector' to `VeCtOr'.
+	This is said to avoid a conflict with some system's global `vector'
+	variable.
+
+	* variable.c (expand_function): Made the `shell' function use
+	construct_command_argv and do its own child control and piping.
+
+	* make.c (main): Turn standard input into a broken pipe after
+	reading in all makefiles (the last time it will be needed).
+
+	* commands.c (struct child): Remove `pipe_fd' member.  We don't use
+	pipes any more.
+	(start_job): Return 0 for success, 1 or failure (rather than void).
+	Don't use pipes.  Don't turn the child's stdin into a broken pipe.
+	(child_handler): Print "*** Error" messages when necessary.
+	Die on failed commands when -k was not given.
+	(execute_file_commands): Check the return of start_job and remove
+	the child from the chain and return failure if it is nonzero.
+
+	* make.c (die): New function to clean up and exit.
+	(fatal, pfatal_with_name): Use die.
+
+Thu Sep 22 14:27:11 1988  Roland McGrath  (mcgrath at helen.Berkeley.EDU)
+
+	* commands.c (struct child): Added `commands', `pipe_fd', and
+	`noerror' members to keep track of info about a command thread.
+	(start_job): New function to start a job and update the argument
+	`struct child' to reflect its status.
+	(execute_file_commands): Merged run_file_commands back in.
+	Made it use new start_job function.
+
+	* rule.c (freerule): Don't free the `struct commands' of the
+	discarded rule.  It may be used in more than one place.
+
+	* commands.c (execute_command_line): Made it not try to delete the
+	possibly partly-made file.  The child_handler function will do this.
+	(fatal_error_signal): Ditto + call kill_children.
+
+	* make.h: Declare job_slots.
+
+	* make.c (main): Collect goals in a dep chain and run through this
+	chain waiting for a child, eliminating finished goals, updating all
+	remaining goals, and quitting if they fail and not -k.
+
+	* commands.c (child_handler): If called with SIG < 0, - SIG is the
+	max number of children to bury.
+
+	* commands.c (child_handler): If called with SIG as zero,
+	block waiting for running children.
+	(kill_children): Call child_handler with zero rather than SIGCHLD.
+
+	* remake.c (update_file_1): Use the `command_state' member of FILE
+	and its dependencies to determine what commands are running, what to
+	do, etc.  If commands or dep commands are running when we are
+	called, return success (0).  If commands finished since the last
+	time we were called, return their status.
+
+	* commands.h: Declare kill_children.
+
+	* commands.c: Define `struct child' to keep track of child
+	processes, with the chain in `children'.
+	(child_handler): New function to catch child-termination signals
+	(SIGCHLD, or SIGCLD for USG), store the returned status in the
+	appropriate structure, take the now-obsolete `struct child' out of
+	the chain, and free its storage.
+	(execute_file_commands): Put all of the stuff invloving running the
+	commands into new function run_file_commands.  Execute_file_commands
+	now does process management for the commands, while
+	run_file_commands (which is run in a subprocess) runs the commands.
+	(kill_children): New function to kill all running children by
+	sending them signal SIG.  If there are any children still living
+	after they are all sent SIG, they are all sent SIGKILL.
+
+	* make.c (main): Catch SIGCHLD (SIGCLD for USG) with child_handler.
+
+	* commands.h: Declare child_handler function.
+
+	* commands.c (execute_file_commands): Check the `command_state'
+	member of FILE and return 0 if it is `cs_running' or
+	`cs_deps_running' and return the stored status if it is `cs_finished'.
+
+	* file.h (struct file): Added `command_state' member.
+
+	* commands.c (execute_command_line): Add `$' to the list of
+	characters special to the shell.
+
+Wed Sep 21 15:57:41 1988  Roland McGrath  (mcgrath at helen.Berkeley.EDU)
+
+	* read.c (read_all_makefiles): Call convert_to_pattern before
+	recomputing the limits after adding the displaced rules.
+
+	* make.c (main): Move calls to snap_deps, convert_to_pattern, and
+	build_vpath_lists to read_all_makefiles.
+
+	* read.c (read_all_makefiles): Install the default pattern rules
+	before checking to remake the makefiles, displace these rules before
+	reading in the makefiles, and then add the displaced rules to the
+	chain after reading in all the makefiles.
+
+	* make.c (main): Don't call install_default_pattern_rules or
+	count_implicit_rule_limits.
+
+	* make.h: Declare displace_pattern_rules and
+	add_displaced_pattern_rules.
+
+	* rule.c (displace_pattern_rules, add_displaced_pattern_rules): New
+	functions to stow the chain and add the stowed chain on the end of
+	the current chain.
+
+	* make.texinfo (Implicit: Search Algorithm): Fixed PREV reference.
+
+	* make.c (main): Call construct_include_path right after decoding
+	the switches.
+
+	* read.c (find_makefile): Use rename_file.
+
+	* file.h: Declare rename_file.
+
+	* file.c (rename_file): New function to rename a `struct file' and
+	put it in the correct hash bucket.
+
+	* read.c (find_makefile): New function to find and update a makefile.
+	 (read_all_makefilese): Use find_makefile.
+	 (read_makefile): Don't do updating.  Removed UPDATEIT arg.
+
+	* remake.c (update_file_1): Took out setting the `updated' member to
+	-1 rather than 1 sometimes.
+
+	* make.c (main): Made it print version info before doing anything else.
+
+	* remake.c (library_file_mtime, f_mtime): Removed use of last two
+	arguments to vpath_search.
+
+	* rule.c (pattern_search): Removed use of last two arguments
+	to vpath_search.
+
+	* vpath.c (vpath_search, selective_vpath_search): Removed unused
+	DIRPREFIX and DPLEN args.
+
+	* read.c (read_makefile): Also turn off -n when updating makefiles.
+
+Tue Sep 20 17:01:10 1988  Roland McGrath  (mcgrath at pepper.Berkeley.EDU)
+
+	* Makefile: Put tags files in the tarfile.
+
+	* read.c (read_makefile): Get the modtime of the makefile via a stat
+	call so that a later file_mtime call won't do VPATH search for it.
+
+	* read.c (read_makefile): Don't turn off -t and -q if the makefile
+	was a command-line target.
+
+	* make.c (main): Enter command-line targets as files and set their
+	`cmd_target' members.
+
+	* file.h (struct file): Added `cmd_target' member.
+
+	* read.c (read_makefile): Temporarily turn off -t and -q while
+	updating makefiles.
+
+	* make.c (main): Don't use arg 0 from other_args (which is now
+	argv[0]; i.e., the program's name).
+
+	* read.c (read_makefile): Only return nonzero if commands were
+	actually run to remake the makefile.
+
+	* remake.c (update_file_1): Set FILE->updated to -1 if no commands
+	were actually run (because no update was done or -t was given).
+
+	* make.c (decode_switches): Fixed bug wherein xrealloc was passed
+	bad args if it tried to expand other_args->list.
+
+	* read.c (read_all_makefiles): Made it not look at the `MAKE'
+	variable, just use argv[0].
+
+Sun Sep 18 17:34:11 1988  Roland McGrath  (mcgrath at paris.Berkeley.EDU)
+
+	* read.c (rerun_make): New function to re-exec make.
+
+	* make.c (construct_makeflags, construct_argv): New functions to
+	construct the `MAKEFLAGS' variable and to construct an arg list from
+	parsed info.
+
+	* read.c (read_makefile): New arg UPDATEIT, if nonzero, says to
+	update the makefile as a target before reading it in.  When reading
+	included makefiles, pass this as zero.  Now returns nonzero if the
+	makefile was updated, zero if not.
+	(read_all_makefiles): Pass a nonzero UPDATEIT arg to read_makefile
+	for all default and -f makefiles and all makefiles from the
+	`MAKEFILES' variable.  If any of the makefiles has changed, re-exec
+	self to re-read them.
+
+	* remake.c (update_file): Print a "File `foo' up to date'" message
+	under -p.
+
+	* commands.c (execute_file_commands): Allocate one byte for each of
+	$^ and $< rather than zero if they are to be empty.
+
+Fri Sep 16 13:59:59 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* Version 3.06.
+
+	* make.c (command_switches): Fixed entry for `-o' switch.
+
+	* make.texinfo: Renamed -c switch to -C.
+
+	* make.c: Renamed -c switch to -C.
+
+	* Miscellaneous de-linting.
+
+	* read.c (record_files): Made it not free the storage for the name
+	if it started with `./' and was therefore not quite the same as in
+	the `struct file'.
+
+	* read.c (record_files): If commands were specified twice, the error
+	message specifies in what files and at what line numbers.
+
+	* make.c (main): If any of the signals we usually fatal on were
+	ignored by the parent (probably a shell), ignore them.
+
+	* make.c (main): Print version info for -v, -p, or -d.
+	(print_data_base): Don't print version info.  It will be done in main.
+
+	* variable.c: Increased number of hash buckets to 257.
+
+	* file.c: Increased number of hash buckets to 1007.
+
+	* rule.c (count_implicit_rule_limits): Moved comptation of
+	`maxsuffix' to convert_to_pattern, since that function uses
+	`maxsuffix', and must be called before count_implicit_rule_limits.
+
+	* rule.c (pattern_search): If an existent (non-intermediate)
+	dependendency was found via a terminal rule, set its
+	`tried_implicit' flag, so it will never have implicit rule search done.
+
+	* glob.c: Bug fix to avoid alloca(0).
+
+	* arscan.c: USG and Sun386i fixes.
+
+Thu Sep 15 19:40:26 1988  Roland McGrath  (mcgrath at helen.Berkeley.EDU)
+
+	* make.texinfo: Fixed some typos and spelling errors.
+
+Wed Sep  7 14:20:39 1988  Roland McGrath  (mcgrath at helen.Berkeley.EDU)
+
+	* make.c (decode_switches): Fixed bug wherein a bad option would
+	give a useless error message and loop forever.
+
+Tue Sep  6 14:36:02 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* make.texinfo: Documented `shell' function.
+
+	* variable.c (expand_function): New function `shell', does
+	backquote-style command expansion of its arg.
+
+	* commands.c (execute_command_line): Second arg OUTBUF, if not nil,
+	gets filled in with a malloc'd buffer containing the piped stdout of
+	the command.
+	(execute_file_commands): Use above (pass nil).
+
+Mon Sep  5 17:03:49 1988  Roland McGrath  (mcgrath at hecuba.Berkeley.EDU)
+
+	* Makefile: Added copyright notice.
+	Added a comment about defining `NO_MINUS_C_MINUS_O' if necessary.
+
+	* Version 3.05.
+
+	* rule.c (default_suffix_rules): Don't pass `-o' switches with `-c'
+	switches if `NO_MINUS_C_MINUS_O' is #define'd.
+
+	* make.texinfo: Documented `GNUmakefile'.
+
+	* read.c (read_all_makefiles): Made it try default makefile
+	`GNUmakefile' before others.
+
+	* make.texinfo: Added new-style Texinfo header thingies.
+
+Sat Sep  3 18:09:39 1988  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* Version 3.04.
+
+	* make.texinfo (Chained Rules): Added a @cindex about using
+	.PRECIOUS to preserve intermediate files.
+
+	* remake.c (update_file_1): Made it not just return before executing
+	commands under -p.
+
+	* rule.c (default_pattern_rules, default_variables): Made it use
+	`$(AR)' for `ar r' (to put files in archives).
+
+	* vpath.c (build_vpath_lists): Made it recursively expand the
+	`VPATH' variable (by using variable_expand instead of lookup_variable).
+
+	* read.c (conditional_line): Made it not swallow whitespace after
+	the comma in an `ifeq' using the `(a,b)' syntax.
+
+	* rule.c (count_implicit_rule_limits): Made it not crash if a
+	pattern rule dep begins with `/'.
+
+Sun Aug 28 15:51:12 1988  Roland McGrath  (mcgrath at homer.Berkeley.EDU)
+
+	* make.texinfo: Clarified that the arg to the `origin' function is a
+	variable *name*, not a reference.
+
+	* make.texinfo: Clarified that both -Idir and -I dir are allowed.
+
+Sat Aug 27 13:49:28 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* remake.c (remake_file): Made touching phonies work right.
+
+Wed Aug 24 20:40:48 1988  Roland McGrath  (mcgrath at nutmeg.Berkeley.EDU)
+
+	* make.texinfo: Removed reference to `RANLIB' variable.
+
+	* Version 3.03.
+
+	* variables.c (expand_function): Added `origin' function.
+	* make.texinfo: Documented same.
+
+	* read.c (record_files): Made double-colon entries work.
+
+Sat Aug 20 21:09:39 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* make.c (collapse_continuations): Bug fix from RMS.
+
+	* rule.c (install_default_pattern_rules): Made it set the
+	`in_use' flag of the created rules to zero, rather than letting
+	it be random garbage.
+
+	* rule.c (pattern_search): Fixed putting `also make' targets into
+	file strucutres.
+
+	* read.c (record_files): Fixed bug which made double-colon entries
+	make it read off into space.
+
+	* make.c (decode_switches): Made it understand `ignored' switches
+	rather than dumping core.
+
+Sun Aug 14 16:49:00 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* read.c (read_makefile): Made `include' filenames be
+	variable-expanded.
+
+	* read.c (read_makefile): Fixed an error message.
+
+	* read.c (read_makefile): Made it accept ^L's as whitespace.
+	* make.c (next_token, end_of_token): Ditto.
+
+	* vpath.c (vpath_search): Fixed it so that the general VPATH (from
+	the variable) is always checked, even if a selective VPATH (from a
+	directive) matched the filename.
+
+Sat Aug 13 14:20:46 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* make.c (decode_switches, main): Made the command switches be
+	processed from a table of switches, variables, and types.  No
+	functions are passed argc and argv any more.  They are passed arrays
+	of strings they need to process.
+	* read.c (read_all_makefiles): Made it take an array rather than
+	argc and argv.
+	(construct_include_path): Ditto.
+
+	* make.c (collapse_continuations): Made it work right (I hope).
+
+	* make.texinfo: Minor editorial changes.
+
+	* read.c (read_makefile): Minor speed improvement by freeing and
+	then mallocing something rather than reallocing it to avoid the
+	unnecessary bcopy.
+
+Thu Aug 11 00:10:43 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* make.texinfo: Fixed some unquoted @'s.
+
+	* make.texinfo: Documented multiple-target pattern rules.
+	Miscellaneous minor editorial changes and corrections.
+
+	* make.texinfo (Implicit: Catalogue of Rules): Removed the list of
+	variables.  That's what the next section is for.
+	(Implicit: Implicit Variables): Made it agree with reality.
+
+Wed Aug 10 00:55:39 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* variable.c (print_variable_data_base): Fixed bug which made -p
+	dump core.  (This was a really idiotic bug.)
+
+	* rule.c (pattern_search): Fixed a bug which made it make the
+	`also_make' member of the file in question nil if the first of
+	the successful rule's targets was the matching one.
+	Made it use only as much storage as necessary in the `also_make'
+	member.
+	(create_pattern): Made it use only as much storage as necessary in
+	the `lens' and `suffixes' members of the created rule.
+
+	* remake.c (library_file_mtime): Made it `static'.
+
+	* file.c: Added a declaration for `errno', which is declared in some
+	<errno.h>'s, but not all.
+
+	* file.h (struct file): Added `also_make' member for multiple-target
+	implicit rules.
+	* rule.c (pattern_search): Made it put the names of files updated by
+	the given file's commands in its `also_make' member.
+	* remake.c (update_file_1): Made it mark the files in a file's
+	`also_make' member as updated when the file is updated.
+
+	* variable.c (try_variable_definition): Fixed a bug which made it
+	define a variable with the name of the whole definition when there
+	was no space before the = or :=.
+
+	* make.texinfo (Features): Made the changes which were made in RCS
+	revision 2.7 but somehow lost since then.  Added -W.
+
+Tue Aug  9 10:04:50 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* variable.h: Added `o_default' to `enum variable_origin'.
+	* variable.c (print_variable_data_base): Made it print the origins of
+	the variables.
+	* rule.c (install_default_pattern_rules): Made it define the default
+	variables with origin `o_default'.
+
+	* make.texinfo: Documented -W.
+
+	* make.c (decode_switches, main): Added the -W flag to give files a
+	time-stamp of now, for a `what if' effect when used with -n.
+
+	* commands.c (print_commands): Made it say `(built-in)' for commands
+	that are built into the default ruleset.
+
+	* read.c (record_file): Made .SUFFIXES get its deps frontwards (again).
+	* rule.c (set_default_suffixes, convert_to_pattern): Made it read
+	.SUFFIXES's deps frontwards, so the converted rules will not be in
+	reverse order.
+
+	* rule.c (new_pattern_rule): Fixed a bug wherein it would keep
+	searching after it had removed a matching rule and ended up diddling
+	with freed storage.
+
+	* rule.c (freerule): Made it take the given rule off the chain.
+	(new_pattern_rule, count_implicit_rule_limits): Use freerule to
+	remove rules from the chain.
+
+	* vpath.c (construct_vpath_list): Made it return after cleaning out
+	all previous searchpaths when given a nil DIRPATH arg, so it won't
+	go into the construction code and dump core dereferencing a nil
+	pointer.
+
+	* variable.c (patsubst_expand): Fixed a bug which made it not match
+	correctly and sometimes dump core.
+
+Mon Aug  8 16:35:48 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* rule.c (default_suffix_rules): Made the .texinfo.dvi rule remove
+	the files used in the comparison to determine whether or not a
+	second TeX run is necessary.
+
+	* make.texinfo: Fixed some overfull TeX hboxes.
+
+	* make.texinfo (Implicit: Catalogue of Rules): Fixed a Texinfo error.
+
+	* rule.c (create_pattern_rule): Fixed bug wherein index was not
+	being passed its second arg.
+
+	* read.c (getline): Merged back into readline.
+
+	* rule.c (default_suffixes, default_suffix_rules,
+	default_variables): Added .texinfo.info rule.
+	* make.texinfo (Implicit: Catalogue of Rules): Documented
+	.texinfo.dvi and .texinfo.info rules.
+
+	* make.texinfo (Top): Changed `last updated' date to be correct (for
+	the last time it was updated, not today).  Changed `for version
+	3.00' since it's not going to be called that.
+
+Sat Aug  6 19:51:10 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* commands.c (print_commands): Added this function to print the
+	contents of a `struct commands' for -p.
+	* rule.c (print_rule_data_base): Use above.
+	* file.c (print_file_data_base): Ditto.
+
+	* rule.c (count_implicit_rule_limits, new_pattern_rule,
+	install_pattern_rule, print_rule_data_base): Made it understand the
+	changed `struct rule' and act accordingly.
+	(freerule): Added this function to free all the storage used by a rule.
+
+	* rule.c (pattern_search): Made it grok multiple targets of pattern
+	rules.  The matching is done properly, but at present, only the
+	matching pattern's target is used to give deps and commands.
+
+Fri Aug  5 18:00:29 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* rule.c (struct rule): Changed name, namelen, and patsuffix members
+	to targets, lens, and suffixes, which are arrays, for multiple targets.
+	(create_pattern_rule): Now takes first arg TARGETS, a nil-terminated
+	array of targets, rather than a single target and patsuffix pointer.
+
+	* read.c (record_files): If it finds an implicit pattern rule, it
+	collects all the targets into an array and passes the whole thing to
+	create_pattern_rule.  If there are non-pattern targets, it is a
+	fatal error.
+
+Tue Aug  2 15:06:38 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* make.c (readline): Split backslash-newline checking from reading
+	and buffer-expanding.
+	(getline): Created to do the reading and buffer-expanding formerly
+	done in readline.
+
+	* rule.c (pattern_search): Made it reject nonterminal match-anything
+	rules when a specific rule has matched, rather than rejecting
+	terminal match-anything rules in this case.
+
+	* rule.c (convert_to_pattern): Fixed a bug caused when the change to
+	make it only recognize two-suffix rules whose target suffixes
+	precede their dependency suffixes which made it work in the opposite
+	direction (even worse than it started out).
+
+	* rule.c (pattern_search): Made it reject nonterminal match-anything
+	rules as intermediate targets when searching for both real and
+	intermediate dependencies, rather than only when searching for
+	intermediate ones.
+
+Sun Jul 31 00:33:56 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* rule.c (convert_to_pattern): Made it only recognize two-suffix
+	rules whose target suffix comes before the dependency suffix in the
+	.SUFFIXES list.
+
+	* variable.c (define_automatic_variables): Made all automatic
+	variables be defined with origin `o_automatic'.
+
+	* variable.h: Added `o_automatic' to `enum variable_origin'
+
+	* file.c (remove_intermediates): Made it not print an error message
+	if the error was that the file does not exist.
+
+	* rule.c: Removed `recursive' member from `struct rule'.
+
+	* remake.c (library_file_mtime): Made it not use the directory hash
+	functions, as reading in and hashing /usr/lib and /lib is slow and
+	most likely unnecessary.
+
+	* remake.c (remake_file): Changed message from ``No specification
+	for making'' to ``No way to make'' so it will be short enough that
+	most filenames will fit on a line.
+	Made it look at the `recursive' member of the `struct commands',
+	rather than of the `struct file' (which no longer has one).
+
+	* commands.c (execute_file_commands): Made it look at the
+	`recursive' member of the `struct commands', rather than of the
+	`struct file' (which no longer has one).
+
+	* file.h: Removed `recursive' member from `struct file'.
+
+	* commands.h: Added `recursive' member to `struct commands'.
+
+	* dep.h: Removed unused `quotedparen' member from `struct nameseq'
+	and `struct dep'.
+
+	* read.c (dequote): Removed this function.
+	(multi_glob): Removed reference to `quotedparen' member of
+	a `struct nameseq' and calls to dequote.
+
+	* read.c (record_files): Made it set the stem for $* for all static
+	pattern rules, not just those with commands given at that time.
+	Removed check for recursive commands.
+	Made it check for pairs of .SUFFIXES dependencies to reject as
+	default goals as well as single ones (that don't start with dots).
+	(read_makefile): Added checks for recursive commands to set
+	the `recursive' flag in the `struct commands'.
+
+Sat Jul 30 15:47:23 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* make.c (find_next_token): Made the LENGTHPTR arg optionally nil.
+
+	* make.c: Removed `files_made' variable which is defined static in
+	remake.c and used only there.
+	(main): Cleaned up somewhat.
+	(decode_switches): Cleaned up a bit.  Made an unknown option be a
+	non-fatal error.
+	(decode_env_switches): Made LEN arg unsigned.  Cleaned up.
+	(print_version): Made it say ``see the source'' rather than ``see
+	the source file'', since there is more than one.
+
+	* file.h: Made `num_intermediates' declared unsigned.
+
+	* file.c: Made `num_intermediates' variable unsigned.
+	(remove_intermediates): Removed unused FORMAT arg.
+	(enter_file): Made it handle double-colon files properly, adding the
+	new entry as the old entry's prev pointer.
+
+	* dir.c: Re-indented the `struct dir' definition to be right.
+	(dir_load): Cleaned up slighty.
+	(file_exists_p): Removed comment saying we could use `access', since
+	that is a bad idea (except for setuid programs).  Cleaned up slightly.
+
+	* commands.c: Changed some comments slightly.
+	(execute_file_commands): Cleaned up a bit.  Changed some comments,
+	added others.  Moved freeing of storage for $^ and $? to the same
+	place as for the other automatic variables.
+	(execute_command_line): Made `#' trigger a shell.
+	Added some comments.  Cleaned up a bit.  Put all the special chars
+	that trigger shells into an array easily changeable at the top.
+
+	* ar.c: Added comments explaining each function.
+	(ar_scan_1): Merged into ar_member_date.
+	(ar_member_date): Changed call to ar_scan_1 to the body of that
+	function.
+	(ar_member_date_1): Simplified to a ?: expression rather than an
+	if-else statement.
+	(ar_member_touch): Changed error handling around a bit.
+	None of these errors are fatal now.
+
+	* variable.c (subst_expand): Added a new arg BY_WORD, to do substs
+	only on full words.
+	(patsubst_expand): Fixed bug which made calls whose patterns
+	contained no `%' to not work correctly, by using above.
+	(variable_expand): Pass extra arg to `subst_expand'.
+
+	* variable.c (expand_function): Fixed bug which made `foreach' calls
+	with one-word lists run off into never-never land.
+
+Fri Jul 29 20:12:36 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* variable.c (expand_function): Made a very minor speed improvement
+	by avoiding an unnecessary strlen call.
+
+Wed Jul 27 16:01:47 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* rule.c (default_suffixes): Rearranged the list somewhat; added
+	`.el' and `.elc' to speed things up (especially when building
+	Emacs), for the same reason `.h' is there.
+
+	* read.c (record_files): Changed `lineno' from `long' to
+	`unsigned int'.
+
+Sun Jul 24 02:15:30 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* variable.c (expand_function): Eliminated use of `wstok'
+	because it is non-reentrant and unreliable.
+	Fixed a minor bug which would cause something not to be freed.
+	* make.c (wstok): Removed `wstok' because it is no longer used.
+
+	* variable.c (expand_function): Made `foreach' function put
+	spaces between output texts like it's supposed to.
+	
+Sat Jul 23 17:32:55 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* rule.c (default_suffixes, default_suffix_rules): Added rule
+	to make %.dvi from %.texinfo.
+
+	* dir.c (print_dir_data_base): Made it say a bit more.
+
+Fri Jul 22 23:13:16 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* make.c (print_data_base): Split this function up into one
+	for each thing.
+	* variable.c (print_variable_data_base): One of the above.
+	* rule.c (print_rule_data_base): Ditto.
+	* file.c (print_file_data_base): Ditto.
+	* dir.c (print_dir_data_base): Ditto.
+
+	* rule.c (install_pattern_rule): Fixed a bug which caused the
+	terminal and recursive flags to always be zero for rules
+	entered by this function.
+
+	* make.texinfo (Rules: Double-colon): Added a paragraph
+	explaining the purpose of double-colon rules.
+
+	* make.texinfo (Implicit: Catalogue of Rules): Updated to
+	reflect new C++, TeX, Web, and Texinfo rules.  Other slight
+	editorial changes.
+
+	* commands.c (execute_file_commands): Fixed a bug wherein
+	random memory could get written for files with no deps.
+	
+Wed Jul 20 19:30:31 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* read.c (readline): Fix bug wherein it would not recognize a
+	backslash-newline if the buffer filled up and was enlarged
+	right before reading the newline.
+	
+Tue Jul 19 19:55:02 1988  Roland McGrath  (mcgrath at chilli.Berkeley.EDU)
+
+	* read.c: Added default suffix rules for .cc (using $(C++),
+	which defaults to `g++', and $(C++FLAGS)), .tex, .dvi, .web
+	and .cweb (using $(TEX), $(WEAVE), $(TANGLE), $(CWEAVE) and
+	$(CTANGLE)).
+	
+Sat Jul 16 21:24:28 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* Made error formats use %u rather than %ld for line numbers,
+	which are now unsigned int's rather than long's.
+
+	* read.c (conditional_line): Fixed some bugs caused by use of
+	unsigned int rather than int in one place.
+
+	* read.c (conditional_line): Put the info about active
+	conditionals in a struct.
+	(read_makefile): Make a new struct of info about conditionals
+	for included makefiles and restore the old one after the
+	included makefile has been read.
+
+	* read.c (read_makefile): Don't try to read a makefile with
+	name "" after giving an error message because an `include'
+	directive gave no filename.
+
+	* read.c (read_makefile): Give an error message for
+	non-whitespace text after the filename in an `include' directive.
+
+	* make.c (error): Take five args, like `fatal'.  It managed to
+	lose with only two.  Is there a better way to do this without vfprintf?
+
+	* read.c (read_makefile): Commands consisting of only
+	whitespace are not the same as no commands.  I thought I'd
+	fixed this bug months ago; it seems to have come back.
+
+	* make.c (collapse_continuations): All whitespace around a
+	backslash-newline combination is turned into a single space.
+
+	* Added COPYING file and copyright notices to all files.
+
+	* make.texinfo (Running: Goals): Fix a typo.
+
+	* read.c (do_define): Take an arg for the origin of the
+	variable being defined.
+	(read_makefile): Grok `override define'.
+
+	* make.texinfo (Variables: Override Directive, Defining):
+	Document the `override define' combination directive.
+
+	* ar.c (ar_member_date): Make a 0 return from `ar_scan' return
+	(time_t) -1 (nonexistent file), rather than (time_t) 0, which,
+	when put in the `struct file', makes `file_mtime' try to get
+	the mtime over and over again.
+
+	* variable.c (pattern_matches): Fix a bug that made patterns
+	not beginning with `%' never match.
+	
+Fri Jul 15 21:01:44 1988  Roland McGrath  (mcgrath at tully.Berkeley.EDU)
+
+	* Took Make out of RCS.
+
+	* Split the monolithic `make.c' into several smaller files.
