+GNU make NEWS -- history of user-visible changes.  26 January 1995
+
+Copyright (C) 1992, 1993, 1994, 1995 Free Software Foundation, Inc.
+See the end for copying conditions.
+
+Please send GNU make bug reports to bug-gnu-utils@prep.ai.mit.edu.
+
+Version 3.73
+
+* Converted to use Autoconf version 2, so `configure' has some new options.
+  See INSTALL for details.
+
+* You can now send a SIGUSR1 signal to Make to toggle printing of debugging
+  output enable by -d, at any time during the run.
+
+Version 3.72
+
+* DJ Delorie has ported Make to MS-DOS using the GO32 extender.
+  He is maintaining the DOS port, not the GNU Make maintainer;
+  please direct bugs and questions for DOS to <djgpp@sun.soe.clarkson.edu>.
+  MS-DOS binaries are available for FTP from oak.oakland.edu:pub/msdos/djgpp.
+
+* The `MAKEFLAGS' variable (in the environment or in a makefile) can now
+  contain variable definitions itself; these are treated just like
+  command-line variable definitions.  Make will automatically insert any
+  variable definitions from the environment value of `MAKEFLAGS' or from
+  the command line, into the `MAKEFLAGS' value exported to children.  The
+  `MAKEOVERRIDES' variable previously included in the value of `$(MAKE)'
+  for sub-makes is now included in `MAKEFLAGS' instead.  As before, you can
+  reset `MAKEOVERRIDES' in your makefile to avoid putting all the variables
+  in the environment when its size is limited.
+
+* If `.DELETE_ON_ERROR' appears as a target, Make will delete the target of
+  a rule if it has changed when its commands exit with a nonzero status,
+  just as when the commands get a signal.
+
+* The automatic variable `$+' is new.  It lists all the dependencies like
+  `$^', but preserves duplicates listed in the makefile.  This is useful
+  for linking rules, where library files sometimes need to be listed twice
+  in the link order.
+
+* You can now specify the `.IGNORE' and `.SILENT' special targets with
+  dependencies to limit their effects to those files.  If a file appears as
+  a dependency of `.IGNORE', then errors will be ignored while running the
+  commands to update that file.  Likewise if a file appears as a dependency
+  of `.SILENT', then the commands to update that file will not be printed
+  before they are run.  (This change was made to conform to POSIX.2.)
+
+Version 3.71
+
+* The automatic variables `$(@D)', `$(%D)', `$(*D)', `$(<D)', `$(?D)', and
+  `$(^D)' now omit the trailing slash from the directory name.  (This change
+  was made to comply with POSIX.2.)
+
+* The source distribution now includes the Info files for the Make manual.
+  There is no longer a separate distribution containing Info and DVI files.
+
+* You can now set the variables `binprefix' and/or `manprefix' in
+  Makefile.in (or on the command line when installing) to install GNU make
+  under a name other than `make' (i.e., ``make binprefix=g install''
+  installs GNU make as `gmake').
+
+* The built-in Texinfo rules use the new variables `TEXI2DVI_FLAGS' for
+  flags to the `texi2dvi' script, and `MAKEINFO_FLAGS' for flags to the
+  Makeinfo program.
+
+* The exit status of Make when it runs into errors is now 2 instead of 1.
+  The exit status is 1 only when using -q and some target is not up to date.
+  (This change was made to comply with POSIX.2.)
+
+Version 3.70
+
+* It is no longer a fatal error to have a NUL character in a makefile.
+  You should never put a NUL in a makefile because it can have strange
+  results, but otherwise empty lines full of NULs (such as produced by
+  the `xmkmf' program) will always work fine.
+
+* The error messages for nonexistent included makefiles now refer to the
+  makefile name and line number where the `include' appeared, so Emacs's
+  C-x ` command takes you there (in case it's a typo you need to fix).
+
+Version 3.69
+
+* Implicit rule search for archive member references is now done in the
+  opposite order from previous versions: the whole target name `LIB(MEM)'
+  first, and just the member name and parentheses `(MEM)' second.
+
+* Make now gives an error for an unterminated variable or function reference.
+  For example, `$(foo' with no matching `)' or `${bar' with no matching `}'.
+
+* The new default variable `MAKE_VERSION' gives the version number of
+  Make, and a string describing the remote job support compiled in (if any).
+  Thus the value (in this release) is something like `3.69' or `3.69-Customs'.
+
+* Commands in an invocation of the `shell' function are no longer run with
+  a modified environment like target commands are.  As in versions before
+  3.68, they now run with the environment that `make' started with.  We
+  have reversed the change made in version 3.68 because it turned out to
+  cause a paradoxical situation in cases like:
+
+	export variable = $(shell echo value)
+
+  When Make attempted to put this variable in the environment for a target
+  command, it would try expand the value by running the shell command
+  `echo value'.  In version 3.68, because it constructed an environment
+  for that shell command in the same way, Make would begin to go into an
+  infinite loop and then get a fatal error when it detected the loop.
+
+* The commands given for `.DEFAULT' are now used for phony targets with no
+  commands.
+
+Version 3.68
+
+* You can list several archive member names inside parenthesis:
+  `lib(mem1 mem2 mem3)' is equivalent to `lib(mem1) lib(mem2) lib(mem3)'.
+
+* You can use wildcards inside archive member references.  For example,
+  `lib(*.o)' expands to all existing members of `lib' whose names end in
+  `.o' (e.g. `lib(a.o) lib(b.o)'); `*.a(*.o)' expands to all such members
+  of all existing files whose names end in `.a' (e.g. `foo.a(a.o)
+  foo.a(b.o) bar.a(c.o) bar.a(d.o)'.
+
+* A suffix rule `.X.a' now produces two pattern rules:
+	(%.o): %.X	# Previous versions produced only this.
+	%.a: %.X	# Now produces this as well, just like other suffixes.
+
+* The new flag `--warn-undefined-variables' says to issue a warning message
+  whenever Make expands a reference to an undefined variable.
+
+* The new `-include' directive is just like `include' except that there is
+  no error (not even a warning) for a nonexistent makefile.
+
+* Commands in an invocation of the `shell' function are now run with a
+  modified environment like target commands are, so you can use `export' et
+  al to set up variables for them.  They used to run with the environment
+  that `make' started with.
+
+Version 3.66
+
+* `make --version' (or `make -v') now exits immediately after printing
+  the version number.
+
+Version 3.65
+
+* Make now supports long-named members in `ar' archive files.
+
+Version 3.64
+
+* Make now supports the `+=' syntax for a variable definition which appends
+  to the variable's previous value.  See the section `Appending More Text
+  to Variables' in the manual for full details.
+
+* The new option `--no-print-directory' inhibits the `-w' or
+  `--print-directory' feature.  Make turns on `--print-directory'
+  automatically if you use `-C' or `--directory', and in sub-makes; some
+  users have found this behavior undesirable.
+
+* The built-in implicit rules now support the alternative extension
+  `.txinfo' for Texinfo files, just like `.texinfo' and `.texi'.
+
+Version 3.63
+
+* Make now uses a standard GNU `configure' script.  See the new file
+  INSTALL for the new (and much simpler) installation procedure.
+
+* There is now a shell script to build Make the first time, if you have no
+  other `make' program.  `build.sh' is created by `configure'; see README.
+
+* GNU Make now completely conforms to the POSIX.2 specification for `make'.
+
+* Elements of the `$^' and `$?' automatic variables that are archive
+  member references now list only the member name, as in Unix and POSIX.2.
+
+* You should no longer ever need to specify the `-w' switch, which prints
+  the current directory before and after Make runs.  The `-C' switch to
+  change directory, and recursive use of Make, now set `-w' automatically.
+
+* Multiple double-colon rules for the same target will no longer have their
+  commands run simultaneously under -j, as this could result in the two
+  commands trying to change the file at the same time and interfering with
+  one another.
+
+* The `SHELL' variable is now never taken from the environment.
+  Each makefile that wants a shell other than the default (/bin/sh) must
+  set SHELL itself.  SHELL is always exported to child processes.
+  This change was made for compatibility with POSIX.2.
+
+* Make now accepts long options.  There is now an informative usage message
+  that tells you what all the options are and what they do.  Try `make --help'.
+
+* There are two new directives: `export' and `unexport'.  All variables are
+  no longer automatically put into the environments of the commands that
+  Make runs.  Instead, only variables specified on the command line or in
+  the environment are exported by default.  To export others, use:
+	export VARIABLE
+  or you can define variables with:
+	export VARIABLE = VALUE
+  or:
+	export VARIABLE := VALUE
+  You can use just:
+	export
+  or:
+	.EXPORT_ALL_VARIABLES:
+  to get the old behavior.  See the node `Variables/Recursion' in the manual
+  for a full description.
+
+* The commands from the `.DEFAULT' special target are only applied to
+  targets which have no rules at all, not all targets with no commands.
+  This change was made for compatibility with Unix make.
+
+* All fatal error messages now contain `***', so they are easy to find in
+  compilation logs.
+
+* Dependency file names like `-lNAME' are now replaced with the actual file
+  name found, as with files found by normal directory search (VPATH).
+  The library file `libNAME.a' may now be found in the current directory,
+  which is checked before VPATH; the standard set of directories (/lib,
+  /usr/lib, /usr/local/lib) is now checked last.
+  See the node `Libraries/Search' in the manual for full details.
+
+* A single `include' directive can now specify more than one makefile to
+  include, like this:
+	include file1 file2
+  You can also use shell file name patterns in an `include' directive:
+	include *.mk 
+
+* The default directories to search for included makefiles, and for
+  libraries specified with `-lNAME', are now set by configuration.
+
+* You can now use blanks as well as colons to separate the directories in a
+  search path for the `vpath' directive or the `VPATH' variable.
+
+* You can now use variables and functions in the left hand side of a
+  variable assignment, as in "$(foo)bar = value".
+
+* The `MAKE' variable is always defined as `$(MAKE_COMMAND) $(MAKEOVERRIDES)'.
+  The `MAKE_COMMAND' variable is now defined to the name with which make
+  was invoked.
+
+* The built-in rules for C++ compilation now use the variables `$(CXX)' and
+  `$(CXXFLAGS)' instead of `$(C++)' and `$(C++FLAGS)'.  The old names had
+  problems with shells that cannot have `+' in environment variable names.
+
+* The value of a recursively expanded variable is now expanded when putting
+  it into the environment for child processes.  This change was made for
+  compatibility with Unix make.
+
+* A rule with no targets before the `:' is now accepted and ignored.
+  This change was made for compatibility with SunOS 4 make.
+  We do not recommend that you write your makefiles to take advantage of this.
+
+* The `-I' switch can now be used in MAKEFLAGS, and are put there
+  automatically just like other switches.
+
+Version 3.61
+
+* Built-in rules for C++ source files with the `.C' suffix.
+  We still recommend that you use `.cc' instead.
+
+* If commands are given too many times for a single target,
+  the last set given is used, and a warning message is printed.
+
+* Error messages about makefiles are in standard GNU error format,
+  so C-x ` in Emacs works on them.
+
+* Dependencies of pattern rules which contain no % need not actually exist
+  if they can be created (just like dependencies which do have a %).
+
+Version 3.60
+
+* A message is always printed when Make decides there is nothing to be done.
+  It used to be that no message was printed for top-level phony targets
+  (because "`phony' is up to date" isn't quite right).  Now a different
+  message "Nothing to be done for `phony'" is printed in that case.
+
+* Archives on AIX now supposedly work.
+
+* When the commands specified for .DEFAULT are used to update a target,
+  the $< automatic variable is given the same value as $@ for that target.
+  This is how Unix make behaves, and this behavior is mandated by POSIX.2.
+
+Version 3.59
+
+* The -n, -q, and -t options are not put in the `MAKEFLAGS' and `MFLAG'
+  variables while remaking makefiles, so recursive makes done while remaking
+  makefiles will behave properly.
+
+* If the special target `.NOEXPORT' is specified in a makefile,
+  only variables that came from the environment and variables
+  defined on the command line are exported.
+
+Version 3.58
+
+* Suffix rules may have dependencies (which are ignored).
+
+Version 3.57
+
+* Dependencies of the form `-lLIB' are searched for as /usr/local/lib/libLIB.a
+  as well as libLIB.a in /usr/lib, /lib, the current directory, and VPATH.
+
+Version 3.55
+
+* There is now a Unix man page for GNU Make.  It is certainly not a replacement
+for the Texinfo manual, but it documents the basic functionality and the
+switches.  For full documentation, you should still read the Texinfo manual.
+Thanks to Dennis Morse of Stanford University for contributing the initial
+version of this.
+
+* Variables which are defined by default (e.g., `CC') will no longer be put
+into the environment for child processes.  (If these variables are reset by the
+environment, makefiles, or the command line, they will still go into the
+environment.)
+
+* Makefiles which have commands but no dependencies (and thus are always
+  considered out of date and in need of remaking), will not be remade (if they
+  were being remade only because they were makefiles).  This means that GNU
+  Make will no longer go into an infinite loop when fed the makefiles that
+  `imake' (necessary to build X Windows) produces.
+
+* There is no longer a warning for using the `vpath' directive with an explicit
+pathname (instead of a `%' pattern).
+
+Version 3.51
+
+* When removing intermediate files, only one `rm' command line is printed,
+listing all file names.
+
+* There are now automatic variables `$(^D)', `$(^F)', `$(?D)', and `$(?F)'.
+These are the directory-only and file-only versions of `$^' and `$?'.
+
+* Library dependencies given as `-lNAME' will use "libNAME.a" in the current
+directory if it exists.
+
+* The automatic variable `$($/)' is no longer defined.
+
+* Leading `+' characters on a command line make that line be executed even
+under -n, -t, or -q (as if the line contained `$(MAKE)').
+
+* For command lines containing `$(MAKE)', `${MAKE}', or leading `+' characters,
+only those lines are executed, not their entire rules.
+(This is how Unix make behaves for lines containing `$(MAKE)' or `${MAKE}'.)
+
+Version 3.50
+
+* Filenames in rules will now have ~ and ~USER expanded.
+
+* The `-p' output has been changed so it can be used as a makefile.
+(All information that isn't specified by makefiles is prefaced with comment
+characters.)
+
+Version 3.49
+
+* The % character can be quoted with backslash in implicit pattern rules,
+static pattern rules, `vpath' directives, and `patsubst', `filter', and
+`filter-out' functions.  A warning is issued if a `vpath' directive's
+pattern contains no %.
+
+* The `wildcard' variable expansion function now expands ~ and ~USER.
+
+* Messages indicating failed commands now contain the target name:
+	make: *** [target] Error 1
+
+* The `-p' output format has been changed somewhat to look more like
+makefile rules and to give all information that Make has about files.
+
+Version 3.48
+
+Version 3.47
+
+* The `-l' switch with no argument removes any previous load-average limit.
+
+* When the `-w' switch is in effect, and Make has updated makefiles,
+it will write a `Leaving directory' messagfe before re-executing itself.
+This makes the `directory change tracking' changes to Emacs's compilation
+commands work properly.
+
+Version 3.46
+
+* The automatic variable `$*' is now defined for explicit rules,
+as it is in Unix make.
+
+Version 3.45
+
+* The `-j' switch is now put in the MAKEFLAGS and MFLAGS variables when
+specified without an argument (indicating infinite jobs).
+The `-l' switch is not always put in the MAKEFLAGS and MFLAGS variables.
+
+* Make no longer checks hashed directories after running commands.
+The behavior implemented in 3.41 caused too much slowdown.
+
+Version 3.44
+
+* A dependency is NOT considered newer than its dependent if
+they have the same modification time.  The behavior implemented
+in 3.43 conflicts with RCS.
+
+Version 3.43
+
+* Dependency loops are no longer fatal errors.
+
+* A dependency is considered newer than its dependent if
+they have the same modification time.
+
+Version 3.42
+
+* The variables F77 and F77FLAGS are now set by default to $(FC) and
+$(FFLAGS).  Makefiles designed for System V make may use these variables in
+explicit rules and expect them to be set.  Unfortunately, there is no way to
+make setting these affect the Fortran implicit rules unless FC and FFLAGS
+are not used (and these are used by BSD make).
+
+Version 3.41
+
+* Make now checks to see if its hashed directories are changed by commands.
+Other makes that hash directories (Sun, 4.3 BSD) don't do this.
+
+Version 3.39
+
+* The `shell' function no longer captures standard error output.
+
+Version 3.32
+
+* A file beginning with a dot can be the default target if it also contains
+a slash (e.g., `../bin/foo').  (Unix make allows this as well.)
+
+Version 3.31
+
+* Archive member names are truncated to 15 characters.
+
+* Yet more USG stuff.
+
+* Minimal support for Microport System V (a 16-bit machine and a
+brain-damaged compiler).  This has even lower priority than other USG
+support, so if it gets beyond trivial, I will take it out completely.
+
+* Revamped default implicit rules (not much visible change).
+
+* The -d and -p options can come from the environment.
+
+Version 3.30
+
+* Improved support for USG and HPUX (hopefully).
+
+* A variable reference like `$(foo:a=b)', if `a' contains a `%', is
+equivalent to `$(patsubst a,b,$(foo))'.
+
+* Defining .DEFAULT with no deps or commands clears its commands.
+
+* New default implicit rules for .S (cpp, then as), and .sh (copy and make
+executable).  All default implicit rules that use cpp (even indirectly), use
+$(CPPFLAGS).
+
+Version 3.29
+
+* Giving the -j option with no arguments gives you infinite jobs.
+
+Version 3.28
+
+* New option: "-l LOAD" says not to start any new jobs while others are
+running if the load average is not below LOAD (a floating-point number).
+
+* There is support in place for implementations of remote command execution
+in Make.  See the file remote.c.
+
+Version 3.26
+
+* No more than 10 directories will be kept open at once.
+(This number can be changed by redefining MAX_OPEN_DIRECTORIES in dir.c.)
+
+Version 3.25
+
+* Archive files will have their modification times recorded before doing
+anything that might change their modification times by updating an archive
+member.
+
+Version 3.20
+
+* The `MAKELEVEL' variable is defined for use by makefiles.
+
+Version 3.19
+
+* The recursion level indications in error messages are much shorter than
+they were in version 3.14.
+
+Version 3.18
+
+* Leading spaces before directives are ignored (as documented).
+
+* Included makefiles can determine the default goal target.
+(System V Make does it this way, so we are being compatible).
+
+Version 3.14.
+
+* Variables that are defaults built into Make will not be put in the
+environment for children.  This just saves some environment space and,
+except under -e, will be transparent to sub-makes.
+
+* Error messages from sub-makes will indicate the level of recursion.
+
+* Hopefully some speed-up for large directories due to a change in the
+directory hashing scheme.
+
+* One child will always get a standard input that is usable.
+
+* Default makefiles that don't exist will be remade and read in.
+
+Version 3.13.
+
+* Count parentheses inside expansion function calls so you can
+have nested calls: `$(sort $(foreach x,a b,$(x)))'.
+
+Version 3.12.
+
+* Several bug fixes, including USG and Sun386i support.
+
+* `shell' function to expand shell commands a la `
+
+* If the `-d' flag is given, version information will be printed.
+
+* The `-c' option has been renamed to `-C' for compatibility with tar.
+
+* The `-p' option no longer inhibits other normal operation.
+
+* Makefiles will be updated and re-read if necessary.
+
+* Can now run several commands at once (parallelism), -j option.
+
+* Error messages will contain the level of Make recursion, if any.
+
+* The `MAKEFLAGS' and `MFLAGS' variables will be scanned for options after
+makefiles are read.
+
+* A double-colon rule with no dependencies will always have its commands run.
+(This is how both the BSD and System V versions of Make do it.)
+
+Version 3.05
+
+(Changes from versions 1 through 3.05 were never recorded.  Sorry.)
+
+----------------------------------------------------------------------
+Copyright information:
+
+Copyright (C) 1992, 1993, 1994, 1995 Free Software Foundation, Inc.
+
+   Permission is granted to anyone to make or distribute verbatim copies
+   of this document as received, in any medium, provided that the
+   copyright notice and this permission notice are preserved,
+   thus giving the recipient permission to redistribute in turn.
+
+   Permission is granted to distribute modified versions
+   of this document, or of portions of it,
+   under the above conditions, provided also that they
+   carry prominent notices stating who last changed them.
+
+Local variables:
+version-control: never
+end:
