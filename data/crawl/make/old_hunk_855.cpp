\input texinfo                @c -*- Texinfo -*-
@c %**start of header
@setfilename make.info
@settitle GNU @code{make}
@setchapternewpage odd
@c %**end of header

@c FSF publishers: format makebook.texi instead of using this file directly.

@set RCSID $Id$
@set EDITION 0.55
@set VERSION 3.79
@set UPDATED 04 April 2000
@set UPDATE-MONTH April 2000
@comment The ISBN number might need to change on next publication.
@set ISBN 1-882114-80-9 @c CHANGE THIS BEFORE PRINTING AGAIN! --psmith 16jul98

@c finalout

@c ISPELL CHECK: done, 10 June 1993 --roland
@c ISPELL CHECK: done, 2000-06-25 --Martin Buchholz

@c Combine the variable and function indices:
@syncodeindex vr fn
@c Combine the program and concept indices:
@syncodeindex pg cp

@dircategory GNU Packages
@direntry
* Make: (make).            Remake files automatically.
@end direntry

@ifinfo
This file documents the GNU Make utility, which determines
automatically which pieces of a large program need to be recompiled,
and issues the commands to recompile them.

This is Edition @value{EDITION}, last updated @value{UPDATED},
of @cite{The GNU Make Manual}, for @code{make}, Version @value{VERSION}.

Copyright (C) 1988, '89, '90, '91, '92, '93, '94, '95, '96, '97, '98, '99, 2000
        Free Software Foundation, Inc.

Permission is granted to make and distribute verbatim copies of
this manual provided the copyright notice and this permission notice
are preserved on all copies.

@ignore
Permission is granted to process this file through TeX and print the
results, provided the printed document carries copying permission
notice identical to this one except for the removal of this paragraph
(this paragraph not being relevant to the printed manual).

@end ignore
Permission is granted to copy and distribute modified versions of this
manual under the conditions for verbatim copying, provided that the entire
resulting derived work is distributed under the terms of a permission
notice identical to this one.

Permission is granted to copy and distribute translations of this manual
into another language, under the above conditions for modified versions,
except that this permission notice may be stated in a translation approved
by the Free Software Foundation.
@end ifinfo

@iftex
@shorttitlepage GNU Make
@end iftex
@titlepage
@title GNU Make
@subtitle A Program for Directing Recompilation
@subtitle GNU @code{make} Version @value{VERSION}
@subtitle @value{UPDATE-MONTH}
@author Richard M. Stallman and Roland McGrath
@page
@vskip 0pt plus 1filll
Copyright @copyright{} 1988, '89, '90, '91, '92, '93, '94, '95, '96, '97, '98, '99, 2000
Free Software Foundation, Inc.
@sp 2
Published by the Free Software Foundation @*
59 Temple Place -- Suite 330, @*
Boston, MA 02111-1307 USA @*
ISBN @value{ISBN} @*

Maintenance and updates since Version 3.76 by Paul D. Smith.

Permission is granted to make and distribute verbatim copies of
this manual provided the copyright notice and this permission notice
are preserved on all copies.

Permission is granted to copy and distribute modified versions of this
manual under the conditions for verbatim copying, provided that the entire
resulting derived work is distributed under the terms of a permission
notice identical to this one.

Permission is granted to copy and distribute translations of this manual
into another language, under the above conditions for modified versions,
except that this permission notice may be stated in a translation approved
by the Free Software Foundation.
@sp 2
Cover art by Etienne Suvasa.
@end titlepage
@page

@ifinfo
@node Top, Overview, , (dir)
@top Make

The GNU @code{make} utility automatically determines which pieces of a
large program need to be recompiled, and issues the commands to
recompile them.@refill

This edition of the @cite{GNU Make Manual},
last updated @value{UPDATED},
documents GNU @code{make} Version @value{VERSION}.@refill

This manual describes @code{make} and contains the following chapters:@refill
@end ifinfo

@menu
* Overview::                    Overview of @code{make}.
* Introduction::                An introduction to @code{make}.
* Makefiles::                   Makefiles tell @code{make} what to do.
* Rules::                       Rules describe when a file must be remade.
* Commands::                    Commands say how to remake a file.
* Using Variables::             You can use variables to avoid repetition.
* Conditionals::                Use or ignore parts of the makefile based
                                 on the values of variables.
* Functions::                   Many powerful ways to manipulate text.
* Invoking make: Running.       How to invoke @code{make} on the command line.
* Implicit Rules::              Use implicit rules to treat many files alike,
                                 based on their file names.
* Archives::                    How @code{make} can update library archives.
* Features::                    Features GNU @code{make} has over other @code{make}s.
* Missing::                     What GNU @code{make} lacks from other @code{make}s.
* Makefile Conventions::        Conventions for makefiles in GNU programs.
* Quick Reference::             A quick reference for experienced users.
* Error Messages::              A list of common errors generated by @code{make}.
* Complex Makefile::            A real example of a straightforward,
                                 but nontrivial, makefile.
* Concept Index::               Index of Concepts
* Name Index::                  Index of Functions, Variables, & Directives

 --- The Detailed Node Listing ---

Overview of @code{make}

* Preparing::                   Preparing and Running Make
* Reading::                     On Reading this Text
* Bugs::                        Problems and Bugs

An Introduction to Makefiles

* Rule Introduction::           What a rule looks like.
* Simple Makefile::             A Simple Makefile
* How Make Works::              How @code{make} Processes This Makefile
* Variables Simplify::          Variables Make Makefiles Simpler
* make Deduces::                Letting @code{make} Deduce the Commands
* Combine By Prerequisite::     Another Style of Makefile
* Cleanup::                     Rules for Cleaning the Directory

Writing Makefiles

* Makefile Contents::           What makefiles contain.
* Makefile Names::              How to name your makefile.
* Include::                     How one makefile can use another makefile.
* MAKEFILES Variable::          The environment can specify extra makefiles.
* Remaking Makefiles::          How makefiles get remade.
* Overriding Makefiles::        How to override part of one makefile
                                 with another makefile.
* Reading Makefiles::           How makefiles are parsed.

Writing Rules

* Rule Example::                An example explained.
* Rule Syntax::                 General syntax explained.
* Wildcards::                   Using wildcard characters such as `*'.
* Directory Search::            Searching other directories for source files.
* Phony Targets::               Using a target that is not a real file's name.
* Force Targets::               You can use a target without commands
                                  or prerequisites to mark other
                                  targets as phony.
* Empty Targets::               When only the date matters and the
                                  files are empty.
* Special Targets::             Targets with special built-in meanings.
* Multiple Targets::            When to make use of several targets in a rule.
* Multiple Rules::              How to use several rules with the same target.
* Static Pattern::              Static pattern rules apply to multiple targets
                                  and can vary the prerequisites according to
                                  the target name.
* Double-Colon::                How to use a special kind of rule to allow
                                  several independent rules for one target.
* Automatic Prerequisites::     How to automatically generate rules giving
                                 prerequisites from source files themselves.

Using Wildcard Characters in File Names

* Wildcard Examples::           Several examples
* Wildcard Pitfall::            Problems to avoid.
* Wildcard Function::           How to cause wildcard expansion where
                                  it does not normally take place.

Searching Directories for Prerequisites

* General Search::              Specifying a search path that applies
                                  to every prerequisite.
* Selective Search::            Specifying a search path
                                  for a specified class of names.
* Search Algorithm::            When and how search paths are applied.
* Commands/Search::             How to write shell commands that work together
                                  with search paths.
* Implicit/Search::             How search paths affect implicit rules.
* Libraries/Search::            Directory search for link libraries.

Static Pattern Rules

* Static Usage::                The syntax of static pattern rules.
* Static versus Implicit::      When are they better than implicit rules?

Writing the Commands in Rules

* Echoing::                     How to control when commands are echoed.
* Execution::                   How commands are executed.
* Parallel::                    How commands can be executed in parallel.
* Errors::                      What happens after a command execution error.
* Interrupts::                  What happens when a command is interrupted.
* Recursion::                   Invoking @code{make} from makefiles.
* Sequences::                   Defining canned sequences of commands.
* Empty Commands::              Defining useful, do-nothing commands.

Recursive Use of @code{make}

* MAKE Variable::               The special effects of using @samp{$(MAKE)}.
* Variables/Recursion::         How to communicate variables to a sub-@code{make}.
* Options/Recursion::           How to communicate options to a sub-@code{make}.
* -w Option::                   How the @samp{-w} or @samp{--print-directory} option
                                 helps debug use of recursive @code{make} commands.

How to Use Variables

* Reference::                   How to use the value of a variable.
* Flavors::                     Variables come in two flavors.
* Advanced::                    Advanced features for referencing a variable.
* Values::                      All the ways variables get their values.
* Setting::                     How to set a variable in the makefile.
* Appending::                   How to append more text to the old value
                                  of a variable.
* Override Directive::          How to set a variable in the makefile even if
                                  the user has set it with a command argument.
* Defining::                    An alternate way to set a variable
                                  to a verbatim string.
* Environment::                 Variable values can come from the environment.
* Automatic::                   Some special variables have predefined
                                  meanings for use with implicit rules.

Advanced Features for Reference to Variables

* Substitution Refs::           Referencing a variable with
                                  substitutions on the value.
* Computed Names::              Computing the name of the variable to refer to.

Conditional Parts of Makefiles

* Conditional Example::         Example of a conditional
* Conditional Syntax::          The syntax of conditionals.
* Testing Flags::               Conditionals that test flags.

Functions for Transforming Text

* Syntax of Functions::         How to write a function call.
* Text Functions::              General-purpose text manipulation functions.
* File Name Functions::         Functions for manipulating file names.
* Foreach Function::            Repeat some text with controlled variation.
* Call Function::               Expand a user-defined function.
* Origin Function::             Find where a variable got its value.
* Shell Function::              Substitute the output of a shell command.

How to Run @code{make}

* Makefile Arguments::          How to specify which makefile to use.
* Goals::                       How to use goal arguments to specify which
                                  parts of the makefile to use.
* Instead of Execution::        How to use mode flags to specify what
                                  kind of thing to do with the commands
                                  in the makefile other than simply
                                  execute them.
* Avoiding Compilation::        How to avoid recompiling certain files.
* Overriding::                  How to override a variable to specify
                                  an alternate compiler and other things.
* Testing::                     How to proceed past some errors, to
                                  test compilation.
* Options Summary::             Summary of Options

Using Implicit Rules

* Using Implicit::              How to use an existing implicit rule
                                  to get the commands for updating a file.
* Catalogue of Rules::          A list of built-in implicit rules.
* Implicit Variables::          How to change what predefined rules do.
* Chained Rules::               How to use a chain of implicit rules.
* Pattern Rules::               How to define new implicit rules.
* Last Resort::                 How to defining commands for rules
                                  which cannot find any.
* Suffix Rules::                The old-fashioned style of implicit rule.
* Implicit Rule Search::        The precise algorithm for applying
                                  implicit rules.

Defining and Redefining Pattern Rules

* Pattern Intro::               An introduction to pattern rules.
* Pattern Examples::            Examples of pattern rules.
* Automatic::                   How to use automatic variables in the
                                  commands of implicit rules.
* Pattern Match::               How patterns match.
* Match-Anything Rules::        Precautions you should take prior to
                                  defining rules that can match any
                                  target file whatever.
* Canceling Rules::             How to override or cancel built-in rules.

Using @code{make} to Update Archive Files

* Archive Members::             Archive members as targets.
* Archive Update::              The implicit rule for archive member targets.
* Archive Pitfalls::            Dangers to watch out for when using archives.
* Archive Suffix Rules::        You can write a special kind of suffix rule
                                  for updating archives.

Implicit Rule for Archive Member Targets

* Archive Symbols::             How to update archive symbol directories.
@end menu

@node Overview, Introduction, Top, Top
@comment  node-name,  next,  previous,  up
@chapter Overview of @code{make}

The @code{make} utility automatically determines which pieces of a large
program need to be recompiled, and issues commands to recompile them.
This manual describes GNU @code{make}, which was implemented by Richard
Stallman and Roland McGrath.  Development since Version 3.76 has been
handled by Paul D. Smith.

GNU @code{make} conforms to section 6.2 of @cite{IEEE Standard
1003.2-1992} (POSIX.2).
@cindex POSIX
@cindex IEEE Standard 1003.2
@cindex standards conformance

Our examples show C programs, since they are most common, but you can use
@code{make} with any programming language whose compiler can be run with a
shell command.  Indeed, @code{make} is not limited to programs.  You can
use it to describe any task where some files must be updated automatically
from others whenever the others change.

@menu
* Preparing::                   Preparing and Running Make
* Reading::                     On Reading this Text
* Bugs::                        Problems and Bugs
@end menu

@node Preparing, Reading,  , Overview
@ifinfo
@heading Preparing and Running Make
@end ifinfo

To prepare to use @code{make}, you must write a file called
the @dfn{makefile} that describes the relationships among files
in your program and provides commands for updating each file.
In a program, typically, the executable file is updated from object
files, which are in turn made by compiling source files.@refill

Once a suitable makefile exists, each time you change some source files,
this simple shell command:

@example
make
@end example

@noindent
suffices to perform all necessary recompilations.  The @code{make} program
uses the makefile data base and the last-modification times of the files to
decide which of the files need to be updated.  For each of those files, it
issues the commands recorded in the data base.

You can provide command line arguments to @code{make} to control which
files should be recompiled, or how.  @xref{Running, ,How to Run
@code{make}}.

@node Reading, Bugs, Preparing, Overview
@section How to Read This Manual

If you are new to @code{make}, or are looking for a general
introduction, read the first few sections of each chapter, skipping the
later sections.  In each chapter, the first few sections contain
introductory or general information and the later sections contain
specialized or technical information.
@ifinfo
The exception is the second chapter, @ref{Introduction, ,An
Introduction to Makefiles}, all of which is introductory.
@end ifinfo
@iftex
The exception is @ref{Introduction, ,An Introduction to Makefiles},
all of which is introductory.
@end iftex

If you are familiar with other @code{make} programs, see @ref{Features,
,Features of GNU @code{make}}, which lists the enhancements GNU
@code{make} has, and @ref{Missing, ,Incompatibilities and Missing
Features}, which explains the few things GNU @code{make} lacks that
others have.

For a quick summary, see @ref{Options Summary}, @ref{Quick Reference},
and @ref{Special Targets}.

@node Bugs,  , Reading, Overview
@section Problems and Bugs
@cindex reporting bugs
@cindex bugs, reporting
@cindex problems and bugs, reporting

If you have problems with GNU @code{make} or think you've found a bug,
please report it to the developers; we cannot promise to do anything but
we might well want to fix it.

Before reporting a bug, make sure you've actually found a real bug.
Carefully reread the documentation and see if it really says you can do
what you're trying to do.  If it's not clear whether you should be able
to do something or not, report that too; it's a bug in the
documentation!

Before reporting a bug or trying to fix it yourself, try to isolate it
to the smallest possible makefile that reproduces the problem.  Then
send us the makefile and the exact results @code{make} gave you.  Also
say what you expected to occur; this will help us decide whether the
problem was really in the documentation.

Once you've got a precise problem, please send electronic mail to:

@example
    bug-make@@gnu.org
@end example

@noindent
Please include the version number of @code{make} you are using.  You can
get this information with the command @samp{make --version}.
Be sure also to include the type of machine and operating system you are
using.  If possible, include the contents of the file @file{config.h}
that is generated by the configuration process.

@node Introduction, Makefiles, Overview, Top
@comment  node-name,  next,  previous,  up
@chapter An Introduction to Makefiles

You need a file called a @dfn{makefile} to tell @code{make} what to do.
Most often, the makefile tells @code{make} how to compile and link a
program.
@cindex makefile

In this chapter, we will discuss a simple makefile that describes how to
compile and link a text editor which consists of eight C source files
and three header files.  The makefile can also tell @code{make} how to
run miscellaneous commands when explicitly asked (for example, to remove
certain files as a clean-up operation).  To see a more complex example
of a makefile, see @ref{Complex Makefile}.

When @code{make} recompiles the editor, each changed C source file
must be recompiled.  If a header file has changed, each C source file
that includes the header file must be recompiled to be safe.  Each
compilation produces an object file corresponding to the source file.
Finally, if any source file has been recompiled, all the object files,
whether newly made or saved from previous compilations, must be linked
together to produce the new executable editor.
@cindex recompilation
@cindex editor

@menu
* Rule Introduction::           What a rule looks like.
* Simple Makefile::             A Simple Makefile
* How Make Works::              How @code{make} Processes This Makefile
* Variables Simplify::          Variables Make Makefiles Simpler
* make Deduces::                Letting @code{make} Deduce the Commands
* Combine By Prerequisite::     Another Style of Makefile
* Cleanup::                     Rules for Cleaning the Directory
@end menu

@node Rule Introduction, Simple Makefile,  , Introduction
@comment  node-name,  next,  previous,  up
@section What a Rule Looks Like
@cindex rule, introduction to
@cindex makefile rule parts
@cindex parts of makefile rule

A simple makefile consists of ``rules'' with the following shape:

@cindex targets, introduction to
@cindex prerequisites, introduction to
@cindex commands, introduction to
@example
@group
@var{target} @dots{} : @var{prerequisites} @dots{}
        @var{command}
        @dots{}
        @dots{}
@end group
@end example

A @dfn{target} is usually the name of a file that is generated by a
program; examples of targets are executable or object files.  A target
can also be the name of an action to carry out, such as @samp{clean}
(@pxref{Phony Targets}).

A @dfn{prerequisite} is a file that is used as input to create the
target.  A target often depends on several files.

@cindex tabs in rules
A @dfn{command} is an action that @code{make} carries out.
A rule may have more than one command, each on its own line.
@strong{Please note:} you need to put a tab character at the beginning of
every command line!  This is an obscurity that catches the unwary.

Usually a command is in a rule with prerequisites and serves to create a
target file if any of the prerequisites change.  However, the rule that
specifies commands for the target need not have prerequisites.  For
example, the rule containing the delete command associated with the
target @samp{clean} does not have prerequisites.

A @dfn{rule}, then, explains how and when to remake certain files
which are the targets of the particular rule.  @code{make} carries out
the commands on the prerequisites to create or update the target.  A
rule can also explain how and when to carry out an action.
@xref{Rules, , Writing Rules}.

A makefile may contain other text besides rules, but a simple makefile
need only contain rules.  Rules may look somewhat more complicated
than shown in this template, but all fit the pattern more or less.

@node Simple Makefile, How Make Works, Rule Introduction, Introduction
@section A Simple Makefile
@cindex simple makefile
@cindex makefile, simple

Here is a straightforward makefile that describes the way an
executable file called @code{edit} depends on eight object files
which, in turn, depend on eight C source and three header files.

In this example, all the C files include @file{defs.h}, but only those
defining editing commands include @file{command.h}, and only low
level files that change the editor buffer include @file{buffer.h}.

@example
@group
edit : main.o kbd.o command.o display.o \
       insert.o search.o files.o utils.o
        cc -o edit main.o kbd.o command.o display.o \
                   insert.o search.o files.o utils.o

main.o : main.c defs.h
        cc -c main.c
kbd.o : kbd.c defs.h command.h
        cc -c kbd.c
command.o : command.c defs.h command.h
        cc -c command.c
display.o : display.c defs.h buffer.h
        cc -c display.c
insert.o : insert.c defs.h buffer.h
        cc -c insert.c
search.o : search.c defs.h buffer.h
        cc -c search.c
files.o : files.c defs.h buffer.h command.h
        cc -c files.c
utils.o : utils.c defs.h
        cc -c utils.c
clean :
        rm edit main.o kbd.o command.o display.o \
           insert.o search.o files.o utils.o
@end group
@end example

@noindent
We split each long line into two lines using backslash-newline; this is
like using one long line, but is easier to read.
@cindex continuation lines
@cindex @code{\} (backslash), for continuation lines
@cindex backslash (@code{\}), for continuation lines
@cindex quoting newline, in makefile
@cindex newline, quoting, in makefile

To use this makefile to create the executable file called @file{edit},
type:

@example
make
@end example

To use this makefile to delete the executable file and all the object
files from the directory, type:

@example
make clean
@end example

In the example makefile, the targets include the executable file
@samp{edit}, and the object files @samp{main.o} and @samp{kbd.o}.  The
prerequisites are files such as @samp{main.c} and @samp{defs.h}.
In fact, each @samp{.o} file is both a target and a prerequisite.
Commands include @w{@samp{cc -c main.c}} and @w{@samp{cc -c kbd.c}}.

When a target is a file, it needs to be recompiled or relinked if any
of its prerequisites change.  In addition, any prerequisites that are
themselves automatically generated should be updated first.  In this
example, @file{edit} depends on each of the eight object files; the
object file @file{main.o} depends on the source file @file{main.c} and
on the header file @file{defs.h}.

A shell command follows each line that contains a target and
prerequisites.  These shell commands say how to update the target file.
A tab character must come at the beginning of every command line to
distinguish commands lines from other lines in the makefile.  (Bear in
mind that @code{make} does not know anything about how the commands
work.  It is up to you to supply commands that will update the target
file properly.  All @code{make} does is execute the commands in the rule
you have specified when the target file needs to be updated.)
@cindex shell command

The target @samp{clean} is not a file, but merely the name of an
action.  Since you
normally
do not want to carry out the actions in this rule, @samp{clean} is not a prerequisite of any other rule.
Consequently, @code{make} never does anything with it unless you tell
it specifically.  Note that this rule not only is not a prerequisite, it
also does not have any prerequisites, so the only purpose of the rule
is to run the specified commands.  Targets that do not refer to files
but are just actions are called @dfn{phony targets}.  @xref{Phony
Targets}, for information about this kind of target.  @xref{Errors, ,
Errors in Commands}, to see how to cause @code{make} to ignore errors
from @code{rm} or any other command.
@cindex @code{clean} target
@cindex @code{rm} (shell command)

@node How Make Works, Variables Simplify, Simple Makefile, Introduction
@comment  node-name,  next,  previous,  up
@section How @code{make} Processes a Makefile
@cindex processing a makefile
@cindex makefile, how @code{make} processes

By default, @code{make} starts with the first target (not targets whose
names start with @samp{.}).  This is called the @dfn{default goal}.
(@dfn{Goals} are the targets that @code{make} strives ultimately to
update.  @xref{Goals, , Arguments to Specify the Goals}.)
@cindex default goal
@cindex goal, default
@cindex goal

In the simple example of the previous section, the default goal is to
update the executable program @file{edit}; therefore, we put that rule
first.

Thus, when you give the command:

@example
make
@end example

@noindent
@code{make} reads the makefile in the current directory and begins by
processing the first rule.  In the example, this rule is for relinking
@file{edit}; but before @code{make} can fully process this rule, it
must process the rules for the files that @file{edit} depends on,
which in this case are the object files.  Each of these files is
processed according to its own rule.  These rules say to update each
@samp{.o} file by compiling its source file.  The recompilation must
be done if the source file, or any of the header files named as
prerequisites, is more recent than the object file, or if the object
file does not exist.

The other rules are processed because their targets appear as
prerequisites of the goal.  If some other rule is not depended on by the
goal (or anything it depends on, etc.), that rule is not processed,
unless you tell @code{make} to do so (with a command such as
@w{@code{make clean}}).

Before recompiling an object file, @code{make} considers updating its
prerequisites, the source file and header files.  This makefile does not
specify anything to be done for them---the @samp{.c} and @samp{.h} files
are not the targets of any rules---so @code{make} does nothing for these
files.  But @code{make} would update automatically generated C programs,
such as those made by Bison or Yacc, by their own rules at this time.

After recompiling whichever object files need it, @code{make} decides
whether to relink @file{edit}.  This must be done if the file
@file{edit} does not exist, or if any of the object files are newer than
it.  If an object file was just recompiled, it is now newer than
@file{edit}, so @file{edit} is relinked.
@cindex relinking

Thus, if we change the file @file{insert.c} and run @code{make},
@code{make} will compile that file to update @file{insert.o}, and then
link @file{edit}.  If we change the file @file{command.h} and run
@code{make}, @code{make} will recompile the object files @file{kbd.o},
@file{command.o} and @file{files.o} and then link the file @file{edit}.

@node Variables Simplify, make Deduces, How Make Works, Introduction
@section Variables Make Makefiles Simpler
@cindex variables
@cindex simplifying with variables

In our example, we had to list all the object files twice in the rule for
@file{edit} (repeated here):

@example
@group
edit : main.o kbd.o command.o display.o \
              insert.o search.o files.o utils.o
        cc -o edit main.o kbd.o command.o display.o \
                   insert.o search.o files.o utils.o
@end group
@end example

@cindex @code{objects}
Such duplication is error-prone; if a new object file is added to the
system, we might add it to one list and forget the other.  We can eliminate
the risk and simplify the makefile by using a variable.  @dfn{Variables}
allow a text string to be defined once and substituted in multiple places
later (@pxref{Using Variables, ,How to Use Variables}).

@cindex @code{OBJECTS}
@cindex @code{objs}
@cindex @code{OBJS}
@cindex @code{obj}
@cindex @code{OBJ}
It is standard practice for every makefile to have a variable named
@code{objects}, @code{OBJECTS}, @code{objs}, @code{OBJS}, @code{obj},
or @code{OBJ} which is a list of all object file names.  We would
define such a variable @code{objects} with a line like this in the
makefile:@refill

@example
@group
objects = main.o kbd.o command.o display.o \
          insert.o search.o files.o utils.o
@end group
@end example

@noindent
Then, each place we want to put a list of the object file names, we can
substitute the variable's value by writing @samp{$(objects)}
(@pxref{Using Variables, ,How to Use Variables}).

Here is how the complete simple makefile looks when you use a variable
for the object files:

@example
@group
objects = main.o kbd.o command.o display.o \
          insert.o search.o files.o utils.o

edit : $(objects)
        cc -o edit $(objects)
main.o : main.c defs.h
        cc -c main.c
kbd.o : kbd.c defs.h command.h
        cc -c kbd.c
command.o : command.c defs.h command.h
        cc -c command.c
display.o : display.c defs.h buffer.h
        cc -c display.c
insert.o : insert.c defs.h buffer.h
        cc -c insert.c
search.o : search.c defs.h buffer.h
        cc -c search.c
files.o : files.c defs.h buffer.h command.h
        cc -c files.c
utils.o : utils.c defs.h
        cc -c utils.c
clean :
        rm edit $(objects)
@end group
@end example

@node make Deduces, Combine By Prerequisite, Variables Simplify, Introduction
@section Letting @code{make} Deduce the Commands
@cindex deducing commands (implicit rules)
@cindex implicit rule, introduction to
@cindex rule, implicit, introduction to

It is not necessary to spell out the commands for compiling the individual
C source files, because @code{make} can figure them out: it has an
@dfn{implicit rule} for updating a @samp{.o} file from a correspondingly
named @samp{.c} file using a @samp{cc -c} command.  For example, it will
use the command @samp{cc -c main.c -o main.o} to compile @file{main.c} into
@file{main.o}.  We can therefore omit the commands from the rules for the
object files.  @xref{Implicit Rules, ,Using Implicit Rules}.@refill

When a @samp{.c} file is used automatically in this way, it is also
automatically added to the list of prerequisites.  We can therefore omit
the @samp{.c} files from the prerequisites, provided we omit the commands.

Here is the entire example, with both of these changes, and a variable
@code{objects} as suggested above:

@example
@group
objects = main.o kbd.o command.o display.o \
          insert.o search.o files.o utils.o

edit : $(objects)
        cc -o edit $(objects)

main.o : defs.h
kbd.o : defs.h command.h
command.o : defs.h command.h
display.o : defs.h buffer.h
insert.o : defs.h buffer.h
search.o : defs.h buffer.h
files.o : defs.h buffer.h command.h
utils.o : defs.h

.PHONY : clean
clean :
        -rm edit $(objects)
@end group
@end example

@noindent
This is how we would write the makefile in actual practice.  (The
complications associated with @samp{clean} are described elsewhere.
See @ref{Phony Targets}, and @ref{Errors, ,Errors in Commands}.)

Because implicit rules are so convenient, they are important.  You
will see them used frequently.@refill

@node Combine By Prerequisite, Cleanup, make Deduces, Introduction
@section Another Style of Makefile
@cindex combining rules by prerequisite

When the objects of a makefile are created only by implicit rules, an
alternative style of makefile is possible.  In this style of makefile,
you group entries by their prerequisites instead of by their targets.
Here is what one looks like:

@example
@group
objects = main.o kbd.o command.o display.o \
          insert.o search.o files.o utils.o

edit : $(objects)
        cc -o edit $(objects)

$(objects) : defs.h
kbd.o command.o files.o : command.h
display.o insert.o search.o files.o : buffer.h
@end group
@end example

@noindent
Here @file{defs.h} is given as a prerequisite of all the object files;
@file{command.h} and @file{buffer.h} are prerequisites of the specific
object files listed for them.

Whether this is better is a matter of taste: it is more compact, but some
people dislike it because they find it clearer to put all the information
about each target in one place.

@node Cleanup,  , Combine By Prerequisite, Introduction
@section Rules for Cleaning the Directory
@cindex cleaning up
@cindex removing, to clean up

Compiling a program is not the only thing you might want to write rules
for.  Makefiles commonly tell how to do a few other things besides
compiling a program: for example, how to delete all the object files
and executables so that the directory is @samp{clean}.

@cindex @code{clean} target
Here is how we
could write a @code{make} rule for cleaning our example editor:

@example
@group
clean:
        rm edit $(objects)
@end group
@end example

In practice, we might want to write the rule in a somewhat more
complicated manner to handle unanticipated situations.  We would do this:

@example
@group
.PHONY : clean
clean :
        -rm edit $(objects)
@end group
@end example

@noindent
This prevents @code{make} from getting confused by an actual file
called @file{clean} and causes it to continue in spite of errors from
@code{rm}.  (See @ref{Phony Targets}, and @ref{Errors, ,Errors in
Commands}.)

@noindent
A rule such as this should not be placed at the beginning of the
makefile, because we do not want it to run by default!  Thus, in the
example makefile, we want the rule for @code{edit}, which recompiles
the editor, to remain the default goal.

Since @code{clean} is not a prerequisite of @code{edit}, this rule will not
run at all if we give the command @samp{make} with no arguments.  In
order to make the rule run, we have to type @samp{make clean}.
@xref{Running, ,How to Run @code{make}}.

@node Makefiles, Rules, Introduction, Top
@chapter Writing Makefiles

@cindex makefile, how to write
The information that tells @code{make} how to recompile a system comes from
reading a data base called the @dfn{makefile}.

@menu
* Makefile Contents::           What makefiles contain.
* Makefile Names::              How to name your makefile.
* Include::                     How one makefile can use another makefile.
* MAKEFILES Variable::          The environment can specify extra makefiles.
* Remaking Makefiles::          How makefiles get remade.
* Overriding Makefiles::        How to override part of one makefile
                                 with another makefile.
* Reading Makefiles::           How makefiles are parsed.
@end menu

@node Makefile Contents, Makefile Names,  , Makefiles
@section What Makefiles Contain

Makefiles contain five kinds of things: @dfn{explicit rules},
@dfn{implicit rules}, @dfn{variable definitions}, @dfn{directives},
and @dfn{comments}.  Rules, variables, and directives are described at
length in later chapters.@refill

@itemize @bullet
@cindex rule, explicit, definition of
@cindex explicit rule, definition of
@item
An @dfn{explicit rule} says when and how to remake one or more files,
called the rule's targets.  It lists the other files that the targets
depend on, call the @dfn{prerequisites} of the target, and may also give
commands to use to create or update the targets.  @xref{Rules, ,Writing
Rules}.

@cindex rule, implicit, definition of
@cindex implicit rule, definition of
@item
An @dfn{implicit rule} says when and how to remake a class of files
based on their names.  It describes how a target may depend on a file
with a name similar to the target and gives commands to create or
update such a target.  @xref{Implicit Rules, ,Using Implicit Rules}.

@cindex variable definition
@item
A @dfn{variable definition} is a line that specifies a text string
value for a variable that can be substituted into the text later.  The
simple makefile example shows a variable definition for @code{objects}
as a list of all object files (@pxref{Variables Simplify, , Variables
Make Makefiles Simpler}).

@cindex directive
@item
A @dfn{directive} is a command for @code{make} to do something special while
reading the makefile.  These include:

@itemize @bullet
@item
Reading another makefile (@pxref{Include, ,Including Other Makefiles}).

@item
Deciding (based on the values of variables) whether to use or
ignore a part of the makefile (@pxref{Conditionals, ,Conditional Parts of Makefiles}).

@item
Defining a variable from a verbatim string containing multiple lines
(@pxref{Defining, ,Defining Variables Verbatim}).
@end itemize

@cindex comments, in makefile
@cindex @code{#} (comments), in makefile
@item
@samp{#} in a line of a makefile starts a @dfn{comment}.  It and the rest of
the line are ignored, except that a trailing backslash not escaped by
another backslash will continue the comment across multiple lines.
Comments may appear on any of the lines in the makefile, except within a
@code{define} directive, and perhaps within commands (where the shell
decides what is a comment).  A line containing just a comment (with
perhaps spaces before it) is effectively blank, and is ignored.@refill
@end itemize

@node Makefile Names, Include, Makefile Contents, Makefiles
@section What Name to Give Your Makefile
@cindex makefile name
@cindex name of makefile
@cindex default makefile name
@cindex file name of makefile

@c following paragraph rewritten to avoid overfull hbox
By default, when @code{make} looks for the makefile, it tries the
following names, in order: @file{GNUmakefile}, @file{makefile}
and @file{Makefile}.@refill
@findex Makefile
@findex GNUmakefile
@findex makefile

@cindex @code{README}
Normally you should call your makefile either @file{makefile} or
@file{Makefile}.  (We recommend @file{Makefile} because it appears
prominently near the beginning of a directory listing, right near other
important files such as @file{README}.)  The first name checked,
@file{GNUmakefile}, is not recommended for most makefiles.  You should
use this name if you have a makefile that is specific to GNU
@code{make}, and will not be understood by other versions of
@code{make}.  Other @code{make} programs look for @file{makefile} and
@file{Makefile}, but not @file{GNUmakefile}.

If @code{make} finds none of these names, it does not use any makefile.
Then you must specify a goal with a command argument, and @code{make}
will attempt to figure out how to remake it using only its built-in
implicit rules.  @xref{Implicit Rules, ,Using Implicit Rules}.

@cindex @code{-f}
@cindex @code{--file}
@cindex @code{--makefile}
If you want to use a nonstandard name for your makefile, you can specify
the makefile name with the @samp{-f} or @samp{--file} option.  The
arguments @w{@samp{-f @var{name}}} or @w{@samp{--file=@var{name}}} tell
@code{make} to read the file @var{name} as the makefile.  If you use
more than one @samp{-f} or @samp{--file} option, you can specify several
makefiles.  All the makefiles are effectively concatenated in the order
specified.  The default makefile names @file{GNUmakefile},
@file{makefile} and @file{Makefile} are not checked automatically if you
specify @samp{-f} or @samp{--file}.@refill
@cindex specifying makefile name
@cindex makefile name, how to specify
@cindex name of makefile, how to specify
@cindex file name of makefile, how to specify

@node Include, MAKEFILES Variable, Makefile Names, Makefiles
@section Including Other Makefiles
@cindex including other makefiles
@cindex makefile, including

@findex include
The @code{include} directive tells @code{make} to suspend reading the
current makefile and read one or more other makefiles before continuing.
The directive is a line in the makefile that looks like this:

@example
include @var{filenames}@dots{}
@end example

@noindent
@var{filenames} can contain shell file name patterns.
@cindex shell file name pattern (in @code{include})
@cindex shell wildcards (in @code{include})
@cindex wildcard, in @code{include}

Extra spaces are allowed and ignored at the beginning of the line, but
a tab is not allowed.  (If the line begins with a tab, it will be
considered a command line.)  Whitespace is required between
@code{include} and the file names, and between file names; extra
whitespace is ignored there and at the end of the directive.  A
comment starting with @samp{#} is allowed at the end of the line.  If
the file names contain any variable or function references, they are
expanded.  @xref{Using Variables, ,How to Use Variables}.

For example, if you have three @file{.mk} files, @file{a.mk},
@file{b.mk}, and @file{c.mk}, and @code{$(bar)} expands to
@code{bish bash}, then the following expression

@example
include foo *.mk $(bar)
@end example

is equivalent to

@example
include foo a.mk b.mk c.mk bish bash
@end example

When @code{make} processes an @code{include} directive, it suspends
reading of the containing makefile and reads from each listed file in
turn.  When that is finished, @code{make} resumes reading the
makefile in which the directive appears.

One occasion for using @code{include} directives is when several programs,
handled by individual makefiles in various directories, need to use a
common set of variable definitions
(@pxref{Setting, ,Setting Variables}) or pattern rules
(@pxref{Pattern Rules, ,Defining and Redefining Pattern Rules}).

Another such occasion is when you want to generate prerequisites from
source files automatically; the prerequisites can be put in a file that
is included by the main makefile.  This practice is generally cleaner
than that of somehow appending the prerequisites to the end of the main
makefile as has been traditionally done with other versions of
@code{make}.  @xref{Automatic Prerequisites}.
@cindex prerequisites, automatic generation
@cindex automatic generation of prerequisites
@cindex generating prerequisites automatically

@cindex @code{-I}
@cindex @code{--include-dir}
@cindex included makefiles, default directories
@cindex default directories for included makefiles
@findex /usr/gnu/include
@findex /usr/local/include
@findex /usr/include
If the specified name does not start with a slash, and the file is not
found in the current directory, several other directories are searched.
First, any directories you have specified with the @samp{-I} or
@samp{--include-dir} option are searched
(@pxref{Options Summary, ,Summary of Options}).
Then the following directories (if they exist)
are searched, in this order:
@file{@var{prefix}/include} (normally @file{/usr/local/include}
@footnote{GNU Make compiled for MS-DOS and MS-Windows behaves as if
@var{prefix} has been defined to be the root of the DJGPP tree
hierarchy.})
@file{/usr/gnu/include},
@file{/usr/local/include}, @file{/usr/include}.

If an included makefile cannot be found in any of these directories, a
warning message is generated, but it is not an immediately fatal error;
processing of the makefile containing the @code{include} continues.
Once it has finished reading makefiles, @code{make} will try to remake
any that are out of date or don't exist.
@xref{Remaking Makefiles, ,How Makefiles Are Remade}.
Only after it has tried to find a way to remake a makefile and failed,
will @code{make} diagnose the missing makefile as a fatal error.

If you want @code{make} to simply ignore a makefile which does not exist
and cannot be remade, with no error message, use the @w{@code{-include}}
directive instead of @code{include}, like this:

@example
@end example

This is acts like @code{include} in every way except that there is no
error (not even a warning) if any of the @var{filenames} do not exist.
For compatibility with some other @code{make} implementations,
@code{sinclude} is another name for @w{@code{-include}}.

@node MAKEFILES Variable, Remaking Makefiles, Include, Makefiles
@section The Variable @code{MAKEFILES}
@cindex makefile, and @code{MAKEFILES} variable
@cindex including (@code{MAKEFILES} variable)

@vindex MAKEFILES
If the environment variable @code{MAKEFILES} is defined, @code{make}
considers its value as a list of names (separated by whitespace) of
additional makefiles to be read before the others.  This works much like
the @code{include} directive: various directories are searched for those
files (@pxref{Include, ,Including Other Makefiles}).  In addition, the
default goal is never taken from one of these makefiles and it is not an
error if the files listed in @code{MAKEFILES} are not found.@refill

@cindex recursion, and @code{MAKEFILES} variable
The main use of @code{MAKEFILES} is in communication between recursive
invocations of @code{make} (@pxref{Recursion, ,Recursive Use of
@code{make}}).  It usually is not desirable to set the environment
variable before a top-level invocation of @code{make}, because it is
usually better not to mess with a makefile from outside.  However, if
you are running @code{make} without a specific makefile, a makefile in
@code{MAKEFILES} can do useful things to help the built-in implicit
rules work better, such as defining search paths (@pxref{Directory Search}).

Some users are tempted to set @code{MAKEFILES} in the environment
automatically on login, and program makefiles to expect this to be done.
This is a very bad idea, because such makefiles will fail to work if run by
anyone else.  It is much better to write explicit @code{include} directives
in the makefiles.  @xref{Include, , Including Other Makefiles}.

@node Remaking Makefiles, Overriding Makefiles, MAKEFILES Variable, Makefiles
@section How Makefiles Are Remade

@cindex updating makefiles
@cindex remaking makefiles
@cindex makefile, remaking of
Sometimes makefiles can be remade from other files, such as RCS or SCCS
files.  If a makefile can be remade from other files, you probably want
@code{make} to get an up-to-date version of the makefile to read in.

To this end, after reading in all makefiles, @code{make} will consider
each as a goal target and attempt to update it.  If a makefile has a
rule which says how to update it (found either in that very makefile or
in another one) or if an implicit rule applies to it (@pxref{Implicit
Rules, ,Using Implicit Rules}), it will be updated if necessary.  After
all makefiles have been checked, if any have actually been changed,
@code{make} starts with a clean slate and reads all the makefiles over
again.  (It will also attempt to update each of them over again, but
normally this will not change them again, since they are already up to
date.)@refill

If you know that one or more of your makefiles cannot be remade and you
want to keep @code{make} from performing an implicit rule search on
them, perhaps for efficiency reasons, you can use any normal method of
preventing implicit rule lookup to do so.  For example, you can write an
explicit rule with the makefile as the target, and an empty command
string (@pxref{Empty Commands, ,Using Empty Commands}).

If the makefiles specify a double-colon rule to remake a file with
commands but no prerequisites, that file will always be remade
(@pxref{Double-Colon}).  In the case of makefiles, a makefile that has a
double-colon rule with commands but no prerequisites will be remade every
time @code{make} is run, and then again after @code{make} starts over
and reads the makefiles in again.  This would cause an infinite loop:
@code{make} would constantly remake the makefile, and never do anything
else.  So, to avoid this, @code{make} will @strong{not} attempt to
remake makefiles which are specified as targets of a double-colon rule
with commands but no prerequisites.@refill

If you do not specify any makefiles to be read with @samp{-f} or
@samp{--file} options, @code{make} will try the default makefile names;
@pxref{Makefile Names, ,What Name to Give Your Makefile}.  Unlike
makefiles explicitly requested with @samp{-f} or @samp{--file} options,
@code{make} is not certain that these makefiles should exist.  However,
if a default makefile does not exist but can be created by running
@code{make} rules, you probably want the rules to be run so that the
makefile can be used.

Therefore, if none of the default makefiles exists, @code{make} will try
to make each of them in the same order in which they are searched for
(@pxref{Makefile Names, ,What Name to Give Your Makefile})
until it succeeds in making one, or it runs out of names to try.  Note
that it is not an error if @code{make} cannot find or make any makefile;
a makefile is not always necessary.@refill

When you use the @samp{-t} or @samp{--touch} option
(@pxref{Instead of Execution, ,Instead of Executing the Commands}),
you would not want to use an out-of-date makefile to decide which
targets to touch.  So the @samp{-t} option has no effect on updating
makefiles; they are really updated even if @samp{-t} is specified.
Likewise, @samp{-q} (or @samp{--question}) and @samp{-n} (or
@samp{--just-print}) do not prevent updating of makefiles, because an
out-of-date makefile would result in the wrong output for other targets.
Thus, @samp{make -f mfile -n foo} will update @file{mfile}, read it in,
and then print the commands to update @file{foo} and its prerequisites
without running them.  The commands printed for @file{foo} will be those
specified in the updated contents of @file{mfile}.

However, on occasion you might actually wish to prevent updating of even
the makefiles.  You can do this by specifying the makefiles as goals in
the command line as well as specifying them as makefiles.  When the
makefile name is specified explicitly as a goal, the options @samp{-t}
and so on do apply to them.

Thus, @samp{make -f mfile -n mfile foo} would read the makefile
@file{mfile}, print the commands needed to update it without actually
running them, and then print the commands needed to update @file{foo}
without running them.  The commands for @file{foo} will be those
specified by the existing contents of @file{mfile}.

@node Overriding Makefiles, Reading Makefiles, Remaking Makefiles, Makefiles
@section Overriding Part of Another Makefile

@cindex overriding makefiles
@cindex makefile, overriding
Sometimes it is useful to have a makefile that is mostly just like
another makefile.  You can often use the @samp{include} directive to
include one in the other, and add more targets or variable definitions.
However, if the two makefiles give different commands for the same
target, @code{make} will not let you just do this.  But there is another way.

@cindex match-anything rule, used to override
In the containing makefile (the one that wants to include the other),
you can use a match-anything pattern rule to say that to remake any
target that cannot be made from the information in the containing
makefile, @code{make} should look in another makefile.
@xref{Pattern Rules}, for more information on pattern rules.

For example, if you have a makefile called @file{Makefile} that says how
to make the target @samp{foo} (and other targets), you can write a
makefile called @file{GNUmakefile} that contains:

@example
foo:
        frobnicate > foo

%: force
        @@$(MAKE) -f Makefile $@@
force: ;
@end example

If you say @samp{make foo}, @code{make} will find @file{GNUmakefile},
read it, and see that to make @file{foo}, it needs to run the command
@samp{frobnicate > foo}.  If you say @samp{make bar}, @code{make} will
find no way to make @file{bar} in @file{GNUmakefile}, so it will use the
commands from the pattern rule: @samp{make -f Makefile bar}.  If
@file{Makefile} provides a rule for updating @file{bar}, @code{make}
will apply the rule.  And likewise for any other target that
@file{GNUmakefile} does not say how to make.

The way this works is that the pattern rule has a pattern of just
@samp{%}, so it matches any target whatever.  The rule specifies a
prerequisite @file{force}, to guarantee that the commands will be run even
if the target file already exists.  We give @file{force} target empty
commands to prevent @code{make} from searching for an implicit rule to
build it---otherwise it would apply the same match-anything rule to
@file{force} itself and create a prerequisite loop!

@node Reading Makefiles,  , Overriding Makefiles, Makefiles
@section How @code{make} Reads a Makefile
@cindex reading makefiles
@cindex makefile, parsing

GNU @code{make} does its work in two distinct phases.  During the first
phase it reads all the makefiles, included makefiles, etc. and
internalizes all the variables and their values, implicit and explicit
rules, and constructs a dependency graph of all the targets and their
prerequisites.  During the second phase, @code{make} uses these internal
structures to determine what targets will need to be rebuilt and to
invoke the rules necessary to do so.

It's important to understand this two-phase approach because it has a
direct impact on how variable and function expansion happens; this is
often a source of some confusion when writing makefiles.  Here we will
present a summary of the phases in which expansion happens for different
constructs within the makefile.  We say that expansion is
@dfn{immediate} if it happens during the first phase: in this case
@code{make} will expand any variables or functions in that section of a
construct as the makefile is parsed.  We say that expansion is
@dfn{deferred} if expansion is not performed immediately.  Expansion of
deferred construct is not performed until either the construct appears
later in an immediate context, or until the second phase.

You may not be familiar with some of these constructs yet.  You can
reference this section as you become familiar with them, in later
chapters.

@subheading Variable Assignment
@cindex +=, expansion
@cindex =, expansion
@cindex ?=, expansion
@cindex +=, expansion
@cindex define, expansion

Variable definitions are parsed as follows:

@example
@var{immediate} = @var{deferred}
@var{immediate} ?= @var{deferred}
@var{immediate} := @var{immediate}
@var{immediate} += @var{deferred} or @var{immediate}

define @var{immediate}
  @var{deferred}
endef
@end example

For the append operator, @samp{+=}, the right-hand side is considered
immediate if the variable was previously set as a simple variable
(@samp{:=}), and deferred otherwise.

@subheading Conditional Syntax
@cindex ifdef, expansion
@cindex ifeq, expansion
@cindex ifndef, expansion
@cindex ifneq, expansion

All instances of conditional syntax are parsed immediately, in their
entirety; this includes the @code{ifdef}, @code{ifeq}, @code{ifndef},
and @code{ifneq} forms.

@subheading Rule Definition
@cindex target, expansion
@cindex prerequisite, expansion
@cindex implicit rule, expansion
@cindex pattern rule, expansion
@cindex explicit rule, expansion

A rule is always expanded the same way, regardless of the form:

@example
@var{immediate} : @var{immediate} ; @var{deferred}
	@var{deferred}
@end example

That is, the target and prerequisite sections are expanded immediately,
and the commands used to construct the target are always deferred.  This
general rule is true for explicit rules, pattern rules, suffix rules,
static pattern rules, and simple prerequisite definitions.

@node Rules, Commands, Makefiles, Top
@chapter Writing Rules
@cindex writing rules
@cindex rule, how to write
@cindex target
@cindex prerequisite

A @dfn{rule} appears in the makefile and says when and how to remake
certain files, called the rule's @dfn{targets} (most often only one per rule).
It lists the other files that are the @dfn{prerequisites} of the target, and
@dfn{commands} to use to create or update the target.

@cindex default goal
@cindex goal, default
The order of rules is not significant, except for determining the
@dfn{default goal}: the target for @code{make} to consider, if you do
not otherwise specify one.  The default goal is the target of the first
rule in the first makefile.  If the first rule has multiple targets,
only the first target is taken as the default.  There are two
exceptions: a target starting with a period is not a default unless it
contains one or more slashes, @samp{/}, as well; and, a target that
defines a pattern rule has no effect on the default goal.
(@xref{Pattern Rules, ,Defining and Redefining Pattern Rules}.)

Therefore, we usually write the makefile so that the first rule is the
one for compiling the entire program or all the programs described by
the makefile (often with a target called @samp{all}).
@xref{Goals, ,Arguments to Specify the Goals}.

@menu
* Rule Example::                An example explained.
* Rule Syntax::                 General syntax explained.
* Wildcards::                   Using wildcard characters such as `*'.
* Directory Search::            Searching other directories for source files.
* Phony Targets::               Using a target that is not a real file's name.
* Force Targets::               You can use a target without commands
                                  or prerequisites to mark other
                                  targets as phony.
* Empty Targets::               When only the date matters and the
                                  files are empty.
* Special Targets::             Targets with special built-in meanings.
* Multiple Targets::            When to make use of several targets in a rule.
* Multiple Rules::              How to use several rules with the same target.
* Static Pattern::              Static pattern rules apply to multiple targets
                                  and can vary the prerequisites according to
                                  the target name.
* Double-Colon::                How to use a special kind of rule to allow
                                  several independent rules for one target.
* Automatic Prerequisites::     How to automatically generate rules giving
                                  prerequisites from source files themselves.
@end menu

@ifinfo
@node Rule Example, Rule Syntax,  , Rules
@section Rule Example

Here is an example of a rule:

@example
foo.o : foo.c defs.h       # module for twiddling the frobs
        cc -c -g foo.c
@end example

Its target is @file{foo.o} and its prerequisites are @file{foo.c} and
@file{defs.h}.  It has one command, which is @samp{cc -c -g foo.c}.
The command line starts with a tab to identify it as a command.

This rule says two things:

@itemize @bullet
@item
How to decide whether @file{foo.o} is out of date: it is out of date
if it does not exist, or if either @file{foo.c} or @file{defs.h} is
more recent than it.

@item
How to update the file @file{foo.o}: by running @code{cc} as stated.
The command does not explicitly mention @file{defs.h}, but we presume
that @file{foo.c} includes it, and that that is why @file{defs.h} was
added to the prerequisites.
@end itemize
@end ifinfo

@node Rule Syntax, Wildcards, Rule Example, Rules
@section Rule Syntax

@cindex rule syntax
@cindex syntax of rules
In general, a rule looks like this:

@example
@var{targets} : @var{prerequisites}
        @var{command}
        @dots{}
@end example

@noindent
or like this:

@example
@var{targets} : @var{prerequisites} ; @var{command}
        @var{command}
        @dots{}
@end example

@cindex targets
@cindex rule targets
The @var{targets} are file names, separated by spaces.  Wildcard
characters may be used (@pxref{Wildcards, ,Using Wildcard Characters
in File Names}) and a name of the form @file{@var{a}(@var{m})}
represents member @var{m} in archive file @var{a}
(@pxref{Archive Members, ,Archive Members as Targets}).
Usually there is only one
target per rule, but occasionally there is a reason to have more
(@pxref{Multiple Targets, , Multiple Targets in a Rule}).@refill

@cindex commands
@cindex tab character (in commands)
The @var{command} lines start with a tab character.  The first command may
appear on the line after the prerequisites, with a tab character, or may
appear on the same line, with a semicolon.  Either way, the effect is the
same.  @xref{Commands, ,Writing the Commands in Rules}.

@cindex dollar sign (@code{$}), in rules
@cindex @code{$}, in rules
@cindex rule, and @code{$}
Because dollar signs are used to start variable references, if you really
want a dollar sign in a rule you must write two of them, @samp{$$}
(@pxref{Using Variables, ,How to Use Variables}).
You may split a long line by inserting a backslash
followed by a newline, but this is not required, as @code{make} places no
limit on the length of a line in a makefile.

A rule tells @code{make} two things: when the targets are out of date,
and how to update them when necessary.

@cindex prerequisites
@cindex rule prerequisites
The criterion for being out of date is specified in terms of the
@var{prerequisites}, which consist of file names separated by spaces.
(Wildcards and archive members (@pxref{Archives}) are allowed here too.)
A target is out of date if it does not exist or if it is older than any
of the prerequisites (by comparison of last-modification times).  The
idea is that the contents of the target file are computed based on
information in the prerequisites, so if any of the prerequisites changes,
the contents of the existing target file are no longer necessarily
valid.

How to update is specified by @var{commands}.  These are lines to be
executed by the shell (normally @samp{sh}), but with some extra features
(@pxref{Commands, ,Writing the Commands in Rules}).

@node Wildcards, Directory Search, Rule Syntax, Rules
@section Using Wildcard Characters in File Names
@cindex wildcard
@cindex file name with wildcards
@cindex globbing (wildcards)

@cindex @code{*} (wildcard character)
@cindex @code{?} (wildcard character)
@cindex @code{[@dots{}]} (wildcard characters)
A single file name can specify many files using @dfn{wildcard characters}.
The wildcard characters in @code{make} are @samp{*}, @samp{?} and
@samp{[@dots{}]}, the same as in the Bourne shell.  For example, @file{*.c}
specifies a list of all the files (in the working directory) whose names
end in @samp{.c}.@refill

@cindex @code{~} (tilde)
@cindex tilde (@code{~})
@cindex home directory
The character @samp{~} at the beginning of a file name also has special
significance.  If alone, or followed by a slash, it represents your home
directory.  For example @file{~/bin} expands to @file{/home/you/bin}.
If the @samp{~} is followed by a word, the string represents the home
directory of the user named by that word.  For example @file{~john/bin}
expands to @file{/home/john/bin}.  On systems which don't have a home
directory for each user (such as MS-DOS or MS-Windows), this
functionality can be simulated by setting the environment variable
@var{HOME}.@refill

Wildcard expansion happens automatically in targets, in prerequisites,
and in commands (where the shell does the expansion).  In other
contexts, wildcard expansion happens only if you request it explicitly
with the @code{wildcard} function.

The special significance of a wildcard character can be turned off by
preceding it with a backslash.  Thus, @file{foo\*bar} would refer to a
specific file whose name consists of @samp{foo}, an asterisk, and
@samp{bar}.@refill

@menu
* Wildcard Examples::           Several examples
* Wildcard Pitfall::            Problems to avoid.
* Wildcard Function::           How to cause wildcard expansion where
                                  it does not normally take place.
@end menu

@node Wildcard Examples, Wildcard Pitfall,  , Wildcards
@subsection Wildcard Examples

Wildcards can be used in the commands of a rule, where they are expanded
by the shell.  For example, here is a rule to delete all the object files:

@example
@group
clean:
        rm -f *.o
@end group
@end example
@cindex @code{rm} (shell command)

Wildcards are also useful in the prerequisites of a rule.  With the
following rule in the makefile, @samp{make print} will print all the
@samp{.c} files that have changed since the last time you printed them:

@example
print: *.c
        lpr -p $?
        touch print
@end example

@cindex @code{print} target
@cindex @code{lpr} (shell command)
@cindex @code{touch} (shell command)
@noindent
This rule uses @file{print} as an empty target file; see @ref{Empty
Targets, ,Empty Target Files to Record Events}.  (The automatic variable
@samp{$?} is used to print only those files that have changed; see
@ref{Automatic, ,Automatic Variables}.)@refill

Wildcard expansion does not happen when you define a variable.  Thus, if
you write this:

@example
objects = *.o
@end example

@noindent
then the value of the variable @code{objects} is the actual string
@samp{*.o}.  However, if you use the value of @code{objects} in a target,
prerequisite or command, wildcard expansion will take place at that time.
To set @code{objects} to the expansion, instead use:

@example
objects := $(wildcard *.o)
@end example

@noindent
@xref{Wildcard Function}.

@node Wildcard Pitfall, Wildcard Function, Wildcard Examples, Wildcards
@subsection Pitfalls of Using Wildcards
@cindex wildcard pitfalls
@cindex pitfalls of wildcards
@cindex mistakes with wildcards
@cindex errors with wildcards
@cindex problems with wildcards

Now here is an example of a naive way of using wildcard expansion, that
does not do what you would intend.  Suppose you would like to say that the
executable file @file{foo} is made from all the object files in the
directory, and you write this:

@example
objects = *.o

foo : $(objects)
        cc -o foo $(CFLAGS) $(objects)
@end example

@noindent
The value of @code{objects} is the actual string @samp{*.o}.  Wildcard
expansion happens in the rule for @file{foo}, so that each @emph{existing}
@samp{.o} file becomes a prerequisite of @file{foo} and will be recompiled if
necessary.

But what if you delete all the @samp{.o} files?  When a wildcard matches
no files, it is left as it is, so then @file{foo} will depend on the
oddly-named file @file{*.o}.  Since no such file is likely to exist,
@code{make} will give you an error saying it cannot figure out how to
make @file{*.o}.  This is not what you want!

Actually it is possible to obtain the desired result with wildcard
expansion, but you need more sophisticated techniques, including the
@code{wildcard} function and string substitution.
@ifinfo
@xref{Wildcard Function, ,The Function @code{wildcard}}.
@end ifinfo
@iftex
These are described in the following section.
@end iftex

@cindex wildcards and MS-DOS/MS-Windows backslashes
@cindex backslashes in pathnames and wildcard expansion

Microsoft operating systems (MS-DOS and MS-Windows) use backslashes to
separate directories in pathnames, like so:

@example
  c:\foo\bar\baz.c
@end example

This is equivalent to the Unix-style @file{c:/foo/bar/baz.c} (the
@file{c:} part is the so-called drive letter).  When @code{make} runs on
these systems, it supports backslashes as well as the Unix-style forward
slashes in pathnames.  However, this support does @emph{not} include the
wildcard expansion, where backslash is a quote character.  Therefore,
you @emph{must} use Unix-style slashes in these cases.


@node Wildcard Function,  , Wildcard Pitfall, Wildcards
@subsection The Function @code{wildcard}
@findex wildcard

Wildcard expansion happens automatically in rules.  But wildcard expansion
does not normally take place when a variable is set, or inside the
arguments of a function.  If you want to do wildcard expansion in such
places, you need to use the @code{wildcard} function, like this:

@example
$(wildcard @var{pattern}@dots{})
@end example

@noindent
This string, used anywhere in a makefile, is replaced by a
space-separated list of names of existing files that match one of the
given file name patterns.  If no existing file name matches a pattern,
then that pattern is omitted from the output of the @code{wildcard}
function.  Note that this is different from how unmatched wildcards
behave in rules, where they are used verbatim rather than ignored
(@pxref{Wildcard Pitfall}).

One use of the @code{wildcard} function is to get a list of all the C source
files in a directory, like this:

@example
$(wildcard *.c)
@end example

We can change the list of C source files into a list of object files by
replacing the @samp{.c} suffix with @samp{.o} in the result, like this:

@example
$(patsubst %.c,%.o,$(wildcard *.c))
@end example

@noindent
(Here we have used another function, @code{patsubst}.
@xref{Text Functions, ,Functions for String Substitution and Analysis}.)@refill

Thus, a makefile to compile all C source files in the directory and then
link them together could be written as follows:

@example
objects := $(patsubst %.c,%.o,$(wildcard *.c))

foo : $(objects)
        cc -o foo $(objects)
@end example

@noindent
(This takes advantage of the implicit rule for compiling C programs, so
there is no need to write explicit rules for compiling the files.
@xref{Flavors, ,The Two Flavors of Variables}, for an explanation of
@samp{:=}, which is a variant of @samp{=}.)

@node Directory Search, Phony Targets, Wildcards, Rules
@section Searching Directories for Prerequisites
@vindex VPATH
@findex vpath
@cindex vpath
@cindex search path for prerequisites (@code{VPATH})
@cindex directory search (@code{VPATH})

For large systems, it is often desirable to put sources in a separate
directory from the binaries.  The @dfn{directory search} features of
@code{make} facilitate this by searching several directories
automatically to find a prerequisite.  When you redistribute the files
among directories, you do not need to change the individual rules,
just the search paths.

@menu
* General Search::              Specifying a search path that applies
                                  to every prerequisite.
* Selective Search::            Specifying a search path
                                  for a specified class of names.
* Search Algorithm::            When and how search paths are applied.
* Commands/Search::             How to write shell commands that work together
                                  with search paths.
* Implicit/Search::             How search paths affect implicit rules.
* Libraries/Search::            Directory search for link libraries.
@end menu

@node General Search, Selective Search,  , Directory Search
@subsection @code{VPATH}: Search Path for All Prerequisites
@vindex VPATH

The value of the @code{make} variable @code{VPATH} specifies a list of
directories that @code{make} should search.  Most often, the
directories are expected to contain prerequisite files that are not in the
current directory; however, @code{VPATH} specifies a search list that
@code{make} applies for all files, including files which are targets of
rules.

Thus, if a file that is listed as a target or prerequisite does not exist
in the current directory, @code{make} searches the directories listed in
@code{VPATH} for a file with that name.  If a file is found in one of
them, that file may become the prerequisite (see below).  Rules may then
specify the names of files in the prerequisite list as if they all
existed in the current directory.  @xref{Commands/Search, ,Writing Shell
Commands with Directory Search}.

In the @code{VPATH} variable, directory names are separated by colons or
blanks.  The order in which directories are listed is the order followed
by @code{make} in its search.  (On MS-DOS and MS-Windows, semi-colons
are used as separators of directory names in @code{VPATH}, since the
colon can be used in the pathname itself, after the drive letter.)

For example,

@example
VPATH = src:../headers
@end example

@noindent
specifies a path containing two directories, @file{src} and
@file{../headers}, which @code{make} searches in that order.

With this value of @code{VPATH}, the following rule,

@example
foo.o : foo.c
@end example

@noindent
is interpreted as if it were written like this:

@example
foo.o : src/foo.c
@end example

@noindent
assuming the file @file{foo.c} does not exist in the current directory but
is found in the directory @file{src}.

@node Selective Search, Search Algorithm, General Search, Directory Search
@subsection The @code{vpath} Directive
@findex vpath

Similar to the @code{VPATH} variable, but more selective, is the
@code{vpath} directive (note lower case), which allows you to specify a
search path for a particular class of file names: those that match a
particular pattern.  Thus you can supply certain search directories for
one class of file names and other directories (or none) for other file
names.

There are three forms of the @code{vpath} directive:

@table @code
@item vpath @var{pattern} @var{directories}
Specify the search path @var{directories} for file names that match
@var{pattern}.

The search path, @var{directories}, is a list of directories to be
searched, separated by colons (semi-colons on MS-DOS and MS-Windows) or
blanks, just like the search path used in the @code{VPATH} variable.

@item vpath @var{pattern}
Clear out the search path associated with @var{pattern}.

@c Extra blank line makes sure this gets two lines.
@item vpath

Clear all search paths previously specified with @code{vpath} directives.
@end table

A @code{vpath} pattern is a string containing a @samp{%} character.  The
string must match the file name of a prerequisite that is being searched
for, the @samp{%} character matching any sequence of zero or more
characters (as in pattern rules; @pxref{Pattern Rules, ,Defining and
Redefining Pattern Rules}).  For example, @code{%.h} matches files that
end in @code{.h}.  (If there is no @samp{%}, the pattern must match the
prerequisite exactly, which is not useful very often.)

@cindex @code{%}, quoting in @code{vpath}
@cindex @code{%}, quoting with @code{\} (backslash)
@cindex @code{\} (backslash), to quote @code{%}
@cindex backslash (@code{\}), to quote @code{%}
@cindex quoting @code{%}, in @code{vpath}
@samp{%} characters in a @code{vpath} directive's pattern can be quoted
with preceding backslashes (@samp{\}).  Backslashes that would otherwise
quote @samp{%} characters can be quoted with more backslashes.
Backslashes that quote @samp{%} characters or other backslashes are
removed from the pattern before it is compared to file names.  Backslashes
that are not in danger of quoting @samp{%} characters go unmolested.@refill

When a prerequisite fails to exist in the current directory, if the
@var{pattern} in a @code{vpath} directive matches the name of the
prerequisite file, then the @var{directories} in that directive are searched
just like (and before) the directories in the @code{VPATH} variable.

For example,

@example
vpath %.h ../headers
@end example

@noindent
tells @code{make} to look for any prerequisite whose name ends in @file{.h}
in the directory @file{../headers} if the file is not found in the current
directory.

If several @code{vpath} patterns match the prerequisite file's name, then
@code{make} processes each matching @code{vpath} directive one by one,
searching all the directories mentioned in each directive.  @code{make}
handles multiple @code{vpath} directives in the order in which they
appear in the makefile; multiple directives with the same pattern are
independent of each other.

@need 750
Thus,

@example
@group
vpath %.c foo
vpath %   blish
vpath %.c bar
@end group
@end example

@noindent
will look for a file ending in @samp{.c} in @file{foo}, then
@file{blish}, then @file{bar}, while

@example
@group
vpath %.c foo:bar
vpath %   blish
@end group
@end example

@noindent
will look for a file ending in @samp{.c} in @file{foo}, then
@file{bar}, then @file{blish}.

@node Search Algorithm, Commands/Search, Selective Search, Directory Search
@subsection How Directory Searches are Performed
@cindex algorithm for directory search
@cindex directory search algorithm

When a prerequisite is found through directory search, regardless of type
(general or selective), the pathname located may not be the one that
@code{make} actually provides you in the prerequisite list.  Sometimes
the path discovered through directory search is thrown away.

The algorithm @code{make} uses to decide whether to keep or abandon a
path found via directory search is as follows:

@enumerate
@item
If a target file does not exist at the path specified in the makefile,
directory search is performed.

@item
If the directory search is successful, that path is kept and this file
is tentatively stored as the target.

@item
All prerequisites of this target are examined using this same method.

@item
After processing the prerequisites, the target may or may not need to be
rebuilt:

@enumerate a
@item
If the target does @emph{not} need to be rebuilt, the path to the file
found during directory search is used for any prerequisite lists which
contain this target.  In short, if @code{make} doesn't need to rebuild
the target then you use the path found via directory search.

@item
If the target @emph{does} need to be rebuilt (is out-of-date), the
pathname found during directory search is @emph{thrown away}, and the
target is rebuilt using the file name specified in the makefile.  In
short, if @code{make} must rebuild, then the target is rebuilt locally,
not in the directory found via directory search.
@end enumerate
@end enumerate

This algorithm may seem complex, but in practice it is quite often
exactly what you want.

@cindex traditional directory search (GPATH)
@cindex directory search, traditional (GPATH)
Other versions of @code{make} use a simpler algorithm: if the file does
not exist, and it is found via directory search, then that pathname is
always used whether or not the target needs to be built.  Thus, if the
target is rebuilt it is created at the pathname discovered during
directory search.

@vindex GPATH
If, in fact, this is the behavior you want for some or all of your
directories, you can use the @code{GPATH} variable to indicate this to
@code{make}.

@code{GPATH} has the same syntax and format as @code{VPATH} (that is, a
space- or colon-delimited list of pathnames).  If an out-of-date target
is found by directory search in a directory that also appears in
@code{GPATH}, then that pathname is not thrown away.  The target is
rebuilt using the expanded path.

@node Commands/Search, Implicit/Search, Search Algorithm, Directory Search
@subsection Writing Shell Commands with Directory Search
@cindex shell command, and directory search
@cindex directory search (@code{VPATH}), and shell commands

When a prerequisite is found in another directory through directory search,
this cannot change the commands of the rule; they will execute as written.
Therefore, you must write the commands with care so that they will look for
the prerequisite in the directory where @code{make} finds it.

This is done with the @dfn{automatic variables} such as @samp{$^}
(@pxref{Automatic, ,Automatic Variables}).
For instance, the value of @samp{$^} is a
list of all the prerequisites of the rule, including the names of
the directories in which they were found, and the value of
@samp{$@@} is the target.  Thus:@refill

@example
foo.o : foo.c
        cc -c $(CFLAGS) $^ -o $@@
@end example

@noindent
(The variable @code{CFLAGS} exists so you can specify flags for C
compilation by implicit rules; we use it here for consistency so it will
affect all C compilations uniformly;
@pxref{Implicit Variables, ,Variables Used by Implicit Rules}.)

Often the prerequisites include header files as well, which you do not
want to mention in the commands.  The automatic variable @samp{$<} is
just the first prerequisite:

@example
VPATH = src:../headers
foo.o : foo.c defs.h hack.h
        cc -c $(CFLAGS) $< -o $@@
@end example

@node Implicit/Search, Libraries/Search, Commands/Search, Directory Search
@subsection Directory Search and Implicit Rules
@cindex @code{VPATH}, and implicit rules
@cindex directory search (@code{VPATH}), and implicit rules
@cindex search path for prerequisites (@code{VPATH}), and implicit rules
@cindex implicit rule, and directory search
@cindex implicit rule, and @code{VPATH}
@cindex rule, implicit, and directory search
@cindex rule, implicit, and @code{VPATH}

The search through the directories specified in @code{VPATH} or with
@code{vpath} also happens during consideration of implicit rules
(@pxref{Implicit Rules, ,Using Implicit Rules}).

For example, when a file @file{foo.o} has no explicit rule, @code{make}
considers implicit rules, such as the built-in rule to compile
@file{foo.c} if that file exists.  If such a file is lacking in the
current directory, the appropriate directories are searched for it.  If
@file{foo.c} exists (or is mentioned in the makefile) in any of the
directories, the implicit rule for C compilation is applied.

The commands of implicit rules normally use automatic variables as a
matter of necessity; consequently they will use the file names found by
directory search with no extra effort.

@node Libraries/Search,  , Implicit/Search, Directory Search
@subsection Directory Search for Link Libraries
@cindex link libraries, and directory search
@cindex libraries for linking, directory search
@cindex directory search (@code{VPATH}), and link libraries
@cindex @code{VPATH}, and link libraries
@cindex search path for prerequisites (@code{VPATH}), and link libraries
@cindex @code{-l} (library search)
@cindex link libraries, patterns matching
@cindex @code{.LIBPATTERNS}, and link libraries
@vindex .LIBPATTERNS

Directory search applies in a special way to libraries used with the
linker.  This special feature comes into play when you write a prerequisite
whose name is of the form @samp{-l@var{name}}.  (You can tell something
strange is going on here because the prerequisite is normally the name of a
file, and the @emph{file name} of a library generally looks like
@file{lib@var{name}.a}, not like @samp{-l@var{name}}.)@refill

When a prerequisite's name has the form @samp{-l@var{name}}, @code{make}
handles it specially by searching for the file @file{lib@var{name}.so} in
the current directory, in directories specified by matching @code{vpath}
search paths and the @code{VPATH} search path, and then in the
directories @file{/lib}, @file{/usr/lib}, and @file{@var{prefix}/lib}
(normally @file{/usr/local/lib}, but MS-DOS/MS-Windows versions of
@code{make} behave as if @var{prefix} is defined to be the root of the
DJGPP installation tree).

If that file is not found, then the file @file{lib@var{name}.a} is
searched for, in the same directories as above.

For example, if there is a @file{/usr/lib/libcurses.a} library on your
system (and no @file{/usr/lib/libcurses.so} file), then

@example
@group
foo : foo.c -lcurses
        cc $^ -o $@@
@end group
@end example

@noindent
would cause the command @samp{cc foo.c /usr/lib/libcurses.a -o foo} to
be executed when @file{foo} is older than @file{foo.c} or than
@file{/usr/lib/libcurses.a}.@refill

Although the default set of files to be searched for is
@file{lib@var{name}.so} and @file{lib@var{name}.a}, this is customizable
via the @code{.LIBPATTERNS} variable.  Each word in the value of this
variable is a pattern string.  When a prerequisite like
@samp{-l@var{name}} is seen, @code{make} will replace the percent in
each pattern in the list with @var{name} and perform the above directory
searches using that library filename.  If no library is found, the next
word in the list will be used.

The default value for @code{.LIBPATTERNS} is ``@samp{lib%.so lib%.a}'',
which provides the default behavior described above.

You can turn off link library expansion completely by setting this
variable to an empty value.

@node Phony Targets, Force Targets, Directory Search, Rules
@section Phony Targets
@cindex phony targets
@cindex targets, phony
@cindex targets without a file

A phony target is one that is not really the name of a file.  It is just a
name for some commands to be executed when you make an explicit request.
There are two reasons to use a phony target: to avoid a conflict with
a file of the same name, and to improve performance.

If you write a rule whose commands will not create the target file, the
commands will be executed every time the target comes up for remaking.
Here is an example:

@example
@group
clean:
        rm *.o temp
@end group
@end example

@noindent
Because the @code{rm} command does not create a file named @file{clean},
probably no such file will ever exist.  Therefore, the @code{rm} command
will be executed every time you say @samp{make clean}.
@cindex @code{rm} (shell command)

@findex .PHONY
The phony target will cease to work if anything ever does create a file
named @file{clean} in this directory.  Since it has no prerequisites, the
file @file{clean} would inevitably be considered up to date, and its
commands would not be executed.  To avoid this problem, you can explicitly
declare the target to be phony, using the special target @code{.PHONY}
(@pxref{Special Targets, ,Special Built-in Target Names}) as follows:

@example
.PHONY : clean
@end example

@noindent
Once this is done, @samp{make clean} will run the commands regardless of
whether there is a file named @file{clean}.

Since it knows that phony targets do not name actual files that could be
remade from other files, @code{make} skips the implicit rule search for
phony targets (@pxref{Implicit Rules}).  This is why declaring a target
phony is good for performance, even if you are not worried about the
actual file existing.

Thus, you first write the line that states that @code{clean} is a
phony target, then you write the rule, like this:

@example
@group
.PHONY: clean
clean:
        rm *.o temp
@end group
@end example

Another example of the usefulness of phony targets is in conjunction
with recursive invocations of @code{make}.  In this case the makefile
will often contain a variable which lists a number of subdirectories to
be built.  One way to handle this is with one rule whose command is a
shell loop over the subdirectories, like this:

@example
@group
SUBDIRS = foo bar baz

subdirs:
        for dir in $(SUBDIRS); do \
          $(MAKE) -C $$dir; \
        done
@end group
@end example

There are a few problems with this method, however.  First, any error
detected in a submake is not noted by this rule, so it will continue to
build the rest of the directories even when one fails.  This can be
overcome by adding shell commands to note the error and exit, but then
it will do so even if @code{make} is invoked with the @code{-k} option,
which is unfortunate.  Second, and perhaps more importantly, you cannot
take advantage of the parallel build capabilities of make using this
method, since there is only one rule.

By declaring the subdirectories as phony targets (you must do this as
the subdirectory obviously always exists; otherwise it won't be built)
you can remove these problems:

@example
@group
SUBDIRS = foo bar baz

.PHONY: subdirs $(SUBDIRS)

subdirs: $(SUBDIRS)

$(SUBDIRS):
        $(MAKE) -C $@@

foo: baz
@end group
@end example

Here we've also declared that the @file{foo} subdirectory cannot be
built until after the @file{baz} subdirectory is complete; this kind of
relationship declaration is particularly important when attempting
parallel builds.

A phony target should not be a prerequisite of a real target file; if it
is, its commands are run every time @code{make} goes to update that
file.  As long as a phony target is never a prerequisite of a real
target, the phony target commands will be executed only when the phony
target is a specified goal (@pxref{Goals, ,Arguments to Specify the
Goals}).

Phony targets can have prerequisites.  When one directory contains multiple
programs, it is most convenient to describe all of the programs in one
makefile @file{./Makefile}.  Since the target remade by default will be the
first one in the makefile, it is common to make this a phony target named
@samp{all} and give it, as prerequisites, all the individual programs.  For
example:

@example
all : prog1 prog2 prog3
.PHONY : all

prog1 : prog1.o utils.o
        cc -o prog1 prog1.o utils.o

prog2 : prog2.o
        cc -o prog2 prog2.o

prog3 : prog3.o sort.o utils.o
        cc -o prog3 prog3.o sort.o utils.o
@end example

@noindent
Now you can say just @samp{make} to remake all three programs, or specify
as arguments the ones to remake (as in @samp{make prog1 prog3}).

When one phony target is a prerequisite of another, it serves as a subroutine
of the other.  For example, here @samp{make cleanall} will delete the
object files, the difference files, and the file @file{program}:

@example
.PHONY: cleanall cleanobj cleandiff

cleanall : cleanobj cleandiff
        rm program

cleanobj :
        rm *.o

cleandiff :
        rm *.diff
@end example

@node Force Targets, Empty Targets, Phony Targets, Rules
@section Rules without Commands or Prerequisites
@cindex force targets
@cindex targets, force
@cindex @code{FORCE}
@cindex rule, no commands or prerequisites

If a rule has no prerequisites or commands, and the target of the rule
is a nonexistent file, then @code{make} imagines this target to have
been updated whenever its rule is run.  This implies that all targets
depending on this one will always have their commands run.

An example will illustrate this:

@example
@group
clean: FORCE
        rm $(objects)
FORCE:
@end group
@end example

Here the target @samp{FORCE} satisfies the special conditions, so the
target @file{clean} that depends on it is forced to run its commands.
There is nothing special about the name @samp{FORCE}, but that is one name
commonly used this way.

As you can see, using @samp{FORCE} this way has the same results as using
@samp{.PHONY: clean}.

Using @samp{.PHONY} is more explicit and more efficient.  However,
other versions of @code{make} do not support @samp{.PHONY}; thus
@samp{FORCE} appears in many makefiles.  @xref{Phony Targets}.

@node Empty Targets, Special Targets, Force Targets, Rules
@section Empty Target Files to Record Events
@cindex empty targets
@cindex targets, empty
@cindex recording events with empty targets

The @dfn{empty target} is a variant of the phony target; it is used to hold
commands for an action that you request explicitly from time to time.
Unlike a phony target, this target file can really exist; but the file's
contents do not matter, and usually are empty.

The purpose of the empty target file is to record, with its
last-modification time, when the rule's commands were last executed.  It
does so because one of the commands is a @code{touch} command to update the
target file.

The empty target file should have some prerequisites (otherwise it
doesn't make sense).  When you ask to remake the empty target, the
commands are executed if any prerequisite is more recent than the target;
in other words, if a prerequisite has changed since the last time you
remade the target.  Here is an example:

@example
print: foo.c bar.c
        lpr -p $?
        touch print
@end example
@cindex @code{print} target
@cindex @code{lpr} (shell command)
@cindex @code{touch} (shell command)

@noindent
With this rule, @samp{make print} will execute the @code{lpr} command if
either source file has changed since the last @samp{make print}.  The
automatic variable @samp{$?} is used to print only those files that have
changed (@pxref{Automatic, ,Automatic Variables}).

@node Special Targets, Multiple Targets, Empty Targets, Rules
@section Special Built-in Target Names
@cindex special targets
@cindex built-in special targets
@cindex targets, built-in special

Certain names have special meanings if they appear as targets.

@table @code
@findex .PHONY
@item .PHONY

The prerequisites of the special target @code{.PHONY} are considered to
be phony targets.  When it is time to consider such a target,
@code{make} will run its commands unconditionally, regardless of
whether a file with that name exists or what its last-modification
time is.  @xref{Phony Targets, ,Phony Targets}.

@findex .SUFFIXES
@item .SUFFIXES

The prerequisites of the special target @code{.SUFFIXES} are the list
of suffixes to be used in checking for suffix rules.
@xref{Suffix Rules, , Old-Fashioned Suffix Rules}.

@findex .DEFAULT
@item .DEFAULT

The commands specified for @code{.DEFAULT} are used for any target for
which no rules are found (either explicit rules or implicit rules).
@xref{Last Resort}.  If @code{.DEFAULT} commands are specified, every
file mentioned as a prerequisite, but not as a target in a rule, will have
these commands executed on its behalf.  @xref{Implicit Rule Search,
,Implicit Rule Search Algorithm}.

@findex .PRECIOUS
@item .PRECIOUS
@cindex precious targets
@cindex preserving with @code{.PRECIOUS}

The targets which @code{.PRECIOUS} depends on are given the following
special treatment: if @code{make} is killed or interrupted during the
execution of their commands, the target is not deleted.
@xref{Interrupts, ,Interrupting or Killing @code{make}}.  Also, if the
target is an intermediate file, it will not be deleted after it is no
longer needed, as is normally done.  @xref{Chained Rules, ,Chains of
Implicit Rules}.  In this latter respect it overlaps with the
@code{.SECONDARY} special target.

You can also list the target pattern of an implicit rule (such as
@samp{%.o}) as a prerequisite file of the special target @code{.PRECIOUS}
to preserve intermediate files created by rules whose target patterns
match that file's name.

@findex .INTERMEDIATE
@item .INTERMEDIATE
@cindex intermediate targets, explicit

The targets which @code{.INTERMEDIATE} depends on are treated as
intermediate files.  @xref{Chained Rules, ,Chains of Implicit Rules}.
@code{.INTERMEDIATE} with no prerequisites has no effect.

@findex .SECONDARY
@item .SECONDARY
@cindex secondary targets
@cindex preserving with @code{.SECONDARY}

The targets which @code{.SECONDARY} depends on are treated as
intermediate files, except that they are never automatically deleted.
@xref{Chained Rules, ,Chains of Implicit Rules}.

@code{.SECONDARY} with no prerequisites causes all targets to be treated
as secondary (i.e., no target is removed because it is considered
intermediate).

@findex .DELETE_ON_ERROR
@item .DELETE_ON_ERROR
@cindex removing targets on failure

If @code{.DELETE_ON_ERROR} is mentioned as a target anywhere in the
makefile, then @code{make} will delete the target of a rule if it has
changed and its commands exit with a nonzero exit status, just as it
does when it receives a signal.  @xref{Errors, ,Errors in Commands}.

@findex .IGNORE
@item .IGNORE

If you specify prerequisites for @code{.IGNORE}, then @code{make} will
ignore errors in execution of the commands run for those particular
files.  The commands for @code{.IGNORE} are not meaningful.

If mentioned as a target with no prerequisites, @code{.IGNORE} says to
ignore errors in execution of commands for all files.  This usage of
@samp{.IGNORE} is supported only for historical compatibility.  Since
this affects every command in the makefile, it is not very useful; we
recommend you use the more selective ways to ignore errors in specific
commands.  @xref{Errors, ,Errors in Commands}.

@findex .LOW_RESOLUTION_TIME
@item .LOW_RESOLUTION_TIME

If you specify prerequisites for @code{.LOW_RESOLUTION_TIME},
@command{make} assumes that these files are created by commands that
generate low resolution time stamps.  The commands for
@code{.LOW_RESOLUTION_TIME} are not meaningful.

The high resolution file time stamps of many modern hosts lessen the
chance of @command{make} incorrectly concluding that a file is up to
date.  Unfortunately, these hosts provide no way to set a high
resolution file time stamp, so commands like @samp{cp -p} that
explicitly set a file's time stamp must discard its subsecond part.  If
a file is created by such a command, you should list it as a
prerequisite of @code{.LOW_RESOLUTION_TIME} so that @command{make} does
not mistakenly conclude that the file is out of date.  For example:

@example
@group
.LOW_RESOLUTION_TIME: dst
dst: src
        cp -p src dst
@end group
@end example

Since @samp{cp -p} discards the subsecond part of @file{src}'s time
stamp, @file{dst} is typically slightly older than @file{src} even when
it is up to date.  The @code{.LOW_RESOLUTION_TIME} line causes
@command{make} to consider @file{dst} to be up to date if its time stamp
is at the start of the same second that @file{src}'s time stamp is in.

Due to a limitation of the archive format, archive member time stamps
are always low resolution.  You need not list archive members as
prerequisites of @code{.LOW_RESOLUTION_TIME}, as @command{make} does this
automatically.

@findex .SILENT
@item .SILENT

If you specify prerequisites for @code{.SILENT}, then @code{make} will
not print the commands to remake those particular files before executing
them.  The commands for @code{.SILENT} are not meaningful.

If mentioned as a target with no prerequisites, @code{.SILENT} says not
to print any commands before executing them.  This usage of
@samp{.SILENT} is supported only for historical compatibility.  We
recommend you use the more selective ways to silence specific commands.
@xref{Echoing, ,Command Echoing}.  If you want to silence all commands
for a particular run of @code{make}, use the @samp{-s} or
@w{@samp{--silent}} option (@pxref{Options Summary}).

@findex .EXPORT_ALL_VARIABLES
@item .EXPORT_ALL_VARIABLES

Simply by being mentioned as a target, this tells @code{make} to
export all variables to child processes by default.
@xref{Variables/Recursion, ,Communicating Variables to a
Sub-@code{make}}.

@findex .NOTPARALLEL
@item .NOTPARALLEL
@cindex parallel execution, overriding

If @code{.NOTPARALLEL} is mentioned as a target, then this invocation of
@code{make} will be run serially, even if the @samp{-j} option is
given.  Any recursively invoked @code{make} command will still be run in
parallel (unless its makefile contains this target).  Any prerequisites
on this target are ignored.
@end table

Any defined implicit rule suffix also counts as a special target if it
appears as a target, and so does the concatenation of two suffixes, such
as @samp{.c.o}.  These targets are suffix rules, an obsolete way of
defining implicit rules (but a way still widely used).  In principle, any
target name could be special in this way if you break it in two and add
both pieces to the suffix list.  In practice, suffixes normally begin with
@samp{.}, so these special target names also begin with @samp{.}.
@xref{Suffix Rules, ,Old-Fashioned Suffix Rules}.

@node Multiple Targets, Multiple Rules, Special Targets, Rules
@section Multiple Targets in a Rule
@cindex multiple targets
@cindex several targets in a rule
@cindex targets, multiple
@cindex rule, with multiple targets

A rule with multiple targets is equivalent to writing many rules, each with
one target, and all identical aside from that.  The same commands apply to
all the targets, but their effects may vary because you can substitute the
actual target name into the command using @samp{$@@}.  The rule contributes
the same prerequisites to all the targets also.

This is useful in two cases.

@itemize @bullet
@item
You want just prerequisites, no commands.  For example:

@example
kbd.o command.o files.o: command.h
@end example

@noindent
gives an additional prerequisite to each of the three object files
mentioned.

@item
Similar commands work for all the targets.  The commands do not need
to be absolutely identical, since the automatic variable @samp{$@@}
can be used to substitute the particular target to be remade into the
commands (@pxref{Automatic, ,Automatic Variables}).  For example:

@example
@group
bigoutput littleoutput : text.g
        generate text.g -$(subst output,,$@@) > $@@
@end group
@end example
@findex subst

@noindent
is equivalent to

@example
bigoutput : text.g
        generate text.g -big > bigoutput
littleoutput : text.g
        generate text.g -little > littleoutput
@end example

@noindent
Here we assume the hypothetical program @code{generate} makes two
types of output, one if given @samp{-big} and one if given
@samp{-little}.
@xref{Text Functions, ,Functions for String Substitution and Analysis},
for an explanation of the @code{subst} function.
@end itemize

Suppose you would like to vary the prerequisites according to the target,
much as the variable @samp{$@@} allows you to vary the commands.
You cannot do this with multiple targets in an ordinary rule, but you can
do it with a @dfn{static pattern rule}.
@xref{Static Pattern, ,Static Pattern Rules}.

@node Multiple Rules, Static Pattern, Multiple Targets, Rules
@section Multiple Rules for One Target
@cindex multiple rules for one target
@cindex several rules for one target
@cindex rule, multiple for one target
@cindex target, multiple rules for one

One file can be the target of several rules.  All the prerequisites
mentioned in all the rules are merged into one list of prerequisites for
the target.  If the target is older than any prerequisite from any rule,
the commands are executed.

There can only be one set of commands to be executed for a file.
If more than one rule gives commands for the same file,
@code{make} uses the last set given and prints an error message.
(As a special case, if the file's name begins with a dot, no
error message is printed.  This odd behavior is only for
compatibility with other implementations of @code{make}.)
There is no reason to
write your makefiles this way; that is why @code{make} gives you
an error message.@refill

An extra rule with just prerequisites can be used to give a few extra
prerequisites to many files at once.  For example, one usually has a
variable named @code{objects} containing a list of all the compiler output
files in the system being made.  An easy way to say that all of them must
be recompiled if @file{config.h} changes is to write the following:

@example
objects = foo.o bar.o
foo.o : defs.h
bar.o : defs.h test.h
$(objects) : config.h
@end example

This could be inserted or taken out without changing the rules that really
specify how to make the object files, making it a convenient form to use if
you wish to add the additional prerequisite intermittently.

Another wrinkle is that the additional prerequisites could be specified with
a variable that you set with a command argument to @code{make}
(@pxref{Overriding, ,Overriding Variables}).  For example,

@example
@group
extradeps=
$(objects) : $(extradeps)
@end group
@end example

@noindent
means that the command @samp{make extradeps=foo.h} will consider
@file{foo.h} as a prerequisite of each object file, but plain @samp{make}
will not.

If none of the explicit rules for a target has commands, then @code{make}
searches for an applicable implicit rule to find some commands
@pxref{Implicit Rules, ,Using Implicit Rules}).

@node Static Pattern, Double-Colon, Multiple Rules, Rules
@section Static Pattern Rules
@cindex static pattern rule
@cindex rule, static pattern
@cindex pattern rules, static (not implicit)
@cindex varying prerequisites
@cindex prerequisites, varying (static pattern)

@dfn{Static pattern rules} are rules which specify multiple targets and
construct the prerequisite names for each target based on the target name.
They are more general than ordinary rules with multiple targets because the
targets do not have to have identical prerequisites.  Their prerequisites must
be @emph{analogous}, but not necessarily @emph{identical}.

@menu
* Static Usage::                The syntax of static pattern rules.
* Static versus Implicit::      When are they better than implicit rules?
@end menu

@node Static Usage, Static versus Implicit,  , Static Pattern
@subsection Syntax of Static Pattern Rules
@cindex static pattern rule, syntax of
@cindex pattern rules, static, syntax of

Here is the syntax of a static pattern rule:

@example
@var{targets} @dots{}: @var{target-pattern}: @var{prereq-patterns} @dots{}
        @var{commands}
        @dots{}
@end example

@noindent
The @var{targets} list specifies the targets that the rule applies to.
The targets can contain wildcard characters, just like the targets of
ordinary rules (@pxref{Wildcards, ,Using Wildcard Characters in File
Names}).

@cindex target pattern, static (not implicit)
@cindex stem
The @var{target-pattern} and @var{prereq-patterns} say how to compute the
prerequisites of each target.  Each target is matched against the
@var{target-pattern} to extract a part of the target name, called the
@dfn{stem}.  This stem is substituted into each of the @var{prereq-patterns}
to make the prerequisite names (one from each @var{prereq-pattern}).

Each pattern normally contains the character @samp{%} just once.  When the
@var{target-pattern} matches a target, the @samp{%} can match any part of
the target name; this part is called the @dfn{stem}.  The rest of the
pattern must match exactly.  For example, the target @file{foo.o} matches
the pattern @samp{%.o}, with @samp{foo} as the stem.  The targets
@file{foo.c} and @file{foo.out} do not match that pattern.@refill

@cindex prerequisite pattern, static (not implicit)
The prerequisite names for each target are made by substituting the stem
for the @samp{%} in each prerequisite pattern.  For example, if one
prerequisite pattern is @file{%.c}, then substitution of the stem
@samp{foo} gives the prerequisite name @file{foo.c}.  It is legitimate
to write a prerequisite pattern that does not contain @samp{%}; then this
prerequisite is the same for all targets.

@cindex @code{%}, quoting in static pattern
@cindex @code{%}, quoting with @code{\} (backslash)
@cindex @code{\} (backslash), to quote @code{%}
@cindex backslash (@code{\}), to quote @code{%}
@cindex quoting @code{%}, in static pattern
@samp{%} characters in pattern rules can be quoted with preceding
backslashes (@samp{\}).  Backslashes that would otherwise quote @samp{%}
characters can be quoted with more backslashes.  Backslashes that quote
@samp{%} characters or other backslashes are removed from the pattern
before it is compared to file names or has a stem substituted into it.
Backslashes that are not in danger of quoting @samp{%} characters go
unmolested.  For example, the pattern @file{the\%weird\\%pattern\\} has
@samp{the%weird\} preceding the operative @samp{%} character, and
@samp{pattern\\} following it.  The final two backslashes are left alone
because they cannot affect any @samp{%} character.@refill

Here is an example, which compiles each of @file{foo.o} and @file{bar.o}
from the corresponding @file{.c} file:

@example
@group
objects = foo.o bar.o

all: $(objects)

$(objects): %.o: %.c
        $(CC) -c $(CFLAGS) $< -o $@@
@end group
@end example

@noindent
Here @samp{$<} is the automatic variable that holds the name of the
prerequisite and @samp{$@@} is the automatic variable that holds the name
of the target; see @ref{Automatic, , Automatic Variables}.

Each target specified must match the target pattern; a warning is issued
for each target that does not.  If you have a list of files, only some of
which will match the pattern, you can use the @code{filter} function to
remove nonmatching file names (@pxref{Text Functions, ,Functions for String Substitution and Analysis}):

@example
files = foo.elc bar.o lose.o

$(filter %.o,$(files)): %.o: %.c
        $(CC) -c $(CFLAGS) $< -o $@@
$(filter %.elc,$(files)): %.elc: %.el
        emacs -f batch-byte-compile $<
@end example

@noindent
In this example the result of @samp{$(filter %.o,$(files))} is
@file{bar.o lose.o}, and the first static pattern rule causes each of
these object files to be updated by compiling the corresponding C source
file.  The result of @w{@samp{$(filter %.elc,$(files))}} is
@file{foo.elc}, so that file is made from @file{foo.el}.@refill

Another example shows how to use @code{$*} in static pattern rules:
@vindex $*@r{, and static pattern}

@example
@group
bigoutput littleoutput : %output : text.g
        generate text.g -$* > $@@
@end group
@end example

@noindent
When the @code{generate} command is run, @code{$*} will expand to the
stem, either @samp{big} or @samp{little}.

@node Static versus Implicit,  , Static Usage, Static Pattern
@subsection Static Pattern Rules versus Implicit Rules
@cindex rule, static pattern versus implicit
@cindex static pattern rule, versus implicit

A static pattern rule has much in common with an implicit rule defined as a
pattern rule (@pxref{Pattern Rules, ,Defining and Redefining Pattern Rules}).
Both have a pattern for the target and patterns for constructing the
names of prerequisites.  The difference is in how @code{make} decides
@emph{when} the rule applies.

An implicit rule @emph{can} apply to any target that matches its pattern,
but it @emph{does} apply only when the target has no commands otherwise
specified, and only when the prerequisites can be found.  If more than one
implicit rule appears applicable, only one applies; the choice depends on
the order of rules.

By contrast, a static pattern rule applies to the precise list of targets
that you specify in the rule.  It cannot apply to any other target and it
invariably does apply to each of the targets specified.  If two conflicting
rules apply, and both have commands, that's an error.

The static pattern rule can be better than an implicit rule for these
reasons:

@itemize @bullet
@item
You may wish to override the usual implicit rule for a few
files whose names cannot be categorized syntactically but
can be given in an explicit list.

@item
If you cannot be sure of the precise contents of the directories
you are using, you may not be sure which other irrelevant files
might lead @code{make} to use the wrong implicit rule.  The choice
might depend on the order in which the implicit rule search is done.
With static pattern rules, there is no uncertainty: each rule applies
to precisely the targets specified.
@end itemize

@node Double-Colon, Automatic Prerequisites, Static Pattern, Rules
@section Double-Colon Rules
@cindex double-colon rules
@cindex rule, double-colon (@code{::})
@cindex multiple rules for one target (@code{::})
@cindex @code{::} rules (double-colon)

@dfn{Double-colon} rules are rules written with @samp{::} instead of
@samp{:} after the target names.  They are handled differently from
ordinary rules when the same target appears in more than one rule.

When a target appears in multiple rules, all the rules must be the same
type: all ordinary, or all double-colon.  If they are double-colon, each
of them is independent of the others.  Each double-colon rule's commands
are executed if the target is older than any prerequisites of that rule.
If there are no prerequisites for that rule, its commands are always
executed (even if the target already exists).  This can result in
executing none, any, or all of the double-colon rules.

Double-colon rules with the same target are in fact completely separate
from one another.  Each double-colon rule is processed individually, just
as rules with different targets are processed.

The double-colon rules for a target are executed in the order they appear
in the makefile.  However, the cases where double-colon rules really make
sense are those where the order of executing the commands would not matter.

Double-colon rules are somewhat obscure and not often very useful; they
provide a mechanism for cases in which the method used to update a target
differs depending on which prerequisite files caused the update, and such
cases are rare.

Each double-colon rule should specify commands; if it does not, an
implicit rule will be used if one applies.
@xref{Implicit Rules, ,Using Implicit Rules}.

@node Automatic Prerequisites,  , Double-Colon, Rules
@section Generating Prerequisites Automatically
@cindex prerequisites, automatic generation
@cindex automatic generation of prerequisites
@cindex generating prerequisites automatically

In the makefile for a program, many of the rules you need to write often
say only that some object file depends on some header
file.  For example, if @file{main.c} uses @file{defs.h} via an
@code{#include}, you would write:

@example
main.o: defs.h
@end example

@noindent
You need this rule so that @code{make} knows that it must remake
@file{main.o} whenever @file{defs.h} changes.  You can see that for a
large program you would have to write dozens of such rules in your
makefile.  And, you must always be very careful to update the makefile
every time you add or remove an @code{#include}.
@cindex @code{#include}

@cindex @code{-M} (to compiler)
To avoid this hassle, most modern C compilers can write these rules for
you, by looking at the @code{#include} lines in the source files.
Usually this is done with the @samp{-M} option to the compiler.
For example, the command:

@example
cc -M main.c
@end example

@noindent
generates the output:

@example
main.o : main.c defs.h
@end example

@noindent
Thus you no longer have to write all those rules yourself.
The compiler will do it for you.

Note that such a prerequisite constitutes mentioning @file{main.o} in a
makefile, so it can never be considered an intermediate file by implicit
rule search.  This means that @code{make} won't ever remove the file
after using it; @pxref{Chained Rules, ,Chains of Implicit Rules}.

@cindex @code{make depend}
With old @code{make} programs, it was traditional practice to use this
compiler feature to generate prerequisites on demand with a command like
@samp{make depend}.  That command would create a file @file{depend}
containing all the automatically-generated prerequisites; then the
makefile could use @code{include} to read them in (@pxref{Include}).

In GNU @code{make}, the feature of remaking makefiles makes this
practice obsolete---you need never tell @code{make} explicitly to
regenerate the prerequisites, because it always regenerates any makefile
that is out of date.  @xref{Remaking Makefiles}.

The practice we recommend for automatic prerequisite generation is to have
one makefile corresponding to each source file.  For each source file
@file{@var{name}.c} there is a makefile @file{@var{name}.d} which lists
what files the object file @file{@var{name}.o} depends on.  That way
only the source files that have changed need to be rescanned to produce
the new prerequisites.

Here is the pattern rule to generate a file of prerequisites (i.e., a makefile)
called @file{@var{name}.d} from a C source file called @file{@var{name}.c}:

@smallexample
@group
%.d: %.c
        set -e; $(CC) -M $(CPPFLAGS) $< \
                  | sed 's/\($*\)\.o[ :]*/\1.o $@@ : /g' > $@@; \
                [ -s $@@ ] || rm -f $@@
@end group
@end smallexample

@noindent
@xref{Pattern Rules}, for information on defining pattern rules.  The
@samp{-e} flag to the shell makes it exit immediately if the
@code{$(CC)} command fails (exits with a nonzero status).  Normally the
shell exits with the status of the last command in the pipeline
(@code{sed} in this case), so @code{make} would not notice a nonzero
status from the compiler.
@cindex @code{-e} (shell flag)

@cindex @code{-MM} (to GNU compiler)
With the GNU C compiler, you may wish to use the @samp{-MM} flag instead
of @samp{-M}.  This omits prerequisites on system header files.
@xref{Preprocessor Options, , Options Controlling the Preprocessor,
gcc.info, Using GNU CC}, for details.

@cindex @code{sed} (shell command)
The purpose of the @code{sed} command is to translate (for example):

@example
main.o : main.c defs.h
@end example

@noindent
into:

@example
main.o main.d : main.c defs.h
@end example

@noindent
@cindex @code{.d}
This makes each @samp{.d} file depend on all the source and header files
that the corresponding @samp{.o} file depends on.  @code{make} then
knows it must regenerate the prerequisites whenever any of the source or
header files changes.

Once you've defined the rule to remake the @samp{.d} files,
you then use the @code{include} directive to read them all in.
@xref{Include}.  For example:

@example
@group
sources = foo.c bar.c

include $(sources:.c=.d)
@end group
@end example

@noindent
(This example uses a substitution variable reference to translate the
list of source files @samp{foo.c bar.c} into a list of prerequisite
makefiles, @samp{foo.d bar.d}.  @xref{Substitution Refs}, for full
information on substitution references.)  Since the @samp{.d} files are
makefiles like any others, @code{make} will remake them as necessary
with no further work from you.  @xref{Remaking Makefiles}.

@node Commands, Using Variables, Rules, Top
@chapter Writing the Commands in Rules
@cindex commands, how to write
@cindex rule commands
@cindex writing rule commands

The commands of a rule consist of shell command lines to be executed one
by one.  Each command line must start with a tab, except that the first
command line may be attached to the target-and-prerequisites line with a
semicolon in between.  Blank lines and lines of just comments may appear
among the command lines; they are ignored.  (But beware, an apparently
``blank'' line that begins with a tab is @emph{not} blank!  It is an
empty command; @pxref{Empty Commands}.)

Users use many different shell programs, but commands in makefiles are
always interpreted by @file{/bin/sh} unless the makefile specifies
otherwise.  @xref{Execution, ,Command Execution}.

@cindex comments, in commands
@cindex commands, comments in
@cindex @code{#} (comments), in commands
The shell that is in use determines whether comments can be written on
command lines, and what syntax they use.  When the shell is
@file{/bin/sh}, a @samp{#} starts a comment that extends to the end of
the line.  The @samp{#} does not have to be at the beginning of a line.
Text on a line before a @samp{#} is not part of the comment.

@menu
* Echoing::                     How to control when commands are echoed.
* Execution::                   How commands are executed.
* Parallel::                    How commands can be executed in parallel.
* Errors::                      What happens after a command execution error.
* Interrupts::                  What happens when a command is interrupted.
* Recursion::                   Invoking @code{make} from makefiles.
* Sequences::                   Defining canned sequences of commands.
* Empty Commands::              Defining useful, do-nothing commands.
@end menu

@node Echoing, Execution,  , Commands
@section Command Echoing
@cindex echoing of commands
@cindex silent operation
@cindex @code{@@} (in commands)
@cindex commands, echoing
@cindex printing of commands

Normally @code{make} prints each command line before it is executed.
We call this @dfn{echoing} because it gives the appearance that you
are typing the commands yourself.

When a line starts with @samp{@@}, the echoing of that line is suppressed.
The @samp{@@} is discarded before the command is passed to the shell.
Typically you would use this for a command whose only effect is to print
something, such as an @code{echo} command to indicate progress through
the makefile:

@example
@@echo About to make distribution files
@end example

@cindex @code{-n}
@cindex @code{--just-print}
@cindex @code{--dry-run}
@cindex @code{--recon}
When @code{make} is given the flag @samp{-n} or @samp{--just-print}
it only echoes commands, it won't execute them.  @xref{Options Summary,
,Summary of Options}.  In this case and only this case, even the
commands starting with @samp{@@} are printed.  This flag is useful for
finding out which commands @code{make} thinks are necessary without
actually doing them.

@cindex @code{-s}
@cindex @code{--silent}
@cindex @code{--quiet}
@findex .SILENT
The @samp{-s} or @samp{--silent}
flag to @code{make} prevents all echoing, as if all commands
started with @samp{@@}.  A rule in the makefile for the special target
@code{.SILENT} without prerequisites has the same effect
(@pxref{Special Targets, ,Special Built-in Target Names}).
@code{.SILENT} is essentially obsolete since @samp{@@} is more flexible.@refill

@node Execution, Parallel, Echoing, Commands
@section Command Execution
@cindex commands, execution
@cindex execution, of commands
@cindex shell command, execution
@vindex SHELL @r{(command execution)}

When it is time to execute commands to update a target, they are executed
by making a new subshell for each line.  (In practice, @code{make} may
take shortcuts that do not affect the results.)

@cindex @code{cd} (shell command)
@strong{Please note:} this implies that shell commands such as @code{cd}
that set variables local to each process will not affect the following
command lines. @footnote{On MS-DOS, the value of current working
directory is @strong{global}, so changing it @emph{will} affect the
following command lines on those systems.}  If you want to use @code{cd}
to affect the next command, put the two on a single line with a
semicolon between them.  Then @code{make} will consider them a single
command and pass them, together, to a shell which will execute them in
sequence.  For example:

@example
foo : bar/lose
        cd bar; gobble lose > ../foo
@end example

@cindex commands, backslash (@code{\}) in
@cindex commands, quoting newlines in
@cindex backslash (@code{\}), in commands
@cindex @code{\} (backslash), in commands
@cindex quoting newline, in commands
@cindex newline, quoting, in commands
If you would like to split a single shell command into multiple lines of
text, you must use a backslash at the end of all but the last subline.
Such a sequence of lines is combined into a single line, by deleting the
backslash-newline sequences, before passing it to the shell.  Thus, the
following is equivalent to the preceding example:

@example
@group
foo : bar/lose
        cd bar;  \
        gobble lose > ../foo
@end group
@end example

@vindex SHELL
The program used as the shell is taken from the variable @code{SHELL}.
By default, the program @file{/bin/sh} is used.

@vindex COMSPEC
On MS-DOS, if @code{SHELL} is not set, the value of the variable
@code{COMSPEC} (which is always set) is used instead.

@cindex @code{SHELL}, MS-DOS specifics
The processing of lines that set the variable @code{SHELL} in Makefiles
is different on MS-DOS.  The stock shell, @file{command.com}, is
ridiculously limited in its functionality and many users of @code{make}
tend to install a replacement shell.  Therefore, on MS-DOS, @code{make}
examines the value of @code{SHELL}, and changes its behavior based on
whether it points to a Unix-style or DOS-style shell.  This allows
reasonable functionality even if @code{SHELL} points to
@file{command.com}.

If @code{SHELL} points to a Unix-style shell, @code{make} on MS-DOS
additionally checks whether that shell can indeed be found; if not, it
ignores the line that sets @code{SHELL}.  In MS-DOS, GNU @code{make}
searches for the shell in the following places:

@enumerate
@item
In the precise place pointed to by the value of @code{SHELL}.  For
example, if the makefile specifies @samp{SHELL = /bin/sh}, @code{make}
will look in the directory @file{/bin} on the current drive.

@item
In the current directory.

@item
In each of the directories in the @code{PATH} variable, in order.

@end enumerate

In every directory it examines, @code{make} will first look for the
specific file (@file{sh} in the example above).  If this is not found,
it will also look in that directory for that file with one of the known
extensions which identify executable files.  For example @file{.exe},
@file{.com}, @file{.bat}, @file{.btm}, @file{.sh}, and some others.

If any of these attempts is successful, the value of @code{SHELL} will
be set to the full pathname of the shell as found.  However, if none of
these is found, the value of @code{SHELL} will not be changed, and thus
the line that sets it will be effectively ignored.  This is so
@code{make} will only support features specific to a Unix-style shell if
such a shell is actually installed on the system where @code{make} runs.

Note that this extended search for the shell is limited to the cases
where @code{SHELL} is set from the Makefile; if it is set in the
environment or command line, you are expected to set it to the full
pathname of the shell, exactly as things are on Unix.

The effect of the above DOS-specific processing is that a Makefile that
says @samp{SHELL = /bin/sh} (as many Unix makefiles do), will work
on MS-DOS unaltered if you have e.g. @file{sh.exe} installed in some
directory along your @code{PATH}.

@cindex environment, @code{SHELL} in
Unlike most variables, the variable @code{SHELL} is never set from the
environment.  This is because the @code{SHELL} environment variable is
used to specify your personal choice of shell program for interactive
use.  It would be very bad for personal choices like this to affect the
functioning of makefiles.  @xref{Environment, ,Variables from the
Environment}.  However, on MS-DOS and MS-Windows the value of
@code{SHELL} in the environment @strong{is} used, since on those systems
most users do not set this variable, and therefore it is most likely set
specifically to be used by @code{make}.  On MS-DOS, if the setting of
@code{SHELL} is not suitable for @code{make}, you can set the variable
@code{MAKESHELL} to the shell that @code{make} should use; this will
override the value of @code{SHELL}.

@node Parallel, Errors, Execution, Commands
@section Parallel Execution
@cindex commands, execution in parallel
@cindex parallel execution
@cindex execution, in parallel
@cindex job slots
@cindex @code{-j}
@cindex @code{--jobs}

GNU @code{make} knows how to execute several commands at once.
Normally, @code{make} will execute only one command at a time, waiting
for it to finish before executing the next.  However, the @samp{-j} or
@samp{--jobs} option tells @code{make} to execute many commands
simultaneously.@refill

On MS-DOS, the @samp{-j} option has no effect, since that system doesn't
support multi-processing.

If the @samp{-j} option is followed by an integer, this is the number of
commands to execute at once; this is called the number of @dfn{job slots}.
If there is nothing looking like an integer after the @samp{-j} option,
there is no limit on the number of job slots.  The default number of job
slots is one, which means serial execution (one thing at a time).

One unpleasant consequence of running several commands simultaneously is
that output generated by the commands appears whenever each command
sends it, so messages from different commands may be interspersed.

Another problem is that two processes cannot both take input from the
same device; so to make sure that only one command tries to take input
from the terminal at once, @code{make} will invalidate the standard
input streams of all but one running command.  This means that
attempting to read from standard input will usually be a fatal error (a
@samp{Broken pipe} signal) for most child processes if there are
several.
@cindex broken pipe
@cindex standard input

It is unpredictable which command will have a valid standard input stream
(which will come from the terminal, or wherever you redirect the standard
input of @code{make}).  The first command run will always get it first, and
the first command started after that one finishes will get it next, and so
on.

We will change how this aspect of @code{make} works if we find a better
alternative.  In the mean time, you should not rely on any command using
standard input at all if you are using the parallel execution feature; but
if you are not using this feature, then standard input works normally in
all commands.

Finally, handling recursive @code{make} invocations raises issues.  For
more information on this, see
@ref{Options/Recursion, ,Communicating Options to a Sub-@code{make}}.

If a command fails (is killed by a signal or exits with a nonzero
status), and errors are not ignored for that command
(@pxref{Errors, ,Errors in Commands}),
the remaining command lines to remake the same target will not be run.
If a command fails and the @samp{-k} or @samp{--keep-going}
option was not given
(@pxref{Options Summary, ,Summary of Options}),
@code{make} aborts execution.  If make
terminates for any reason (including a signal) with child processes
running, it waits for them to finish before actually exiting.@refill

@cindex load average
@cindex limiting jobs based on load
@cindex jobs, limiting based on load
@cindex @code{-l} (load average)
@cindex @code{--max-load}
@cindex @code{--load-average}
When the system is heavily loaded, you will probably want to run fewer jobs
than when it is lightly loaded.  You can use the @samp{-l} option to tell
@code{make} to limit the number of jobs to run at once, based on the load
average.  The @samp{-l} or @samp{--max-load}
option is followed by a floating-point number.  For
example,

@example
@end example

@noindent
will not let @code{make} start more than one job if the load average is
above 2.5.  The @samp{-l} option with no following number removes the
load limit, if one was given with a previous @samp{-l} option.@refill

More precisely, when @code{make} goes to start up a job, and it already has
at least one job running, it checks the current load average; if it is not
lower than the limit given with @samp{-l}, @code{make} waits until the load
average goes below that limit, or until all the other jobs finish.

By default, there is no load limit.

@node Errors, Interrupts, Parallel, Commands
@section Errors in Commands
@cindex errors (in commands)
@cindex commands, errors in
@cindex exit status (errors)

After each shell command returns, @code{make} looks at its exit status.
If the command completed successfully, the next command line is executed
in a new shell; after the last command line is finished, the rule is
finished.

If there is an error (the exit status is nonzero), @code{make} gives up on
the current rule, and perhaps on all rules.

Sometimes the failure of a certain command does not indicate a problem.
For example, you may use the @code{mkdir} command to ensure that a
directory exists.  If the directory already exists, @code{mkdir} will
report an error, but you probably want @code{make} to continue regardless.

@cindex @code{-} (in commands)
To ignore errors in a command line, write a @samp{-} at the beginning of
the line's text (after the initial tab).  The @samp{-} is discarded before
the command is passed to the shell for execution.

For example,

@example
@group
clean:
        -rm -f *.o
@end group
@end example
@cindex @code{rm} (shell command)

@noindent
This causes @code{rm} to continue even if it is unable to remove a file.

@cindex @code{-i}
@cindex @code{--ignore-errors}
@findex .IGNORE
When you run @code{make} with the @samp{-i} or @samp{--ignore-errors}
flag, errors are ignored in all commands of all rules.  A rule in the
makefile for the special target @code{.IGNORE} has the same effect, if
there are no prerequisites.  These ways of ignoring errors are obsolete
because @samp{-} is more flexible.

When errors are to be ignored, because of either a @samp{-} or the
@samp{-i} flag, @code{make} treats an error return just like success,
except that it prints out a message that tells you the status code
the command exited with, and says that the error has been ignored.

When an error happens that @code{make} has not been told to ignore,
it implies that the current target cannot be correctly remade, and neither
can any other that depends on it either directly or indirectly.  No further
commands will be executed for these targets, since their preconditions
have not been achieved.


@cindex @code{-k}
@cindex @code{--keep-going}
Normally @code{make} gives up immediately in this circumstance, returning a
nonzero status.  However, if the @samp{-k} or @samp{--keep-going}
flag is specified, @code{make}
continues to consider the other prerequisites of the pending targets,
remaking them if necessary, before it gives up and returns nonzero status.
For example, after an error in compiling one object file, @samp{make -k}
will continue compiling other object files even though it already knows
that linking them will be impossible.  @xref{Options Summary, ,Summary of Options}.

The usual behavior assumes that your purpose is to get the specified
targets up to date; once @code{make} learns that this is impossible, it
might as well report the failure immediately.  The @samp{-k} option says
that the real purpose is to test as many of the changes made in the
program as possible, perhaps to find several independent problems so
that you can correct them all before the next attempt to compile.  This
is why Emacs' @code{compile} command passes the @samp{-k} flag by
default.
@cindex Emacs (@code{M-x compile})

@findex .DELETE_ON_ERROR
@cindex deletion of target files
@cindex removal of target files
@cindex target, deleting on error
Usually when a command fails, if it has changed the target file at all,
the file is corrupted and cannot be used---or at least it is not
completely updated.  Yet the file's time stamp says that it is now up to
date, so the next time @code{make} runs, it will not try to update that
file.  The situation is just the same as when the command is killed by a
signal; @pxref{Interrupts}.  So generally the right thing to do is to
delete the target file if the command fails after beginning to change
the file.  @code{make} will do this if @code{.DELETE_ON_ERROR} appears
as a target.  This is almost always what you want @code{make} to do, but
it is not historical practice; so for compatibility, you must explicitly
request it.

@node Interrupts, Recursion, Errors, Commands
@section Interrupting or Killing @code{make}
@cindex interrupt
@cindex signal
@cindex deletion of target files
@cindex removal of target files
@cindex target, deleting on interrupt
@cindex killing (interruption)

If @code{make} gets a fatal signal while a command is executing, it may
delete the target file that the command was supposed to update.  This is
done if the target file's last-modification time has changed since
@code{make} first checked it.

The purpose of deleting the target is to make sure that it is remade from
scratch when @code{make} is next run.  Why is this?  Suppose you type
@kbd{Ctrl-c} while a compiler is running, and it has begun to write an
object file @file{foo.o}.  The @kbd{Ctrl-c} kills the compiler, resulting
in an incomplete file whose last-modification time is newer than the source
file @file{foo.c}.  But @code{make} also receives the @kbd{Ctrl-c} signal
and deletes this incomplete file.  If @code{make} did not do this, the next
invocation of @code{make} would think that @file{foo.o} did not require
updating---resulting in a strange error message from the linker when it
tries to link an object file half of which is missing.

@findex .PRECIOUS
You can prevent the deletion of a target file in this way by making the
special target @code{.PRECIOUS} depend on it.  Before remaking a target,
@code{make} checks to see whether it appears on the prerequisites of
@code{.PRECIOUS}, and thereby decides whether the target should be deleted
if a signal happens.  Some reasons why you might do this are that the
target is updated in some atomic fashion, or exists only to record a
modification-time (its contents do not matter), or must exist at all
times to prevent other sorts of trouble.

@node Recursion, Sequences, Interrupts, Commands
@section Recursive Use of @code{make}
@cindex recursion
@cindex subdirectories, recursion for

Recursive use of @code{make} means using @code{make} as a command in a
makefile.  This technique is useful when you want separate makefiles for
various subsystems that compose a larger system.  For example, suppose you
have a subdirectory @file{subdir} which has its own makefile, and you would
like the containing directory's makefile to run @code{make} on the
subdirectory.  You can do it by writing this:

@example
subsystem:
        cd subdir && $(MAKE)
@end example

@noindent
or, equivalently, this (@pxref{Options Summary, ,Summary of Options}):

@example
subsystem:
        $(MAKE) -C subdir
@end example
@cindex @code{-C}
@cindex @code{--directory}

You can write recursive @code{make} commands just by copying this example,
but there are many things to know about how they work and why, and about
how the sub-@code{make} relates to the top-level @code{make}.

For your convenience, GNU @code{make} sets the variable @code{CURDIR} to
the pathname of the current working directory for you.  If @code{-C} is
in effect, it will contain the path of the new directory, not the
original.  The value has the same precedence it would have if it were
set in the makefile (by default, an environment variable @code{CURDIR}
will not override this value).  Note that setting this variable has no
effect on the operation of @code{make}

@menu
* MAKE Variable::               The special effects of using @samp{$(MAKE)}.
* Variables/Recursion::         How to communicate variables to a sub-@code{make}.
* Options/Recursion::           How to communicate options to a sub-@code{make}.
* -w Option::                   How the @samp{-w} or @samp{--print-directory} option
                                 helps debug use of recursive @code{make} commands.
@end menu

@node MAKE Variable, Variables/Recursion,  , Recursion
@subsection How the @code{MAKE} Variable Works
@vindex MAKE
@cindex recursion, and @code{MAKE} variable

Recursive @code{make} commands should always use the variable @code{MAKE},
not the explicit command name @samp{make}, as shown here:

@example
@group
subsystem:
        cd subdir && $(MAKE)
@end group
@end example

The value of this variable is the file name with which @code{make} was
invoked.  If this file name was @file{/bin/make}, then the command executed
is @samp{cd subdir && /bin/make}.  If you use a special version of
@code{make} to run the top-level makefile, the same special version will be
executed for recursive invocations.
@cindex @code{cd} (shell command)

As a special feature, using the variable @code{MAKE} in the commands of
a rule alters the effects of the @samp{-t} (@samp{--touch}), @samp{-n}
(@samp{--just-print}), or @samp{-q} (@w{@samp{--question}}) option.
Using the @code{MAKE} variable has the same effect as using a @samp{+}
character at the beginning of the command line.  @xref{Instead of
Execution, ,Instead of Executing the Commands}.@refill

Consider the command @samp{make -t} in the above example.  (The
@samp{-t} option marks targets as up to date without actually running
any commands; see @ref{Instead of Execution}.)  Following the usual
definition of @samp{-t}, a @samp{make -t} command in the example would
create a file named @file{subsystem} and do nothing else.  What you
really want it to do is run @samp{@w{cd subdir &&} @w{make -t}}; but that would
require executing the command, and @samp{-t} says not to execute
commands.@refill
@cindex @code{-t}, and recursion
@cindex recursion, and @code{-t}
@cindex @code{--touch}, and recursion

The special feature makes this do what you want: whenever a command
line of a rule contains the variable @code{MAKE}, the flags @samp{-t},
@samp{-n} and @samp{-q} do not apply to that line.  Command lines
containing @code{MAKE} are executed normally despite the presence of a
flag that causes most commands not to be run.  The usual
@code{MAKEFLAGS} mechanism passes the flags to the sub-@code{make}
(@pxref{Options/Recursion, ,Communicating Options to a
Sub-@code{make}}), so your request to touch the files, or print the
commands, is propagated to the subsystem.@refill

@node Variables/Recursion, Options/Recursion, MAKE Variable, Recursion
@subsection Communicating Variables to a Sub-@code{make}
@cindex sub-@code{make}
@cindex environment, and recursion
@cindex exporting variables
@cindex variables, environment
@cindex variables, exporting
@cindex recursion, and environment
@cindex recursion, and variables

Variable values of the top-level @code{make} can be passed to the
sub-@code{make} through the environment by explicit request.  These
variables are defined in the sub-@code{make} as defaults, but do not
override what is specified in the makefile used by the sub-@code{make}
makefile unless you use the @samp{-e} switch (@pxref{Options Summary,
,Summary of Options}).@refill

To pass down, or @dfn{export}, a variable, @code{make} adds the variable
and its value to the environment for running each command.  The
sub-@code{make}, in turn, uses the environment to initialize its table
of variable values.  @xref{Environment, ,Variables from the
Environment}.

Except by explicit request, @code{make} exports a variable only if it
is either defined in the environment initially or set on the command
line, and if its name consists only of letters, numbers, and underscores.
Some shells cannot cope with environment variable names consisting of
characters other than letters, numbers, and underscores.

The special variables @code{SHELL} and @code{MAKEFLAGS} are always
exported (unless you unexport them).
@code{MAKEFILES} is exported if you set it to anything.

@code{make} automatically passes down variable values that were defined
on the command line, by putting them in the @code{MAKEFLAGS} variable.
@iftex
See the next section.
@end iftex
@ifinfo
@xref{Options/Recursion}.
@end ifinfo

Variables are @emph{not} normally passed down if they were created by
default by @code{make} (@pxref{Implicit Variables, ,Variables Used by
Implicit Rules}).  The sub-@code{make} will define these for
itself.@refill

@findex export
If you want to export specific variables to a sub-@code{make}, use the
@code{export} directive, like this:

@example
export @var{variable} @dots{}
@end example

@noindent
@findex unexport
If you want to @emph{prevent} a variable from being exported, use the
@code{unexport} directive, like this:

@example
unexport @var{variable} @dots{}
@end example

@noindent
As a convenience, you can define a variable and export it at the same
time by doing:

@example
export @var{variable} = value
@end example

@noindent
has the same result as:

@example
@var{variable} = value
export @var{variable}
@end example

@noindent
and

@example
export @var{variable} := value
@end example

@noindent
has the same result as:

@example
@var{variable} := value
export @var{variable}
@end example

Likewise,

@example
export @var{variable} += value
@end example

@noindent
is just like:

@example
@var{variable} += value
export @var{variable}
@end example

@noindent
@xref{Appending, ,Appending More Text to Variables}.

You may notice that the @code{export} and @code{unexport} directives
work in @code{make} in the same way they work in the shell, @code{sh}.

If you want all variables to be exported by default, you can use
@code{export} by itself:

@example
export
@end example

@noindent
This tells @code{make} that variables which are not explicitly mentioned
in an @code{export} or @code{unexport} directive should be exported.
Any variable given in an @code{unexport} directive will still @emph{not}
be exported.  If you use @code{export} by itself to export variables by
default, variables whose names contain characters other than
alphanumerics and underscores will not be exported unless specifically
mentioned in an @code{export} directive.@refill

@findex .EXPORT_ALL_VARIABLES
The behavior elicited by an @code{export} directive by itself was the
default in older versions of GNU @code{make}.  If your makefiles depend
on this behavior and you want to be compatible with old versions of
@code{make}, you can write a rule for the special target
@code{.EXPORT_ALL_VARIABLES} instead of using the @code{export} directive.
This will be ignored by old @code{make}s, while the @code{export}
directive will cause a syntax error.@refill
@cindex compatibility in exporting

Likewise, you can use @code{unexport} by itself to tell @code{make}
@emph{not} to export variables by default.  Since this is the default
behavior, you would only need to do this if @code{export} had been used
by itself earlier (in an included makefile, perhaps).  You
@strong{cannot} use @code{export} and @code{unexport} by themselves to
have variables exported for some commands and not for others.  The last
@code{export} or @code{unexport} directive that appears by itself
determines the behavior for the entire run of @code{make}.@refill

@vindex MAKELEVEL
@cindex recursion, level of
As a special feature, the variable @code{MAKELEVEL} is changed when it
is passed down from level to level.  This variable's value is a string
which is the depth of the level as a decimal number.  The value is
@samp{0} for the top-level @code{make}; @samp{1} for a sub-@code{make},
@samp{2} for a sub-sub-@code{make}, and so on.  The incrementation
happens when @code{make} sets up the environment for a command.@refill

The main use of @code{MAKELEVEL} is to test it in a conditional
directive (@pxref{Conditionals, ,Conditional Parts of Makefiles}); this
way you can write a makefile that behaves one way if run recursively and
another way if run directly by you.@refill

@vindex MAKEFILES
You can use the variable @code{MAKEFILES} to cause all sub-@code{make}
commands to use additional makefiles.  The value of @code{MAKEFILES} is
a whitespace-separated list of file names.  This variable, if defined in
the outer-level makefile, is passed down through the environment; then
it serves as a list of extra makefiles for the sub-@code{make} to read
before the usual or specified ones.  @xref{MAKEFILES Variable, ,The
Variable @code{MAKEFILES}}.@refill

@node Options/Recursion, -w Option, Variables/Recursion, Recursion
@subsection Communicating Options to a Sub-@code{make}
@cindex options, and recursion
@cindex recursion, and options

@vindex MAKEFLAGS
Flags such as @samp{-s} and @samp{-k} are passed automatically to the
sub-@code{make} through the variable @code{MAKEFLAGS}.  This variable is
set up automatically by @code{make} to contain the flag letters that
@code{make} received.  Thus, if you do @w{@samp{make -ks}} then
@code{MAKEFLAGS} gets the value @samp{ks}.@refill

As a consequence, every sub-@code{make} gets a value for @code{MAKEFLAGS}
in its environment.  In response, it takes the flags from that value and
processes them as if they had been given as arguments.
@xref{Options Summary, ,Summary of Options}.

@cindex command line variable definitions, and recursion
@cindex variables, command line, and recursion
@cindex recursion, and command line variable definitions
Likewise variables defined on the command line are passed to the
sub-@code{make} through @code{MAKEFLAGS}.  Words in the value of
@code{MAKEFLAGS} that contain @samp{=}, @code{make} treats as variable
definitions just as if they appeared on the command line.
@xref{Overriding, ,Overriding Variables}.

@cindex @code{-C}, and recursion
@cindex @code{-f}, and recursion
@cindex @code{-o}, and recursion
@cindex @code{-W}, and recursion
@cindex @code{--directory}, and recursion
@cindex @code{--file}, and recursion
@cindex @code{--old-file}, and recursion
@cindex @code{--assume-old}, and recursion
@cindex @code{--assume-new}, and recursion
@cindex @code{--new-file}, and recursion
@cindex recursion, and @code{-C}
@cindex recursion, and @code{-f}
@cindex recursion, and @code{-o}
@cindex recursion, and @code{-W}
The options @samp{-C}, @samp{-f}, @samp{-o}, and @samp{-W} are not put
into @code{MAKEFLAGS}; these options are not passed down.@refill

@cindex @code{-j}, and recursion
@cindex @code{--jobs}, and recursion
@cindex recursion, and @code{-j}
@cindex job slots, and recursion
The @samp{-j} option is a special case (@pxref{Parallel, ,Parallel Execution}).
If you set it to some numeric value @samp{N} and your operating system
supports it (most any UNIX system will; others typically won't), the
parent @code{make} and all the sub-@code{make}s will communicate to
ensure that there are only @samp{N} jobs running at the same time
between them all.  Note that any job that is marked recursive
(@pxref{Instead of Execution, ,Instead of Executing the Commands})
doesn't count against the total jobs (otherwise we could get @samp{N}
sub-@code{make}s running and have no slots left over for any real work!)

If your operating system doesn't support the above communication, then
@samp{-j 1} is always put into @code{MAKEFLAGS} instead of the value you
specified.  This is because if the @w{@samp{-j}} option were passed down
to sub-@code{make}s, you would get many more jobs running in parallel
than you asked for.  If you give @samp{-j} with no numeric argument,
meaning to run as many jobs as possible in parallel, this is passed
down, since multiple infinities are no more than one.@refill

If you do not want to pass the other flags down, you must change the
value of @code{MAKEFLAGS}, like this:

@example
subsystem:
        cd subdir && $(MAKE) MAKEFLAGS=
@end example

@vindex MAKEOVERRIDES
The command line variable definitions really appear in the variable
@code{MAKEOVERRIDES}, and @code{MAKEFLAGS} contains a reference to this
variable.  If you do want to pass flags down normally, but don't want to
pass down the command line variable definitions, you can reset
@code{MAKEOVERRIDES} to empty, like this:

@example
MAKEOVERRIDES =
@end example

@noindent
@cindex Arg list too long
@cindex E2BIG
This is not usually useful to do.  However, some systems have a small
fixed limit on the size of the environment, and putting so much
information into the value of @code{MAKEFLAGS} can exceed it.  If you
see the error message @samp{Arg list too long}, this may be the problem.
@findex .POSIX
@cindex POSIX.2
(For strict compliance with POSIX.2, changing @code{MAKEOVERRIDES} does
not affect @code{MAKEFLAGS} if the special target @samp{.POSIX} appears
in the makefile.  You probably do not care about this.)

@vindex MFLAGS
A similar variable @code{MFLAGS} exists also, for historical
compatibility.  It has the same value as @code{MAKEFLAGS} except that it
does not contain the command line variable definitions, and it always
begins with a hyphen unless it is empty (@code{MAKEFLAGS} begins with a
hyphen only when it begins with an option that has no single-letter
version, such as @samp{--warn-undefined-variables}).  @code{MFLAGS} was
traditionally used explicitly in the recursive @code{make} command, like
this:

@example
subsystem:
        cd subdir && $(MAKE) $(MFLAGS)
@end example

@noindent
but now @code{MAKEFLAGS} makes this usage redundant.  If you want your
makefiles to be compatible with old @code{make} programs, use this
technique; it will work fine with more modern @code{make} versions too.

@cindex setting options from environment
@cindex options, setting from environment
@cindex setting options in makefiles
@cindex options, setting in makefiles
The @code{MAKEFLAGS} variable can also be useful if you want to have
certain options, such as @samp{-k} (@pxref{Options Summary, ,Summary of
Options}), set each time you run @code{make}.  You simply put a value for
@code{MAKEFLAGS} in your environment.  You can also set @code{MAKEFLAGS} in
a makefile, to specify additional flags that should also be in effect for
that makefile.  (Note that you cannot use @code{MFLAGS} this way.  That
variable is set only for compatibility; @code{make} does not interpret a
value you set for it in any way.)

When @code{make} interprets the value of @code{MAKEFLAGS} (either from the
environment or from a makefile), it first prepends a hyphen if the value
does not already begin with one.  Then it chops the value into words
separated by blanks, and parses these words as if they were options given
on the command line (except that @samp{-C}, @samp{-f}, @samp{-h},
@samp{-o}, @samp{-W}, and their long-named versions are ignored; and there
is no error for an invalid option).

If you do put @code{MAKEFLAGS} in your environment, you should be sure not
to include any options that will drastically affect the actions of
@code{make} and undermine the purpose of makefiles and of @code{make}
itself.  For instance, the @samp{-t}, @samp{-n}, and @samp{-q} options, if
put in one of these variables, could have disastrous consequences and would
certainly have at least surprising and probably annoying effects.@refill

@node -w Option,  , Options/Recursion, Recursion
@subsection The @samp{--print-directory} Option
@cindex directories, printing them
@cindex printing directories
@cindex recursion, and printing directories

If you use several levels of recursive @code{make} invocations, the
@samp{-w} or @w{@samp{--print-directory}} option can make the output a
lot easier to understand by showing each directory as @code{make}
starts processing it and as @code{make} finishes processing it.  For
example, if @samp{make -w} is run in the directory @file{/u/gnu/make},
@code{make} will print a line of the form:@refill

@example
make: Entering directory `/u/gnu/make'.
@end example

@noindent
before doing anything else, and a line of the form:

@example
make: Leaving directory `/u/gnu/make'.
@end example

@noindent
when processing is completed.

@cindex @code{-C}, and @code{-w}
@cindex @code{--directory}, and @code{--print-directory}
@cindex recursion, and @code{-w}
@cindex @code{-w}, and @code{-C}
@cindex @code{-w}, and recursion
@cindex @code{--print-directory}, and @code{--directory}
@cindex @code{--print-directory}, and recursion
@cindex @code{--no-print-directory}
@cindex @code{--print-directory}, disabling
@cindex @code{-w}, disabling
Normally, you do not need to specify this option because @samp{make}
does it for you: @samp{-w} is turned on automatically when you use the
@samp{-C} option, and in sub-@code{make}s.  @code{make} will not
automatically turn on @samp{-w} if you also use @samp{-s}, which says to
be silent, or if you use @samp{--no-print-directory} to explicitly
disable it.

@node Sequences, Empty Commands, Recursion, Commands
@section Defining Canned Command Sequences
@cindex sequences of commands
@cindex commands, sequences of

When the same sequence of commands is useful in making various targets, you
can define it as a canned sequence with the @code{define} directive, and
refer to the canned sequence from the rules for those targets.  The canned
sequence is actually a variable, so the name must not conflict with other
variable names.

Here is an example of defining a canned sequence of commands:

@example
define run-yacc
yacc $(firstword $^)
mv y.tab.c $@@
endef
@end example
@cindex @code{yacc}

@noindent
Here @code{run-yacc} is the name of the variable being defined;
@code{endef} marks the end of the definition; the lines in between are the
commands.  The @code{define} directive does not expand variable references
and function calls in the canned sequence; the @samp{$} characters,
parentheses, variable names, and so on, all become part of the value of the
variable you are defining.
@xref{Defining, ,Defining Variables Verbatim},
for a complete explanation of @code{define}.

The first command in this example runs Yacc on the first prerequisite of
whichever rule uses the canned sequence.  The output file from Yacc is
always named @file{y.tab.c}.  The second command moves the output to the
rule's target file name.

To use the canned sequence, substitute the variable into the commands of a
rule.  You can substitute it like any other variable
(@pxref{Reference, ,Basics of Variable References}).
Because variables defined by @code{define} are recursively expanded
variables, all the variable references you wrote inside the @code{define}
are expanded now.  For example:

@example
foo.c : foo.y
        $(run-yacc)
@end example

@noindent
@samp{foo.y} will be substituted for the variable @samp{$^} when it occurs in
@code{run-yacc}'s value, and @samp{foo.c} for @samp{$@@}.@refill

This is a realistic example, but this particular one is not needed in
practice because @code{make} has an implicit rule to figure out these
commands based on the file names involved
(@pxref{Implicit Rules, ,Using Implicit Rules}).

@cindex @@, and @code{define}
@cindex -, and @code{define}
@cindex +, and @code{define}
In command execution, each line of a canned sequence is treated just as
if the line appeared on its own in the rule, preceded by a tab.  In
particular, @code{make} invokes a separate subshell for each line.  You
can use the special prefix characters that affect command lines
(@samp{@@}, @samp{-}, and @samp{+}) on each line of a canned sequence.
@xref{Commands, ,Writing the Commands in Rules}.
For example, using this canned sequence:

@example
define frobnicate
@@echo "frobnicating target $@@"
frob-step-1 $< -o $@@-step-1
frob-step-2 $@@-step-1 -o $@@
endef
@end example

@noindent
@code{make} will not echo the first line, the @code{echo} command.
But it @emph{will} echo the following two command lines.

On the other hand, prefix characters on the command line that refers to
a canned sequence apply to every line in the sequence.  So the rule:

@example
frob.out: frob.in
        @@$(frobnicate)
@end example

@noindent
does not echo @emph{any} commands.
(@xref{Echoing, ,Command Echoing}, for a full explanation of @samp{@@}.)

@node Empty Commands,  , Sequences, Commands
@section Using Empty Commands
@cindex empty commands
@cindex commands, empty

It is sometimes useful to define commands which do nothing.  This is done
simply by giving a command that consists of nothing but whitespace.  For
example:

@example
target: ;
@end example

@noindent
defines an empty command string for @file{target}.  You could also use a
line beginning with a tab character to define an empty command string,
but this would be confusing because such a line looks empty.

@findex .DEFAULT@r{, and empty commands}
You may be wondering why you would want to define a command string that
does nothing.  The only reason this is useful is to prevent a target
from getting implicit commands (from implicit rules or the
@code{.DEFAULT} special target; @pxref{Implicit Rules} and
@pxref{Last Resort, ,Defining Last-Resort Default Rules}).@refill

@c !!! another reason is for canonical stamp files:
@ignore
foo: stamp-foo ;
stamp-foo: foo.in
        create foo frm foo.in
        touch $@
@end ignore

You may be inclined to define empty command strings for targets that are
not actual files, but only exist so that their prerequisites can be
remade.  However, this is not the best way to do that, because the
prerequisites may not be remade properly if the target file actually does exist.
@xref{Phony Targets, ,Phony Targets}, for a better way to do this.

@node Using Variables, Conditionals, Commands, Top
@chapter How to Use Variables
@cindex variable
@cindex value
@cindex recursive variable expansion
@cindex simple variable expansion

A @dfn{variable} is a name defined in a makefile to represent a string
of text, called the variable's @dfn{value}.  These values are
substituted by explicit request into targets, prerequisites, commands,
and other parts of the makefile.  (In some other versions of @code{make},
variables are called @dfn{macros}.)
@cindex macro

Variables and functions in all parts of a makefile are expanded when
read, except for the shell commands in rules, the right-hand sides of
variable definitions using @samp{=}, and the bodies of variable
definitions using the @code{define} directive.@refill

Variables can represent lists of file names, options to pass to compilers,
programs to run, directories to look in for source files, directories to
write output in, or anything else you can imagine.

A variable name may be any sequence of characters not containing @samp{:},
@samp{#}, @samp{=}, or leading or trailing whitespace.  However,
variable names containing characters other than letters, numbers, and
underscores should be avoided, as they may be given special meanings in the
future, and with some shells they cannot be passed through the environment to a
sub-@code{make}
(@pxref{Variables/Recursion, ,Communicating Variables to a Sub-@code{make}}).

Variable names are case-sensitive.  The names @samp{foo}, @samp{FOO},
and @samp{Foo} all refer to different variables.

It is traditional to use upper case letters in variable names, but we
recommend using lower case letters for variable names that serve internal
purposes in the makefile, and reserving upper case for parameters that
control implicit rules or for parameters that the user should override with
command options (@pxref{Overriding, ,Overriding Variables}).

A few variables have names that are a single punctuation character or
just a few characters.  These are the @dfn{automatic variables}, and
they have particular specialized uses.  @xref{Automatic, ,Automatic Variables}.

@menu
* Reference::                   How to use the value of a variable.
* Flavors::                     Variables come in two flavors.
* Advanced::                    Advanced features for referencing a variable.
* Values::                      All the ways variables get their values.
* Setting::                     How to set a variable in the makefile.
* Appending::                   How to append more text to the old value
                                  of a variable.
* Override Directive::          How to set a variable in the makefile even if
                                  the user has set it with a command argument.
* Defining::                    An alternate way to set a variable
                                  to a verbatim string.
* Environment::                 Variable values can come from the environment.
* Target-specific::             Variable values can be defined on a per-target
                                  basis.
* Pattern-specific::            Target-specific variable values can be applied
                                  to a group of targets that match a pattern.
* Automatic::                   Some special variables have predefined
                                  meanings for use with implicit rules.
@end menu

@node Reference, Flavors,  , Using Variables
@section Basics of Variable References
@cindex variables, how to reference
@cindex reference to variables
@cindex @code{$}, in variable reference
@cindex dollar sign (@code{$}), in variable reference

To substitute a variable's value, write a dollar sign followed by the name
of the variable in parentheses or braces: either @samp{$(foo)} or
@samp{$@{foo@}} is a valid reference to the variable @code{foo}.  This
special significance of @samp{$} is why you must write @samp{$$} to have
the effect of a single dollar sign in a file name or command.

Variable references can be used in any context: targets, prerequisites,
commands, most directives, and new variable values.  Here is an
example of a common case, where a variable holds the names of all the
object files in a program:

@example
@group
objects = program.o foo.o utils.o
program : $(objects)
        cc -o program $(objects)

$(objects) : defs.h
@end group
@end example

Variable references work by strict textual substitution.  Thus, the rule

@example
@group
foo = c
prog.o : prog.$(foo)
        $(foo)$(foo) -$(foo) prog.$(foo)
@end group
@end example

@noindent
could be used to compile a C program @file{prog.c}.  Since spaces before
the variable value are ignored in variable assignments, the value of
@code{foo} is precisely @samp{c}.  (Don't actually write your makefiles
this way!)

A dollar sign followed by a character other than a dollar sign,
open-parenthesis or open-brace treats that single character as the
variable name.  Thus, you could reference the variable @code{x} with
@samp{$x}.  However, this practice is strongly discouraged, except in
the case of the automatic variables (@pxref{Automatic, ,Automatic Variables}).

@node Flavors, Advanced, Reference, Using Variables
@section The Two Flavors of Variables
@cindex flavors of variables
@cindex recursive variable expansion
@cindex variables, flavors
@cindex recursively expanded variables
@cindex variables, recursively expanded

There are two ways that a variable in GNU @code{make} can have a value;
we call them the two @dfn{flavors} of variables.  The two flavors are
distinguished in how they are defined and in what they do when expanded.

@cindex =
The first flavor of variable is a @dfn{recursively expanded} variable.
Variables of this sort are defined by lines using @samp{=}
(@pxref{Setting, ,Setting Variables}) or by the @code{define} directive
(@pxref{Defining, ,Defining Variables Verbatim}).  The value you specify
is installed verbatim; if it contains references to other variables,
these references are expanded whenever this variable is substituted (in
the course of expanding some other string).  When this happens, it is
called @dfn{recursive expansion}.@refill

For example,

@example
foo = $(bar)
bar = $(ugh)
ugh = Huh?

all:;echo $(foo)
@end example

@noindent
will echo @samp{Huh?}: @samp{$(foo)} expands to @samp{$(bar)} which
expands to @samp{$(ugh)} which finally expands to @samp{Huh?}.@refill

This flavor of variable is the only sort supported by other versions of
@code{make}.  It has its advantages and its disadvantages.  An advantage
(most would say) is that:

@example
CFLAGS = $(include_dirs) -O
include_dirs = -Ifoo -Ibar
@end example

@noindent
will do what was intended: when @samp{CFLAGS} is expanded in a command,
it will expand to @samp{-Ifoo -Ibar -O}.  A major disadvantage is that you
cannot append something on the end of a variable, as in

@example
CFLAGS = $(CFLAGS) -O
@end example

@noindent
because it will cause an infinite loop in the variable expansion.
(Actually @code{make} detects the infinite loop and reports an error.)
@cindex loops in variable expansion
@cindex variables, loops in expansion

Another disadvantage is that any functions
(@pxref{Functions, ,Functions for Transforming Text})
referenced in the definition will be executed every time the variable is
expanded.  This makes @code{make} run slower; worse, it causes the
@code{wildcard} and @code{shell} functions to give unpredictable results
because you cannot easily control when they are called, or even how many
times.

To avoid all the problems and inconveniences of recursively expanded
variables, there is another flavor: simply expanded variables.

@cindex simply expanded variables
@cindex variables, simply expanded
@cindex :=
@dfn{Simply expanded variables} are defined by lines using @samp{:=}
(@pxref{Setting, ,Setting Variables}).
The value of a simply expanded variable is scanned
once and for all, expanding any references to other variables and
functions, when the variable is defined.  The actual value of the simply
expanded variable is the result of expanding the text that you write.
It does not contain any references to other variables; it contains their
values @emph{as of the time this variable was defined}.  Therefore,

@example
x := foo
y := $(x) bar
x := later
@end example

@noindent
is equivalent to

@example
y := foo bar
x := later
@end example

When a simply expanded variable is referenced, its value is substituted
verbatim.

Here is a somewhat more complicated example, illustrating the use of
@samp{:=} in conjunction with the @code{shell} function.
(@xref{Shell Function, , The @code{shell} Function}.)  This example
also shows use of the variable @code{MAKELEVEL}, which is changed
when it is passed down from level to level.
(@xref{Variables/Recursion, , Communicating Variables to a
Sub-@code{make}}, for information about @code{MAKELEVEL}.)

@vindex MAKELEVEL
@vindex MAKE
@example
@group
ifeq (0,$@{MAKELEVEL@})
cur-dir   := $(shell pwd)
whoami    := $(shell whoami)
host-type := $(shell arch)
MAKE := $@{MAKE@} host-type=$@{host-type@} whoami=$@{whoami@}
endif
@end group
@end example

@noindent
An advantage of this use of @samp{:=} is that a typical
`descend into a directory' command then looks like this:

@example
@group
$@{subdirs@}:
      $@{MAKE@} cur-dir=$@{cur-dir@}/$@@ -C $@@ all
@end group
@end example

Simply expanded variables generally make complicated makefile programming
more predictable because they work like variables in most programming
languages.  They allow you to redefine a variable using its own value (or
its value processed in some way by one of the expansion functions) and to
use the expansion functions much more efficiently
(@pxref{Functions, ,Functions for Transforming Text}).

@cindex spaces, in variable values
@cindex whitespace, in variable values
@cindex variables, spaces in values
You can also use them to introduce controlled leading whitespace into
variable values.  Leading whitespace characters are discarded from your
input before substitution of variable references and function calls;
this means you can include leading spaces in a variable value by
protecting them with variable references, like this:

@example
nullstring :=
space := $(nullstring) # end of the line
@end example

@noindent
Here the value of the variable @code{space} is precisely one space.  The
comment @w{@samp{# end of the line}} is included here just for clarity.
Since trailing space characters are @emph{not} stripped from variable
values, just a space at the end of the line would have the same effect
(but be rather hard to read).  If you put whitespace at the end of a
variable value, it is a good idea to put a comment like that at the end
of the line to make your intent clear.  Conversely, if you do @emph{not}
want any whitespace characters at the end of your variable value, you
must remember not to put a random comment on the end of the line after
some whitespace, such as this:

@example
dir := /foo/bar    # directory to put the frobs in
@end example

@noindent
Here the value of the variable @code{dir} is @w{@samp{/foo/bar    }}
(with four trailing spaces), which was probably not the intention.
(Imagine something like @w{@samp{$(dir)/file}} with this definition!)

@cindex conditional variable assignment
@cindex variables, conditional assignment
@cindex ?=
There is another assignment operator for variables, @samp{?=}.  This
is called a conditional variable assignment operator, because it only
has an effect if the variable is not yet defined.  This statement:

@example
FOO ?= bar
@end example

@noindent
is exactly equivalent to this
(@pxref{Origin Function, ,The @code{origin} Function}):

@example
ifeq ($(origin FOO), undefined)
  FOO = bar
endif
@end example

Note that a variable set to an empty value is still defined, so
@samp{?=} will not set that variable.

@node Advanced, Values, Flavors, Using Variables
@section Advanced Features for Reference to Variables
@cindex reference to variables

This section describes some advanced features you can use to reference
variables in more flexible ways.

@menu
* Substitution Refs::           Referencing a variable with
                                  substitutions on the value.
* Computed Names::              Computing the name of the variable to refer to.
@end menu

@node Substitution Refs, Computed Names,  , Advanced
@subsection Substitution References
@cindex modified variable reference
@cindex substitution variable reference
@cindex variables, modified reference
@cindex variables, substitution reference

@cindex variables, substituting suffix in
@cindex suffix, substituting in variables
A @dfn{substitution reference} substitutes the value of a variable with
alterations that you specify.  It has the form
@samp{$(@var{var}:@var{a}=@var{b})} (or
@samp{$@{@var{var}:@var{a}=@var{b}@}}) and its meaning is to take the value
of the variable @var{var}, replace every @var{a} at the end of a word with
@var{b} in that value, and substitute the resulting string.

When we say ``at the end of a word'', we mean that @var{a} must appear
either followed by whitespace or at the end of the value in order to be
replaced; other occurrences of @var{a} in the value are unaltered.  For
example:@refill

@example
foo := a.o b.o c.o
bar := $(foo:.o=.c)
@end example

@noindent
sets @samp{bar} to @samp{a.c b.c c.c}.  @xref{Setting, ,Setting Variables}.

A substitution reference is actually an abbreviation for use of the
@code{patsubst} expansion function (@pxref{Text Functions, ,Functions for String Substitution and Analysis}).  We provide
substitution references as well as @code{patsubst} for compatibility with
other implementations of @code{make}.

@findex patsubst
Another type of substitution reference lets you use the full power of
the @code{patsubst} function.  It has the same form
@samp{$(@var{var}:@var{a}=@var{b})} described above, except that now
@var{a} must contain a single @samp{%} character.  This case is
equivalent to @samp{$(patsubst @var{a},@var{b},$(@var{var}))}.
@xref{Text Functions, ,Functions for String Substitution and Analysis},
for a description of the @code{patsubst} function.@refill

@example
@group
@exdent For example:

foo := a.o b.o c.o
bar := $(foo:%.o=%.c)
@end group
@end example

@noindent
sets @samp{bar} to @samp{a.c b.c c.c}.

@node Computed Names,  , Substitution Refs, Advanced
@subsection Computed Variable Names
@cindex nested variable reference
@cindex computed variable name
@cindex variables, computed names
@cindex variables, nested references
@cindex variables, @samp{$} in name
@cindex @code{$}, in variable name
@cindex dollar sign (@code{$}), in variable name

Computed variable names are a complicated concept needed only for
sophisticated makefile programming.  For most purposes you need not
consider them, except to know that making a variable with a dollar sign
in its name might have strange results.  However, if you are the type
that wants to understand everything, or you are actually interested in
what they do, read on.

Variables may be referenced inside the name of a variable.  This is
called a @dfn{computed variable name} or a @dfn{nested variable
reference}.  For example,

@example
x = y
y = z
a := $($(x))
@end example

@noindent
defines @code{a} as @samp{z}: the @samp{$(x)} inside @samp{$($(x))} expands
to @samp{y}, so @samp{$($(x))} expands to @samp{$(y)} which in turn expands
to @samp{z}.  Here the name of the variable to reference is not stated
explicitly; it is computed by expansion of @samp{$(x)}.  The reference
@samp{$(x)} here is nested within the outer variable reference.

The previous example shows two levels of nesting, but any number of levels
is possible.  For example, here are three levels:

@example
x = y
y = z
z = u
a := $($($(x)))
@end example

@noindent
Here the innermost @samp{$(x)} expands to @samp{y}, so @samp{$($(x))}
expands to @samp{$(y)} which in turn expands to @samp{z}; now we have
@samp{$(z)}, which becomes @samp{u}.

References to recursively-expanded variables within a variable name are
reexpanded in the usual fashion.  For example:

@example
x = $(y)
y = z
z = Hello
a := $($(x))
@end example

@noindent
defines @code{a} as @samp{Hello}: @samp{$($(x))} becomes @samp{$($(y))}
which becomes @samp{$(z)} which becomes @samp{Hello}.

Nested variable references can also contain modified references and
function invocations (@pxref{Functions, ,Functions for Transforming Text}),
just like any other reference.
For example, using the @code{subst} function
(@pxref{Text Functions, ,Functions for String Substitution and Analysis}):

@example
@group
x = variable1
variable2 := Hello
y = $(subst 1,2,$(x))
z = y
a := $($($(z)))
@end group
@end example

@noindent
eventually defines @code{a} as @samp{Hello}.  It is doubtful that anyone
would ever want to write a nested reference as convoluted as this one, but
it works: @samp{$($($(z)))} expands to @samp{$($(y))} which becomes
@samp{$($(subst 1,2,$(x)))}.  This gets the value @samp{variable1} from
@code{x} and changes it by substitution to @samp{variable2}, so that the
entire string becomes @samp{$(variable2)}, a simple variable reference
whose value is @samp{Hello}.@refill

A computed variable name need not consist entirely of a single variable
reference.  It can contain several variable references, as well as some
invariant text.  For example,

@example
@group
a_dirs := dira dirb
1_dirs := dir1 dir2
@end group

@group
a_files := filea fileb
1_files := file1 file2
@end group

@group
ifeq "$(use_a)" "yes"
a1 := a
else
a1 := 1
endif
@end group

@group
ifeq "$(use_dirs)" "yes"
df := dirs
else
df := files
endif

dirs := $($(a1)_$(df))
@end group
@end example

@noindent
will give @code{dirs} the same value as @code{a_dirs}, @code{1_dirs},
@code{a_files} or @code{1_files} depending on the settings of @code{use_a}
and @code{use_dirs}.@refill

Computed variable names can also be used in substitution references:

@example
@group
a_objects := a.o b.o c.o
1_objects := 1.o 2.o 3.o

sources := $($(a1)_objects:.o=.c)
@end group
@end example

@noindent
defines @code{sources} as either @samp{a.c b.c c.c} or @samp{1.c 2.c 3.c},
depending on the value of @code{a1}.

The only restriction on this sort of use of nested variable references
is that they cannot specify part of the name of a function to be called.
This is because the test for a recognized function name is done before
the expansion of nested references.  For example,

@example
@group
ifdef do_sort
func := sort
else
func := strip
endif
@end group

@group
bar := a d b g q c
@end group

@group
foo := $($(func) $(bar))
@end group
@end example

@noindent
attempts to give @samp{foo} the value of the variable @samp{sort a d b g
q c} or @samp{strip a d b g q c}, rather than giving @samp{a d b g q c}
as the argument to either the @code{sort} or the @code{strip} function.
This restriction could be removed in the future if that change is shown
to be a good idea.

You can also use computed variable names in the left-hand side of a
variable assignment, or in a @code{define} directive, as in:

@example
dir = foo
$(dir)_sources := $(wildcard $(dir)/*.c)
define $(dir)_print
lpr $($(dir)_sources)
endef
@end example

@noindent
This example defines the variables @samp{dir}, @samp{foo_sources}, and
@samp{foo_print}.

Note that @dfn{nested variable references} are quite different from
@dfn{recursively expanded variables}
(@pxref{Flavors, ,The Two Flavors of Variables}), though both are
used together in complex ways when doing makefile programming.@refill

@node Values, Setting, Advanced, Using Variables
@section How Variables Get Their Values
@cindex variables, how they get their values
@cindex value, how a variable gets it

Variables can get values in several different ways:

@itemize @bullet
@item
You can specify an overriding value when you run @code{make}.
@xref{Overriding, ,Overriding Variables}.

@item
You can specify a value in the makefile, either
with an assignment (@pxref{Setting, ,Setting Variables}) or with a
verbatim definition (@pxref{Defining, ,Defining Variables Verbatim}).@refill

@item
Variables in the environment become @code{make} variables.
@xref{Environment, ,Variables from the Environment}.

@item
Several @dfn{automatic} variables are given new values for each rule.
Each of these has a single conventional use.
@xref{Automatic, ,Automatic Variables}.

@item
Several variables have constant initial values.
@xref{Implicit Variables, ,Variables Used by Implicit Rules}.
@end itemize

@node Setting, Appending, Values, Using Variables
@section Setting Variables
@cindex setting variables
@cindex variables, setting
@cindex =
@cindex :=
@cindex ?=

To set a variable from the makefile, write a line starting with the
variable name followed by @samp{=} or @samp{:=}.  Whatever follows the
@samp{=} or @samp{:=} on the line becomes the value.  For example,

@example
objects = main.o foo.o bar.o utils.o
@end example

@noindent
defines a variable named @code{objects}.  Whitespace around the variable
name and immediately after the @samp{=} is ignored.

Variables defined with @samp{=} are @dfn{recursively expanded} variables.
Variables defined with @samp{:=} are @dfn{simply expanded} variables; these
definitions can contain variable references which will be expanded before
the definition is made.  @xref{Flavors, ,The Two Flavors of Variables}.

The variable name may contain function and variable references, which
are expanded when the line is read to find the actual variable name to use.

There is no limit on the length of the value of a variable except the
amount of swapping space on the computer.  When a variable definition is
long, it is a good idea to break it into several lines by inserting
backslash-newline at convenient places in the definition.  This will not
affect the functioning of @code{make}, but it will make the makefile easier
to read.

Most variable names are considered to have the empty string as a value if
you have never set them.  Several variables have built-in initial values
that are not empty, but you can set them in the usual ways
(@pxref{Implicit Variables, ,Variables Used by Implicit Rules}).
Several special variables are set
automatically to a new value for each rule; these are called the
@dfn{automatic} variables (@pxref{Automatic, ,Automatic Variables}).

If you'd like a variable to be set to a value only if it's not already
set, then you can use the shorthand operator @samp{?=} instead of
@samp{=}.  These two settings of the variable @samp{FOO} are identical
(@pxref{Origin Function, ,The @code{origin} Function}):

@example
FOO ?= bar
@end example

@noindent
and

@example
ifeq ($(origin FOO), undefined)
FOO = bar
endif
@end example

@node Appending, Override Directive, Setting, Using Variables
@section Appending More Text to Variables
@cindex +=
@cindex appending to variables
@cindex variables, appending to

Often it is useful to add more text to the value of a variable already defined.
You do this with a line containing @samp{+=}, like this:

@example
objects += another.o
@end example

@noindent
This takes the value of the variable @code{objects}, and adds the text
@samp{another.o} to it (preceded by a single space).  Thus:

@example
objects = main.o foo.o bar.o utils.o
objects += another.o
@end example

@noindent
sets @code{objects} to @samp{main.o foo.o bar.o utils.o another.o}.

Using @samp{+=} is similar to:

@example
objects = main.o foo.o bar.o utils.o
objects := $(objects) another.o
@end example

@noindent
but differs in ways that become important when you use more complex values.

When the variable in question has not been defined before, @samp{+=}
acts just like normal @samp{=}: it defines a recursively-expanded
variable.  However, when there @emph{is} a previous definition, exactly
what @samp{+=} does depends on what flavor of variable you defined
originally.  @xref{Flavors, ,The Two Flavors of Variables}, for an
explanation of the two flavors of variables.

When you add to a variable's value with @samp{+=}, @code{make} acts
essentially as if you had included the extra text in the initial
definition of the variable.  If you defined it first with @samp{:=},
making it a simply-expanded variable, @samp{+=} adds to that
simply-expanded definition, and expands the new text before appending it
to the old value just as @samp{:=} does
(@pxref{Setting, ,Setting Variables}, for a full explanation of @samp{:=}).
In fact,

@example
variable := value
variable += more
@end example

@noindent
is exactly equivalent to:

@noindent
@example
variable := value
variable := $(variable) more
@end example

On the other hand, when you use @samp{+=} with a variable that you defined
first to be recursively-expanded using plain @samp{=}, @code{make} does
something a bit different.  Recall that when you define a
recursively-expanded variable, @code{make} does not expand the value you set
for variable and function references immediately.  Instead it stores the text
verbatim, and saves these variable and function references to be expanded
later, when you refer to the new variable (@pxref{Flavors, ,The Two Flavors
of Variables}).  When you use @samp{+=} on a recursively-expanded variable,
it is this unexpanded text to which @code{make} appends the new text you
specify.

@example
@group
variable = value
variable += more
@end group
@end example

@noindent
is roughly equivalent to:

@example
@group
temp = value
variable = $(temp) more
@end group
@end example

@noindent
except that of course it never defines a variable called @code{temp}.
The importance of this comes when the variable's old value contains
variable references.  Take this common example:

@example
CFLAGS = $(includes) -O
@dots{}
CFLAGS += -pg # enable profiling
@end example

@noindent
The first line defines the @code{CFLAGS} variable with a reference to another
variable, @code{includes}.  (@code{CFLAGS} is used by the rules for C
compilation; @pxref{Catalogue of Rules, ,Catalogue of Implicit Rules}.)
Using @samp{=} for the definition makes @code{CFLAGS} a recursively-expanded
variable, meaning @w{@samp{$(includes) -O}} is @emph{not} expanded when
@code{make} processes the definition of @code{CFLAGS}.  Thus, @code{includes}
need not be defined yet for its value to take effect.  It only has to be
defined before any reference to @code{CFLAGS}.  If we tried to append to the
value of @code{CFLAGS} without using @samp{+=}, we might do it like this:

@example
CFLAGS := $(CFLAGS) -pg # enable profiling
@end example

@noindent
This is pretty close, but not quite what we want.  Using @samp{:=}
redefines @code{CFLAGS} as a simply-expanded variable; this means
@code{make} expands the text @w{@samp{$(CFLAGS) -pg}} before setting the
variable.  If @code{includes} is not yet defined, we get @w{@samp{ -O
Conversely, by using @samp{+=} we set @code{CFLAGS} to the
@emph{unexpanded} value @w{@samp{$(includes) -O -pg}}.  Thus we preserve
the reference to @code{includes}, so if that variable gets defined at
any later point, a reference like @samp{$(CFLAGS)} still uses its
value.

@node Override Directive, Defining, Appending, Using Variables
@section The @code{override} Directive
@findex override
@cindex overriding with @code{override}
@cindex variables, overriding

If a variable has been set with a command argument
(@pxref{Overriding, ,Overriding Variables}),
then ordinary assignments in the makefile are ignored.  If you want to set
the variable in the makefile even though it was set with a command
argument, you can use an @code{override} directive, which is a line that
looks like this:@refill

@example
override @var{variable} = @var{value}
@end example

@noindent
or

@example
override @var{variable} := @var{value}
@end example

To append more text to a variable defined on the command line, use:

@example
override @var{variable} += @var{more text}
@end example

@noindent
@xref{Appending, ,Appending More Text to Variables}.

The @code{override} directive was not invented for escalation in the war
between makefiles and command arguments.  It was invented so you can alter
and add to values that the user specifies with command arguments.

For example, suppose you always want the @samp{-g} switch when you run the
C compiler, but you would like to allow the user to specify the other
switches with a command argument just as usual.  You could use this
@code{override} directive:

@example
override CFLAGS += -g
@end example

You can also use @code{override} directives with @code{define} directives.
This is done as you might expect:

@example
override define foo
bar
endef
@end example

@noindent
@iftex
See the next section for information about @code{define}.
@end iftex
@ifinfo
@xref{Defining, ,Defining Variables Verbatim}.
@end ifinfo

@node Defining, Environment, Override Directive, Using Variables
@section Defining Variables Verbatim
@findex define
@findex endef
@cindex verbatim variable definition
@cindex defining variables verbatim
@cindex variables, defining verbatim

Another way to set the value of a variable is to use the @code{define}
directive.  This directive has an unusual syntax which allows newline
characters to be included in the value, which is convenient for defining
canned sequences of commands
(@pxref{Sequences, ,Defining Canned Command Sequences}).

The @code{define} directive is followed on the same line by the name of the
variable and nothing more.  The value to give the variable appears on the
following lines.  The end of the value is marked by a line containing just
the word @code{endef}.  Aside from this difference in syntax, @code{define}
works just like @samp{=}: it creates a recursively-expanded variable
(@pxref{Flavors, ,The Two Flavors of Variables}).
The variable name may contain function and variable references, which
are expanded when the directive is read to find the actual variable name
to use.

@example
define two-lines
echo foo
echo $(bar)
endef
@end example

The value in an ordinary assignment cannot contain a newline; but the
newlines that separate the lines of the value in a @code{define} become
part of the variable's value (except for the final newline which precedes
the @code{endef} and is not considered part of the value).@refill

@need 800
The previous example is functionally equivalent to this:

@example
two-lines = echo foo; echo $(bar)
@end example

@noindent
since two commands separated by semicolon behave much like two separate
shell commands.  However, note that using two separate lines means
@code{make} will invoke the shell twice, running an independent subshell
for each line.  @xref{Execution, ,Command Execution}.

If you want variable definitions made with @code{define} to take
precedence over command-line variable definitions, you can use the
@code{override} directive together with @code{define}:

@example
override define two-lines
foo
$(bar)
endef
@end example

@noindent
@xref{Override Directive, ,The @code{override} Directive}.

@node Environment, Target-specific, Defining, Using Variables
@section Variables from the Environment

@cindex variables, environment
@cindex environment
Variables in @code{make} can come from the environment in which
@code{make} is run.  Every environment variable that @code{make} sees when
it starts up is transformed into a @code{make} variable with the same name
and value.  But an explicit assignment in the makefile, or with a command
argument, overrides the environment.  (If the @samp{-e} flag is specified,
then values from the environment override assignments in the makefile.
@xref{Options Summary, ,Summary of Options}.
But this is not recommended practice.)

Thus, by setting the variable @code{CFLAGS} in your environment, you can
cause all C compilations in most makefiles to use the compiler switches you
prefer.  This is safe for variables with standard or conventional meanings
because you know that no makefile will use them for other things.  (But
this is not totally reliable; some makefiles set @code{CFLAGS} explicitly
and therefore are not affected by the value in the environment.)

When @code{make} is invoked recursively, variables defined in the
outer invocation can be passed to inner invocations through the
environment (@pxref{Recursion, ,Recursive Use of @code{make}}).  By
default, only variables that came from the environment or the command
line are passed to recursive invocations.  You can use the
@code{export} directive to pass other variables.
@xref{Variables/Recursion, , Communicating Variables to a
Sub-@code{make}}, for full details.

Other use of variables from the environment is not recommended.  It is not
wise for makefiles to depend for their functioning on environment variables
set up outside their control, since this would cause different users to get
different results from the same makefile.  This is against the whole
purpose of most makefiles.

Such problems would be especially likely with the variable @code{SHELL},
which is normally present in the environment to specify the user's choice
of interactive shell.  It would be very undesirable for this choice to
affect @code{make}.  So @code{make} ignores the environment value of
@code{SHELL} (except on MS-DOS and MS-Windows, where @code{SHELL} is
usually not set.  @xref{Execution, ,Special handling of SHELL on
MS-DOS}.)@refill

@node Target-specific, Pattern-specific, Environment, Using Variables
@section Target-specific Variable Values
@cindex target-specific variables
@cindex variables, target-specific

Variable values in @code{make} are usually global; that is, they are the
same regardless of where they are evaluated (unless they're reset, of
course).  One exception to that is automatic variables
(@pxref{Automatic, ,Automatic Variables}).

The other exception is @dfn{target-specific variable values}.  This
feature allows you to define different values for the same variable,
based on the target that @code{make} is currently building.  As with
automatic variables, these values are only available within the context
of a target's command script (and in other target-specific assignments).

Set a target-specific variable value like this:

@example
@var{target} @dots{} : @var{variable-assignment}
@end example

@noindent
or like this:

@example
@var{target} @dots{} : override @var{variable-assignment}
@end example

Multiple @var{target} values create a target-specific variable value for
each member of the target list individually.

The @var{variable-assignment} can be any valid form of assignment;
recursive (@samp{=}), static (@samp{:=}), appending (@samp{+=}), or
conditional (@samp{?=}).  All variables that appear within the
@var{variable-assignment} are evaluated within the context of the
target: thus, any previously-defined target-specific variable values
will be in effect.  Note that this variable is actually distinct from
any ``global'' value: the two variables do not have to have the same
flavor (recursive vs. static).

Target-specific variables have the same priority as any other makefile
variable.  Variables provided on the command-line (and in the
environment if the @samp{-e} option is in force) will take precedence.
Specifying the @code{override} directive will allow the target-specific
variable value to be preferred.

There is one more special feature of target-specific variables: when you
define a target-specific variable, that variable value is also in effect
for all prerequisites of this target (unless those prerequisites override
it with their own target-specific variable value).  So, for example, a
statement like this:

@example
prog : CFLAGS = -g
prog : prog.o foo.o bar.o
@end example

@noindent
will set @code{CFLAGS} to @samp{-g} in the command script for
@file{prog}, but it will also set @code{CFLAGS} to @samp{-g} in the
command scripts that create @file{prog.o}, @file{foo.o}, and
@file{bar.o}, and any command scripts which create their prerequisites.

@node Pattern-specific,  , Target-specific, Using Variables
@section Pattern-specific Variable Values
@cindex pattern-specific variables
@cindex variables, pattern-specific

In addition to target-specific variable values (@pxref{Target-specific,
,Target-specific Variable Values}), GNU @code{make} supports
pattern-specific variable values.  In this form, a variable is defined
for any target that matches the pattern specified.  Variables defined in
this way are searched after any target-specific variables defined
explicitly for that target, and before target-specific variables defined
for the parent target.

Set a pattern-specific variable value like this:

@example
@var{pattern} @dots{} : @var{variable-assignment}
@end example

@noindent
or like this:

@example
@var{pattern} @dots{} : override @var{variable-assignment}
@end example

@noindent
where @var{pattern} is a %-pattern.  As with target-specific variable
values, multiple @var{pattern} values create a pattern-specific variable
value for each pattern individually.  The @var{variable-assignment} can
be any valid form of assignment.  Any command-line variable setting will
take precedence, unless @code{override} is specified.

For example:

@example
%.o : CFLAGS = -O
@end example

@noindent
will assign @code{CFLAGS} the value of @samp{-O} for all targets
matching the pattern @code{%.o}.

@node Conditionals, Functions, Using Variables, Top
@chapter Conditional Parts of Makefiles

@cindex conditionals
A @dfn{conditional} causes part of a makefile to be obeyed or ignored
depending on the values of variables.  Conditionals can compare the
value of one variable to another, or the value of a variable to
a constant string.  Conditionals control what @code{make} actually
``sees'' in the makefile, so they @emph{cannot} be used to control shell
commands at the time of execution.@refill

@menu
* Conditional Example::         Example of a conditional
* Conditional Syntax::          The syntax of conditionals.
* Testing Flags::               Conditionals that test flags.
@end menu

@node Conditional Example, Conditional Syntax,  , Conditionals
@section Example of a Conditional

The following example of a conditional tells @code{make} to use one set
of libraries if the @code{CC} variable is @samp{gcc}, and a different
set of libraries otherwise.  It works by controlling which of two
command lines will be used as the command for a rule.  The result is
that @samp{CC=gcc} as an argument to @code{make} changes not only which
compiler is used but also which libraries are linked.

@example
libs_for_gcc = -lgnu
normal_libs =

foo: $(objects)
ifeq ($(CC),gcc)
        $(CC) -o foo $(objects) $(libs_for_gcc)
else
        $(CC) -o foo $(objects) $(normal_libs)
endif
@end example

This conditional uses three directives: one @code{ifeq}, one @code{else}
and one @code{endif}.

The @code{ifeq} directive begins the conditional, and specifies the
condition.  It contains two arguments, separated by a comma and surrounded
by parentheses.  Variable substitution is performed on both arguments and
then they are compared.  The lines of the makefile following the
@code{ifeq} are obeyed if the two arguments match; otherwise they are
ignored.

The @code{else} directive causes the following lines to be obeyed if the
previous conditional failed.  In the example above, this means that the
second alternative linking command is used whenever the first alternative
is not used.  It is optional to have an @code{else} in a conditional.

The @code{endif} directive ends the conditional.  Every conditional must
end with an @code{endif}.  Unconditional makefile text follows.

As this example illustrates, conditionals work at the textual level:
the lines of the conditional are treated as part of the makefile, or
ignored, according to the condition.  This is why the larger syntactic
units of the makefile, such as rules, may cross the beginning or the
end of the conditional.

When the variable @code{CC} has the value @samp{gcc}, the above example has
this effect:

@example
foo: $(objects)
        $(CC) -o foo $(objects) $(libs_for_gcc)
@end example

@noindent
When the variable @code{CC} has any other value, the effect is this:

@example
foo: $(objects)
        $(CC) -o foo $(objects) $(normal_libs)
@end example

Equivalent results can be obtained in another way by conditionalizing a
variable assignment and then using the variable unconditionally:

@example
libs_for_gcc = -lgnu
normal_libs =

ifeq ($(CC),gcc)
  libs=$(libs_for_gcc)
else
  libs=$(normal_libs)
endif

foo: $(objects)
        $(CC) -o foo $(objects) $(libs)
@end example

@node Conditional Syntax, Testing Flags, Conditional Example, Conditionals
@section Syntax of Conditionals
@findex ifdef
@findex ifeq
@findex ifndef
@findex ifneq
@findex else
@findex endif

The syntax of a simple conditional with no @code{else} is as follows:

@example
@var{conditional-directive}
@var{text-if-true}
endif
@end example

@noindent
The @var{text-if-true} may be any lines of text, to be considered as part
of the makefile if the condition is true.  If the condition is false, no
text is used instead.

The syntax of a complex conditional is as follows:

@example
@var{conditional-directive}
@var{text-if-true}
else
@var{text-if-false}
endif
@end example

@noindent
If the condition is true, @var{text-if-true} is used; otherwise,
@var{text-if-false} is used instead.  The @var{text-if-false} can be any
number of lines of text.

The syntax of the @var{conditional-directive} is the same whether the
conditional is simple or complex.  There are four different directives that
test different conditions.  Here is a table of them:

@table @code
@item ifeq (@var{arg1}, @var{arg2})
@itemx ifeq '@var{arg1}' '@var{arg2}'
@itemx ifeq "@var{arg1}" "@var{arg2}"
@itemx ifeq "@var{arg1}" '@var{arg2}'
@itemx ifeq '@var{arg1}' "@var{arg2}"
Expand all variable references in @var{arg1} and @var{arg2} and
compare them.  If they are identical, the @var{text-if-true} is
effective; otherwise, the @var{text-if-false}, if any, is effective.

Often you want to test if a variable has a non-empty value.  When the
value results from complex expansions of variables and functions,
expansions you would consider empty may actually contain whitespace
characters and thus are not seen as empty.  However, you can use the
@code{strip} function (@pxref{Text Functions}) to avoid interpreting
whitespace as a non-empty value.  For example:

@example
@group
ifeq ($(strip $(foo)),)
@var{text-if-empty}
endif
@end group
@end example

@noindent
will evaluate @var{text-if-empty} even if the expansion of
@code{$(foo)} contains whitespace characters.

@item ifneq (@var{arg1}, @var{arg2})
@itemx ifneq '@var{arg1}' '@var{arg2}'
@itemx ifneq "@var{arg1}" "@var{arg2}"
@itemx ifneq "@var{arg1}" '@var{arg2}'
@itemx ifneq '@var{arg1}' "@var{arg2}"
Expand all variable references in @var{arg1} and @var{arg2} and
compare them.  If they are different, the @var{text-if-true} is
effective; otherwise, the @var{text-if-false}, if any, is effective.

@item ifdef @var{variable-name}
If the variable @var{variable-name} has a non-empty value, the
@var{text-if-true} is effective; otherwise, the @var{text-if-false},
if any, is effective.  Variables that have never been defined have an
empty value.

Note that @code{ifdef} only tests whether a variable has a value.  It
does not expand the variable to see if that value is nonempty.
Consequently, tests using @code{ifdef} return true for all definitions
except those like @code{foo =}.  To test for an empty value, use
@w{@code{ifeq ($(foo),)}}.  For example,

@example
bar =
foo = $(bar)
ifdef foo
frobozz = yes
else
frobozz = no
endif
@end example

@noindent
sets @samp{frobozz} to @samp{yes}, while:

@example
foo =
ifdef foo
frobozz = yes
else
frobozz = no
endif
@end example

@noindent
sets @samp{frobozz} to @samp{no}.

@item ifndef @var{variable-name}
If the variable @var{variable-name} has an empty value, the
@var{text-if-true} is effective; otherwise, the @var{text-if-false},
if any, is effective.
@end table

Extra spaces are allowed and ignored at the beginning of the conditional
directive line, but a tab is not allowed.  (If the line begins with a tab,
it will be considered a command for a rule.)  Aside from this, extra spaces
or tabs may be inserted with no effect anywhere except within the directive
name or within an argument.  A comment starting with @samp{#} may appear at
the end of the line.

The other two directives that play a part in a conditional are @code{else}
and @code{endif}.  Each of these directives is written as one word, with no
arguments.  Extra spaces are allowed and ignored at the beginning of the
line, and spaces or tabs at the end.  A comment starting with @samp{#} may
appear at the end of the line.

Conditionals affect which lines of the makefile @code{make} uses.  If
the condition is true, @code{make} reads the lines of the
@var{text-if-true} as part of the makefile; if the condition is false,
@code{make} ignores those lines completely.  It follows that syntactic
units of the makefile, such as rules, may safely be split across the
beginning or the end of the conditional.@refill

@code{make} evaluates conditionals when it reads a makefile.
Consequently, you cannot use automatic variables in the tests of
conditionals because they are not defined until commands are run
(@pxref{Automatic, , Automatic Variables}).

To prevent intolerable confusion, it is not permitted to start a
conditional in one makefile and end it in another.  However, you may
write an @code{include} directive within a conditional, provided you do
not attempt to terminate the conditional inside the included file.

@node Testing Flags,  , Conditional Syntax, Conditionals
@section Conditionals that Test Flags

You can write a conditional that tests @code{make} command flags such as
@samp{-t} by using the variable @code{MAKEFLAGS} together with the
@code{findstring} function
(@pxref{Text Functions, , Functions for String Substitution and Analysis}).
This is useful when @code{touch} is not enough to make a file appear up
to date.

The @code{findstring} function determines whether one string appears as a
substring of another.  If you want to test for the @samp{-t} flag,
use @samp{t} as the first string and the value of @code{MAKEFLAGS} as
the other.

For example, here is how to arrange to use @samp{ranlib -t} to finish
marking an archive file up to date:

@example
archive.a: @dots{}
ifneq (,$(findstring t,$(MAKEFLAGS)))
        +touch archive.a
        +ranlib -t archive.a
else
        ranlib archive.a
endif
@end example

@noindent
The @samp{+} prefix marks those command lines as ``recursive'' so
that they will be executed despite use of the @samp{-t} flag.
@xref{Recursion, ,Recursive Use of @code{make}}.

@node Functions, Running, Conditionals, Top
@chapter Functions for Transforming Text
@cindex functions

@dfn{Functions} allow you to do text processing in the makefile to compute
the files to operate on or the commands to use.  You use a function in a
@dfn{function call}, where you give the name of the function and some text
(the @dfn{arguments}) for the function to operate on.  The result of the
function's processing is substituted into the makefile at the point of the
call, just as a variable might be substituted.

@menu
* Syntax of Functions::         How to write a function call.
* Text Functions::              General-purpose text manipulation functions.
* File Name Functions::         Functions for manipulating file names.
* Foreach Function::            Repeat some text with controlled variation.
* If Function::                 Conditionally expand a value.
* Call Function::               Expand a user-defined function.
* Origin Function::             Find where a variable got its value.
* Shell Function::              Substitute the output of a shell command.
* Make Control Functions::      Functions that control how make runs.
@end menu

@node Syntax of Functions, Text Functions,  , Functions
@section Function Call Syntax
@cindex @code{$}, in function call
@cindex dollar sign (@code{$}), in function call
@cindex arguments of functions
@cindex functions, syntax of

A function call resembles a variable reference.  It looks like this:

@example
$(@var{function} @var{arguments})
@end example

@noindent
or like this:

@example
$@{@var{function} @var{arguments}@}
@end example

Here @var{function} is a function name; one of a short list of names
that are part of @code{make}.  You can also essentially create your own
functions by using the @code{call} builtin function.

The @var{arguments} are the arguments of the function.  They are
separated from the function name by one or more spaces or tabs, and if
there is more than one argument, then they are separated by commas.
Such whitespace and commas are not part of an argument's value.  The
delimiters which you use to surround the function call, whether
parentheses or braces, can appear in an argument only in matching pairs;
the other kind of delimiters may appear singly.  If the arguments
themselves contain other function calls or variable references, it is
wisest to use the same kind of delimiters for all the references; write
@w{@samp{$(subst a,b,$(x))}}, not @w{@samp{$(subst a,b,$@{x@})}}.  This
is because it is clearer, and because only one type of delimiter is
matched to find the end of the reference.

The text written for each argument is processed by substitution of
variables and function calls to produce the argument value, which
is the text on which the function acts.  The substitution is done in the
order in which the arguments appear.

Commas and unmatched parentheses or braces cannot appear in the text of an
argument as written; leading spaces cannot appear in the text of the first
argument as written.  These characters can be put into the argument value
by variable substitution.  First define variables @code{comma} and
@code{space} whose values are isolated comma and space characters, then
substitute these variables where such characters are wanted, like this:

@example
@group
comma:= ,
empty:=
space:= $(empty) $(empty)
foo:= a b c
bar:= $(subst $(space),$(comma),$(foo))
# @r{bar is now `a,b,c'.}
@end group
@end example

@noindent
Here the @code{subst} function replaces each space with a comma, through
the value of @code{foo}, and substitutes the result.

@node Text Functions, File Name Functions, Syntax of Functions, Functions
@section Functions for String Substitution and Analysis
@cindex functions, for text

Here are some functions that operate on strings:

@table @code
@item $(subst @var{from},@var{to},@var{text})
@findex subst
Performs a textual replacement on the text @var{text}: each occurrence
of @var{from} is replaced by @var{to}.  The result is substituted for
the function call.  For example,

@example
$(subst ee,EE,feet on the street)
@end example

substitutes the string @samp{fEEt on the strEEt}.

@item $(patsubst @var{pattern},@var{replacement},@var{text})
@findex patsubst
Finds whitespace-separated words in @var{text} that match
@var{pattern} and replaces them with @var{replacement}.  Here
@var{pattern} may contain a @samp{%} which acts as a wildcard,
matching any number of any characters within a word.  If
@var{replacement} also contains a @samp{%}, the @samp{%} is replaced
by the text that matched the @samp{%} in @var{pattern}.  Only the first
@samp{%} in the @var{pattern} and @var{replacement} is treated this
way; any subsequent @samp{%} is unchanged.@refill

@cindex @code{%}, quoting in @code{patsubst}
@cindex @code{%}, quoting with @code{\} (backslash)
@cindex @code{\} (backslash), to quote @code{%}
@cindex backslash (@code{\}), to quote @code{%}
@cindex quoting @code{%}, in @code{patsubst}
@samp{%} characters in @code{patsubst} function invocations can be
quoted with preceding backslashes (@samp{\}).  Backslashes that would
otherwise quote @samp{%} characters can be quoted with more backslashes.
Backslashes that quote @samp{%} characters or other backslashes are
removed from the pattern before it is compared file names or has a stem
substituted into it.  Backslashes that are not in danger of quoting
@samp{%} characters go unmolested.  For example, the pattern
@file{the\%weird\\%pattern\\} has @samp{the%weird\} preceding the
operative @samp{%} character, and @samp{pattern\\} following it.  The
final two backslashes are left alone because they cannot affect any
@samp{%} character.@refill

Whitespace between words is folded into single space characters;
leading and trailing whitespace is discarded.

For example,

@example
$(patsubst %.c,%.o,x.c.c bar.c)
@end example

@noindent
produces the value @samp{x.c.o bar.o}.

Substitution references (@pxref{Substitution Refs, ,Substitution
References}) are a simpler way to get the effect of the @code{patsubst}
function:

@example
$(@var{var}:@var{pattern}=@var{replacement})
@end example

@noindent
is equivalent to

@example
$(patsubst @var{pattern},@var{replacement},$(@var{var}))
@end example

The second shorthand simplifies one of the most common uses of
@code{patsubst}: replacing the suffix at the end of file names.

@example
$(@var{var}:@var{suffix}=@var{replacement})
@end example

@noindent
is equivalent to

@example
$(patsubst %@var{suffix},%@var{replacement},$(@var{var}))
@end example

@noindent
For example, you might have a list of object files:

@example
objects = foo.o bar.o baz.o
@end example

@noindent
To get the list of corresponding source files, you could simply write:

@example
$(objects:.o=.c)
@end example

@noindent
instead of using the general form:

@example
$(patsubst %.o,%.c,$(objects))
@end example

@item $(strip @var{string})
@cindex stripping whitespace
@cindex whitespace, stripping
@cindex spaces, stripping
@findex strip
Removes leading and trailing whitespace from @var{string} and replaces
each internal sequence of one or more whitespace characters with a
single space.  Thus, @samp{$(strip a b  c )} results in @w{@samp{a b c}}.

The function @code{strip} can be very useful when used in conjunction
with conditionals.  When comparing something with the empty string
@samp{} using @code{ifeq} or @code{ifneq}, you usually want a string of
just whitespace to match the empty string (@pxref{Conditionals}).

Thus, the following may fail to have the desired results:

@example
.PHONY: all
ifneq   "$(needs_made)" ""
all: $(needs_made)
else
all:;@@echo 'Nothing to make!'
endif
@end example

@noindent
Replacing the variable reference @w{@samp{$(needs_made)}} with the
function call @w{@samp{$(strip $(needs_made))}} in the @code{ifneq}
directive would make it more robust.@refill

@item $(findstring @var{find},@var{in})
@findex findstring
@cindex searching for strings
@cindex finding strings
@cindex strings, searching for
Searches @var{in} for an occurrence of @var{find}.  If it occurs, the
value is @var{find}; otherwise, the value is empty.  You can use this
function in a conditional to test for the presence of a specific
substring in a given string.  Thus, the two examples,

@example
$(findstring a,a b c)
$(findstring a,b c)
@end example

@noindent
produce the values @samp{a} and @samp{} (the empty string),
respectively.  @xref{Testing Flags}, for a practical application of
@code{findstring}.@refill

@need 750
@findex filter
@cindex filtering words
@cindex words, filtering
@item $(filter @var{pattern}@dots{},@var{text})
Returns all whitespace-separated words in @var{text} that @emph{do} match
any of the @var{pattern} words, removing any words that @emph{do not}
match.  The patterns are written using @samp{%}, just like the patterns
used in the @code{patsubst} function above.@refill

The @code{filter} function can be used to separate out different types
of strings (such as file names) in a variable.  For example:

@example
sources := foo.c bar.c baz.s ugh.h
foo: $(sources)
        cc $(filter %.c %.s,$(sources)) -o foo
@end example

@noindent
says that @file{foo} depends of @file{foo.c}, @file{bar.c},
@file{baz.s} and @file{ugh.h} but only @file{foo.c}, @file{bar.c} and
@file{baz.s} should be specified in the command to the
compiler.@refill

@item $(filter-out @var{pattern}@dots{},@var{text})
@findex filter-out
@cindex filtering out words
@cindex words, filtering out
Returns all whitespace-separated words in @var{text} that @emph{do not}
match any of the @var{pattern} words, removing the words that @emph{do}
match one or more.  This is the exact opposite of the @code{filter}
function.@refill

Removes all whitespace-separated words in @var{text} that @emph{do}
match the @var{pattern} words, returning only the words that @emph{do
not} match.  This is the exact opposite of the @code{filter}
function.@refill

For example, given:

@example
@group
objects=main1.o foo.o main2.o bar.o
mains=main1.o main2.o
@end group
@end example

@noindent
the following generates a list which contains all the object files not
in @samp{mains}:

@example
$(filter-out $(mains),$(objects))
@end example

@need 1500
@findex sort
@cindex sorting words
@item $(sort @var{list})
Sorts the words of @var{list} in lexical order, removing duplicate
words.  The output is a list of words separated by single spaces.
Thus,

@example
$(sort foo bar lose)
@end example

@noindent
returns the value @samp{bar foo lose}.

@cindex removing duplicate words
@cindex duplicate words, removing
@cindex words, removing duplicates
Incidentally, since @code{sort} removes duplicate words, you can use
it for this purpose even if you don't care about the sort order.
@end table

Here is a realistic example of the use of @code{subst} and
@code{patsubst}.  Suppose that a makefile uses the @code{VPATH} variable
to specify a list of directories that @code{make} should search for
prerequisite files
(@pxref{General Search, , @code{VPATH} Search Path for All Prerequisites}).
This example shows how to
tell the C compiler to search for header files in the same list of
directories.@refill

The value of @code{VPATH} is a list of directories separated by colons,
such as @samp{src:../headers}.  First, the @code{subst} function is used to
change the colons to spaces:

@example
$(subst :, ,$(VPATH))
@end example

@noindent
This produces @samp{src ../headers}.  Then @code{patsubst} is used to turn
each directory name into a @samp{-I} flag.  These can be added to the
value of the variable @code{CFLAGS}, which is passed automatically to the C
compiler, like this:

@example
override CFLAGS += $(patsubst %,-I%,$(subst :, ,$(VPATH)))
@end example

@noindent
The effect is to append the text @samp{-Isrc -I../headers} to the
previously given value of @code{CFLAGS}.  The @code{override} directive is
used so that the new value is assigned even if the previous value of
@code{CFLAGS} was specified with a command argument (@pxref{Override
Directive, , The @code{override} Directive}).

@node File Name Functions, Foreach Function, Text Functions, Functions
@section Functions for File Names
@cindex functions, for file names
@cindex file name functions

Several of the built-in expansion functions relate specifically to
taking apart file names or lists of file names.

Each of the following functions performs a specific transformation on a
file name.  The argument of the function is regarded as a series of file
names, separated by whitespace.  (Leading and trailing whitespace is
ignored.)  Each file name in the series is transformed in the same way and
the results are concatenated with single spaces between them.

@table @code
@item $(dir @var{names}@dots{})
@findex dir
@cindex directory part
@cindex file name, directory part
Extracts the directory-part of each file name in @var{names}.  The
directory-part of the file name is everything up through (and
including) the last slash in it.  If the file name contains no slash,
the directory part is the string @samp{./}.  For example,

@example
$(dir src/foo.c hacks)
@end example

@noindent
produces the result @samp{src/ ./}.

@item $(notdir @var{names}@dots{})
@findex notdir
@cindex file name, nondirectory part
@cindex nondirectory part
Extracts all but the directory-part of each file name in @var{names}.
If the file name contains no slash, it is left unchanged.  Otherwise,
everything through the last slash is removed from it.

A file name that ends with a slash becomes an empty string.  This is
unfortunate, because it means that the result does not always have the
same number of whitespace-separated file names as the argument had;
but we do not see any other valid alternative.

For example,

@example
$(notdir src/foo.c hacks)
@end example

@noindent
produces the result @samp{foo.c hacks}.

@item $(suffix @var{names}@dots{})
@findex suffix
@cindex suffix, function to find
@cindex file name suffix
Extracts the suffix of each file name in @var{names}.  If the file name
contains a period, the suffix is everything starting with the last
period.  Otherwise, the suffix is the empty string.  This frequently
means that the result will be empty when @var{names} is not, and if
@var{names} contains multiple file names, the result may contain fewer
file names.

For example,

@example
$(suffix src/foo.c src-1.0/bar.c hacks)
@end example

@noindent
produces the result @samp{.c .c}.

@item $(basename @var{names}@dots{})
@findex basename
@cindex basename
@cindex file name, basename of
Extracts all but the suffix of each file name in @var{names}.  If the
file name contains a period, the basename is everything starting up to
(and not including) the last period.  Periods in the directory part are
ignored.  If there is no period, the basename is the entire file name.
For example,

@example
$(basename src/foo.c src-1.0/bar hacks)
@end example

@noindent
produces the result @samp{src/foo src-1.0/bar hacks}.

@c plural convention with dots (be consistent)
@item $(addsuffix @var{suffix},@var{names}@dots{})
@findex addsuffix
@cindex suffix, adding
@cindex file name suffix, adding
The argument @var{names} is regarded as a series of names, separated
by whitespace; @var{suffix} is used as a unit.  The value of
@var{suffix} is appended to the end of each individual name and the
resulting larger names are concatenated with single spaces between
them.  For example,

@example
$(addsuffix .c,foo bar)
@end example

@noindent
produces the result @samp{foo.c bar.c}.

@item $(addprefix @var{prefix},@var{names}@dots{})
@findex addprefix
@cindex prefix, adding
@cindex file name prefix, adding
The argument @var{names} is regarded as a series of names, separated
by whitespace; @var{prefix} is used as a unit.  The value of
@var{prefix} is prepended to the front of each individual name and the
resulting larger names are concatenated with single spaces between
them.  For example,

@example
$(addprefix src/,foo bar)
@end example

@noindent
produces the result @samp{src/foo src/bar}.

@item $(join @var{list1},@var{list2})
@findex join
@cindex joining lists of words
@cindex words, joining lists
Concatenates the two arguments word by word: the two first words (one
from each argument) concatenated form the first word of the result, the
two second words form the second word of the result, and so on.  So the
@var{n}th word of the result comes from the @var{n}th word of each
argument.  If one argument has more words that the other, the extra
words are copied unchanged into the result.

For example, @samp{$(join a b,.c .o)} produces @samp{a.c b.o}.

Whitespace between the words in the lists is not preserved; it is
replaced with a single space.

This function can merge the results of the @code{dir} and
@code{notdir} functions, to produce the original list of files which
was given to those two functions.@refill

@item $(word @var{n},@var{text})
@findex word
@cindex word, selecting a
@cindex selecting a word
Returns the @var{n}th word of @var{text}.  The legitimate values of
@var{n} start from 1.  If @var{n} is bigger than the number of words
in @var{text}, the value is empty.  For example,

@example
$(word 2, foo bar baz)
@end example

@noindent
returns @samp{bar}.

@item $(wordlist @var{s},@var{e},@var{text})
@findex wordlist
@cindex words, selecting lists of
@cindex selecting word lists
Returns the list of words in @var{text} starting with word @var{s} and
ending with word @var{e} (inclusive).  The legitimate values of @var{s}
and @var{e} start from 1.  If @var{s} is bigger than the number of words
in @var{text}, the value is empty.  If @var{e} is bigger than the number
of words in @var{text}, words up to the end of @var{text} are returned.
If @var{s} is greater than @var{e}, nothing is returned.  For example,

@example
$(wordlist 2, 3, foo bar baz)
@end example

@noindent
returns @samp{bar baz}.

@c Following item phrased to prevent overfull hbox.  --RJC 17 Jul 92
@item $(words @var{text})
@findex words
@cindex words, finding number
Returns the number of words in @var{text}.
Thus, the last word of @var{text} is
@w{@code{$(word $(words @var{text}),@var{text})}}.@refill

@item $(firstword @var{names}@dots{})
@findex firstword
@cindex words, extracting first
The argument @var{names} is regarded as a series of names, separated
by whitespace.  The value is the first name in the series.  The rest
of the names are ignored.

For example,

@example
$(firstword foo bar)
@end example

@noindent
produces the result @samp{foo}.  Although @code{$(firstword
@var{text})} is the same as @code{$(word 1,@var{text})}, the
@code{firstword} function is retained for its simplicity.@refill

@item $(wildcard @var{pattern})
@findex wildcard
@cindex wildcard, function
The argument @var{pattern} is a file name pattern, typically containing
wildcard characters (as in shell file name patterns).  The result of
@code{wildcard} is a space-separated list of the names of existing files
that match the pattern.
@xref{Wildcards, ,Using Wildcard Characters in File Names}.
@end table

@node Foreach Function, If Function, File Name Functions, Functions
@section The @code{foreach} Function
@findex foreach
@cindex words, iterating over

The @code{foreach} function is very different from other functions.  It
causes one piece of text to be used repeatedly, each time with a different
substitution performed on it.  It resembles the @code{for} command in the
shell @code{sh} and the @code{foreach} command in the C-shell @code{csh}.

The syntax of the @code{foreach} function is:

@example
$(foreach @var{var},@var{list},@var{text})
@end example

@noindent
The first two arguments, @var{var} and @var{list}, are expanded before
anything else is done; note that the last argument, @var{text}, is
@strong{not} expanded at the same time.  Then for each word of the expanded
value of @var{list}, the variable named by the expanded value of @var{var}
is set to that word, and @var{text} is expanded.  Presumably @var{text}
contains references to that variable, so its expansion will be different
each time.

The result is that @var{text} is expanded as many times as there are
whitespace-separated words in @var{list}.  The multiple expansions of
@var{text} are concatenated, with spaces between them, to make the result
of @code{foreach}.

This simple example sets the variable @samp{files} to the list of all files
in the directories in the list @samp{dirs}:

@example
dirs := a b c d
files := $(foreach dir,$(dirs),$(wildcard $(dir)/*))
@end example

Here @var{text} is @samp{$(wildcard $(dir)/*)}.  The first repetition
finds the value @samp{a} for @code{dir}, so it produces the same result
as @samp{$(wildcard a/*)}; the second repetition produces the result
of @samp{$(wildcard b/*)}; and the third, that of @samp{$(wildcard c/*)}.

This example has the same result (except for setting @samp{dirs}) as
the following example:

@example
files := $(wildcard a/* b/* c/* d/*)
@end example

When @var{text} is complicated, you can improve readability by giving it
a name, with an additional variable:

@example
find_files = $(wildcard $(dir)/*)
dirs := a b c d
files := $(foreach dir,$(dirs),$(find_files))
@end example

@noindent
Here we use the variable @code{find_files} this way.  We use plain @samp{=}
to define a recursively-expanding variable, so that its value contains an
actual function call to be reexpanded under the control of @code{foreach};
a simply-expanded variable would not do, since @code{wildcard} would be
called only once at the time of defining @code{find_files}.

The @code{foreach} function has no permanent effect on the variable
@var{var}; its value and flavor after the @code{foreach} function call are
the same as they were beforehand.  The other values which are taken from
@var{list} are in effect only temporarily, during the execution of
@code{foreach}.  The variable @var{var} is a simply-expanded variable
during the execution of @code{foreach}.  If @var{var} was undefined
before the @code{foreach} function call, it is undefined after the call.
@xref{Flavors, ,The Two Flavors of Variables}.@refill

You must take care when using complex variable expressions that result in
variable names because many strange things are valid variable names, but
are probably not what you intended.  For example,

@smallexample
files := $(foreach Esta escrito en espanol!,b c ch,$(find_files))
@end smallexample

@noindent
might be useful if the value of @code{find_files} references the variable
whose name is @samp{Esta escrito en espanol!} (es un nombre bastante largo,
no?), but it is more likely to be a mistake.

@node If Function, Call Function, Foreach Function, Functions
@section The @code{if} Function
@findex if
@cindex conditional expansion

The @code{if} function provides support for conditional expansion in a
functional context (as opposed to the GNU @code{make} makefile
conditionals such as @code{ifeq} (@pxref{Conditional Syntax, ,Syntax of
Conditionals}).

An @code{if} function call can contain either two or three arguments:

@example
$(if @var{condition},@var{then-part}[,@var{else-part}])
@end example

The first argument, @var{condition}, first has all preceding and
trailing whitespace stripped, then is expanded.  If it expands to any
non-empty string, then the condition is considered to be true.  If it
expands to an empty string, the condition is considered to be false.

If the condition is true then the second argument, @var{then-part}, is
evaluated and this is used as the result of the evaluation of the entire
@code{if} function.

If the condition is false then the third argument, @var{else-part}, is
evaluated and this is the result of the @code{if} function.  If there is
no third argument, the @code{if} function evaluates to nothing (the
empty string).

Note that only one of the @var{then-part} or the @var{else-part} will be
evaluated, never both.  Thus, either can contain side-effects (such as
@code{shell} function calls, etc.)

@node Call Function, Origin Function, If Function, Functions
@section The @code{call} Function
@findex call
@cindex functions, user defined
@cindex user defined functions

The @code{call} function is unique in that it can be used to create new
parameterized functions.  You can write a complex expression as the
value of a variable, then use @code{call} to expand it with different
values.

The syntax of the @code{call} function is:

@example
$(call @var{variable},@var{param},@var{param},@dots{})
@end example

When @code{make} expands this function, it assigns each @var{param} to
temporary variables @code{$(1)}, @code{$(2)}, etc.  The variable
@code{$(0)} will contain @var{variable}.  There is no maximum number of
parameter arguments.  There is no minimum, either, but it doesn't make
sense to use @code{call} with no parameters.

Then @var{variable} is expanded as a @code{make} variable in the context
of these temporary assignments.  Thus, any reference to @code{$(1)} in
the value of @var{variable} will resolve to the first @var{param} in the
invocation of @code{call}.

Note that @var{variable} is the @emph{name} of a variable, not a
@emph{reference} to that variable.  Therefore you would not normally use
a @samp{$} or parentheses when writing it.  (You can, however, use a
variable reference in the name if you want the name not to be a
constant.)

If @var{variable} is the name of a builtin function, the builtin function
is always invoked (even if a @code{make} variable by that name also
exists).

The @code{call} function expands the @var{param} arguments before
assigning them to temporary variables.  This means that @var{variable}
values containing references to builtin functions that have special
expansion rules, like @code{foreach} or @code{if}, may not work as you
expect.

Some examples may make this clearer.

This macro simply reverses its arguments:

@smallexample
reverse = $(2) $(1)

foo = $(call reverse,a,b)
@end smallexample

@noindent
Here @var{foo} will contain @samp{b a}.

This one is slightly more interesting: it defines a macro to search for
the first instance of a program in @code{PATH}:

@smallexample
pathsearch = $(firstword $(wildcard $(addsuffix /$(1),$(subst :, ,$(PATH)))))

LS := $(call pathsearch,ls)
@end smallexample

@noindent
Now the variable LS contains @code{/bin/ls} or similar.

The @code{call} function can be nested.  Each recursive invocation gets
its own local values for @code{$(1)}, etc. that mask the values of
higher-level @code{call}.  For example, here is an implementation of a
@dfn{map} function:

@smallexample
map = $(foreach a,$(2),$(call $(1),$(a)))
@end smallexample

Now you can @var{map} a function that normally takes only one argument,
such as @code{origin}, to multiple values in one step:

@smallexample
o = $(call map,origin,o map MAKE)
@end smallexample

and end up with @var{o} containing something like @samp{file file default}.

A final caution: be careful when adding whitespace to the arguments to
@code{call}.  As with other functions, any whitespace contained in the
second and subsequent arguments is kept; this can cause strange
effects.  It's generally safest to remove all extraneous whitespace when
providing parameters to @code{call}.


@node Origin Function, Shell Function, Call Function, Functions
@section The @code{origin} Function
@findex origin
@cindex variables, origin of
@cindex origin of variable

The @code{origin} function is unlike most other functions in that it does
not operate on the values of variables; it tells you something @emph{about}
a variable.  Specifically, it tells you where it came from.

The syntax of the @code{origin} function is:

@example
$(origin @var{variable})
@end example

Note that @var{variable} is the @emph{name} of a variable to inquire about;
not a @emph{reference} to that variable.  Therefore you would not normally
use a @samp{$} or parentheses when writing it.  (You can, however, use a
variable reference in the name if you want the name not to be a constant.)

The result of this function is a string telling you how the variable
@var{variable} was defined:

@table @samp
@item undefined

if @var{variable} was never defined.

@item default

if @var{variable} has a default definition, as is usual with @code{CC}
and so on.  @xref{Implicit Variables, ,Variables Used by Implicit Rules}.
Note that if you have redefined a default variable, the @code{origin}
function will return the origin of the later definition.

@item environment

if @var{variable} was defined as an environment variable and the
@samp{-e} option is @emph{not} turned on (@pxref{Options Summary, ,Summary of Options}).

@item environment override

if @var{variable} was defined as an environment variable and the
@w{@samp{-e}} option @emph{is} turned on (@pxref{Options Summary,
,Summary of Options}).@refill

@item file

if @var{variable} was defined in a makefile.

@item command line

if @var{variable} was defined on the command line.

@item override

if @var{variable} was defined with an @code{override} directive in a
makefile (@pxref{Override Directive, ,The @code{override} Directive}).

@item automatic

if @var{variable} is an automatic variable defined for the
execution of the commands for each rule
(@pxref{Automatic, , Automatic Variables}).
@end table

This information is primarily useful (other than for your curiosity) to
determine if you want to believe the value of a variable.  For example,
suppose you have a makefile @file{foo} that includes another makefile
@file{bar}.  You want a variable @code{bletch} to be defined in @file{bar}
if you run the command @w{@samp{make -f bar}}, even if the environment contains
a definition of @code{bletch}.  However, if @file{foo} defined
@code{bletch} before including @file{bar}, you do not want to override that
definition.  This could be done by using an @code{override} directive in
@file{foo}, giving that definition precedence over the later definition in
@file{bar}; unfortunately, the @code{override} directive would also
override any command line definitions.  So, @file{bar} could
include:@refill

@example
@group
ifdef bletch
ifeq "$(origin bletch)" "environment"
bletch = barf, gag, etc.
endif
endif
@end group
@end example

@noindent
If @code{bletch} has been defined from the environment, this will redefine
it.

If you want to override a previous definition of @code{bletch} if it came
from the environment, even under @samp{-e}, you could instead write:

@example
@group
ifneq "$(findstring environment,$(origin bletch))" ""
bletch = barf, gag, etc.
endif
@end group
@end example

Here the redefinition takes place if @samp{$(origin bletch)} returns either
@samp{environment} or @samp{environment override}.
@xref{Text Functions, , Functions for String Substitution and Analysis}.

@node Shell Function, Make Control Functions, Origin Function, Functions
@section The @code{shell} Function
@findex shell
@cindex commands, expansion
@cindex backquotes
@cindex shell command, function for

The @code{shell} function is unlike any other function except the
@code{wildcard} function
(@pxref{Wildcard Function, ,The Function @code{wildcard}}) in that it
communicates with the world outside of @code{make}.

The @code{shell} function performs the same function that backquotes
(@samp{`}) perform in most shells: it does @dfn{command expansion}.  This
means that it takes an argument that is a shell command and returns the
output of the command.  The only processing @code{make} does on the result,
before substituting it into the surrounding text, is to convert each
newline or carriage-return / newline pair to a single space.  It also
removes the trailing (carriage-return and) newline, if it's the last
thing in the result.@refill

The commands run by calls to the @code{shell} function are run when the
function calls are expanded.  In most cases, this is when the makefile is
read in.  The exception is that function calls in the commands of the rules
are expanded when the commands are run, and this applies to @code{shell}
function calls like all others.

Here are some examples of the use of the @code{shell} function:

@example
contents := $(shell cat foo)
@end example

@noindent
sets @code{contents} to the contents of the file @file{foo}, with a space
(rather than a newline) separating each line.

@example
files := $(shell echo *.c)
@end example

@noindent
sets @code{files} to the expansion of @samp{*.c}.  Unless @code{make} is
using a very strange shell, this has the same result as
@w{@samp{$(wildcard *.c)}}.@refill

@node Make Control Functions,  , Shell Function, Functions
@section Functions That Control Make
@cindex functions, for controlling make
@cindex controlling make

These functions control the way make runs.  Generally, they are used to
provide information to the user of the makefile or to cause make to stop
if some sort of environmental error is detected.

@table @code
@item $(error @var{text}@dots{})
@findex error
@cindex error, stopping on
@cindex stopping make
Generates a fatal error where the message is @var{text}.  Note that the
error is generated whenever this function is evaluated.  So, if you put
it inside a command script or on the right side of a recursive variable
assignment, it won't be evaluated until later.  The @var{text} will be
expanded before the error is generated.

For example,

@example
ifdef ERROR1
$(error error is $(ERROR1))
endif
@end example

@noindent
will generate a fatal error during the read of the makefile if the
@code{make} variable @code{ERROR1} is defined.  Or,

@example
ERR = $(error found an error!)

.PHONY: err
err: ; $(ERR)
@end example

@noindent
will generate a fatal error while @code{make} is running, if the
@code{err} target is invoked.

@item $(warning @var{text}@dots{})
@findex warning
@cindex warnings, printing
@cindex printing user warnings
This function works similarly to the @code{error} function, above,
except that @code{make} doesn't exit.  Instead, @var{text} is expanded
and the resulting message is displayed, but processing of the makefile
continues.

The result of the expansion of this function is the empty string.
@end table

@node Running, Implicit Rules, Functions, Top
@chapter How to Run @code{make}

A makefile that says how to recompile a program can be used in more
than one way.  The simplest use is to recompile every file that is out
of date.  Usually, makefiles are written so that if you run
@code{make} with no arguments, it does just that.

But you might want to update only some of the files; you might want to use
a different compiler or different compiler options; you might want just to
find out which files are out of date without changing them.

By giving arguments when you run @code{make}, you can do any of these
things and many others.

The exit status of @code{make} is always one of three values:
@table @code
@item 0
The exit status is zero if @code{make} is successful.
@item 2
The exit status is two if @code{make} encounters any errors.
It will print messages describing the particular errors.
@item 1
The exit status is one if you use the @samp{-q} flag and @code{make}
determines that some target is not already up to date.
@xref{Instead of Execution, ,Instead of Executing the Commands}.
@end table

@menu
* Makefile Arguments::          How to specify which makefile to use.
* Goals::                       How to use goal arguments to specify which
                                  parts of the makefile to use.
* Instead of Execution::        How to use mode flags to specify what
                                  kind of thing to do with the commands
                                  in the makefile other than simply
                                  execute them.
* Avoiding Compilation::        How to avoid recompiling certain files.
* Overriding::                  How to override a variable to specify
                                  an alternate compiler and other things.
* Testing::                     How to proceed past some errors, to
                                  test compilation.
* Options Summary::             Summary of Options
@end menu

@node Makefile Arguments, Goals,  , Running
@section Arguments to Specify the Makefile
@cindex @code{--file}
@cindex @code{--makefile}
@cindex @code{-f}

The way to specify the name of the makefile is with the @samp{-f} or
@samp{--file} option (@samp{--makefile} also works).  For example,
@samp{-f altmake} says to use the file @file{altmake} as the makefile.

If you use the @samp{-f} flag several times and follow each @samp{-f}
with an argument, all the specified files are used jointly as
makefiles.

If you do not use the @samp{-f} or @samp{--file} flag, the default is
to try @file{GNUmakefile}, @file{makefile}, and @file{Makefile}, in
that order, and use the first of these three which exists or can be made
(@pxref{Makefiles, ,Writing Makefiles}).@refill

@node Goals, Instead of Execution, Makefile Arguments, Running
@section Arguments to Specify the Goals
@cindex goal, how to specify

The @dfn{goals} are the targets that @code{make} should strive ultimately
to update.  Other targets are updated as well if they appear as
prerequisites of goals, or prerequisites of prerequisites of goals, etc.

By default, the goal is the first target in the makefile (not counting
targets that start with a period).  Therefore, makefiles are usually
written so that the first target is for compiling the entire program or
programs they describe.  If the first rule in the makefile has several
targets, only the first target in the rule becomes the default goal, not
the whole list.

You can specify a different goal or goals with arguments to @code{make}.
Use the name of the goal as an argument.  If you specify several goals,
@code{make} processes each of them in turn, in the order you name them.

Any target in the makefile may be specified as a goal (unless it
starts with @samp{-} or contains an @samp{=}, in which case it will be
parsed as a switch or variable definition, respectively).  Even
targets not in the makefile may be specified, if @code{make} can find
implicit rules that say how to make them.

@cindex @code{MAKECMDGOALS}
@vindex MAKECMDGOALS
@code{Make} will set the special variable @code{MAKECMDGOALS} to the
list of goals you specified on the command line.  If no goals were given
on the command line, this variable is empty.  Note that this variable
should be used only in special circumstances.

An example of appropriate use is to avoid including @file{.d} files
during @code{clean} rules (@pxref{Automatic Prerequisites}), so
@code{make} won't create them only to immediately remove them
again:@refill

@example
@group
sources = foo.c bar.c

ifneq ($(MAKECMDGOALS),clean)
include $(sources:.c=.d)
endif
@end group
@end example

One use of specifying a goal is if you want to compile only a part of
the program, or only one of several programs.  Specify as a goal each
file that you wish to remake.  For example, consider a directory containing
several programs, with a makefile that starts like this:

@example
.PHONY: all
all: size nm ld ar as
@end example

If you are working on the program @code{size}, you might want to say
@w{@samp{make size}} so that only the files of that program are recompiled.

Another use of specifying a goal is to make files that are not normally
made.  For example, there may be a file of debugging output, or a
version of the program that is compiled specially for testing, which has
a rule in the makefile but is not a prerequisite of the default goal.

Another use of specifying a goal is to run the commands associated with
a phony target (@pxref{Phony Targets}) or empty target (@pxref{Empty
Targets, ,Empty Target Files to Record Events}).  Many makefiles contain
a phony target named @file{clean} which deletes everything except source
files.  Naturally, this is done only if you request it explicitly with
@w{@samp{make clean}}.  Following is a list of typical phony and empty
target names.  @xref{Standard Targets}, for a detailed list of all the
standard target names which GNU software packages use.

@table @file
@item all
@cindex @code{all} @r{(standard target)}
Make all the top-level targets the makefile knows about.

@item clean
@cindex @code{clean} @r{(standard target)}
Delete all files that are normally created by running @code{make}.

@item mostlyclean
@cindex @code{mostlyclean} @r{(standard target)}
Like @samp{clean}, but may refrain from deleting a few files that people
normally don't want to recompile.  For example, the @samp{mostlyclean}
target for GCC does not delete @file{libgcc.a}, because recompiling it
is rarely necessary and takes a lot of time.

@item distclean
@cindex @code{distclean} @r{(standard target)}
@itemx realclean
@cindex @code{realclean} @r{(standard target)}
@itemx clobber
@cindex @code{clobber} @r{(standard target)}
Any of these targets might be defined to delete @emph{more} files than
@samp{clean} does.  For example, this would delete configuration files
or links that you would normally create as preparation for compilation,
even if the makefile itself cannot create these files.

@item install
@cindex @code{install} @r{(standard target)}
Copy the executable file into a directory that users typically search
for commands; copy any auxiliary files that the executable uses into
the directories where it will look for them.

@item print
@cindex @code{print} @r{(standard target)}
Print listings of the source files that have changed.

@item tar
@cindex @code{tar} @r{(standard target)}
Create a tar file of the source files.

@item shar
@cindex @code{shar} @r{(standard target)}
Create a shell archive (shar file) of the source files.

@item dist
@cindex @code{dist} @r{(standard target)}
Create a distribution file of the source files.  This might
be a tar file, or a shar file, or a compressed version of one of the
above, or even more than one of the above.

@item TAGS
@cindex @code{TAGS} @r{(standard target)}
Update a tags table for this program.

@item check
@cindex @code{check} @r{(standard target)}
@itemx test
@cindex @code{test} @r{(standard target)}
Perform self tests on the program this makefile builds.
@end table

@node Instead of Execution, Avoiding Compilation, Goals, Running
@section Instead of Executing the Commands
@cindex execution, instead of
@cindex commands, instead of executing

The makefile tells @code{make} how to tell whether a target is up to date,
and how to update each target.  But updating the targets is not always
what you want.  Certain options specify other activities for @code{make}.

@comment Extra blank lines make it print better.
@table @samp
@item -n
@itemx --just-print
@itemx --dry-run
@itemx --recon
@cindex @code{--just-print}
@cindex @code{--dry-run}
@cindex @code{--recon}
@cindex @code{-n}

``No-op''.  The activity is to print what commands would be used to make
the targets up to date, but not actually execute them.

@item -t
@itemx --touch
@cindex @code{--touch}
@cindex touching files
@cindex target, touching
@cindex @code{-t}

``Touch''.  The activity is to mark the targets as up to date without
actually changing them.  In other words, @code{make} pretends to compile
the targets but does not really change their contents.

@item -q
@itemx --question
@cindex @code{--question}
@cindex @code{-q}
@cindex question mode

``Question''.  The activity is to find out silently whether the targets
are up to date already; but execute no commands in either case.  In other
words, neither compilation nor output will occur.

@item -W @var{file}
@itemx --what-if=@var{file}
@itemx --assume-new=@var{file}
@itemx --new-file=@var{file}
@cindex @code{--what-if}
@cindex @code{-W}
@cindex @code{--assume-new}
@cindex @code{--new-file}
@cindex what if
@cindex files, assuming new

``What if''.  Each @samp{-W} flag is followed by a file name.  The given
files' modification times are recorded by @code{make} as being the present
time, although the actual modification times remain the same.
You can use the @samp{-W} flag in conjunction with the @samp{-n} flag
to see what would happen if you were to modify specific files.@refill
@end table

With the @samp{-n} flag, @code{make} prints the commands that it would
normally execute but does not execute them.

With the @samp{-t} flag, @code{make} ignores the commands in the rules
and uses (in effect) the command @code{touch} for each target that needs to
be remade.  The @code{touch} command is also printed, unless @samp{-s} or
@code{.SILENT} is used.  For speed, @code{make} does not actually invoke
the program @code{touch}.  It does the work directly.

With the @samp{-q} flag, @code{make} prints nothing and executes no
commands, but the exit status code it returns is zero if and only if the
targets to be considered are already up to date.  If the exit status is
one, then some updating needs to be done.  If @code{make} encounters an
error, the exit status is two, so you can distinguish an error from a
target that is not up to date.

It is an error to use more than one of these three flags in the same
invocation of @code{make}.

The @samp{-n}, @samp{-t}, and @samp{-q} options do not affect command
lines that begin with @samp{+} characters or contain the strings
@samp{$(MAKE)} or @samp{$@{MAKE@}}.  Note that only the line containing
the @samp{+} character or the strings @samp{$(MAKE)} or @samp{$@{MAKE@}}
is run regardless of these options.  Other lines in the same rule are
not run unless they too begin with @samp{+} or contain @samp{$(MAKE)} or
@samp{$@{MAKE@}} (@xref{MAKE Variable, ,How the @code{MAKE} Variable Works}.)

The @samp{-W} flag provides two features:

@itemize @bullet
@item
If you also use the @samp{-n} or @samp{-q} flag, you can see what
@code{make} would do if you were to modify some files.

@item
Without the @samp{-n} or @samp{-q} flag, when @code{make} is actually
executing commands, the @samp{-W} flag can direct @code{make} to act
as if some files had been modified, without actually modifying the
files.@refill
@end itemize

Note that the options @samp{-p} and @samp{-v} allow you to obtain other
information about @code{make} or about the makefiles in use
(@pxref{Options Summary, ,Summary of Options}).@refill

@node Avoiding Compilation, Overriding, Instead of Execution, Running
@section Avoiding Recompilation of Some Files
@cindex @code{-o}
@cindex @code{--old-file}
@cindex @code{--assume-old}
@cindex files, assuming old
@cindex files, avoiding recompilation of
@cindex recompilation, avoiding

Sometimes you may have changed a source file but you do not want to
recompile all the files that depend on it.  For example, suppose you add
a macro or a declaration to a header file that many other files depend
on.  Being conservative, @code{make} assumes that any change in the
header file requires recompilation of all dependent files, but you know
that they do not need to be recompiled and you would rather not waste
the time waiting for them to compile.

If you anticipate the problem before changing the header file, you can
use the @samp{-t} flag.  This flag tells @code{make} not to run the
commands in the rules, but rather to mark the target up to date by
changing its last-modification date.  You would follow this procedure:

@enumerate
@item
Use the command @samp{make} to recompile the source files that really
need recompilation.

@item
Make the changes in the header files.

@item
Use the command @samp{make -t} to mark all the object files as
up to date.  The next time you run @code{make}, the changes in the
header files will not cause any recompilation.
@end enumerate

If you have already changed the header file at a time when some files
do need recompilation, it is too late to do this.  Instead, you can
use the @w{@samp{-o @var{file}}} flag, which marks a specified file as
``old'' (@pxref{Options Summary, ,Summary of Options}).  This means
that the file itself will not be remade, and nothing else will be
remade on its account.  Follow this procedure:

@enumerate
@item
Recompile the source files that need compilation for reasons independent
of the particular header file, with @samp{make -o @var{headerfile}}.
If several header files are involved, use a separate @samp{-o} option
for each header file.

@item
Touch all the object files with @samp{make -t}.
@end enumerate

@node Overriding, Testing, Avoiding Compilation, Running
@section Overriding Variables
@cindex overriding variables with arguments
@cindex variables, overriding with arguments
@cindex command line variables
@cindex variables, command line

An argument that contains @samp{=} specifies the value of a variable:
@samp{@var{v}=@var{x}} sets the value of the variable @var{v} to @var{x}.
If you specify a value in this way, all ordinary assignments of the same
variable in the makefile are ignored; we say they have been
@dfn{overridden} by the command line argument.

The most common way to use this facility is to pass extra flags to
compilers.  For example, in a properly written makefile, the variable
@code{CFLAGS} is included in each command that runs the C compiler, so a
file @file{foo.c} would be compiled something like this:

@example
cc -c $(CFLAGS) foo.c
@end example

Thus, whatever value you set for @code{CFLAGS} affects each compilation
that occurs.  The makefile probably specifies the usual value for
@code{CFLAGS}, like this:

@example
CFLAGS=-g
@end example

Each time you run @code{make}, you can override this value if you
wish.  For example, if you say @samp{make CFLAGS='-g -O'}, each C
compilation will be done with @samp{cc -c -g -O}.  (This illustrates
how you can use quoting in the shell to enclose spaces and other
special characters in the value of a variable when you override it.)

The variable @code{CFLAGS} is only one of many standard variables that
exist just so that you can change them this way.  @xref{Implicit
Variables, , Variables Used by Implicit Rules}, for a complete list.

You can also program the makefile to look at additional variables of your
own, giving the user the ability to control other aspects of how the
makefile works by changing the variables.

When you override a variable with a command argument, you can define either
a recursively-expanded variable or a simply-expanded variable.  The
examples shown above make a recursively-expanded variable; to make a
simply-expanded variable, write @samp{:=} instead of @samp{=}.  But, unless
you want to include a variable reference or function call in the
@emph{value} that you specify, it makes no difference which kind of
variable you create.

There is one way that the makefile can change a variable that you have
overridden.  This is to use the @code{override} directive, which is a line
that looks like this: @samp{override @var{variable} = @var{value}}
(@pxref{Override Directive, ,The @code{override} Directive}).

@node Testing, Options Summary, Overriding, Running
@section Testing the Compilation of a Program
@cindex testing compilation
@cindex compilation, testing

Normally, when an error happens in executing a shell command, @code{make}
gives up immediately, returning a nonzero status.  No further commands are
executed for any target.  The error implies that the goal cannot be
correctly remade, and @code{make} reports this as soon as it knows.

When you are compiling a program that you have just changed, this is not
what you want.  Instead, you would rather that @code{make} try compiling
every file that can be tried, to show you as many compilation errors
as possible.

@cindex @code{-k}
@cindex @code{--keep-going}
On these occasions, you should use the @samp{-k} or
@samp{--keep-going} flag.  This tells @code{make} to continue to
consider the other prerequisites of the pending targets, remaking them
if necessary, before it gives up and returns nonzero status.  For
example, after an error in compiling one object file, @samp{make -k}
will continue compiling other object files even though it already
knows that linking them will be impossible.  In addition to continuing
after failed shell commands, @samp{make -k} will continue as much as
possible after discovering that it does not know how to make a target
or prerequisite file.  This will always cause an error message, but
without @samp{-k}, it is a fatal error (@pxref{Options Summary,
,Summary of Options}).@refill

The usual behavior of @code{make} assumes that your purpose is to get the
goals up to date; once @code{make} learns that this is impossible, it might
as well report the failure immediately.  The @samp{-k} flag says that the
real purpose is to test as much as possible of the changes made in the
program, perhaps to find several independent problems so that you can
correct them all before the next attempt to compile.  This is why Emacs'
@kbd{M-x compile} command passes the @samp{-k} flag by default.

@node Options Summary,  , Testing, Running
@section Summary of Options
@cindex options
@cindex flags
@cindex switches

Here is a table of all the options @code{make} understands:

@table @samp
@item -b
@cindex @code{-b}
@itemx -m
@cindex @code{-m}
These options are ignored for compatibility with other versions of @code{make}.

@item -C @var{dir}
@cindex @code{-C}
@itemx --directory=@var{dir}
@cindex @code{--directory}
Change to directory @var{dir} before reading the makefiles.  If multiple
@samp{-C} options are specified, each is interpreted relative to the
previous one: @samp{-C / -C etc} is equivalent to @samp{-C /etc}.
This is typically used with recursive invocations of @code{make}
(@pxref{Recursion, ,Recursive Use of @code{make}}).

@item -d
@cindex @code{-d}
@c Extra blank line here makes the table look better.

Print debugging information in addition to normal processing.  The
debugging information says which files are being considered for
remaking, which file-times are being compared and with what results,
which files actually need to be remade, which implicit rules are
considered and which are applied---everything interesting about how
@code{make} decides what to do.  The @code{-d} option is equivalent to
@samp{--debug=a} (see below).

@item --debug[=@var{options}]
@cindex @code{--debug}
@c Extra blank line here makes the table look better.

Print debugging information in addition to normal processing.  Various
levels and types of output can be chosen.  With no arguments, print the
``basic'' level of debugging.  Possible arguments are below; only the
first character is considered, and values must be comma- or
space-separated.

@table @code
@item a (@i{all})
All types of debugging output are enabled.  This is equivalent to using
@samp{-d}.

@item b (@i{basic})
Basic debugging prints each target that was found to be out-of-date, and
whether the build was successful or not.

@item v (@i{verbose})
A level above @samp{basic}; includes messages about which makefiles were
parsed, prerequisites that did not need to be rebuilt, etc.  This option
also enables @samp{basic} messages.

@item i (@i{implicit})
Prints messages describing the implicit rule searches for each target.
This option also enables @samp{basic} messages.

@item j (@i{jobs})
Prints messages giving details on the invocation of specific subcommands.

@item m (@i{makefile})
By default, the above messages are not enabled while trying to remake
the makefiles.  This option enables messages while rebuilding makefiles,
too.  Note that the @samp{all} option does enable this option.  This
option also enables @samp{basic} messages.
@end table

@item -e
@cindex @code{-e}
@itemx --environment-overrides
@cindex @code{--environment-overrides}
Give variables taken from the environment precedence
over variables from makefiles.
@xref{Environment, ,Variables from the Environment}.

@item -f @var{file}
@cindex @code{-f}
@itemx --file=@var{file}
@cindex @code{--file}
@itemx --makefile=@var{file}
@cindex @code{--makefile}
Read the file named @var{file} as a makefile.
@xref{Makefiles, ,Writing Makefiles}.

@item -h
@cindex @code{-h}
@itemx --help
@cindex @code{--help}
@c Extra blank line here makes the table look better.

Remind you of the options that @code{make} understands and then exit.

@item -i
@cindex @code{-i}
@itemx --ignore-errors
@cindex @code{--ignore-errors}
Ignore all errors in commands executed to remake files.
@xref{Errors, ,Errors in Commands}.

@item -I @var{dir}
@cindex @code{-I}
@itemx --include-dir=@var{dir}
@cindex @code{--include-dir}
Specifies a directory @var{dir} to search for included makefiles.
@xref{Include, ,Including Other Makefiles}.  If several @samp{-I}
options are used to specify several directories, the directories are
searched in the order specified.

@item -j [@var{jobs}]
@cindex @code{-j}
@itemx --jobs[=@var{jobs}]
@cindex @code{--jobs}
Specifies the number of jobs (commands) to run simultaneously.  With no
argument, @code{make} runs as many jobs simultaneously as possible.  If
there is more than one @samp{-j} option, the last one is effective.
@xref{Parallel, ,Parallel Execution},
for more information on how commands are run.
Note that this option is ignored on MS-DOS.

@item -k
@cindex @code{-k}
@itemx --keep-going
@cindex @code{--keep-going}
Continue as much as possible after an error.  While the target that
failed, and those that depend on it, cannot be remade, the other
prerequisites of these targets can be processed all the same.
@xref{Testing, ,Testing the Compilation of a Program}.

@item -l [@var{load}]
@cindex @code{-l}
@itemx --load-average[=@var{load}]
@cindex @code{--load-average}
@itemx --max-load[=@var{load}]
@cindex @code{--max-load}
Specifies that no new jobs (commands) should be started if there are
other jobs running and the load average is at least @var{load} (a
floating-point number).  With no argument, removes a previous load
limit.  @xref{Parallel, ,Parallel Execution}.

@item -n
@cindex @code{-n}
@itemx --just-print
@cindex @code{--just-print}
@itemx --dry-run
@cindex @code{--dry-run}
@itemx --recon
@cindex @code{--recon}
@c Extra blank line here makes the table look better.

Print the commands that would be executed, but do not execute them.
@xref{Instead of Execution, ,Instead of Executing the Commands}.

@item -o @var{file}
@cindex @code{-o}
@itemx --old-file=@var{file}
@cindex @code{--old-file}
@itemx --assume-old=@var{file}
@cindex @code{--assume-old}
Do not remake the file @var{file} even if it is older than its
prerequisites, and do not remake anything on account of changes in
@var{file}.  Essentially the file is treated as very old and its rules
are ignored.  @xref{Avoiding Compilation, ,Avoiding Recompilation of
Some Files}.@refill

@item -p
@cindex @code{-p}
@itemx --print-data-base
@cindex @code{--print-data-base}
@cindex data base of @code{make} rules
@cindex predefined rules and variables, printing
Print the data base (rules and variable values) that results from
reading the makefiles; then execute as usual or as otherwise specified.
This also prints the version information given by the @samp{-v} switch
(see below).  To print the data base without trying to remake any files,
use @w{@samp{make -qp}}.  To print the data base of predefined rules and
variables, use @w{@samp{make -p -f /dev/null}}.  The data base output
contains filename and linenumber information for command and variable
definitions, so it can be a useful debugging tool in complex environments.

@item -q
@cindex @code{-q}
@itemx --question
@cindex @code{--question}
``Question mode''.  Do not run any commands, or print anything; just
return an exit status that is zero if the specified targets are already
up to date, one if any remaking is required, or two if an error is
encountered.  @xref{Instead of Execution, ,Instead of Executing the
Commands}.@refill

@item -r
@cindex @code{-r}
@itemx --no-builtin-rules
@cindex @code{--no-builtin-rules}
Eliminate use of the built-in implicit rules (@pxref{Implicit Rules,
,Using Implicit Rules}).  You can still define your own by writing
pattern rules (@pxref{Pattern Rules, ,Defining and Redefining Pattern
Rules}).  The @samp{-r} option also clears out the default list of
suffixes for suffix rules (@pxref{Suffix Rules, ,Old-Fashioned Suffix
Rules}).  But you can still define your own suffixes with a rule for
@code{.SUFFIXES}, and then define your own suffix rules.  Note that only
@emph{rules} are affected by the @code{-r} option; default variables
remain in effect (@pxref{Implicit Variables, ,Variables Used by Implicit
Rules}); see the @samp{-R} option below.

@item -R
@cindex @code{-R}
@itemx --no-builtin-variables
@cindex @code{--no-builtin-variables}
Eliminate use of the built-in rule-specific variables (@pxref{Implicit
Variables, ,Variables Used by Implicit Rules}).  You can still define
your own, of course.  The @samp{-R} option also automatically enables
the @samp{-r} option (see above), since it doesn't make sense to have
implicit rules without any definitions for the variables that they use.

@item -s
@cindex @code{-s}
@itemx --silent
@cindex @code{--silent}
@itemx --quiet
@cindex @code{--quiet}
@c Extra blank line here makes the table look better.

Silent operation; do not print the commands as they are executed.
@xref{Echoing, ,Command Echoing}.

@item -S
@cindex @code{-S}
@itemx --no-keep-going
@cindex @code{--no-keep-going}
@itemx --stop
@cindex @code{--stop}
@c Extra blank line here makes the table look better.

Cancel the effect of the @samp{-k} option.  This is never necessary
except in a recursive @code{make} where @samp{-k} might be inherited
from the top-level @code{make} via @code{MAKEFLAGS}
(@pxref{Recursion, ,Recursive Use of @code{make}})
or if you set @samp{-k} in @code{MAKEFLAGS} in your environment.@refill

@item -t
@cindex @code{-t}
@itemx --touch
@cindex @code{--touch}
@c Extra blank line here makes the table look better.

Touch files (mark them up to date without really changing them)
instead of running their commands.  This is used to pretend that the
commands were done, in order to fool future invocations of
@code{make}.  @xref{Instead of Execution, ,Instead of Executing the Commands}.

@item -v
@cindex @code{-v}
@itemx --version
@cindex @code{--version}
Print the version of the @code{make} program plus a copyright, a list
of authors, and a notice that there is no warranty; then exit.

@item -w
@cindex @code{-w}
@itemx --print-directory
@cindex @code{--print-directory}
Print a message containing the working directory both before and after
executing the makefile.  This may be useful for tracking down errors
from complicated nests of recursive @code{make} commands.
@xref{Recursion, ,Recursive Use of @code{make}}.  (In practice, you
rarely need to specify this option since @samp{make} does it for you;
see @ref{-w Option, ,The @samp{--print-directory} Option}.)

@itemx --no-print-directory
@cindex @code{--no-print-directory}
Disable printing of the working directory under @code{-w}.
This option is useful when @code{-w} is turned on automatically,
but you do not want to see the extra messages.
@xref{-w Option, ,The @samp{--print-directory} Option}.

@item -W @var{file}
@cindex @code{-W}
@itemx --what-if=@var{file}
@cindex @code{--what-if}
@itemx --new-file=@var{file}
@cindex @code{--new-file}
@itemx --assume-new=@var{file}
@cindex @code{--assume-new}
Pretend that the target @var{file} has just been modified.  When used
with the @samp{-n} flag, this shows you what would happen if you were
to modify that file.  Without @samp{-n}, it is almost the same as
running a @code{touch} command on the given file before running
@code{make}, except that the modification time is changed only in the
imagination of @code{make}.
@xref{Instead of Execution, ,Instead of Executing the Commands}.

@item --warn-undefined-variables
@cindex @code{--warn-undefined-variables}
@cindex variables, warning for undefined
@cindex undefined variables, warning message
Issue a warning message whenever @code{make} sees a reference to an
undefined variable.  This can be helpful when you are trying to debug
makefiles which use variables in complex ways.
@end table

@node Implicit Rules, Archives, Running, Top
@chapter Using Implicit Rules
@cindex implicit rule
@cindex rule, implicit

Certain standard ways of remaking target files are used very often.  For
example, one customary way to make an object file is from a C source file
using the C compiler, @code{cc}.

@dfn{Implicit rules} tell @code{make} how to use customary techniques so
that you do not have to specify them in detail when you want to use
them.  For example, there is an implicit rule for C compilation.  File
names determine which implicit rules are run.  For example, C
compilation typically takes a @file{.c} file and makes a @file{.o} file.
So @code{make} applies the implicit rule for C compilation when it sees
this combination of file name endings.@refill

A chain of implicit rules can apply in sequence; for example, @code{make}
will remake a @file{.o} file from a @file{.y} file by way of a @file{.c} file.
@iftex
@xref{Chained Rules, ,Chains of Implicit Rules}.
@end iftex

The built-in implicit rules use several variables in their commands so
that, by changing the values of the variables, you can change the way the
implicit rule works.  For example, the variable @code{CFLAGS} controls the
flags given to the C compiler by the implicit rule for C compilation.
@iftex
@xref{Implicit Variables, ,Variables Used by Implicit Rules}.
@end iftex

You can define your own implicit rules by writing @dfn{pattern rules}.
@iftex
@xref{Pattern Rules, ,Defining and Redefining Pattern Rules}.
@end iftex

@dfn{Suffix rules} are a more limited way to define implicit rules.
Pattern rules are more general and clearer, but suffix rules are
retained for compatibility.
@iftex
@xref{Suffix Rules, ,Old-Fashioned Suffix Rules}.
@end iftex

@menu
* Using Implicit::              How to use an existing implicit rule
                                  to get the commands for updating a file.
* Catalogue of Rules::          A list of built-in implicit rules.
* Implicit Variables::          How to change what predefined rules do.
* Chained Rules::               How to use a chain of implicit rules.
* Pattern Rules::               How to define new implicit rules.
* Last Resort::                 How to defining commands for rules
                                  which cannot find any.
* Suffix Rules::                The old-fashioned style of implicit rule.
* Implicit Rule Search::        The precise algorithm for applying
                                  implicit rules.
@end menu

@node Using Implicit, Catalogue of Rules,  , Implicit Rules
@section Using Implicit Rules
@cindex implicit rule, how to use
@cindex rule, implicit, how to use

To allow @code{make} to find a customary method for updating a target file,
all you have to do is refrain from specifying commands yourself.  Either
write a rule with no command lines, or don't write a rule at all.  Then
@code{make} will figure out which implicit rule to use based on which
kind of source file exists or can be made.

For example, suppose the makefile looks like this:

@example
foo : foo.o bar.o
        cc -o foo foo.o bar.o $(CFLAGS) $(LDFLAGS)
@end example

@noindent
Because you mention @file{foo.o} but do not give a rule for it, @code{make}
will automatically look for an implicit rule that tells how to update it.
This happens whether or not the file @file{foo.o} currently exists.

If an implicit rule is found, it can supply both commands and one or
more prerequisites (the source files).  You would want to write a rule
for @file{foo.o} with no command lines if you need to specify additional
prerequisites, such as header files, that the implicit rule cannot
supply.

Each implicit rule has a target pattern and prerequisite patterns.  There may
be many implicit rules with the same target pattern.  For example, numerous
rules make @samp{.o} files: one, from a @samp{.c} file with the C compiler;
another, from a @samp{.p} file with the Pascal compiler; and so on.  The rule
that actually applies is the one whose prerequisites exist or can be made.
So, if you have a file @file{foo.c}, @code{make} will run the C compiler;
otherwise, if you have a file @file{foo.p}, @code{make} will run the Pascal
compiler; and so on.

Of course, when you write the makefile, you know which implicit rule you
want @code{make} to use, and you know it will choose that one because you
know which possible prerequisite files are supposed to exist.
@xref{Catalogue of Rules, ,Catalogue of Implicit Rules},
for a catalogue of all the predefined implicit rules.

Above, we said an implicit rule applies if the required prerequisites ``exist
or can be made''.  A file ``can be made'' if it is mentioned explicitly in
the makefile as a target or a prerequisite, or if an implicit rule can be
recursively found for how to make it.  When an implicit prerequisite is the
result of another implicit rule, we say that @dfn{chaining} is occurring.
@xref{Chained Rules, ,Chains of Implicit Rules}.

In general, @code{make} searches for an implicit rule for each target, and
for each double-colon rule, that has no commands.  A file that is mentioned
only as a prerequisite is considered a target whose rule specifies nothing,
so implicit rule search happens for it.  @xref{Implicit Rule Search, ,Implicit Rule Search Algorithm}, for the
details of how the search is done.

Note that explicit prerequisites do not influence implicit rule search.
For example, consider this explicit rule:

@example
foo.o: foo.p
@end example

@noindent
The prerequisite on @file{foo.p} does not necessarily mean that
@code{make} will remake @file{foo.o} according to the implicit rule to
make an object file, a @file{.o} file, from a Pascal source file, a
@file{.p} file.  For example, if @file{foo.c} also exists, the implicit
rule to make an object file from a C source file is used instead,
because it appears before the Pascal rule in the list of predefined
implicit rules (@pxref{Catalogue of Rules, , Catalogue of Implicit
Rules}).

If you do not want an implicit rule to be used for a target that has no
commands, you can give that target empty commands by writing a semicolon
(@pxref{Empty Commands, ,Defining Empty Commands}).

@node Catalogue of Rules, Implicit Variables, Using Implicit, Implicit Rules
@section Catalogue of Implicit Rules
@cindex implicit rule, predefined
@cindex rule, implicit, predefined

Here is a catalogue of predefined implicit rules which are always
available unless the makefile explicitly overrides or cancels them.
@xref{Canceling Rules, ,Canceling Implicit Rules}, for information on
canceling or overriding an implicit rule.  The @samp{-r} or
@samp{--no-builtin-rules} option cancels all predefined rules.

Not all of these rules will always be defined, even when the @samp{-r}
option is not given.  Many of the predefined implicit rules are
implemented in @code{make} as suffix rules, so which ones will be
defined depends on the @dfn{suffix list} (the list of prerequisites of
the special target @code{.SUFFIXES}).  The default suffix list is:
@code{.out}, @code{.a}, @code{.ln}, @code{.o}, @code{.c}, @code{.cc},
@code{.C}, @code{.p}, @code{.f}, @code{.F}, @code{.r}, @code{.y},
@code{.l}, @code{.s}, @code{.S}, @code{.mod}, @code{.sym}, @code{.def},
@code{.h}, @code{.info}, @code{.dvi}, @code{.tex}, @code{.texinfo},
@code{.texi}, @code{.txinfo}, @code{.w}, @code{.ch} @code{.web},
@code{.sh}, @code{.elc}, @code{.el}.  All of the implicit rules
described below whose prerequisites have one of these suffixes are
actually suffix rules.  If you modify the suffix list, the only
predefined suffix rules in effect will be those named by one or two of
the suffixes that are on the list you specify; rules whose suffixes fail
to be on the list are disabled.  @xref{Suffix Rules, ,Old-Fashioned
Suffix Rules}, for full details on suffix rules.

@table @asis
@item Compiling C programs
@cindex C, rule to compile
@pindex cc
@pindex gcc
@pindex .o
@pindex .c
@file{@var{n}.o} is made automatically from @file{@var{n}.c} with
a command of the form @samp{$(CC) -c $(CPPFLAGS) $(CFLAGS)}.@refill

@item Compiling C++ programs
@cindex C++, rule to compile
@pindex g++
@pindex .C
@pindex .cc
@file{@var{n}.o} is made automatically from @file{@var{n}.cc} or
@file{@var{n}.C} with a command of the form @samp{$(CXX) -c $(CPPFLAGS)
$(CXXFLAGS)}.  We encourage you to use the suffix @samp{.cc} for C++
source files instead of @samp{.C}.@refill

@item Compiling Pascal programs
@cindex Pascal, rule to compile
@pindex pc
@pindex .p
@file{@var{n}.o} is made automatically from @file{@var{n}.p}
with the command @samp{$(PC) -c $(PFLAGS)}.@refill

@item Compiling Fortran and Ratfor programs
@cindex Fortran, rule to compile
@cindex Ratfor, rule to compile
@pindex f77
@pindex .f
@pindex .r
@pindex .F
@file{@var{n}.o} is made automatically from @file{@var{n}.r},
@file{@var{n}.F} or @file{@var{n}.f} by running the
Fortran compiler.  The precise command used is as follows:@refill

@table @samp
@item .f
@samp{$(FC) -c $(FFLAGS)}.
@item .F
@samp{$(FC) -c $(FFLAGS) $(CPPFLAGS)}.
@item .r
@samp{$(FC) -c $(FFLAGS) $(RFLAGS)}.
@end table

@item Preprocessing Fortran and Ratfor programs
@file{@var{n}.f} is made automatically from @file{@var{n}.r} or
@file{@var{n}.F}.  This rule runs just the preprocessor to convert a
Ratfor or preprocessable Fortran program into a strict Fortran
program.  The precise command used is as follows:@refill

@table @samp
@item .F
@samp{$(FC) -F $(CPPFLAGS) $(FFLAGS)}.
@item .r
@samp{$(FC) -F $(FFLAGS) $(RFLAGS)}.
@end table

@item Compiling Modula-2 programs
@cindex Modula-2, rule to compile
@pindex m2c
@pindex .sym
@pindex .def
@pindex .mod
@file{@var{n}.sym} is made from @file{@var{n}.def} with a command
of the form @samp{$(M2C) $(M2FLAGS) $(DEFFLAGS)}.  @file{@var{n}.o}
is made from @file{@var{n}.mod}; the form is:
@w{@samp{$(M2C) $(M2FLAGS) $(MODFLAGS)}}.@refill

@need 1200
@item Assembling and preprocessing assembler programs
@cindex assembly, rule to compile
@pindex as
@pindex .s
@file{@var{n}.o} is made automatically from @file{@var{n}.s} by
running the assembler, @code{as}.  The precise command is
@samp{$(AS) $(ASFLAGS)}.@refill

@pindex .S
@file{@var{n}.s} is made automatically from @file{@var{n}.S} by
running the C preprocessor, @code{cpp}.  The precise command is
@w{@samp{$(CPP) $(CPPFLAGS)}}.

@item Linking a single object file
@cindex linking, predefined rule for
@pindex ld
@pindex .o
@file{@var{n}} is made automatically from @file{@var{n}.o} by running
the linker (usually called @code{ld}) via the C compiler.  The precise
command used is @w{@samp{$(CC) $(LDFLAGS) @var{n}.o $(LOADLIBES) $(LDLIBS)}}.

This rule does the right thing for a simple program with only one
source file.  It will also do the right thing if there are multiple
object files (presumably coming from various other source files), one
of which has a name matching that of the executable file.  Thus,

@example
x: y.o z.o
@end example

@noindent
when @file{x.c}, @file{y.c} and @file{z.c} all exist will execute:

@example
@group
cc -c x.c -o x.o
cc -c y.c -o y.o
cc -c z.c -o z.o
cc x.o y.o z.o -o x
rm -f x.o
rm -f y.o
rm -f z.o
@end group
@end example

@noindent
In more complicated cases, such as when there is no object file whose
name derives from the executable file name, you must write an explicit
command for linking.

Each kind of file automatically made into @samp{.o} object files will
be automatically linked by using the compiler (@samp{$(CC)},
@samp{$(FC)} or @samp{$(PC)}; the C compiler @samp{$(CC)} is used to
assemble @samp{.s} files) without the @samp{-c} option.  This could be
done by using the @samp{.o} object files as intermediates, but it is
faster to do the compiling and linking in one step, so that's how it's
done.@refill

@item Yacc for C programs
@pindex yacc
@cindex Yacc, rule to run
@pindex .y
@file{@var{n}.c} is made automatically from @file{@var{n}.y} by
running Yacc with the command @samp{$(YACC) $(YFLAGS)}.

@item Lex for C programs
@pindex lex
@cindex Lex, rule to run
@pindex .l
@file{@var{n}.c} is made automatically from @file{@var{n}.l} by
by running Lex.  The actual command is @samp{$(LEX) $(LFLAGS)}.

@item Lex for Ratfor programs
@file{@var{n}.r} is made automatically from @file{@var{n}.l} by
by running Lex.  The actual command is @samp{$(LEX) $(LFLAGS)}.

The convention of using the same suffix @samp{.l} for all Lex files
regardless of whether they produce C code or Ratfor code makes it
impossible for @code{make} to determine automatically which of the two
languages you are using in any particular case.  If @code{make} is
called upon to remake an object file from a @samp{.l} file, it must
guess which compiler to use.  It will guess the C compiler, because
that is more common.  If you are using Ratfor, make sure @code{make}
knows this by mentioning @file{@var{n}.r} in the makefile.  Or, if you
are using Ratfor exclusively, with no C files, remove @samp{.c} from
the list of implicit rule suffixes with:@refill

@example
@group
.SUFFIXES:
.SUFFIXES: .o .r .f .l @dots{}
@end group
@end example

@item Making Lint Libraries from C, Yacc, or Lex programs
@pindex lint
@cindex @code{lint}, rule to run
@pindex .ln
@file{@var{n}.ln} is made from @file{@var{n}.c} by running @code{lint}.
The precise command is @w{@samp{$(LINT) $(LINTFLAGS) $(CPPFLAGS) -i}}.
The same command is used on the C code produced from
@file{@var{n}.y} or @file{@var{n}.l}.@refill

@item @TeX{} and Web
@cindex @TeX{}, rule to run
@cindex Web, rule to run
@pindex tex
@pindex cweave
@pindex weave
@pindex tangle
@pindex ctangle
@pindex .dvi
@pindex .tex
@pindex .web
@pindex .w
@pindex .ch
@file{@var{n}.dvi} is made from @file{@var{n}.tex} with the command
@samp{$(TEX)}.  @file{@var{n}.tex} is made from @file{@var{n}.web} with
@samp{$(WEAVE)}, or from @file{@var{n}.w} (and from @file{@var{n}.ch} if
it exists or can be made) with @samp{$(CWEAVE)}.  @file{@var{n}.p} is
made from @file{@var{n}.web} with @samp{$(TANGLE)} and @file{@var{n}.c}
is made from @file{@var{n}.w} (and from @file{@var{n}.ch} if it exists
or can be made) with @samp{$(CTANGLE)}.@refill

@item Texinfo and Info
@cindex Texinfo, rule to format
@cindex Info, rule to format
@pindex texi2dvi
@pindex makeinfo
@pindex .texinfo
@pindex .info
@pindex .texi
@pindex .txinfo
@file{@var{n}.dvi} is made from @file{@var{n}.texinfo},
@file{@var{n}.texi}, or @file{@var{n}.txinfo}, with the command
@w{@samp{$(TEXI2DVI) $(TEXI2DVI_FLAGS)}}.  @file{@var{n}.info} is made from
@file{@var{n}.texinfo}, @file{@var{n}.texi}, or @file{@var{n}.txinfo}, with
the command @w{@samp{$(MAKEINFO) $(MAKEINFO_FLAGS)}}.

@item RCS
@cindex RCS, rule to extract from
@pindex co
@pindex ,v @r{(RCS file extension)}
Any file @file{@var{n}} is extracted if necessary from an RCS file
named either @file{@var{n},v} or @file{RCS/@var{n},v}.  The precise
command used is @w{@samp{$(CO) $(COFLAGS)}}.  @file{@var{n}} will not be
extracted from RCS if it already exists, even if the RCS file is
newer.  The rules for RCS are terminal
(@pxref{Match-Anything Rules, ,Match-Anything Pattern Rules}),
so RCS files cannot be generated from another source; they must
actually exist.@refill

@item SCCS
@cindex SCCS, rule to extract from
@pindex get
@pindex s. @r{(SCCS file prefix)}
Any file @file{@var{n}} is extracted if necessary from an SCCS file
named either @file{s.@var{n}} or @file{SCCS/s.@var{n}}.  The precise
command used is @w{@samp{$(GET) $(GFLAGS)}}.  The rules for SCCS are
terminal (@pxref{Match-Anything Rules, ,Match-Anything Pattern Rules}),
so SCCS files cannot be generated from another source; they must
actually exist.@refill

@pindex .sh
For the benefit of SCCS, a file @file{@var{n}} is copied from
@file{@var{n}.sh} and made executable (by everyone).  This is for
shell scripts that are checked into SCCS.  Since RCS preserves the
execution permission of a file, you do not need to use this feature
with RCS.@refill

We recommend that you avoid using of SCCS.  RCS is widely held to be
superior, and is also free.  By choosing free software in place of
comparable (or inferior) proprietary software, you support the free
software movement.
@end table

Usually, you want to change only the variables listed in the table
above, which are documented in the following section.

However, the commands in built-in implicit rules actually use
variables such as @code{COMPILE.c}, @code{LINK.p}, and
@code{PREPROCESS.S}, whose values contain the commands listed above.

@code{make} follows the convention that the rule to compile a
@file{.@var{x}} source file uses the variable @code{COMPILE.@var{x}}.
Similarly, the rule to produce an executable from a @file{.@var{x}}
file uses @code{LINK.@var{x}}; and the rule to preprocess a
@file{.@var{x}} file uses @code{PREPROCESS.@var{x}}.

@vindex OUTPUT_OPTION
Every rule that produces an object file uses the variable
@code{OUTPUT_OPTION}.  @code{make} defines this variable either to
contain @samp{-o $@@}, or to be empty, depending on a compile-time
option.  You need the @samp{-o} option to ensure that the output goes
into the right file when the source file is in a different directory,
as when using @code{VPATH} (@pxref{Directory Search}).  However,
compilers on some systems do not accept a @samp{-o} switch for object
files.  If you use such a system, and use @code{VPATH}, some
compilations will put their output in the wrong place.
A possible workaround for this problem is to give @code{OUTPUT_OPTION}
the value @w{@samp{; mv $*.o $@@}}.

@node Implicit Variables, Chained Rules, Catalogue of Rules, Implicit Rules
@section Variables Used by Implicit Rules
@cindex flags for compilers

The commands in built-in implicit rules make liberal use of certain
predefined variables.  You can alter these variables in the makefile,
with arguments to @code{make}, or in the environment to alter how the
implicit rules work without redefining the rules themselves.  You can
cancel all variables used by implicit rules with the @samp{-R} or
@samp{--no-builtin-variables} option.

For example, the command used to compile a C source file actually says
@samp{$(CC) -c $(CFLAGS) $(CPPFLAGS)}.  The default values of the variables
used are @samp{cc} and nothing, resulting in the command @samp{cc -c}.  By
redefining @samp{CC} to @samp{ncc}, you could cause @samp{ncc} to be
used for all C compilations performed by the implicit rule.  By redefining
@samp{CFLAGS} to be @samp{-g}, you could pass the @samp{-g} option to
each compilation.  @emph{All} implicit rules that do C compilation use
@samp{$(CC)} to get the program name for the compiler and @emph{all}
include @samp{$(CFLAGS)} among the arguments given to the compiler.@refill

The variables used in implicit rules fall into two classes: those that are
names of programs (like @code{CC}) and those that contain arguments for the
programs (like @code{CFLAGS}).  (The ``name of a program'' may also contain
some command arguments, but it must start with an actual executable program
name.)  If a variable value contains more than one argument, separate them
with spaces.

Here is a table of variables used as names of programs in built-in rules:

@table @code
@item AR
@vindex AR
Archive-maintaining program; default @samp{ar}.
@pindex ar

@item AS
@vindex AS
Program for doing assembly; default @samp{as}.
@pindex as

@item CC
@vindex CC
Program for compiling C programs; default @samp{cc}.
@pindex cc

@item CXX
@vindex CXX
Program for compiling C++ programs; default @samp{g++}.
@pindex g++

@item CO
@vindex CO
Program for extracting a file from RCS; default @samp{co}.
@pindex co

@item CPP
@vindex CPP
Program for running the C preprocessor, with results to standard output;
default @samp{$(CC) -E}.

@item FC
@vindex FC
Program for compiling or preprocessing Fortran and Ratfor programs;
default @samp{f77}.
@pindex f77

@item GET
@vindex GET
Program for extracting a file from SCCS; default @samp{get}.
@pindex get

@item LEX
@vindex LEX
Program to use to turn Lex grammars into C programs or Ratfor programs;
default @samp{lex}.
@pindex lex

@item PC
@vindex PC
Program for compiling Pascal programs; default @samp{pc}.
@pindex pc

@item YACC
@vindex YACC
Program to use to turn Yacc grammars into C programs; default @samp{yacc}.
@pindex yacc

@item YACCR
@vindex YACCR
Program to use to turn Yacc grammars into Ratfor
programs; default @samp{yacc -r}.

@item MAKEINFO
@vindex MAKEINFO
Program to convert a Texinfo source file into an Info file; default
@samp{makeinfo}.
@pindex makeinfo

@item TEX
@vindex TEX
Program to make @TeX{} @sc{dvi} files from @TeX{} source;
default @samp{tex}.
@pindex tex

@item TEXI2DVI
@vindex TEXI2DVI
Program to make @TeX{} @sc{dvi} files from Texinfo source;
default @samp{texi2dvi}.
@pindex texi2dvi

@item WEAVE
@vindex WEAVE
Program to translate Web into @TeX{}; default @samp{weave}.
@pindex weave

@item CWEAVE
@vindex CWEAVE
Program to translate C Web into @TeX{}; default @samp{cweave}.
@pindex cweave

@item TANGLE
@vindex TANGLE
Program to translate Web into Pascal; default @samp{tangle}.
@pindex tangle

@item CTANGLE
@vindex CTANGLE
Program to translate C Web into C; default @samp{ctangle}.
@pindex ctangle

@item RM
@vindex RM
Command to remove a file; default @samp{rm -f}.
@pindex rm
@end table

Here is a table of variables whose values are additional arguments for the
programs above.  The default values for all of these is the empty
string, unless otherwise noted.

@table @code
@item ARFLAGS
@vindex ARFLAGS
Flags to give the archive-maintaining program; default @samp{rv}.

@item ASFLAGS
@vindex ASFLAGS
Extra flags to give to the assembler (when explicitly
invoked on a @samp{.s} or @samp{.S} file).

@item CFLAGS
@vindex CFLAGS
Extra flags to give to the C compiler.

@item CXXFLAGS
@vindex CXXFLAGS
Extra flags to give to the C++ compiler.

@item COFLAGS
@vindex COFLAGS
Extra flags to give to the RCS @code{co} program.

@item CPPFLAGS
@vindex CPPFLAGS
Extra flags to give to the C preprocessor and programs
that use it (the C and Fortran compilers).

@item FFLAGS
@vindex FFLAGS
Extra flags to give to the Fortran compiler.

@item GFLAGS
@vindex GFLAGS
Extra flags to give to the SCCS @code{get} program.

@item LDFLAGS
@vindex LDFLAGS
Extra flags to give to compilers when they are
supposed to invoke the linker, @samp{ld}.

@item LFLAGS
@vindex LFLAGS
Extra flags to give to Lex.

@item PFLAGS
@vindex PFLAGS
Extra flags to give to the Pascal compiler.

@item RFLAGS
@vindex RFLAGS
Extra flags to give to the Fortran compiler for Ratfor programs.

@item YFLAGS
@vindex YFLAGS
Extra flags to give to Yacc.
@end table

@node Chained Rules, Pattern Rules, Implicit Variables, Implicit Rules
@section Chains of Implicit Rules

@cindex chains of rules
@cindex rule, implicit, chains of
Sometimes a file can be made by a sequence of implicit rules.  For example,
a file @file{@var{n}.o} could be made from @file{@var{n}.y} by running
first Yacc and then @code{cc}.  Such a sequence is called a @dfn{chain}.

If the file @file{@var{n}.c} exists, or is mentioned in the makefile, no
special searching is required: @code{make} finds that the object file can
be made by C compilation from @file{@var{n}.c}; later on, when considering
how to make @file{@var{n}.c}, the rule for running Yacc is
used.  Ultimately both @file{@var{n}.c} and @file{@var{n}.o} are
updated.@refill

@cindex intermediate files
@cindex files, intermediate
However, even if @file{@var{n}.c} does not exist and is not mentioned,
@code{make} knows how to envision it as the missing link between
@file{@var{n}.o} and @file{@var{n}.y}!  In this case, @file{@var{n}.c} is
called an @dfn{intermediate file}.  Once @code{make} has decided to use the
intermediate file, it is entered in the data base as if it had been
mentioned in the makefile, along with the implicit rule that says how to
create it.@refill

Intermediate files are remade using their rules just like all other
files.  But intermediate files are treated differently in two ways.

The first difference is what happens if the intermediate file does not
exist.  If an ordinary file @var{b} does not exist, and @code{make}
considers a target that depends on @var{b}, it invariably creates
@var{b} and then updates the target from @var{b}.  But if @var{b} is an
intermediate file, then @code{make} can leave well enough alone.  It
won't bother updating @var{b}, or the ultimate target, unless some
prerequisite of @var{b} is newer than that target or there is some other
reason to update that target.

The second difference is that if @code{make} @emph{does} create @var{b}
in order to update something else, it deletes @var{b} later on after it
is no longer needed.  Therefore, an intermediate file which did not
exist before @code{make} also does not exist after @code{make}.
@code{make} reports the deletion to you by printing a @samp{rm -f}
command showing which file it is deleting.

Ordinarily, a file cannot be intermediate if it is mentioned in the
makefile as a target or prerequisite.  However, you can explicitly mark a
file as intermediate by listing it as a prerequisite of the special target
@code{.INTERMEDIATE}.  This takes effect even if the file is mentioned
explicitly in some other way.

@cindex intermediate files, preserving
@cindex preserving intermediate files
@cindex secondary files
You can prevent automatic deletion of an intermediate file by marking it
as a @dfn{secondary} file.  To do this, list it as a prerequisite of the
special target @code{.SECONDARY}.  When a file is secondary, @code{make}
will not create the file merely because it does not already exist, but
@code{make} does not automatically delete the file.  Marking a file as
secondary also marks it as intermediate.

You can list the target pattern of an implicit rule (such as @samp{%.o})
as a prerequisite of the special target @code{.PRECIOUS} to preserve
intermediate files made by implicit rules whose target patterns match
that file's name; see @ref{Interrupts}.@refill
@cindex preserving with @code{.PRECIOUS}
@cindex @code{.PRECIOUS} intermediate files

A chain can involve more than two implicit rules.  For example, it is
possible to make a file @file{foo} from @file{RCS/foo.y,v} by running RCS,
Yacc and @code{cc}.  Then both @file{foo.y} and @file{foo.c} are
intermediate files that are deleted at the end.@refill

No single implicit rule can appear more than once in a chain.  This means
that @code{make} will not even consider such a ridiculous thing as making
@file{foo} from @file{foo.o.o} by running the linker twice.  This
constraint has the added benefit of preventing any infinite loop in the
search for an implicit rule chain.

There are some special implicit rules to optimize certain cases that would
otherwise be handled by rule chains.  For example, making @file{foo} from
@file{foo.c} could be handled by compiling and linking with separate
chained rules, using @file{foo.o} as an intermediate file.  But what
actually happens is that a special rule for this case does the compilation
and linking with a single @code{cc} command.  The optimized rule is used in
preference to the step-by-step chain because it comes earlier in the
ordering of rules.

@node Pattern Rules, Last Resort, Chained Rules, Implicit Rules
@section Defining and Redefining Pattern Rules

You define an implicit rule by writing a @dfn{pattern rule}.  A pattern
rule looks like an ordinary rule, except that its target contains the
character @samp{%} (exactly one of them).  The target is considered a
pattern for matching file names; the @samp{%} can match any nonempty
substring, while other characters match only themselves.  The prerequisites
likewise use @samp{%} to show how their names relate to the target name.

Thus, a pattern rule @samp{%.o : %.c} says how to make any file
@file{@var{stem}.o} from another file @file{@var{stem}.c}.@refill

Note that expansion using @samp{%} in pattern rules occurs
@strong{after} any variable or function expansions, which take place
when the makefile is read.  @xref{Using Variables, , How to Use
Variables}, and @ref{Functions, ,Functions for Transforming Text}.

@menu
* Pattern Intro::               An introduction to pattern rules.
* Pattern Examples::            Examples of pattern rules.
* Automatic::                   How to use automatic variables in the
                                  commands of implicit rules.
* Pattern Match::               How patterns match.
* Match-Anything Rules::        Precautions you should take prior to
                                  defining rules that can match any
                                  target file whatever.
* Canceling Rules::             How to override or cancel built-in rules.
@end menu

@node Pattern Intro, Pattern Examples,  , Pattern Rules
@subsection Introduction to Pattern Rules
@cindex pattern rule
@cindex rule, pattern

A pattern rule contains the character @samp{%} (exactly one of them)
in the target; otherwise, it looks exactly like an ordinary rule.  The
target is a pattern for matching file names; the @samp{%} matches any
nonempty substring, while other characters match only themselves.
@cindex target pattern, implicit
@cindex @code{%}, in pattern rules

For example, @samp{%.c} as a pattern matches any file name that ends in
@samp{.c}.  @samp{s.%.c} as a pattern matches any file name that starts
with @samp{s.}, ends in @samp{.c} and is at least five characters long.
(There must be at least one character to match the @samp{%}.)  The substring
that the @samp{%} matches is called the @dfn{stem}.@refill

@samp{%} in a prerequisite of a pattern rule stands for the same stem
that was matched by the @samp{%} in the target.  In order for
the pattern rule to apply, its target pattern must match the file name
under consideration, and its prerequisite patterns must name files that
exist or can be made.  These files become prerequisites of the target.
@cindex prerequisite pattern, implicit

Thus, a rule of the form

@example
%.o : %.c ; @var{command}@dots{}
@end example

@noindent
specifies how to make a file @file{@var{n}.o}, with another file
@file{@var{n}.c} as its prerequisite, provided that @file{@var{n}.c}
exists or can be made.

There may also be prerequisites that do not use @samp{%}; such a prerequisite
attaches to every file made by this pattern rule.  These unvarying
prerequisites are useful occasionally.

A pattern rule need not have any prerequisites that contain @samp{%}, or
in fact any prerequisites at all.  Such a rule is effectively a general
wildcard.  It provides a way to make any file that matches the target
pattern.  @xref{Last Resort}.

@c !!! The end of of this paragraph should be rewritten.  --bob
Pattern rules may have more than one target.  Unlike normal rules, this
does not act as many different rules with the same prerequisites and
commands.  If a pattern rule has multiple targets, @code{make} knows that
the rule's commands are responsible for making all of the targets.  The
commands are executed only once to make all the targets.  When searching
for a pattern rule to match a target, the target patterns of a rule other
than the one that matches the target in need of a rule are incidental:
@code{make} worries only about giving commands and prerequisites to the file
presently in question.  However, when this file's commands are run, the
other targets are marked as having been updated themselves.
@cindex multiple targets, in pattern rule
@cindex target, multiple in pattern rule

The order in which pattern rules appear in the makefile is important
since this is the order in which they are considered.
Of equally applicable
rules, only the first one found is used.  The rules you write take precedence
over those that are built in.  Note however, that a rule whose
prerequisites actually exist or are mentioned always takes priority over a
rule with prerequisites that must be made by chaining other implicit rules.
@cindex pattern rules, order of
@cindex order of pattern rules

@node Pattern Examples, Automatic, Pattern Intro, Pattern Rules
@subsection Pattern Rule Examples

Here are some examples of pattern rules actually predefined in
@code{make}.  First, the rule that compiles @samp{.c} files into @samp{.o}
files:@refill

@example
%.o : %.c
        $(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@@
@end example

@noindent
defines a rule that can make any file @file{@var{x}.o} from
@file{@var{x}.c}.  The command uses the automatic variables @samp{$@@} and
@samp{$<} to substitute the names of the target file and the source file
in each case where the rule applies (@pxref{Automatic, ,Automatic Variables}).@refill

Here is a second built-in rule:

@example
% :: RCS/%,v
        $(CO) $(COFLAGS) $<
@end example

@noindent
defines a rule that can make any file @file{@var{x}} whatsoever from a
corresponding file @file{@var{x},v} in the subdirectory @file{RCS}.  Since
the target is @samp{%}, this rule will apply to any file whatever, provided
the appropriate prerequisite file exists.  The double colon makes the rule
@dfn{terminal}, which means that its prerequisite may not be an intermediate
file (@pxref{Match-Anything Rules, ,Match-Anything Pattern Rules}).@refill

@need 500
This pattern rule has two targets:

@example
@group
%.tab.c %.tab.h: %.y
        bison -d $<
@end group
@end example

@noindent
@c The following paragraph is rewritten to avoid overfull hboxes
This tells @code{make} that the command @samp{bison -d @var{x}.y} will
make both @file{@var{x}.tab.c} and @file{@var{x}.tab.h}.  If the file
@file{foo} depends on the files @file{parse.tab.o} and @file{scan.o}
and the file @file{scan.o} depends on the file @file{parse.tab.h},
when @file{parse.y} is changed, the command @samp{bison -d parse.y}
will be executed only once, and the prerequisites of both
@file{parse.tab.o} and @file{scan.o} will be satisfied.  (Presumably
the file @file{parse.tab.o} will be recompiled from @file{parse.tab.c}
and the file @file{scan.o} from @file{scan.c}, while @file{foo} is
linked from @file{parse.tab.o}, @file{scan.o}, and its other
prerequisites, and it will execute happily ever after.)@refill

@node Automatic, Pattern Match, Pattern Examples, Pattern Rules
@subsection Automatic Variables
@cindex automatic variables
@cindex variables, automatic
@cindex variables, and implicit rule

Suppose you are writing a pattern rule to compile a @samp{.c} file into a
@samp{.o} file: how do you write the @samp{cc} command so that it operates
on the right source file name?  You cannot write the name in the command,
because the name is different each time the implicit rule is applied.

What you do is use a special feature of @code{make}, the @dfn{automatic
variables}.  These variables have values computed afresh for each rule that
is executed, based on the target and prerequisites of the rule.  In this
example, you would use @samp{$@@} for the object file name and @samp{$<}
for the source file name.

Here is a table of automatic variables:

@table @code
@vindex $@@
@vindex @@ @r{(automatic variable)}
@item $@@
The file name of the target of the rule.  If the target is an archive
member, then @samp{$@@} is the name of the archive file.  In a pattern
rule that has multiple targets (@pxref{Pattern Intro, ,Introduction to
Pattern Rules}), @samp{$@@} is the name of whichever target caused the
rule's commands to be run.

@vindex $%
@vindex % @r{(automatic variable)}
@item $%
The target member name, when the target is an archive member.
@xref{Archives}.  For example, if the target is @file{foo.a(bar.o)} then
@samp{$%} is @file{bar.o} and @samp{$@@} is @file{foo.a}.  @samp{$%} is
empty when the target is not an archive member.

@vindex $<
@vindex < @r{(automatic variable)}
@item $<
The name of the first prerequisite.  If the target got its commands from
an implicit rule, this will be the first prerequisite added by the
implicit rule (@pxref{Implicit Rules}).

@vindex $?
@vindex ? @r{(automatic variable)}
@item $?
The names of all the prerequisites that are newer than the target, with
spaces between them.  For prerequisites which are archive members, only
the member named is used (@pxref{Archives}).
@cindex prerequisites, list of changed
@cindex list of changed prerequisites

@vindex $^
@vindex ^ @r{(automatic variable)}
@item $^
The names of all the prerequisites, with spaces between them.  For
prerequisites which are archive members, only the member named is used
(@pxref{Archives}).  A target has only one prerequisite on each other file
it depends on, no matter how many times each file is listed as a
prerequisite.  So if you list a prerequisite more than once for a target,
the value of @code{$^} contains just one copy of the name.
@cindex prerequisites, list of all
@cindex list of all prerequisites

@vindex $+
@vindex + @r{(automatic variable)}
@item $+
This is like @samp{$^}, but prerequisites listed more than once are
duplicated in the order they were listed in the makefile.  This is
primarily useful for use in linking commands where it is meaningful to
repeat library file names in a particular order.

@vindex $*
@vindex * @r{(automatic variable)}
@item $*
The stem with which an implicit rule matches (@pxref{Pattern Match, ,How
Patterns Match}).  If the target is @file{dir/a.foo.b} and the target
pattern is @file{a.%.b} then the stem is @file{dir/foo}.  The stem is
useful for constructing names of related files.@refill
@cindex stem, variable for

In a static pattern rule, the stem is part of the file name that matched
the @samp{%} in the target pattern.

In an explicit rule, there is no stem; so @samp{$*} cannot be determined
in that way.  Instead, if the target name ends with a recognized suffix
(@pxref{Suffix Rules, ,Old-Fashioned Suffix Rules}), @samp{$*} is set to
the target name minus the suffix.  For example, if the target name is
@samp{foo.c}, then @samp{$*} is set to @samp{foo}, since @samp{.c} is a
suffix.  GNU @code{make} does this bizarre thing only for compatibility
with other implementations of @code{make}.  You should generally avoid
using @samp{$*} except in implicit rules or static pattern rules.@refill

If the target name in an explicit rule does not end with a recognized
suffix, @samp{$*} is set to the empty string for that rule.
@end table

@samp{$?} is useful even in explicit rules when you wish to operate on only
the prerequisites that have changed.  For example, suppose that an archive
named @file{lib} is supposed to contain copies of several object files.
This rule copies just the changed object files into the archive:

@example
@group
lib: foo.o bar.o lose.o win.o
        ar r lib $?
@end group
@end example

Of the variables listed above, four have values that are single file
names, and three have values that are lists of file names.  These seven
have variants that get just the file's directory name or just the file
name within the directory.  The variant variables' names are formed by
appending @samp{D} or @samp{F}, respectively.  These variants are
semi-obsolete in GNU @code{make} since the functions @code{dir} and
@code{notdir} can be used to get a similar effect (@pxref{File Name
Functions, , Functions for File Names}).  Note, however, that the
@samp{D} variants all omit the trailing slash which always appears in
the output of the @code{dir} function.  Here is a table of the variants:

@table @samp
@vindex $(@@D)
@vindex @@D @r{(automatic variable)}
@item $(@@D)
The directory part of the file name of the target, with the trailing
slash removed.  If the value of @samp{$@@} is @file{dir/foo.o} then
@samp{$(@@D)} is @file{dir}.  This value is @file{.} if @samp{$@@} does
not contain a slash.

@vindex $(@@F)
@vindex @@F @r{(automatic variable)}
@item $(@@F)
The file-within-directory part of the file name of the target.  If the
value of @samp{$@@} is @file{dir/foo.o} then @samp{$(@@F)} is
@file{foo.o}.  @samp{$(@@F)} is equivalent to @samp{$(notdir $@@)}.

@vindex $(*D)
@vindex *D @r{(automatic variable)}
@item $(*D)
@vindex $(*F)
@vindex *F @r{(automatic variable)}
@itemx $(*F)
The directory part and the file-within-directory
part of the stem; @file{dir} and @file{foo} in this example.

@vindex $(%D)
@vindex %D @r{(automatic variable)}
@item $(%D)
@vindex $(%F)
@vindex %F @r{(automatic variable)}
@itemx $(%F)
The directory part and the file-within-directory part of the target
archive member name.  This makes sense only for archive member targets
of the form @file{@var{archive}(@var{member})} and is useful only when
@var{member} may contain a directory name.  (@xref{Archive Members,
,Archive Members as Targets}.)

@vindex $(<D)
@vindex <D @r{(automatic variable)}
@item $(<D)
@vindex $(<F)
@vindex <F @r{(automatic variable)}
@itemx $(<F)
The directory part and the file-within-directory
part of the first prerequisite.

@vindex $(^D)
@vindex ^D @r{(automatic variable)}
@item $(^D)
@vindex $(^F)
@vindex ^F @r{(automatic variable)}
@itemx $(^F)
Lists of the directory parts and the file-within-directory
parts of all prerequisites.

@vindex $(?D)
@vindex ?D @r{(automatic variable)}
@item $(?D)
@vindex $(?F)
@vindex ?F @r{(automatic variable)}
@itemx $(?F)
Lists of the directory parts and the file-within-directory parts of
all prerequisites that are newer than the target.
@end table

Note that we use a special stylistic convention when we talk about these
automatic variables; we write ``the value of @samp{$<}'', rather than
@w{``the variable @code{<}''} as we would write for ordinary variables
such as @code{objects} and @code{CFLAGS}.  We think this convention
looks more natural in this special case.  Please do not assume it has a
deep significance; @samp{$<} refers to the variable named @code{<} just
as @samp{$(CFLAGS)} refers to the variable named @code{CFLAGS}.
You could just as well use @samp{$(<)} in place of @samp{$<}.

@node Pattern Match, Match-Anything Rules, Automatic, Pattern Rules
@subsection How Patterns Match

@cindex stem
A target pattern is composed of a @samp{%} between a prefix and a suffix,
either or both of which may be empty.  The pattern matches a file name only
if the file name starts with the prefix and ends with the suffix, without
overlap.  The text between the prefix and the suffix is called the
@dfn{stem}.  Thus, when the pattern @samp{%.o} matches the file name
@file{test.o}, the stem is @samp{test}.  The pattern rule prerequisites are
turned into actual file names by substituting the stem for the character
@samp{%}.  Thus, if in the same example one of the prerequisites is written
as @samp{%.c}, it expands to @samp{test.c}.@refill

When the target pattern does not contain a slash (and it usually does
not), directory names in the file names are removed from the file name
before it is compared with the target prefix and suffix.  After the
comparison of the file name to the target pattern, the directory
names, along with the slash that ends them, are added on to the
prerequisite file names generated from the pattern rule's prerequisite
patterns and the file name. The directories are ignored only for the
purpose of finding an implicit rule to use, not in the application of
that rule.  Thus, @samp{e%t} matches the file name @file{src/eat},
with @samp{src/a} as the stem.  When prerequisites are turned into file
names, the directories from the stem are added at the front, while the
rest of the stem is substituted for the @samp{%}.  The stem
@samp{src/a} with a prerequisite pattern @samp{c%r} gives the file name
@file{src/car}.@refill

@node Match-Anything Rules, Canceling Rules, Pattern Match, Pattern Rules
@subsection Match-Anything Pattern Rules

@cindex match-anything rule
@cindex terminal rule
When a pattern rule's target is just @samp{%}, it matches any file name
whatever.  We call these rules @dfn{match-anything} rules.  They are very
useful, but it can take a lot of time for @code{make} to think about them,
because it must consider every such rule for each file name listed either
as a target or as a prerequisite.

Suppose the makefile mentions @file{foo.c}.  For this target, @code{make}
would have to consider making it by linking an object file @file{foo.c.o},
or by C compilation-and-linking in one step from @file{foo.c.c}, or by
Pascal compilation-and-linking from @file{foo.c.p}, and many other
possibilities.

We know these possibilities are ridiculous since @file{foo.c} is a C source
file, not an executable.  If @code{make} did consider these possibilities,
it would ultimately reject them, because files such as @file{foo.c.o} and
@file{foo.c.p} would not exist.  But these possibilities are so
numerous that @code{make} would run very slowly if it had to consider
them.@refill

To gain speed, we have put various constraints on the way @code{make}
considers match-anything rules.  There are two different constraints that
can be applied, and each time you define a match-anything rule you must
choose one or the other for that rule.

One choice is to mark the match-anything rule as @dfn{terminal} by defining
it with a double colon.  When a rule is terminal, it does not apply unless
its prerequisites actually exist.  Prerequisites that could be made with
other implicit rules are not good enough.  In other words, no further
chaining is allowed beyond a terminal rule.

For example, the built-in implicit rules for extracting sources from RCS
and SCCS files are terminal; as a result, if the file @file{foo.c,v} does
not exist, @code{make} will not even consider trying to make it as an
intermediate file from @file{foo.c,v.o} or from @file{RCS/SCCS/s.foo.c,v}.
RCS and SCCS files are generally ultimate source files, which should not be
remade from any other files; therefore, @code{make} can save time by not
looking for ways to remake them.@refill

If you do not mark the match-anything rule as terminal, then it is
nonterminal.  A nonterminal match-anything rule cannot apply to a file name
that indicates a specific type of data.  A file name indicates a specific
type of data if some non-match-anything implicit rule target matches it.

For example, the file name @file{foo.c} matches the target for the pattern
rule @samp{%.c : %.y} (the rule to run Yacc).  Regardless of whether this
rule is actually applicable (which happens only if there is a file
@file{foo.y}), the fact that its target matches is enough to prevent
consideration of any nonterminal match-anything rules for the file
@file{foo.c}.  Thus, @code{make} will not even consider trying to make
@file{foo.c} as an executable file from @file{foo.c.o}, @file{foo.c.c},
@file{foo.c.p}, etc.@refill

The motivation for this constraint is that nonterminal match-anything
rules are used for making files containing specific types of data (such as
executable files) and a file name with a recognized suffix indicates some
other specific type of data (such as a C source file).

Special built-in dummy pattern rules are provided solely to recognize
certain file names so that nonterminal match-anything rules will not be
considered.  These dummy rules have no prerequisites and no commands, and
they are ignored for all other purposes.  For example, the built-in
implicit rule

@example
%.p :
@end example

@noindent
exists to make sure that Pascal source files such as @file{foo.p} match a
specific target pattern and thereby prevent time from being wasted looking
for @file{foo.p.o} or @file{foo.p.c}.

Dummy pattern rules such as the one for @samp{%.p} are made for every
suffix listed as valid for use in suffix rules (@pxref{Suffix Rules, ,Old-Fashioned Suffix Rules}).

@node Canceling Rules,  , Match-Anything Rules, Pattern Rules
@subsection Canceling Implicit Rules

You can override a built-in implicit rule (or one you have defined
yourself) by defining a new pattern rule with the same target and
prerequisites, but different commands.  When the new rule is defined, the
built-in one is replaced.  The new rule's position in the sequence of
implicit rules is determined by where you write the new rule.

You can cancel a built-in implicit rule by defining a pattern rule with the
same target and prerequisites, but no commands.  For example, the following
would cancel the rule that runs the assembler:

@example
%.o : %.s
@end example

@node Last Resort, Suffix Rules, Pattern Rules, Implicit Rules
@section Defining Last-Resort Default Rules
@cindex last-resort default rules
@cindex default rules, last-resort

You can define a last-resort implicit rule by writing a terminal
match-anything pattern rule with no prerequisites (@pxref{Match-Anything
Rules}).  This is just like any other pattern rule; the only thing
special about it is that it will match any target.  So such a rule's
commands are used for all targets and prerequisites that have no commands
of their own and for which no other implicit rule applies.

For example, when testing a makefile, you might not care if the source
files contain real data, only that they exist.  Then you might do this:

@example
%::
        touch $@@
@end example

@noindent
to cause all the source files needed (as prerequisites) to be created
automatically.

@findex .DEFAULT
You can instead define commands to be used for targets for which there
are no rules at all, even ones which don't specify commands.  You do
this by writing a rule for the target @code{.DEFAULT}.  Such a rule's
commands are used for all prerequisites which do not appear as targets in
any explicit rule, and for which no implicit rule applies.  Naturally,
there is no @code{.DEFAULT} rule unless you write one.

If you use @code{.DEFAULT} with no commands or prerequisites:

@example
.DEFAULT:
@end example

@noindent
the commands previously stored for @code{.DEFAULT} are cleared.
Then @code{make} acts as if you had never defined @code{.DEFAULT} at all.

If you do not want a target to get the commands from a match-anything
pattern rule or @code{.DEFAULT}, but you also do not want any commands
to be run for the target, you can give it empty commands (@pxref{Empty
Commands, ,Defining Empty Commands}).@refill

You can use a last-resort rule to override part of another makefile.
@xref{Overriding Makefiles, , Overriding Part of Another Makefile}.

@node Suffix Rules, Implicit Rule Search, Last Resort, Implicit Rules
@section Old-Fashioned Suffix Rules
@cindex old-fashioned suffix rules
@cindex suffix rule

@dfn{Suffix rules} are the old-fashioned way of defining implicit rules for
@code{make}.  Suffix rules are obsolete because pattern rules are more
general and clearer.  They are supported in GNU @code{make} for
compatibility with old makefiles.  They come in two kinds:
@dfn{double-suffix} and @dfn{single-suffix}.@refill

A double-suffix rule is defined by a pair of suffixes: the target suffix
and the source suffix.  It matches any file whose name ends with the
target suffix.  The corresponding implicit prerequisite is made by
replacing the target suffix with the source suffix in the file name.  A
two-suffix rule whose target and source suffixes are @samp{.o} and
@samp{.c} is equivalent to the pattern rule @samp{%.o : %.c}.

A single-suffix rule is defined by a single suffix, which is the source
suffix.  It matches any file name, and the corresponding implicit
prerequisite name is made by appending the source suffix.  A single-suffix
rule whose source suffix is @samp{.c} is equivalent to the pattern rule
@samp{% : %.c}.

Suffix rule definitions are recognized by comparing each rule's target
against a defined list of known suffixes.  When @code{make} sees a rule
whose target is a known suffix, this rule is considered a single-suffix
rule.  When @code{make} sees a rule whose target is two known suffixes
concatenated, this rule is taken as a double-suffix rule.

For example, @samp{.c} and @samp{.o} are both on the default list of
known suffixes.  Therefore, if you define a rule whose target is
@samp{.c.o}, @code{make} takes it to be a double-suffix rule with source
suffix @samp{.c} and target suffix @samp{.o}.  Here is the old-fashioned
way to define the rule for compiling a C source file:@refill

@example
.c.o:
        $(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@@ $<
@end example

Suffix rules cannot have any prerequisites of their own.  If they have any,
they are treated as normal files with funny names, not as suffix rules.
Thus, the rule:

@example
.c.o: foo.h
        $(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@@ $<
@end example

@noindent
tells how to make the file @file{.c.o} from the prerequisite file
@file{foo.h}, and is not at all like the pattern rule:

@example
%.o: %.c foo.h
        $(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@@ $<
@end example

@noindent
which tells how to make @samp{.o} files from @samp{.c} files, and makes all
@samp{.o} files using this pattern rule also depend on @file{foo.h}.

Suffix rules with no commands are also meaningless.  They do not remove
previous rules as do pattern rules with no commands (@pxref{Canceling
Rules, , Canceling Implicit Rules}).  They simply enter the suffix or pair of suffixes concatenated as
a target in the data base.@refill

@findex .SUFFIXES
The known suffixes are simply the names of the prerequisites of the special
target @code{.SUFFIXES}.  You can add your own suffixes by writing a rule
for @code{.SUFFIXES} that adds more prerequisites, as in:

@example
.SUFFIXES: .hack .win
@end example

@noindent
which adds @samp{.hack} and @samp{.win} to the end of the list of suffixes.

If you wish to eliminate the default known suffixes instead of just adding
to them, write a rule for @code{.SUFFIXES} with no prerequisites.  By
special dispensation, this eliminates all existing prerequisites of
@code{.SUFFIXES}.  You can then write another rule to add the suffixes you
want.  For example,

@example
@group
.SUFFIXES:            # @r{Delete the default suffixes}
.SUFFIXES: .c .o .h   # @r{Define our suffix list}
@end group
@end example

The @samp{-r} or @samp{--no-builtin-rules} flag causes the default
list of suffixes to be empty.

@vindex SUFFIXES
The variable @code{SUFFIXES} is defined to the default list of suffixes
before @code{make} reads any makefiles.  You can change the list of suffixes
with a rule for the special target @code{.SUFFIXES}, but that does not alter
this variable.

@node Implicit Rule Search,  , Suffix Rules, Implicit Rules
@section Implicit Rule Search Algorithm
@cindex implicit rule, search algorithm
@cindex search algorithm, implicit rule

Here is the procedure @code{make} uses for searching for an implicit rule
for a target @var{t}.  This procedure is followed for each double-colon
rule with no commands, for each target of ordinary rules none of which have
commands, and for each prerequisite that is not the target of any rule.  It
is also followed recursively for prerequisites that come from implicit
rules, in the search for a chain of rules.

Suffix rules are not mentioned in this algorithm because suffix rules are
converted to equivalent pattern rules once the makefiles have been read in.

For an archive member target of the form
@samp{@var{archive}(@var{member})}, the following algorithm is run
twice, first using the entire target name @var{t}, and second using
@samp{(@var{member})} as the target @var{t} if the first run found no
rule.@refill

@enumerate
@item
Split @var{t} into a directory part, called @var{d}, and the rest,
called @var{n}.  For example, if @var{t} is @samp{src/foo.o}, then
@var{d} is @samp{src/} and @var{n} is @samp{foo.o}.@refill

@item
Make a list of all the pattern rules one of whose targets matches
@var{t} or @var{n}.  If the target pattern contains a slash, it is
matched against @var{t}; otherwise, against @var{n}.

@item
If any rule in that list is @emph{not} a match-anything rule, then
remove all nonterminal match-anything rules from the list.

@item
Remove from the list all rules with no commands.

@item
For each pattern rule in the list:

@enumerate a
@item
Find the stem @var{s}, which is the nonempty part of @var{t} or @var{n}
matched by the @samp{%} in the target pattern.@refill

@item
Compute the prerequisite names by substituting @var{s} for @samp{%}; if
the target pattern does not contain a slash, append @var{d} to
the front of each prerequisite name.@refill

@item
Test whether all the prerequisites exist or ought to exist.  (If a
file name is mentioned in the makefile as a target or as an explicit
prerequisite, then we say it ought to exist.)

If all prerequisites exist or ought to exist, or there are no prerequisites,
then this rule applies.
@end enumerate

@item
If no pattern rule has been found so far, try harder.
For each pattern rule in the list:

@enumerate a
@item
If the rule is terminal, ignore it and go on to the next rule.

@item
Compute the prerequisite names as before.

@item
Test whether all the prerequisites exist or ought to exist.

@item
For each prerequisite that does not exist, follow this algorithm
recursively to see if the prerequisite can be made by an implicit
rule.

@item
If all prerequisites exist, ought to exist, or can be
made by implicit rules, then this rule applies.
@end enumerate

@item
If no implicit rule applies, the rule for @code{.DEFAULT}, if any,
applies.  In that case, give @var{t} the same commands that
@code{.DEFAULT} has.  Otherwise, there are no commands for @var{t}.
@end enumerate

Once a rule that applies has been found, for each target pattern of the
rule other than the one that matched @var{t} or @var{n}, the @samp{%} in
the pattern is replaced with @var{s} and the resultant file name is stored
until the commands to remake the target file @var{t} are executed.  After
these commands are executed, each of these stored file names are entered
into the data base and marked as having been updated and having the same
update status as the file @var{t}.

When the commands of a pattern rule are executed for @var{t}, the automatic
variables are set corresponding to the target and prerequisites.
@xref{Automatic, ,Automatic Variables}.

@node Archives, Features, Implicit Rules, Top
@chapter Using @code{make} to Update Archive Files
@cindex archive

@dfn{Archive files} are files containing named subfiles called
@dfn{members}; they are maintained with the program @code{ar} and their
main use is as subroutine libraries for linking.

@menu
* Archive Members::             Archive members as targets.
* Archive Update::              The implicit rule for archive member targets.
* Archive Pitfalls::            Dangers to watch out for when using archives.
* Archive Suffix Rules::        You can write a special kind of suffix rule
                                  for updating archives.
@end menu

@node Archive Members, Archive Update,  , Archives
@section Archive Members as Targets
@cindex archive member targets

An individual member of an archive file can be used as a target or
prerequisite in @code{make}.  You specify the member named @var{member} in
archive file @var{archive} as follows:

@example
@var{archive}(@var{member})
@end example

@noindent
This construct is available only in targets and prerequisites, not in
commands!  Most programs that you might use in commands do not support this
syntax and cannot act directly on archive members.  Only @code{ar} and
other programs specifically designed to operate on archives can do so.
Therefore, valid commands to update an archive member target probably must
use @code{ar}.  For example, this rule says to create a member
@file{hack.o} in archive @file{foolib} by copying the file @file{hack.o}:

@example
foolib(hack.o) : hack.o
        ar cr foolib hack.o
@end example

In fact, nearly all archive member targets are updated in just this way
and there is an implicit rule to do it for you.  @strong{Note:} The
@samp{c} flag to @code{ar} is required if the archive file does not
already exist.

To specify several members in the same archive, you can write all the
member names together between the parentheses.  For example:

@example
foolib(hack.o kludge.o)
@end example

@noindent
is equivalent to:

@example
foolib(hack.o) foolib(kludge.o)
@end example

@cindex wildcard, in archive member
You can also use shell-style wildcards in an archive member reference.
@xref{Wildcards, ,Using Wildcard Characters in File Names}.  For
example, @w{@samp{foolib(*.o)}} expands to all existing members of the
@file{foolib} archive whose names end in @samp{.o}; perhaps
@samp{@w{foolib(hack.o)} @w{foolib(kludge.o)}}.

@node Archive Update
@section Implicit Rule for Archive Member Targets

Recall that a target that looks like @file{@var{a}(@var{m})} stands for the
member named @var{m} in the archive file @var{a}.

When @code{make} looks for an implicit rule for such a target, as a special
feature it considers implicit rules that match @file{(@var{m})}, as well as
those that match the actual target @file{@var{a}(@var{m})}.

This causes one special rule whose target is @file{(%)} to match.  This
rule updates the target @file{@var{a}(@var{m})} by copying the file @var{m}
into the archive.  For example, it will update the archive member target
@file{foo.a(bar.o)} by copying the @emph{file} @file{bar.o} into the
archive @file{foo.a} as a @emph{member} named @file{bar.o}.

When this rule is chained with others, the result is very powerful.
Thus, @samp{make "foo.a(bar.o)"} (the quotes are needed to protect the
@samp{(} and @samp{)} from being interpreted specially by the shell) in
the presence of a file @file{bar.c} is enough to cause the following
commands to be run, even without a makefile:

@example
cc -c bar.c -o bar.o
ar r foo.a bar.o
rm -f bar.o
@end example

@noindent
Here @code{make} has envisioned the file @file{bar.o} as an intermediate
file.  @xref{Chained Rules, ,Chains of Implicit Rules}.

Implicit rules such as this one are written using the automatic variable
@samp{$%}.  @xref{Automatic, ,Automatic Variables}.

An archive member name in an archive cannot contain a directory name, but
it may be useful in a makefile to pretend that it does.  If you write an
archive member target @file{foo.a(dir/file.o)}, @code{make} will perform
automatic updating with this command:

@example
ar r foo.a dir/file.o
@end example

@noindent
which has the effect of copying the file @file{dir/file.o} into a member
named @file{file.o}.  In connection with such usage, the automatic variables
@code{%D} and @code{%F} may be useful.

@menu
* Archive Symbols::             How to update archive symbol directories.
@end menu

@node Archive Symbols,  ,  , Archive Update
@subsection Updating Archive Symbol Directories
@cindex @code{__.SYMDEF}
@cindex updating archive symbol directories
@cindex archive symbol directory updating
@cindex symbol directories, updating archive
@cindex directories, updating archive symbol

An archive file that is used as a library usually contains a special member
named @file{__.SYMDEF} that contains a directory of the external symbol
names defined by all the other members.  After you update any other
members, you need to update @file{__.SYMDEF} so that it will summarize the
other members properly.  This is done by running the @code{ranlib} program:

@example
ranlib @var{archivefile}
@end example

Normally you would put this command in the rule for the archive file,
and make all the members of the archive file prerequisites of that rule.
For example,

@example
libfoo.a: libfoo.a(x.o) libfoo.a(y.o) @dots{}
        ranlib libfoo.a
@end example

@noindent
The effect of this is to update archive members @file{x.o}, @file{y.o},
etc., and then update the symbol directory member @file{__.SYMDEF} by
running @code{ranlib}.  The rules for updating the members are not shown
here; most likely you can omit them and use the implicit rule which copies
files into the archive, as described in the preceding section.

This is not necessary when using the GNU @code{ar} program, which
updates the @file{__.SYMDEF} member automatically.

@node Archive Pitfalls
@section Dangers When Using Archives
@cindex archive, and parallel execution
@cindex parallel execution, and archive update
@cindex archive, and @code{-j}
@cindex @code{-j}, and archive update

It is important to be careful when using parallel execution (the
@code{-j} switch; @pxref{Parallel, ,Parallel Execution}) and archives.
If multiple @code{ar} commands run at the same time on the same archive
file, they will not know about each other and can corrupt the file.

Possibly a future version of @code{make} will provide a mechanism to
circumvent this problem by serializing all commands that operate on the
same archive file.  But for the time being, you must either write your
makefiles to avoid this problem in some other way, or not use @code{-j}.

@node Archive Suffix Rules, , Archive Pitfalls, Archives
@section Suffix Rules for Archive Files
@cindex suffix rule, for archive
@cindex archive, suffix rule for
@cindex library archive, suffix rule for
@cindex @code{.a} (archives)

You can write a special kind of suffix rule for dealing with archive
files.  @xref{Suffix Rules}, for a full explanation of suffix rules.
Archive suffix rules are obsolete in GNU @code{make}, because pattern
rules for archives are a more general mechanism (@pxref{Archive
Update}).  But they are retained for compatibility with other
@code{make}s.

To write a suffix rule for archives, you simply write a suffix rule
using the target suffix @samp{.a} (the usual suffix for archive files).
For example, here is the old-fashioned suffix rule to update a library
archive from C source files:

@example
@group
.c.a:
        $(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $*.o
        $(AR) r $@@ $*.o
        $(RM) $*.o
@end group
@end example

@noindent
This works just as if you had written the pattern rule:

@example
@group
(%.o): %.c
        $(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $*.o
        $(AR) r $@@ $*.o
        $(RM) $*.o
@end group
@end example

In fact, this is just what @code{make} does when it sees a suffix rule
with @samp{.a} as the target suffix.  Any double-suffix rule
@w{@samp{.@var{x}.a}} is converted to a pattern rule with the target
pattern @samp{(%.o)} and a prerequisite pattern of @samp{%.@var{x}}.

Since you might want to use @samp{.a} as the suffix for some other kind
of file, @code{make} also converts archive suffix rules to pattern rules
in the normal way (@pxref{Suffix Rules}).  Thus a double-suffix rule
@w{@samp{.@var{x}.a}} produces two pattern rules: @samp{@w{(%.o):}
@w{%.@var{x}}} and @samp{@w{%.a}: @w{%.@var{x}}}.@refill

@node Features, Missing, Archives, Top
@chapter Features of GNU @code{make}
@cindex features of GNU @code{make}
@cindex portability
@cindex compatibility

Here is a summary of the features of GNU @code{make}, for comparison
with and credit to other versions of @code{make}.  We consider the
features of @code{make} in 4.2 BSD systems as a baseline.  If you are
concerned with writing portable makefiles, you should not use the
features of @code{make} listed here, nor the ones in @ref{Missing}.

Many features come from the version of @code{make} in System V.

@itemize @bullet
@item
The @code{VPATH} variable and its special meaning.
@xref{Directory Search, , Searching Directories for Prerequisites}.
This feature exists in System V @code{make}, but is undocumented.
It is documented in 4.3 BSD @code{make} (which says it mimics System V's
@code{VPATH} feature).@refill

@item
Included makefiles.  @xref{Include, ,Including Other Makefiles}.
Allowing multiple files to be included with a single directive is a GNU
extension.

@item
Variables are read from and communicated via the environment.
@xref{Environment, ,Variables from the Environment}.

@item
Options passed through the variable @code{MAKEFLAGS} to recursive
invocations of @code{make}.
@xref{Options/Recursion, ,Communicating Options to a Sub-@code{make}}.

@item
The automatic variable @code{$%} is set to the member name
in an archive reference.  @xref{Automatic, ,Automatic Variables}.

@item
The automatic variables @code{$@@}, @code{$*}, @code{$<}, @code{$%},
and @code{$?} have corresponding forms like @code{$(@@F)} and
@code{$(@@D)}.  We have generalized this to @code{$^} as an obvious
extension.  @xref{Automatic, ,Automatic Variables}.@refill

@item
Substitution variable references.
@xref{Reference, ,Basics of Variable References}.

@item
The command-line options @samp{-b} and @samp{-m}, accepted and
ignored.  In System V @code{make}, these options actually do something.

@item
Execution of recursive commands to run @code{make} via the variable
@code{MAKE} even if @samp{-n}, @samp{-q} or @samp{-t} is specified.
@xref{Recursion, ,Recursive Use of @code{make}}.

@item
Support for suffix @samp{.a} in suffix rules.  @xref{Archive Suffix
Rules}.  This feature is obsolete in GNU @code{make}, because the
general feature of rule chaining (@pxref{Chained Rules, ,Chains of
Implicit Rules}) allows one pattern rule for installing members in an
archive (@pxref{Archive Update}) to be sufficient.

@item
The arrangement of lines and backslash-newline combinations in
commands is retained when the commands are printed, so they appear as
they do in the makefile, except for the stripping of initial
whitespace.
@end itemize

The following features were inspired by various other versions of
@code{make}.  In some cases it is unclear exactly which versions inspired
which others.

@itemize @bullet
@item
Pattern rules using @samp{%}.
This has been implemented in several versions of @code{make}.
We're not sure who invented it first, but it's been spread around a bit.
@xref{Pattern Rules, ,Defining and Redefining Pattern Rules}.@refill

@item
Rule chaining and implicit intermediate files.
This was implemented by Stu Feldman in his version of @code{make}
for AT&T Eighth Edition Research Unix, and later by Andrew Hume of
AT&T Bell Labs in his @code{mk} program (where he terms it
``transitive closure'').  We do not really know if
we got this from either of them or thought it up ourselves at the
same time.  @xref{Chained Rules, ,Chains of Implicit Rules}.

@item
The automatic variable @code{$^} containing a list of all prerequisites
of the current target.  We did not invent this, but we have no idea who
did.  @xref{Automatic, ,Automatic Variables}.  The automatic variable
@code{$+} is a simple extension of @code{$^}.

@item
The ``what if'' flag (@samp{-W} in GNU @code{make}) was (as far as we know)
invented by Andrew Hume in @code{mk}.
@xref{Instead of Execution, ,Instead of Executing the Commands}.

@item
The concept of doing several things at once (parallelism) exists in
many incarnations of @code{make} and similar programs, though not in the
System V or BSD implementations.  @xref{Execution, ,Command Execution}.

@item
Modified variable references using pattern substitution come from
SunOS 4.  @xref{Reference, ,Basics of Variable References}.
This functionality was provided in GNU @code{make} by the
@code{patsubst} function before the alternate syntax was implemented
for compatibility with SunOS 4.  It is not altogether clear who
inspired whom, since GNU @code{make} had @code{patsubst} before SunOS
4 was released.@refill

@item
The special significance of @samp{+} characters preceding command lines
(@pxref{Instead of Execution, ,Instead of Executing the Commands}) is
mandated by
@cite{IEEE Standard 1003.2-1992} (POSIX.2).

@item
The @samp{+=} syntax to append to the value of a variable comes from SunOS
4 @code{make}.  @xref{Appending, , Appending More Text to Variables}.

@item
The syntax @w{@samp{@var{archive}(@var{mem1} @var{mem2}@dots{})}} to list
multiple members in a single archive file comes from SunOS 4 @code{make}.
@xref{Archive Members}.

@item
The @code{-include} directive to include makefiles with no error for a
nonexistent file comes from SunOS 4 @code{make}.  (But note that SunOS 4
@code{make} does not allow multiple makefiles to be specified in one
@code{-include} directive.)  The same feature appears with the name
@code{sinclude} in SGI @code{make} and perhaps others.
@end itemize

The remaining features are inventions new in GNU @code{make}:

@itemize @bullet
@item
Use the @samp{-v} or @samp{--version} option to print version and
copyright information.

@item
Use the @samp{-h} or @samp{--help} option to summarize the options to
@code{make}.

@item
Simply-expanded variables.  @xref{Flavors, ,The Two Flavors of Variables}.

@item
Pass command-line variable assignments automatically through the
variable @code{MAKE} to recursive @code{make} invocations.
@xref{Recursion, ,Recursive Use of @code{make}}.

@item
Use the @samp{-C} or @samp{--directory} command option to change
directory.  @xref{Options Summary, ,Summary of Options}.

@item
Make verbatim variable definitions with @code{define}.
@xref{Defining, ,Defining Variables Verbatim}.

@item
Declare phony targets with the special target @code{.PHONY}.

Andrew Hume of AT&T Bell Labs implemented a similar feature with a
different syntax in his @code{mk} program.  This seems to be a case of
parallel discovery.  @xref{Phony Targets, ,Phony Targets}.

@item
Manipulate text by calling functions.
@xref{Functions, ,Functions for Transforming Text}.

@item
Use the @samp{-o} or @samp{--old-file}
option to pretend a file's modification-time is old.
@xref{Avoiding Compilation, ,Avoiding Recompilation of Some Files}.

@item
Conditional execution.

This feature has been implemented numerous times in various versions
of @code{make}; it seems a natural extension derived from the features
of the C preprocessor and similar macro languages and is not a
revolutionary concept.  @xref{Conditionals, ,Conditional Parts of Makefiles}.

@item
Specify a search path for included makefiles.
@xref{Include, ,Including Other Makefiles}.

@item
Specify extra makefiles to read with an environment variable.
@xref{MAKEFILES Variable, ,The Variable @code{MAKEFILES}}.

@item
Strip leading sequences of @samp{./} from file names, so that
@file{./@var{file}} and @file{@var{file}} are considered to be the
same file.@refill

@item
Use a special search method for library prerequisites written in the
form @samp{-l@var{name}}.
@xref{Libraries/Search, ,Directory Search for Link Libraries}.

@item
Allow suffixes for suffix rules
(@pxref{Suffix Rules, ,Old-Fashioned Suffix Rules}) to contain any
characters.  In other versions of @code{make}, they must begin with
@samp{.} and not contain any @samp{/} characters.

@item
Keep track of the current level of @code{make} recursion using the
variable @code{MAKELEVEL}.  @xref{Recursion, ,Recursive Use of @code{make}}.

@item
Provide any goals given on the command line in the variable
@code{MAKECMDGOALS}.  @xref{Goals, ,Arguments to Specify the Goals}.

@item
Specify static pattern rules.  @xref{Static Pattern, ,Static Pattern Rules}.

@item
Provide selective @code{vpath} search.
@xref{Directory Search, ,Searching Directories for Prerequisites}.

@item
Provide computed variable references.
@xref{Reference, ,Basics of Variable References}.

@item
Update makefiles.  @xref{Remaking Makefiles, ,How Makefiles Are Remade}.
System V @code{make} has a very, very limited form of this
functionality in that it will check out SCCS files for makefiles.

@item
Various new built-in implicit rules.
@xref{Catalogue of Rules, ,Catalogue of Implicit Rules}.

@item
The built-in variable @samp{MAKE_VERSION} gives the version number of
@code{make}.
@end itemize

@node Missing, Makefile Conventions, Features, Top
@chapter Incompatibilities and Missing Features
@cindex incompatibilities
@cindex missing features
@cindex features, missing

The @code{make} programs in various other systems support a few features
that are not implemented in GNU @code{make}.  The POSIX.2 standard
(@cite{IEEE Standard 1003.2-1992}) which specifies @code{make} does not
require any of these features.@refill

@itemize @bullet
@item
A target of the form @samp{@var{file}((@var{entry}))} stands for a member
of archive file @var{file}.  The member is chosen, not by name, but by
being an object file which defines the linker symbol @var{entry}.@refill

This feature was not put into GNU @code{make} because of the
nonmodularity of putting knowledge into @code{make} of the internal
format of archive file symbol tables.
@xref{Archive Symbols, ,Updating Archive Symbol Directories}.

@item
Suffixes (used in suffix rules) that end with the character @samp{~}
have a special meaning to System V @code{make};
they refer to the SCCS file that corresponds
to the file one would get without the @samp{~}.  For example, the
suffix rule @samp{.c~.o} would make the file @file{@var{n}.o} from
the SCCS file @file{s.@var{n}.c}.  For complete coverage, a whole
series of such suffix rules is required.
@xref{Suffix Rules, ,Old-Fashioned Suffix Rules}.

In GNU @code{make}, this entire series of cases is handled by two
pattern rules for extraction from SCCS, in combination with the
general feature of rule chaining.
@xref{Chained Rules, ,Chains of Implicit Rules}.

@item
In System V @code{make}, the string @samp{$$@@} has the strange meaning
that, in the prerequisites of a rule with multiple targets, it stands
for the particular target that is being processed.

This is not defined in GNU @code{make} because @samp{$$} should always
stand for an ordinary @samp{$}.

It is possible to get portions of this functionality through the use of
static pattern rules (@pxref{Static Pattern, ,Static Pattern Rules}).
The System V @code{make} rule:

@example
$(targets): $$@@.o lib.a
@end example

@noindent
can be replaced with the GNU @code{make} static pattern rule:

@example
$(targets): %: %.o lib.a
@end example

@item
In System V and 4.3 BSD @code{make}, files found by @code{VPATH} search
(@pxref{Directory Search, ,Searching Directories for Prerequisites}) have their names changed inside command
strings.  We feel it is much cleaner to always use automatic variables
and thus make this feature obsolete.@refill

@item
In some Unix @code{make}s, the automatic variable @code{$*} appearing in
the prerequisites of a rule has the amazingly strange ``feature'' of
expanding to the full name of the @emph{target of that rule}.  We cannot
imagine what went on in the minds of Unix @code{make} developers to do
this; it is utterly inconsistent with the normal definition of @code{$*}.
@vindex * @r{(automatic variable), unsupported bizarre usage}

@item
In some Unix @code{make}s, implicit rule search
(@pxref{Implicit Rules, ,Using Implicit Rules}) is apparently done for
@emph{all} targets, not just those without commands.  This means you can
do:@refill

@example
@group
foo.o:
        cc -c foo.c
@end group
@end example

@noindent
and Unix @code{make} will intuit that @file{foo.o} depends on
@file{foo.c}.@refill

We feel that such usage is broken.  The prerequisite properties of
@code{make} are well-defined (for GNU @code{make}, at least),
and doing such a thing simply does not fit the model.@refill

@item
GNU @code{make} does not include any built-in implicit rules for
compiling or preprocessing EFL programs.  If we hear of anyone who is
using EFL, we will gladly add them.

@item
It appears that in SVR4 @code{make}, a suffix rule can be specified with
no commands, and it is treated as if it had empty commands
(@pxref{Empty Commands}).  For example:

@example
.c.a:
@end example

@noindent
will override the built-in @file{.c.a} suffix rule.

We feel that it is cleaner for a rule without commands to always simply
add to the prerequisite list for the target.  The above example can be
easily rewritten to get the desired behavior in GNU @code{make}:

@example
.c.a: ;
@end example

@item
Some versions of @code{make} invoke the shell with the @samp{-e} flag,
except under @samp{-k} (@pxref{Testing, ,Testing the Compilation of a
Program}).  The @samp{-e} flag tells the shell to exit as soon as any
program it runs returns a nonzero status.  We feel it is cleaner to
write each shell command line to stand on its own and not require this
special treatment.
@end itemize

@comment The makefile standards are in a separate file that is also
@comment included by standards.texi.
@include make-stds.texi

@node Quick Reference, Error Messages, Makefile Conventions, Top
@appendix Quick Reference

This appendix summarizes the directives, text manipulation functions,
and special variables which GNU @code{make} understands.
@xref{Special Targets}, @ref{Catalogue of Rules, ,Catalogue of Implicit Rules},
and @ref{Options Summary, ,Summary of Options},
for other summaries.

Here is a summary of the directives GNU @code{make} recognizes:

@table @code
@item define @var{variable}
@itemx endef

Define a multi-line, recursively-expanded variable.@*
@xref{Sequences}.

@item ifdef @var{variable}
@itemx ifndef @var{variable}
@itemx ifeq (@var{a},@var{b})
@itemx ifeq "@var{a}" "@var{b}"
@itemx ifeq '@var{a}' '@var{b}'
@itemx ifneq (@var{a},@var{b})
@itemx ifneq "@var{a}" "@var{b}"
@itemx ifneq '@var{a}' '@var{b}'
@itemx else
@itemx endif

Conditionally evaluate part of the makefile.@*
@xref{Conditionals}.

@item include @var{file}
@itemx -include @var{file}
@itemx sinclude @var{file}

Include another makefile.@*
@xref{Include, ,Including Other Makefiles}.

@item override @var{variable} = @var{value}
@itemx override @var{variable} := @var{value}
@itemx override @var{variable} += @var{value}
@itemx override @var{variable} ?= @var{value}
@itemx override define @var{variable}
@itemx endef

Define a variable, overriding any previous definition, even one from
the command line.@*
@xref{Override Directive, ,The @code{override} Directive}.

@item export

Tell @code{make} to export all variables to child processes by default.@*
@xref{Variables/Recursion, , Communicating Variables to a Sub-@code{make}}.

@item export @var{variable}
@itemx export @var{variable} = @var{value}
@itemx export @var{variable} := @var{value}
@itemx export @var{variable} += @var{value}
@itemx export @var{variable} ?= @var{value}
@itemx unexport @var{variable}
Tell @code{make} whether or not to export a particular variable to child
processes.@*
@xref{Variables/Recursion, , Communicating Variables to a Sub-@code{make}}.

@item vpath @var{pattern} @var{path}
Specify a search path for files matching a @samp{%} pattern.@*
@xref{Selective Search, , The @code{vpath} Directive}.

@item vpath @var{pattern}
Remove all search paths previously specified for @var{pattern}.

@item vpath
Remove all search paths previously specified in any @code{vpath}
directive.
@end table

Here is a summary of the text manipulation functions (@pxref{Functions}):

@table @code
@item $(subst @var{from},@var{to},@var{text})
Replace @var{from} with @var{to} in @var{text}.@*
@xref{Text Functions, , Functions for String Substitution and Analysis}.

@item $(patsubst @var{pattern},@var{replacement},@var{text})
Replace words matching @var{pattern} with @var{replacement} in @var{text}.@*
@xref{Text Functions, , Functions for String Substitution and Analysis}.

@item $(strip @var{string})
Remove excess whitespace characters from @var{string}.@*
@xref{Text Functions, , Functions for String Substitution and Analysis}.

@item $(findstring @var{find},@var{text})
Locate @var{find} in @var{text}.@*
@xref{Text Functions, , Functions for String Substitution and Analysis}.

@item $(filter @var{pattern}@dots{},@var{text})
Select words in @var{text} that match one of the @var{pattern} words.@*
@xref{Text Functions, , Functions for String Substitution and Analysis}.

@item $(filter-out @var{pattern}@dots{},@var{text})
Select words in @var{text} that @emph{do not} match any of the @var{pattern} words.@*
@xref{Text Functions, , Functions for String Substitution and Analysis}.

@item $(sort @var{list})
Sort the words in @var{list} lexicographically, removing duplicates.@*
@xref{Text Functions, , Functions for String Substitution and Analysis}.

@item $(dir @var{names}@dots{})
Extract the directory part of each file name.@*
@xref{File Name Functions, ,Functions for File Names}.

@item $(notdir @var{names}@dots{})
Extract the non-directory part of each file name.@*
@xref{File Name Functions, ,Functions for File Names}.

@item $(suffix @var{names}@dots{})
Extract the suffix (the last @samp{.} and following characters) of each file name.@*
@xref{File Name Functions, ,Functions for File Names}.

@item $(basename @var{names}@dots{})
Extract the base name (name without suffix) of each file name.@*
@xref{File Name Functions, ,Functions for File Names}.

@item $(addsuffix @var{suffix},@var{names}@dots{})
Append @var{suffix} to each word in @var{names}.@*
@xref{File Name Functions, ,Functions for File Names}.

@item $(addprefix @var{prefix},@var{names}@dots{})
Prepend @var{prefix} to each word in @var{names}.@*
@xref{File Name Functions, ,Functions for File Names}.

@item $(join @var{list1},@var{list2})
Join two parallel lists of words.@*
@xref{File Name Functions, ,Functions for File Names}.

@item $(word @var{n},@var{text})
Extract the @var{n}th word (one-origin) of @var{text}.@*
@xref{File Name Functions, ,Functions for File Names}.

@item $(words @var{text})
Count the number of words in @var{text}.@*
@xref{File Name Functions, ,Functions for File Names}.

@item $(wordlist @var{s},@var{e},@var{text})
Returns the list of words in @var{text} from @var{s} to @var{e}.@*
@xref{File Name Functions, ,Functions for File Names}.

@item $(firstword @var{names}@dots{})
Extract the first word of @var{names}.@*
@xref{File Name Functions, ,Functions for File Names}.

@item $(wildcard @var{pattern}@dots{})
Find file names matching a shell file name pattern (@emph{not} a
@samp{%} pattern).@*
@xref{Wildcard Function, ,The Function @code{wildcard}}.

@item $(error @var{text}@dots{})

When this function is evaluated, @code{make} generates a fatal error
with the message @var{text}.@*
@xref{Make Control Functions, ,Functions That Control Make}.

@item $(warning @var{text}@dots{})

When this function is evaluated, @code{make} generates a warning with
the message @var{text}.@*
@xref{Make Control Functions, ,Functions That Control Make}.

@item $(shell @var{command})

Execute a shell command and return its output.@*
@xref{Shell Function, , The @code{shell} Function}.

@item $(origin @var{variable})

Return a string describing how the @code{make} variable @var{variable} was
defined.@*
@xref{Origin Function, , The @code{origin} Function}.

@item $(foreach @var{var},@var{words},@var{text})

Evaluate @var{text} with @var{var} bound to each word in @var{words},
and concatenate the results.@*
@xref{Foreach Function, ,The @code{foreach} Function}.

@item $(call @var{var},@var{param},@dots{})

Evaluate the variable @var{var} replacing any references to @code{$(1)},
@code{$(2)} with the first, second, etc. @var{param} values.@*
@xref{Call Function, ,The @code{call} Function}.
@end table

Here is a summary of the automatic variables.
@xref{Automatic, ,Automatic Variables},
for full information.

@table @code
@item $@@
The file name of the target.

@item $%
The target member name, when the target is an archive member.

@item $<
The name of the first prerequisite.

@item $?
The names of all the prerequisites that are
newer than the target, with spaces between them.
For prerequisites which are archive members, only
the member named is used (@pxref{Archives}).

@item $^
@itemx $+
The names of all the prerequisites, with spaces between them.  For
prerequisites which are archive members, only the member named is used
(@pxref{Archives}).  The value of @code{$^} omits duplicate
prerequisites, while @code{$+} retains them and preserves their order.

@item $*
The stem with which an implicit rule matches
(@pxref{Pattern Match, ,How Patterns Match}).

@item $(@@D)
@itemx $(@@F)
The directory part and the file-within-directory part of @code{$@@}.

@item $(*D)
@itemx $(*F)
The directory part and the file-within-directory part of @code{$*}.

@item $(%D)
@itemx $(%F)
The directory part and the file-within-directory part of @code{$%}.

@item $(<D)
@itemx $(<F)
The directory part and the file-within-directory part of @code{$<}.

@item $(^D)
@itemx $(^F)
The directory part and the file-within-directory part of @code{$^}.

@item $(+D)
@itemx $(+F)
The directory part and the file-within-directory part of @code{$+}.

@item $(?D)
@itemx $(?F)
The directory part and the file-within-directory part of @code{$?}.
@end table

These variables are used specially by GNU @code{make}:

@table @code
@item MAKEFILES

Makefiles to be read on every invocation of @code{make}.@*
@xref{MAKEFILES Variable, ,The Variable @code{MAKEFILES}}.

@item VPATH

Directory search path for files not found in the current directory.@*
@xref{General Search, , @code{VPATH} Search Path for All Prerequisites}.

@item SHELL

The name of the system default command interpreter, usually @file{/bin/sh}.
You can set @code{SHELL} in the makefile to change the shell used to run
commands.  @xref{Execution, ,Command Execution}.

@item MAKESHELL

On MS-DOS only, the name of the command interpreter that is to be used
by @code{make}. This value takes precedence over the value of
@code{SHELL}.  @xref{Execution, ,MAKESHELL variable}.

@item MAKE

The name with which @code{make} was invoked.
Using this variable in commands has special meaning.
@xref{MAKE Variable, ,How the @code{MAKE} Variable Works}.

@item MAKELEVEL

The number of levels of recursion (sub-@code{make}s).@*
@xref{Variables/Recursion}.

@item MAKEFLAGS

The flags given to @code{make}.  You can set this in the environment or
a makefile to set flags.@*
@xref{Options/Recursion, ,Communicating Options to a Sub-@code{make}}.

It is @emph{never} appropriate to use @code{MAKEFLAGS} directly on a
command line: its contents may not be quoted correctly for use in the
shell.  Always allow recursive @code{make}'s to obtain these values
through the environment from its parent.

@item MAKECMDGOALS

The targets given to @code{make} on the command line.  Setting this
variable has no effect on the operation of @code{make}.@*
@xref{Goals, ,Arguments to Specify the Goals}.

@item CURDIR

Set to the pathname of the current working directory (after all
@code{-C} options are processed, if any).  Setting this variable has no
effect on the operation of @code{make}.@*
@xref{Recursion, ,Recursive Use of @code{make}}.

@item SUFFIXES

The default list of suffixes before @code{make} reads any makefiles.

@item .LIBPATTERNS
Defines the naming of the libraries @code{make} searches for, and their
order.@*
@xref{Libraries/Search, ,Directory Search for Link Libraries}.
@end table

@node Error Messages, Complex Makefile, Quick Reference, Top
@comment  node-name,  next,  previous,  up
@appendix Errors Generated by Make

Here is a list of the more common errors you might see generated by
@code{make}, and some information about what they mean and how to fix
them.

Sometimes @code{make} errors are not fatal, especially in the presence
of a @code{-} prefix on a command script line, or the @code{-k} command
line option.  Errors that are fatal are prefixed with the string
@code{***}.

Error messages are all either prefixed with the name of the program
(usually @samp{make}), or, if the error is found in a makefile, the name
of the file and linenumber containing the problem.

In the table below, these common prefixes are left off.

@table @samp

@item [@var{foo}] Error @var{NN}
@itemx [@var{foo}] @var{signal description}
These errors are not really @code{make} errors at all.  They mean that a
program that @code{make} invoked as part of a command script returned a
non-0 error code (@samp{Error @var{NN}}), which @code{make} interprets
as failure, or it exited in some other abnormal fashion (with a
signal of some type).  @xref{Errors, ,Errors in Commands}.

If no @code{***} is attached to the message, then the subprocess failed
but the rule in the makefile was prefixed with the @code{-} special
character, so @code{make} ignored the error.

@item missing separator.  Stop.
@itemx missing separator (did you mean TAB instead of 8 spaces?).  Stop.
This means that @code{make} could not understand much of anything about
the command line it just read.  GNU @code{make} looks for various kinds
of separators (@code{:}, @code{=}, TAB characters, etc.) to help it
decide what kind of commandline it's seeing.  This means it couldn't
find a valid one.

One of the most common reasons for this message is that you (or perhaps
your oh-so-helpful editor, as is the case with many MS-Windows editors)
have attempted to indent your command scripts with spaces instead of a
TAB character.  In this case, @code{make} will use the second form of
the error above.  Remember that every line in the command script must
begin with a TAB character.  Eight spaces do not count.  @xref{Rule
Syntax}.

@item commands commence before first target.  Stop.
@itemx missing rule before commands.  Stop.
This means the first thing in the makefile seems to be part of a command
script: it begins with a TAB character and doesn't appear to be a legal
@code{make} command (such as a variable assignment).  Command scripts
must always be associated with a target.

The second form is generated if the line has a semicolon as the first
non-whitespace character; @code{make} interprets this to mean you left
out the "target: prerequisite" section of a rule.  @xref{Rule Syntax}.

@item No rule to make target `@var{xxx}'.
@itemx No rule to make target `@var{xxx}', needed by `@var{yyy}'.
This means that @code{make} decided it needed to build a target, but
then couldn't find any instructions in the makefile on how to do that,
either explicit or implicit (including in the default rules database).

If you want that file to be built, you will need to add a rule to your
makefile describing how that target can be built.  Other possible
sources of this problem are typos in the makefile (if that filename is
wrong) or a corrupted source tree (if that file is not supposed to be
built, but rather only a prerequisite).

@item No targets specified and no makefile found.  Stop.
@itemx No targets.  Stop.
The former means that you didn't provide any targets to be built on the
command line, and @code{make} couldn't find any makefiles to read in.
The latter means that some makefile was found, but it didn't contain any
default target and none was given on the command line.  GNU @code{make}
has nothing to do in these situations.
@xref{Makefile Arguments, ,Arguments to Specify the Makefile}.@refill

@item Makefile `@var{xxx}' was not found.
@itemx Included makefile `@var{xxx}' was not found.
A makefile specified on the command line (first form) or included
(second form) was not found.

@item warning: overriding commands for target `@var{xxx}'
@itemx warning: ignoring old commands for target `@var{xxx}'
GNU @code{make} allows commands to be specified only once per target
(except for double-colon rules).  If you give commands for a target
which already has been defined to have commands, this warning is issued
and the second set of commands will overwrite the first set.
@xref{Multiple Rules, ,Multiple Rules for One Target}.

@item Circular @var{xxx} <- @var{yyy} dependency dropped.
This means that @code{make} detected a loop in the dependency graph:
after tracing the prerequisite @var{yyy} of target @var{xxx}, and its
prerequisites, etc., one of them depended on @var{xxx} again.

@item Recursive variable `@var{xxx}' references itself (eventually).  Stop.
This means you've defined a normal (recursive) @code{make} variable
@var{xxx} that, when it's expanded, will refer to itself (@var{xxx}).
This is not allowed; either use simply-expanded variables (@code{:=}) or
use the append operator (@code{+=}).  @xref{Using Variables, ,How to Use
Variables}.

@item Unterminated variable reference.  Stop.
This means you forgot to provide the proper closing parenthesis
or brace in your variable or function reference.

@item insufficient arguments to function `@var{xxx}'.  Stop.
This means you haven't provided the requisite number of arguments for
this function.  See the documentation of the function for a description
of its arguments.  @xref{Functions, ,Functions for Transforming Text}.

@item missing target pattern.  Stop.
@itemx multiple target patterns.  Stop.
@itemx target pattern contains no `%'.  Stop.
These are generated for malformed static pattern rules.  The first means
there's no pattern in the target section of the rule, the second means
there are multiple patterns in the target section, and the third means
the target doesn't contain a pattern character (@code{%}).  @xref{Static
Usage, ,Syntax of Static Pattern Rules}.

@item warning: -jN forced in submake: disabling jobserver mode.
This warning and the next are generated if @code{make} detects error
conditions related to parallel processing on systems where
sub-@code{make}s can communicate (@pxref{Options/Recursion,
,Communicating Options to a Sub-@code{make}}).  This warning is
generated if a recursive invocation of a @code{make} process is forced
to have @samp{-j@var{N}} in its argument list (where @var{N} is greater
than one).  This could happen, for example, if you set the @code{MAKE}
environment variable to @samp{make -j2}.  In this case, the
sub-@code{make} doesn't communicate with other @code{make} processes and
will simply pretend it has two jobs of its own.

@item warning: jobserver unavailable: using -j1.  Add `+' to parent make rule.
In order for @code{make} processes to communicate, the parent will pass
information to the child.  Since this could result in problems if the
child process isn't actually a @code{make}, the parent will only do this
if it thinks the child is a @code{make}.  The parent uses the normal
algorithms to determine this (@pxref{MAKE Variable, ,How the @code{MAKE}
Variable Works}).  If the makefile is constructed such that the parent
doesn't know the child is a @code{make} process, then the child will
receive only part of the information necessary.  In this case, the child
will generate this warning message and proceed with its build in a
sequential manner.

@end table

@node Complex Makefile, Concept Index, Error Messages, Top
@appendix Complex Makefile Example

Here is the makefile for the GNU @code{tar} program.  This is a
moderately complex makefile.

Because it is the first target, the default goal is @samp{all}.  An
interesting feature of this makefile is that @file{testpad.h} is a
source file automatically created by the @code{testpad} program,
itself compiled from @file{testpad.c}.

If you type @samp{make} or @samp{make all}, then @code{make} creates
the @file{tar} executable, the @file{rmt} daemon that provides
remote tape access, and the @file{tar.info} Info file.

If you type @samp{make install}, then @code{make} not only creates
@file{tar}, @file{rmt}, and @file{tar.info}, but also installs
them.

If you type @samp{make clean}, then @code{make} removes the @samp{.o}
files, and the @file{tar}, @file{rmt}, @file{testpad},
@file{testpad.h}, and @file{core} files.

If you type @samp{make distclean}, then @code{make} not only removes
the same files as does @samp{make clean} but also the
@file{TAGS}, @file{Makefile}, and @file{config.status} files.
(Although it is not evident, this makefile (and
@file{config.status}) is generated by the user with the
@code{configure} program, which is provided in the @code{tar}
distribution, but is not shown here.)

If you type @samp{make realclean}, then @code{make} removes the same
files as does @samp{make distclean} and also removes the Info files
generated from @file{tar.texinfo}.

In addition, there are targets @code{shar} and @code{dist} that create
distribution kits.

@example
@group
# Generated automatically from Makefile.in by configure.
# Un*x Makefile for GNU tar program.
# Copyright (C) 1991 Free Software Foundation, Inc.
@end group

@group
# This program is free software; you can redistribute
# it and/or modify it under the terms of the GNU
# General Public License @dots{}
@dots{}
@dots{}
@end group

SHELL = /bin/sh

#### Start of system configuration section. ####

srcdir = .

@group
# If you use gcc, you should either run the
# fixincludes script that comes with it or else use
# gcc with the -traditional option.  Otherwise ioctl
# calls will be compiled incorrectly on some systems.
CC = gcc -O
YACC = bison -y
INSTALL = /usr/local/bin/install -c
INSTALLDATA = /usr/local/bin/install -c -m 644
@end group

# Things you might add to DEFS:
# -DSTDC_HEADERS        If you have ANSI C headers and
#                       libraries.
# -DPOSIX               If you have POSIX.1 headers and
#                       libraries.
# -DBSD42               If you have sys/dir.h (unless
#                       you use -DPOSIX), sys/file.h,
#                       and st_blocks in `struct stat'.
# -DUSG                 If you have System V/ANSI C
#                       string and memory functions
#                       and headers, sys/sysmacros.h,
#                       fcntl.h, getcwd, no valloc,
#                       and ndir.h (unless
#                       you use -DDIRENT).
# -DNO_MEMORY_H         If USG or STDC_HEADERS but do not
#                       include memory.h.
# -DDIRENT              If USG and you have dirent.h
#                       instead of ndir.h.
# -DSIGTYPE=int         If your signal handlers
#                       return int, not void.
# -DNO_MTIO             If you lack sys/mtio.h
#                       (magtape ioctls).
# -DNO_REMOTE           If you do not have a remote shell
#                       or rexec.
# -DUSE_REXEC           To use rexec for remote tape
#                       operations instead of
#                       forking rsh or remsh.
# -DVPRINTF_MISSING     If you lack vprintf function
#                       (but have _doprnt).
# -DDOPRNT_MISSING      If you lack _doprnt function.
#                       Also need to define
#                       -DVPRINTF_MISSING.
# -DFTIME_MISSING       If you lack ftime system call.
# -DSTRSTR_MISSING      If you lack strstr function.
# -DVALLOC_MISSING      If you lack valloc function.
# -DMKDIR_MISSING       If you lack mkdir and
#                       rmdir system calls.
# -DRENAME_MISSING      If you lack rename system call.
# -DFTRUNCATE_MISSING   If you lack ftruncate
#                       system call.
# -DV7                  On Version 7 Unix (not
#                       tested in a long time).
# -DEMUL_OPEN3          If you lack a 3-argument version
#                       of open, and want to emulate it
#                       with system calls you do have.
# -DNO_OPEN3            If you lack the 3-argument open
#                       and want to disable the tar -k
#                       option instead of emulating open.
# -DXENIX               If you have sys/inode.h
#                       and need it 94 to be included.

DEFS =  -DSIGTYPE=int -DDIRENT -DSTRSTR_MISSING \
        -DVPRINTF_MISSING -DBSD42
# Set this to rtapelib.o unless you defined NO_REMOTE,
# in which case make it empty.
RTAPELIB = rtapelib.o
LIBS =
DEF_AR_FILE = /dev/rmt8
DEFBLOCKING = 20

@group
CDEBUG = -g
CFLAGS = $(CDEBUG) -I. -I$(srcdir) $(DEFS) \
        -DDEF_AR_FILE=\"$(DEF_AR_FILE)\" \
        -DDEFBLOCKING=$(DEFBLOCKING)
LDFLAGS = -g
@end group

@group
prefix = /usr/local
# Prefix for each installed program,
# normally empty or `g'.
binprefix =

# The directory to install tar in.
bindir = $(prefix)/bin

# The directory to install the info files in.
infodir = $(prefix)/info
@end group

#### End of system configuration section. ####

SRC1 =  tar.c create.c extract.c buffer.c \
        getoldopt.c update.c gnu.c mangle.c
SRC2 =  version.c list.c names.c diffarch.c \
        port.c wildmat.c getopt.c
SRC3 =  getopt1.c regex.c getdate.y
SRCS =  $(SRC1) $(SRC2) $(SRC3)
OBJ1 =  tar.o create.o extract.o buffer.o \
        getoldopt.o update.o gnu.o mangle.o
OBJ2 =  version.o list.o names.o diffarch.o \
        port.o wildmat.o getopt.o
OBJ3 =  getopt1.o regex.o getdate.o $(RTAPELIB)
OBJS =  $(OBJ1) $(OBJ2) $(OBJ3)
@group
AUX =   README COPYING ChangeLog Makefile.in  \
        makefile.pc configure configure.in \
        tar.texinfo tar.info* texinfo.tex \
        tar.h port.h open3.h getopt.h regex.h \
        rmt.h rmt.c rtapelib.c alloca.c \
        msd_dir.h msd_dir.c tcexparg.c \
        level-0 level-1 backup-specs testpad.c
@end group

all:    tar rmt tar.info

@group
tar:    $(OBJS)
        $(CC) $(LDFLAGS) -o $@@ $(OBJS) $(LIBS)
@end group

@group
rmt:    rmt.c
        $(CC) $(CFLAGS) $(LDFLAGS) -o $@@ rmt.c
@end group

@group
tar.info: tar.texinfo
        makeinfo tar.texinfo
@end group

@group
install: all
        $(INSTALL) tar $(bindir)/$(binprefix)tar
        -test ! -f rmt || $(INSTALL) rmt /etc/rmt
        $(INSTALLDATA) $(srcdir)/tar.info* $(infodir)
@end group

@group
$(OBJS): tar.h port.h testpad.h
regex.o buffer.o tar.o: regex.h
# getdate.y has 8 shift/reduce conflicts.
@end group

@group
testpad.h: testpad
        ./testpad
@end group

@group
testpad: testpad.o
        $(CC) -o $@@ testpad.o
@end group

@group
TAGS:   $(SRCS)
        etags $(SRCS)
@end group

@group
clean:
        rm -f *.o tar rmt testpad testpad.h core
@end group

@group
distclean: clean
        rm -f TAGS Makefile config.status
@end group

@group
realclean: distclean
        rm -f tar.info*
@end group

@group
shar: $(SRCS) $(AUX)
        shar $(SRCS) $(AUX) | compress \
          > tar-`sed -e '/version_string/!d' \
                     -e 's/[^0-9.]*\([0-9.]*\).*/\1/' \
                     -e q
                     version.c`.shar.Z
@end group

@group
dist: $(SRCS) $(AUX)
        echo tar-`sed \
             -e '/version_string/!d' \
             -e 's/[^0-9.]*\([0-9.]*\).*/\1/' \
             -e q
             version.c` > .fname
        -rm -rf `cat .fname`
        mkdir `cat .fname`
        ln $(SRCS) $(AUX) `cat .fname`
        tar chZf `cat .fname`.tar.Z `cat .fname`
        -rm -rf `cat .fname` .fname
@end group

@group
tar.zoo: $(SRCS) $(AUX)
        -rm -rf tmp.dir
        -mkdir tmp.dir
        -rm tar.zoo
        for X in $(SRCS) $(AUX) ; do \
            echo $$X ; \
            sed 's/$$/^M/' $$X \
            > tmp.dir/$$X ; done
        cd tmp.dir ; zoo aM ../tar.zoo *
        -rm -rf tmp.dir
@end group
@end example

@node Concept Index, Name Index, Complex Makefile, Top
@unnumbered Index of Concepts

@printindex cp

@node Name Index,  , Concept Index, Top
@unnumbered Index of Functions, Variables, & Directives

@printindex fn

@summarycontents
@contents
@bye
