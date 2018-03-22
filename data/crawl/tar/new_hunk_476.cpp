\input texinfo
@c %**start of header
@setfilename tar.info
@settitle GNU tar
@finalout
@smallbook
@c %**end of header

@c ======================================================================
@c This document has three levels of rendition: PUBLISH, DISTRIB or PROOF,
@c as decided by @set symbols.  The PUBLISH rendition does not show
@c notes or marks asking for revision.  Most users will prefer having more
@c information, even if this information is not fully revised for adequacy,
@c so DISTRIB is the default for tar distributions.  The PROOF rendition
@c show all marks to the point of ugliness, but is nevertheless useful to
@c those working on the manual itself.
@c ======================================================================

@ifclear PUBLISH
@ifclear DISTRIB
@ifclear PROOF
@set DISTRIB
@end ifclear
@end ifclear
@end ifclear

@ifset PUBLISH
@set RENDITION The book, version
@end ifset

@ifset DISTRIB
@set RENDITION FTP release, version
@end ifset

@ifset PROOF
@set RENDITION Proof reading version
@end ifset

@c ---------------------------------------------------------------------
@c The @FIXME's, @UNREVISED and @c comments are part Fran@,{c}ois's work
@c plan.  These annotations are somewhat precious to him; he asks that I
@c do not alter them inconsiderately.  Much work is needed for GNU tar
@c internals (the sources, the programs themselves).  Revising the
@c adequacy of the manual while revising the sources, and cleaning them
@c both at the same time, seems to him like a good way to proceed.
@c ---------------------------------------------------------------------

@c Output marks for nodes needing revision, but not in PUBLISH rendition.

@macro UNREVISED
@ifclear PUBLISH
@quotation
@emph{(This message will disappear, once this node revised.)}
@end quotation
@end ifclear
@end macro

@c Output various FIXME information only in PROOF rendition.

@macro FIXME{string}
@allow-recursion
@quote-arg
@ifset PROOF
@strong{<FIXME>} \string\ @strong{</>}
@end ifset

@end macro

@macro FIXME-ref{string}
@quote-arg
@ifset PROOF
@strong{<REF>} \string\ @strong{</>}
@end ifset

@end macro

@macro FIXME-pxref{string}
@quote-arg
@ifset PROOF
@strong{<PXREF>} \string\ @strong{</>}
@end ifset

@end macro

@macro FIXME-xref{string}
@quote-arg
@ifset PROOF
@strong{<XREF>} \string\ @strong{</>}
@end ifset

@end macro

@c @macro option{entry}
@c @quote-arg
@c @opindex{--\entry\}
@c @value{\entry\}
@c @end macro

@set op-absolute-names @kbd{--absolute-names} (@kbd{-P})
@set ref-absolute-names @ref{absolute}
@set xref-absolute-names @xref{absolute}
@set pxref-absolute-names @pxref{absolute}

@set op-after-date @kbd{--after-date=@var{date}} (@kbd{--newer=@var{date}}, @kbd{-N @var{date}})
@set ref-after-date @ref{after}
@set xref-after-date @xref{after}
@set pxref-after-date @pxref{after}

@set op-append @kbd{--append} (@kbd{-r})
@set ref-append @ref{add}
@set xref-append @xref{add}
@set pxref-append @pxref{add}

@set op-atime-preserve @kbd{--atime-preserve}
@set ref-atime-preserve @ref{Attributes}
@set xref-atime-preserve @xref{Attributes}
@set pxref-atime-preserve @pxref{Attributes}

@set op-backup @kbd{--backup}
@set ref-backup @ref{Backup options}
@set xref-backup @xref{Backup options}
@set pxref-backup @pxref{Backup options}

@set op-block-number @kbd{--block-number} (@kbd{-R})
@set ref-block-number @ref{verbose}
@set xref-block-number @xref{verbose}
@set pxref-block-number @pxref{verbose}

@set op-blocking-factor @kbd{--blocking-factor=@var{512-size}} (@kbd{-b @var{512-size}})
@set ref-blocking-factor @ref{Blocking Factor}
@set xref-blocking-factor @xref{Blocking Factor}
@set pxref-blocking-factor @pxref{Blocking Factor}

@set op-checkpoint @kbd{--checkpoint}
@set ref-checkpoint @ref{verbose}
@set xref-checkpoint @xref{verbose}
@set pxref-checkpoint @pxref{verbose}

@set op-compare @kbd{--compare} (@kbd{--diff}, @kbd{-d})
@set ref-compare @ref{compare}
@set xref-compare @xref{compare}
@set pxref-compare @pxref{compare}

@set op-compress @kbd{--compress} (@kbd{--uncompress}, @kbd{-Z})
@set ref-compress @ref{gzip}
@set xref-compress @xref{gzip}
@set pxref-compress @pxref{gzip}

@set op-concatenate @kbd{--concatenate} (@kbd{--catenate}, @kbd{-A})
@set ref-concatenate @ref{concatenate}
@set xref-concatenate @xref{concatenate}
@set pxref-concatenate @pxref{concatenate}

@set op-create @kbd{--create} (@kbd{-c})
@set ref-create @ref{create}
@set xref-create @xref{create}
@set pxref-create @pxref{create}

@set op-delete @kbd{--delete}
@set ref-delete @ref{delete}
@set xref-delete @xref{delete}
@set pxref-delete @pxref{delete}

@set op-dereference @kbd{--dereference} (@kbd{-h})
@set ref-dereference @ref{dereference}
@set xref-dereference @xref{dereference}
@set pxref-dereference @pxref{dereference}

@set op-directory @kbd{--directory=@var{directory}} (@kbd{-C @var{directory}})
@set ref-directory @ref{directory}
@set xref-directory @xref{directory}
@set pxref-directory @pxref{directory}

@set op-exclude @kbd{--exclude=@var{pattern}}
@set ref-exclude @ref{exclude}
@set xref-exclude @xref{exclude}
@set pxref-exclude @pxref{exclude}

@set op-exclude-from @kbd{--exclude-from=@var{file-of-patterns}} (@kbd{-X @var{file-of-patterns}})
@set ref-exclude-from @ref{exclude}
@set xref-exclude-from @xref{exclude}
@set pxref-exclude-from @pxref{exclude}

@set op-extract @kbd{--extract} (@kbd{--get}, @kbd{-x})
@set ref-extract @ref{extract}
@set xref-extract @xref{extract}
@set pxref-extract @pxref{extract}

@set op-file @kbd{--file=@var{archive-name}} (@kbd{-f @var{archive-name}})
@set ref-file @ref{file}
@set xref-file @xref{file}
@set pxref-file @pxref{file}

@set op-files-from @kbd{--files-from=@var{file-of-names}} (@kbd{-T @var{file-of-names}})
@set ref-files-from @ref{files}
@set xref-files-from @xref{files}
@set pxref-files-from @pxref{files}

@set op-force-local @kbd{--force-local}
@set ref-force-local @ref{file}
@set xref-force-local @xref{file}
@set pxref-force-local @pxref{file}

@set op-group @kbd{--group=@var{group}}
@set ref-group @ref{Option Summary}
@set xref-group @xref{Option Summary}
@set pxref-group @pxref{Option Summary}

@set op-gzip @kbd{--gzip} (@kbd{--gunzip}, @kbd{--ungzip}, @kbd{-z})
@set ref-gzip @ref{gzip}
@set xref-gzip @xref{gzip}
@set pxref-gzip @pxref{gzip}

@set op-help @kbd{--help}
@set ref-help @ref{help}
@set xref-help @xref{help}
@set pxref-help @pxref{help}

@set op-ignore-failed-read @kbd{--ignore-failed-read}
@set ref-ignore-failed-read @ref{Reading}
@set xref-ignore-failed-read @xref{Reading}
@set pxref-ignore-failed-read @pxref{Reading}

@set op-ignore-zeros @kbd{--ignore-zeros} (@kbd{-i})
@set ref-ignore-zeros @ref{Reading}
@set xref-ignore-zeros @xref{Reading}
@set pxref-ignore-zeros @pxref{Reading}

@set op-incremental @kbd{--incremental} (@kbd{-G})
@set ref-incremental @ref{Inc Dumps}
@set xref-incremental @xref{Inc Dumps}
@set pxref-incremental @pxref{Inc Dumps}

@set op-info-script @kbd{--info-script=@var{script-name}} (@kbd{--new-volume-script=@var{script-name}}, @kbd{-F @var{script-name}})
@set ref-info-script @ref{Multi-Volume Archives}
@set xref-info-script @xref{Multi-Volume Archives}
@set pxref-info-script @pxref{Multi-Volume Archives}

@set op-interactive @kbd{--interactive} (@kbd{-w})
@set ref-interactive @ref{interactive}
@set xref-interactive @xref{interactive}
@set pxref-interactive @pxref{interactive}

@set op-keep-old-files @kbd{--keep-old-files} (@kbd{-k})
@set ref-keep-old-files @ref{Writing}
@set xref-keep-old-files @xref{Writing}
@set pxref-keep-old-files @pxref{Writing}

@set op-label @kbd{--label=@var{archive-label}} (@kbd{-V @var{archive-label}})
@set ref-label @ref{label}
@set xref-label @xref{label}
@set pxref-label @pxref{label}

@set op-list @kbd{--list} (@kbd{-t})
@set ref-list @ref{list}
@set xref-list @xref{list}
@set pxref-list @pxref{list}

@set op-listed-incremental @kbd{--listed-incremental=@var{snapshot-file}} (@kbd{-g @var{snapshot-file}})
@set ref-listed-incremental @ref{Inc Dumps}
@set xref-listed-incremental @xref{Inc Dumps}
@set pxref-listed-incremental @pxref{Inc Dumps}

@set op-mode @kbd{--mode=@var{permissions}}
@set ref-mode @ref{Option Summary}
@set xref-mode @xref{Option Summary}
@set pxref-mode @pxref{Option Summary}

@set op-multi-volume @kbd{--multi-volume} (@kbd{-M})
@set ref-multi-volume @ref{Multi-Volume Archives}
@set xref-multi-volume @xref{Multi-Volume Archives}
@set pxref-multi-volume @pxref{Multi-Volume Archives}

@set op-newer-mtime @kbd{--newer-mtime=@var{date}}
@set ref-newer-mtime @ref{after}
@set xref-newer-mtime @xref{after}
@set pxref-newer-mtime @pxref{after}

@set op-no-recursion @kbd{--no-recursion}
@set ref-no-recursion @ref{recurse}
@set xref-no-recursion @xref{recurse}
@set pxref-no-recursion @pxref{recurse}

@set op-null @kbd{--null}
@set ref-null @ref{files}
@set xref-null @xref{files}
@set pxref-null @pxref{files}

@set op-numeric-owner @kbd{--numeric-owner}
@set ref-numeric-owner @ref{Attributes}
@set xref-numeric-owner @xref{Attributes}
@set pxref-numeric-owner @pxref{Attributes}

@set op-old-archive @kbd{--old-archive} (@kbd{-o})
@set ref-old-archive @ref{old}
@set xref-old-archive @xref{old}
@set pxref-old-archive @pxref{old}

@set op-one-file-system @kbd{--one-file-system} (@kbd{-l})
@set ref-one-file-system @ref{one}
@set xref-one-file-system @xref{one}
@set pxref-one-file-system @pxref{one}

@set op-owner @kbd{--owner=@var{user}}
@set ref-owner @ref{Option Summary}
@set xref-owner @xref{Option Summary}
@set pxref-owner @pxref{Option Summary}

@set op-posix @kbd{--posix}
@set ref-posix @ref{posix}
@set xref-posix @xref{posix}
@set pxref-posix @pxref{posix}

@set op-preserve @kbd{--preserve}
@set ref-preserve @ref{Attributes}
@set xref-preserve @xref{Attributes}
@set pxref-preserve @pxref{Attributes}

@set op-record-size @kbd{--record-size=@var{size}}
@set ref-record-size @ref{Blocking}
@set xref-record-size @xref{Blocking}
@set pxref-record-size @pxref{Blocking}

@set op-recursive-unlink @kbd{--recursive-unlink}
@set ref-recursive-unlink @ref{Writing}
@set xref-recursive-unlink @xref{Writing}
@set pxref-recursive-unlink @pxref{Writing}

@set op-read-full-records @kbd{--read-full-records} (@kbd{-B})
@set ref-read-full-records @ref{Blocking}
@set xref-read-full-records @xref{Blocking}
@set pxref-read-full-records @pxref{Blocking}
@c FIXME: or should it be Reading, or Blocking Factor

@set op-remove-files @kbd{--remove-files}
@set ref-remove-files @ref{Writing}
@set xref-remove-files @xref{Writing}
@set pxref-remove-files @pxref{Writing}

@set op-rsh-command @kbd{rsh-command=@var{command}}

@set op-same-order @kbd{--same-order} (@kbd{--preserve-order}, @kbd{-s})
@set ref-same-order @ref{Scarce}
@set xref-same-order @xref{Scarce}
@set pxref-same-order @pxref{Scarce}
@c FIXME: or should it be Reading, or Attributes?

@set op-same-owner @kbd{--same-owner}
@set ref-same-owner @ref{Attributes}
@set xref-same-owner @xref{Attributes}
@set pxref-same-owner @pxref{Attributes}

@set op-same-permissions @kbd{--same-permissions} (@kbd{--preserve-permissions}, @kbd{-p})
@set ref-same-permissions @ref{Attributes}
@set xref-same-permissions @xref{Attributes}
@set pxref-same-permissions @pxref{Attributes}
@c FIXME: or should it be Writing?

@set op-show-omitted-dirs @kbd{--show-omitted-dirs}
@set ref-show-omitted-dirs @ref{verbose}
@set xref-show-omitted-dirs @xref{verbose}
@set pxref-show-omitted-dirs @pxref{verbose}

@set op-sparse @kbd{--sparse} (@kbd{-S})
@set ref-sparse @ref{sparse}
@set xref-sparse @xref{sparse}
@set pxref-sparse @pxref{sparse}

@set op-starting-file @kbd{--starting-file=@var{name}} (@kbd{-K @var{name}})
@set ref-starting-file @ref{Scarce}
@set xref-starting-file @xref{Scarce}
@set pxref-starting-file @pxref{Scarce}

@set op-suffix @kbd{--suffix=@var{suffix}}
@set ref-suffix @ref{Backup options}
@set xref-suffix @xref{Backup options}
@set pxref-suffix @pxref{Backup options}

@set op-tape-length @kbd{--tape-length=@var{1024-size}} (@kbd{-L @var{1024-size}})
@set ref-tape-length @ref{Using Multiple Tapes}
@set xref-tape-length @xref{Using Multiple Tapes}
@set pxref-tape-length @pxref{Using Multiple Tapes}

@set op-to-stdout @kbd{--to-stdout} (@kbd{-O})
@set ref-to-stdout @ref{Writing}
@set xref-to-stdout @xref{Writing}
@set pxref-to-stdout @pxref{Writing}

@set op-totals @kbd{--totals}
@set ref-totals @ref{verbose}
@set xref-totals @xref{verbose}
@set pxref-totals @pxref{verbose}

@set op-touch @kbd{--touch} (@kbd{-m})
@set ref-touch @ref{Writing}
@set xref-touch @xref{Writing}
@set pxref-touch @pxref{Writing}

@set op-unlink-first @kbd{--unlink-first} (@kbd{-U})
@set ref-unlink-first @ref{Writing}
@set xref-unlink-first @xref{Writing}
@set pxref-unlink-first @pxref{Writing}

@set op-update @kbd{--update} (@kbd{-u})
@set ref-update @ref{update}
@set xref-update @xref{update}
@set pxref-update @pxref{update}

@set op-use-compress-prog @kbd{--use-compress-prog=@var{program}}
@set ref-use-compress-prog @ref{gzip}
@set xref-use-compress-prog @xref{gzip}
@set pxref-use-compress-prog @pxref{gzip}

@set op-verbose @kbd{--verbose} (@kbd{-v})
@set ref-verbose @ref{verbose}
@set xref-verbose @xref{verbose}
@set pxref-verbose @pxref{verbose}

@set op-verify @kbd{--verify} (@kbd{-W})
@set ref-verify @ref{verify}
@set xref-verify @xref{verify}
@set pxref-verify @pxref{verify}

@set op-version @kbd{--version}
@set ref-version @ref{help}
@set xref-version @xref{help}
@set pxref-version @pxref{help}

@set op-version-control @kbd{--version-control=@var{method}}
@set ref-version-control @ref{Backup options}
@set xref-version-control @xref{Backup options}
@set pxref-version-control @pxref{Backup options}

@set op-volno-file @kbd{--volno-file=@var{file-of-number}}
@set ref-volno-file @ref{Using Multiple Tapes}
@set xref-volno-file @xref{Using Multiple Tapes}
@set pxref-volno-file @pxref{Using Multiple Tapes}

@include version.texi

@c Put everything in one index (arbitrarily chosen to be the concept index).
@syncodeindex fn cp
@syncodeindex ky cp
@syncodeindex pg cp
@syncodeindex vr cp

@defindex op
@syncodeindex op cp

@ifinfo
@format
START-INFO-DIR-ENTRY
* tar: (tar).			Making tape (or disk) archives.
END-INFO-DIR-ENTRY
@end format
@end ifinfo

@ifinfo
This file documents GNU @code{tar}, a utility used to store, backup, and
transport files.

Copyright (C) 1992, 1994, 1995, 1996, 1997 Free Software Foundation, Inc.

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
by the Foundation.
@end ifinfo

@setchapternewpage odd

@shorttitlepage GNU @code{tar}

@titlepage
@title GNU tar: an archiver tool
@subtitle @value{RENDITION} @value{VERSION}, @value{UPDATED}
@author Melissa Weisshaus, Jay Fenlason,
@author Thomas Bushnell, n/BSG, Amy Gorin
@c he said to remove it: Fran@,{c}ois Pinard
@c i'm thinking about how the author page *should* look. -mew 2may96

@page
@vskip 0pt plus 1filll
Copyright @copyright{} 1992, 1994, 1995, 1996, 1997 Free Software
Foundation, Inc.

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
by the Foundation.
@end titlepage

@ifinfo

This file documents GNU @code{tar}, which is a utility used to store,
backup, and transport files.  @code{tar} is a tape (or disk) archiver.
This manual documents the release @value{VERSION}.

@end ifinfo

@node Top, Introduction, (dir), (dir)

@menu
* Introduction::
* Tutorial::
* tar invocation::
* operations::
* Backups::
* Choosing::
* Date input formats::
* Formats::
* Media::
* Index::

 --- The Detailed Node Listing ---

Introduction

* Book Contents::               What this Book Contains
* Definitions::                 Some Definitions
* What tar Does::               What @code{tar} Does
* Naming tar Archives::         How @code{tar} Archives are Named
* posix compliance::
* Authors::                     GNU @code{tar} Authors
* Reports::                     Reporting bugs or suggestions

Tutorial Introduction to @code{tar}

* assumptions::
* stylistic conventions::
* basic tar options::           Basic @code{tar} Operations and Options
* frequent operations::
* Two Frequent Options::
* create::                      How to Create Archives
* list::                        How to List Archives
* extract::                     How to Extract Members from an Archive
* going further::

Two Frequently Used Options

* file tutorial::
* verbose tutorial::
* help tutorial::

How to Create Archives

* prepare for examples::
* Creating the archive::
* create verbose::
* short create::
* create dir::

How to List Archives

* list dir::

How to Extract Members from an Archive

* extracting archives::
* extracting files::
* extract dir::
* failing commands::

Invoking GNU @code{tar}

* Synopsis::
* using tar options::
* Styles::
* All Options::
* help::
* verbose::
* interactive::

The Three Option Styles

* Mnemonic Options::            Mnemonic Option Style
* Short Options::               Short Option Style
* Old Options::                 Old Option Style
* Mixing::                      Mixing Option Styles

All @code{tar} Options

* Operation Summary::
* Option Summary::
* Short Option Summary::

GNU @code{tar} Operations

* Basic tar::
* Advanced tar::
* extract options::
* backup::
* Applications::
* looking ahead::

Advanced GNU @code{tar} Operations

* Operations::
* current state::
* append::
* update::
* concatenate::
* delete::
* compare::

How to Add Files to Existing Archives: @code{--append}

* appending files::             Appending Files to an Archive
* multiple::

Updating an Archive

* how to update::

Options Used by @code{--extract}

* Reading::                     Options to Help Read Archives
* Writing::                     Changing How @code{tar} Writes Files
* Scarce::                      Coping with Scarce Resources

Options to Help Read Archives

* read full records::
* Ignore Zeros::
* Ignore Failed Read::

Changing How @code{tar} Writes Files

* Prevention Overwriting::
* Keep Old Files::
* Unlink First::
* Recursive Unlink::
* Modification Times::
* Setting Access Permissions::
* Writing to Standard Output::
* remove files::

Options to Prevent Overwriting Files

* Keep Old Files::
* Unlink First::
* Recursive Unlink::

Coping with Scarce Resources

* Starting File::
* Same Order::

Performing Backups and Restoring Files

* Full Dumps::                  Using @code{tar} to Perform Full Dumps
* Inc Dumps::                   Using @code{tar} to Perform Incremental Dumps
* incremental and listed-incremental::  The Incremental Options
* Backup Levels::               Levels of Backups
* Backup Parameters::           Setting Parameters for Backups and Restoration
* Scripted Backups::            Using the Backup Scripts
* Scripted Restoration::        Using the Restore Script

Setting Parameters for Backups and Restoration

* backup-specs example::        An Example Text of @file{Backup-specs}
* Script Syntax::               Syntax for @file{Backup-specs}

Choosing Files and Names for @code{tar}

* file::                        Choosing the Archive's Name
* Selecting Archive Members::
* files::                       Reading Names from a File
* exclude::                     Excluding Some Files
* Wildcards::
* after::                       Operating Only on New Files
* recurse::                     Descending into Directories
* one::                         Crossing Filesystem Boundaries

Reading Names from a File

* nul::

Excluding Some Files

* problems with exclude::

Crossing Filesystem Boundaries

* directory::                   Changing Directory
* absolute::                    Absolute File Names

Date input formats

* General date syntax::         Common rules.
* Calendar date item::          19 Dec 1994.
* Time of day item::            9:20pm.
* Timezone item::               EST, DST, BST, UCT, AHST, ...
* Day of week item::            Monday and others.
* Relative item in date strings::  next tuesday, 2 years ago.
* Pure numbers in date strings::  19931219, 1440.
* Authors of getdate::          Bellovin, Salz, Berets, et al.

Controlling the Archive Format

* Portability::                 Making @code{tar} Archives More Portable
* Compression::                 Using Less Space through Compression
* Attributes::                  Handling File Attributes
* Standard::                    The Standard Format
* Extensions::                  GNU Extensions to the Archive Format
* cpio::                        Comparison of @code{tar} and @code{cpio}

Making @code{tar} Archives More Portable

* Portable Names::              Portable Names
* dereference::                 Symbolic Links
* old::                         Old V7 Archives
* posix::                       POSIX archives
* Checksumming::                Checksumming Problems

Using Less Space through Compression

* gzip::                        Creating and Reading Compressed Archives
* sparse::                      Archiving Sparse Files

Tapes and Other Archive Media

* Device::                      Device selection and switching
* Remote Tape Server::
* Common Problems and Solutions::
* Blocking::                    Blocking
* Many::                        Many archives on one tape
* Using Multiple Tapes::        Using Multiple Tapes
* label::                       Including a Label in the Archive
* verify::
* Write Protection::

Blocking

* Format Variations::           Format Variations
* Blocking Factor::             The Blocking Factor of an Archive

Many Archives on One Tape

* Tape Positioning::            Tape Positions and Tape Marks
* mt::                          The @code{mt} Utility

Using Multiple Tapes

* Multi-Volume Archives::       Archives Longer than One Tape or Disk
* Tape Files::                  Tape Files
@end menu

@node Introduction, Tutorial, Top, Top
@chapter Introduction

Welcome to the GNU @code{tar} manual.  GNU @code{tar} is used to create
and manipulate files (@dfn{archives}) which are actually collections of
many other files; the program provides users with an organized and
systematic method for controlling a large amount of data.

@menu
* Book Contents::               What this Book Contains
* Definitions::                 Some Definitions
* What tar Does::               What @code{tar} Does
* Naming tar Archives::         How @code{tar} Archives are Named
* posix compliance::
* Authors::                     GNU @code{tar} Authors
* Reports::                     Reporting bugs or suggestions
@end menu

@node Book Contents, Definitions, Introduction, Introduction
@ifinfo
@heading What this Book Contains
@end ifinfo

The first part of this chapter introduces you to various terms that will
recur throughout the book.  It also tells you who has worked on GNU
@code{tar} and its documentation, and where you should send bug reports
or comments.

The second chapter is a tutorial (@pxref{Tutorial}) which provides a
gentle introduction for people who are new to using @code{tar}.  It is
meant to be self contained, not requiring any reading from subsequent
chapters to make sense.  It moves from topic to topic in a logical,
progressive order, building on information already explained.

Although the tutorial is paced and structured to allow beginners to
learn how to use @code{tar}, it is not intended solely for beginners.
The tutorial explains how to use the three most frequently used
operations (@samp{create}, @samp{list}, and @samp{extract}) as well as
two frequently used options (@samp{file} and @samp{verbose}).  The other
chapters do not refer to the tutorial frequently; however, if a section
discusses something which is a complex variant of a basic concept, there
may be a cross reference to that basic concept.  (The entire book,
including the tutorial, assumes that the reader understands some basic
concepts of using a Unix-type operating system; @pxref{Tutorial}.)

The third chapter presents the remaining five operations, and
information about using @code{tar} options and option syntax.

@FIXME{this sounds more like a GNU Project Manuals Concept [tm] more
than the reality.  should think about whether this makes sense to say
here, or not.}  The other chapters are meant to be used as a
reference.  Each chapter presents everything that needs to be said
about a specific topic.

One of the chapters (@pxref{Date input formats}) exists in its entirety
in other GNU manuals, and is mostly self-contained.  In addition, one
section of this manual (@pxref{Standard}) contains a big quote which is
taken directly from @code{tar} sources.

In general, we give both the long and short (abbreviated) option names
at least once in each section where the relevant option is covered, so
that novice readers will become familiar with both styles.  (A few
options have no short versions, and the relevant sections will
indicate this.)

@node Definitions, What tar Does, Book Contents, Introduction
@section Some Definitions

@cindex archive
@cindex tar archive
The @code{tar} program is used to create and manipulate @code{tar}
archives.  An @dfn{archive} is a single file which contains the contents
of many files, while still identifying the names of the files, their
owner(s), and so forth.  (In addition, archives record access
permissions, user and group, size in bytes, and last modification time.
Some archives also record the file names in each archived directory, as
well as other file and directory information.)  You can use @code{tar}
to @dfn{create} a new archive in a specified directory.

@cindex member
@cindex archive member
@cindex file name
@cindex member name
The files inside an archive are called @dfn{members}.  Within this
manual, we use the term @dfn{file} to refer only to files accessible in
the normal ways (by @code{ls}, @code{cat}, and so forth), and the term
@dfn{member} to refer only to the members of an archive.  Similarly, a
@dfn{file name} is the name of a file, as it resides in the filesystem,
and a @dfn{member name} is the name of an archive member within the
archive.

@cindex extraction
@cindex unpacking
The term @dfn{extraction} refers to the process of copying an archive
member (or multiple members) into a file in the filesystem.  Extracting
all the members of an archive is often called @dfn{extracting the
archive}.  The term @dfn{unpack} can also be used to refer to the
extraction of many or all the members of an archive.  Extracting an
archive does not destroy the archive's structure, just as creating an
archive does not destroy the copies of the files that exist outside of
the archive.  You may also @dfn{list} the members in a given archive
(this is often thought of as ``printing'' them to the standard output,
or the command line), or @dfn{append} members to a pre-existing archive.
All of these operations can be peformed using @code{tar}.

@node What tar Does, Naming tar Archives, Definitions, Introduction
@section What @code{tar} Does

@cindex tar
The @code{tar} program provides the ability to create @code{tar}
archives, as well as various other kinds of manipulation.  For example,
you can use @code{tar} on previously created archives to extract files,
to store additional files, or to update or list files which were already
stored.

Initially, @code{tar} archives were used to store files conveniently on
magnetic tape.  The name @samp{tar} comes from this use; it stands for
@code{t}ape @code{ar}chiver.  Despite the utility's name, @code{tar} can
direct its output to available devices, files, or other programs (using
pipes).  @code{tar} may even access remote devices or files (as archives).

@FIXME{the following table entries need a bit of work..}

You can use @code{tar} archives in many ways.  We want to stress a few
of them: storage, backup, and transportation.

@table @asis
@item Storage
Often, @code{tar} archives are used to store related files for
convenient file transfer over a network.  For example, the GNU Project
distributes its software bundled into @code{tar} archives, so that
all the files relating to a particular program (or set of related
programs) can be transferred as a single unit.

A magnetic tape can store several files in sequence.  However, the tape
has no names for these files; it only knows their relative position on
the tape.  One way to store several files on one tape and retain their
names is by creating a @code{tar} archive.  Even when the basic transfer
mechanism can keep track of names, as FTP can, the nuisance of handling
multiple files, directories, and multiple links makes @code{tar}
archives useful.

Archive files are also used for long-term storage.  You can think of
this as transportation from the present into the future.  (It is a
science-fiction idiom that you can move through time as well as in
space; the idea here is that @code{tar} can be used to move archives in
all dimensions, even time!)

@item Backup
Because the archive created by @code{tar} is capable of preserving file
information and directory structure, @code{tar} is commonly used for
performing full and incremental backups of disks.  A backup puts a
collection of files (possibly pertaining to many users and
projects) together on a disk or a tape.  This guards against accidental
destruction of the information in those files.  GNU @code{tar} has
special features that allow it to be used to make incremental and full
dumps of all the files in a filesystem.

@item Transportation
You can create an archive on one system, transfer it to another system,
and extract the contents there.  This allows you to transport a group of
files from one system to another.
@end table

@node Naming tar Archives, posix compliance, What tar Does, Introduction
@section How @code{tar} Archives are Named

Conventionally, @code{tar} archives are given names ending with
@samp{.tar}.  This is not necessary for @code{tar} to operate properly,
but this manual follows that convention in order to accustom readers to
it and to make examples more clear.

@cindex tar file
@cindex entry
@cindex tar entry
Often, people refer to @code{tar} archives as ``@code{tar} files,'' and
archive members as ``files'' or ``entries''.  For people familiar with
the operation of @code{tar}, this causes no difficulty.  However, in
this manual, we consistently refer to ``archives'' and ``archive
members'' to make learning to use @code{tar} easier for novice users.

@node posix compliance, Authors, Naming tar Archives, Introduction
@section POSIX Compliance

@noindent
@FIXME{must ask franc,ois about this.  dan hagerty thinks this might
be an issue, but we're not really sure at this time.  dan just tried a
test case of mixing up options' orders while the variable was set, and
there was no problem...}

We make some of our recommendations throughout this book for one
reason in addition to what we think of as ``good sense''.  The main
additional reason for a recommendation is to be compliant with the
POSIX standards.  If you set the shell environment variable
@code{POSIXLY_CORRECT}, GNU @code{tar} will force you to adhere to
these standards.  Therefore, if this variable is set and you violate
one of the POSIX standards in the way you phrase a command, for
example, GNU @code{tar} will not allow the command and will signal an
error message.  You would then have to reorder the options or rephrase
the command to comply with the POSIX standards.

There is a chance in the future that, if you set this environment
variable, your archives will be forced to comply with POSIX standards,
also.  No GNU @code{tar} extensions will be allowed.

@node Authors, Reports, posix compliance, Introduction
@section GNU @code{tar} Authors

GNU @code{tar} was originally written by John Gilmore, and modified by
many people.  The GNU enhancements were written by Jay Fenlason, then
Joy Kendall, and the whole package has been further maintained by
Thomas Bushnell, n/BSG, and finally Fran@,{c}ois Pinard, with
the help of numerous and kind users.

We wish to stress that @code{tar} is a collective work, and owes much to
all those people who reported problems, offered solutions and other
insights, or shared their thoughts and suggestions.  An impressive, yet
partial list of those contributors can be found in the @file{THANKS}
file from the GNU @code{tar} distribution.

@FIXME{i want all of these names mentioned, Absolutely.  BUT, i'm not
sure i want to spell out the history in this detail, at least not for
the printed book.  i'm just not sure it needs to be said this way.
i'll think about it.}

@FIXME{History is more important, and surely more interesting, than
actual names.  Quoting names without history would be meaningless.  FP}

Jay Fenlason put together a draft of a GNU @code{tar} manual,
borrowing notes from the original man page from John Gilmore.  This
draft has been distributed in @code{tar} versions 1.04 (or even
before?) @FIXME{huh?  IMO, either we know or we don't; the
parenthetical is confusing.}  through 1.10, then withdrawn in version
1.11.  Thomas Bushnell, n/BSG and Amy Gorin worked on a tutorial and
manual for GNU @code{tar}.  Fran@,{c}ois Pinard put version 1.11.8
of the manual together by taking information from all these sources
and merging them.  Melissa Weisshaus finally edited and redesigned the
book to create version 1.12.  @FIXME{update version number as
necessary; i'm being optimistic!} @FIXME{Someone [maybe karl berry?
maybe bob chassell?  maybe melissa? maybe julie sussman?]  needs to
properly index the thing.}

For version 1.12, Daniel Hagerty contributed a great deal of technical
consulting.  In particular, he is the primary author of @ref{Backups}.

@node Reports,  , Authors, Introduction
@section Reporting bugs or suggestions

@cindex bug reports
@cindex reporting bugs
If you find problems or have suggestions about this program or manual,
please report them to @file{bug-gnu-utils@@prep.ai.mit.edu}.

@node Tutorial, tar invocation, Introduction, Top
@chapter Tutorial Introduction to @code{tar}

This chapter guides you through some basic examples of three @code{tar}
operations: @samp{--create}, @samp{--list}, and @samp{--extract}.  If
you already know how to use some other version of @code{tar}, then you
may not need to read this chapter.  This chapter omits most complicated
details about how @code{tar} works.

@menu
* assumptions::
* stylistic conventions::
* basic tar options::           Basic @code{tar} Operations and Options
* frequent operations::
* Two Frequent Options::
* create::                      How to Create Archives
* list::                        How to List Archives
* extract::                     How to Extract Members from an Archive
* going further::
@end menu

@node assumptions, stylistic conventions, Tutorial, Tutorial
@ifinfo
@heading Assumptions this Tutorial Makes
@end ifinfo

This chapter is paced to allow beginners to learn about @code{tar}
slowly.  At the same time, we will try to cover all the basic aspects of
these three operations.  In order to accomplish both of these tasks, we
have made certain assumptions about your knowledge before reading this
manual, and the hardware you will be using:

@itemize @bullet
@item
Before you start to work through this tutorial, you should understand
what the terms ``archive'' and ``archive member'' mean
(@pxref{Definitions}).  In addition, you should understand something
about how Unix-type operating systems work, and you should know how to
use some basic utilities.  For example, you should know how to create,
list, copy, rename, edit, and delete files and directories; how to
change between directories; and how to figure out where you are in the
filesystem.  You should have some basic understanding of directory
structure and how files are named according to which directory they are
in.  You should understand concepts such as standard output and standard
input, what various definitions of the term ``argument'' mean, the
differences between relative and absolute path names, and @FIXME{what
else?}.

@item
This manual assumes that you are working from your own home directory
(unless we state otherwise).  In this tutorial, you will create a
directory to practice @code{tar} commands in.  When we show path names,
we will assume that those paths are relative to your home directory.
For example, my home directory path is @file{/home/fsf/melissa}.  All of
my examples are in a subdirectory of the directory named by that path
name; the subdirectory is called @file{practice}.

@item
In general, we show examples of archives which exist on (or can be
written to, or worked with from) a directory on a hard disk.  In most
cases, you could write those archives to, or work with them on any other
device, such as a tape drive.  However, some of the later examples in
the tutorial and next chapter will not work on tape drives.
Additionally, working with tapes is much more complicated than working
with hard disks.  For these reasons, the tutorial does not cover working
with tape drives.  @xref{Media} for complete information on using
@code{tar} archives with tape drives.

@FIXME{this is a cop out.  need to add some simple tape drive info.}
@end itemize

@node stylistic conventions, basic tar options, assumptions, Tutorial
@ifinfo
@heading Stylistic Conventions
@end ifinfo

In the examples, @samp{$} represents a typical shell prompt.  It
precedes lines you should type; to make this more clear, those lines are
shown in @kbd{this font}, as opposed to lines which represent the
computer's response; those lines are shown in @code{this font}, or
sometimes @samp{like this}.  When we have lines which are too long to be
displayed in any other way, we will show them like this:

@smallexample
This is an example of a line which would otherwise not fit in this space.
@end smallexample

@FIXME{how often do we use smallexample?}

@node basic tar options, frequent operations, stylistic conventions, Tutorial
@section Basic @code{tar} Operations and Options

@code{tar} can take a wide variety of arguments which specify and define
the actions it will have on the particular set of files or the archive.
The main types of arguments to @code{tar} fall into one of two classes:
operations, and options.

Some arguments fall into a class called @dfn{operations}; exactly one of
these is both allowed and required for any instance of using @code{tar};
you may @emph{not} specify more than one.  People sometimes speak of
@dfn{operating modes}.  You are in a particular operating mode when you
have specified the operation which specifies it; there are eight
operations in total, and thus there are eight operating modes.

The other arguments fall into the class known as @dfn{options}.  You are
not required to specify any options, and you are allowed to specify more
than one at a time (depending on the way you are using @code{tar} at
that time).  Some options are used so frequently, and are so useful for
helping you type commands more carefully that they are effectively
``required''.  We will discuss them in this chapter.

You can write most of the @code{tar} operations and options in any of
three forms: long (mnemonic) form, short form, and old style.  Some of
the operations and options have no short or ``old'' forms; however, the
operations and options which we will cover in this tutorial have
corresponding abbreviations.  @FIXME{make sure this is still the case,
at the end} We will indicate those abbreviations appropriately to get
you used to seeing them.  (Note that the ``old style'' option forms
exist in GNU @code{tar} for compatibility with Unix @code{tar}.  We
present a full discussion of this way of writing options and operations
appears in @ref{Old Options}, and we discuss the other two styles of
writing options in @ref{Mnemonic Options} and @ref{Short Options}.)

In the examples and in the text of this tutorial, we usually use the
long forms of operations and options; but the ``short'' forms produce
the same result and can make typing long @code{tar} commands easier.
For example, instead of typing

@example
@kbd{tar --create --verbose --file=afiles.tar apple angst aspic}
@end example

@noindent
you can type
@example
@kbd{tar -c -v -f afiles.tar apple angst aspic}
@end example

@noindent
or even
@example
@kbd{tar -cvf afiles.tar apple angst aspic}
@end example

@noindent
For more information on option syntax, see @ref{Advanced tar}.  In
discussions in the text, when we name an option by its long form, we
also give the corresponding short option in parentheses.

The term, ``option'', can be confusing at times, since ``operations''
are often lumped in with the actual, @emph{optional} ``options'' in certain
general class statements.  For example, we just talked about ``short and
long forms of options and operations''.  However, experienced @code{tar}
users often refer to these by shorthand terms such as, ``short and long
options''.  This term assumes that the ``operations'' are included, also.
Context will help you determine which definition of ``options'' to use.

Similarly, the term ``command'' can be confusing, as it is often used in
two different ways.  People sometimes refer to @code{tar} ``commands''.
A @code{tar} @dfn{command} is the entire command line of user input
which tells @code{tar} what to do --- including the operation, options,
and any arguments (file names, pipes, other commands, etc).  However,
you will also sometimes hear the term ``the @code{tar} command''.  When
the word ``command'' is used specifically like this, a person is usually
referring to the @code{tar} @emph{operation}, not the whole line.
Again, use context to figure out which of the meanings the speaker
intends.

@node frequent operations, Two Frequent Options, basic tar options, Tutorial
@section The Three Most Frequently Used Operations

Here are the three most frequently used operations (both short and long
forms), as well as a brief description of their meanings.  The rest of
this chapter will cover how to use these operations in detail.  We will
present the rest of the operations in the next chapter.

@table @kbd
@item --create
@itemx -c
Create a new @code{tar} archive.
@item --list
@itemx -t
List the contents of an archive.
@item --extract
@itemx -x
Extract one or more members from an archive.
@end table

@node Two Frequent Options, create, frequent operations, Tutorial
@section Two Frequently Used Options

To understand how to run @code{tar} in the three operating modes listed
previously, you also need to understand how to use two of the options to
@code{tar}: @samp{--file} (which takes an archive file as an argument)
and @samp{--verbose}.  (You are usually not @emph{required} to specify
either of these options when you run @code{tar}, but they can be very
useful in making things more clear and helping you avoid errors.)

@menu
* file tutorial::
* verbose tutorial::
* help tutorial::
@end menu

@node file tutorial, verbose tutorial, Two Frequent Options, Two Frequent Options
@unnumberedsubsec The @samp{--file} Option

@table @kbd
@item --file=@var{archive-name}
@itemx -f @var{archive-name}
Specify the name of an archive file.
@end table

You can specify an argument for the @value{op-file} option whenever you
use @code{tar}; this option determines the name of the archive file
that @code{tar} will work on.

If you don't specify this argument, then @code{tar} will use a
default, usually some physical tape drive attached to your machine.
If there is no tape drive attached, or the default is not meaningful,
then @code{tar} will print an error message.  The error message might
look roughly like one of the following:

@example
tar: can't open /dev/rmt8 : No such device or address
tar: can't open /dev/rsmt0 : I/O error
@end example

@noindent
To avoid confusion, we recommend that you always specfiy an archive file
name by using @value{op-file} when writing your @code{tar} commands.
For more information on using the @value{op-file} option, see
@ref{file}.

@node verbose tutorial, help tutorial, file tutorial, Two Frequent Options
@unnumberedsubsec The @samp{--verbose} Option

@table @kbd
@item --verbose
@itemx -v
Show the files being worked on as @code{tar} is running.
@end table

@value{op-verbose} shows details about the results of running
@code{tar}.  This can be especially useful when the results might not be
obvious.  For example, if you want to see the progress of @code{tar} as
it writes files into the archive, you can use the @samp{--verbose}
option.  In the beginning, you may find it useful to use
@samp{--verbose} at all times; when you are more accustomed to
@code{tar}, you will likely want to use it at certain times but not at
others.  We will use @samp{--verbose} at times to help make something
clear, and we will give many examples both using and not using
@samp{--verbose} to show the differences.

Sometimes, a single instance of @samp{--verbose} on the command line
will show a full, @samp{ls} style listing of an archive or files,
giving sizes, owners, and similar information.  Other times,
@samp{--verbose} will only show files or members that the particular
operation is operating on at the time.  In the latter case, you can
use @samp{--verbose} twice in a command to get a listing such as that
in the former case.  For example, instead of saying

@example
@kbd{tar -cvf afiles.tar apple angst aspic}
@end example

@noindent
above, you might say

@example
@kbd{tar -cvvf afiles.tar apple angst aspic}
@end example

@noindent
This works equally well using short or long forms of options.  Using
long forms, you would simply write out the mnemonic form of the option
twice, like this:

@example
$ @kbd{tar --create --verbose --verbose @dots{}}
@end example

@noindent
Note that you must double the hyphens properly each time.

Later in the tutorial, we will give examples using @w{@samp{--verbose
--verbose}}.

@node help tutorial,  , verbose tutorial, Two Frequent Options
@unnumberedsubsec Getting Help: Using the @code{--help} Option

@table @kbd
@item --help

The @samp{--help} option to @code{tar} prints out a very brief list of
all operations and option available for the current version of
@code{tar} available on your system.
@end table

@node create, list, Two Frequent Options, Tutorial
@section How to Create Archives
@UNREVISED

One of the basic operations of @code{tar} is @value{op-create}, which
you use to create a @code{tar} archive.  We will explain
@samp{--create} first because, in order to learn about the other
operations, you will find it useful to have an archive available to
practice on.

To make this easier, in this section you will first create a directory
containing three files.  Then, we will show you how to create an
@emph{archive} (inside the new directory).  Both the directory, and
the archive are specifically for you to practice on.  The rest of this
chapter and the next chapter will show many examples using this
directory and the files you will create: some of those files may be
other directories and other archives.

The three files you will archive in this example are called
@file{blues}, @file{folk}, and @file{jazz}.  The archive is called
@file{collection.tar}.

This section will proceed slowly, detailing how to use @samp{--create}
in @code{verbose} mode, and showing examples using both short and long
forms.  In the rest of the tutorial, and in the examples in the next
chapter, we will proceed at a slightly quicker pace.  This section
moves more slowly to allow beginning users to understand how
@code{tar} works.

@menu
* prepare for examples::
* Creating the archive::
* create verbose::
* short create::
* create dir::
@end menu

@node prepare for examples, Creating the archive, create, create
@subsection Preparing a Practice Directory for Examples

To follow along with this and future examples, create a new directory
called @file{practice} containing files called @file{blues}, @file{folk}
and @file{jazz}.  The files can contain any information you like:
ideally, they should contain information which relates to their names,
and be of different lengths.  Our examples assume that @file{practice}
is a subdirectory of your home directory.

Now @code{cd} to the directory named @file{practice}; @file{practice}
is now your @dfn{working directory}.  (@emph{Please note}: Although
the full path name of this directory is
@file{/@var{homedir}/practice}, in our examples we will refer to
this directory as @file{practice}; the @var{homedir} is presumed.

In general, you should check that the files to be archived exist where
you think they do (in the working directory) by running @code{ls}.
Because you just created the directory and the files and have changed to
that directory, you probably don't need to do that this time.

It is very important to make sure there isn't already a file in the
working directory with the archive name you intend to use (in this case,
@samp{collection.tar}), or that you don't care about its contents.
Whenever you use @samp{create}, @code{tar} will erase the current
contents of the file named by @value{op-file} if it exists.  @code{tar}
will not tell you if you are about to overwrite a file unless you
specify an option which does this @FIXME{xref to the node for
--backup!}.  To add files to an existing archive, you need to use a
different option, such as @value{op-append}; see @ref{append} for
information on how to do this.

@node Creating the archive, create verbose, prepare for examples, create
@subsection Creating the Archive

To place the files @file{blues}, @file{folk}, and @file{jazz} into an
archive named @file{collection.tar}, use the following command:

@example
$ @kbd{tar --create --file=collection.tar blues folk jazz}
@end example

The order of the arguments is not very important, @emph{when using long
option forms}.  You could also say:

@example
$ @kbd{tar blues --create folk --file=collection.tar jazz}
@end example

@noindent
However, you can see that this order is harder to understand; this is
why we will list the arguments in the order that makes the commands
easiest to understand (and we encourage you to do the same when you use
@code{tar}, to avoid errors).

Note that the part of the command which says,
@w{@kbd{--file=collection.tar}} is considered to be @emph{one} argument.
If you substituted any other string of characters for
@kbd{`collection.tar'},  then that string would become the name of the
archive file you create.

The order of the options becomes more important when you begin to use
short forms.  With short forms, if you type commands in the wrong order
(even if you type them correctly in all other ways), you may end up with
results you don't expect.  For this reason, it is a good idea to get
into the habit of typing options in the order that makes inherent sense.
@xref{short create} for more information on this.

In this example, you type the command as shown above: @samp{--create}
is the operation which creates the new archive
(@file{collection.tar}), and @samp{--file} is the option which lets
you give it the name you chose.  The files, @file{blues}, @file{folk},
and @file{jazz}, are now members of the archive, @file{collection.tar}
(they are @dfn{file name arguments} to the @samp{--create} operation)
@FIXME{xref here to the discussion of file name args?}.  Now that they
are are in the archive, they are called @emph{archive members}, not
files @FIXME{xref to definitions?}.

When you create an archive, you @emph{must} specify which files you want
placed in the archive.  If you do not specify any archive members, GNU
@code{tar} will complain.

If you now list the contents of the working directory (@kbd{ls}), you will
find the archive file listed as well as the files you saw previously:

@example
blues   folk   jazz   collection.tar
@end example

@noindent
Creating the archive @samp{collection.tar} did not destroy the copies of
the files in the directory.

Keep in mind that if you don't indicate an operation, @code{tar} will not
run and will prompt you for one.  If you don't name any files, @code{tar}
will complain.  You must have write access to the working directory,
or else you will not be able to create an archive in that directory.

@emph{Caution}: Do not attempt to use @value{op-create} to add files to
an existing archive; it will delete the archive and write a new one.
Use @value{op-append} instead.  @xref{append}.

@node create verbose, short create, Creating the archive, create
@subsection Running @samp{--create} with @samp{--verbose}

If you include the @value{op-verbose} option on the command line,
@code{tar} will list the files it is acting on as it is working.  In
verbose mode, the @code{create} example above would appear as:

@example
$ @kbd{tar --create --verbose --file=collection.tar blues folk jazz}
blues
folk
jazz
@end example

This example is just like the example we showed which did not use
@samp{--verbose}, except that @code{tar} generated the remaining lines
@iftex
(note the different font styles).
@end iftex
@ifinfo
.
@end ifinfo

In the rest of the examples in this chapter, we will frequently use
@code{verbose} mode so we can show actions or @code{tar} responses that
you would otherwise not see, and which are important for you to
understand.

@node short create, create dir, create verbose, create
@subsection Short Forms with @samp{create}

As we said before, the @value{op-create} operation is one of the most
basic uses of @code{tar}, and you will use it countless times.
Eventually, you will probably want to use abbreviated (or ``short'')
forms of options.  A full discussion of the three different forms that
options can take appears in @ref{Styles}; for now, here is what the
previous example (including the @value{op-verbose} option) looks like
using short option forms:

@example
$ @kbd{tar -cvf collection.tar blues folk jazz}
blues
folk
jazz
@end example

@noindent
As you can see, the system responds the same no matter whether you use
long or short option forms.

@FIXME{i don't like how this is worded:} One difference between using
short and long option forms is that, although the exact placement of
arguments following options is no more specific when using short forms,
it is easier to become confused and make a mistake when using short
forms.  For example, suppose you attempted the above example in the
following way:

@example
$ @kbd{tar -cfv collection.tar blues folk jazz}
@end example

@noindent
In this case, @code{tar} will make an archive file called @file{v},
containing the files @file{blues}, @file{folk}, and @file{jazz}, because
the @samp{v} is the closest ``file name'' to the @samp{-f} option, and
is thus taken to be the chosen archive file name.  @code{tar} will try
to add a file called @file{collection.tar} to the @file{v} archive file;
if the file @file{collection.tar} did not already exist, @code{tar} will
report an error indicating that this file does not exist.  If the file
@file{collection.tar} does already exist (e.g., from a previous command
you may have run), then @code{tar} will add this file to the archive.
Because the @samp{-v} option did not get registered, @code{tar} will not
run under @samp{verbose} mode, and will not report its progress.

The end result is that you may be quite confused about what happened,
and possibly overwrite a file.  To illustrate this further, we will show
you how an example we showed previously would look using short forms.

This example,

@example
$ @kbd{tar blues --create folk --file=collection.tar jazz}
@end example

@noindent
is confusing as it is.  When shown using short forms, however, it
becomes much more so:

@example
$ @kbd{tar blues -c folk -f collection.tar jazz}
@end example

@noindent
It would be very easy to put the wrong string of characters
immediately following the @samp{-f}, but doing that could sacrifice
valuable data.

For this reason, we recommend that you pay very careful attention to
the order of options and placement of file and archive names,
especially when using short option forms.  Not having the option name
written out mnemonically can affect how well you remember which option
does what, and therefore where different names have to be placed.
(Placing options in an unusual order can also cause @code{tar} to
report an error if you have set the shell environment variable,
@code{POSIXLY_CORRECT}; @pxref{posix compliance} for more information
on this.)

@node create dir,  , short create, create
@subsection Archiving Directories

@cindex Archiving Directories
@cindex Directories, Archiving
You can archive a directory by specifying its directory name as a
file name argument to @code{tar}.  The files in the directory will be
archived relative to the working directory, and the directory will be
re-created along with its contents when the archive is extracted.

To archive a directory, first move to its superior directory.  If you
have followed the previous instructions in this tutorial, you should
type:

@example
$ @kbd{cd ..}
$
@end example

@noindent
This will put you into the directory which contains @file{practice},
i.e. your home directory.  Once in the superior directory, you can
specify the subdirectory, @file{practice}, as a file name argument.  To
store @file{practice} in the new archive file @file{music.tar}, type:

@example
$ @kbd{tar --create --verbose --file=music.tar practice}
@end example

@noindent
@code{tar} should output:

@example
practice/
practice/blues
practice/folk
practice/jazz
practice/collection.tar
@end example

Note that the archive thus created is not in the subdirectory
@file{practice}, but rather in the current working directory---the
directory from which @code{tar} was invoked.  Before trying to archive a
directory from its superior directory, you should make sure you have
write access to the superior directory itself, not only the directory
you are trying archive with @code{tar}.  For example, you will probably
not be able to store your home directory in an archive by invoking
@code{tar} from the root directory; @value{xref-absolute-names}.  (Note
also that @file{collection.tar}, the original archive file, has itself
been archived.  @code{tar} will accept any file as a file to be
archived, regardless of its content.  When @file{music.tar} is
extracted, the archive file @file{collection.tar} will be re-written
into the file system).

If you give @code{tar} a command such as

@example
$ @kbd{tar --create --file=foo.tar .}
@end example

@noindent
@code{tar} will report @samp{tar: foo.tar is the archive; not dumped}.
This happens because @code{tar} creates the archive @file{foo.tar} in
the current directory before putting any files into it.  Then, when
@code{tar} attempts to add all the files in the directory @file{.} to
the archive, it notices that the file @file{foo.tar} is the same as the
archive, and skips it.  (It makes no sense to put an archive into
itself.)  GNU @code{tar} will continue in this case, and create the
archive normally, except for the exclusion of that one file.
(@emph{Please note:} Other versions of @code{tar} are not so clever;
they will enter an infinite loop when this happens, so you should not
depend on this behavior unless you are certain you are running GNU
@code{tar}.  @FIXME{bob doesn't like this sentence, since he does it
all the time, and we've been doing it in the editing passes for this
manual: In general, make sure that the archive is not inside a
directory being dumped.})

@node list, extract, create, Tutorial
@section How to List Archives

Frequently, you will find yourself wanting to determine exactly what a
particular archive contains.  You can use the @value{op-list} operation
to get the member names as they currently appear in the archive, as well
as various attributes of the files at the time they were archived.  For
example, you can examine the archive @file{collection.tar} that you
created in the last section with the command,

@example
$ @kbd{tar --list --file=collection.tar}
@end example

@noindent
The output of @code{tar} would then be:

@example
blues
folk
jazz
@end example

@FIXME{we hope this will change.  if it doesn't, need to show the
creation of bfiles somewhere above!!! : }

@noindent
The archive @file{bfiles.tar} would list as follows:

@example
./birds
baboon
./box
@end example

@noindent
Be sure to use a @value{op-file} option just as with @value{op-create}
to specify the name of the archive.

If you use the @value{op-verbose} option with @samp{--list}, then
@code{tar} will print out a listing reminiscent of @w{@samp{ls -l}},
showing owner, file size, and so forth.

If you had used @value{op-verbose} mode, the example above would look
like:

@example
$ @kbd{tar --list --verbose --file=collection.tar folk}
-rw-rw-rw- myself user 62 1990-05-23 10:55 folk
@end example

@cindex File name arguments, using @code{--list} with
@cindex @code{--list} with file name arguments
You can specify one or more individual member names as arguments when
using @samp{list}.  In this case, @code{tar} will only list the
names of members you identify.  For example, @w{@kbd{tar --list
--file=afiles.tar apple}} would only print @file{apple}.

@FIXME{we hope the relevant aspects of this will change:}Because
@code{tar} preserves paths, file names must be specified as they appear
in the archive (ie., relative to the directory from which the archive
was created).  Therefore, it is essential when specifying member names
to @code{tar} that you give the exact member names.  For example,
@w{@kbd{tar --list --file=bfiles birds}} would produce an error message
something like @samp{tar: birds: Not found in archive}, because there is
no member named @file{birds}, only one named @file{./birds}.  While the
names @file{birds} and @file{./birds} name the same file, @emph{member}
names are compared using a simplistic name comparison, in which an exact
match is necessary.  @xref{absolute}.

However, @w{@kbd{tar --list --file=collection.tar folk}} would respond
with @file{folk}, because @file{folk} is in the archive file
@file{collection.tar}.  If you are not sure of the exact file name, try
listing all the files in the archive and searching for the one you
expect to find; remember that if you use @samp{--list} with no file
names as arguments, @code{tar} will print the names of all the members
stored in the specified archive.

@menu
* list dir::
@end menu

@node list dir,  , list, list
@unnumberedsubsec Listing the Contents of a Stored Directory
@UNREVISED

@FIXME{i changed the order of these nodes around and haven't had a
chance to play around with this node's example, yet.  i have to play
with it and see what it actually does for my own satisfaction, even if
what it says *is* correct..}

To get information about the contents of an archived directory,
use the directory name as a file name argument in conjunction with
@value{op-list}.  To find out file attributes, include the
@value{op-verbose} option.

For example, to find out about files in the directory @file{practice}, in
the archive file @file{music.tar}, type:

@example
$ @kbd{tar --list --verbose --file=music.tar practice}
@end example

@code{tar} responds:

@example
drwxrwxrwx myself user 0 1990-05-31 21:49 practice/
-rw-rw-rw- myself user 42 1990-05-21 13:29 practice/blues
-rw-rw-rw- myself user 62 1990-05-23 10:55 practice/folk
-rw-rw-rw- myself user 40 1990-05-21 13:30 practice/jazz
-rw-rw-rw- myself user 10240 1990-05-31 21:49 practice/collection.tar
@end example

When you use a directory name as a file name argument, @code{tar} acts on
all the files (including sub-directories) in that directory.

@node extract, going further, list, Tutorial
@section How to Extract Members from an Archive
@UNREVISED
@cindex Extraction
@cindex Retrieving files from an archive
@cindex Resurrecting files from an archive

Creating an archive is only half the job---there is no point in storing
files in an archive if you can't retrieve them.  The act of retrieving
members from an archive so they can be used and manipulated as
unarchived files again is called @dfn{extraction}.  To extract files
from an archive, use the @value{op-extract} operation.  As with
@value{op-create}, specify the name of the archive with @value{op-file}.
Extracting an archive does not modify the archive in any way; you can
extract it multiple times if you want or need to.

Using @samp{--extract}, you can extract an entire archive, or specific
files.  The files can be directories containing other files, or not.  As
with @value{op-create} and @value{op-list}, you may use the short or the
long form of the operation without affecting the performance.

@menu
* extracting archives::
* extracting files::
* extract dir::
* failing commands::
@end menu

@node extracting archives, extracting files, extract, extract
@subsection Extracting an Entire Archive

To extract an entire archive, specify the archive file name only, with
no individual file names as arguments.  For example,

@example
$ @kbd{tar -xvf collection.tar}
@end example

@noindent
produces this:

@example
-rw-rw-rw- me user     28 1996-10-18 16:31 jazz
-rw-rw-rw- me user     21 1996-09-23 16:44 blues
-rw-rw-rw- me user     20 1996-09-23 16:44 folk
@end example

@node extracting files, extract dir, extracting archives, extract
@subsection Extracting Specific Files

To extract specific archive members, give their exact member names as
arguments, as printed by @value{op-list}.  If you had mistakenly deleted
one of the files you had placed in the archive @file{collection.tar}
earlier (say, @file{blues}), you can extract it from the archive without
changing the archive's structure.  It will be identical to the original
file @file{blues} that you deleted.  @FIXME{check this; will the times,
permissions, owner, etc be the same, also?}

First, make sure you are in the @file{practice} directory, and list the
files in the directory.  Now, delete the file, @samp{blues}, and list
the files in the directory again.

You can now extract the member @file{blues} from the archive file
@file{collection.tar} like this:

@example
$ @kbd{tar --extract --file=collection.tar blues}
@end example

@noindent
If you list the files in the directory again, you will see that the file
@file{blues} has been restored, with its original permissions, creation
times, and owner.  @FIXME{This is only accidentally true, but not in
general.  In most cases, one has to be root for restoring the owner, and
use a special option for restoring permissions.  Here, it just happens
that the restoring user is also the owner of the archived members, and
that the current @code{umask} is compatible with original permissions.}
(These parameters will be identical to those which
the file had when you originally placed it in the archive; any changes
you may have made before deleting the file from the file system,
however, will @emph{not} have been made to the archive member.)  The
archive file, @samp{collection.tar}, is the same as it was before you
extracted @samp{blues}.  You can confirm this by running @code{tar} with
@value{op-list}.

@FIXME{we hope this will change:}Remember that as with other operations,
specifying the exact member name is important.  @w{@kbd{tar --extract
--file=bfiles.tar birds}} will fail, because there is no member named
@file{birds}.  To extract the member named @file{./birds}, you must
specify @w{@kbd{tar --extract --file=bfiles.tar ./birds}}.  To find the
exact member names of the members of an archive, use @value{op-list}
(@pxref{list}).

If you give the @value{op-verbose} option, then @value{op-extract} will
print the names of the archive members as it extracts them.

@node extract dir, failing commands, extracting files, extract
@subsection Extracting Files that are Directories

Extracting directories which are members of an archive is similar to
extracting other files.  The main difference to be aware of is that if
the extracted directory has the same name as any directory already in
the working directory, then files in the extracted directory will be
placed into the directory of the same name.  Likewise, if there are
files in the pre-existing directory with the same names as the members
which you extract, the files from the extracted archive will overwrite
the files already in the working directory (and possible
subdirectories).  This will happen regardless of whether or not the
files in the working directory were more recent than those extracted.

However, if a file was stored with a directory name as part of its file
name, and that directory does not exist under the working directory when
the file is extracted, @code{tar} will create the directory.

We can demonstrate how to use @samp{--extract} to extract a directory
file with an example.  Change to the @file{practice} directory if you
weren't there, and remove the files @file{folk} and @file{jazz}.  Then,
go back to the parent directory and extract the archive
@file{music.tar}.  You may either extract the entire archive, or you may
extract only the files you just deleted.  To extract the entire archive,
don't give any file names as arguments after the archive name
@file{music.tar}.  To extract only the files you deleted, use the
following command:

@example
$ @kbd{tar -xvf music.tar practice/folk practice/jazz}
@end example

@FIXME{need to show tar's response; used verbose above.  also, here's a
good place to demonstrate the -v -v thing.  have to write that up
(should be trivial, but i'm too tired!).}

@noindent
Because you created the directory with @file{practice} as part of the
file names of each of the files by archiving the @file{practice}
directory as @file{practice}, you must give @file{practice} as part
of the file names when you extract those files from the archive.

@FIXME{IMPORTANT!  show the final structure, here.  figure out what it
will be.}

@node failing commands,  , extract dir, extract
@subsection Commands That Will Fail

Here are some sample commands you might try which will not work, and why
they won't work.

If you try to use this command,

@example
$ @kbd{tar -xvf music.tar folk jazz}
@end example

@noindent
you will get the following response:

@example
tar: folk: Not found in archive
tar: jazz: Not found in archive
$
@end example

@noindent
This is because these files were not originally @emph{in} the parent
directory @file{..}, where the archive is located; they were in the
@file{practice} directory, and their file names reflect this:

@example
$ @kbd{tar -tvf music.tar}
practice/folk
practice/jazz
practice/rock
@end example

@FIXME{make sure the above works when going through the examples in
order...}

@noindent
Likewise, if you try to use this command,

@example
$ @kbd{tar -tvf music.tar folk jazz}
@end example

@noindent
you would get a similar response.  Members with those names are not in the
archive.  You must use the correct member names in order to extract the
files from the archive.

If you have forgotten the correct names of the files in the archive,
use @w{@kbd{tar --list --verbose}} to list them correctly.

@FIXME{more examples, here?  hag thinks it's a good idea.}

@node going further,  , extract, Tutorial
@section Going Further Ahead in this Manual

@FIXME{need to write up a node here about the things that are going to
be in the rest of the manual.}

@node tar invocation, operations, Tutorial, Top
@chapter Invoking GNU @code{tar}
@UNREVISED

This chapter is about how one invokes the GNU @code{tar} command, from
the command synopsis (@pxref{Synopsis}).  There are numerous options,
and many styles for writing them.  One mandatory option specifies
the operation @code{tar} should perform (@pxref{Operation Summary}),
other options are meant to detail how this operation should be performed
(@pxref{Option Summary}).  Non-option arguments are not always interpreted
the same way, depending on what the operation is.

You will find in this chapter everything about option styles and rules for
writing them (@pxref{Styles}).  On the other hand, operations and options
are fully described elsewhere, in other chapters.  Here, you will find
only synthetic descriptions for operations and options, together with
pointers to other parts of the @code{tar} manual.

Some options are so special they are fully described right in this
chapter.  They have the effect of inhibiting the normal operation of
@code{tar} or else, they globally alter the amount of feedback the user
receives about what is going on.  These are the @value{op-help} and
@value{op-version} (@pxref{help}), @value{op-verbose} (@pxref{verbose})
and @value{op-interactive} options (@pxref{interactive}).

@menu
* Synopsis::
* using tar options::
* Styles::
* All Options::
* help::
* verbose::
* interactive::
@end menu

@node Synopsis, using tar options, tar invocation, tar invocation
@section General Synopsis of @code{tar}

The GNU @code{tar} program is invoked as either one of:

@example
@kbd{tar @var{option}@dots{} [@var{name}]@dots{}}
@kbd{tar @var{letter}@dots{} [@var{argument}]@dots{} [@var{option}]@dots{} [@var{name}]@dots{}}
@end example

The second form is for when old options are being used.

You can use @code{tar} to store files in an archive, to extract them from
an archive, and to do other types of archive manipulation.  The primary
argument to @code{tar}, which is called the @dfn{operation}, specifies
which action to take.  The other arguments to @code{tar} are either
@dfn{options}, which change the way @code{tar} performs an operation,
or file names or archive members, which specify the files or members
@code{tar} is to act on.

You can actually type in arguments in any order, even if in this manual
the options always precede the other arguments, to make examples easier
to understand.  Further, the option stating the main operation mode
(the @code{tar} main command) is usually given first.

Each @var{name} in the synopsis above is interpreted as an archive member
name when the main command is one of @value{op-compare}, @value{op-delete},
@value{op-extract}, @value{op-list} or @value{op-update}.  When naming
archive members, you must give the exact name of the member in the
archive, as it is printed by @value{op-list}.  For @value{op-append}
and @value{op-create}, these @var{name} arguments specify the names
of either files or directory hierarchies to place in the archive.
These files or hierarchies should already exist in the file system,
prior to the execution of the @code{tar} command.

@code{tar} interprets relative file names as being relative to the
working directory.  @code{tar} will make all file names relative
(by removing leading slashes when archiving or restoring files),
unless you specify otherwise (using the @value{op-absolute-names}
option).  @value{xref-absolute-names}, for more information about
@value{op-absolute-names}.

If you give the name of a directory as either a file name or a member
name, then @code{tar} acts recursively on all the files and directories
beneath that directory.  For example, the name @file{/} identifies all
the files in the filesystem to @code{tar}.

The distinction between file names and archive member names is especially
important when shell globbing is used, and sometimes a source of confusion
for newcomers.  @xref{Wildcards}, for more information about globbing.
The problem is that shells may only glob using existing files in the
file system.  Only @code{tar} itself may glob on archive members, so when
needed, you must ensure that wildcard characters reach @code{tar} without
being interpreted by the shell first.  Using a backslash before @samp{*}
or @samp{?}, or putting the whole argument between quotes, is usually
sufficient for this.

Even if @var{name}s are often specified on the command line, they
can also be read from a text file in the file system, using the
@value{op-files-from} option.

If you don't use any file name arguments, @value{op-append},
@value{op-delete} and @value{op-concatenate} will do nothing, while
@value{op-create} will usually yield a diagnostic and inhibit @code{tar}
execution.  The other operations of @code{tar} (@value{op-list},
@value{op-extract}, @value{op-compare}, and @value{op-update}) will act
on the entire contents of the archive.

@cindex exit status
@cindex return status
Besides successful exits, GNU @code{tar} may fail for many reasons.
Some reasons correspond to bad usage, that is, when the @code{tar}
command is improperly written.
Errors may be encountered later, while encountering an error
processing the archive or the files.  Some errors are recoverable,
in which case the failure is delayed until @code{tar} has completed
all its work.  Some errors are such that it would not meaningful,
or at least risky, to continue processing: @code{tar} then aborts
processing immediately.  All abnormal exits, whether immediate or
delayed, should always be clearly diagnosed on @code{stderr}, after
a line stating the nature of the error.

GNU @code{tar} returns only a few exit statuses.  I'm really
aiming simplicity in that area, for now.  If you are not using the
@value{op-compare} option, zero means that everything went well, besides
maybe innocuous warnings.  Nonzero means that something went wrong.
Right now, as of today, ``nonzero'' is almost always 2, except for
remote operations, where it may be 128.

@node using tar options, Styles, Synopsis, tar invocation
@section Using @code{tar} Options

GNU @code{tar} has a total of eight operating modes which allow you to
perform a variety of tasks.  You are required to choose one operating
mode each time you employ the @code{tar} program by specifying one, and
only one operation as an argument to the @code{tar} command (two lists
of four operations each may be found at @ref{frequent operations} and
@ref{Operations}).  Depending on circumstances, you may also wish to
customize how the chosen operating mode behaves.  For example, you may
wish to change the way the output looks, or the format of the files that
you wish to archive may require you to do something special in order to
make the archive look right.

You can customize and control @code{tar}'s performance by running
@code{tar} with one or more options (such as @value{op-verbose}, which
we used in the tutorial).  As we said in the tutorial, @dfn{options} are
arguments to @code{tar} which are (as their name suggests) optional.
Depending on the operating mode, you may specify one or more options.
Different options will have different effects, but in general they all
change details of the operation, such as archive format, archive name,
or level of user interaction.  Some options make sense with all
operating modes, while others are meaningful only with particular modes.
You will likely use some options frequently, while you will only use
others infrequently, or not at all.  (A full list of options is
available in @pxref{All Options}.)

Note that @code{tar} options are case sensitive.  For example, the
options @samp{-T} and @samp{-t} are different; the first requires an
argument for stating the name of a file providing a list of @var{name}s,
while the second does not require an argument and is another way to
write @value{op-list}.

In addition to the eight operations, there are many options to
@code{tar}, and three different styles for writing both: long (mnemonic)
form, short form, and old style.  These styles are discussed below.
Both the options and the operations can be written in any of these three
styles.

@FIXME{menu at end of this node.  need to think of an actual outline
for this chapter; probably do that after stuff from chap. 4 is
incorporated.}

@node Styles, All Options, using tar options, tar invocation
@section The Three Option Styles

There are three styles for writing operations and options to the command
line invoking @code{tar}.  The different styles were developed at
different times during the history of @code{tar}.  These styles will be
presented below, from the most recent to the oldest.

Some options must take an argument.  (For example, @value{op-file} takes
the name of an archive file as an argument.  If you do not supply an
archive file name, @code{tar} will use a default, but this can be
confusing; thus, we recommend that you always supply a specific archive
file name.)  Where you @emph{place} the arguments generally depends on
which style of options you choose.  We will detail specific information
relevant to each option style in the sections on the different option
styles, below.  The differences are subtle, yet can often be very
important; incorrect option placement can cause you to overwrite a
number of important files.  We urge you to note these differences, and
only use the option style(s) which makes the most sense to you until you
feel comfortable with the others.

@FIXME{hag to write a brief paragraph on the option(s) which can
optionally take an argument}

@menu
* Mnemonic Options::            Mnemonic Option Style
* Short Options::               Short Option Style
* Old Options::                 Old Option Style
* Mixing::                      Mixing Option Styles
@end menu

@node Mnemonic Options, Short Options, Styles, Styles
@subsection Mnemonic Option Style

@FIXME{have to decide whether or ot to replace other occurrences of
"mnemonic" with "long", or *ugh* vice versa.}

Each option has at least one long (or mnemonic) name starting with two
dashes in a row, e.g. @samp{list}.  The long names are more clear than
their corresponding short or old names.  It sometimes happens that a
single mnemonic option has many different different names which are
synonymous, such as @samp{--compare} and @samp{--diff}.  In addition,
long option names can be given unique abbreviations.  For example,
@samp{--cre} can be used in place of @samp{--create} because there is no
other mnemonic option which begins with @samp{cre}.  (One way to find
this out is by trying it and seeing what happens; if a particular
abbreviation could represent more than one option, @code{tar} will tell
you that that abbreviation is ambiguous and you'll know that that
abbreviation won't work.  You may also choose to run @samp{tar --help}
to see a list of options.  Be aware that if you run @code{tar} with a
unique abbreviation for the long name of an option you didn't want to
use, you are stuck; @code{tar} will perform the command as ordered.)

Mnemonic options are meant to be obvious and easy to remember, and their
meanings are generally easier to discern than those of their
corresponding short options (see below).  For example:

@example
$ @kbd{tar --create --verbose --blocking-factor=20 --file=/dev/rmt0}
@end example

@noindent
gives a fairly good set of hints about what the command does, even
for those not fully acquainted with @code{tar}.

Mnemonic options which require arguments take those arguments
immediately following the option name; they are introduced by an equal
sign.  For example, the @samp{--file} option (which tells the name
of the @code{tar} archive) is given a file such as @file{archive.tar}
as argument by using the notation @samp{--file=archive.tar} for the
mnemonic option.

@node Short Options, Old Options, Mnemonic Options, Styles
@subsection Short Option Style

Most options also have a short option name.  Short options start with
a single dash, and are followed by a single character, e.g. @samp{-t}
(which is equivalent to @samp{--list}).  The forms are absolutely
identical in function; they are interchangeable.

The short option names are faster to type than long option names.

Short options which require arguments take their arguments immediately
following the option, usually separated by white space.  It is also
possible to stick the argument right after the short option name, using
no intervening space.  For example, you might write @w{@samp{-f
archive.tar}} or @samp{-farchive.tar} instead of using
@samp{--file=archive.tar}.  Both @samp{--file=@var{archive-name}} and
@w{@samp{-f @var{archive-name}}} denote the option which indicates a
specific archive, here named @file{archive.tar}.

Short options' letters may be clumped together, but you are not
required to do this (as compared to old options; see below).  When short
options are clumped as a set, use one (single) dash for them all, e.g.
@w{@samp{@code{tar} -cvf}}.  Only the last option in such a set is allowed
to have an argument@footnote{Clustering many options, the last of which
has an argument, is a rather opaque way to write options.  Some wonder if
GNU @code{getopt} should not even be made helpful enough for considering
such usages as invalid.}.

When the options are separated, the argument for each option which requires
an argument directly follows that option, as is usual for Unix programs.
For example:

@example
$ @kbd{tar -c -v -b 20 -f /dev/rmt0}
@end example

If you reorder short options' locations, be sure to move any arguments
that belong to them.  If you do not move the arguments properly, you may
end up overwriting files.

@node Old Options, Mixing, Short Options, Styles
@subsection Old Option Style
@UNREVISED

Like short options, old options are single letters.  However, old options
must be written together as a single clumped set, without spaces separating
them or dashes preceding them@footnote{Beware that if you precede options
with a dash, you are announcing the short option style instead of the
old option style; short options are decoded differently.}.  This set
of letters must be the first to appear on the command line, after the
@code{tar} program name and some whitespace; old options cannot appear
anywhere else.  The letter of an old option is exactly the same letter as
the corresponding short option.  For example, the old option @samp{t} is
the same as the short option @samp{-t}, and consequently, the same as the
mnemonic option @samp{--list}.  So for example, the command @w{@samp{tar
cv}} specifies the option @samp{-v} in addition to the operation @samp{-c}.

@FIXME{bob suggests having an uglier example. :-) }

When options that need arguments are given together with the command,
all the associated arguments follow, in the same order as the options.
Thus, the example given previously could also be written in the old
style as follows:

@example
$ @kbd{tar cvbf 20 /dev/rmt0}
@end example

@noindent
Here, @samp{20} is the argument of @samp{-b} and @samp{/dev/rmt0} is
the argument of @samp{-f}.

On the other hand, this old style syntax makes it difficult to match
option letters with their corresponding arguments, and is often
confusing.  In the command @w{@samp{tar cvbf 20 /dev/rmt0}}, for example,
@samp{20} is the argument for @samp{-b}, @samp{/dev/rmt0} is the
argument for @samp{-f}, and @samp{-v} does not have a corresponding
argument.  Even using short options like in @w{@samp{tar -c -v -b 20 -f
/dev/rmt0}} is clearer, putting all arguments next to the option they
pertain to.

If you want to reorder the letters in the old option argument, be
sure to reorder any corresponding argument appropriately.

This old way of writing @code{tar} options can surprise even experienced
users.  For example, the two commands:

@example
@kbd{tar cfz archive.tar.gz file}
@kbd{tar -cfz archive.tar.gz file}
@end example

@noindent
are quite different.  The first example uses @file{archive.tar.gz} as
the value for option @samp{f} and recognizes the option @samp{z}.  The
second example, however, uses @file{z} as the value for option
@samp{f}---probably not what was intended.

Old options are kept for compatibility with old versions of @code{tar}.

This second example could be corrected in many ways, among which the
following are equivalent:

@example
@kbd{tar -czf archive.tar.gz file}
@kbd{tar -cf archive.tar.gz -z file}
@kbd{tar cf archive.tar.gz -z file}
@end example

@FIXME{still could explain this better; it's redundant:}

@cindex option syntax, traditional
As far as we know, all @code{tar} programs, GNU and non-GNU, support
old options.  GNU @code{tar} supports them not only for historical
reasons, but also because many people are used to them.  For
compatibility with Unix @code{tar}, the first argument is always
treated as containing command and option letters even if it doesn't
start with @samp{-}.  Thus, @samp{tar c} is equivalent to @w{@samp{tar
-c}:} both of them specify the @value{op-create} command to create an
archive.

@node Mixing,  , Old Options, Styles
@subsection Mixing Option Styles

All three styles may be intermixed in a single @code{tar} command, so
long as the rules for each style are fully respected@footnote{Before GNU
@code{tar} version 1.11.6, a bug prevented intermixing old style options
with mnemonic options in some cases.}.  Old style options and either of the
modern styles of options may be mixed within a single @code{tar} command.
However, old style options must be introduced as the first arguments only,
following the rule for old options (old options must appear directly
after the @code{tar} command and some whitespace).  Modern options may
be given only after all arguments to the old options have been collected.
If this rule is not respected, a modern option might be falsely interpreted
as the value of the argument to one of the old style options.

For example, all the following commands are wholly equivalent, and
illustrate the many combinations and orderings of option styles.

@example
@kbd{tar --create --file=archive.tar}
@kbd{tar --create -f archive.tar}
@kbd{tar --create -farchive.tar}
@kbd{tar --file=archive.tar --create}
@kbd{tar --file=archive.tar -c}
@kbd{tar -c --file=archive.tar}
@kbd{tar -c -f archive.tar}
@kbd{tar -c -farchive.tar}
@kbd{tar -cf archive.tar}
@kbd{tar -cfarchive.tar}
@kbd{tar -f archive.tar --create}
@kbd{tar -f archive.tar -c}
@kbd{tar -farchive.tar --create}
@kbd{tar -farchive.tar -c}
@kbd{tar c --file=archive.tar}
@kbd{tar c -f archive.tar}
@kbd{tar c -farchive.tar}
@kbd{tar cf archive.tar}
@kbd{tar f archive.tar --create}
@kbd{tar f archive.tar -c}
@kbd{tar fc archive.tar}
@end example

On the other hand, the following commands are @emph{not} equivalent to
the previous set:

@example
@kbd{tar -f -c archive.tar}
@kbd{tar -fc archive.tar}
@kbd{tar -fcarchive.tar}
@kbd{tar -farchive.tarc}
@kbd{tar cfarchive.tar}
@end example

@noindent
These last examples mean something completely different from what the
user intended (judging based on the example in the previous set which
uses long options, whose intent is therefore very clear).  The first
four specify that the @code{tar} archive would be a file named
@samp{-c}, @samp{c}, @samp{carchive.tar} or @samp{archive.tarc},
respectively.  The first two examples also specify a single non-option,
@var{name} argument having the value @samp{archive.tar}.  The last
example contains only old style option letters (repeating option
@samp{c} twice), not all of which are meaningful (eg., @samp{.},
@samp{h}, or @samp{i}), with no argument value.  @FIXME{not sure i liked
the first sentence of this paragraph..}

@node All Options, help, Styles, tar invocation
@section All @code{tar} Options

The coming manual sections contain an alphabetical listing of all
@code{tar} operations and options, with brief descriptions and cross
references to more in-depth explanations in the body of the manual.
They also contain an alphabetically arranged table of the short option
forms with their corresponding long option.  You can use this table as
a reference for deciphering @code{tar} commands in scripts.

@menu
* Operation Summary::
* Option Summary::
* Short Option Summary::
@end menu

@node Operation Summary, Option Summary, All Options, All Options
@subsection Operations

@table @kbd

@item --append
@itemx -r

Appends files to the end of the archive.  @xref{append}.

@item --catenate
@itemx -A

Same as @samp{--concatenate}.  @xref{concatenate}.

@item --compare
@itemx -d

Compares archive members with their counterparts in the file
system, and reports differences in file size, mode, owner,
modification date and contents.  @xref{compare}.

@item --concatenate
@itemx -A

Appends other @code{tar} archives to the end of the archive.
@xref{concatenate}.

@item --create
@itemx -c

Creates a new @code{tar} archive.  @xref{create}.

@item --delete

Deletes members from the archive.  Don't try this on a archive on a
tape!  @xref{delete}.

@item --diff
@itemx -d

Same @samp{--compare}.  @xref{compare}.

@item --extract
@itemx -x

Extracts members from the archive into the file system.  @xref{extract}.

@item --get
@itemx -x

Same as @samp{--extract}.   @xref{extract}.

@item --list
@itemx -t

Lists the members in an archive.  @xref{list}.

@item --update
@itemx -u

@FIXME{It was: A combination of the @samp{--compare} and @samp{--append} operations.
This is not true and rather misleading, as @value{op-compare}
does a lot more than @value{op-update} for ensuring files are identical.}
Adds files to the end of the archive, but only if they are newer than
their counterparts already in the archive, or if they do not already
exist in the archive.
@xref{update}.

@end table

@node Option Summary, Short Option Summary, Operation Summary, All Options
@subsection @code{tar} Options

@table @kbd

@item --absolute-names
@itemx -P

Normally when creating an archive, @code{tar} strips an initial @samp{/} from
member names.  This option disables that behavior.  @FIXME-xref{}.

@item --after-date

(See @samp{--newer}; @FIXME-pxref{}.)

@item --atime-preserve

Tells @code{tar} to preserve the access time field in a file's inode when
dumping it.  @FIXME-xref{}.

@item --backup=@var{backup-type}

Rather than deleting files from the file system, @code{tar} will back them up
using simple or numbered backups, depending upon @var{backup-type}.
@FIXME-xref{}.

@item --block-number
@itemx -R

With this option present, @code{tar} prints error messages for read errors
with the block number in the archive file.  @FIXME-xref{}.

@item --blocking-factor=@var{blocking}
@itemx -b @var{blocking}

Sets the blocking factor @code{tar} uses to @var{blocking} x 512 bytes per
record.  @FIXME-xref{}.

@item --checkpoint

This option directs @code{tar} to print periodic checkpoint messages as it
reads through the archive.  Its intended for when you want a visual
indication that @code{tar} is still running, but don't want to see
@samp{--verbose} output.  @FIXME-xref{}.

@item --compress
@itemx --uncompress
@itemx -Z

@code{tar} will use the @code{compress} program when reading or writing the
archive.  This allows you to directly act on archives while saving
space.  @FIXME-xref{}.

@item --confirmation

(See @samp{--interactive};  @FIXME-pxref{}.)

@item --dereference
@itemx -h

When creating a @code{tar} archive, @code{tar} will archive the file that a symbolic
link points to, rather than archiving the symlink.  @FIXME-xref{}.

@item --directory=@var{dir}
@itemx -C @var{dir}

When this option is specified, @code{tar} will change its current directory
to @var{dir} before performing any operations.  When this option is used
during archive creation, it is order sensitive.  @FIXME-xref{}.

@item --exclude=@var{pattern}

When performing operations, @code{tar} will skip files that match
@var{pattern}.  @FIXME-xref{}.

@item --exclude-from=@var{file}
@itemx -X @var{file}

Similar to @samp{--exclude}, except @code{tar} will use the list of patterns
in the file @var{file}.  @FIXME-xref{}.

@item --file=@var{archive}
@itemx -f @var{archive}

@code{tar} will use the file @var{archive} as the @code{tar} archive it
performs operations on, rather than @code{tar}'s compilation dependent
default.  @FIXME-xref{}.

@item --files-from=@var{file}
@itemx -T @var{file}

@code{tar} will use the contents of @var{file} as a list of archive members
or files to operate on, in addition to those specified on the
command-line.  @FIXME-xref{}.

@item --force-local

Forces @code{tar} to interpret the filename given to @samp{--file} as a local
file, even if it looks like a remote tape drive name.  @FIXME-xref{}.

@item --group=@var{group}

Files added to the @code{tar} archive will have a group id of @var{group},
rather than the group from the source file.  @var{group} is first decoded
as a group symbolic name, but if this interpretation fails, it has to be
a decimal numeric group ID.  @FIXME-xref{}.

Also see the comments for the @value{op-owner} option.

@item --gunzip

(See @samp{--gzip}; @FIXME-pxref{}.)

@item --gzip
@itemx --gunzip
@itemx --ungzip
@itemx -z

This option tells @code{tar} to read or write archives through @code{gzip},
allowing @code{tar} to directly operate on several kinds of compressed
archives transparently.  @FIXME-xref{}.

@item --help

@code{tar} will print out a short message summarizing the operations and
options to @code{tar} and exit.  @FIXME-xref{}.

@item --ignore-failed-read

Instructs @code{tar} to exit successfully if it encounters an
unreadable file.  @xref{Reading}.

@item --ignore-umask
@FIXME{does this exist?}

(See @samp{--preserve-permissions}; @pxref{Writing}.)

@item --ignore-zeros
@itemx -i

With this option, @code{tar} will ignore zeroed blocks in the archive, which
normally signals EOF.  @xref{Reading}.

@item --incremental
@itemx -G

Used to inform @code{tar} that it is working with an  old GNU-format
incremental backup archive.  It is intended primarily for backwards
compatibility only.  @FIXME-xref{}.

@item --info-script=@var{script-file}
@itemx --new-volume-script=@var{script-file}
@itemx -F @var{script-file}

When @code{tar} is performing multi-tape backups, @var{script-file} is run
at the end of each tape.  @FIXME-xref{}.

@item --interactive
@itemx --confirmation
@itemx -w

Specifies that @code{tar} should ask the user for confirmation before
performing potentially destructive options, such as overwriting files.
@FIXME-xref{}.

@item --keep-old-files
@itemx -k

When extracting files from an archive, @code{tar} will not overwrite existing
files if this option is present.  @xref{Writing}.

@item --label=@var{name}
@itemx -V @var{name}

When creating an archive, instructs @code{tar} to write @var{name} as a name
record in the archive.  When extracting or listing archives, @code{tar} will
only operate on archives that have a label matching the pattern
specified in @var{name}.  @FIXME-xref{}.

@item --listed-incremental=@var{snapshot-file}
@itemx -g @var{snapshot-file}

During a @samp{--create} operation, specifies that the archive that
@code{tar} creates is a new GNU-format incremental backup, using
@var{snapshot-file} to determine which files to backup.
With other operations, informs @code{tar} that the archive is in incremental
format.  @FIXME-xref{}.

@item --mode=@var{permissions}

When adding files to an archive, @code{tar} will use @var{permissions}
for the archive members, rather than the permissions from the files.
The program @code{chmod} and this @code{tar} option share the same syntax
for what @var{permissions} might be.  @xref{File permissions, Permissions,
File permissions, filetutils, GNU file utilities}.  This reference also
has useful information for those not being overly familiar with the Unix
permission system.

Of course, @var{permissions} might be plainly specified as an octal number.
However, by using generic symbolic modifications to mode bits, this allows
more flexibility.  For example, the value @samp{a+rw} adds read and write
permissions for everybody, while retaining executable bits on directories
or on any other file already marked as executable.

@item --multi-volume
@itemx -M

Informs @code{tar} that it should create or otherwise operate on a
multi-volume @code{tar} archive.  @FIXME-xref{}.

@item --new-volume-script

(see --info-script)

@item --newer=@var{date}
@itemx --after-date=@var{date}
@itemx -N

When creating an archive, @code{tar} will only add files that have changed
since @var{date}.  @FIXME-xref{}.

@item --newer-mtime

In conjunction with @samp{--newer}, @code{tar} will only add files whose
contents have changed (as opposed to just @samp{--newer}, which will
also back up files for which any status information has changed).

@item --no-recursion

With this option, @code{tar} will not recurse into directories unless a
directory is explicitly named as an argument to @code{tar}.  @FIXME-xref{}.

@item --null

When @code{tar} is using the @samp{--files-from} option, this option
instructs @code{tar} to expect filenames terminated with @kbd{NUL}, so
@code{tar} can correctly work with file names that contain newlines.
@FIXME-xref{}.

@item --numeric-owner

This option will notify @code{tar} that it should use numeric user and group
IDs when creating a @code{tar} file, rather than names.  @FIXME-xref{}.

@item --old-archive

(See @samp{--portability}; @FIXME-pxref{}.)

@item --one-file-system
@itemx -l

Used when creating an archive.  Prevents @code{tar} from recursing into
directories that are on different file systems from the current
directory.  @FIXME-xref{}.

@item --owner=@var{user}

Specifies that @code{tar} should use @var{user} as the owner of members
when creating archives, instead of the user associated with the source
file.  @var{user} is first decoded as a user symbolic name, but if
this interpretation fails, it has to be a decimal numeric user ID.
@FIXME-xref{}.

There is no value indicating a missing number, and @samp{0} usually means
@code{root}.  Some people like to force @samp{0} as the value to offer in
their distributions for the owner of files, because the @code{root} user is
anonymous anyway, so that might as well be the owner of anonymous archives.

@item --portability
@itemx --old-archive
@itemx -o

Tells @code{tar} to create an archive that is compatible with Unix V7
@code{tar}.  @FIXME-xref{}.

@item --posix

Instructs @code{tar} to create a POSIX compliant @code{tar} archive.  @FIXME-xref{}.

@item --preserve

Synonymous with specifying both @samp{--preserve-permissions} and
@samp{--same-order}.  @FIXME-xref{}.

@item --preserve-order

(See @samp{--same-order}; @pxref{Reading}.)

@item --preserve-permissions
@itemx --same-permissions
@itemx -p

When @code{tar} is extracting an archive, it normally subtracts the users'
umask from the permissions specified in the archive and uses that
number as the permissions to create the destination file.  Specifying
this option instructs @code{tar} that it should use the permissions directly
from the archive.  @xref{Writing}.

@item --read-full-records
@itemx -B

Specifies that @code{tar} should reblock its input, for reading from pipes on
systems with buggy implementations.  @xref{Reading}.

@item --record-size=@var{size}

Instructs @code{tar} to use @var{size} bytes per record when accessing the
archive.  @FIXME-xref{}.

@item --recursive-unlink

Similar to the @samp{--unlink-first} option, removing existing
directory hierarchies before extracting directories of the same name
from the archive.  @xref{Writing}.

@item --remove-files

Directs @code{tar} to remove the source file from the file system after
appending it to an archive.  @FIXME-xref{}.

@item --rsh-command=@var{cmd}

Notifies @code{tar} that is should use @var{cmd} to communicate with remote
devices.  @FIXME-xref{}.

@item --same-order
@itemx --preserve-order
@itemx -s

This option is an optimization for @code{tar} when running on machines with
small amounts of memory.  It informs @code{tar} that the list of file
arguments has already been sorted to match the order of files in the
archive.  @xref{Reading}.

@item --same-owner

When extracting an archive, @code{tar} will attempt to preserve the owner
specified in the @code{tar} archive with this option present.  @FIXME-xref{}.

@item --same-permissions

(See @samp{--preserve-permissions}; @pxref{Writing}.)

@item --show-omitted-dirs

Instructs @code{tar} to mention directories its skipping over when operating
on a @code{tar} archive.  @FIXME-xref{}.

@item --sparse
@itemx -S

Invokes a GNU extension when adding files to an archive that handles
sparse files efficiently.  @FIXME-xref{}.

@item --starting-file=@var{name}
@itemx -K @var{name}

This option affects extraction only; @code{tar} will skip extracting
files in the archive until it finds one that matches @var{name}.
@xref{Scarce}.

@item --suffix=@var{suffix}

Alters the suffix @code{tar} uses when backing up files from the default
@samp{~}.  @FIXME-xref{}.

@item --tape-length=@var{num}
@itemx -L @var{num}

Specifies the length of tapes that @code{tar} is writing as being
@w{@var{num} x 1024} bytes long.  @FIXME-xref{}.

@item --to-stdout
@itemx -O

During extraction, @code{tar} will extract files to stdout rather than to the
file system.  @xref{Writing}.

@item --totals

Displays the total number of bytes written after creating an archive.
@FIXME-xref{}.

@item --touch
@itemx -m

Sets the modification time of extracted files to the extraction time,
rather than the modification time stored in the archive.
@xref{Writing}.

@item --uncompress

(See @samp{--compress}; @FIXME-pxref{}.)

@item --ungzip

(See @samp{--gzip}; @FIXME-pxref{}.)

@item --unlink-first
@itemx -U

Directs @code{tar} to remove the corresponding file from the file system
before extracting it from the archive.  @xref{Writing}.

@item --use-compress-program=@var{prog}

Instructs @code{tar} to access the archive through @var{prog}, which is
presumed to be a compression program of some sort.  @FIXME-xref{}.

@item --verbose
@itemx -v

Specifies that @code{tar} should be more verbose about the operations its
performing.  This option can be specified multiple times for some
operations to increase the amount of information displayed.  @FIXME-xref{}.

@item --verify
@itemx -W

Verifies that the archive was correctly written when creating an
archive.  @FIXME-xref{}.

@item --version

@code{tar} will print an informational message about what version it is and a
copyright message, some credits, and then exit.  @FIXME-xref{}.

@item --volno-file=@var{file}

Used in conjunction with @samp{--multi-volume}.  @code{tar} will keep track
of which volume of a multi-volume archive its working in @var{file}.
@FIXME-xref{}.
@end table

@node Short Option Summary,  , Option Summary, All Options
@subsection Short Options Cross Reference

Here is an alphabetized list of all of the short option forms, matching
them with the equivalent long option.

@table @kbd

@item -A

@samp{--concatenate}

@item -B

@samp{--read-full-records}

@item -C

@samp{--directory}

@item -F

@samp{--info-script}

@item -G

@samp{--incremental}

@item -K

@samp{--starting-file}

@item -L

@samp{--tape-length}

@item -M

@samp{--multi-volume}

@item -N

@samp{--newer}

@item -O

@samp{--to-stdout}

@item -P

@samp{--absolute-names}

@item -R

@samp{--block-number}

@item -S

@samp{--sparse}

@item -T

@samp{--files-from}

@item -U

@samp{--unlink-first}

@item -V

@samp{--label}

@item -W

@samp{--verify}

@item -X

@samp{--exclude-from}

@item -Z

@samp{--compress}

@item -b

@samp{--blocking-factor}

@item -c

@samp{--create}

@item -d

@samp{--compare}

@item -f

@samp{--file}

@item -g

@samp{--listed-incremental}

@item -h

@samp{--dereference}

@item -i

@samp{--ignore-zeros}

@item -k

@samp{--keep-old-files}

@item -l

@samp{--one-file-system}

@item -m

@samp{--touch}

@item -o

@samp{--portability}

@item -p

@samp{--preserve-permissions}

@item -r

@samp{--append}

@item -s

@samp{--same-order}

@item -t

@samp{--list}

@item -u

@samp{--update}

@item -v

@samp{--verbose}

@item -w

@samp{--interactive}

@item -x

@samp{--extract}

@item -z

@samp{--gzip}

@end table

@node help, verbose, All Options, tar invocation
@section GNU @code{tar} documentation

Being careful, the first thing is really checking that you are using GNU
@code{tar}, indeed.  The @value{op-version} option will generate a message
giving confirmation that you are using GNU @code{tar}, with the precise
version of GNU @code{tar} you are using.  @code{tar} identifies itself
and prints the version number to the standard output, then immediately
exits successfully, without doing anything else, ignoring all other
options.  For example, @w{@samp{tar --version}} might return:

@example
tar (GNU tar) @value{VERSION}
@end example

@noindent
The first occurrence of @samp{tar} in the result above is the program
name in the package (for example, @code{rmt} is another program), while
the second occurrence of @samp{tar} is the name of the package itself,
containing possibly many programs.  The package is currently named
@samp{tar}, after the name of the main program it contains@footnote{There
are plans to merge the @code{cpio} and @code{tar} packages into a single one
which would be called @code{paxutils}.  So, who knows if, one of this days,
the @value{op-version} would not yield @w{@samp{tar (GNU paxutils) 3.2}}}.

Another thing you might want to do is checking the spelling or meaning
of some particular @code{tar} option, without resorting to this manual,
for once you have carefully read it.  GNU @code{tar} has a short help
feature, triggerable through the @value{op-help} option.  By using this
option, @code{tar} will print a usage message listing all available
options on standard output, then exit successfully, without doing
anything else and ignoring all other options.  Even if this is only a
brief summary, it may be several screens long.  So, if you are not
using some kind of scrollable window, you might prefer to use something
like:

@example
$ @kbd{tar --help | less}
@end example

@noindent
presuming, here, that you like using @code{less} for a pager.  Other
popular pagers are @code{more} and @code{pg}.  If you know about some
@var{keyword} which interests you and do not want to read all the
@value{op-help} output, another common idiom is doing:

@example
tar --help | grep @var{keyword}
@end example

@noindent
for getting only the pertinent lines.

The perceptive reader would have noticed some contradiction in the
previous paragraphs.  It is written that both @value{op-version} and
@value{op-help} print something, and have all other options ignored.  In
fact, they cannot ignore each other, and one of them has to win.  We do
not specify which is stronger, here; experiment if you really wonder!

The short help output is quite succint, and you might have to get back
to the full documentation for precise points.  If you are reading this
paragraph, you already have the @code{tar} manual in some form.  This
manual is available in printed form, as a kind of small book.  It may
printed out of the GNU @code{tar} distribution, provided you have @TeX{}
already installed somewhere, and a laser printer around.  Just configure
the distribution, execute the command @w{@samp{make dvi}}, then print
@file{doc/tar.dvi} the usual way (contact your local guru to know how).
If GNU @code{tar} has been conveniently installed at your place, this
manual is also available in interactive, hypertextual form as an Info
file.  Just call @w{@samp{info tar}} or, if you do not have the
@code{info} program handy, use the Info reader provided within GNU
Emacs, calling @samp{tar} from the main Info menu.

There is currently no @code{man} page for GNU @code{tar}.  If you observe
such a @code{man} page on the system you are running, either it does not
long to GNU @code{tar}, or it has not been produced by GNU.  Currently,
GNU @code{tar} documentation is provided in Texinfo format only, if we
except, of course, the short result of @kbd{tar --help}.

@node verbose, interactive, help, tar invocation
@section Checking @code{tar} progress

@cindex Progress information
@cindex Status information
@cindex Information on progress and status of operations
@cindex Verbose operation
@cindex Block number where error occured
@cindex Error message, block number of
@cindex Version of the @code{tar} program

@cindex Getting more information during the operation
@cindex Information during operation
@cindex Feedback from @code{tar}

Typically, @code{tar} performs most operations without reporting any
information to the user except error messages.  When using @code{tar}
with many options, particularly ones with complicated or
difficult-to-predict behavior, it is possible to make serious mistakes.
@code{tar} provides several options that make observing @code{tar}
easier.  These options cause @code{tar} to print information as it
progresses in its job, and you might want to use them just for being
more careful about what is going on, or merely for entertaining
yourself.  If you have encountered a problem when operating on an
archive, however, you may need more information than just an error
message in order to solve the problem.  The following options can be
helpful diagnostic tools.

Normally, the @value{op-list} command to list an archive prints just
the file names (one per line) and the other commands are silent.
When used with most operations, the @value{op-verbose} option causes
@code{tar} to print the name of each file or archive member as it
is processed.  This and the other options which make @code{tar} print
status information can be useful in monitoring @code{tar}.

With @value{op-create} or @value{op-extract}, @value{op-verbose} used once
just prints the names of the files or members as they are processed.
Using it twice causes @code{tar} to print a longer listing (reminiscent
of @samp{ls -l}) for each member.  Since @value{op-list} already prints
the names of the members, @value{op-verbose} used once with @value{op-list}
causes @code{tar} to print an @samp{ls -l} type listing of the files
in the archive.  The following examples both extract members with
long list output:

@example
$ @kbd{tar --extract --file=archive.tar --verbose --verbose}
$ @kbd{tar xvv archive.tar}
@end example

Verbose output appears on the standard output except when an archive is
being written to the standard output, as with @samp{tar --create
--file=- --verbose} (@samp{tar cfv -}, or even @samp{tar cv}---if the
installer let standard output be the default archive).  In that case
@code{tar} writes verbose output to the standard error stream.

The @value{op-totals} option---which is only meaningful when used with
@value{op-create}---causes @code{tar} to print the total
amount written to the archive, after it has been fully created.

The @value{op-checkpoint} option prints an occasional message
as @code{tar} reads or writes the archive.  In fact, it print
directory names while reading the archive.  It is designed for
those who don't need the more detailed (and voluminous) output of
@value{op-block-number}, but do want visual confirmation that @code{tar}
is actually making forward progress.

@FIXME{There is some confusion here.  It seems that -R once wrote a
message at @samp{every} record read or written.}

The @value{op-show-omitted-dirs} option, when reading an archive---with
@value{op-list} or @value{op-extract}, for example---causes a message
to be printed for each directory in the archive which is skipped.
This happens regardless of the reason for skipping: the directory might
not have been named on the command line (implicitly or explicitly),
it might be excluded by the use of the @value{op-exclude} option, or
some other reason.

If @value{op-block-number} is used, @code{tar} prints, along with every
message it would normally produce, the block number within the archive
where the message was triggered.  Also, supplementary messages are
triggered when reading blocks full of NULs, or when hitting end of file on
the archive.  As of now, if the archive if properly terminated with a NUL
block, the reading of the file may stop before end of file is met, so the
position of end of file will not usually show when @value{op-block-number}
is used.  Note that GNU @code{tar} drains the archive before exiting when
reading the archive from a pipe.

This option is especially useful when reading damaged archives, since
it helps pinpoint the damaged sections.  It can also be used with
@value{op-list} when listing a file-system backup tape, allowing you to
choose among several backup tapes when retrieving a file later, in
favor of the tape where the file appears earliest (closest to the
front of the tape).  @FIXME-xref{when the node name is set and the
backup section written}.

@node interactive,  , verbose, tar invocation
@section Asking for Confirmation During Operations
@cindex Interactive operation

Typically, @code{tar} carries out a command without stopping for
further instructions.  In some situations however, you may want to
exclude some files and archive members from the operation (for instance
if disk or storage space is tight).  You can do this by excluding
certain files automatically (@pxref{Choosing}), or by performing
an operation interactively, using the @value{op-interactive} option.
@code{tar} also accepts @samp{--confirmation} for this option.

When the @value{op-interactive} option is specified, before
reading, writing, or deleting files, @code{tar} first prints a message
for each such file, telling what operation it intends to take, then asks
for confirmation on the terminal.  The actions which require
confirmation include adding a file to the archive, extracting a file
from the archive, deleting a file from the archive, and deleting a file
from disk.  To confirm the action, you must type a line of input
beginning with @samp{y}.  If your input line begins with anything other
than @samp{y}, @code{tar} skips that file.

If @code{tar} is reading the archive from the standard input,
@code{tar} opens the file @file{/dev/tty} to support the interactive
communications.

Verbose output is normally sent to standard output, separate from
other error messages.  However, if the archive is produced directly
on standard output, then verbose output is mixed with errors on
@code{stderr}.  Producing the archive on standard output may be used
as a way to avoid using disk space, when the archive is soon to be
consumed by another process reading it, say.  Some people felt the need
of producing an archive on stdout, still willing to segregate between
verbose output and error output.  A possible approach would be using a
named pipe to receive the archive, and having the consumer process to
read from that named pipe.  This has the advantage of letting standard
output free to receive verbose output, all separate from errors.

@node operations, Backups, tar invocation, Top
@chapter GNU @code{tar} Operations

@menu
* Basic tar::
* Advanced tar::
* extract options::
* backup::
* Applications::
* looking ahead::
@end menu

@node Basic tar, Advanced tar, operations, operations
@section Basic GNU @code{tar} Operations

The basic @code{tar} operations, @value{op-create}, @value{op-list} and
@value{op-extract}, are currently presented and described in the tutorial
chapter of this manual.  This section provides some complementary notes
for these operations.

@table @asis
@item @value{op-create}

Creating an empty archive would have some kind of elegance.  One can
initialize an empty archive and later use @value{op-append} for adding
all members.  Some applications would not welcome making an exception
in the way of adding the first archive member.  On the other hand,
many people reported that it is dangerously too easy for @code{tar}
to destroy a magnetic tape with an empty archive@footnote{This is well
described in @cite{Unix-haters Handbook}, by Simson Garfinkel, Daniel
Weise & Steven Strassmann, IDG Books, ISBN 1-56884-203-1.}.  The two most
common errors are:

@enumerate
@item
Mistakingly using @code{create} instead of @code{extract}, when the
intent was to extract the full contents of an archive.  This error
is likely: keys @kbd{c} and @kbd{x} are right next ot each other on
the QWERTY keyboard.  Instead of being unpacked, the archive then
gets wholly destroyed.  When users speak about @dfn{exploding} an
archive, they usually mean something else :-).

@item
Forgetting the argument to @code{file}, when the intent was to create
an archive with a single file in it.  This error is likely because a
tired user can easily add the @kbd{f} key to the cluster of option
letters, by the mere force of habit, without realizing the full
consequence of doing so.  The usual consequence is that the single
file, which was meant to be saved, is rather destroyed.
@end enumerate

So, recognizing the likelihood and the catastrophical nature of these
errors, GNU @code{tar} now takes some distance from elegance, and
cowardly refuses to create an archive when @value{op-create} option is
given, there are no arguments besides options, and @value{op-files-from}
option is @emph{not} used.  To get around the cautiousness of GNU
@code{tar} and nevertheless create an archive with nothing in it,
one may still use, as the value for the @value{op-files-from} option,
a file with no names in it, as shown in the following commands:

@example
@kbd{tar --create --file=empty-archive.tar --files-from=/dev/null}
@kbd{tar cfT empty-archive.tar /dev/null}
@end example

@item @value{op-extract}

A socket is stored, within a GNU @code{tar} archive, as a pipe.

@item @value{op-list}

GNU @code{tar} now shows dates as @samp{1996-11-09}, while it used to
show them as @samp{Nov 11 1996}.  (One can revert to the old behavior by
defining @code{USE_OLD_CTIME} in @file{src/list.c} before reinstalling.)
But preferrably, people you should get used to ISO 8601 dates.  Local
American dates should be made available again with full date localisation
support, once ready.  In the meantime, programs not being localisable
for dates should prefer international dates, that's really the way to go.

Look up @url{http://www.ft.uni-erlangen.de/~mskuhn/iso-time.html} if you
are curious, it contains a detailed explanation of the ISO 8601 standard.

@end table

@node Advanced tar, extract options, Basic tar, operations
@section Advanced GNU @code{tar} Operations

Now that you have learned the basics of using GNU @code{tar}, you may
want to learn about further ways in which @code{tar} can help you.

This chapter presents five, more advanced operations which you probably
won't use on a daily basis, but which serve more specialized functions.
We also explain the different styles of options and why you might want
to use one or another, or a combination of them in your @code{tar}
commands.  Additionally, this chapter includes options which allow you to
define the output from @code{tar} more carefully, and provide help and
error correction in special circumstances.

@FIXME{check this after the chapter is actually revised to make sure
it still introduces the info in the chapter correctly : ).}

@menu
* Operations::
* current state::
* append::
* update::
* concatenate::
* delete::
* compare::
@end menu

@node Operations, current state, Advanced tar, Advanced tar
@subsection The Five Advanced @code{tar} Operations
@UNREVISED

In the last chapter, you learned about the first three operations to
@code{tar}.  This chapter presents the remaining five operations to
@code{tar}: @samp{--append}, @samp{--update}, @samp{--concatenate},
@samp{--delete}, and @samp{--compare}.

You are not likely to use these operations as frequently as those
covered in the last chapter; however, since they perform specialized
functions, they are quite useful when you do need to use them.  We
will give examples using the same directory and files that you created
in the last chapter.  As you may recall, the directory is called
@file{practice}, the files are @samp{jazz}, @samp{blues}, @samp{folk},
@samp{rock}, and the two archive files you created are
@samp{collection.tar} and @samp{music.tar}.

We will also use the archive files @samp{afiles.tar} and
@samp{bfiles.tar}.  @samp{afiles.tar} contains the members @samp{apple},
@samp{angst}, and @samp{aspic}.  @samp{bfiles.tar} contains the members
@samp{./birds}, @samp{baboon}, and @samp{./box}.

Unless we state otherwise, all practicing you do and examples you follow
in this chapter will take place in the @file{practice} directory that
you created in the previous chapter; see @ref{prepare for examples}.
(Below in this section, we will remind you of the state of the examples
where the last chapter left them.)

The five operations that we will cover in this chapter are:

@table @kbd
@item --append
@itemx -r
Add new entries to an archive that already exists.
@item --update
@itemx -r
Add more recent copies of archive members to the end of an archive, if
they exist.
@item --concatenate
@itemx --catenate
@itemx -A
Add one or more pre-existing archives to the end of another archive.
@item --delete
Delete items from an archive (does not work on tapes).
@item --compare
@itemx --diff
@itemx -d
Compare archive members to their counterparts in the file system.
@end table

@node current state, append, Operations, Advanced tar
@ifinfo
@subsection The Current State of the Practice Files
@end ifinfo

Currently, the listing of the directory using @code{ls} is as follows:

@example

@end example

@noindent
The archive file @samp{collection.tar} looks like this:

@example
$ @kbd{tar -tvf collection.tar}

@end example

@noindent
The archive file @samp{music.tar} looks like this:

@example
$ @kbd{tar -tvf music.tar}

@end example

@FIXME{need to fill in the above!!!}

@node append, update, current state, Advanced tar
@subsection How to Add Files to Existing Archives: @code{--append}
@UNREVISED

If you want to add files to an existing archive, you don't need to
create a new archive; you can use @value{op-append}.  The archive must
already exist in order to use @samp{--append}.  (A related operation
is the @samp{--update} operation; you can use this to add newer
versions of archive members to an existing archive.  To learn how to
do this with @samp{--update}, @pxref{update}.)

@FIXME{Explain in second paragraph whether you can get to the previous
version -- explain whole situation somewhat more clearly.}

If you use @value{op-append} to add a file that has the same name as an
archive member to an archive containing that archive member, then the
old member is not deleted.  What does happen, however, is somewhat
complex.  @code{tar} @emph{allows} you to have infinite numbers of files
with the same name.  Some operations treat these same-named members no
differently than any other set of archive members: for example, if you
view an archive with @value{op-list}, you will see all of those members
listed, with their modification times, owners, etc.

Other operations don't deal with these members as perfectly as you might
prefer; if you were to use @value{op-extract} to extract the archive,
only the most recently added copy of a member with the same name as four
other members would end up in the working directory.  This is because
@samp{--extract} extracts an archive in the order the members appeared
in the archive; the most recently archived members will be extracted
last.  Additionally, an extracted member will @emph{overwrite} a file of
the same name which existed in the directory already, and @code{tar}
will not prompt you about this.  Thus, only the most recently archived
member will end up being extracted, as it will overwrite the one
extracted before it, and so on.

@FIXME{ hag -- you might want to incorporate some of the above into the
MMwtSN node; not sure.  i didn't know how to make it simpler...}

There are a few ways to get around this.  @FIXME-xref{Multiple Members
with the Same Name}.

@cindex Members, replacing with other members
@cindex Replacing members with other members
If you want to replace an archive member, use @value{op-delete} to
delete the member you want to remove from the archive, , and then use
@samp{--append} to add the member you want to be in the archive.  Note
that you can not change the order of the archive; the most recently
added member will still appear last.  In this sense, you cannot truely
``replace'' one member with another.  (Replacing one member with another
will not work on certain types of media, such as tapes; see @ref{delete}
and @ref{Media}, for more information.)

@menu
* appending files::             Appending Files to an Archive
* multiple::
@end menu

@node appending files, multiple, append, append
@subsubsection Appending Files to an Archive
@UNREVISED
@cindex Adding files to an Archive
@cindex Appending files to an Archive
@cindex Archives, Appending files to

The simplest way to add a file to an already existing archive is the
@value{op-append} operation, which writes specified files into the
archive whether or not they are already among the archived files.
When you use @samp{--append}, you @emph{must} specify file name
arguments, as there is no default.  If you specify a file that already
exists in the archive, another copy of the file will be added to the
end of the archive.  As with other operations, the member names of the
newly added files will be exactly the same as their names given on the
command line.  The @value{op-verbose} option will print out the names
of the files as they are written into the archive.

@samp{--append} cannot be performed on some tape drives, unfortunately,
due to deficiencies in the formats those tape drives use.  The archive
must be a valid @code{tar} archive, or else the results of using this
operation will be unpredictable.  @xref{Media}.

To demonstrate using @samp{--append} to add a file to an archive,
create a file called @file{rock} in the @file{practice} directory.
Make sure you are in the @file{practice} directory.  Then, run the
following @code{tar} command to add @file{rock} to
@file{collection.tar}:

@example
$ @kbd{tar --append --file=collection.tar rock}
@end example

@noindent
If you now use the @value{op-list} operation, you will see that
@file{rock} has been added to the archive:

@example
$ @kbd{tar --list --file=collection.tar}
-rw-rw-rw- me user     28 1996-10-18 16:31 jazz
-rw-rw-rw- me user     21 1996-09-23 16:44 blues
-rw-rw-rw- me user     20 1996-09-23 16:44 folk
-rw-rw-rw- me user     20 1996-09-23 16:44 rock
@end example

@FIXME{in theory, dan will (soon) try to turn this node into what it's
title claims it will become...}

@node multiple,  , appending files, append
@subsubsection Multiple Files with the Same Name

You can use @value{op-append} to add copies of files which have been
updated since the archive was created.  (However, we do not recommend
doing this since there is another @code{tar} option called
@samp{--update}; @pxref{update} for more information.  We describe this
use of @samp{--append} here for the sake of completeness.)  @FIXME{is
this really a good idea, to give this whole description for something
which i believe is basically a Stupid way of doing something?  certain
aspects of it show ways in which tar is more broken than i'd personally
like to admit to, specifically the last sentence.  On the other hand, i
don't think it's a good idea to be saying that re explicitly don't
recommend using something, but i can't see any better way to deal with
the situation.} When you extract the archive, the older version will be
effectively lost.  This works because files are extracted from an
archive in the order in which they were archived.  Thus, when the
archive is extracted, a file archived later in time will overwrite a
file of the same name which was archived earlier, even though the older
version of the file will remain in the archive unless you delete all
versions of the file.

Supposing you change the file @file{blues} and then append the changed
version to @file{collection.tar}.  As you saw above, the original
@file{blues} is in the archive @file{collection.tar}.  If you change the
file and append the new version of the file to the archive, there will
be two copies in the archive.  When you extract the archive, the older
version of the file will be extracted first, and then overwritten by the
newer version when it is extracted.

You can append the new, changed copy of the file @file{blues} to the
archive in this way:

@example
$ @kbd{tar --append --verbose --file=collection.tar blues}
blues
@end example

@noindent
Because you specified the @samp{--verbose} option, @code{tar} has
printed the name of the file being appended as it was acted on.  Now
list the contents of the archive:

@example
$ @kbd{tar --list --verbose --file=collection.tar}
-rw-rw-rw- me user     28 1996-10-18 16:31 jazz
-rw-rw-rw- me user     21 1996-09-23 16:44 blues
-rw-rw-rw- me user     20 1996-09-23 16:44 folk
-rw-rw-rw- me user     20 1996-09-23 16:44 rock
-rw-rw-rw- me user     58 1996-10-24 18:30 blues
@end example

@noindent
The newest version of @file{blues} is now at the end of the archive
(note the different creation dates and file sizes).  If you extract
the archive, the older version of the file @file{blues} will be
overwritten by the newer version.  You can confirm this by extracting
the archive and running @samp{ls} on the directory.  @xref{Writing}
for more information.  (@emph{Please note:} This is the case unless
you employ the @value{op-backup} option; @FIXME-ref{Multiple Members
with the Same Name}.)

@node update, concatenate, append, Advanced tar
@subsection Updating an Archive
@UNREVISED
@cindex Updating an archive

In the previous section, you learned how to use @value{op-append} to add
a file to an existing archive.  A related operation is
@value{op-update}.  The @samp{--update} operation updates a @code{tar}
archive by comparing the date of the specified archive members against
the date of the file with the same name.  If the file has been modified
more recently than the archive member, then the newer version of the
file is added to the archive (as with @value{op-append}).

Unfortunately, you cannot use @samp{--update} with magnetic tape drives.
The operation will fail.

@FIXME{other examples of media on which --update will fail?  need to ask
charles and/or mib/thomas/dave shevett..}

Both @samp{--update} and @samp{--append} work by adding to the end
of the archive.  When you extract a file from the archive, only the
version stored last will wind up in the file system, unless you use
the @value{op-backup} option (@FIXME-ref{Multiple Members with the
Same Name}).

@menu
* how to update::
@end menu

@node how to update,  , update, update
@subsubsection How to Update an Archive Using @code{--update}

You must use file name arguments with the @value{op-update} operation.
If you don't specify any files, @code{tar} won't act on any files and
won't tell you that it didn't do anything (which may end up confusing
you).

@FIXME{note: the above parenthetical added because in fact, this
behavior just confused the author. :-) }

To see the @samp{--update} option at work, create a new file,
@file{classical}, in your practice directory, and some extra text to the
file @file{blues}, using any text editor.  Then invoke @code{tar} with
the @samp{update} operation and the @value{op-verbose} option specified,
using the names of all the files in the practice directory as file name
arguments:

@example
$ @kbd{tar --update -v -f collection.tar blues folk rock classical}
blues
classical
$
@end example

@noindent
Because we have specified verbose mode, @code{tar} prints out the names
of the files it is working on, which in this case are the names of the
files that needed to be updated.  If you run @samp{tar --list} and look
at the archive, you will see @file{blues} and @file{classical} at its
end.  There will be a total of two versions of the member @samp{blues};
the one at the end will be newer and larger, since you added text before
updating it.

(The reason @code{tar} does not overwrite the older file when updating
it is because writing to the middle of a section of tape is a difficult
process.  Tapes are not designed to go backward.  @xref{Media} for more
information about tapes.

@value{op-update} is not suitable for performing backups for two
reasons: it does not change directory content entries, and it lengthens
the archive every time it is used.  The GNU @code{tar} options intended
specifically for backups are more efficient.  If you need to run
backups, please consult @ref{Backups}.

@node concatenate, delete, update, Advanced tar
@subsection Combining Archives with @code{--concatenate}

@cindex Adding archives to an archive
@cindex Concatenating Archives
Sometimes it may be convenient to add a second archive onto the end of
an archive rather than adding individual files to the archive.  To add
one or more archives to the end of another archive, you should use the
@value{op-concatenate} operation.

To use @samp{--concatenate}, name the archives to be concatenated on the
command line.  (Nothing happens if you don't list any.)  The members,
and their member names, will be copied verbatim from those archives.  If
this causes multiple members to have the same name, it does not delete
any members; all the members with the same name coexist.  For
information on how this affects reading the archive, @FIXME-ref{Multiple
Members with the Same Name}.

To demonstrate how @samp{--concatenate} works, create two small archives
called @file{bluesrock.tar} and @file{folkjazz.tar}, using the relevant
files from @file{practice}:

@example
$ @kbd{tar -cvf bluesrock.tar blues rock}
blues
classical
$ @kbd{tar -cvf folkjazz.tar folk jazz}
folk
jazz
@end example

@noindent
If you like, You can run @samp{tar --list} to make sure the archives
contain what they are supposed to:

@example
$ @kbd{tar -tvf bluesrock.tar}
-rw-rw-rw- melissa user    105 1997-01-21 19:42 blues
-rw-rw-rw- melissa user     33 1997-01-20 15:34 rock
$ @kbd{tar -tvf folkjazz.tar}
-rw-rw-rw- melissa user     20 1996-09-23 16:44 folk
-rw-rw-rw- melissa user     65 1997-01-30 14:15 jazz
@end example

We can concatenate these two archives with @code{tar}:

@example
$ @kbd{cd ..}
$ @kbd{tar --concatenate --file=bluesrock.tar jazzfolk.tar}
@end example

If you now list the contents of the @file{bluesclass.tar}, you will see
that now it also contains the archive members of @file{jazzfolk.tar}:

@example
$ @kbd{tar --list --file=bluesrock.tar}
blues
rock
jazz
folk
@end example

When you use @samp{--concatenate}, the source and target archives must
already exist and must have been created using compatable format
parameters (@FIXME-pxref{Matching Format Parameters}).  The new,
concatenated archive will be called by the same name as the first
archive listed on the command line. @FIXME{is there a way to specify a
new name?}

Like @value{op-append}, this operation cannot be performed on some
tape drives, due to deficiencies in the formats those tape drives use.

@cindex @code{concatenate} vs @code{cat}
@cindex @code{cat} vs @code{concatenate}
It may seem more intuitive to you to want or try to use @code{cat} to
concatenate two archives instead of using the @samp{--concatenate}
operation; after all, @code{cat} is the utility for combining files.

However, @code{tar} archives incorporate an end-of-file marker which
must be removed if the concatenated archives are to be read properly as
one archive.  @samp{--concatenate} removes the end-of-archive marker
from the target archive before each new archive is appended.  If you use
@code{cat} to combine the archives, the result will not be a valid
@code{tar} format archive.  If you need to retrieve files from an
archive that was added to using the @code{cat} utility, use the
@value{op-ignore-zeros} option.  @xref{Ignore Zeros} for further
information on dealing with archives improperly combined using the
@code{cat} shell utility.

@FIXME{this shouldn't go here.  where should it go?} You must specify
the source archives using @value{op-file} (@value{pxref-file}).  If you
do not specify the target archive, @code{tar} uses the value of the
environment variable @code{TAPE}, or, if this has not been set, the
default archive name.

@node delete, compare, concatenate, Advanced tar
@subsection Removing Archive Members Using @samp{--delete}
@UNREVISED
@cindex Deleting files from an archive
@cindex Removing files from an archive

You can remove members from an archive by using the @value{op-delete}
option.  Specify the name of the archive with @value{op-file} and then
specify the names of the members to be deleted; if you list no member
names, nothing will be deleted.  The @value{op-verbose} option will
cause @code{tar} to print the names of the members as they are deleted.
As with @value{op-extract}, you must give the exact member names when
using @samp{tar --delete}.  @samp{--delete} will remove all versions of
the named file from the archive.  The @samp{--delete} operation can run
very slowly.

Unlike other operations, @samp{--delete} has no short form.

@cindex Tapes, using @code{--delete} and
@cindex Deleting from tape archives
This operation will rewrite the archive.  You can only use
@samp{--delete} on an archive if the archive device allows you to
write to any point on the media, such as a disk; because of this, it
does not work on magnetic tapes.  Do not try to delete an archive member
from a magnetic tape; the action will not succeed, and you will be
likely to scramble the archive and damage your tape.  There is no safe
way (except by completely re-writing the archive) to delete files from
most kinds of magnetic tape.  @xref{Media}.

To delete all versions of the file @file{blues} from the archive
@file{collection.tar} in the @file{practice} directory, make sure you
are in that directory, and then,

@example
$ @kbd{tar --list --file=collection.tar}
blues
folk
jazz
rock
practice/blues
practice/folk
practice/jazz
practice/rock
practice/blues
$ @kbd{tar --delete --file=collection.tar blues}
$ @kbd{tar --list --file=collection.tar}
folk
jazz
rock
$
@end example

@FIXME{I changed the order of these nodes around and haven't had a chance
to fix the above example's results, yet.  I have to play with this and
follow it and see what it actually does!}

The @value{op-delete} option has been reported to work properly when
@code{tar} acts as a filter from @code{stdin} to @code{stdout}.

@node compare,  , delete, Advanced tar
@subsection Comparing Archive Members with the File System
@cindex Verifying the currency of an archive
@UNREVISED

The @samp{--compare} (@samp{-d}), or @samp{--diff} operation compares
specified archive members against files with the same names, and then
reports differences in file size, mode, owner, modification date and
contents.  You should @emph{only} specify archive member names, not file
names.  If you do not name any members, then @code{tar} will compare the
entire archive.  If a file is represented in the archive but does not
exist in the file system, @code{tar} reports a difference.

You have to specify the record size of the archive when modifying an
archive with a non-default record size.

@code{tar} ignores files in the file system that do not have
corresponding members in the archive.

The following example compares the archive members @file{rock},
@file{blues} and @file{funk} in the archive @file{bluesrock.tar} with
files of the same name in the file system.  (Note that there is no file,
@file{funk}; @code{tar} will report an error message.)

@example
$ @kbd{tar --compare --file=bluesrock.tar rock blues funk}
rock
blues
tar: funk not found in archive
@end example

@noindent
@FIXME{what does this actually depend on?  i'm making a guess,
here.}Depending on the system where you are running @code{tar} and the
version you are running, @code{tar} may have a different error message,
such as:

@example
funk: does not exist
@end example

@FIXME-xref{somewhere, for more information about format parameters.
Melissa says: such as "format variations"?  But why?  Clearly I don't
get it yet; I'll deal when I get to that section.}

The spirit behind the @value{op-compare} option is to check whether the
archive represents the current state of files on disk, more than validating
the integrity of the archive media.  For this later goal, @xref{verify}.

@node extract options, backup, Advanced tar, operations
@section Options Used by @code{--extract}
@UNREVISED

@FIXME{i need to get dan to go over these options with me and see if
there's a better way of organizing them.}

The previous chapter showed how to use @value{op-extract} to extract
an archive into the filesystem.  Various options cause @code{tar} to
extract more information than just file contents, such as the owner,
the permissions, the modification date, and so forth.  This section
presents options to be used with @samp{--extract} when certain special
considerations arise.  You may review the information presented in
@ref{extract} for more basic information about the
@samp{--extract} operation.

@menu
* Reading::                     Options to Help Read Archives
* Writing::                     Changing How @code{tar} Writes Files
* Scarce::                      Coping with Scarce Resources
@end menu

@node Reading, Writing, extract options, extract options
@subsection Options to Help Read Archives
@cindex Options when reading archives
@cindex Reading incomplete records
@cindex Records, incomplete
@cindex End-of-archive entries, ignoring
@cindex Ignoring end-of-archive entries
@cindex Large lists of file names on small machines
@cindex Small memory
@cindex Running out of space
@UNREVISED

Normally, @code{tar} will request data in full record increments from
an archive storage device.  If the device cannot return a full record,
@code{tar} will report an error.  However, some devices do not always
return full records, or do not require the last record of an archive to
be padded out to the next record boundary.  To keep reading until you
obtain a full record, or to accept an incomplete record if it contains
an end-of-archive marker, specify the @value{op-read-full-records} option
in conjunction with the @value{op-extract} or @value{op-list} operations.
@value{xref-read-full-records}.

The @value{op-read-full-records} option is turned on by default when
@code{tar} reads an archive from standard input, or from a remote
machine.  This is because on BSD Unix systems, attempting to read a
pipe returns however much happens to be in the pipe, even if it is
less than was requested.  If this option were not enabled, @code{tar}
would fail as soon as it read an incomplete record from the pipe.

If you're not sure of the blocking factor of an archive, you can
read the archive by specifying @value{op-read-full-records} and
@value{op-blocking-factor}, using a blocking factor larger than what the
archive uses.  This lets you avoid having to determine the blocking factor
of an archive.  @value{xref-blocking-factor}.

@menu
* read full records::
* Ignore Zeros::
* Ignore Failed Read::
@end menu

@node read full records, Ignore Zeros, Reading, Reading
@unnumberedsubsubsec Reading Full Records

@FIXME{need sentence or so of intro here}

@table @kbd
@item --read-full-records
@item -B
Use in conjunction with @value{op-extract} to read an archive which
contains incomplete records, or one which has a blocking factor less
than the one specified.
@end table

@node Ignore Zeros, Ignore Failed Read, read full records, Reading
@unnumberedsubsubsec Ignoring Blocks of Zeros

Normally, @code{tar} stops reading when it encounters a block of zeros
between file entries (which usually indicates the end of the archive).
@value{op-ignore-zeros} allows @code{tar} to completely read an archive
which contains a block of zeros before the end (i.e.@: a damaged
archive, or one which was created by @code{cat}-ing several archives
together).

The @value{op-ignore-zeros} option is turned off by default because many
versions of @code{tar} write garbage after the end-of-archive entry,
since that part of the media is never supposed to be read.  GNU
@code{tar} does not write after the end of an archive, but seeks to
maintain compatablity among archiving utilities.

@table @kbd
@item --ignore-zeros
@itemx -i
To ignore blocks of zeros (ie.@: end-of-archive entries) which may be
encountered while reading an archive.  Use in conjunction with
@value{op-extract} or @value{op-list}.
@end table

@node Ignore Failed Read,  , Ignore Zeros, Reading
@unnumberedsubsubsec Ignore Fail Read

@FIXME{Is this in the right place?  It doesn't exist anywhere else in
the book (except the appendix), and has no further explanation.  For that
matter, what does it mean?!}

@table @kbd
@item --ignore-failed-read
Do not exit with nonzero on unreadable files or directories.
@end table

@node Writing, Scarce, Reading, extract options
@subsection Changing How @code{tar} Writes Files
@cindex Overwriting old files, prevention
@cindex Protecting old files
@cindex Modification times of extracted files
@cindex Permissions of extracted files
@cindex Modes of extracted files
@cindex Writing extracted files to standard output
@cindex Standard output, writing extracted files to
@UNREVISED

@FIXME{need to mention the brand new option, --backup}

@menu
* Prevention Overwriting::
* Keep Old Files::
* Unlink First::
* Recursive Unlink::
* Modification Times::
* Setting Access Permissions::
* Writing to Standard Output::
* remove files::
@end menu

@node Prevention Overwriting, Keep Old Files, Writing, Writing
@unnumberedsubsubsec Options to Prevent Overwriting Files

Normally, @code{tar} writes extracted files into the file system without
regard to the files already on the system; i.e., files with the same
names as archive members are overwritten when the archive is extracted.
If the name of a corresponding file name is a symbolic link, the file
pointed to by the symbolic link will be overwritten instead of the
symbolic link itself (if this is possible).  Moreover, special devices,
empty directories and even symbolic links are automatically removed if
they are found to be on the way of the proper extraction.

To prevent @code{tar} from extracting an archive member from an archive
if doing so will overwrite a file in the file system, use
@value{op-keep-old-files} in conjunction with @samp{--extract}.  When
this option is specified, @code{tar} will report an error stating the
name of the files in conflict instead of overwriting the file with the
corresponding extracted archive member.

@FIXME{these two P's have problems.  i don't understand what they're
trying to talk about well enough to fix them; i may have just made them
worse (in particular the first of the two).  waiting to talk with hag.}

The @value{op-unlink-first} option removes existing files, symbolic links,
empty directories, devices, etc., @emph{prior} to extracting over them.
In particular, using this option will prevent replacing an already existing
symbolic link by the name of an extracted file, since the link itself
is removed prior to the extraction, rather than the file it points to.
On some systems, the backing store for the executable @emph{is} the
original program text.  You could use the @value{op-unlink-first} option
to prevent segmentation violations or other woes when extracting arbitrary
executables over currently running copies.  Note that if something goes
wrong with the extraction and you @emph{did} use this option, you might
end up with no file at all.  Without this option, if something goes wrong
with the extraction, the existing file is not overwritten and preserved.

@FIXME{huh?} If you specify the @value{op-recursive-unlink} option,
@code{tar} removes @emph{anything} that keeps you from extracting a file
as far as current permissions will allow it.  This could include removal
of the contents of a full directory hierarchy.  For example, someone
using this feature may be very surprised at the results when extracting
a directory entry from the archive.  This option can be dangerous; be
very aware of what you are doing if you choose to use it.

@menu
* Keep Old Files::
* Unlink First::
* Recursive Unlink::
@end menu

@node Keep Old Files, Unlink First, Prevention Overwriting, Writing
@unnumberedsubsubsec Keep Old Files

@table @kbd
@item --keep-old-files
@itemx -k
Do not overwrite existing files from archive.  The
@value{op-keep-old-files} option prevents @code{tar} from over-writing
existing files with files with the same name from the archive.
The @value{op-keep-old-files} option is meaningless with @value{op-list}.
Prevents @code{tar} from overwriting files in the file system during
extraction.
@end table

@node Unlink First, Recursive Unlink, Keep Old Files, Writing
@unnumberedsubsubsec Unlink First

@table @kbd
@item --unlink-first
@itemx -U
Try removing files before extracting over them, instead of trying to
overwrite them.
@end table

@node Recursive Unlink, Modification Times, Unlink First, Writing
@unnumberedsubsubsec Recursive Unlink

@table @kbd
@item --recursive-unlink
When this option is specified, try removing files and directory hierarchies
before extracting over them.  @emph{This is a dangerous option!}
@end table

Some people argue that GNU @code{tar} should not hesitate to overwrite
files with other files when extracting.  When extracting a @code{tar}
archive, they expect to see a faithful copy of the state of the filesystem
when the archive was created.  It is debatable that this would always
be a proper behaviour.  For example, suppose one has an archive in
which @file{usr/local} is a link to @file{usr/local2}.  Since then,
maybe the site removed the link and renamed the whole hierarchy from
@file{/usr/local2} to @file{/usr/local}.  Such things happen all the time.
I guess it would not be welcome at all that GNU @code{tar} removes the
whole hierarchy just to make room for the link to be reinstated (unless it
@emph{also} simultaneously restores the full @file{/usr/local2}, of course!
GNU @code{tar} is indeed able to remove a whole hierarchy to reestablish a
symbolic link, for example, but @emph{only if} @value{op-recursive-unlink}
is specified to allow this behaviour.  In any case, single files are
silently removed.

@node Modification Times, Setting Access Permissions, Recursive Unlink, Writing
@unnumberedsubsubsec Setting Modification Times

Normally, @code{tar} sets the modification times of extracted files to
the modification times recorded for the files in the archive, but
limits the permissions of extracted files by the current @code{umask}
setting.

To set the modification times of extracted files to the time when
the files were extracted, use the @value{op-touch} option in
conjunction with @value{op-extract}.

@table @kbd
@item --touch
@itemx -m
Sets the modification time of extracted archive members to the time
they were extracted, not the time recorded for them in the archive.
Use in conjunction with @value{op-extract}.
@end table

@node Setting Access Permissions, Writing to Standard Output, Modification Times, Writing
@unnumberedsubsubsec Setting Access Permissions

To set the modes (access permissions) of extracted files to those
recorded for those files in the archive, use @samp{--same-persmissions}
in conjunction with the @value{op-extract} operation.  @FIXME{Should be
aliased to ignore-umask.}

@table @kbd
@item --preserve-permission
@itemx --same-permission
@itemx --ignore-umask
@itemx -p
Set modes of extracted archive members to those recorded in the
archive, instead of current umask settings.  Use in conjunction with
@value{op-extract}.
@end table

@FIXME{Following paragraph needs to be rewritten: why doesnt' this cat
files together, why is this useful.  is it really useful with
more than one file?}

@node Writing to Standard Output, remove files, Setting Access Permissions, Writing
@unnumberedsubsubsec Writing to Standard Output

To write the extracted files to the standard output, instead of
creating the files on the file system, use @value{op-to-stdout} in
conjunction with @value{op-extract}.  This option is useful if you are
extracting files to send them through a pipe, and do not need to
preserve them in the file system.  If you extract multiple members,
they appear on standard output concatenated, in the order they are
found in the archive.

@table @kbd
@item --to-stdout
@itemx -O
Writes files to the standard output.  Used in conjunction with
@value{op-extract}.  Extract files to standard output.  When this option
is used, instead of creating the files specified, @code{tar} writes
the contents of the files extracted to its standard output.  This may
be useful if you are only extracting the files in order to send them
through a pipe.  This option is meaningless with @value{op-list}.
@end table

@FIXME{Why would you want to do such a thing, how are files separated on
the standard output? is this useful with more that one file?  Are
pipes the real reason?}

@node remove files,  , Writing to Standard Output, Writing
@unnumberedsubsubsec Removing Files

@FIXME{the various macros in the front of the manual think that this
option goes in this section.  i have no idea; i only know it's nowhere
else in the book...}

@table @kbd
@item --remove-files
Remove files after adding them to the archive.
@end table

@node Scarce,  , Writing, extract options
@subsection Coping with Scarce Resources
@cindex Middle of the archive, starting in the
@cindex Running out of space during extraction
@cindex Disk space, running out of
@cindex Space on the disk, recovering from lack of
@UNREVISED

@menu
* Starting File::
* Same Order::
@end menu

@node Starting File, Same Order, Scarce, Scarce
@unnumberedsubsubsec Starting File

@table @kbd
@item --starting-file=@var{name}
@itemx -K @var{name}
Starts an operation in the middle of an archive.  Use in conjunction
with @value{op-extract} or @value{op-list}.
@end table

If a previous attempt to extract files failed due to lack of disk
space, you can use @value{op-starting-file} to start extracting only
after member @var{name} of the archive.  This assumes, of course, that
there is now free space, or that you are now extracting into a
different file system.  (You could also choose to suspend @code{tar},
remove unnecessary files from the file system, and then restart the
same @code{tar} operation.  In this case, @value{op-starting-file} is
not necessary.  @value{xref-incremental}, @value{xref-interactive},
and @value{ref-exclude}.)

@node Same Order,  , Starting File, Scarce
@unnumberedsubsubsec Same Order

@table @kbd
@item --same-order
@itemx --preserve-order
@itemx -s
To process large lists of file names on machines with small amounts of
memory.  Use in conjunction with @value{op-compare},
@value{op-list}
or @value{op-extract}.
@end table

@FIXME{we don't need/want --preserve to exist any more (from melissa:
ie, don't want that *version* of the option to exist, or don't want
the option to exist in either version?}

@FIXME{i think this explanation is lacking.}

The @value{op-same-order} option tells @code{tar} that the list of file
names to be listed or extracted is sorted in the same order as the
files in the archive.  This allows a large list of names to be used,
even on a small machine that would not otherwise be able to hold all
the names in memory at the same time.  Such a sorted list can easily be
created by running @samp{tar -t} on the archive and editing its output.

This option is probably never needed on modern computer systems.

@node backup, Applications, extract options, operations
@section Backup options

@cindex backup options

GNU @code{tar} offers options for making backups of files before writing
new versions.  These options control the details of these backups.
They may apply to the archive itself before it is created or rewritten,
as well as individual extracted members.  Other GNU programs (@code{cp},
@code{install}, @code{ln}, and @code{mv}, for example) offer similar
options.

Backup options may prove unexpectedly useful when extracting archives
containing many members having identical name, or when extracting archives
on systems having file name limitations, making different members appear
has having similar names through the side-effect of name truncation.
(This is true only if we have a good scheme for truncated backup names,
which I'm not sure at all: I suspect work is needed in this area.)
When any existing file is backed up before being overwritten by extraction,
then clashing files are automatically be renamed to be unique, and the
true name is kept for only the last file of a series of clashing files.
By using verbose mode, users may track exactly what happens.

At the detail level, some decisions are still experimental, and may
change in the future, we are waiting comments from our users.  So, please
do not learn to depend blindly on the details of the backup features.
For example, currently, directories themselves are never renamed through
using these options, so, extracting a file over a directory still has
good chances to fail.  Also, backup options apply to created archives,
not only to extracted members.  For created archives, backups will not
be attempted when the archive is a block or character device, or when it
refers to a remote file.

For the sake of simplicity and efficiency, backups are made by renaming old
files prior to creation or extraction, and not by copying.  The original
name is restored if the file creation fails.  If a failure occurs after a
partial extraction of a file, both the backup and the partially extracted
file are kept.

@table @samp

@item --backup
@opindex --backup
@cindex backups, making
Make backups of files that are about to be overwritten or removed.
Without this option, the original versions are destroyed.

@item --suffix=@var{suffix}
@opindex --suffix
@cindex backup suffix
@vindex SIMPLE_BACKUP_SUFFIX
Append @var{suffix} to each backup file made with @samp{-b}.  If this
option is not specified, the value of the @code{SIMPLE_BACKUP_SUFFIX}
environment variable is used.  And if @code{SIMPLE_BACKUP_SUFFIX} is not
set, the default is @samp{~}, just as in Emacs.

@item --version-control=@var{method}
@opindex --version-control
@vindex VERSION_CONTROL
@cindex backup files, type made
Use @var{method} to determine the type of backups made with @value{op-backup}.
If this option is not specified, the value of the @code{VERSION_CONTROL}
environment variable is used.  And if @code{VERSION_CONTROL} is not set,
the default backup type is @samp{existing}.

@vindex version-control @r{Emacs variable}
This option corresponds to the Emacs variable @samp{version-control};
the same values for @var{method} are accepted as in Emacs.  This options
also more descriptive name.  The valid @var{method}s (unique
abbreviations are accepted):

@table @samp
@item t
@itemx numbered
@opindex numbered @r{backup method}
Always make numbered backups.

@item nil
@itemx existing
@opindex existing @r{backup method}
Make numbered backups of files that already have them, simple backups
of the others.

@item never
@itemx simple
@opindex simple @r{backup method}
Always make simple backups.

@end table

@end table

Some people express the desire to @emph{always} use the @var{op-backup}
option, by defining some kind of alias or script.  This is not as easy
as one may thing, due to the fact old style options should appear first
and consume arguments a bit inpredictably for an alias or script.  But,
if you are ready to give up using old style options, you may resort to
using something like (a Bourne shell function here):

@example
tar () @{ /usr/local/bin/tar --backup $*; @}
@end example

@node Applications, looking ahead, backup, operations
@section Notable @code{tar} Usages
@UNREVISED

@FIXME{Using Unix file linking capability to recreate directory
structures---linking files into one subdirectory and then
@code{tar}ring that directory.}

@FIXME{Nice hairy example using absolute-names, newer, etc.}

@findex uuencode
You can easily use archive files to transport a group of files from
one system to another: put all relevant files into an archive on one
computer system, transfer the archive to another system, and extract
the contents there.  The basic transfer medium might be magnetic tape,
Internet FTP, or even electronic mail (though you must encode the
archive with @code{uuencode} in order to transport it properly by
mail).  Both machines do not have to use the same operating system, as
long as they both support the @code{tar} program.

For example, here is how you might copy a directory's contents from
one disk to another, while preserving the dates, modes, owners and
link-structure of all the files therein.  In this case, the transfer
medium is a @dfn{pipe}, which is one a Unix redirection mechanism:

@smallexample
$ @kbd{cd sourcedir; tar -cf - . | (cd targetdir; tar -xf -)}
@end smallexample

@noindent
The command also works using short option forms:

@FIXME{The following using standard input/output correct??}
@smallexample
$ @w{@kbd{cd sourcedir; tar --create --file=- . | (cd targetdir; tar --extract --file=-)}}
@end smallexample

@noindent
This is one of the easiest methods to transfer a @code{tar} archive.

@node looking ahead,  , Applications, operations
@section Looking Ahead: The Rest of this Manual

You have now seen how to use all eight of the operations available to
@code{tar}, and a number of the possible options.  The next chapter
explains how to choose and change file and archive names, how to use
files to store names of other files which you can then call as
arguments to @code{tar} (this can help you save time if you expect to
archive the same list of files a number of times), and how to
@FIXME{in case it's not obvious, i'm making this up in some sense
based on my imited memory of what the next chapter *really* does.  i
just wanted to flesh out this final section a little bit so i'd
remember to sitck it in here. :-)}

If there are too many files to conveniently list on the command line,
you can list the names in a file, and @code{tar} will read that file.
@value{xref-files-from}.

There are various ways of causing @code{tar} to skip over some files,
and not archive them.  @xref{Choosing}.

@node Backups, Choosing, operations, Top
@chapter Performing Backups and Restoring Files
@UNREVISED

GNU @code{tar} is distributed along with the scripts which the Free
Software Foundation uses for performing backups.  There is no corresponding
scripts available yet for doing restoration of files.  Even if there is
a good chance those scripts may be satisfying to you, they are not the
only scripts or methods available for doing backups and restore.  You may
well create your own, or use more sophisticated packages dedicated to
that purpose.

Some users are enthusiastic about @code{Amanda} (The Advanced Maryland
Automatic Network Disk Archiver), a backup system developed by James
da Silva @file{jds@@cs.umd.edu} and available on many Unix systems.
This is free software, and it is available at these places:

@example
http://www.cs.umd.edu/projects/amanda/amanda.html
ftp://ftp.cs.umd.edu/pub/amanda
@end example

@ifclear PUBLISH

Here is a possible plan for a future documentation about the backuping
scripts which are provided within the GNU @code{tar} distribution.

@example
.* dumps
. + what are dumps

. + different levels of dumps
.  - full dump = dump everything
.  - level 1, level 2 dumps etc, -
	A level n dump dumps everything changed since the last level
	n-1 dump (?)

. + how to use scripts for dumps  (ie, the concept)
.  - scripts to run after editing backup specs (details)

. + Backup Specs, what is it.
.  - how to customize
.  - actual text of script  [/sp/dump/backup-specs]

. + Problems
.  - rsh doesn't work
.  - rtape isn't installed
.  - (others?)

. + the --incremental option of tar

. + tapes
.  - write protection
.  - types of media
.   : different sizes and types, useful for different things
.  - files and tape marks
     one tape mark between files, two at end.
.  - positioning the tape
     MT writes two at end of write,
       backspaces over one when writing again.
@end example

@end ifclear

This chapter documents both the provided FSF scripts and @code{tar}
options which are more specific to usage as a backup tool.

To @dfn{back up} a file system means to create archives that contain
all the files in that file system.  Those archives can then be used to
restore any or all of those files (for instance if a disk crashes or a
file is accidently deleted).  File system @dfn{backups} are also
called @dfn{dumps}.

@menu
* Full Dumps::                  Using @code{tar} to Perform Full Dumps
* Inc Dumps::                   Using @code{tar} to Perform Incremental Dumps
* incremental and listed-incremental::  The Incremental Options
* Backup Levels::               Levels of Backups
* Backup Parameters::           Setting Parameters for Backups and Restoration
* Scripted Backups::            Using the Backup Scripts
* Scripted Restoration::        Using the Restore Script
@end menu

@node Full Dumps, Inc Dumps, Backups, Backups
@section Using @code{tar} to Perform Full Dumps
@UNREVISED

@cindex full dumps
@cindex dumps, full

@cindex corrupted archives
Full dumps should only be made when no other people or programs
are modifying files in the filesystem.  If files are modified while
@code{tar} is making the backup, they may not be stored properly in
the archive, in which case you won't be able to restore them if you
have to.  (Files not being modified are written with no trouble, and do
not corrupt the entire archive.)

You will want to use the @value{op-label} option to give the archive a
volume label, so you can tell what this archive is even if the label
falls off the tape, or anything like that.

Unless the filesystem you are dumping is guaranteed to fit on
one volume, you will need to use the @value{op-multi-volume} option.
Make sure you have enough tapes on hand to complete the backup.

If you want to dump each filesystem separately you will need to use
the @value{op-one-file-system} option to prevent @code{tar} from crossing
filesystem boundaries when storing (sub)directories.

The @value{op-incremental} option is not needed, since this is a complete
copy of everything in the filesystem, and a full restore from this
backup would only be done onto a completely empty disk.

Unless you are in a hurry, and trust the @code{tar} program (and your
tapes), it is a good idea to use the @value{op-verify} option, to make
sure your files really made it onto the dump properly.  This will
also detect cases where the file was modified while (or just after)
it was being archived.  Not all media (notably cartridge tapes) are
capable of being verified, unfortunately.

@value{op-listed-incremental} take a file name argument always.  If the
file doesn't exist, run a level zero dump, creating the file.  If the
file exists, uses that file to see what has changed.

@value{op-incremental} @FIXME{look it up}

@value{op-incremental} handle old GNU-format incremental backup.

This option should only be used when creating an incremental backup of
a filesystem.  When the @value{op-incremental} option is used, @code{tar}
writes, at the beginning of the archive, an entry for each of the
directories that will be operated on.  The entry for a directory
includes a list of all the files in the directory at the time the
dump was done, and a flag for each file indicating whether the file
is going to be put in the archive.  This information is used when
doing a complete incremental restore.

Note that this option causes @code{tar} to create a non-standard
archive that may not be readable by non-GNU versions of the @code{tar}
program.

The @value{op-incremental} option means the archive is an incremental
backup.  Its meaning depends on the command that it modifies.

If the @value{op-incremental} option is used with @value{op-list}, @code{tar}
will list, for each directory in the archive, the list of files in
that directory at the time the archive was created.  This information
is put out in a format that is not easy for humans to read, but which
is unambiguous for a program: each file name is preceded by either a
@samp{Y} if the file is present in the archive, an @samp{N} if the
file is not included in the archive, or a @samp{D} if the file is
a directory (and is included in the archive).  Each file name is
terminated by a null character.  The last file is followed by an
additional null and a newline to indicate the end of the data.

If the @value{op-incremental} option is used with @value{op-extract}, then
when the entry for a directory is found, all files that currently
exist in that directory but are not listed in the archive @emph{are
deleted from the directory}.

This behavior is convenient when you are restoring a damaged file
system from a succession of incremental backups: it restores the
entire state of the file system to that which obtained when the backup
was made.  If you don't use @value{op-incremental}, the file system will
probably fill up with files that shouldn't exist any more.

@value{op-listed-incremental} handle new GNU-format incremental backup.
This option handles new GNU-format incremental backup.  It has much the
same effect as @value{op-incremental}, but also the time when the dump
is done and the list of directories dumped is written to the given
@var{file}. When restoring, only files newer than the saved time are
restored, and the direcotyr list is used to speed up operations.

@value{op-listed-incremental} acts like @value{op-incremental}, but when
used in conjunction with @value{op-create} will also cause @code{tar} to
use the file @var{file}, which contains information about the state
of the filesystem at the time of the last backup, to decide which
files to include in the archive being created.  That file will then
be updated by @code{tar}.  If the file @var{file} does not exist when
this option is specified, @code{tar} will create it, and include all
appropriate files in the archive.

The file, which is archive independent, contains the date it was last
modified and a list of devices, inode numbers and directory names.
@code{tar} will archive files with newer mod dates or inode change
times, and directories with an unchanged inode number and device but
a changed directory name.  The file is updated after the files to
be archived are determined, but before the new archive is actually
created.

GNU @code{tar} actually writes the file twice: once before the data
and written, and once after.

@node Inc Dumps, incremental and listed-incremental, Full Dumps, Backups
@section Using @code{tar} to Perform Incremental Dumps
@UNREVISED

@cindex incremental dumps
@cindex dumps, incremental

Performing incremental dumps is similar to performing full dumps,
although a few more options will usually be needed.

You will need to use the @samp{-N @var{date}} option to tell @code{tar}
to only store files that have been modified since @var{date}.
@var{date} should be the date and time of the last full/incremental
dump.

A standard scheme is to do a @emph{monthly} (full) dump once a month,
a @emph{weekly} dump once a week of everything since the last monthly
and a @emph{daily} every day of everything since the last (weekly or
monthly) dump.

Here is a copy of the script used to dump the filesystems of the
machines here at the Free Software Foundation.  This script is run via
@code{cron} late at night when people are least likely to be using the
machines.  This script dumps several filesystems from several machines
at once (via NFS).  The operator is responsible for ensuring that all
the machines will be up at the time the dump happens.  If a machine is
not running, its files will not be dumped, and the next day's
incremental dump will @emph{not} store files that would have gone onto
that dump.

@example
#!/bin/csh
# Dump thingie
set now = `date`
set then = `cat date.nfs.dump`
/u/hack/bin/tar -c -G -v\
 -f /dev/rtu20\
 -b 126\
 -N "$then"\
 -V "Dump from $then to $now"\
 /alpha-bits/gp\
 /gnu/hack\
 /hobbes/u\
 /spiff/u\
 /sugar-bombs/u
echo $now > date.nfs.dump
mt -f /dev/rtu20 rew
@end example

Output from this script is stored in a file, for the operator to
read later.

This script uses the file @file{date.nfs.dump} to store the date/time
of the last dump.

Since this is a streaming tape drive, no attempt to verify the archive
is done.  This is also why the high blocking factor (126) is used.
The tape drive must also be rewound by the @code{mt} command after
the dump is made.

@node incremental and listed-incremental, Backup Levels, Inc Dumps, Backups
@section The Incremental Options
@UNREVISED

@value{op-incremental} is used in conjunction with @value{op-create},
@value{op-extract} or @value{op-list} when backing up and restoring file
systems.  An archive cannot be extracted or listed with the
@value{op-incremental} option specified unless it was created with the
option specified.  This option should only be used by a script, not by
the user, and is usually disregarded in favor of
@value{op-listed-incremental}, which is described below.

@value{op-incremental} in conjunction with @value{op-create} causes
@code{tar} to write, at the beginning of the archive, an entry for
each of the directories that will be archived.  The entry for a
directory includes a list of all the files in the directory at the
time the archive was created and a flag for each file indicating
whether or not the file is going to be put in the archive.

Note that this option causes @code{tar} to create a non-standard
archive that may not be readable by non-GNU versions of the @code{tar}
program.

@value{op-incremental} in conjunction with @value{op-extract} causes
@code{tar} to read the lists of directory contents previously stored
in the archive, @emph{delete} files in the file system that did not
exist in their directories when the archive was created, and then
extract the files in the archive.

This behavior is convenient when restoring a damaged file system from
a succession of incremental backups: it restores the entire state of
the file system to that which obtained when the backup was made.  If
@value{op-incremental} isn't specified, the file system will probably
fill up with files that shouldn't exist any more.

@value{op-incremental} in conjunction with @value{op-list}, causes
@code{tar} to print, for each directory in the archive, the list of
files in that directory at the time the archive was created.  This
information is put out in a format that is not easy for humans to
read, but which is unambiguous for a program: each file name is
preceded by either a @samp{Y} if the file is present in the archive,
an @samp{N} if the file is not included in the archive, or a @samp{D}
if the file is a directory (and is included in the archive).  Each
file name is terminated by a null character.  The last file is followed
by an additional null and a newline to indicate the end of the data.

@value{op-listed-incremental} acts like @value{op-incremental}, but when
used in conjunction with @value{op-create} will also cause @code{tar}
to use the file @var{snapshot-file}, which contains information about
the state of the file system at the time of the last backup, to decide
which files to include in the archive being created.  That file will
then be updated by @code{tar}.  If the file @var{file} does not exist
when this option is specified, @code{tar} will create it, and include
all appropriate files in the archive.

The file @var{file}, which is archive independent, contains the date
it was last modified and a list of devices, inode numbers and
directory names.  @code{tar} will archive files with newer mod dates
or inode change times, and directories with an unchanged inode number
and device but a changed directory name.  The file is updated after
the files to be archived are determined, but before the new archive is
actually created.

Despite it should be obvious that a device has a non-volatile value, NFS
devices have non-dependable values when an automounter gets in the picture.
This led to a great deal of spurious redumping in incremental dumps,
so it is somewhat useless to compare two NFS devices numbers over time.
So @code{tar} now considers all NFS devices as being equal when it comes
to comparing directories; this is fairly gross, but there does not seem
to be a better way to go.

@FIXME{this section needs to be written}

@node Backup Levels, Backup Parameters, incremental and listed-incremental, Backups
@section Levels of Backups
@UNREVISED

An archive containing all the files in the file system is called a
@dfn{full backup} or @dfn{full dump}.  You could insure your data by
creating a full dump every day.  This strategy, however, would waste a
substantial amount of archive media and user time, as unchanged files
are daily re-archived.

It is more efficient to do a full dump only occasionally.  To back up
files between full dumps, you can a incremental dump.  A @dfn{level
one} dump archives all the files that have changed since the last full
dump.

A typical dump strategy would be to perform a full dump once a week,
and a level one dump once a day.  This means some versions of files
will in fact be archived more than once, but this dump strategy makes
it possible to restore a file system to within one day of accuracy by
only extracting two archives---the last weekly (full) dump and the
last daily (level one) dump.  The only information lost would be in
files changed or created since the last daily backup.  (Doing dumps
more than once a day is usually not worth the trouble).

GNU @code{tar} comes with scripts you can use to do full and level-one
dumps.  Using scripts (shell programs) to perform backups and
restoration is a convenient and reliable alternative to typing out
file name lists and @code{tar} commands by hand.

Before you use these scripts, you need to edit the file
@file{backup-specs}, which specifies parameters used by the backup
scripts and by the restore script.  @FIXME{There is no such restore
script!}.  @FIXME-xref{Script Syntax}.  Once the backup parameters
are set, you can perform backups or restoration by running the
appropriate script.

The name of the restore script is @code{restore}.  @FIXME{There is
no such restore script!}.  The names of the level one and full backup
scripts are, respectively, @code{level-1} and @code{level-0}.
The @code{level-0} script also exists under the name @code{weekly}, and
the @code{level-1} under the name @code{daily}---these additional names
can be changed according to your backup schedule.  @FIXME-xref{Scripted
Restoration}, for more information on running the restoration script.
@FIXME-xref{Scripted Backups}, for more information on running the
backup scripts.

@emph{Please Note:} The backup scripts and the restoration scripts are
designed to be used together.  While it is possible to restore files by
hand from an archive which was created using a backup script, and to create
an archive by hand which could then be extracted using the restore script,
it is easier to use the scripts.  @FIXME{There is no such restore script!}.
@value{xref-incremental}, and @value{xref-listed-incremental},
before making such an attempt.

@FIXME{shorten node names}

@node Backup Parameters, Scripted Backups, Backup Levels, Backups
@section Setting Parameters for Backups and Restoration
@UNREVISED

The file @file{backup-specs} specifies backup parameters for the
backup and restoration scripts provided with @code{tar}.  You must
edit @file{backup-specs} to fit your system configuration and schedule
before using these scripts.

@FIXME{This about backup scripts needs to be written: BS is a shell
script ....  thus ... @file{backup-specs} is in shell script syntax.}

@FIXME-xref{Script Syntax}, for an explanation of this syntax.

@FIXME{Whats a parameter ....  looked at by the backup scripts
... which will be expecting to find ... now syntax ... value is linked
to lame ...  @file{backup-specs} specifies the following parameters:}

@table @samp
@item ADMINISTRATOR
The user name of the backup administrator.

@item BACKUP_HOUR
The hour at which the backups are done.  This can be a number from 0
to 23, or the string @samp{now}.

@item TAPE_FILE
The device @code{tar} writes the archive to.  This device should be
attached to the host on which the dump scripts are run.

@FIXME{examples for all  ...}

@item TAPE_STATUS
The command to use to obtain the status of the archive device,
including error count.  On some tape drives there may not be such a
command; in that case, simply use `TAPE_STATUS=false'.

@item BLOCKING
The blocking factor @code{tar} will use when writing the dump archive.
@value{xref-blocking-factor}.

@item BACKUP_DIRS
A list of file systems to be dumped.  You can include any directory
name in the list---subdirectories on that file system will be
included, regardless of how they may look to other networked machines.
Subdirectories on other file systems will be ignored.

The host name specifies which host to run @code{tar} on, and should
normally be the host that actually contains the file system.  However,
the host machine must have GNU @code{tar} installed, and must be able
to access the directory containing the backup scripts and their
support files using the same file name that is used on the machine
where the scripts are run (ie. what @code{pwd} will print when in that
directory on that machine).  If the host that contains the file system
does not have this capability, you can specify another host as long as
it can access the file system through NFS.

@item BACKUP_FILES
A list of individual files to be dumped.  These should be accessible
from the machine on which the backup script is run.

@FIXME{Same file name, be specific.  Through NFS ...}

@end table

@menu
* backup-specs example::        An Example Text of @file{Backup-specs}
* Script Syntax::               Syntax for @file{Backup-specs}
@end menu

@node backup-specs example, Script Syntax, Backup Parameters, Backup Parameters
@subsection An Example Text of @file{Backup-specs}
@UNREVISED

The following is the text of @file{backup-specs} as it appears at FSF:

@example
# site-specific parameters for file system backup.

ADMINISTRATOR=friedman
BACKUP_HOUR=1
TAPE_FILE=/dev/nrsmt0
TAPE_STATUS="mts -t $TAPE_FILE"
BLOCKING=124
BACKUP_DIRS="
	albert:/fs/fsf
	apple-gunkies:/gd
	albert:/fs/gd2
	albert:/fs/gp
	geech:/usr/jla
	churchy:/usr/roland
	albert:/
	albert:/usr
	apple-gunkies:/
	apple-gunkies:/usr
	gnu:/hack
	gnu:/u
	apple-gunkies:/com/mailer/gnu
	apple-gunkies:/com/archive/gnu"

BACKUP_FILES="/com/mailer/aliases /com/mailer/league*[a-z]"

@end example

@node Script Syntax,  , backup-specs example, Backup Parameters
@subsection Syntax for @file{Backup-specs}
@UNREVISED

@file{backup-specs} is in shell script syntax.  The following
conventions should be considered when editing the script:
@FIXME{"conventions?"}

A quoted string is considered to be contiguous, even if it is on more
than one line.  Therefore, you cannot include commented-out lines
within a multi-line quoted string.  BACKUP_FILES and BACKUP_DIRS are
the two most likely parameters to be multi-line.

A quoted string typically cannot contain wildcards.  In
@file{backup-specs}, however, the parameters BACKUP_DIRS and
BACKUP_FILES can contain wildcards.

@node Scripted Backups, Scripted Restoration, Backup Parameters, Backups
@section Using the Backup Scripts
@UNREVISED

The syntax for running a backup script is:

@example
@file{script-name} [@var{time-to-be-run}]
@end example

where @var{time-to-be-run} can be a specific system time, or can be
@kbd{now}.  If you do not specify a time, the script runs at the time
specified in @file{backup-specs} (@FIXME-pxref{Script Syntax}).

You should start a script with a tape or disk mounted.  Once you
start a script, it prompts you for new tapes or disks as it
needs them.  Media volumes don't have to correspond to archive
files---a multi-volume archive can be started in the middle of a
tape that already contains the end of another multi-volume archive.
The @code{restore} script prompts for media by its archive volume,
so to avoid an error message you should keep track of which tape
(or disk) contains which volume of the archive.  @FIXME{There is
no such restore script!}.  @FIXME-xref{Scripted Restoration}.
@FIXME{Have file names changed?}

The backup scripts write two files on the file system.  The first is a
record file in @file{/etc/tar-backup/}, which is used by the scripts
to store and retrieve information about which files were dumped.  This
file is not meant to be read by humans, and should not be deleted by
them.  @FIXME-xref{incremental and listed-incremental}, for a more
detailed explanation of this file.

The second file is a log file containing the names of the file systems
and files dumped, what time the backup was made, and any error
messages that were generated, as well as how much space was left in
the media volume after the last volume of the archive was written.
You should check this log file after every backup.  The file name is
@file{log-@var{mmm-ddd-yyyy}-level-1} or
@file{log-@var{mmm-ddd-yyyy}-full}.

The script also prints the name of each system being dumped to the
standard output.

@node Scripted Restoration,  , Scripted Backups, Backups
@section Using the Restore Script
@UNREVISED

@ifset PUBLISH

The @code{tar} distribution does not provide restoring scripts.

@end ifset

@ifclear PUBLISH

@quotation
@strong{Warning:} The GNU @code{tar} distribution does @emph{not}
provide any such @code{restore} script yet.  This section is only
listed here for documentation maintenance purposes.  In any case,
all contents is subject to change as things develop.
@end quotation

@FIXME{A section on non-scripted restore may be a good idea.}

To restore files that were archived using a scripted backup, use the
@code{restore} script.  The syntax for the script is:

where ***** are the file systems to restore from, and
***** is a regular expression which specifies which files to
restore.  If you specify --all, the script restores all the files
in the file system.

You should start the restore script with the media containing the
first volume of the archive mounted.  The script will prompt for other
volumes as they are needed.  If the archive is on tape, you don't need
to rewind the tape to to its beginning---if the tape head is
positioned past the beginning of the archive, the script will rewind
the tape as needed.  @FIXME-xref{Media}, for a discussion of tape
positioning.

If you specify @samp{--all} as the @var{files} argument, the
@code{restore} script extracts all the files in the archived file
system into the active file system.

@quotation
@strong{Warning:} The script will delete files from the active file
system if they were not in the file system when the archive was made.
@end quotation

@value{xref-incremental}, and @value{ref-listed-incremental},
for an explanation of how the script makes that determination.

@FIXME{this may be an option, not a given}

@end ifclear

@node Choosing, Date input formats, Backups, Top
@chapter Choosing Files and Names for @code{tar}
@UNREVISED

@FIXME{Melissa (still) Doesn't Really Like This ``Intro'' Paragraph!!!}

Certain options to @code{tar} enable you to specify a name for your
archive.  Other options let you decide which files to include or exclude
from the archive, based on when or whether files were modified, whether
the file names do or don't match specified patterns, or whether files
are in specified directories.

@menu
* file::                        Choosing the Archive's Name
* Selecting Archive Members::
* files::                       Reading Names from a File
* exclude::                     Excluding Some Files
* Wildcards::
* after::                       Operating Only on New Files
* recurse::                     Descending into Directories
* one::                         Crossing Filesystem Boundaries
@end menu

@node file, Selecting Archive Members, Choosing, Choosing
@section Choosing and Naming Archive Files
@cindex Naming an archive
@cindex Archive Name
@cindex Directing output
@cindex Choosing an archive file
@cindex Where is the archive?
@UNREVISED

@FIXME{should the title of this section actually be, "naming an
archive"?}

By default, @code{tar} uses an archive file name that was compiled when
it was built on the system; usually this name refers to some physical
tape drive on the machine.  However, the person who installed @code{tar}
on the system may not set the default to a meaningful value as far as
most users are concerned.  As a result, you will usually want to tell
@code{tar} where to find (or create) the archive.  The @value{op-file}
option allows you to either specify or name a file to use as the archive
instead of the default archive file location.

@table @kbd
@item --file=@var{archive-name}
@itemx -f @var{archive-name}
Name the archive to create or operate on.  Use in conjunction with
any operation.
@end table

For example, in this @code{tar} command,

@example
$ @kbd{tar -cvf collection.tar blues folk jazz}
@end example

@noindent
@file{collection.tar} is the name of the archive.  It must directly
follow the @samp{-f} option, since whatever directly follows @samp{-f}
@emph{will} end up naming the archive.  If you neglect to specify an
archive name, you may end up overwriting a file in the working directory
with the archive you create since @code{tar} will use this file's name
for the archive name.

An archive can be saved as a file in the file system, sent through a
pipe or over a network, or written to an I/O device such as a tape,
floppy disk, or CD write drive.

@cindex Writing new archives
@cindex Archive creation
If you do not name the archive, @code{tar} uses the value of the
environment variable @code{TAPE} as the file name for the archive.  If
that is not available, @code{tar} uses a default, compiled-in archive
name, usually that for tape unit zero (ie. @file{/dev/tu00}).
@code{tar} always needs an archive name.

If you use @file{-} as an @var{archive-name}, @code{tar} reads the
archive from standard input (when listing or extracting files), or
writes it to standard output (when creating an archive).  If you use
@file{-} as an @var{archive-name} when modifying an archive,
@code{tar} reads the original archive from its standard input and
writes the entire new archive to its standard output.

@FIXME{might want a different example here; this is already used in
"notable tar usages".}

@example
$ @kbd{cd sourcedir; tar -cf - . | (cd targetdir; tar -xf -)}
@end example

@FIXME{help!}

@cindex Standard input and output
@cindex tar to standard input and output
To specify an archive file on a device attached to a remote machine,
use the following:

@example
@kbd{--file=@var{hostname}:/@var{dev}/@var{file name}}
@end example

@noindent
@code{tar} will complete the remote connection, if possible, and
prompt you for a username and password.  If you use
@samp{--file=@@@var{hostname}:/@var{dev}/@var{file name}}, @code{tar}
will complete the remote connection, if possible, using your username
as the username on the remote machine.

If the archive file name includes a colon (@samp{:}), then it is assumed
to be a file on another machine.  If the archive file is
@samp{@var{user}@@@var{host}:@var{file}}, then @var{file} is used on the
host @var{host}.  The remote host is accessed using the @code{rsh}
program, with a username of @var{user}.  If the username is omitted
(along with the @samp{@@} sign), then your user name will be used.
(This is the normal @code{rsh} behavior.)  It is necessary for the
remote machine, in addition to permitting your @code{rsh} access, to
have the @file{/usr/ucb/rmt} program installed.  If you need to use a
file whose name includes a colon, then the remote tape drive behavior
can be inhibited by using the @value{op-force-local} option.

@FIXME{i know we went over this yesterday, but bob (and now i do again,
too) thinks it's out of the middle of nowhere.  it doesn't seem to tie
into what came before it well enough <<i moved it now, is it better
here?>>.  bob also comments that if Amanda isn't free software, we
shouldn't mention it..}

When the archive is being created to @file{/dev/null}, GNU @code{tar}
tries to minimize input and output operations.  The Amanda backup
system, when used with GNU @code{tar}, has an initial sizing pass which
uses this feature.

@node Selecting Archive Members, files, file, Choosing
@section Selecting Archive Members
@cindex Specifying files to act on
@cindex Specifying archive members

@dfn{File Name arguments} specify which files in the file system
@code{tar} operates on, when creating or adding to an archive, or which
archive members @code{tar} operates on, when reading or deleting from
an archive.  @xref{Operations}.

To specify file names, you can include them as the last arguments on
the command line, as follows:
@smallexample
@kbd{tar} @var{operation} [@var{option1} @var{option2} @dots{}] [@var{file name-1} @var{file name-2} @dots{}]
@end smallexample

If you specify a directory name as a file name argument, all the files
in that directory are operated on by @code{tar}.

If you do not specify files when @code{tar} is invoked with
@value{op-create}, @code{tar} operates on all the non-directory files in
the working directory.  If you specify either @value{op-list} or
@value{op-extract}, @code{tar} operates on all the archive members in the
archive.  If you specify any operation other than one of these three,
@code{tar} does nothing.

By default, @code{tar} takes file names from the command line.  However,
there are other ways to specify file or member names, or to modify the
manner in which @code{tar} selects the files or members upon which to
operate; @FIXME{add xref here}.  In general, these methods work both for
specifying the names of files and archive members.

@node files, exclude, Selecting Archive Members, Choosing
@section Reading Names from a File
@UNREVISED

@cindex Reading file names from a file
@cindex Lists of file names
@cindex File Name arguments, alternatives
Instead of giving the names of files or archive members on the command
line, you can put the names into a file, and then use the
@value{op-files-from} option to @code{tar}.  Give the name of the file
which contains the list of files to include as the argument to
@samp{--files-from}.  In the list, the file names should be separated by
newlines.  You will frequently use this option when you have generated
the list of files to archive with the @code{find} utility.

@table @kbd
@item --files-from=@var{file name}
@itemx -T @var{file name}
Get names to extract or create from file @var{file name}.
@end table

If you give a single dash as a file name for @samp{--files-from}, (i.e.,
you specify either @samp{--files-from=-} or @samp{-T -}), then the file
names are read from standard input.

Unless you are running @code{tar} with @samp{--create}, you can not use
both @samp{--files-from=-} and @samp{--file=-} (@samp{-f -}) in the same
command.

@FIXME{add bob's example, from his message on 2-10-97}

The following example shows how to use @code{find} to generate a list of
files smaller than 400K in length and put that list into a file
called @file{small-files}.  You can then use the @samp{-T} option to
@code{tar} to specify the files from that file, @file{small-files}, to
create the archive @file{little.tgz}.  (The @samp{-z} option to
@code{tar} compresses the archive with @code{gzip}; @pxref{gzip} for
more information.)

@example
$ @kbd{find . -size -400 -print > small-files}
$ @kbd{tar -c -v -z -T small-files -f little.tgz}
@end example

@noindent
@FIXME{say more here to conclude the example/section?}

@menu
* nul::
@end menu

@node nul,  , files, files
@ifinfo
@unnumberedsubsec @kbd{NUL} Terminated File Names
@end ifinfo

@cindex File names, terminated by @kbd{NUL}
@cindex @kbd{NUL} terminated file names
The @value{op-null} option causes @value{op-files-from} to read file
names terminated by a @code{NUL} instead of a newline, so files whose
names contain newlines can be archived using @samp{--files-from}.

@table @kbd
@item --null
Only consider @kbd{NUL} terminated file names, instead of files that
terminate in a newline.
@end table

The @samp{--null} option is just like the one in GNU @code{xargs} and
@code{cpio}, and is useful with the @samp{-print0} predicate of GNU
@code{find}.  In @code{tar}, @samp{--null} also causes
@value{op-directory} options to be treated as file names to archive, in
case there are any files out there called @file{-C}.

This example shows how to use @code{find} to generate a list of files
larger than 800K in length and put that list into a file called
@file{long-files}.  The @samp{-print0} option to @code{find} just just
like @samp{-print}, except that it separates files with a @kbd{NUL}
rather than with a newline.  You can then run @code{tar} with both the
@samp{--null} and @samp{-T} options to specify that @code{tar} get the
files from that file, @file{long-files}, to create the archive
@file{big.tgz}.  The @samp{--null} option to @code{tar} will cause
@code{tar} to recognize the @kbd{NUL} separator between files.

@example
$ @kbd{find . -size +800 -print0 > long-files}
$ @kbd{tar -c -v --null --files-from=long-files --file=big.tar}
@end example

@FIXME{say anything else here to conclude the section?}

@node exclude, Wildcards, files, Choosing
@section Excluding Some Files
@cindex File names, excluding files by
@cindex Excluding files by name and pattern
@cindex Excluding files by file system
@UNREVISED

To avoid operating on files whose names match a particular pattern,
use the @value{op-exclude} or @value{op-exclude-from} options.

@table @kbd
@item --exclude=@var{pattern}
Causes @code{tar} to ignore files that match the @var{pattern}.
@end table

@findex exclude
The @value{op-exclude} option will prevent any file or member which
matches the shell wildcards (@var{pattern}) from being operated on
(@var{pattern} can be a single file name or a more complex expression).
For example, if you want to create an archive with all the contents of
@file{/tmp} except the file @file{/tmp/foo}, you can use the command
@samp{tar --create --file=arch.tar --exclude=foo}.  You may give
multiple @samp{--exclude} options.

@table @kbd
@item --exclude-from=@var{file}
@itemx -X @var{file}
Causes @code{tar} to ignore files that match the patterns listed in
@var{file}.
@end table

@findex exclude-from
Use the @samp{--exclude-from=@var{file-of-patterns}} option to read a
list of shell wildcards, one per line, from @var{file}; @code{tar} will
ignore files matching those regular expressions.  Thus if @code{tar} is
called as @w{@samp{tar -c -X foo .}} and the file @file{foo} contains a
single line @file{*.o}, no files whose names end in @file{.o} will be
added to the archive.

@FIXME{do the exclude options files need to have stuff separated by
newlines the same as the files-from option does?}

@menu
* problems with exclude::
@end menu

@node problems with exclude,  , exclude, exclude
@unnumberedsubsec Problems with Using the @code{exclude} Options

@FIXME{put in for the editor's/editors' amusement, but should be taken
out in the final draft, just in case! : }

@ignore
subtitled: getting screwed using exclewed
@end ignore

Some users find @samp{exclude} options confusing.  Here are some common
pitfalls:

@itemize @bullet
@item
The main operating mode of @code{tar} will always act on file names
listed on the command line, no matter whether or not there is an
exclusion which would otherwise affect them.  In the example above, if
you create an archive and exclude files that end with @samp{*.o}, but
explicitly name the file @samp{catc.o} after all the options have been
listed, @samp{catc.o} @emph{will} be included in the archive.

@item
You can sometimes confuse the meanings of @value{op-exclude} and
@value{op-exclude-from}.  Be careful: use @value{op-exclude} when files
to be excluded are given as a pattern on the command line.  Use
@samp{--exclude-from=@var{file-of-patterns}} to introduce the name of a
file which contains a list of patterns, one per line; each of these
patterns can exclude zero, one, or many files.

@item
When you use @value{op-exclude}, be sure to quote the @var{pattern}
parameter, so GNU @code{tar} sees wildcard characters like @samp{*}.
If you do not do this, the shell might expand the @samp{*} itself
using files at hand, so @code{tar} might receive a list of files
instead of one pattern, or none at all, making the command somewhat
illegal.  This might not correspond to what you want.

For example, write:

@example
$ @kbd{tar -c -f @var{archive.tar} -X '*/tmp/*' @var{directory}}
@end example

@noindent
rather than:

@example
$ @kbd{tar -c -f @var{archive.tar} -X */tmp/* @var{directory}}
@end example

@item
You must use use shell syntax, or globbing, rather than @code{regexp}
syntax, when using exclude options in @code{tar}.  If you try to use
@code{regexp} syntax to describe files to be excluded, your command
might fail.

@item
In earlier versions of @code{tar}, what is now the
@samp{--exclude-from=@var{file-of-patterns}} option was called
@samp{--exclude-@var{pattern}} instead.  Now,
@samp{--exclude=@var{pattern}} applies to patterns listed on the command
line and @samp{--exclude-from=@var{file-of-patterns}} applies to
patterns listed in a file.

@end itemize

@node Wildcards, after, exclude, Choosing
@section Wildcards Patterns and Matching

@dfn{Globbing} is the operation by which @dfn{wildcard} characters,
@samp{*} or @samp{?} for example, are replaced and expanded into all
existing files matching the given pattern.  However, @code{tar} often
uses wildcard patterns for matching (or globbing) archive members instead
of actual files in the filesystem.  Wildcard patterns are also used for
verifying volume labels of @code{tar} archives.  This section has the
purpose of explaining wildcard syntax for @code{tar}.

@FIXME{the next few paragraphs need work.}

A @var{pattern} should be written according to shell syntax, using wildcard
characters to effect globbing.  Most characters in the pattern stand
for themselves in the matched string, and case is significant: @samp{a}
will match only @samp{a}, and not @samp{A}.  The character @samp{?} in the
pattern matches any single character in the matched string.  The character
@samp{*} in the pattern matches zero, one, or more single characters in
the matched string.  The character @samp{\} says to take the following
character of the pattern @emph{literally}; it is useful when one needs to
match the @samp{?}, @samp{*}, @samp{[} or @samp{\} characters, themselves.

The character @samp{[}, up to the matching @samp{]}, introduces a character
class.  A @dfn{character class} is a list of acceptable characters
for the next single character of the matched string.  For example,
@samp{[abcde]} would match any of the first five letters of the alphabet.
Note that within a character class, all of the ``special characters''
listed above other than @samp{\} lose their special meaning; for example,
@samp{[-\\[*?]]} would match any of the characters, @samp{-}, @samp{\},
@samp{[}, @samp{*}, @samp{?}, or @samp{]}.  (Due to parsing constraints,
the characters @samp{-} and @samp{]} must either come @emph{first} or
@emph{last} in a character class.)

@cindex Excluding characters from a character class
@cindex Character class, excluding characters from
If the first character of the class after the opening @samp{[}
is @samp{!} or @samp{^}, then the meaning of the class is reversed.
Rather than listing character to match, it lists those characters which
are @emph{forbidden} as the next single character of the matched string.

Other characters of the class stand for themselves.  The special
construction @samp{[@var{a}-@var{e}]}, using an hyphen between two
letters, is meant to represent all characters between @var{a} and
@var{e}, inclusive.

@FIXME{need to add a sentence or so here to make this clear for those
who don't have dan around.}

Periods (@samp{.}) or forward slashes (@samp{/}) are not considered
special for wildcard matches.  However, if a pattern completely matches
a directory prefix of a matched string, then it matches the full matched
string: excluding a directory also excludes all the files beneath it.

There are some discussions floating in the air and asking for modifications
in the way GNU @code{tar} accomplishes wildcard matches.  We perceive
any change of semantics in this area as a delicate thing to impose on
GNU @code{tar} users.  On the other hand, the GNU project should be
progressive enough to correct any ill design: compatibility at all price
is not always a good attitude.  In conclusion, it is @emph{possible}
that slight amendments be later brought to the previous description.
Your opinions on the matter are welcome.

@node after, recurse, Wildcards, Choosing
@section Operating Only on New Files
@cindex Excluding file by age
@cindex Modification time, excluding files by
@cindex Age, excluding files by
@UNREVISED

The @value{op-after-date} option causes @code{tar} to only work on files
whose modification or inode-changed times are newer than the @var{date}
given.  If you use this option when creating or appending to an archive,
the archive will only include new files.  If you use @samp{--after-date}
when extracting an archive, @code{tar} will only extract files newer
than the @var{date} you specify.

If you only want @code{tar} to make the date comparison based on
modification of the actual contents of the file (rather than inode
changes), then use the @value{op-newer-mtime} option.

You may use these options with any operation.  Note that these options
differ from the @value{op-update} operation in that they allow you to
specify a particular date against which @code{tar} can compare when
deciding whether or not to archive the files.

@table @kbd
@item --after-date=@var{date}
@itemx --newer=@var{date}
@itemx -N @var{date}
Only store files newer than @var{date}.

Acts on files only if their modification or inode-changed times are
later than @var{date}.  Use in conjunction with any operation.

@item --newer-mtime=@var{date}
Acts like @value{op-after-date}, but only looks at modification times.
@end table

These options limit @code{tar} to only operating on files which have
been modified after the date specified.  A file is considered to have
changed if the contents have been modified, or if the owner,
permissions, and so forth, have been changed.  (For more information on
how to specify a date, see @ref{Date input formats}; remember that the
entire date argument must be quoted if it contains any spaces.)

Gurus would say that @value{op-after-date} tests both the @code{mtime}
(time the contents of the file were last modified) and @code{ctime}
(time the file's status was last changed: owner, permissions, etc)
fields, while @value{op-newer-mtime} tests only @code{mtime} field.

To be precise, @value{op-after-date} checks @emph{both} @code{mtime} and
@code{ctime} and processes the file if either one is more recent than
@var{date}, while @value{op-newer-mtime} only checks @code{mtime} and
disregards @code{ctime}.  Neither uses @code{atime} (the last time the
contents of the file were looked at).

Date specifiers can have embedded spaces.  Because of this, you may need
to quote date arguments to keep the shell from parsing them as separate
arguments.

@FIXME{Need example of --newer-mtime with quoted argument.}

@quotation
@strong{Please Note:} @value{op-after-date} and @value{op-newer-mtime}
should not be used for incremental backups.  Some files (such as those
in renamed directories) are not selected properly by these options.
@xref{incremental and listed-incremental}.
@end quotation

To select files newer than the modification time of a file that already
exists, you can use the @samp{--reference} (@samp{-r}) option of GNU
@code{date}, available in GNU shell utilities 1.13 or later.  It returns
the timestamp of that already existing file; this timestamp expands to
become the referent date which @samp{--newer} uses to determine which
files to archive.  For example, you could say,

@example
$ @kbd{tar -cf @var{archive.tar} --newer="`date -r @var{file}`" /home}
@end example

@noindent
which tells @FIXME{need to fill this in!}.

@node recurse, one, after, Choosing
@section Descending into Directories
@cindex Avoiding recursion in directories
@cindex Descending directories, avoiding
@cindex Directories, avoiding recursion
@cindex Recursion in directories, avoiding
@UNREVISED

@FIXME{arrggh!  this is still somewhat confusing to me. :-< }

@FIXME{show dan bob's comments, from 2-10-97}

Usually, @code{tar} will recursively explore all directories (either
those given on the command line or through the @value{op-files-from}
option) for the various files they contain.  However, you may not always
want @code{tar} to act this way.

The @value{op-no-recursion} option inhibits @code{tar}'s recursive descent
into specified directories.  If you specify @samp{--no-recursion}, you can
use the @code{find} utility for hunting through levels of directories to
construct a list of file names which you could then pass to @code{tar}.
@code{find} allows you to be more selective when choosing which files to
archive; see @ref{files} for more information on using @code{find} with
@code{tar}, or look.

@table @kbd
@item --no-recursion
Prevents @code{tar} from recursively descending directories.
@end table

When you use @samp{--no-recursion}, GNU @code{tar} grabs directory entries
themselves, but does not descend on them recursively.  Many people use
@code{find} for locating files they want to back up, and since
@code{tar} @emph{usually} recursively descends on directories, they have
to use the @samp{@w{! -d}} option to @code{find} @FIXME{needs more
explanation or a cite to another info file} as they usually do not want
all the files in a directory.  They then use the @value{op-file-from}
option to archive the files located via @code{find}.

The problem when restoring files archived in this manner is that the
directories themselves are not in the archive; so the
@value{op-same-permissions} option does not affect them---while users
might really like it to.  Specifying @value{op-no-recursion} is a way to
tell @code{tar} to grab only the directory entries given to it, adding
no new files on its own.

@FIXME{example here}

@node one,  , recurse, Choosing
@section Crossing Filesystem Boundaries
@cindex File system boundaries, not crossing
@UNREVISED

@code{tar} will normally automatically cross file system boundaries in
order to archive files which are part of a directory tree.  You can
change this behavior by running @code{tar} and specifying
@value{op-one-file-system}.  This option only affects files that are
archived because they are in a directory that is being archived;
@code{tar} will still archive files explicitly named on the command line
or through @value{op-files-from}, regardless of where they reside.

@table @kbd
@item --one-file-system
@itemx -l
Prevents @code{tar} from crossing file system boundaries when
archiving.  Use in conjunction with any write operation.
@end table

The @samp{--one-file-system} option causes @code{tar} to modify its
normal behavior in archiving the contents of directories.  If a file in
a directory is not on the same filesystem as the directory itself, then
@code{tar} will not archive that file.  If the file is a directory
itself, @code{tar} will not archive anything beneath it; in other words,
@code{tar} will not cross mount points.

It is reported that using this option, the mount point is is archived,
but nothing under it.

This option is useful for making full or incremental archival backups of
a file system.  If this option is used in conjunction with
@value{op-verbose}, files that are excluded are mentioned by name on the
standard error.

@menu
* directory::                   Changing Directory
* absolute::                    Absolute File Names
@end menu

@node directory, absolute, one, one
@subsection Changing the Working Directory

@FIXME{need to read over this node now for continuity; i've switched
things around some.}

@cindex Changing directory mid-stream
@cindex Directory, changing mid-stream
@cindex Working directory, specifying
@UNREVISED

To change the working directory in the middle of a list of file names,
either on the command line or in a file specified using
@value{op-files-from}, use @value{op-directory}.  This will change the
working directory to the directory @var{directory} after that point in
the list.

@table @kbd
@item --directory=@var{directory}
@itemx -C @var{directory}
Changes the working directory in the middle of a command line.
@end table

For example,

@example
$ @kbd{tar -c -f jams.tar grape prune -C food cherry}
@end example

@noindent
will place the files @file{grape} and @file{prune} from the current
directory into the archive @file{jams.tar}, followed by the file
@file{cherry} from the directory @file{food}.  This option is especially
useful when you have several widely separated files that you want to
store in the same archive.

Note that the file @file{cherry} is recorded in the archive under the
precise name @file{cherry}, @emph{not} @file{food/cherry}.  Thus, the
archive will contain three files that all appear to have come from the
same directory; if the archive is extracted with plain @samp{tar
--extract}, all three files will be written in the current directory.

Contrast this with the command,

@example
$ @kbd{tar -c -f jams.tar grape prune -C food red/cherry}
@end example

@noindent
which records the third file in the archive under the name
@file{red/cherry} so that, if the archive is extracted using
@samp{tar --extract}, the third file will be written in a subdirectory
named @file{orange-colored}.

You can use the @samp{--directory} option to make the archive
independent of the original name of the directory holding the files.
The following command places the files @file{/etc/passwd},
@file{/etc/hosts}, and @file{/lib/libc.a} into the archive
@file{foo.tar}:

@example
$ @kbd{tar -c -f foo.tar -C /etc passwd hosts -C /lib libc.a}
@end example

@noindent
However, the names of the archive members will be exactly what they were
on the command line: @file{passwd}, @file{hosts}, and @file{libc.a}.
They will not appear to be related by file name to the original
directories where those files were located.

Note that @samp{--directory} options are interpreted consecutively.  If
@samp{--directory} specifies a relative file name, it is interpreted
relative to the then current directory, which might not be the same as
the original current working directory of @code{tar}, due to a previous
@samp{--directory} option.

@FIXME{dan: does this mean that you *can* use the short option form, but
you can *not* use the long option form with --files-from?  or is this
totally screwed?}

When using @samp{--files-from} (@pxref{files}), you can put @samp{-C}
options in the file list.  Unfortunately, you cannot put
@samp{--directory} options in the file list.  (This interpretation can
be disabled by using the @value{op-null} option.)

@node absolute,  , directory, one
@subsection Absolute File Names
@UNREVISED

@table @kbd
@item -P
@itemx --absolute-names
Do not strip leading slashes from file names.
@end table

By default, GNU @code{tar} drops a leading @samp{/} on input or output.
This option turns off this behavior; it is equivalent to changing to the
root directory before running @code{tar} (except it also turns off the
usual warning message).

When @code{tar} extracts archive members from an archive, it strips any
leading slashes (@samp{/}) from the member name.  This causes absolute
member names in the archive to be treated as relative file names.  This
allows you to have such members extracted wherever you want, instead of
being restricted to extracting the member in the exact directory named
in the archive.  For example, if the archive member has the name
@file{/etc/passwd}, @code{tar} will extract it as if the name were
really @file{etc/passwd}.

Other @code{tar} programs do not do this.  As a result, if you create an
archive whose member names start with a slash, they will be difficult
for other people with a non-GNU @code{tar} program to use.  Therefore,
GNU @code{tar} also strips leading slashes from member names when
putting members into the archive.  For example, if you ask @code{tar} to
add the file @file{/bin/ls} to an archive, it will do so, but the member
name will be @file{bin/ls}.

If you use the @value{op-absolute-names} option, @code{tar} will do
neither of these transformations.

To archive or extract files relative to the root directory, specify
the @value{op-absolute-names} option.

Normally, @code{tar} acts on files relative to the working
directory---ignoring superior directory names when archiving, and
ignoring leading slashes when extracting.

When you specify @value{op-absolute-names}, @code{tar} stores file names
including all superior directory names, and preserves leading slashes.
If you only invoked @code{tar} from the root directory you would never
need the @value{op-absolute-names} option, but using this option may be
more convenient than switching to root.

@FIXME{Should be an example in the tutorial/wizardry section using this
to transfer files between systems.}

@FIXME{Is write access an issue?}

@table @kbd
@item --absolute-names
Preserves full file names (inclusing superior dirctory names) when
archiving files.  Preserves leading slash when extracting files.

@end table

@FIXME{this is still horrible; need to talk with dan on monday.}

@code{tar} prints out a message about removing the @samp{/} from file
names.  This message appears once per GNU @code{tar} invocation.  It
represents something which ought to be told; ignoring what it means can
cause very serious surprises, later.

Some people, nevertheless, do not want to see this message.  Wanting to
play really dangerously, one may of course redirect @code{tar} standard
error to the sink.  For example, under @code{sh}:

@example
$ @kbd{tar -c -f archive.tar /home 2> /dev/null}
@end example

@noindent
Another solution, both nicer and simpler, would be to change to
the @file{/} directory first, and then avoid absolute notation.
For example:

@example
$ @kbd{(cd / && tar -c -f archive.tar home)}
$ @kbd{tar -c -f archive.tar -C  / home}
@end example

@node Date input formats, Formats, Choosing, Top
@chapter Date input formats

@cindex date input formats
@findex getdate

@quotation
Our units of temporal measurement, from seconds on up to months, are so
complicated, asymmetrical and disjunctive so as to make coherent mental
reckoning in time all but impossible.  Indeed, had some tyrannical god
contrived to enslave our minds to time, to make it all but impossible
for us to escape subjection to sodden routines and unpleasant surprises,
he could hardly have done better than handing down our present system.
It is like a set of trapezoidal building blocks, with no vertical or
horizontal surfaces, like a language in which the simplest thought
demands ornate constructions, useless particles and lengthy
circumlocutions.  Unlike the more successful patterns of language and
science, which enable us to face experience boldly or at least
level-headedly, our system of temporal calculation silently and
persistently encourages our terror of time.

@dots{}  It is as though architects had to measure length in feet, width
in meters and height in ells; as though basic instruction manuals
demanded a knowledge of five different languages.  It is no wonder then
that we often look into our own immediate past or future, last Tuesday
or a week from Sunday, with feelings of helpless confusion.  @dots{}

--- Robert Grudin, @cite{Time and the Art of Living}.
@end quotation

This section describes the textual date representations that GNU
programs accept.  These are the strings you, as a user, can supply as
arguments to the various programs.  The C interface (via the
@code{getdate} function) is not described here.

@cindex beginning of time, for Unix
@cindex epoch, for Unix
Although the date syntax here can represent any possible time since zero
A.D., computer integers are not big enough for such a (comparatively)
long time.  The earliest date semantically allowed on Unix systems is
midnight, 1 January 1970 UCT.

@menu
* General date syntax::         Common rules.
* Calendar date item::          19 Dec 1994.
* Time of day item::            9:20pm.
* Timezone item::               EST, DST, BST, UCT, AHST, ...
* Day of week item::            Monday and others.
* Relative item in date strings::  next tuesday, 2 years ago.
* Pure numbers in date strings::  19931219, 1440.
* Authors of getdate::          Bellovin, Salz, Berets, et al.
@end menu


@node General date syntax, Calendar date item, Date input formats, Date input formats
@section General date syntax

@cindex general date syntax

@cindex items in date strings
A @dfn{date} is a string, possibly empty, containing many items
separated by whitespace.  The whitespace may be omitted when no
ambiguity arises.  The empty string means the beginning of today (i.e.,
midnight).  Order of the items is immaterial.  A date string may contain
many flavors of items:

@itemize @bullet
@item calendar date items
@item time of the day items
@item time zone items
@item day of the week items
@item relative items
@item pure numbers.
@end itemize

@noindent We describe each of these item types in turn, below.

@cindex numbers, written-out
@cindex ordinal numbers
@findex first @r{in date strings}
@findex next @r{in date strings}
@findex last @r{in date strings}
A few numbers may be written out in words in most contexts.  This is
most useful for specifying day of the week items or relative items (see
below).  Here is the list: @samp{first} for 1, @samp{next} for 2,
@samp{third} for 3, @samp{fourth} for 4, @samp{fifth} for 5,
@samp{sixth} for 6, @samp{seventh} for 7, @samp{eighth} for 8,
@samp{ninth} for 9, @samp{tenth} for 10, @samp{eleventh} for 11 and
@samp{twelfth} for 12.  Also, @samp{last} means exactly @math{-1}.

@cindex months, written-out
When a month is written this way, it is still considered to be written
numerically, instead of being ``spelled in full''; this changes the
allowed strings.

@cindex case, ignored in dates
@cindex comments, in dates
Alphabetic case is completely ignored in dates.  Comments may be introduced
between round parentheses, as long as included parentheses are properly
nested.  Hyphens not followed by a digit are currently ignored.  Leading
zeros on numbers are ignored.


@node Calendar date item, Time of day item, General date syntax, Date input formats
@section Calendar date item

@cindex calendar date item

A @dfn{calendar date item} specifies a day of the year.  It is
specified differently, depending on whether the month is specified
numerically or literally.  All these strings specify the same calendar date:

@example
1970-09-17           # ISO 8601.
70-9-17              # This century assumed by default.
70-09-17             # Leading zeros are ignored.
9/17/72              # Common U.S. writing.
24 September 1972
24 Sept 72           # September has a special abbreviation.
24 Sep 72            # Three-letter abbreviations always allowed.
Sep 24, 1972
24-sep-72
24sep72
@end example

The year can also be omitted.  In this case, the last specified year is
used, or the current year if none.  For example:

@example
9/17
sep 17
@end example

Here are the rules.

@cindex ISO 8601 date format
@cindex date format, ISO 8601
For numeric months, the ISO 8601 format
@samp{@var{year}-@var{month}-@var{day}} is allowed, where @var{year} is
any positive number, @var{month} is a number between 01 and 12, and
@var{day} is a number between 01 and 31.  A leading zero must be present
if a number is less than ten.  If @var{year} is less than 100, then 1900
is added to it to force a date in this century.  The construct
@samp{@var{month}/@var{day}/@var{year}}, popular in the United States,
is accepted.  Also @samp{@var{month}/@var{day}}, omitting the year.

@cindex month names in date strings
@cindex abbreviations for months
Literal months may be spelled out in full: @samp{January},
@samp{February}, @samp{March}, @samp{April}, @samp{May}, @samp{June},
@samp{July}, @samp{August}, @samp{September}, @samp{October},
@samp{November} or @samp{December}.  Literal months may be abbreviated
to their first three letters, possibly followed by an abbreviating dot.
It is also permitted to write @samp{Sept} instead of @samp{September}.

When months are written literally, the calendar date may be given as any
of the following:

@example
@var{day} @var{month} @var{year}
@var{day} @var{month}
@var{month} @var{day} @var{year}
@var{day}-@var{month}-@var{year}
@end example

Or, omitting the year:

@example
@var{month} @var{day}
@end example


@node Time of day item, Timezone item, Calendar date item, Date input formats
@section Time of day item

@cindex time of day item

A @dfn{time of day item} in date strings specifies the time on a given
day.  Here are some examples, all of which represent the same time:

@example
20:02:0
20:02
8:02pm
20:02-0500      # In EST (Eastern U.S. Standard Time).
@end example

More generally, the time of the day may be given as
@samp{@var{hour}:@var{minute}:@var{second}}, where @var{hour} is
a number between 0 and 23, @var{minute} is a number between 0 and
59, and @var{second} is a number between 0 and 59.  Alternatively,
@samp{:@var{second}} can be omitted, in which case it is taken to
be zero.

@findex am @r{in date strings}
@findex pm @r{in date strings}
@findex midnight @r{in date strings}
@findex noon @r{in date strings}
If the time is followed by @samp{am} or @samp{pm} (or @samp{a.m.}
or @samp{p.m.}), @var{hour} is restricted to run from 1 to 12, and
@samp{:@var{minute}} may be omitted (taken to be zero).  @samp{am}
indicates the first half of the day, @samp{pm} indicates the second
half of the day.  In this notation, 12 is the predecessor of 1:
midnight is @samp{12am} while noon is @samp{12pm}.

@cindex timezone correction
@cindex minutes, timezone correction by
The time may alternatively be followed by a timezone correction,
expressed as @samp{@var{s}@var{hh}@var{mm}}, where @var{s} is @samp{+}
or @samp{-}, @var{hh} is a number of zone hours and @var{mm} is a number
of zone minutes.  When a timezone correction is given this way, it
forces interpretation of the time in UTC, overriding any previous
specification for the timezone or the local timezone.  The @var{minute}
part of the time of the day may not be elided when a timezone correction
is used.  This is the only way to specify a timezone correction by
fractional parts of an hour.

Either @samp{am}/@samp{pm} or a timezone correction may be specified,
but not both.


@node Timezone item, Day of week item, Time of day item, Date input formats
@section Timezone item

@cindex timezone item

A @dfn{timezone item} specifies an international timezone, indicated by
a small set of letters.  Any included period is ignored.  Military
timezone designations use a single letter.  Currently, only integral
zone hours may be represented in a timezone item.  See the previous
section for a finer control over the timezone correction.

Here are many non-daylight-savings-time timezones, indexed by the zone
hour value.

@table @asis
@item +000
@cindex Greenwich Mean Time
@cindex Universal Coordinated Time
@cindex Western European Time
@samp{GMT} for Greenwich Mean, @samp{UT} or @samp{UTC} for Universal
(Coordinated), @samp{WET} for Western European and @samp{Z} for
militaries.
@item +100
@cindex West African Time
@samp{WAT} for West Africa and
@samp{A} for militaries.
@item +200
@cindex Azores Time
@samp{AT} for Azores and @samp{B} for militaries.
@item +300
@samp{C} for militaries.
@item +400
@cindex Atlantic Standard Time
@samp{AST} for Atlantic Standard and @samp{D} for militaries.
@item +500
@cindex Eastern Standard Time
@samp{E} for militaries and @samp{EST} for Eastern Standard.
@item +600
@cindex Central Standard Time
@samp{CST} for Central Standard and @samp{F} for militaries.
@item +700
@cindex Mountain Standard Time
@samp{G} for militaries and @samp{MST} for Mountain Standard.
@item +800
@cindex Pacific Standard Time
@samp{H} for militaries and @samp{PST} for Pacific Standard.
@item +900
@cindex Yukon Standard Time
@samp{I} for militaries and @samp{YST} for Yukon Standard.
@item +1000
@cindex Alaska-Hawaii Time
@cindex Central Alaska Time
@cindex Hawaii Standard Time
@samp{AHST} for Alaska-Hawaii Standard, @samp{CAT} for Central Alaska,
@samp{HST} for Hawaii Standard and @samp{K} for militaries.
@item +1100
@cindex Nome Standard Time
@samp{L} for militaries and @samp{NT} for Nome.
@item +1200
@cindex International Date Line West
@samp{IDLW} for International Date Line West and @samp{M} for
militaries.
@item -100
@cindex Central European Time
@cindex Middle European Time
@cindex Middle European Winter Time
@cindex French Winter Time
@cindex Swedish Winter Time
@samp{CET} for Central European, @samp{FWT} for French Winter,
@samp{MET} for Middle European, @samp{MEWT} for Middle European
Winter, @samp{N} for militaries and @samp{SWT} for Swedish Winter.
@item -200
@cindex Eastern European Time
@cindex USSR Zone
@samp{EET} for Eastern European, USSR Zone 1 and @samp{O} for militaries.
@item -300
@cindex Baghdad Time
@samp{BT} for Baghdad, USSR Zone 2 and @samp{P} for militaries.
@item -400
@samp{Q} for militaries and @samp{ZP4} for USSR Zone 3.
@item -500
@samp{R} for militaries and @samp{ZP5} for USSR Zone 4.
@item -600
@samp{S} for militaries and @samp{ZP6} for USSR Zone 5.
@item -700
@cindex West Australian Standard Time
@samp{T} for militaries and @samp{WAST} for West Australian Standard.
@item -800
@cindex China Coast Time
@samp{CCT} for China Coast, USSR Zone 7 and @samp{U} for militaries.
@item -900
@cindex Japan Standard Time
@samp{JST} for Japan Standard, USSR Zone 8 and @samp{V} for militaries.
@item -1000
@cindex East Australian Standard Time
@cindex Guam Standard Time
@samp{EAST} for East Australian Standard, @samp{GST} for Guam
Standard, USSR Zone 9 and @samp{W} for militaries.
@item -1100
@samp{X} for militaries.
@item -1200
@cindex International Date Line East
@cindex New Zealand Standard Time
@samp{IDLE} for International Date Line East, @samp{NZST} for
New Zealand Standard, @samp{NZT} for New Zealand and @samp{Y} for
militaries.
@end table

@cindex daylight savings time
Here are many DST timezones, indexed by the zone hour value.  Also, by
following a non-DST timezone by the string @samp{DST} in a separate word
(that is, separated by some whitespace), the corresponding DST timezone
may be specified.

@table @asis
@item 0
@samp{BST} for British Summer.
@item +400
@samp{ADT} for Atlantic Daylight.
@item +500
@samp{EDT} for Eastern Daylight.
@item +600
@samp{CDT} for Central Daylight.
@item +700
@samp{MDT} for Mountain Daylight.
@item +800
@samp{PDT} for Pacific Daylight.
@item +900
@samp{YDT} for Yukon Daylight.
@item +1000
@samp{HDT} for Hawaii Daylight.
@item -100
@samp{MEST} for Middle European Summer, @samp{MESZ} for Middle European
Summer, @samp{SST} for Swedish Summer and @samp{FST} for French Summer.
@item -700
@samp{WADT} for West Australian Daylight.
@item -1000
@samp{EADT} for Eastern Australian Daylight.
@item -1200
@samp{NZDT} for New Zealand Daylight.
@end table


@node Day of week item, Relative item in date strings, Timezone item, Date input formats
@section Day of week item

@cindex day of week item

The explicit mention of a day of the week will forward the date
(only if necessary) to reach that day of the week in the future.

Days of the week may be spelled out in full: @samp{Sunday},
@samp{Monday}, @samp{Tuesday}, @samp{Wednesday}, @samp{Thursday},
@samp{Friday} or @samp{Saturday}.  Days may be abbreviated to their
first three letters, optionally followed by a period.  The special
abbreviations @samp{Tues} for @samp{Tuesday}, @samp{Wednes} for
@samp{Wednesday} and @samp{Thur} or @samp{Thurs} for @samp{Thursday} are
also allowed.

@findex next @var{day}
@findex last @var{day}
A number may precede a day of the week item to move forward
supplementary weeks.  It is best used in expression like @samp{third
monday}.  In this context, @samp{last @var{day}} or @samp{next
@var{day}} is also acceptable; they move one week before or after
the day that @var{day} by itself would represent.

A comma following a day of the week item is ignored.


@node Relative item in date strings, Pure numbers in date strings, Day of week item, Date input formats
@section Relative item in date strings

@cindex relative items in date strings
@cindex displacement of dates

@dfn{Relative items} adjust a date (or the current date if none) forward
or backward.  The effects of relative items accumulate.  Here are some
examples:

@example
1 year
1 year ago
3 years
2 days
@end example

@findex year @r{in date strings}
@findex month @r{in date strings}
@findex fortnight @r{in date strings}
@findex week @r{in date strings}
@findex day @r{in date strings}
@findex hour @r{in date strings}
@findex minute @r{in date strings}
The unit of time displacement may be selected by the string @samp{year}
or @samp{month} for moving by whole years or months.  These are fuzzy
units, as years and months are not all of equal duration.  More precise
units are @samp{fortnight} which is worth 14 days, @samp{week} worth 7
days, @samp{day} worth 24 hours, @samp{hour} worth 60 minutes,
@samp{minute} or @samp{min} worth 60 seconds, and @samp{second} or
@samp{sec} worth one second.  An @samp{s} suffix on these units is
accepted and ignored.

@findex ago @r{in date strings}
The unit of time may be preceded by a multiplier, given as an optionally
signed number.  Unsigned numbers are taken as positively signed.  No
number at all implies 1 for a multiplier.  Following a relative item by
the string @samp{ago} is equivalent to preceding the unit by a
multiplicator with value @math{-1}.

@findex day @r{in date strings}
@findex tomorrow @r{in date strings}
@findex yesterday @r{in date strings}
The string @samp{tomorrow} is worth one day in the future (equivalent
to @samp{day}), the string @samp{yesterday} is worth
one day in the past (equivalent to @samp{day ago}).

@findex now @r{in date strings}
@findex today @r{in date strings}
@findex this @r{in date strings}
The strings @samp{now} or @samp{today} are relative items corresponding
to zero-valued time displacement, these strings come from the fact
a zero-valued time displacement represents the current time when not
otherwise change by previous items.  They may be used to stress other
items, like in @samp{12:00 today}.  The string @samp{this} also has
the meaning of a zero-valued time displacement, but is preferred in
date strings like @samp{this thursday}.

When a relative item makes the resulting date to cross the boundary
between DST and non-DST (or vice-versa), the hour is adjusted according
to the local time.


@node Pure numbers in date strings, Authors of getdate, Relative item in date strings, Date input formats
@section Pure numbers in date strings

@cindex pure numbers in date strings

The precise intepretation of a pure decimal number is dependent of
the context in the date string.

If the decimal number is of the form @var{yyyy}@var{mm}@var{dd} and no
other calendar date item (@pxref{Calendar date item}) appears before it
in the date string, then @var{yyyy} is read as the year, @var{mm} as the
month number and @var{dd} as the day of the month, for the specified
calendar date.

If the decimal number is of the form @var{hh}@var{mm} and no other time
of day item appears before it in the date string, then @var{hh} is read
as the hour of the day and @var{mm} as the minute of the hour, for the
specified time of the day.  @var{mm} can also be omitted.

If both a calendar date and a time of day appear to the left of a number
in the date string, but no relative item, then the number overrides the
year.


@node Authors of getdate,  , Pure numbers in date strings, Date input formats
@section Authors of @code{getdate}

@cindex authors of @code{getdate}

@cindex Bellovin, Steven M.
@cindex Salz, Rich
@cindex Berets, Jim
@cindex MacKenzie, David
@cindex Meyering, Jim
@code{getdate} was originally implemented by Steven M. Bellovin
(@samp{smb@@research.att.com}) while at the University of North Carolina
at Chapel Hill.  The code was later tweaked by a couple of people on
Usenet, then completely overhauled by Rich $alz (@samp{rsalz@@bbn.com})
and Jim Berets (@samp{jberets@@bbn.com}) in August, 1990.  Various
revisions for the GNU system were made by David MacKenzie, Jim Meyering,
and others.

@cindex Pinard, F.
@cindex Berry, K.
This chapter was originally produced by Fran@,{c}ois Pinard
(@samp{pinard@@iro.umontreal.ca}) from the @file{getdate.y} source code,
and then edited by K.@: Berry (@samp{kb@@cs.umb.edu}).

@node Formats, Media, Date input formats, Top
@chapter Controlling the Archive Format

@FIXME{need an intro here}

@menu
* Portability::                 Making @code{tar} Archives More Portable
* Compression::                 Using Less Space through Compression
* Attributes::                  Handling File Attributes
* Standard::                    The Standard Format
* Extensions::                  GNU Extensions to the Archive Format
* cpio::                        Comparison of @code{tar} and @code{cpio}
@end menu

@node Portability, Compression, Formats, Formats
@section Making @code{tar} Archives More Portable

Creating a @code{tar} archive on a particular system that is meant to be
useful later on many other machines and with other versions of @code{tar}
is more challenging than you might think.  @code{tar} archive formats
have been evolving since the first versions of Unix.  Many such formats
are around, and are not always comptible with each other.  This section
discusses a few problems, and gives some advice about making @code{tar}
archives more portable.

One golden rule is simplicity.  For example, limit your @code{tar}
archives to contain only regular files and directories, avoiding
other kind of special files.  Do not attempt to save sparse files or
contiguous files as such.  Let's discuss a few more problems, in turn.

@menu
* Portable Names::              Portable Names
* dereference::                 Symbolic Links
* old::                         Old V7 Archives
* posix::                       POSIX archives
* Checksumming::                Checksumming Problems
@end menu

@node Portable Names, dereference, Portability, Portability
@subsection Portable Names

Use @emph{straight} file and directory names, made up of printable
ASCII characters, avoiding colons, slashes, backslashes, spaces, and
other @emph{dangerous} characters.  Avoid deep directory nesting.
Accounting for oldish System V machines, limit your file and directory
names to 14 characters or less.

If you intend to have your @code{tar} archives to be read under MSDOS,
you should not rely on case distinction for file names, and you might
use the GNU @code{doschk} program for helping you further diagnosing
illegal MSDOS names, which are even more limited than System V's.

@node dereference, old, Portable Names, Portability
@subsection Symbolic Links
@cindex File names, using symbolic links
@cindex Symbolic link as file name

Normally, when @code{tar} archives a symbolic link, it writes a
block to the archive naming the target of the link.  In that way, the
@code{tar} archive is a faithful record of the filesystem contents.
@value{op-dereference} is used with @value{op-create}, and causes @code{tar}
to archive the files symbolic links point to, instead of the links
themselves.  When this option is used, when @code{tar} encounters a
symbolic link, it will archive the linked-to file, instead of simply
recording the presence of a symbolic link.

The name under which the file is stored in the file system is not
recorded in the archive.  To record both the symbolic link name and
the file name in the system, archive the file under both names.  If
all links were recorded automatically by @code{tar}, an extracted file
might be linked to a file name that no longer exists in the file
system.

If a linked-to file is encountered again by @code{tar} while creating
the same archive, an entire second copy of it will be stored.  (This
@emph{might} be considered a bug.)

So, for portable archives, do not archive symbolic links as such,
and use @value{op-dereference}: many systems do not support
symbolic links, and moreover, your distribution might be unusable if
it contains unresolved symbolic links.

@node old, posix, dereference, Portability
@subsection Old V7 Archives
@cindex Format, old style
@cindex Old style format
@cindex Old style archives

Certain old versions of @code{tar} cannot handle additional
information recorded by newer @code{tar} programs.  To create an
archive in V7 format (not ANSI), which can be read by these old
versions, specify the @value{op-old-archive} option in
conjunction with the @value{op-create}.  @code{tar} also
accepts @samp{--portability} for this option.  When you specify it,
@code{tar} leaves out information about directories, pipes, fifos,
contiguous files, and device files, and specifies file ownership by
group and user IDs instead of group and user names.

When updating an archive, do not use @value{op-old-archive}
unless the archive was created with using this option.

In most cases, a @emph{new} format archive can be read by an @emph{old}
@code{tar} program without serious trouble, so this option should
seldom be needed.  On the other hand, most modern @code{tar}s are
able to read old format archives, so it might be safer for you to
always use @value{op-old-archive} for your distributions.

@node posix, Checksumming, old, Portability
@subsection GNU @code{tar} and POSIX @code{tar}

GNU @code{tar} was based on an early draft of the POSIX 1003.1
@code{ustar} standard.  GNU extensions to @code{tar}, such as the
support for file names longer than 100 characters, use portions of the
@code{tar} header record which were specified in that POSIX draft as
unused.  Subsequent changes in POSIX have allocated the same parts of
the header record for other purposes.  As a result, GNU @code{tar} is
incompatible with the current POSIX spec, and with @code{tar} programs
that follow it.

We plan to reimplement these GNU extensions in a new way which is
upward compatible with the latest POSIX @code{tar} format, but we
don't know when this will be done.

In the mean time, there is simply no telling what might happen if you
read a GNU @code{tar} archive, which uses the GNU extensions, using
some other @code{tar} program.  So if you want to read the archive
with another @code{tar} program, be sure to write it using the
@samp{--old-archive} option (@samp{-o}).

@FIXME{is there a way to tell which flavor of tar was used to write a
particular archive before you try to read it?}

Traditionally, old @code{tar}s have a limit of 100 characters.  GNU
@code{tar} attempted two different approaches to overcome this limit,
using and extending a format specified by a draft of some P1003.1.
The first way was not that successful, and involved @file{@@MaNgLeD@@}
file names, or such; while a second approach used @file{././@@LongLink}
and other tricks, yielding better success.  In theory, GNU @code{tar}
should be able to handle file names of practically unlimited length.
So, if GNU @code{tar} fails to dump and retrieve files having more
than 100 characters, then there is a bug in GNU @code{tar}, indeed.

But, being strictly POSIX, the limit was still 100 characters.
For various other purposes, GNU @code{tar} used areas left unassigned
in the POSIX draft.  POSIX later revised P1003.1 @code{ustar} format by
assigning previously unused header fields, in such a way that the upper
limit for file name length was raised to 256 characters.  However, the
actual POSIX limit oscillates between 100 and 256, depending on the
precise location of slashes in full file name (this is rather ugly).
Since GNU @code{tar} use the same fields for quite other purposes,
it became incompatible with the latest POSIX standards.

For longer or non-fitting file names, we plan to use yet another set
of GNU extensions, but this time, complying with the provisions POSIX
offers for extending the format, rather than conflicting with it.
Whenever an archive uses old GNU @code{tar} extension format or POSIX
extensions, would it be for very long file names or other specialities,
this archive becomes non-portable to other @code{tar} implementations.
In fact, anything can happen.  The most forgiving @code{tar}s will
merely unpack the file using a wrong name, and maybe create another
file named something like @file{@@LongName}, with the true file name
in it.  @code{tar}s not protecting themselves may segment violate!

Compatibility concerns make all this thing more difficult, as we
will have to support @emph{all} these things together, for a while.
GNU @code{tar} should be able to produce and read true POSIX format
files, while being able to detect old GNU @code{tar} formats, besides
old V7 format, and process them conveniently.  It would take years
before this whole area stabilizes@dots{}

There are plans to raise this 100 limit to 256, and yet produce POSIX
conformant archives.  Past 256, I do not know yet if GNU @code{tar}
will go non-POSIX again, or merely refuse to archive the file.

There are plans so GNU @code{tar} support more fully the latest POSIX
format, while being able to read old V7 format, GNU (semi-POSIX plus
extension), as well as full POSIX.  One may ask if there is part of
the POSIX format that we still cannot support.  This simple question
has a complex answer.  Maybe that, on intimate look, some strong
limitations will pop up, but until now, nothing sounds too difficult
(but see below).  I only have these few pages of POSIX telling about
`Extended tar Format' (P1003.1-1990 -- section 10.1.1), and there are
references to other parts of the standard I do not have, which should
normally enforce limitations on stored file names (I suspect things
like fixing what @kbd{/} and @kbd{@key{NUL}} means).  There are also
some points which the standard does not make clear, Existing practice
will then drive what I should do.

POSIX mandates that, when a file name cannot fit within 100 to
256 characters (the variance comes from the fact a @kbd{/} is
ideally needed as the 156'th character), or a link name cannot
fit within 100 characters, a warning should be issued and the file
@emph{not} be stored.  Unless some @value{op-posix} option is given
(or @code{POSIXLY_CORRECT} is set), I suspect that GNU @code{tar}
should disobey this specification, and automatically switch to using
GNU extensions to overcome file name or link name length limitations.

There is a problem, however, which I did not intimately studied yet.
Given a truly POSIX archive with names having more than 100 characters,
I guess that GNU @code{tar} up to 1.11.8 will process it as if it were an
old V7 archive, and be fooled by some fields which are coded differently.
So, the question is to decide if the next generation of GNU @code{tar}
should produce POSIX format by default, whenever possible, producing
archives older versions of GNU @code{tar} might not be able to read
correctly.  I fear that we will have to suffer such a choice one of these
days, if we want GNU @code{tar} to go closer to POSIX.  We can rush it.
Another possibility is to produce the current GNU @code{tar} format
by default for a few years, but have GNU @code{tar} versions from some
1.@var{POSIX} and up able to recognize all three formats, and let older
GNU @code{tar} fade out slowly.  Then, we could switch to producing POSIX
format by default, with not much harm to those still having (very old at
that time) GNU @code{tar} versions prior to 1.@var{POSIX}.

POSIX format cannot represent very long names, volume headers,
splitting of files in multi-volumes, sparse files, and incremental
dumps; these would be all disallowed if @value{op-posix} or
@code{POSIXLY_CORRECT}.  Otherwise, if @code{tar} is given long
names, or @samp{-[VMSgG]}, then it should automatically go non-POSIX.
I think this is easily granted without much discussion.

Another point is that only @code{mtime} is stored in POSIX
archives, while GNU @code{tar} currently also store @code{atime}
and @code{ctime}.  If we want GNU @code{tar} to go closer to POSIX,
my choice would be to drop @code{atime} and @code{ctime} support on
average.  On the other hand, I perceive that full dumps or incremental
dumps need @code{atime} and @code{ctime} support, so for those special
applications, POSIX has to be avoided altogether.

A few users requested that @value{op-sparse} be always active by
default, I think that before replying to them, we have to decide
if we want GNU @code{tar} to go closer to POSIX on average, while
producing files.  My choice would be to go closer to POSIX in the
long run.  Besides possible double reading, I do not see any point
of not trying to save files as sparse when creating archives which
are neither POSIX nor old-V7, so the actual @value{op-sparse} would
become selected by default when producing such archives, whatever
the reason is.  So, @value{op-sparse} alone might be redefined to force
GNU-format archives, and recover its previous meaning from this fact.

GNU-format as it exists now can easily fool other POSIX @code{tar},
as it uses fields which POSIX considers to be part of the file name
prefix.  I wonder if it would not be a good idea, in the long run,
to try changing GNU-format so any added field (like @code{ctime},
@code{atime}, file offset in subsequent volumes, or sparse file
descriptions) be wholly and always pushed into an extension block,
instead of using space in the POSIX header block.  I could manage
to do that portably between future GNU @code{tar}s.  So other POSIX
@code{tar}s might be at least able to provide kind of correct listings
for the archives produced by GNU @code{tar}, if not able to process
them otherwise.

Using these projected extensions might induce older @code{tar}s to fail.
We would use the same approach as for POSIX.  I'll put out a @code{tar}
capable of reading POSIXier, yet extended archives, but will not produce
this format by default, in GNU mode.  In a few years, when newer GNU
@code{tar}s will have flooded out @code{tar} 1.11.X and previous, we
could switch to producing POSIXier extended archives, with no real harm
to users, as almost all existing GNU @code{tar}s will be ready to read
POSIXier format.  In fact, I'll do both changes at the same time, in a
few years, and just prepare @code{tar} for both changes, without effecting
them, from 1.@var{POSIX}.  (Both changes: 1---using POSIX convention for
getting over 100 characters; 2---avoiding mangling POSIX headers for GNU
extensions, using only POSIX mandated extension techniques).

So, a future @code{tar} will have a @value{op-posix}
flag forcing the usage of truly POSIX headers, and so, producing
archives previous GNU @code{tar} will not be able to read.
So, @emph{once} pretest will announce that feature, it would be
particularly useful that users test how exchangeable will be archives
between GNU @code{tar} with @value{op-posix} and other POSIX @code{tar}.

In a few years, when GNU @code{tar} will produce POSIX headers by
default, @value{op-posix} will have a strong meaning and will disallow
GNU extensions.  But in the meantime, for a long while, @value{op-posix}
in GNU tar will not disallow GNU extensions like @value{op-label},
@value{op-multi-volume}, @value{op-sparse}, or very long file or link names.
However, @value{op-posix} with GNU extensions will use POSIX
headers with reserved-for-users extensions to headers, and I will be
curious to know how well or bad POSIX @code{tar}s will react to these.

GNU @code{tar} prior to 1.@var{POSIX}, and after 1.@var{POSIX} without
@value{op-posix}, generates and checks @samp{ustar@w{ }@w{ }}, with two
suffixed spaces.  This is sufficient for older GNU @code{tar} not to
recognize POSIX archives, and consequently, wrongly decide those archives
are in old V7 format.  It is a useful bug for me, because GNU @code{tar}
has other POSIX incompatibilities, and I need to segregate GNU @code{tar}
semi-POSIX archives from truly POSIX archives, for GNU @code{tar} should
be somewhat compatible with itself, while migrating closer to latest
POSIX standards.  So, I'll be very careful about how and when I will do
the correction.

@node Checksumming,  , posix, Portability
@subsection Checksumming Problems

SunOS and HP-UX @code{tar} fail to accept archives created using GNU
@code{tar} and containing non-ASCII file names, that is, file names
having characters with the eight bit set, because they use signed
checksums, while GNU @code{tar} uses unsigned checksums while creating
archives, as per POSIX standards.  On reading, GNU @code{tar} computes
both checksums and accept any.  It is somewhat worrying that a lot of
people may go around doing backup of their files using faulty (or at
least non-standard) software, not learning about it until it's time
to restore their missing files with an incompatible file extractor,
or vice versa.

GNU @code{tar} compute checksums both ways, and accept any on read,
so GNU tar can read Sun tapes even with their wrong checksums.
GNU @code{tar} produces the standard checksum, however, raising
incompatibilities with Sun.  That is to say, GNU @code{tar} has not
been modified to @emph{produce} incorrect archives to be read by buggy
@code{tar}'s.  I've been told that more recent Sun @code{tar} now
read standard archives, so maybe Sun did a similar patch, after all?

The story seems to be that when Sun first imported @code{tar}
sources on their system, they recompiled it without realizing that
the checksums were computed differently, because of a change in
the default signing of @code{char}'s in their compiler.  So they
started computing checksums wrongly.  When they later realized their
mistake, they merely decided to stay compatible with it, and with
themselves afterwards.  Presumably, but I do not really know, HP-UX
has chosen that their @code{tar} archives to be compatible with Sun's.
The current standards do not favor Sun @code{tar} format.  In any
case, it now falls on the shoulders of SunOS and HP-UX users to get
a @code{tar} able to read the good archives they receive.

@node Compression, Attributes, Portability, Formats
@section Using Less Space through Compression

@menu
* gzip::                        Creating and Reading Compressed Archives
* sparse::                      Archiving Sparse Files
@end menu

@node gzip, sparse, Compression, Compression
@subsection Creating and Reading Compressed Archives
@cindex Compressed archives
@cindex Storing archives in compressed format
@UNREVISED

@table @kbd
@item -z
@itemx --gzip
@itemx --ungzip
Filter the archive through @code{gzip}.
@end table

@FIXME{ach; these two bits orig from "compare" (?).  where to put?} Some
format parameters must be taken into consideration when modifying an
archive: @FIXME{???}.  Compressed archives cannot be modified.

You can use @samp{--gzip} and @samp{--gunzip} on physical devices
(tape drives, etc.) and remote files as well as on normal files; data
to or from such devices or remote files is reblocked by another copy
of the @code{tar} program to enforce the specified (or default) record
size.  The default compression parameters are used; if you need to
override them, avoid the @value{op-gzip} option and run @code{gzip}
explicitly.  (Or set the @samp{GZIP} environment variable.)

The @value{op-gzip} option does not work with the @value{op-multi-volume}
option, or with the @value{op-update}, @value{op-append},
@value{op-concatenate}, or @value{op-delete} operations.

It is not exact to say that GNU @code{tar} is to work in concert
with @code{gzip} in a way similar to @code{zip}, say.  Surely, it is
possible that @code{tar} and @code{gzip} be done with a single call,
like in:

@example
$ @kbd{tar cfz archive.tar.gz subdir}
@end example

@noindent
to save all of @samp{subdir} into a @code{gzip}'ed archive.  Later you
can do:

@example
$ @kbd{tar xfz archive.tar.gz}
@end example

@noindent
to explode and unpack.

The difference is that the whole archive is compressed.  With
@code{zip}, archive members are archived individually.  @code{tar}'s
method yields better compression.  On the other hand, one can view the
contents of a @code{zip} archive without having to decompress it.  As
for the @code{tar} and @code{gzip} tandem, you need to decompress the
archive to see its contents.  However, this may be done without needing
disk space, by using pipes internally:

@example
$ @kbd{tar tfz archive.tar.gz}
@end example

@cindex corrupted archives
About corrupted compressed archives: @code{gzip}'ed files have no
redundancy, for maximum compression.  The adaptive nature of the
compression scheme means that the compression tables are implicitly
spread all over the archive.  If you lose a few blocks, the dynamic
construction of the compression tables becomes unsychronized, and there
is little chance that you could recover later in the archive.

There are pending suggestions for having a per-volume or per-file
compression in GNU @code{tar}.  This would allow for viewing the
contents without decompression, and for resynchronizing decompression at
every volume or file, in case of corrupted archives.  Doing so, we might
loose some compressibility.  But this would have make recovering easier.
So, there are pros and cons.  We'll see!

@table @kbd
@item -Z
@itemx --compress
@itemx --uncompress
Filter the archive through @code{compress}.  Otherwise like @value{op-gzip}.

@item --use-compress-program=@var{prog}
Filter through @var{prog} (must accept @samp{-d}).
@end table

@value{op-compress} stores an archive in compressed format.  This
option is useful in saving time over networks and space in pipes, and
when storage space is at a premium.  @value{op-compress} causes
@code{tar} to compress when writing the archive, or to uncompress when
reading the archive.

To perform compression and uncompression on the archive, @code{tar}
runs the @code{compress} utility.  @code{tar} uses the default
compression parameters; if you need to override them, avoid the
@value{op-compress} option and run the @code{compress} utility
explicitly.  It is useful to be able to call the @code{compress}
utility from within @code{tar} because the @code{compress} utility by
itself cannot access remote tape drives.

The @value{op-compress} option will not work in conjunction with the
@value{op-multi-volume} option or the @value{op-append}, @value{op-update},
@value{op-append} and @value{op-delete} operations.  @xref{Operations}, for
more information on these operations.

If there is no compress utility available, @code{tar} will report an error.
@strong{Please note} that the @code{compress} program may be covered by
a patent, and therefore we recommend you stop using it.

@table @kbd
@item --compress
@itemx --uncompress
@itemx -z
@itemx -Z
When this option is specified, @code{tar} will compress (when writing
an archive), or uncompress (when reading an archive).  Used in
conjunction with the @value{op-create}, @value{op-extract}, @value{op-list} and
@value{op-compare} operations.
@end table

You can have archives be compressed by using the @value{op-gzip} option.
This will arrange for @code{tar} to use the @code{gzip} program to be
used to compress or uncompress the archive wren writing or reading it.

To use the older, obsolete, @code{compress} program, use the
@value{op-compress} option.  The GNU Project recommends you not use
@code{compress}, because there is a patent covering the algorithm it
uses.  You could be sued for patent infringment merely by running
@code{compress}.

I have one question, or maybe it's a suggestion if there isn't a way
to do it now. I would like to use @value{op-gzip}, but I'd also like the
output to be fed through a program like GNU @code{ecc} (actually, right
now that's @samp{exactly} what I'd like to use :-)), basically adding
ECC protection on top of compression.  It seems as if this should be
quite easy to do, but I can't work out exactly how to go about it.
Of course, I can pipe the standard output of @code{tar} through
@code{ecc}, but then I lose (though I haven't started using it yet,
I confess) the ability to have @code{tar} use @code{rmt} for it's I/O
(I think).

I think the most straightforward thing would be to let me specify a
general set of filters outboard of compression (preferably ordered,
so the order can be automatically reversed on input operations, and
with the options they require specifiable), but beggars shouldn't be
choosers and anything you decide on would be fine with me.

By the way, I like @code{ecc} but if (as the comments say) it can't
deal with loss of block sync, I'm tempted to throw some time at adding
that capability.  Supposing I were to actually do such a thing and
get it (apparantly) working, do you accept contributed changes to
utilities like that?  (Leigh Clayton @file{loc@@soliton.com}, May 1995).

Isn't that exactly the role of the @value{op-use-compress-prog} option?
I never tried it myself, but I suspect you may want to write a
@var{prog} script or program able to filter stdin to stdout to
way you want.  It should recognize the @samp{-d} option, for when
extraction is needed rather than creation.

It has been reported that if one writes compressed data (through the
@value{op-gzip} or @value{op-compress} options) to a DLT and tries to use
the DLT compression mode, the data will actually get bigger and one will
end up with less space on the tape.

@node sparse,  , gzip, Compression
@subsection Archiving Sparse Files
@cindex Sparse Files
@UNREVISED

@table @kbd
@item -S
@itemx --sparse
Handle sparse files efficiently.
@end table

This option causes all files to be put in the archive to be tested for
sparseness, and handled specially if they are.  The @value{op-sparse}
option is useful when many @code{dbm} files, for example, are being
backed up.  Using this option dramatically decreases the amount of
space needed to store such a file.

In later versions, this option may be removed, and the testing and
treatment of sparse files may be done automatically with any special
GNU options.  For now, it is an option needing to be specified on
the command line with the creation or updating of an archive.

Files in the filesystem occasionally have ``holes.''  A hole in a file
is a section of the file's contents which was never written.  The
contents of a hole read as all zeros.  On many operating systems,
actual disk storage is not allocated for holes, but they are counted
in the length of the file.  If you archive such a file, @code{tar}
could create an archive longer than the original.  To have @code{tar}
attempt to recognize the holes in a file, use @value{op-sparse}.  When
you use the @value{op-sparse} option, then, for any file using less
disk space than would be expected from its length, @code{tar} searches
the file for consecutive stretches of zeros.  It then records in the
archive for the file where the consecutive stretches of zeros are, and
only archives the ``real contents'' of the file.  On extraction (using
@value{op-sparse} is not needed on extraction) any such files have
hols created wherever the continuous stretches of zeros were found.
Thus, if you use @value{op-sparse}, @code{tar} archives won't take
more space than the original.

A file is sparse if it contains blocks of zeros whose existence is
recorded, but that have no space allocated on disk.  When you specify
the @value{op-sparse} option in conjunction with the @value{op-create}
operation, @code{tar} tests all files for sparseness while archiving.
If @code{tar} finds a file to be sparse, it uses a sparse representation of
the file in the archive.  @value{xref-create}, for more information
about creating archives.

@value{op-sparse} is useful when archiving files, such as dbm files,
likely to contain many nulls.  This option dramatically
decreases the amount of space needed to store such an archive.

@quotation
@strong{Please Note:} Always use @value{op-sparse} when performing file
system backups, to avoid archiving the expanded forms of files stored
sparsely in the system.

Even if your system has no sparse files currently, some may be
created in the future.  If you use @value{op-sparse} while making file
system backups as a matter of course, you can be assured the archive
will never take more space on the media than the files take on disk
(otherwise, archiving a disk filled with sparse files might take
hundreds of tapes).  @FIXME-xref{incremental when node name is set.}
@end quotation

@code{tar} ignores the @value{op-sparse} option when reading an archive.

@table @kbd
@item --sparse
@itemx -S
Files stored sparsely in the file system are represented sparsely in
the archive.  Use in conjunction with write operations.
@end table

However, users should be well aware that at archive creation time, GNU
@code{tar} still has to read whole disk file to locate the @dfn{holes}, and
so, even if sparse files use little space on disk and in the archive, they
may sometimes require inordinate amount of time for reading and examining
all-zero blocks of a file.  Although it works, it's painfully slow for a
large (sparse) file, even though the resulting tar archive may be small.
(One user reports that dumping a @file{core} file of over 400 megabytes,
but with only about 3 megabytes of actual data, took about 9 minutes on
a Sun Sparstation ELC, with full CPU utilisation.)

This reading is required in all cases and is not related to the fact
the @value{op-sparse} option is used or not, so by merely @emph{not}
using the option, you are not saving time@footnote{Well!  We should say
the whole truth, here.  When @value{op-sparse} is selected while creating
an archive, the current @code{tar} algorithm requires sparse files to be
read twice, not once.  We hope to develop a new archive format for saving
sparse files in which one pass will be sufficient.}.

Programs like @code{dump} do not have to read the entire file; by examining
the file system directly, they can determine in advance exactly where the
holes are and thus avoid reading through them.  The only data it need read
are the actual allocated data blocks.  GNU @code{tar} uses a more portable
and straightforward archiving approach, it would be fairly difficult that
it does otherwise.  Elizabeth Zwicky writes to @file{comp.unix.internals},
on 1990-12-10:

@quotation
What I did say is that you cannot tell the difference between a hole and an
equivalent number of nulls without reading raw blocks.  @code{st_blocks} at
best tells you how many holes there are; it doesn't tell you @emph{where}.
Just as programs may, conceivably, care what @code{st_blocks} is (care
to name one that does?), they may also care where the holes are (I have
no examples of this one either, but it's equally imaginable).

I conclude from this that good archivers are not portable.  One can
arguably conclude that if you want a portable program, you can in good
conscience restore files with as many holes as possible, since you can't
get it right.
@end quotation

@node Attributes, Standard, Compression, Formats
@section Handling File Attributes
@UNREVISED

When @code{tar} reads files, this causes them to have the access times
updated.  To have @code{tar} attempt to set the access times back to
what they were before they were read, use the @value{op-atime-preserve}
option.  This doesn't work for files that you don't own, unless
you're root, and it doesn't interact with incremental dumps nicely
(@pxref{Backups}), but it is good enough for some purposes.

Handling of file attributes

@table @kbd
@item --atime-preserve
Do not change access times on dumped files.

@item -m
@itemx --touch
Do not extract file modified time.

When this option is used, @code{tar} leaves the modification times
of the files it extracts as the time when the files were extracted,
instead of setting it to the time recorded in the archive.

This option is meaningless with @value{op-list}.

@item --same-owner
Create extracted files with the same ownership they have in the
archive.

When using super-user at extraction time, ownership is always restored.
So, this option is meaningful only for non-root users, when @code{tar}
is executed on those systems able to give files away.  This is
considered as a security flaw by many people, at least because it
makes quite difficult to correctly account users for the disk space
they occupy.  Also, the @code{suid} or @code{sgid} attributes of
files are easily and silently lost when files are given away.

When writing an archive, @code{tar} writes the user id and user name
separately.  If it can't find a user name (because the user id is not
in @file{/etc/passwd}), then it does not write one.  When restoring,
and doing a @code{chmod} like when you use @value{op-same-permissions}
(@FIXME{same-owner?}), it tries to look the name (if one was written)
up in @file{/etc/passwd}.  If it fails, then it uses the user id
stored in the archive instead.

@item --numeric-owner
The @value{op-numeric-owner} option allows (ANSI) archives to be written
without user/group name information or such information to be ignored
when extracting.  It effectively disables the generation and/or use
of user/group name information.  This option forces extraction using
the numeric ids from the archive, ignoring the names.

This is useful in certain circumstances, when restoring a backup from
an emergency floppy with different passwd/group files for example.
It is otherwise impossible to extract files with the right ownerships
if the password file in use during the extraction does not match the
one belonging to the filesystem(s) being extracted.  This occurs,
for example, if you are restoring your files after a major crash and
had booted from an emergency floppy with no password file or put your
disk into another machine to do the restore.

The numeric ids are @emph{always} saved into @code{tar} archives.
The identifying names are added at create time when provided by the
system, unless @value{op-old-archive} is used.  Numeric ids could be
used when moving archives between a collection of machines using
a centralized management for attribution of numeric ids to users
and groups.  This is often made through using the NIS capabilities.

When making a @code{tar} file for distribution to other sites, it
is sometimes cleaner to use a single owner for all files in the
distribution, and nicer to specify the write permission bits of the
files as stored in the archive independently of their actual value on
the file system.  The way to prepare a clean distribution is usually
to have some Makefile rule creating a directory, copying all needed
files in that directory, then setting ownership and permissions as
wanted (there are a lot of possible schemes), and only then making a
@code{tar} archive out of this directory, before cleaning everything
out.  Of course, we could add a lot of options to GNU @code{tar} for
fine tuning permissions and ownership.  This is not the good way,
I think.  GNU @code{tar} is already crowded with options and moreover,
the approach just explained gives you a great deal of control already.

@item -p
@itemx --same-permissions
@itemx --preserve-permissions
Extract all protection information.

This option causes @code{tar} to set the modes (access permissions) of
extracted files exactly as recorded in the archive.  If this option
is not used, the current @code{umask} setting limits the permissions
on extracted files.

This option is meaningless with @value{op-list}.

@item --preserve
Same as both @value{op-same-permissions} and @value{op-same-order}.

The @value{op-preserve} option has no equivalent short option name.
It is equivalent to @value{op-same-permissions} plus @value{op-same-order}.

@FIXME{I do not see the purpose of such an option.  (Neither I.  FP.)}

@end table

@node Standard, Extensions, Attributes, Formats
@section The Standard Format
@UNREVISED

While an archive may contain many files, the archive itself is a
single ordinary file.  Like any other file, an archive file can be
written to a storage device such as a tape or disk, sent through a
pipe or over a network, saved on the active file system, or even
stored in another archive.  An archive file is not easy to read or
manipulate without using the @code{tar} utility or Tar mode in GNU
Emacs.

Physically, an archive consists of a series of file entries terminated
by an end-of-archive entry, which consists of 512 zero bytes.  A file
entry usually describes one of the files in the archive (an
@dfn{archive member}), and consists of a file header and the contents
of the file.  File headers contain file names and statistics, checksum
information which @code{tar} uses to detect file corruption, and
information about file types.

Archives are permitted to have more than one member with the same
member name.  One way this situation can occur is if more than one
version of a file has been stored in the archive.  For information
about adding new versions of a file to an archive, see @ref{update},
and to learn more about having more than one archive member with the
same name, see @FIXME-xref{-backup node, when it's written}.

In addition to entries describing archive members, an archive may
contain entries which @code{tar} itself uses to store information.
@value{xref-label}, for an example of such an archive entry.

A @code{tar} archive file contains a series of blocks.  Each block
contains @code{BLOCKSIZE} bytes.  Although this format may be thought
of as being on magnetic tape, other media are often used.

Each file archived is represented by a header block which describes
the file, followed by zero or more blocks which give the contents
of the file.  At the end of the archive file there may be a block
filled with binary zeros as an end-of-file marker.  A reasonable system
should write a block of zeros at the end, but must not assume that
such a block exists when reading an archive.

The blocks may be @dfn{blocked} for physical I/O operations.
Each record of @var{n} blocks (where @var{n} is set by the
@value{op-blocking-factor} option to @code{tar}) is written with a single
@w{@samp{write ()}} operation.  On magnetic tapes, the result of
such a write is a single record.  When writing an archive,
the last record of blocks should be written at the full size, with
blocks after the zero block containing all zeros.  When reading
an archive, a reasonable system should properly handle an archive
whose last record is shorter than the rest, or which contains garbage
records after a zero block.

The header block is defined in C as follows.  In the GNU @code{tar}
distribution, this is part of file @file{src/tar.h}:

@example
@include header.texi
@end example

All characters in header blocks are represented by using 8-bit
characters in the local variant of ASCII.  Each field within the
structure is contiguous; that is, there is no padding used within
the structure.  Each character on the archive medium is stored
contiguously.

Bytes representing the contents of files (after the header block
of each file) are not translated in any way and are not constrained
to represent characters in any character set.  The @code{tar} format
does not distinguish text files from binary files, and no translation
of file contents is performed.

The @code{name}, @code{linkname}, @code{magic}, @code{uname}, and
@code{gname} are null-terminated character strings.  All other fileds
are zero-filled octal numbers in ASCII.  Each numeric field of width
@var{w} contains @var{w} minus 2 digits, a space, and a null, except
@code{size}, and @code{mtime}, which do not contain the trailing null.

The @code{name} field is the file name of the file, with directory names
(if any) preceding the file name, separated by slashes.

@FIXME{how big a name before field overflows?}

The @code{mode} field provides nine bits specifying file permissions
and three bits to specify the Set UID, Set GID, and Save Text
(@dfn{sticky}) modes.  Values for these bits are defined above.
When special permissions are required to create a file with a given
mode, and the user restoring files from the archive does not hold such
permissions, the mode bit(s) specifying those special permissions
are ignored.  Modes which are not supported by the operating system
restoring files from the archive will be ignored.  Unsupported modes
should be faked up when creating or updating an archive; e.g. the
group permission could be copied from the @emph{other} permission.

The @code{uid} and @code{gid} fields are the numeric user and group
ID of the file owners, respectively.  If the operating system does
not support numeric user or group IDs, these fields should be ignored.

The @code{size} field is the size of the file in bytes; linked files
are archived with this field specified as zero.  @FIXME-xref{Modifiers}, in
particular the @value{op-incremental} option.

The @code{mtime} field is the modification time of the file at the time
it was archived.  It is the ASCII representation of the octal value of
the last time the file was modified, represented as an integer number of
seconds since January 1, 1970, 00:00 Coordinated Universal Time.

The @code{chksum} field is the ASCII representation of the octal value
of the simple sum of all bytes in the header block.  Each 8-bit
byte in the header is added to an unsigned integer, initialized to
zero, the precision of which shall be no less than seventeen bits.
When calculating the checksum, the @code{chksum} field is treated as
if it were all blanks.

The @code{typeflag} field specifies the type of file archived.  If a
particular implementation does not recognize or permit the specified
type, the file will be extracted as if it were a regular file.  As this
action occurs, @code{tar} issues a warning to the standard error.

The @code{atime} and @code{ctime} fields are used in making incremental
backups; they store, respectively, the particular file's access time
and last inode-change time.

The @code{offset} is used by the @value{op-multi-volume} option, when
making a multi-volume archive.  The offset is number of bytes into
the file that we need to restart at to continue the file on the next
tape, i.e., where we store the location that a continued file is
continued at.

The following fields were added to deal with sparse files.  A file
is @dfn{sparse} if it takes in unallocated blocks which end up being
represented as zeros, i.e., no useful data.  A test to see if a file
is sparse is to look at the number blocks allocated for it versus the
number of characters in the file; if there are fewer blocks allocated
for the file than would normally be allocated for a file of that
size, then the file is sparse.  This is the method @code{tar} uses to
detect a sparse file, and once such a file is detected, it is treated
differently from non-sparse files.

Sparse files are often @code{dbm} files, or other database-type files
which have data at some points and emptiness in the greater part of
the file.  Such files can appear to be very large when an @samp{ls
-l} is done on them, when in truth, there may be a very small amount
of important data contained in the file.  It is thus undesirable
to have @code{tar} think that it must back up this entire file, as
great quantities of room are wasted on empty blocks, which can lead
to running out of room on a tape far earlier than is necessary.
Thus, sparse files are dealt with so that these empty blocks are
not written to the tape.  Instead, what is written to the tape is a
description, of sorts, of the sparse file: where the holes are, how
big the holes are, and how much data is found at the end of the hole.
This way, the file takes up potentially far less room on the tape,
and when the file is extracted later on, it will look exactly the way
it looked beforehand.  The following is a description of the fields
used to handle a sparse file:

The @code{sp} is an array of @code{struct sparse}.  Each @code{struct
sparse} contains two 12-character strings which represent an offset
into the file and a number of bytes to be written at that offset.
The offset is absolute, and not relative to the offset in preceding
array element.

The header can hold four of these @code{struct sparse} at the moment;
if more are needed, they are not stored in the header.

The @code{isextended} flag is set when an @code{extended_header}
is needed to deal with a file.  Note that this means that this flag
can only be set when dealing with a sparse file, and it is only set
in the event that the description of the file will not fit in the
alloted room for sparse structures in the header.  In other words,
an extended_header is needed.

The @code{extended_header} structure is used for sparse files which
need more sparse structures than can fit in the header.  The header can
fit 4 such structures; if more are needed, the flag @code{isextended}
gets set and the next block is an @code{extended_header}.

Each @code{extended_header} structure contains an array of 21
sparse structures, along with a similar @code{isextended} flag
that the header had.  There can be an indeterminate number of such
@code{extended_header}s to describe a sparse file.

@table @asis

@item @code{REGTYPE}
@itemx @code{AREGTYPE}
These flags represent a regular file.  In order to be compatible
with older versions of @code{tar}, a @code{typeflag} value of
@code{AREGTYPE} should be silently recognized as a regular file.
New archives should be created using @code{REGTYPE}.  Also, for
backward compatibility, @code{tar} treats a regular file whose name
ends with a slash as a directory.

@item @code{LNKTYPE}
This flag represents a file linked to another file, of any type,
previously archived.  Such files are identified in Unix by each
file having the same device and inode number.  The linked-to name is
specified in the @code{linkname} field with a trailing null.

@item @code{SYMTYPE}
This represents a symbolic link to another file.  The linked-to name
is specified in the @code{linkname} field with a trailing null.

@item @code{CHRTYPE}
@itemx @code{BLKTYPE}
These represent character special files and block special files
respectively.  In this case the @code{devmajor} and @code{devminor}
fields will contain the major and minor device numbers respectively.
Operating systems may map the device specifications to their own
local specification, or may ignore the entry.

@item @code{DIRTYPE}
This flag specifies a directory or sub-directory.  The directory
name in the @code{name} field should end with a slash.  On systems where
disk allocation is performed on a directory basis, the @code{size} field
will contain the maximum number of bytes (which may be rounded to
the nearest disk block allocation unit) which the directory may
hold.  A @code{size} field of zero indicates no such limiting.  Systems
which do not support limiting in this manner should ignore the
@code{size} field.

@item @code{FIFOTYPE}
This specifies a FIFO special file.  Note that the archiving of a
FIFO file archives the existence of this file and not its contents.

@item @code{CONTTYPE}
This specifies a contiguous file, which is the same as a normal
file except that, in operating systems which support it, all its
space is allocated contiguously on the disk.  Operating systems
which do not allow contiguous allocation should silently treat this
type as a normal file.

@item @code{A} @dots{} @code{Z}
These are reserved for custom implementations.  Some of these are
used in the GNU modified format, as described below.

@end table

Other values are reserved for specification in future revisions of
the P1003 standard, and should not be used by any @code{tar} program.

The @code{magic} field indicates that this archive was output in
the P1003 archive format.  If this field contains @code{TMAGIC},
the @code{uname} and @code{gname} fields will contain the ASCII
representation of the owner and group of the file respectively.
If found, the user and group IDs are used rather than the values in
the @code{uid} and @code{gid} fields.

For references, see ISO/IEC 9945-1:1990 or IEEE Std 1003.1-1990, pages
169-173 (section 10.1) for @cite{Archive/Interchange File Format}; and
IEEE Std 1003.2-1992, pages 380-388 (section 4.48) and pages 936-940
(section E.4.48) for @cite{pax - Portable archive interchange}.

@node Extensions, cpio, Standard, Formats
@section GNU Extensions to the Archive Format
@UNREVISED

The GNU format uses additional file types to describe new types of
files in an archive.  These are listed below.

@table @code
@item GNUTYPE_DUMPDIR
@itemx 'D'
This represents a directory and a list of files created by the
@value{op-incremental} option.  The @code{size} field gives the total
size of the associated list of files.  Each file name is preceded by
either a @samp{Y} (the file should be in this archive) or an @samp{N}.
(The file is a directory, or is not stored in the archive.)  Each file
name is terminated by a null.  There is an additional null after the
last file name.

@item GNUTYPE_MULTIVOL
@itemx 'M'
This represents a file continued from another volume of a multi-volume
archive created with the @value{op-multi-volume} option.  The original
type of the file is not given here.  The @code{size} field gives the
maximum size of this piece of the file (assuming the volume does
not end before the file is written out).  The @code{offset} field
gives the offset from the beginning of the file where this part of
the file begins.  Thus @code{size} plus @code{offset} should equal
the original size of the file.

@item GNUTYPE_SPARSE
@itemx 'S'
This flag indicates that we are dealing with a sparse file.  Note
that archiving a sparse file requires special operations to find
holes in the file, which mark the positions of these holes, along
with the number of bytes of data to be found after the hole.

@item GNUTYPE_VOLHDR
@itemx 'V'
This file type is used to mark the volume header that was given with
the @value{op-label} option when the archive was created.  The @code{name}
field contains the @code{name} given after the @value{op-label} option.
The @code{size} field is zero.  Only the first file in each volume
of an archive should have this type.

@end table

You may have trouble reading a GNU format archive on a non-GNU
system if the options @value{op-incremental}, @value{op-multi-volume},
@value{op-sparse}, or @value{op-label} were used when writing the archive.
In general, if @code{tar} does not use the GNU-added fields of the
header, other versions of @code{tar} should be able to read the
archive.  Otherwise, the @code{tar} program will give an error, the
most likely one being a checksum error.

@node cpio,  , Extensions, Formats
@section Comparison of @code{tar} and @code{cpio}
@UNREVISED

@FIXME{Reorganize the following material}

The @code{cpio} archive formats, like @code{tar}, do have maximum
pathname lengths.  The binary and old ASCII formats have a max path
length of 256, and the new ASCII and CRC ASCII formats have a max
path length of 1024.  GNU @code{cpio} can read and write archives
with arbitrary pathname lengths, but other @code{cpio} implementations
may crash unexplainedly trying to read them.

@code{tar} handles symbolic links in the form in which it comes in BSD;
@code{cpio} doesn't handle symbolic links in the form in which it comes
in System V prior to SVR4, and some vendors may have added symlinks
to their system without enhancing @code{cpio} to know about them.
Others may have enhanced it in a way other than the way I did it
at Sun, and which was adopted by AT&T (and which is, I think, also
present in the @code{cpio} that Berkeley picked up from AT&T and put
into a later BSD release---I think I gave them my changes).

(SVR4 does some funny stuff with @code{tar}; basically, its @code{cpio}
can handle @code{tar} format input, and write it on output, and it
probably handles symbolic links.  They may not have bothered doing
anything to enhance @code{tar} as a result.)

@code{cpio} handles special files; traditional @code{tar} doesn't.

@code{tar} comes with V7, System III, System V, and BSD source;
@code{cpio} comes only with System III, System V, and later BSD
(4.3-tahoe and later).

@code{tar}'s way of handling multiple hard links to a file can handle
file systems that support 32-bit inumbers (e.g., the BSD file system);
@code{cpio}s way requires you to play some games (in its "binary"
format, i-numbers are only 16 bits, and in its "portable ASCII" format,
they're 18 bits---it would have to play games with the "file system ID"
field of the header to make sure that the file system ID/i-number pairs
of different files were always different), and I don't know which
@code{cpio}s, if any, play those games.  Those that don't might get
confused and think two files are the same file when they're not, and
make hard links between them.

@code{tar}s way of handling multiple hard links to a file places only
one copy of the link on the tape, but the name attached to that copy
is the @emph{only} one you can use to retrieve the file; @code{cpio}s
way puts one copy for every link, but you can retrieve it using any
of the names.

@quotation
What type of check sum (if any) is used, and how is this calculated.
@end quotation

See the attached manual pages for @code{tar} and @code{cpio} format.
@code{tar} uses a checksum which is the sum of all the bytes in the
@code{tar} header for a file; @code{cpio} uses no checksum.

@quotation
If anyone knows why @code{cpio} was made when @code{tar} was present
at the unix scene,
@end quotation

It wasn't.  @code{cpio} first showed up in PWB/UNIX 1.0; no
generally-available version of UNIX had @code{tar} at the time.  I don't
know whether any version that was generally available @emph{within AT&T}
had @code{tar}, or, if so, whether the people within AT&T who did
@code{cpio} knew about it.

On restore, if there is a corruption on a tape @code{tar} will stop at
that point, while @code{cpio} will skip over it and try to restore the
rest of the files.

The main difference is just in the command syntax and header format.

@code{tar} is a little more tape-oriented in that everything is blocked
to start on a record boundary.

@quotation
Is there any differences between the ability to recover crashed
archives between the two of them. (Is there any chance of recovering
crashed archives at all.)
@end quotation

Theoretically it should be easier under @code{tar} since the blocking
lets you find a header with some variation of @samp{dd skip=@var{nn}}.
However, modern @code{cpio}'s and variations have an option to just
search for the next file header after an error with a reasonable chance
of re-syncing.  However, lots of tape driver software won't allow you to
continue past a media error which should be the only reason for getting
out of sync unless a file changed sizes while you were writing the
archive.

@quotation
If anyone knows why @code{cpio} was made when @code{tar} was present
at the unix scene, please tell me about this too.
@end quotation

Probably because it is more media efficient (by not blocking everything
and using only the space needed for the headers where @code{tar}
always uses 512 bytes per file header) and it knows how to archive
special files.

You might want to look at the freely available alternatives.  The major
ones are @code{afio}, GNU @code{tar}, and @code{pax}, each of which
have their own extensions with some backwards compatibility.

Sparse files were @code{tar}red as sparse files (which you can easily
test, because the resulting archive gets smaller, and GNU @code{cpio}
can no longer read it).

@node Media, Index, Formats, Top
@chapter Tapes and Other Archive Media
@UNREVISED

A few special cases about tape handling warrant more detailed
description.  These special cases are discussed below.

Many complexities surround the use of @code{tar} on tape drives.  Since
the creation and manipulation of archives located on magnetic tape was
the original purpose of @code{tar}, it contains many features making
such manipulation easier.

Archives are usually written on dismountable media---tape cartridges,
mag tapes, or floppy disks.

The amount of data a tape or disk holds depends not only on its size,
but also on how it is formatted.  A 2400 foot long reel of mag tape
holds 40 megabytes of data when formated at 1600 bits per inch.  The
physically smaller EXABYTE tape cartridge holds 2.3 gigabytes.

Magnetic media are re-usable---once the archive on a tape is no longer
needed, the archive can be erased and the tape or disk used over.
Media quality does deteriorate with use, however.  Most tapes or disks
should be disgarded when they begin to produce data errors.  EXABYTE
tape cartridges should be disgarded when they generate an @dfn{error
count} (number of non-usable bits) of more than 10k.

Magnetic media are written and erased using magnetic fields, and
should be protected from such fields to avoid damage to stored data.
Sticking a floppy disk to a filing cabinet using a magnet is probably
not a good idea.

@menu
* Device::                      Device selection and switching
* Remote Tape Server::
* Common Problems and Solutions::
* Blocking::                    Blocking
* Many::                        Many archives on one tape
* Using Multiple Tapes::        Using Multiple Tapes
* label::                       Including a Label in the Archive
* verify::
* Write Protection::
@end menu

@node Device, Remote Tape Server, Media, Media
@section Device Selection and Switching
@UNREVISED

@table @kbd
@item -f [@var{hostname}:]@var{file}
@itemx --file=[@var{hostname}:]@var{file}
Use archive file or device @var{file} on @var{hostname}.
@end table

This option is used to specify the file name of the archive @code{tar}
works on.

If the file name is @samp{-}, @code{tar} reads the archive from standard
input (when listing or extracting), or writes it to standard output
(when creating).  If the @samp{-} file name is given when updating an
archive, @code{tar} will read the original archive from its standard
input, and will write the entire new archive to its standard output.

If the file name contains a @samp{:}, it is interpreted as
@samp{hostname:file name}.  If the @var{hostname} contains an @dfn{at}
sign (@kbd{@@}), it is treated as @samp{user@@hostname:file name}.  In
either case, @code{tar} will invoke the command @code{rsh} (or
@code{remsh}) to start up an @file{/etc/rmt} on the remote machine.  If
you give an alternate login name, it will be given to the @code{rsh}.
Naturally, the remote machine must have an executable @file{/etc/rmt}.
This program is free software from the University of California, and a
copy of the source code can be found with the sources for @code{tar};
it's compiled and installed by default.

If this option is not given, but the environment variable @code{TAPE} is
set, its value is used; otherwise, old versions of @code{tar} used a default
archive name (which was picked when @code{tar} was compiled).  The
default is normally set up to be the @dfn{first} tape drive or other
transportable I/O medium on the system.

Starting with version 1.11.5, GNU @code{tar} uses standard input and
standard output as the default device, and I will not try anymore
supporting automatic device detection at installation time.  This was
failing really in too many cases, it was hopeless.  This is now
completely left to the installer to override standard input and standard
output for default device, if this seems preferrable to him/her.
Further, I think @emph{most} actual usages of @code{tar} are done with
pipes or disks, not really tapes, cartridges or diskettes.

Some users think that using standard input and output is running
after trouble.  This could lead to a nasty surprise on your screen if
you forget to specify an output file name---especially if you are going
through a network or terminal server capable of buffering large amounts
of output.  We had so many bug reports in that area of configuring
default tapes automatically, and so many contradicting requests, that
we finally consider the problem to be portably intractable.  We could
of course use something like @samp{/dev/tape} as a default, but this
is @emph{also} running after various kind of trouble, going from hung
processes to accidental destruction of real tapes.  After having seen
all this mess, using standard input and output as a default really
sounds like the only clean choice left, and a very useful one too.

GNU @code{tar} reads and writes archive in records, I suspect this is the
main reason why block devices are preferred over character devices.
Most probably, block devices are more efficient too.  The installer
could also check for @samp{DEFTAPE} in @file{<sys/mtio.h>}.

@table @kbd
@item --force-local
Archive file is local even if it contains a colon.

@item --rsh-command=@var{command}
Use remote @var{command} instead of @code{rsh}.  This option exists
so that people who use something other than the standard @code{rsh}
(e.g., a Kerberized @code{rsh}) can access a remote device.

When this command is not used, the shell command found when
the @code{tar} program was installed is used instead.  This is
the first found of @file{/usr/ucb/rsh}, @file{/usr/bin/remsh},
@file{/usr/bin/rsh}, @file{/usr/bsd/rsh} or @file{/usr/bin/nsh}.
The installer may have overriden this by defining the environment
variable @code{RSH} @emph{at installation time}.

@item -[0-7][lmh]
Specify drive and density.

@item -M
@itemx --multi-volume
Create/list/extract multi-volume archive.

This option causes @code{tar} to write a @dfn{multi-volume} archive---one
that may be larger than will fit on the medium used to hold it.
@xref{Multi-Volume Archives}.

@item -L @var{num}
@itemx --tape-length=@var{num}
Change tape after writing @var{num} x 1024 bytes.

This option might be useful when your tape drivers do not properly
detect end of physical tapes.  By being slightly conservative on the
maximum tape length, you might avoid the problem entirely.

@item -F @var{file}
@itemx --info-script=@var{file}
@itemx --new-volume-script=@var{file}
Execute @file{file} at end of each tape.  This implies
@value{op-multi-volume}.
@end table

@node Remote Tape Server, Common Problems and Solutions, Device, Media
@section The Remote Tape Server

@cindex remote tape drive
@pindex rmt
In order to access the tape drive on a remote machine, @code{tar}
uses the remote tape server written at the University of California at
Berkeley.  The remote tape server must be installed as @file{/etc/rmt}
on any machine whose tape drive you want to use.  @code{tar} calls
@file{/etc/rmt} by running an @code{rsh} or @code{remsh} to the remote
machine, optionally using a different login name if one is supplied.

A copy of the source for the remote tape server is provided.  It is
Copyright @copyright{} 1983 by the Regents of the University of
California, but can be freely distributed.  Instructions for compiling
and installing it are included in the @file{Makefile}.

@cindex absolute file names
Unless you use the @value{op-absolute-names} option, GNU @code{tar} will
not allow you to create an archive that contains absolute file names
(a file name beginning with @samp{/}.) If you try, @code{tar} will
automatically remove the leading @samp{/} from the file names it
stores in the archive.  It will also type a warning message telling
you what it is doing.

When reading an archive that was created with a different @code{tar}
program, GNU @code{tar} automatically extracts entries in the archive
which have absolute file names as if the file names were not absolute.
This is an important feature.  A visitor here once gave a
@code{tar} tape to an operator to restore; the operator used Sun @code{tar}
instead of GNU @code{tar}, and the result was that it replaced large
portions of our @file{/bin} and friends with versions from the tape;
needless to say, we were unhappy about having to recover the file system
from backup tapes.

For example, if the archive contained a file @file{/usr/bin/computoy},
GNU @code{tar} would extract the file to @file{usr/bin/computoy},
relative to the current directory.  If you want to extract the files in
an archive to the same absolute names that they had when the archive
was created, you should do a @samp{cd /} before extracting the files
from the archive, or you should either use the @value{op-absolute-names}
option, or use the command @samp{tar -C / @dots{}}.

@cindex Ultrix 3.1 and write failure
Some versions of Unix (Ultrix 3.1 is know to have this problem),
can claim that a short write near the end of a tape succeeded,
when it actually failed.  This will result in the -M option not
working correctly.  The best workaround at the moment is to use a
significantly larger blocking factor than the default 20.

In order to update an archive, @code{tar} must be able to backspace the
archive in order to reread or rewrite a record that was just read (or
written).  This is currently possible only on two kinds of files: normal
disk files (or any other file that can be backspaced with @samp{lseek}),
and industry-standard 9-track magnetic tape (or any other kind of tape
that can be backspaced with the @code{MTIOCTOP} @code{ioctl}.

This means that the @value{op-append}, @value{op-update},
@value{op-concatenate}, and @value{op-delete} commands will not work on any
other kind of file.  Some media simply cannot be backspaced, which
means these commands and options will never be able to work on them.
These non-backspacing media include pipes and cartridge tape drives.

Some other media can be backspaced, and @code{tar} will work on them
once @code{tar} is modified to do so.

Archives created with the @value{op-multi-volume}, @value{op-label}, and
@value{op-incremental} options may not be readable by other version
of @code{tar}.  In particular, restoring a file that was split over
a volume boundary will require some careful work with @code{dd}, if
it can be done at all.  Other versions of @code{tar} may also create
an empty file whose name is that of the volume header.  Some versions
of @code{tar} may create normal files instead of directories archived
with the @value{op-incremental} option.

@node Common Problems and Solutions, Blocking, Remote Tape Server, Media
@section Some Common Problems and their Solutions

@ifclear PUBLISH

@format
errors from system:
permission denied
no such file or directory
not owner

errors from @code{tar}:
directory checksum error
header format error

errors from media/system:
i/o error
device busy
@end format

@end ifclear

@node Blocking, Many, Common Problems and Solutions, Media
@section Blocking
@UNREVISED

@dfn{Block} and @dfn{record} terminology is rather confused, and it
is also confusing to the expert reader.  On the other hand, readers
who are new to the field have a fresh mind, and they may safely skip
the next two paragraphs, as the remainder of this manual uses those
two terms in a quite consistent way.

John Gilmore, the writer of the public domain @code{tar} from which
GNU @code{tar} was originally derived, wrote (June 1995):

@quotation
The nomenclature of tape drives comes from IBM, where I believe
they were invented for the IBM 650 or so.  On IBM mainframes, what
is recorded on tape are tape blocks.  The logical organization of
data is into records.  There are various ways of putting records into
blocks, including @code{F} (fixed sized records), @code{V} (variable
sized records), @code{FB} (fixed blocked: fixed size records, @var{n}
to a block), @code{VB} (variable size records, @var{n} to a block),
@code{VSB} (variable spanned blocked: variable sized records that can
occupy more than one block), etc.  The @code{JCL} @samp{DD RECFORM=}
parameter specified this to the operating system.

The Unix man page on @code{tar} was totally confused about this.
When I wrote @code{PD TAR}, I used the historically correct terminology
(@code{tar} writes data records, which are grouped into blocks).
It appears that the bogus terminology made it into POSIX (no surprise
here), and now Fran@,{c}ois has migrated that terminology back
into the source code too.
@end quotation

The term @dfn{physical block} means the basic transfer chunk from or
to a device, after which reading or writing may stop without anything
being lost.  In this manual, the term @dfn{block} usually refers to
a disk physical block, @emph{assuming} that each disk block is 512
bytes in length.  It is true that some disk devices have different
physical blocks, but @code{tar} ignore these differences in its own
format, which is meant to be portable, so a @code{tar} block is always
512 bytes in length, and @dfn{block} always mean a @code{tar} block.
The term @dfn{logical block} often represents the basic chunk of
allocation of many disk blocks as a single entity, which the operating
system treats somewhat atomically; this concept is only barely used
in GNU @code{tar}.

The term @dfn{physical record} is another way to speak of a physical
block, those two terms are somewhat interchangeable.  In this manual,
the term @dfn{record} usually refers to a tape physical block,
@emph{assuming} that the @code{tar} archive is kept on magnetic tape.
It is true that archives may be put on disk or used with pipes,
but nevertheless, @code{tar} tries to read and write the archive one
@dfn{record} at a time, whatever the medium in use.  One record is made
up of an integral number of blocks, and this operation of putting many
disk blocks into a single tape block is called @dfn{reblocking}, or
more simply, @dfn{blocking}.  The term @dfn{logical record} refers to
the logical organization of many characters into something meaningful
to the application.  The term @dfn{unit record} describes a small set
of characters which are transmitted whole to or by the application,
and often refers to a line of text.  Those two last terms are unrelated
to what we call a @dfn{record} in GNU @code{tar}.

When writing to tapes, @code{tar} writes the contents of the archive
in chunks known as @dfn{records}.  To change the default blocking
factor, use the @value{op-blocking-factor} option.  Each record will
then be composed of @var{512-size} blocks.  (Each @code{tar} block is
512 bytes.  @xref{Standard}.)  Each file written to the archive uses
at least one full record.  As a result, using a larger record size
can result in more wasted space for small files.  On the other hand, a
larger record size can often be read and written much more efficiently.

Further complicating the problem is that some tape drives ignore the
blocking entirely.  For these, a larger record size can still improve
performance (because the software layers above the tape drive still
honor the blocking), but not as dramatically as on tape drives that
honor blocking.

When reading an archive, @code{tar} can usually figure out the record
size on itself.  When this is the case, and a non-standard record size
was used when the archive was created, @code{tar} will print a message
about a non-standard blocking factor, and then operate normally.  On
some tape devices, however, @code{tar} cannot figure out the record size
itself.  On most of those, you can specify a blocking factor (with
@value{op-blocking-factor}) larger than the actual blocking factor, and then use
the @value{op-read-full-records} option.  (If you specify a blocking factor
with @value{op-blocking-factor} and don't use the @value{op-read-full-records}
option, then @code{tar} will not attempt to figure out the recording size
itself.)  On some devices, you must always specify the record size
exactly with @value{op-blocking-factor} when reading, because @code{tar} cannot
figure it out.  In any case, use @value{op-list} before doing any
extractions to see whether @code{tar} is reading the archive correctly.

@code{tar} blocks are all fixed size (512 bytes), and its scheme for
putting them into records is to put a whole number of them (one or
more) into each record.  @code{tar} records are all the same size;
at the end of the file there's a block containing all zeros, which
is how you tell that the remainder of the last record(s) are garbage.

In a standard @code{tar} file (no options), the block size is 512
and the record size is 10240, for a blocking factor of 20.  What the
@value{op-blocking-factor} option does is sets the blocking factor,
changing the record size while leaving the block size at 512 bytes.
20 was fine for ancient 800 or 1600 bpi reel-to-reel tape drives;
most tape drives these days prefer much bigger records in order to
stream and not waste tape.  When writing tapes for myself, some tend
to use a factor of the order of 2048, say, giving a record size of
around one megabyte.

If you use a blocking factor larger than 20, older @code{tar} programs
might not be able to read the archive, so we recommend this as a limit
to use in practice.  GNU @code{tar}, however, will support arbitrarily
large record sizes, limited only by the amount of virtual memory or the
physical characteristics of the tape device.

@menu
* Format Variations::           Format Variations
* Blocking Factor::             The Blocking Factor of an Archive
@end menu

@node Format Variations, Blocking Factor, Blocking, Blocking
@subsection Format Variations
@cindex Format Parameters
@cindex Format Options
@cindex Options, archive format specifying
@cindex Options, format specifying
@UNREVISED

Format parameters specify how an archive is written on the archive
media.  The best choice of format parameters will vary depending on
the type and number of files being archived, and on the media used to
store the archive.

To specify format parameters when accessing or creating an archive,
you can use the options described in the following sections.
If you do not specify any format parameters, @code{tar} uses
default parameters.  You cannot modify a compressed archive.
If you create an archive with the @value{op-blocking-factor} option
specified (@value{pxref-blocking-factor}), you must specify that
blocking-factor when operating on the archive.  @xref{Formats}, for other
examples of format parameter considerations.

@node Blocking Factor,  , Format Variations, Blocking
@subsection The Blocking Factor of an Archive
@cindex Blocking Factor
@cindex Record Size
@cindex Number of blocks per record
@cindex Number of bytes per record
@cindex Bytes per record
@cindex Blocks per record
@UNREVISED

The data in an archive is grouped into blocks, which are 512 bytes.
Blocks are read and written in whole number multiples called
@dfn{records}.  The number of blocks in a record (ie. the size of a
record in units of 512 bytes) is called the @dfn{blocking factor}.
The @value{op-blocking-factor} option specifies the blocking factor of
an archive.  The default blocking factor is typically 20 (ie.@:
10240 bytes), but can be specified at installation.  To find out
the blocking factor of an existing archive, use @samp{tar --list
--file=@var{archive-name}}.  This may not work on some devices.

Records are separated by gaps, which waste space on the archive media.
If you are archiving on magnetic tape, using a larger blocking factor
(and therefore larger records) provides faster throughput and allows you
to fit more data on a tape (because there are fewer gaps). If you are
archiving on cartridge, a very large blocking factor (say 126 or more)
greatly increases performance. A smaller blocking factor, on the other
hand, may be usefull when archiving small files, to avoid archiving lots
of nulls as @code{tar} fills out the archive to the end of the record.
In general, the ideal record size depends on the size of the
inter-record gaps on the tape you are using, and the average size of the
files you are archiving.  @xref{create}, for information on
writing archives.

@FIXME{Need example of using a cartridge with blocking factor=126 or more.}

Archives with blocking factors larger than 20 cannot be read
by very old versions of @code{tar}, or by some newer versions
of @code{tar} running on old machines with small address spaces.
With GNU @code{tar}, the blocking factor of an archive is limited
only by the maximum record size of the device containing the archive,
or by the amount of available virtual memory.

Also, on some systems, not using adequate blocking factors, as sometimes
imposed by the device drivers, may yield unexpected diagnostics.  For
example, this has been reported:

@example
Cannot write to /dev/dlt: Invalid argument
@end example

@noindent
In such cases, it sometimes happen that the @code{tar} bundled by the
system is aware of block size idiosyncrasies, while GNU @code{tar} requires
an explicit specification for the block size, which it cannot guess.
This yields some people to consider GNU @code{tar} is misbehaving, because
by comparison, @cite{the bundle @code{tar} works OK}.  Adding @w{@kbd{-b
256}}, for example, might resolve the problem.

If you use a non-default blocking factor when you create an archive, you
must specify the same blocking factor when you modify that archive.  Some
archive devices will also require you to specify the blocking factor when
reading that archive, however this is not typically the case.  Usually, you
can use @value{op-list} without specifying a blocking factor---@code{tar}
reports a non-default record size and then lists the archive members as
it would normally.  To extract files from an archive with a non-standard
blocking factor (particularly if you're not sure what the blocking factor
is), you can usually use the @value{op-read-full-records} option while
specifying a blocking factor larger then the blocking factor of the archive
(ie. @samp{tar --extract --read-full-records --blocking-factor=300}.
@xref{list}, for more information on the @value{op-list}
operation.  @xref{Reading}, for a more detailed explanation of that option.

@table @kbd
@item --blocking-factor=@var{number}
@itemx -b @var{number}
Specifies the blocking factor of an archive.  Can be used with any
operation, but is usually not necessary with @value{op-list}.
@end table

Device blocking

@table @kbd
@item -b @var{blocks}
@itemx --blocking-factor=@var{blocks}
Set record size to @math{@var{blocks} * 512} bytes.

This option is used to specify a @dfn{blocking factor} for the archive.
When reading or writing the archive, @code{tar}, will do reads and writes
of the archive in records of @math{@var{block}*512} bytes.  This is true
even when the archive is compressed.  Some devices requires that all
write operations be a multiple of a certain size, and so, @code{tar}
pads the archive out to the next record boundary.

The default blocking factor is set when @code{tar} is compiled, and is
typically 20.  Blocking factors larger than 20 cannot be read by very
old versions of @code{tar}, or by some newer versions of @code{tar}
running on old machines with small address spaces.

With a magnetic tape, larger records give faster throughput and fit
more data on a tape (because there are fewer inter-record gaps).
If the archive is in a disk file or a pipe, you may want to specify
a smaller blocking factor, since a large one will result in a large
number of null bytes at the end of the archive.

When writing cartridge or other streaming tapes, a much larger
blocking factor (say 126 or more) will greatly increase performance.
However, you must specify the same blocking factor when reading or
updating the archive.

Apparently, Exabyte drives have a physical block size of 8K bytes.
If we choose our blocksize as a multiple of 8k bytes, then the problem
seems to dissapper.  Id est, we are using block size of 112 right
now, and we haven't had the problem since we switched@dots{}

With GNU @code{tar} the blocking factor is limited only by the maximum
record size of the device containing the archive, or by the amount of
available virtual memory.

However, deblocking or reblocking is virtually avoided in a special
case which often occurs in practice, but which requires all the
following conditions to be simultaneously true:
@itemize @bullet
@item
the archive is subject to a compression option,
@item
the archive is not handled through standard input or output, nor
redirected nor piped,
@item
the archive is directly handled to a local disk, instead of any special
device,
@item
@value{op-blocking-factor} is not explicitely specified on the @code{tar}
invocation.
@end itemize

In previous versions of GNU @code{tar}, the @samp{--compress-block}
option (or even older: @samp{--block-compress}) was necessary to
reblock compressed archives.  It is now a dummy option just asking
not to be used, and otherwise ignored.  If the output goes directly
to a local disk, and not through stdout, then the last write is
not extended to a full record size.  Otherwise, reblocking occurs.
Here are a few other remarks on this topic:

@itemize @bullet

@item
@code{gzip} will complain about trailing garbage if asked to
uncompress a compressed archive on tape, there is an option to turn
the message off, but it breaks the regularity of simply having to use
@samp{@var{prog} -d} for decompression.  It would be nice if gzip was
silently ignoring any number of trailing zeros.  I'll ask Jean-loup
Gailly, by sending a copy of this message to him.

@item
@code{compress} does not show this problem, but as Jean-loup pointed
out to Michael, @samp{compress -d} silently adds garbage after
the result of decompression, which tar ignores because it already
recognized its end-of-file indicator.  So this bug may be safely
ignored.

@item
@samp{gzip -d -q} will be silent about the trailing zeros indeed,
but will still return an exit status of 2 which tar reports in turn.
@code{tar} might ignore the exit status returned, but I hate doing
that, as it weakens the protection @code{tar} offers users against
other possible problems at decompression time.  If @code{gzip} was
silently skipping trailing zeros @emph{and} also avoiding setting the
exit status in this innocuous case, that would solve this situation.

@item
@code{tar} should become more solid at not stopping to read a pipe at
the first null block encountered.  This inelegantly breaks the pipe.
@code{tar} should rather drain the pipe out before exiting itself.
@end itemize

@item -i
@itemx --ignore-zeros
Ignore blocks of zeros in archive (means EOF).

The @value{op-ignore-zeros} option causes @code{tar} to ignore blocks
of zeros in the archive.  Normally a block of zeros indicates the
end of the archive, but when reading a damaged archive, or one which
was created by @code{cat}-ing several archives together, this option
allows @code{tar} to read the entire archive.  This option is not on
by default because many versions of @code{tar} write garbage after
the zeroed blocks.

Note that this option causes @code{tar} to read to the end of the
archive file, which may sometimes avoid problems when multiple files
are stored on a single physical tape.

@item -B
@itemx --read-full-records
Reblock as we read (for reading 4.2BSD pipes).

If @value{op-read-full-records} is used, @code{tar} will not panic if an
attempt to read a record from the archive does not return a full record.
Instead, @code{tar} will keep reading until it has obtained a full
record.

This option is turned on by default when @code{tar} is reading
an archive from standard input, or from a remote machine.  This is
because on BSD Unix systems, a read of a pipe will return however
much happens to be in the pipe, even if it is less than @code{tar}
requested.  If this option was not used, @code{tar} would fail as
soon as it read an incomplete record from the pipe.

This option is also useful with the commands for updating an archive.

@end table

Tape blocking

@FIXME{Appropriate options should be moved here from elsewhere.}

@cindex blocking factor
@cindex tape blocking

When handling various tapes or cartridges, you have to take care of
selecting a proper blocking, that is, the number of disk blocks you
put together as a single tape block on the tape, without intervening
tape gaps.  A @dfn{tape gap} is a small landing area on the tape
with no information on it, used for decelerating the tape to a
full stop, and for later regaining the reading or writing speed.
When the tape driver starts reading a record, the record has to
be read whole without stopping, as a tape gap is needed to stop the
tape motion without loosing information.

@cindex Exabyte blocking
@cindex DAT blocking
Using higher blocking (putting more disk blocks per tape block) will use
the tape more efficiently as there will be less tape gaps.  But reading
such tapes may be more difficult for the system, as more memory will be
required to receive at once the whole record.  Further, if there is a
reading error on a huge record, this is less likely that the system will
succeed in recovering the information.  So, blocking should not be too
low, nor it should be too high.  @code{tar} uses by default a blocking of
20 for historical reasons, and it does not really matter when reading or
writing to disk.  Current tape technology would easily accomodate higher
blockings.  Sun recommends a blocking of 126 for Exabytes and 96 for DATs.
We were told that for some DLT drives, the blocking should be a multiple
of 4Kb, preferably 64Kb (@w{@kbd{-b 128}}) or 256 for decent performance.
Other manufacturers may use different recommendations for the same tapes.
This might also depends of the buffering techniques used inside modern
tape controllers.  Some imposes a minimum blocking, or a maximum blocking.
Others request blocking to be some exponent of two.

So, there is no fixed rule for blocking.  But blocking at read time
should ideally be the same as blocking used at write time.  At one place
I know, with a wide variety of equipment, they found it best to use a
blocking of 32 to guarantee that their tapes are fully interchangeable.

I was also told that, for recycled tapes, prior erasure (by the same
drive unit that will be used to create the archives) sometimes lowers
the error rates observed at rewriting time.

I might also use @samp{--number-blocks} instead of
@samp{--block-number}, so @samp{--block} will then expand to
@samp{--blocking-factor} unambiguously.

@node Many, Using Multiple Tapes, Blocking, Media
@section Many Archives on One Tape

@FIXME{Appropriate options should be moved here from elsewhere.}

@findex ntape @r{device}
Most tape devices have two entries in the @file{/dev} directory, or
entries that come in pairs, which differ only in the minor number for
this device.  Let's take for example @file{/dev/tape}, which often
points to the only or usual tape device of a given system.  There might
be a corresponding @file{/dev/nrtape} or @file{/dev/ntape}.  The simpler
name is the @emph{rewinding} version of the device, while the name
having @samp{nr} in it is the @emph{no rewinding} version of the same
device.

A rewinding tape device will bring back the tape to its beginning point
automatically when this device is opened or closed.  Since @code{tar}
opens the archive file before using it and closes it afterwards, this
means that a simple:

@example
$ @kbd{tar cf /dev/tape @var{directory}}
@end example

@noindent
will reposition the tape to its beginning both prior and after saving
@var{directory} contents to it, thus erasing prior tape contents and
making it so that any subsequent write operation will destroy what has
just been saved.

@cindex tape positioning
So, a rewinding device is normally meant to hold one and only one file.
If you want to put more than one @code{tar} archive on a given tape, you
will need to avoid using the rewinding version of the tape device.  You
will also have to pay special attention to tape positioning.  Errors in
positionning may overwrite the valuable data already on your tape.  Many
people, burnt by past experiences, will only use rewinding devices and
limit themselves to one file per tape, precisely to avoid the risk of
such errors.  Be fully aware that writing at the wrong position on a
tape loses all information past this point and most probably until the
end of the tape, and this destroyed information @emph{cannot} be
recovered.

To save @var{directory-1} as a first archive at the beginning of a
tape, and leave that tape ready for a second archive, you should use:

@example
$ @kbd{mt -f /dev/nrtape rewind}
$ @kbd{tar cf /dev/nrtape @var{directory-1}}
@end example

@cindex tape marks
@dfn{Tape marks} are special magnetic patterns written on the tape
media, which are later recognizable by the reading hardware.  These
marks are used after each file, when there are many on a single tape.
An empty file (that is to say, two tape marks in a row) signal the
logical end of the tape, after which no file exist.  Usually,
non-rewinding tape device drivers will react to the close request issued
by @code{tar} by first writing two tape marks after your archive, and by
backspacing over one of these.  So, if you remove the tape at that time
from the tape drive, it is properly terminated.  But if you write
another file at the current position, the second tape mark will be
erased by the new information, leaving only one tape mark between files.

So, you may now save @var{directory-2} as a second archive after the
first on the same tape by issuing the command:

@example
$ @kbd{tar cf /dev/nrtape @var{directory-2}}
@end example

@noindent
and so on for all the archives you want to put on the same tape.

Another usual case is that you do not write all the archives the same
day, and you need to remove and store the tape between two archive
sessions.  In general, you must remember how many files are already
saved on your tape.  Suppose your tape already has 16 files on it, and
that you are ready to write the 17th.  You have to take care of skipping
the first 16 tape marks before saving @var{directory-17}, say, by using
these commands:

@example
$ @kbd{mt -f /dev/nrtape rewind}
$ @kbd{mt -f /dev/nrtape fsf 16}
$ @kbd{tar cf /dev/nrtape @var{directory-17}}
@end example

In all the previous examples, we put aside blocking considerations, but
you should do the proper things for that as well.  @xref{Blocking}.

@menu
* Tape Positioning::            Tape Positions and Tape Marks
* mt::                          The @code{mt} Utility
@end menu

@node Tape Positioning, mt, Many, Many
@subsection Tape Positions and Tape Marks
@UNREVISED

Just as archives can store more than one file from the file system,
tapes can store more than one archive file.  To keep track of where
archive files (or any other type of file stored on tape) begin and
end, tape archive devices write magnetic @dfn{tape marks} on the
archive media.  Tape drives write one tape mark between files,
two at the end of all the file entries.

If you think of data as a series of records "rrrr"'s, and tape marks as
"*"'s, a tape might look like the following:

@example
rrrr*rrrrrr*rrrrr*rr*rrrrr**-------------------------
@end example

Tape devices read and write tapes using a read/write @dfn{tape
head}---a physical part of the device which can only access one
point on the tape at a time.  When you use @code{tar} to read or
write archive data from a tape device, the device will begin reading
or writing from wherever on the tape the tape head happens to be,
regardless of which archive or what part of the archive the tape
head is on.  Before writing an archive, you should make sure that no
data on the tape will be overwritten (unless it is no longer needed).
Before reading an archive, you should make sure the tape head is at
the beginning of the archive you want to read.  (The @code{restore}
script will find the archive automatically.  @FIXME{There is no such
restore script!}.  @FIXME-xref{Scripted Restoration}).  @xref{mt}, for
an explanation of the tape moving utility.

If you want to add new archive file entries to a tape, you should
advance the tape to the end of the existing file entries, backspace
over the last tape mark, and write the new archive file.  If you were
to add two archives to the example above, the tape might look like the
following:

@example
rrrr*rrrrrr*rrrrr*rr*rrrrr*rrr*rrrr**----------------
@end example

@node mt,  , Tape Positioning, Many
@subsection The @code{mt} Utility
@UNREVISED

@FIXME{Is it true that this only works on non-block devices?
should explain the difference, (fixed or variable).}
@value{xref-blocking-factor}.

You can use the @code{mt} utility to advance or rewind a tape past a
specified number of archive files on the tape.  This will allow you
to move to the beginning of an archive before extracting or reading
it, or to the end of all the archives before writing a new one.
@FIXME{Why isn't there an "advance 'til you find two tape marks
together"?}

The syntax of the @code{mt} command is:

@example
@kbd{mt [-f @var{tapename}] @var{operation} [@var{number}]}
@end example

where @var{tapename} is the name of the tape device, @var{number} is
the number of times an operation is performed (with a default of one),
and @var{operation} is one of the following:

@FIXME{is there any use for record operations?}

@table @kbd
@item eof
@itemx weof
Writes @var{number} tape marks at the current position on the tape.

@item fsf
Moves tape position forward @var{number} files.

@item bsf
Moves tape position back @var{number} files.

@item rewind
Rewinds the tape. (Ignores @var{number}).

@item offline
@itemx rewoff1
Rewinds the tape and takes the tape device off-line. (Ignores @var{number}).

@item status
Prints status information about the tape unit.

@end table

@FIXME{Is there a better way to frob the spacing on the list?}

If you don't specify a @var{tapename}, @code{mt} uses the environment
variable TAPE; if TAPE does not exist, @code{mt} uses the device
@file{/dev/rmt12}.

@code{mt} returns a 0 exit status when the operation(s) were
successful, 1 if the command was unrecognized, and 2 if an operation
failed.

@FIXME{New node on how to find an archive?}

If you use @value{op-extract} with the @value{op-label} option specified,
@code{tar} will read an archive label (the tape head has to be positioned
on it) and print an error if the archive label doesn't match the
@var{archive-name} specified.  @var{archive-name} can be any regular
expression.  If the labels match, @code{tar} extracts the archive.
@value{xref-label}.  @FIXME-xref{Matching Format Parameters}.
@FIXME{fix cross references} @samp{tar --list --label} will cause
@code{tar} to print the label.

@FIXME{Program to list all the labels on a tape?}

@node Using Multiple Tapes, label, Many, Media
@section Using Multiple Tapes
@UNREVISED

Often you might want to write a large archive, one larger than will fit
on the actual tape you are using.  In such a case, you can run multiple
@code{tar} commands, but this can be inconvenient, particularly if you
are using options like @value{op-exclude} or dumping entire filesystems.
Therefore, @code{tar} supports multiple tapes automatically.

Use @value{op-multi-volume} on the command line, and then @code{tar} will,
when it reaches the end of the tape, prompt for another tape, and
continue the archive.  Each tape will have an independent archive, and
can be read without needing the other.  (As an exception to this, the
file that @code{tar} was archiving when it ran out of tape will usually
be split between the two archives; in this case you need to extract from
the first archive, using @value{op-multi-volume}, and then put in the
second tape when prompted, so @code{tar} can restore both halves of the
file.)

GNU @code{tar} multi-volume archives do not use a truly portable format.
You need GNU @code{tar} at both end to process them properly.

When prompting for a new tape, @code{tar} accepts any of the following
responses:

@table @kbd
@item ?
Request @code{tar} to explain possible responses
@item q
Request @code{tar} to exit immediately.
@item n @var{file name}
Request @code{tar} to write the next volume on the file @var{file name}.
@item !
Request @code{tar} to run a subshell.
@item y
Request @code{tar} to begin writing the next volume.
@end table

(You should only type @samp{y} after you have changed the tape;
otherwise @code{tar} will write over the volume it just finished.)

If you want more elaborate behavior than this, give @code{tar} the
@value{op-info-script} option.  The file @var{script-name} is expected
to be a program (or shell script) to be run instead of the normal
prompting procedure.  When the program finishes, @code{tar} will
immediately begin writing the next volume.  The behavior of the
@samp{n} response to the normal tape-change prompt is not available
if you use @value{op-info-script}.

The method @code{tar} uses to detect end of tape is not perfect, and
fails on some operating systems or on some devices.  You can use the
@value{op-tape-length} option if @code{tar} can't detect the end of the
tape itself.  This option selects @value{op-multi-volume} automatically.
The @var{size} argument should then be the usable size of the tape.
But for many devices, and floppy disks in particular, this option is
never required for real, as far as we know.

The volume number used by @code{tar} in its tape-change prompt
can be changed; if you give the @value{op-volno-file} option, then
@var{file-of-number} should be an unexisting file to be created, or else,
a file already containing a decimal number.  That number will be used
as the volume number of the first volume written.  When @code{tar} is
finished, it will rewrite the file with the now-current volume number.
(This does not change the volume number written on a tape label, as
per @value{ref-label}, it @emph{only} affects the number used in
the prompt.)

If you want @code{tar} to cycle through a series of tape drives, then
you can use the @samp{n} response to the tape-change prompt.  This is
error prone, however, and doesn't work at all with @value{op-info-script}.
Therefore, if you give @code{tar} multiple @value{op-file} options, then
the specified files will be used, in sequence, as the successive volumes
of the archive.  Only when the first one in the sequence needs to be
used again will @code{tar} prompt for a tape change (or run the info
script).

Multi-volume archives

With @value{op-multi-volume}, @code{tar} will not abort when it cannot
read or write any more data.  Instead, it will ask you to prepare a new
volume.  If the archive is on a magnetic tape, you should change tapes
now; if the archive is on a floppy disk, you should change disks, etc.

Each volume of a multi-volume archive is an independent @code{tar}
archive, complete in itself.  For example, you can list or extract any
volume alone; just don't specify @value{op-multi-volume}.  However, if one
file in the archive is split across volumes, the only way to extract
it successfully is with a multi-volume extract command @samp{--extract
--multi-volume} (@samp{-xM}) starting on or before the volume where
the file begins.

For example, let's presume someone has two tape drives on a system
named @file{/dev/tape0} and @file{/dev/tape1}.  For having GNU
@code{tar} to switch to the second drive when it needs to write the
second tape, and then back to the first tape, etc., just do either of:

@smallexample
$ @kbd{tar --create --multi-volume --file=/dev/tape0 --file=/dev/tape1 @var{files}}
$ @kbd{tar cMff /dev/tape0 /dev/tape1 @var{files}}
@end smallexample

@menu
* Multi-Volume Archives::       Archives Longer than One Tape or Disk
* Tape Files::                  Tape Files
@end menu

@node Multi-Volume Archives, Tape Files, Using Multiple Tapes, Using Multiple Tapes
@subsection Archives Longer than One Tape or Disk
@cindex Multi-volume archives
@UNREVISED

To create an archive that is larger than will fit on a single unit of
the media, use the @value{op-multi-volume} option in conjunction with
the @value{op-create} option (@pxref{create}).  A
@dfn{multi-volume} archive can be manipulated like any other archive
(provided the @value{op-multi-volume} option is specified), but is
stored on more than one tape or disk.

When you specify @value{op-multi-volume}, @code{tar} does not report an
error when it comes to the end of an archive volume (when reading), or
the end of the media (when writing).  Instead, it prompts you to load
a new storage volume.  If the archive is on a magnetic tape, you
should change tapes when you see the prompt; if the archive is on a
floppy disk, you should change disks; etc.

You can read each individual volume of a multi-volume archive as if it
were an archive by itself.  For example, to list the contents of one
volume, use @value{op-list}, without @value{op-multi-volume} specified.
To extract an archive member from one volume (assuming it is described
that volume), use @value{op-extract}, again without
@value{op-multi-volume}.

If an archive member is split across volumes (ie. its entry begins on
one volume of the media and ends on another), you need to specify
@value{op-multi-volume} to extract it successfully.  In this case, you
should load the volume where the archive member starts, and use
@samp{tar --extract --multi-volume}---@code{tar} will prompt for later
volumes as it needs them.  @xref{extracting archives}, for more
information about extracting archives.

@value{op-info-script} is like @value{op-multi-volume}, except that
@code{tar} does not prompt you directly to change media volumes when
a volume is full---instead, @code{tar} runs commands you have stored
in @var{script-name}.  For example, this option can be used to eject
cassettes, or to broadcast messages such as @samp{Someone please come
change my tape} when performing unattended backups.  When @var{script-name}
is done, @code{tar} will assume that the media has been changed.

Multi-volume archives can be modified like any other archive.  To add
files to a multi-volume archive, you need to only mount the last
volume of the archive media (and new volumes, if needed).  For all
other operations, you need to use the entire archive.

If a multi-volume archive was labeled using @value{op-label}
(@value{pxref-label}) when it was created, @code{tar} will not
automatically label volumes which are added later.  To label subsequent
volumes, specify @value{op-label} again in conjunction with the
@value{op-append}, @value{op-update} or @value{op-concatenate} operation.

@cindex Labelling multi-volume archives
@FIXME{example}

@FIXME{There should be a sample program here, including an exit
before end.  Is the exit status even checked in tar? :-(}

@table @kbd
@item --multi-volume
@itemx -M
Creates a multi-volume archive, when used in conjunction with
@value{op-create}.  To perform any other operation on a multi-volume
archive, specify @value{op-multi-volume} in conjunction with that
operation.

@item --info-script=@var{program-file}
@itemx -F @var{program-file}
Creates a multi-volume archive via a script.  Used in conjunction with
@value{op-create}.
@end table

Beware that there is @emph{no} real standard about the proper way, for a
@code{tar} archive, to span volume boundaries.  If you have a multi-volume
created by some vendor's @code{tar}, there is almost no chance you could
read all the volumes with GNU @code{tar}.  The converse is also true:
you may not expect multi-volume archives created by GNU @code{tar} to
be fully recovered by vendor's @code{tar}.  Since there is little chance
that, in mixed system configurations, some vendor's @code{tar} will work on
another vendor's machine, and there is a great chance that GNU @code{tar}
will work on most of them, your best bet is to install GNU @code{tar}
on all machines between which you know exchange of files is possible.

@node Tape Files,  , Multi-Volume Archives, Using Multiple Tapes
@subsection Tape Files
@UNREVISED

To give the archive a name which will be recorded in it, use the
@value{op-label} option.  This will write a special block identifying
@var{volume-label} as the name of the archive to the front of the archive
which will be displayed when the archive is listed with @value{op-list}.
If you are creating a multi-volume archive with @value{op-multi-volume}
(@FIXME-pxref{Using Multiple Tapes}), then the volume label will have
@samp{Volume @var{nnn}} appended to the name you give, where @var{nnn} is
the number of the volume of the archive.  (If you use the @value{op-label}
option when reading an archive, it checks to make sure the label on the
tape matches the one you give.  @value{xref-label}.

When @code{tar} writes an archive to tape, it creates a single
tape file.  If multiple archives are written to the same tape, one
after the other, they each get written as separate tape files.  When
extracting, it is necessary to position the tape at the right place
before running @code{tar}.  To do this, use the @code{mt} command.
For more information on the @code{mt} command and on the organization
of tapes into a sequence of tape files, see @ref{mt}.

People seem to often do:

@example
@kbd{--label="@var{some-prefix} `date +@var{some-format}`"}
@end example

or such, for pushing a common date in all volumes or an archive set.

@node label, verify, Using Multiple Tapes, Media
@section Including a Label in the Archive
@cindex Labeling an archive
@cindex Labels on the archive media
@UNREVISED

@table @kbd
@item -V @var{name}
@itemx --label=@var{name}
Create archive with volume name @var{name}.
@end table

This option causes @code{tar} to write out a @dfn{volume header} at
the beginning of the archive.  If @value{op-multi-volume} is used, each
volume of the archive will have a volume header of @samp{@var{name}
Volume @var{n}}, where @var{n} is 1 for the first volume, 2 for the
next, and so on.

@FIXME{Should the arg to --label be a quoted string??  No.}

To avoid problems caused by misplaced paper labels on the archive
media, you can include a @dfn{label} entry---an archive member which
contains the name of the archive---in the archive itself.  Use the
@value{op-label} option in conjunction with the @value{op-create} operation
to include a label entry in the archive as it is being created.

If you create an archive using both @value{op-label} and
@value{op-multi-volume}, each volume of the archive will have an
archive label of the form @samp{@var{archive-label} Volume @var{n}},
where @var{n} is 1 for the first volume, 2 for the next, and so on.
@FIXME-xref{Multi-Volume Archives}, for information on creating multiple
volume archives.

If you list or extract an archive using @value{op-label}, @code{tar} will
print an error if the archive label doesn't match the @var{archive-label}
specified, and will then not list nor extract the archive.  In those cases,
@var{archive-label} argument is interpreted as a globbing-style pattern
which must match the actual magnetic volume label.  @xref{exclude}, for
a precise description of how match is attempted@footnote{Previous versions
of @code{tar} used full regular expression matching, or before that, only
exact string matching, instead of wildcard matchers.  We decided for the
sake of simplicity to use a uniform matching device through @code{tar}.}.
If the switch @value{op-multi-volume} is being used, the volume label
matcher will also suffix @var{archive-label} by @w{@samp{ Volume [1-9]*}}
if the initial match fails, before giving up.  Since the volume numbering
is automatically added in labels at creation time, it sounded logical to
equally help the user taking care of it when the archive is being read.

The @value{op-label} was once called @samp{--volume}, but is not available
under that name anymore.

To find out an archive's label entry (or to find out if an archive has
a label at all), use @samp{tar --list --verbose}.  @code{tar} will print the
label first, and then print archive member information, as in the
example below:

@example
$ @kbd{tar --verbose --list --file=iamanarchive}
V--------- 0 0        0 1992-03-07 12:01 iamalabel--Volume Header--
-rw-rw-rw- ringo user 40 1990-05-21 13:30 iamafilename
@end example

@table @kbd
@item --label=@var{archive-label}
@itemx -V @var{archive-label}
Includes an @dfn{archive-label} at the beginning of the archive when
the archive is being created, when used in conjunction with the
@value{op-create} option.  Checks to make sure the archive label
matches the one specified (when used in conjunction with the
@value{op-extract} option.
@end table

To get a common information on all tapes of a series, use the
@value{op-label} option.  For having this information different in each
series created through a single script used on a regular basis, just
manage to get some date string as part of the label.  For example:

@example
$ @kbd{tar cfMV /dev/tape "Daily backup for `date +%Y-%m-%d`"}
$ @kbd{tar --create --file=/dev/tape --multi-volume \
     --volume="Daily backup for `date +%Y-%m-%d`"}
@end example

Also note that each label has its own date and time, which corresponds
to when GNU @code{tar} initially attempted to write it, often soon
after the operator launches @code{tar} or types the carriage return
telling that the next tape is ready.  Comparing date labels does give
an idea of tape throughput only if the delays for rewinding tapes
and the operator switching them were negligible, which is ususally
not the case.

@FIXME{was --volume}

@node verify, Write Protection, label, Media
@section Verifying Data as It is Stored
@cindex Verifying a write operation
@cindex Double-checking a write operation

@table @kbd
@item -W
@itemx --verify
Attempt to verify the archive after writing.
@end table

This option causes @code{tar} to verify the archive after writing it.
Each volume is checked after it is written, and any discrepancies
are recorded on the standard error output.

Verification requires that the archive be on a back-space-able medium.
This means pipes, some cartridge tape drives, and some other devices
cannot be verified.

You can insure the accuracy of an archive by comparing files in the
system with archive members.  @code{tar} can compare an archive to the
file system as the archive is being written, to verify a write
operation, or can compare a previously written archive, to insure that
it is up to date.

To check for discrepancies in an archive immediately after it is
written, use the @value{op-verify} option in conjunction with
the @value{op-create} operation.  When this option is
specified, @code{tar} checks archive members against their counterparts
in the file system, and reports discrepancies on the standard error.  In
multi-volume archives, each volume is verified after it is written,
before the next volume is written.

To verify an archive, you must be able to read it from before the end
of the last written entry.  This option is useful for detecting data
errors on some tapes.  Archives written to pipes, some cartridge tape
drives, and some other devices cannot be verified.

One can explicitely compare an already made archive with the file system
by using the @value{op-compare} option, instead of using the more automatic
@value{op-verify} option.  @value{xref-compare}.

Note that these two options have a slightly different intent.  The
@value{op-compare} option how identical are the logical contents of some
archive with what is on your disks, while the @value{op-verify} option is
really for checking if the physical contents agree and if the recording
media itself is of dependable quality.  So, for the @value{op-verify}
operation, @code{tar} tries to defeat all in-memory cache pertaining to
the archive, while it lets the speed optimization undisturbed for the
@value{op-compare} option.  If you nevertheless use @value{op-compare} for
media verification, you may have to defeat the in-memory cache yourself,
maybe by opening and reclosing the door latch of your recording unit,
forcing some doubt in your operating system about the fact this is really
the same volume as the one just written or read.

The @value{op-verify} option would not be necessary if drivers were indeed
able to detect dependably all write failures.  This sometimes require many
magnetic heads, some able to read after the writes occurred.  One would
not say that drivers unable to detect all cases are necessarily flawed,
as long as programming is concerned.

@node Write Protection,  , verify, Media
@section Write Protection

Almost all tapes and diskettes, and in a few rare cases, even disks can
be @dfn{write protected}, to protect data on them from being changed.
Once an archive is written, you should write protect the media to prevent
the archive from being accidently overwritten or deleted.  (This will
protect the archive from being changed with a tape or floppy drive---it
will not protect it from magnet fields or other physical hazards).

The write protection device itself is usually an integral part of the
physical media, and can be a two position (write enabled/write
disabled) switch, a notch which can be popped out or covered, a ring
which can be removed from the center of a tape reel, or some other
changeable feature.

@node Index,  , Media, Top
@unnumbered Index

@printindex cp
