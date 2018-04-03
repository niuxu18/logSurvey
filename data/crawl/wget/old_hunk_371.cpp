% texinfo.tex -- TeX macros to handle Texinfo files.
%
% Load plain if necessary, i.e., if running under initex.
\expandafter\ifx\csname fmtname\endcsname\relax\input plain\fi
%
\def\texinfoversion{2006-10-04.17}
%
% Copyright (C) 1985, 1986, 1988, 1990, 1991, 1992, 1993, 1994, 1995,
% 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2009
% Free Software Foundation, Inc.
%
% This texinfo.tex file is free software; you can redistribute it and/or
% modify it under the terms of the GNU General Public License as
% published by the Free Software Foundation; either version 2, or (at
% your option) any later version.
%
% This texinfo.tex file is distributed in the hope that it will be
% useful, but WITHOUT ANY WARRANTY; without even the implied warranty
% of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
% General Public License for more details.
%
% You should have received a copy of the GNU General Public License
% along with this texinfo.tex file; see the file COPYING.  If not, write
% to the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
% Boston, MA 02110-1301, USA.
%
% As a special exception, when this file is read by TeX when processing
% a Texinfo source document, you may use the result without
% restriction.  (This has been our intent since Texinfo was invented.)
%
% Please try the latest version of texinfo.tex before submitting bug
% reports; you can get the latest version from:
%   http://www.gnu.org/software/texinfo/ (the Texinfo home page), or
%   ftp://tug.org/tex/texinfo.tex
%     (and all CTAN mirrors, see http://www.ctan.org).
% The texinfo.tex in any given distribution could well be out
% of date, so if that's what you're using, please check.
%
% Send bug reports to bug-texinfo@gnu.org.  Please include including a
% complete document in each bug report with which we can reproduce the
% problem.  Patches are, of course, greatly appreciated.
%
% To process a Texinfo manual with TeX, it's most reliable to use the
% texi2dvi shell script that comes with the distribution.  For a simple
% manual foo.texi, however, you can get away with this:
%   tex foo.texi
%   texindex foo.??
%   tex foo.texi
%   tex foo.texi
%   dvips foo.dvi -o  # or whatever; this makes foo.ps.
% The extra TeX runs get the cross-reference information correct.
% Sometimes one run after texindex suffices, and sometimes you need more
% than two; texi2dvi does it as many times as necessary.
%
% It is possible to adapt texinfo.tex for other languages, to some
% extent.  You can get the existing language-specific files from the
% full Texinfo distribution.
%
% The GNU Texinfo home page is http://www.gnu.org/software/texinfo.


\message{Loading texinfo [version \texinfoversion]:}

% If in a .fmt file, print the version number
% and turn on active characters that we couldn't do earlier because
% they might have appeared in the input file name.
\everyjob{\message{[Texinfo version \texinfoversion]}%
  \catcode`+=\active \catcode`\_=\active}

\message{Basics,}
\chardef\other=12

% We never want plain's \outer definition of \+ in Texinfo.
% For @tex, we can use \tabalign.
\let\+ = \relax

% Save some plain tex macros whose names we will redefine.
\let\ptexb=\b
\let\ptexbullet=\bullet
\let\ptexc=\c
\let\ptexcomma=\,
\let\ptexdot=\.
\let\ptexdots=\dots
\let\ptexend=\end
\let\ptexequiv=\equiv
\let\ptexexclam=\!
\let\ptexfootnote=\footnote
\let\ptexgtr=>
\let\ptexhat=^
\let\ptexi=\i
\let\ptexindent=\indent
\let\ptexinsert=\insert
\let\ptexlbrace=\{
\let\ptexless=<
\let\ptexnewwrite\newwrite
\let\ptexnoindent=\noindent
\let\ptexplus=+
\let\ptexrbrace=\}
\let\ptexslash=\/
\let\ptexstar=\*
\let\ptext=\t

% If this character appears in an error message or help string, it
% starts a new line in the output.
\newlinechar = `^^J

% Use TeX 3.0's \inputlineno to get the line number, for better error
% messages, but if we're using an old version of TeX, don't do anything.
%
\ifx\inputlineno\thisisundefined
  \let\linenumber = \empty % Pre-3.0.
\else
  \def\linenumber{l.\the\inputlineno:\space}
\fi

% Set up fixed words for English if not already set.
\ifx\putwordAppendix\undefined  \gdef\putwordAppendix{Appendix}\fi
\ifx\putwordChapter\undefined   \gdef\putwordChapter{Chapter}\fi
\ifx\putwordfile\undefined      \gdef\putwordfile{file}\fi
\ifx\putwordin\undefined        \gdef\putwordin{in}\fi
\ifx\putwordIndexIsEmpty\undefined     \gdef\putwordIndexIsEmpty{(Index is empty)}\fi
\ifx\putwordIndexNonexistent\undefined \gdef\putwordIndexNonexistent{(Index is nonexistent)}\fi
\ifx\putwordInfo\undefined      \gdef\putwordInfo{Info}\fi
\ifx\putwordInstanceVariableof\undefined \gdef\putwordInstanceVariableof{Instance Variable of}\fi
\ifx\putwordMethodon\undefined  \gdef\putwordMethodon{Method on}\fi
\ifx\putwordNoTitle\undefined   \gdef\putwordNoTitle{No Title}\fi
\ifx\putwordof\undefined        \gdef\putwordof{of}\fi
\ifx\putwordon\undefined        \gdef\putwordon{on}\fi
\ifx\putwordpage\undefined      \gdef\putwordpage{page}\fi
\ifx\putwordsection\undefined   \gdef\putwordsection{section}\fi
\ifx\putwordSection\undefined   \gdef\putwordSection{Section}\fi
\ifx\putwordsee\undefined       \gdef\putwordsee{see}\fi
\ifx\putwordSee\undefined       \gdef\putwordSee{See}\fi
\ifx\putwordShortTOC\undefined  \gdef\putwordShortTOC{Short Contents}\fi
\ifx\putwordTOC\undefined       \gdef\putwordTOC{Table of Contents}\fi
%
\ifx\putwordMJan\undefined \gdef\putwordMJan{January}\fi
\ifx\putwordMFeb\undefined \gdef\putwordMFeb{February}\fi
\ifx\putwordMMar\undefined \gdef\putwordMMar{March}\fi
\ifx\putwordMApr\undefined \gdef\putwordMApr{April}\fi
\ifx\putwordMMay\undefined \gdef\putwordMMay{May}\fi
\ifx\putwordMJun\undefined \gdef\putwordMJun{June}\fi
\ifx\putwordMJul\undefined \gdef\putwordMJul{July}\fi
\ifx\putwordMAug\undefined \gdef\putwordMAug{August}\fi
\ifx\putwordMSep\undefined \gdef\putwordMSep{September}\fi
\ifx\putwordMOct\undefined \gdef\putwordMOct{October}\fi
\ifx\putwordMNov\undefined \gdef\putwordMNov{November}\fi
\ifx\putwordMDec\undefined \gdef\putwordMDec{December}\fi
%
\ifx\putwordDefmac\undefined    \gdef\putwordDefmac{Macro}\fi
\ifx\putwordDefspec\undefined   \gdef\putwordDefspec{Special Form}\fi
\ifx\putwordDefvar\undefined    \gdef\putwordDefvar{Variable}\fi
\ifx\putwordDefopt\undefined    \gdef\putwordDefopt{User Option}\fi
\ifx\putwordDeffunc\undefined   \gdef\putwordDeffunc{Function}\fi

% Since the category of space is not known, we have to be careful.
\chardef\spacecat = 10
\def\spaceisspace{\catcode`\ =\spacecat}

% sometimes characters are active, so we need control sequences.
\chardef\colonChar = `\:
\chardef\commaChar = `\,
\chardef\dashChar  = `\-
\chardef\dotChar   = `\.
\chardef\exclamChar= `\!
\chardef\lquoteChar= `\`
\chardef\questChar = `\?
\chardef\rquoteChar= `\'
\chardef\semiChar  = `\;
\chardef\underChar = `\_

% Ignore a token.
%
\def\gobble#1{}

% The following is used inside several \edef's.
\def\makecsname#1{\expandafter\noexpand\csname#1\endcsname}

% Hyphenation fixes.
\hyphenation{
  Flor-i-da Ghost-script Ghost-view Mac-OS Post-Script
  ap-pen-dix bit-map bit-maps
  data-base data-bases eshell fall-ing half-way long-est man-u-script
  man-u-scripts mini-buf-fer mini-buf-fers over-view par-a-digm
  par-a-digms rath-er rec-tan-gu-lar ro-bot-ics se-vere-ly set-up spa-ces
  spell-ing spell-ings
  stand-alone strong-est time-stamp time-stamps which-ever white-space
  wide-spread wrap-around
}

% Margin to add to right of even pages, to left of odd pages.
\newdimen\bindingoffset
\newdimen\normaloffset
\newdimen\pagewidth \newdimen\pageheight

% For a final copy, take out the rectangles
% that mark overfull boxes (in case you have decided
% that the text looks ok even though it passes the margin).
%
\def\finalout{\overfullrule=0pt}

% @| inserts a changebar to the left of the current line.  It should
% surround any changed text.  This approach does *not* work if the
% change spans more than two lines of output.  To handle that, we would
% have adopt a much more difficult approach (putting marks into the main
% vertical list for the beginning and end of each change).
%
\def\|{%
  % \vadjust can only be used in horizontal mode.
  \leavevmode
  %
  % Append this vertical mode material after the current line in the output.
  \vadjust{%
    % We want to insert a rule with the height and depth of the current
    % leading; that is exactly what \strutbox is supposed to record.
    \vskip-\baselineskip
    %
    % \vadjust-items are inserted at the left edge of the type.  So
    % the \llap here moves out into the left-hand margin.
    \llap{%
      %
      % For a thicker or thinner bar, change the `1pt'.
      \vrule height\baselineskip width1pt
      %
      % This is the space between the bar and the text.
      \hskip 12pt
    }%
  }%
}

% Sometimes it is convenient to have everything in the transcript file
% and nothing on the terminal.  We don't just call \tracingall here,
% since that produces some useless output on the terminal.  We also make
% some effort to order the tracing commands to reduce output in the log
% file; cf. trace.sty in LaTeX.
%
\def\gloggingall{\begingroup \globaldefs = 1 \loggingall \endgroup}%
\def\loggingall{%
  \tracingstats2
  \tracingpages1
  \tracinglostchars2  % 2 gives us more in etex
  \tracingparagraphs1
  \tracingoutput1
  \tracingmacros2
  \tracingrestores1
  \showboxbreadth\maxdimen \showboxdepth\maxdimen
  \ifx\eTeXversion\undefined\else % etex gives us more logging
    \tracingscantokens1
    \tracingifs1
    \tracinggroups1
    \tracingnesting2
    \tracingassigns1
  \fi
  \tracingcommands3  % 3 gives us more in etex
  \errorcontextlines16
}%

% add check for \lastpenalty to plain's definitions.  If the last thing
% we did was a \nobreak, we don't want to insert more space.
%
\def\smallbreak{\ifnum\lastpenalty<10000\par\ifdim\lastskip<\smallskipamount
  \removelastskip\penalty-50\smallskip\fi\fi}
\def\medbreak{\ifnum\lastpenalty<10000\par\ifdim\lastskip<\medskipamount
  \removelastskip\penalty-100\medskip\fi\fi}
\def\bigbreak{\ifnum\lastpenalty<10000\par\ifdim\lastskip<\bigskipamount
  \removelastskip\penalty-200\bigskip\fi\fi}

% For @cropmarks command.
% Do @cropmarks to get crop marks.
%
\newif\ifcropmarks
\let\cropmarks = \cropmarkstrue
%
% Dimensions to add cropmarks at corners.
% Added by P. A. MacKay, 12 Nov. 1986
%
\newdimen\outerhsize \newdimen\outervsize % set by the paper size routines
\newdimen\cornerlong  \cornerlong=1pc
\newdimen\cornerthick \cornerthick=.3pt
\newdimen\topandbottommargin \topandbottommargin=.75in

% Main output routine.
\chardef\PAGE = 255
\output = {\onepageout{\pagecontents\PAGE}}

\newbox\headlinebox
\newbox\footlinebox

% \onepageout takes a vbox as an argument.  Note that \pagecontents
% does insertions, but you have to call it yourself.
\def\onepageout#1{%
  \ifcropmarks \hoffset=0pt \else \hoffset=\normaloffset \fi
  %
  \ifodd\pageno  \advance\hoffset by \bindingoffset
  \else \advance\hoffset by -\bindingoffset\fi
  %
  % Do this outside of the \shipout so @code etc. will be expanded in
  % the headline as they should be, not taken literally (outputting ''code).
  \setbox\headlinebox = \vbox{\let\hsize=\pagewidth \makeheadline}%
  \setbox\footlinebox = \vbox{\let\hsize=\pagewidth \makefootline}%
  %
  {%
    % Have to do this stuff outside the \shipout because we want it to
    % take effect in \write's, yet the group defined by the \vbox ends
    % before the \shipout runs.
    %
    \indexdummies         % don't expand commands in the output.
    \normalturnoffactive  % \ in index entries must not stay \, e.g., if
               % the page break happens to be in the middle of an example.
               % We don't want .vr (or whatever) entries like this:
               % \entry{{\tt \indexbackslash }acronym}{32}{\code {\acronym}}
               % "\acronym" won't work when it's read back in;
               % it needs to be 
               % {\code {{\tt \backslashcurfont }acronym}
    \shipout\vbox{%
      % Do this early so pdf references go to the beginning of the page.
      \ifpdfmakepagedest \pdfdest name{\the\pageno} xyz\fi
      %
      \ifcropmarks \vbox to \outervsize\bgroup
        \hsize = \outerhsize
        \vskip-\topandbottommargin
        \vtop to0pt{%
          \line{\ewtop\hfil\ewtop}%
          \nointerlineskip
          \line{%
            \vbox{\moveleft\cornerthick\nstop}%
            \hfill
            \vbox{\moveright\cornerthick\nstop}%
          }%
          \vss}%
        \vskip\topandbottommargin
        \line\bgroup
          \hfil % center the page within the outer (page) hsize.
          \ifodd\pageno\hskip\bindingoffset\fi
          \vbox\bgroup
      \fi
      %
      \unvbox\headlinebox
      \pagebody{#1}%
      \ifdim\ht\footlinebox > 0pt
        % Only leave this space if the footline is nonempty.
        % (We lessened \vsize for it in \oddfootingyyy.)
        % The \baselineskip=24pt in plain's \makefootline has no effect.
        \vskip 24pt
        \unvbox\footlinebox
      \fi
      %
      \ifcropmarks
          \egroup % end of \vbox\bgroup
        \hfil\egroup % end of (centering) \line\bgroup
        \vskip\topandbottommargin plus1fill minus1fill
        \boxmaxdepth = \cornerthick
        \vbox to0pt{\vss
          \line{%
            \vbox{\moveleft\cornerthick\nsbot}%
            \hfill
            \vbox{\moveright\cornerthick\nsbot}%
          }%
          \nointerlineskip
          \line{\ewbot\hfil\ewbot}%
        }%
      \egroup % \vbox from first cropmarks clause
      \fi
    }% end of \shipout\vbox
  }% end of group with \indexdummies
  \advancepageno
  \ifnum\outputpenalty>-20000 \else\dosupereject\fi
}

\newinsert\margin \dimen\margin=\maxdimen

\def\pagebody#1{\vbox to\pageheight{\boxmaxdepth=\maxdepth #1}}
{\catcode`\@ =11
\gdef\pagecontents#1{\ifvoid\topins\else\unvbox\topins\fi
% marginal hacks, juha@viisa.uucp (Juha Takala)
\ifvoid\margin\else % marginal info is present
  \rlap{\kern\hsize\vbox to\z@{\kern1pt\box\margin \vss}}\fi
\dimen@=\dp#1 \unvbox#1
\ifvoid\footins\else\vskip\skip\footins\footnoterule \unvbox\footins\fi
\ifr@ggedbottom \kern-\dimen@ \vfil \fi}
}

% Here are the rules for the cropmarks.  Note that they are
% offset so that the space between them is truly \outerhsize or \outervsize
% (P. A. MacKay, 12 November, 1986)
%
\def\ewtop{\vrule height\cornerthick depth0pt width\cornerlong}
\def\nstop{\vbox
  {\hrule height\cornerthick depth\cornerlong width\cornerthick}}
\def\ewbot{\vrule height0pt depth\cornerthick width\cornerlong}
\def\nsbot{\vbox
  {\hrule height\cornerlong depth\cornerthick width\cornerthick}}

% Parse an argument, then pass it to #1.  The argument is the rest of
% the input line (except we remove a trailing comment).  #1 should be a
% macro which expects an ordinary undelimited TeX argument.
%
\def\parsearg{\parseargusing{}}
\def\parseargusing#1#2{%
  \def\argtorun{#2}%
  \begingroup
    \obeylines
    \spaceisspace
    #1%
    \parseargline\empty% Insert the \empty token, see \finishparsearg below.
}

{\obeylines %
  \gdef\parseargline#1^^M{%
    \endgroup % End of the group started in \parsearg.
    \argremovecomment #1\comment\ArgTerm%
  }%
}

% First remove any @comment, then any @c comment.
\def\argremovecomment#1\comment#2\ArgTerm{\argremovec #1\c\ArgTerm}
\def\argremovec#1\c#2\ArgTerm{\argcheckspaces#1\^^M\ArgTerm}

% Each occurence of `\^^M' or `<space>\^^M' is replaced by a single space.
%
% \argremovec might leave us with trailing space, e.g.,
%    @end itemize  @c foo
% This space token undergoes the same procedure and is eventually removed
% by \finishparsearg.
%
\def\argcheckspaces#1\^^M{\argcheckspacesX#1\^^M \^^M}
\def\argcheckspacesX#1 \^^M{\argcheckspacesY#1\^^M}
\def\argcheckspacesY#1\^^M#2\^^M#3\ArgTerm{%
  \def\temp{#3}%
  \ifx\temp\empty
    % Do not use \next, perhaps the caller of \parsearg uses it; reuse \temp:
    \let\temp\finishparsearg
  \else
    \let\temp\argcheckspaces
  \fi
  % Put the space token in:
  \temp#1 #3\ArgTerm
}

% If a _delimited_ argument is enclosed in braces, they get stripped; so
% to get _exactly_ the rest of the line, we had to prevent such situation.
% We prepended an \empty token at the very beginning and we expand it now,
% just before passing the control to \argtorun.
% (Similarily, we have to think about #3 of \argcheckspacesY above: it is
% either the null string, or it ends with \^^M---thus there is no danger
% that a pair of braces would be stripped.
%
% But first, we have to remove the trailing space token.
%
\def\finishparsearg#1 \ArgTerm{\expandafter\argtorun\expandafter{#1}}

% \parseargdef\foo{...}
%	is roughly equivalent to
% \def\foo{\parsearg\Xfoo}
% \def\Xfoo#1{...}
%
% Actually, I use \csname\string\foo\endcsname, ie. \\foo, as it is my
% favourite TeX trick.  --kasal, 16nov03

\def\parseargdef#1{%
  \expandafter \doparseargdef \csname\string#1\endcsname #1%
}
\def\doparseargdef#1#2{%
  \def#2{\parsearg#1}%
  \def#1##1%
}

% Several utility definitions with active space:
{
  \obeyspaces
  \gdef\obeyedspace{ }

  % Make each space character in the input produce a normal interword
  % space in the output.  Don't allow a line break at this space, as this
  % is used only in environments like @example, where each line of input
  % should produce a line of output anyway.
  %
  \gdef\sepspaces{\obeyspaces\let =\tie}

  % If an index command is used in an @example environment, any spaces
  % therein should become regular spaces in the raw index file, not the
  % expansion of \tie (\leavevmode \penalty \@M \ ).
  \gdef\unsepspaces{\let =\space}
}


\def\flushcr{\ifx\par\lisppar \def\next##1{}\else \let\next=\relax \fi \next}

% Define the framework for environments in texinfo.tex.  It's used like this:
%
%   \envdef\foo{...}
%   \def\Efoo{...}
%
% It's the responsibility of \envdef to insert \begingroup before the
% actual body; @end closes the group after calling \Efoo.  \envdef also
% defines \thisenv, so the current environment is known; @end checks
% whether the environment name matches.  The \checkenv macro can also be
% used to check whether the current environment is the one expected.
%
% Non-false conditionals (@iftex, @ifset) don't fit into this, so they
% are not treated as enviroments; they don't open a group.  (The
% implementation of @end takes care not to call \endgroup in this
% special case.)


% At runtime, environments start with this:
\def\startenvironment#1{\begingroup\def\thisenv{#1}}
% initialize
\let\thisenv\empty

% ... but they get defined via ``\envdef\foo{...}'':
\long\def\envdef#1#2{\def#1{\startenvironment#1#2}}
\def\envparseargdef#1#2{\parseargdef#1{\startenvironment#1#2}}

% Check whether we're in the right environment:
\def\checkenv#1{%
  \def\temp{#1}%
  \ifx\thisenv\temp
  \else
    \badenverr
  \fi
}

% Evironment mismatch, #1 expected:
\def\badenverr{%
  \errhelp = \EMsimple
  \errmessage{This command can appear only \inenvironment\temp,
    not \inenvironment\thisenv}%
}
\def\inenvironment#1{%
  \ifx#1\empty
    out of any environment%
  \else
    in environment \expandafter\string#1%
  \fi
}

% @end foo executes the definition of \Efoo.
% But first, it executes a specialized version of \checkenv
%
\parseargdef\end{%
  \if 1\csname iscond.#1\endcsname
  \else
    % The general wording of \badenverr may not be ideal, but... --kasal, 06nov03
    \expandafter\checkenv\csname#1\endcsname
    \csname E#1\endcsname
    \endgroup
  \fi
}

\newhelp\EMsimple{Press RETURN to continue.}


%% Simple single-character @ commands

% @@ prints an @
% Kludge this until the fonts are right (grr).
\def\@{{\tt\char64}}

% This is turned off because it was never documented
% and you can use @w{...} around a quote to suppress ligatures.
%% Define @` and @' to be the same as ` and '
%% but suppressing ligatures.
%\def\`{{`}}
%\def\'{{'}}

% Used to generate quoted braces.
\def\mylbrace {{\tt\char123}}
\def\myrbrace {{\tt\char125}}
\let\{=\mylbrace
\let\}=\myrbrace
\begingroup
  % Definitions to produce \{ and \} commands for indices,
  % and @{ and @} for the aux/toc files.
  \catcode`\{ = \other \catcode`\} = \other
  \catcode`\[ = 1 \catcode`\] = 2
  \catcode`\! = 0 \catcode`\\ = \other
  !gdef!lbracecmd[\{]%
  !gdef!rbracecmd[\}]%
  !gdef!lbraceatcmd[@{]%
  !gdef!rbraceatcmd[@}]%
!endgroup

% @comma{} to avoid , parsing problems.
\let\comma = ,

% Accents: @, @dotaccent @ringaccent @ubaraccent @udotaccent
% Others are defined by plain TeX: @` @' @" @^ @~ @= @u @v @H.
\let\, = \c
\let\dotaccent = \.
\def\ringaccent#1{{\accent23 #1}}
\let\tieaccent = \t
\let\ubaraccent = \b
\let\udotaccent = \d

% Other special characters: @questiondown @exclamdown @ordf @ordm
% Plain TeX defines: @AA @AE @O @OE @L (plus lowercase versions) @ss.
\def\questiondown{?`}
\def\exclamdown{!`}
\def\ordf{\leavevmode\raise1ex\hbox{\selectfonts\lllsize \underbar{a}}}
\def\ordm{\leavevmode\raise1ex\hbox{\selectfonts\lllsize \underbar{o}}}

% Dotless i and dotless j, used for accents.
\def\imacro{i}
\def\jmacro{j}
\def\dotless#1{%
  \def\temp{#1}%
  \ifx\temp\imacro \ptexi
  \else\ifx\temp\jmacro \j
  \else \errmessage{@dotless can be used only with i or j}%
  \fi\fi
}

% The \TeX{} logo, as in plain, but resetting the spacing so that a
% period following counts as ending a sentence.  (Idea found in latex.)
%
\edef\TeX{\TeX \spacefactor=1000 }

% @LaTeX{} logo.  Not quite the same results as the definition in
% latex.ltx, since we use a different font for the raised A; it's most
% convenient for us to use an explicitly smaller font, rather than using
% the \scriptstyle font (since we don't reset \scriptstyle and
% \scriptscriptstyle).
%
\def\LaTeX{%
  L\kern-.36em
  {\setbox0=\hbox{T}%
   \vbox to \ht0{\hbox{\selectfonts\lllsize A}\vss}}%
  \kern-.15em
  \TeX
}

% Be sure we're in horizontal mode when doing a tie, since we make space
% equivalent to this in @example-like environments. Otherwise, a space
% at the beginning of a line will start with \penalty -- and
% since \penalty is valid in vertical mode, we'd end up putting the
% penalty on the vertical list instead of in the new paragraph.
{\catcode`@ = 11
 % Avoid using \@M directly, because that causes trouble
 % if the definition is written into an index file.
 \global\let\tiepenalty = \@M
 \gdef\tie{\leavevmode\penalty\tiepenalty\ }
}

% @: forces normal size whitespace following.
\def\:{\spacefactor=1000 }

% @* forces a line break.
\def\*{\hfil\break\hbox{}\ignorespaces}

% @/ allows a line break.
\let\/=\allowbreak

% @. is an end-of-sentence period.
\def\.{.\spacefactor=\endofsentencespacefactor\space}

% @! is an end-of-sentence bang.
\def\!{!\spacefactor=\endofsentencespacefactor\space}

% @? is an end-of-sentence query.
\def\?{?\spacefactor=\endofsentencespacefactor\space}

% @frenchspacing on|off  says whether to put extra space after punctuation.
% 
\def\onword{on}
\def\offword{off}
%
\parseargdef\frenchspacing{%
  \def\temp{#1}%
  \ifx\temp\onword \plainfrenchspacing
  \else\ifx\temp\offword \plainnonfrenchspacing
  \else
    \errhelp = \EMsimple
    \errmessage{Unknown @frenchspacing option `\temp', must be on/off}%
  \fi\fi
}

% @w prevents a word break.  Without the \leavevmode, @w at the
% beginning of a paragraph, when TeX is still in vertical mode, would
% produce a whole line of output instead of starting the paragraph.
\def\w#1{\leavevmode\hbox{#1}}

% @group ... @end group forces ... to be all on one page, by enclosing
% it in a TeX vbox.  We use \vtop instead of \vbox to construct the box
% to keep its height that of a normal line.  According to the rules for
% \topskip (p.114 of the TeXbook), the glue inserted is
% max (\topskip - \ht (first item), 0).  If that height is large,
% therefore, no glue is inserted, and the space between the headline and
% the text is small, which looks bad.
%
% Another complication is that the group might be very large.  This can
% cause the glue on the previous page to be unduly stretched, because it
% does not have much material.  In this case, it's better to add an
% explicit \vfill so that the extra space is at the bottom.  The
% threshold for doing this is if the group is more than \vfilllimit
% percent of a page (\vfilllimit can be changed inside of @tex).
%
\newbox\groupbox
\def\vfilllimit{0.7}
%
\envdef\group{%
  \ifnum\catcode`\^^M=\active \else
    \errhelp = \groupinvalidhelp
    \errmessage{@group invalid in context where filling is enabled}%
  \fi
  \startsavinginserts
  %
  \setbox\groupbox = \vtop\bgroup
    % Do @comment since we are called inside an environment such as
    % @example, where each end-of-line in the input causes an
    % end-of-line in the output.  We don't want the end-of-line after
    % the `@group' to put extra space in the output.  Since @group
    % should appear on a line by itself (according to the Texinfo
    % manual), we don't worry about eating any user text.
    \comment
}
%
% The \vtop produces a box with normal height and large depth; thus, TeX puts
% \baselineskip glue before it, and (when the next line of text is done)
% \lineskip glue after it.  Thus, space below is not quite equal to space
% above.  But it's pretty close.
\def\Egroup{%
    % To get correct interline space between the last line of the group
    % and the first line afterwards, we have to propagate \prevdepth.
    \endgraf % Not \par, as it may have been set to \lisppar.
    \global\dimen1 = \prevdepth
  \egroup           % End the \vtop.
  % \dimen0 is the vertical size of the group's box.
  \dimen0 = \ht\groupbox  \advance\dimen0 by \dp\groupbox
  % \dimen2 is how much space is left on the page (more or less).
  \dimen2 = \pageheight   \advance\dimen2 by -\pagetotal
  % if the group doesn't fit on the current page, and it's a big big
  % group, force a page break.
  \ifdim \dimen0 > \dimen2
    \ifdim \pagetotal < \vfilllimit\pageheight
      \page
    \fi
  \fi
  \box\groupbox
  \prevdepth = \dimen1
  \checkinserts
}
%
% TeX puts in an \escapechar (i.e., `@') at the beginning of the help
% message, so this ends up printing `@group can only ...'.
%
\newhelp\groupinvalidhelp{%
group can only be used in environments such as @example,^^J%
where each line of input produces a line of output.}

% @need space-in-mils
% forces a page break if there is not space-in-mils remaining.

\newdimen\mil  \mil=0.001in

% Old definition--didn't work.
%\parseargdef\need{\par %
%% This method tries to make TeX break the page naturally
%% if the depth of the box does not fit.
%{\baselineskip=0pt%
%\vtop to #1\mil{\vfil}\kern -#1\mil\nobreak
%\prevdepth=-1000pt
%}}

\parseargdef\need{%
  % Ensure vertical mode, so we don't make a big box in the middle of a
  % paragraph.
  \par
  %
  % If the @need value is less than one line space, it's useless.
  \dimen0 = #1\mil
  \dimen2 = \ht\strutbox
  \advance\dimen2 by \dp\strutbox
  \ifdim\dimen0 > \dimen2
    %
    % Do a \strut just to make the height of this box be normal, so the
    % normal leading is inserted relative to the preceding line.
    % And a page break here is fine.
    \vtop to #1\mil{\strut\vfil}%
    %
    % TeX does not even consider page breaks if a penalty added to the
    % main vertical list is 10000 or more.  But in order to see if the
    % empty box we just added fits on the page, we must make it consider
    % page breaks.  On the other hand, we don't want to actually break the
    % page after the empty box.  So we use a penalty of 9999.
    %
    % There is an extremely small chance that TeX will actually break the
    % page at this \penalty, if there are no other feasible breakpoints in
    % sight.  (If the user is using lots of big @group commands, which
    % almost-but-not-quite fill up a page, TeX will have a hard time doing
    % good page breaking, for example.)  However, I could not construct an
    % example where a page broke at this \penalty; if it happens in a real
    % document, then we can reconsider our strategy.
    \penalty9999
    %
    % Back up by the size of the box, whether we did a page break or not.
    \kern -#1\mil
    %
    % Do not allow a page break right after this kern.
    \nobreak
  \fi
}

% @br   forces paragraph break (and is undocumented).

\let\br = \par

% @page forces the start of a new page.
%
\def\page{\par\vfill\supereject}

% @exdent text....
% outputs text on separate line in roman font, starting at standard page margin

% This records the amount of indent in the innermost environment.
% That's how much \exdent should take out.
\newskip\exdentamount

% This defn is used inside fill environments such as @defun.
\parseargdef\exdent{\hfil\break\hbox{\kern -\exdentamount{\rm#1}}\hfil\break}

% This defn is used inside nofill environments such as @example.
\parseargdef\nofillexdent{{\advance \leftskip by -\exdentamount
  \leftline{\hskip\leftskip{\rm#1}}}}

% @inmargin{WHICH}{TEXT} puts TEXT in the WHICH margin next to the current
% paragraph.  For more general purposes, use the \margin insertion
% class.  WHICH is `l' or `r'.
%
\newskip\inmarginspacing \inmarginspacing=1cm
\def\strutdepth{\dp\strutbox}
%
\def\doinmargin#1#2{\strut\vadjust{%
  \nobreak
  \kern-\strutdepth
  \vtop to \strutdepth{%
    \baselineskip=\strutdepth
    \vss
    % if you have multiple lines of stuff to put here, you'll need to
    % make the vbox yourself of the appropriate size.
    \ifx#1l%
      \llap{\ignorespaces #2\hskip\inmarginspacing}%
    \else
      \rlap{\hskip\hsize \hskip\inmarginspacing \ignorespaces #2}%
    \fi
    \null
  }%
}}
\def\inleftmargin{\doinmargin l}
\def\inrightmargin{\doinmargin r}
%
% @inmargin{TEXT [, RIGHT-TEXT]}
% (if RIGHT-TEXT is given, use TEXT for left page, RIGHT-TEXT for right;
% else use TEXT for both).
%
\def\inmargin#1{\parseinmargin #1,,\finish}
\def\parseinmargin#1,#2,#3\finish{% not perfect, but better than nothing.
  \setbox0 = \hbox{\ignorespaces #2}%
  \ifdim\wd0 > 0pt
    \def\lefttext{#1}%  have both texts
    \def\righttext{#2}%
  \else
    \def\lefttext{#1}%  have only one text
    \def\righttext{#1}%
  \fi
  %
  \ifodd\pageno
    \def\temp{\inrightmargin\righttext}% odd page -> outside is right margin
  \else
    \def\temp{\inleftmargin\lefttext}%
  \fi
  \temp
}

% @include file    insert text of that file as input.
%
\def\include{\parseargusing\filenamecatcodes\includezzz}
\def\includezzz#1{%
  \pushthisfilestack
  \def\thisfile{#1}%
  {%
    \makevalueexpandable
    \def\temp{\input #1 }%
    \expandafter
  }\temp
  \popthisfilestack
}
\def\filenamecatcodes{%
  \catcode`\\=\other
  \catcode`~=\other
  \catcode`^=\other
  \catcode`_=\other
  \catcode`|=\other
  \catcode`<=\other
  \catcode`>=\other
  \catcode`+=\other
  \catcode`-=\other
}

\def\pushthisfilestack{%
  \expandafter\pushthisfilestackX\popthisfilestack\StackTerm
}
\def\pushthisfilestackX{%
  \expandafter\pushthisfilestackY\thisfile\StackTerm
}
\def\pushthisfilestackY #1\StackTerm #2\StackTerm {%
  \gdef\popthisfilestack{\gdef\thisfile{#1}\gdef\popthisfilestack{#2}}%
}

\def\popthisfilestack{\errthisfilestackempty}
\def\errthisfilestackempty{\errmessage{Internal error:
  the stack of filenames is empty.}}

\def\thisfile{}

% @center line
% outputs that line, centered.
%
\parseargdef\center{%
  \ifhmode
    \let\next\centerH
  \else
    \let\next\centerV
  \fi
  \next{\hfil \ignorespaces#1\unskip \hfil}%
}
\def\centerH#1{%
  {%
    \hfil\break
    \advance\hsize by -\leftskip
    \advance\hsize by -\rightskip
    \line{#1}%
    \break
  }%
}
\def\centerV#1{\line{\kern\leftskip #1\kern\rightskip}}

% @sp n   outputs n lines of vertical space

\parseargdef\sp{\vskip #1\baselineskip}

% @comment ...line which is ignored...
% @c is the same as @comment
% @ignore ... @end ignore  is another way to write a comment

\def\comment{\begingroup \catcode`\^^M=\other%
\catcode`\@=\other \catcode`\{=\other \catcode`\}=\other%
\commentxxx}
{\catcode`\^^M=\other \gdef\commentxxx#1^^M{\endgroup}}

\let\c=\comment

% @paragraphindent NCHARS
% We'll use ems for NCHARS, close enough.
% NCHARS can also be the word `asis' or `none'.
% We cannot feasibly implement @paragraphindent asis, though.
%
\def\asisword{asis} % no translation, these are keywords
\def\noneword{none}
%
\parseargdef\paragraphindent{%
  \def\temp{#1}%
  \ifx\temp\asisword
  \else
    \ifx\temp\noneword
      \defaultparindent = 0pt
    \else
      \defaultparindent = #1em
    \fi
  \fi
  \parindent = \defaultparindent
}

% @exampleindent NCHARS
% We'll use ems for NCHARS like @paragraphindent.
% It seems @exampleindent asis isn't necessary, but
% I preserve it to make it similar to @paragraphindent.
\parseargdef\exampleindent{%
  \def\temp{#1}%
  \ifx\temp\asisword
  \else
    \ifx\temp\noneword
      \lispnarrowing = 0pt
    \else
      \lispnarrowing = #1em
    \fi
  \fi
}

% @firstparagraphindent WORD
% If WORD is `none', then suppress indentation of the first paragraph
% after a section heading.  If WORD is `insert', then do indent at such
% paragraphs.
%
% The paragraph indentation is suppressed or not by calling
% \suppressfirstparagraphindent, which the sectioning commands do.
% We switch the definition of this back and forth according to WORD.
% By default, we suppress indentation.
%
\def\suppressfirstparagraphindent{\dosuppressfirstparagraphindent}
\def\insertword{insert}
%
\parseargdef\firstparagraphindent{%
  \def\temp{#1}%
  \ifx\temp\noneword
    \let\suppressfirstparagraphindent = \dosuppressfirstparagraphindent
  \else\ifx\temp\insertword
    \let\suppressfirstparagraphindent = \relax
  \else
    \errhelp = \EMsimple
    \errmessage{Unknown @firstparagraphindent option `\temp'}%
  \fi\fi
}

% Here is how we actually suppress indentation.  Redefine \everypar to
% \kern backwards by \parindent, and then reset itself to empty.
%
% We also make \indent itself not actually do anything until the next
% paragraph.
%
\gdef\dosuppressfirstparagraphindent{%
  \gdef\indent{%
    \restorefirstparagraphindent
    \indent
  }%
  \gdef\noindent{%
    \restorefirstparagraphindent
    \noindent
  }%
  \global\everypar = {%
    \kern -\parindent
    \restorefirstparagraphindent
  }%
}

\gdef\restorefirstparagraphindent{%
  \global \let \indent = \ptexindent
  \global \let \noindent = \ptexnoindent
  \global \everypar = {}%
}


% @asis just yields its argument.  Used with @table, for example.
%
\def\asis#1{#1}

% @math outputs its argument in math mode.
%
% One complication: _ usually means subscripts, but it could also mean
% an actual _ character, as in @math{@var{some_variable} + 1}.  So make
% _ active, and distinguish by seeing if the current family is \slfam,
% which is what @var uses.
{
  \catcode`\_ = \active
  \gdef\mathunderscore{%
    \catcode`\_=\active
    \def_{\ifnum\fam=\slfam \_\else\sb\fi}%
  }
}
% Another complication: we want \\ (and @\) to output a \ character.
% FYI, plain.tex uses \\ as a temporary control sequence (why?), but
% this is not advertised and we don't care.  Texinfo does not
% otherwise define @\.
%
% The \mathchar is class=0=ordinary, family=7=ttfam, position=5C=\.
\def\mathbackslash{\ifnum\fam=\ttfam \mathchar"075C \else\backslash \fi}
%
\def\math{%
  \tex
  \mathunderscore
  \let\\ = \mathbackslash
  \mathactive
  $\finishmath
}
\def\finishmath#1{#1$\endgroup}  % Close the group opened by \tex.

% Some active characters (such as <) are spaced differently in math.
% We have to reset their definitions in case the @math was an argument
% to a command which sets the catcodes (such as @item or @section).
%
{
  \catcode`^ = \active
  \catcode`< = \active
  \catcode`> = \active
  \catcode`+ = \active
  \gdef\mathactive{%
    \let^ = \ptexhat
    \let< = \ptexless
    \let> = \ptexgtr
    \let+ = \ptexplus
  }
}

% @bullet and @minus need the same treatment as @math, just above.
\def\bullet{$\ptexbullet$}
\def\minus{$-$}

% @dots{} outputs an ellipsis using the current font.
% We do .5em per period so that it has the same spacing in the cm
% typewriter fonts as three actual period characters; on the other hand,
% in other typewriter fonts three periods are wider than 1.5em.  So do
% whichever is larger.
%
\def\dots{%
  \leavevmode
  \setbox0=\hbox{...}% get width of three periods
  \ifdim\wd0 > 1.5em
    \dimen0 = \wd0
  \else
    \dimen0 = 1.5em
  \fi
  \hbox to \dimen0{%
    \hskip 0pt plus.25fil
    .\hskip 0pt plus1fil
    .\hskip 0pt plus1fil
    .\hskip 0pt plus.5fil
  }%
}

% @enddots{} is an end-of-sentence ellipsis.
%
\def\enddots{%
  \dots
  \spacefactor=\endofsentencespacefactor
}

% @comma{} is so commas can be inserted into text without messing up
% Texinfo's parsing.
%
\let\comma = ,

% @refill is a no-op.
\let\refill=\relax

% If working on a large document in chapters, it is convenient to
% be able to disable indexing, cross-referencing, and contents, for test runs.
% This is done with @novalidate (before @setfilename).
%
\newif\iflinks \linkstrue % by default we want the aux files.
\let\novalidate = \linksfalse

% @setfilename is done at the beginning of every texinfo file.
% So open here the files we need to have open while reading the input.
% This makes it possible to make a .fmt file for texinfo.
\def\setfilename{%
   \fixbackslash  % Turn off hack to swallow `\input texinfo'.
   \iflinks
     \tryauxfile
     % Open the new aux file.  TeX will close it automatically at exit.
     \immediate\openout\auxfile=\jobname.aux
   \fi % \openindices needs to do some work in any case.
   \openindices
   \let\setfilename=\comment % Ignore extra @setfilename cmds.
   %
   % If texinfo.cnf is present on the system, read it.
   % Useful for site-wide @afourpaper, etc.
   \openin 1 texinfo.cnf
   \ifeof 1 \else \input texinfo.cnf \fi
   \closein 1
   %
   \comment % Ignore the actual filename.
}

% Called from \setfilename.
%
\def\openindices{%
  \newindex{cp}%
  \newcodeindex{fn}%
  \newcodeindex{vr}%
  \newcodeindex{tp}%
  \newcodeindex{ky}%
  \newcodeindex{pg}%
}

% @bye.
\outer\def\bye{\pagealignmacro\tracingstats=1\ptexend}


\message{pdf,}
% adobe `portable' document format
\newcount\tempnum
\newcount\lnkcount
\newtoks\filename
\newcount\filenamelength
\newcount\pgn
\newtoks\toksA
\newtoks\toksB
\newtoks\toksC
\newtoks\toksD
\newbox\boxA
\newcount\countA
\newif\ifpdf
\newif\ifpdfmakepagedest

% when pdftex is run in dvi mode, \pdfoutput is defined (so \pdfoutput=1
% can be set).  So we test for \relax and 0 as well as \undefined,
% borrowed from ifpdf.sty.
\ifx\pdfoutput\undefined
\else
  \ifx\pdfoutput\relax
  \else
    \ifcase\pdfoutput
    \else
      \pdftrue
    \fi
  \fi
\fi

% PDF uses PostScript string constants for the names of xref targets,
% for display in the outlines, and in other places.  Thus, we have to
% double any backslashes.  Otherwise, a name like "\node" will be
% interpreted as a newline (\n), followed by o, d, e.  Not good.
% http://www.ntg.nl/pipermail/ntg-pdftex/2004-July/000654.html
% (and related messages, the final outcome is that it is up to the TeX
% user to double the backslashes and otherwise make the string valid, so
% that's what we do).

% double active backslashes.
% 
{\catcode`\@=0 \catcode`\\=\active
 @gdef@activebackslashdouble{%
   @catcode`@\=@active
   @let\=@doublebackslash}
}

% To handle parens, we must adopt a different approach, since parens are
% not active characters.  hyperref.dtx (which has the same problem as
% us) handles it with this amazing macro to replace tokens.  I've
% tinkered with it a little for texinfo, but it's definitely from there.
% 
% #1 is the tokens to replace.
% #2 is the replacement.
% #3 is the control sequence with the string.
% 
\def\HyPsdSubst#1#2#3{%
  \def\HyPsdReplace##1#1##2\END{%
    ##1%
    \ifx\\##2\\%
    \else
      #2%
      \HyReturnAfterFi{%
        \HyPsdReplace##2\END
      }%
    \fi
  }%
  \xdef#3{\expandafter\HyPsdReplace#3#1\END}%
}
\long\def\HyReturnAfterFi#1\fi{\fi#1}

% #1 is a control sequence in which to do the replacements.
\def\backslashparens#1{%
  \xdef#1{#1}% redefine it as its expansion; the definition is simply
             % \lastnode when called from \setref -> \pdfmkdest.
  \HyPsdSubst{(}{\realbackslash(}{#1}%
  \HyPsdSubst{)}{\realbackslash)}{#1}%
}

\ifpdf
  \input pdfcolor
  \pdfcatalog{/PageMode /UseOutlines}%
  % #1 is image name, #2 width (might be empty/whitespace), #3 height (ditto).
  \def\dopdfimage#1#2#3{%
    \def\imagewidth{#2}\setbox0 = \hbox{\ignorespaces #2}%
    \def\imageheight{#3}\setbox2 = \hbox{\ignorespaces #3}%
    % without \immediate, pdftex seg faults when the same image is
    % included twice.  (Version 3.14159-pre-1.0-unofficial-20010704.)
    \ifnum\pdftexversion < 14
      \immediate\pdfimage
    \else
      \immediate\pdfximage
    \fi
      \ifdim \wd0 >0pt width \imagewidth \fi
      \ifdim \wd2 >0pt height \imageheight \fi
      \ifnum\pdftexversion<13
         #1.pdf%
       \else
         {#1.pdf}%
       \fi
    \ifnum\pdftexversion < 14 \else
      \pdfrefximage \pdflastximage
    \fi}
  \def\pdfmkdest#1{{%
    % We have to set dummies so commands such as @code, and characters
    % such as \, aren't expanded when present in a section title.
    \atdummies
    \activebackslashdouble
    \def\pdfdestname{#1}%
    \backslashparens\pdfdestname
    \pdfdest name{\pdfdestname} xyz%
  }}%
  %
  % used to mark target names; must be expandable.
  \def\pdfmkpgn#1{#1}%
  %
  \let\linkcolor = \Blue  % was Cyan, but that seems light?
  \def\endlink{\Black\pdfendlink}
  % Adding outlines to PDF; macros for calculating structure of outlines
  % come from Petr Olsak
  \def\expnumber#1{\expandafter\ifx\csname#1\endcsname\relax 0%
    \else \csname#1\endcsname \fi}
  \def\advancenumber#1{\tempnum=\expnumber{#1}\relax
    \advance\tempnum by 1
    \expandafter\xdef\csname#1\endcsname{\the\tempnum}}
  %
  % #1 is the section text, which is what will be displayed in the
  % outline by the pdf viewer.  #2 is the pdf expression for the number
  % of subentries (or empty, for subsubsections).  #3 is the node text,
  % which might be empty if this toc entry had no corresponding node.
  % #4 is the page number
  %
  \def\dopdfoutline#1#2#3#4{%
    % Generate a link to the node text if that exists; else, use the
    % page number.  We could generate a destination for the section
    % text in the case where a section has no node, but it doesn't
    % seem worth the trouble, since most documents are normally structured.
    \def\pdfoutlinedest{#3}%
    \ifx\pdfoutlinedest\empty
      \def\pdfoutlinedest{#4}%
    \else
      % Doubled backslashes in the name.
      {\activebackslashdouble \xdef\pdfoutlinedest{#3}%
       \backslashparens\pdfoutlinedest}%
    \fi
    %
    % Also double the backslashes in the display string.
    {\activebackslashdouble \xdef\pdfoutlinetext{#1}%
     \backslashparens\pdfoutlinetext}%
    %
    \pdfoutline goto name{\pdfmkpgn{\pdfoutlinedest}}#2{\pdfoutlinetext}%
  }
  %
  \def\pdfmakeoutlines{%
    \begingroup
      % Thanh's hack / proper braces in bookmarks
      \edef\mylbrace{\iftrue \string{\else}\fi}\let\{=\mylbrace
      \edef\myrbrace{\iffalse{\else\string}\fi}\let\}=\myrbrace
      %
      % Read toc silently, to get counts of subentries for \pdfoutline.
      \def\numchapentry##1##2##3##4{%
	\def\thischapnum{##2}%
	\def\thissecnum{0}%
	\def\thissubsecnum{0}%
      }%
      \def\numsecentry##1##2##3##4{%
	\advancenumber{chap\thischapnum}%
	\def\thissecnum{##2}%
	\def\thissubsecnum{0}%
      }%
      \def\numsubsecentry##1##2##3##4{%
	\advancenumber{sec\thissecnum}%
	\def\thissubsecnum{##2}%
      }%
      \def\numsubsubsecentry##1##2##3##4{%
	\advancenumber{subsec\thissubsecnum}%
      }%
      \def\thischapnum{0}%
      \def\thissecnum{0}%
      \def\thissubsecnum{0}%
      %
      % use \def rather than \let here because we redefine \chapentry et
      % al. a second time, below.
      \def\appentry{\numchapentry}%
      \def\appsecentry{\numsecentry}%
      \def\appsubsecentry{\numsubsecentry}%
      \def\appsubsubsecentry{\numsubsubsecentry}%
      \def\unnchapentry{\numchapentry}%
      \def\unnsecentry{\numsecentry}%
      \def\unnsubsecentry{\numsubsecentry}%
      \def\unnsubsubsecentry{\numsubsubsecentry}%
      \readdatafile{toc}%
      %
      % Read toc second time, this time actually producing the outlines.
      % The `-' means take the \expnumber as the absolute number of
      % subentries, which we calculated on our first read of the .toc above.
      %
      % We use the node names as the destinations.
      \def\numchapentry##1##2##3##4{%
        \dopdfoutline{##1}{count-\expnumber{chap##2}}{##3}{##4}}%
      \def\numsecentry##1##2##3##4{%
        \dopdfoutline{##1}{count-\expnumber{sec##2}}{##3}{##4}}%
      \def\numsubsecentry##1##2##3##4{%
        \dopdfoutline{##1}{count-\expnumber{subsec##2}}{##3}{##4}}%
      \def\numsubsubsecentry##1##2##3##4{% count is always zero
        \dopdfoutline{##1}{}{##3}{##4}}%
      %
      % PDF outlines are displayed using system fonts, instead of
      % document fonts.  Therefore we cannot use special characters,
      % since the encoding is unknown.  For example, the eogonek from
      % Latin 2 (0xea) gets translated to a | character.  Info from
      % Staszek Wawrykiewicz, 19 Jan 2004 04:09:24 +0100.
      %
      % xx to do this right, we have to translate 8-bit characters to
      % their "best" equivalent, based on the @documentencoding.  Right
      % now, I guess we'll just let the pdf reader have its way.
      \indexnofonts
      \setupdatafile
      \catcode`\\=\active \otherbackslash
      \input \jobname.toc
    \endgroup
  }
  %
  \def\skipspaces#1{\def\PP{#1}\def\D{|}%
    \ifx\PP\D\let\nextsp\relax
    \else\let\nextsp\skipspaces
      \ifx\p\space\else\addtokens{\filename}{\PP}%
        \advance\filenamelength by 1
      \fi
    \fi
    \nextsp}
  \def\getfilename#1{\filenamelength=0\expandafter\skipspaces#1|\relax}
  \ifnum\pdftexversion < 14
    \let \startlink \pdfannotlink
  \else
    \let \startlink \pdfstartlink
  \fi
  % make a live url in pdf output.
  \def\pdfurl#1{%
    \begingroup
      % it seems we really need yet another set of dummies; have not
      % tried to figure out what each command should do in the context
      % of @url.  for now, just make @/ a no-op, that's the only one
      % people have actually reported a problem with.
      % 
      \normalturnoffactive
      \def\@{@}%
      \let\/=\empty
      \makevalueexpandable
      \leavevmode\Red
      \startlink attr{/Border [0 0 0]}%
        user{/Subtype /Link /A << /S /URI /URI (#1) >>}%
    \endgroup}
  \def\pdfgettoks#1.{\setbox\boxA=\hbox{\toksA={#1.}\toksB={}\maketoks}}
  \def\addtokens#1#2{\edef\addtoks{\noexpand#1={\the#1#2}}\addtoks}
  \def\adn#1{\addtokens{\toksC}{#1}\global\countA=1\let\next=\maketoks}
  \def\poptoks#1#2|ENDTOKS|{\let\first=#1\toksD={#1}\toksA={#2}}
  \def\maketoks{%
    \expandafter\poptoks\the\toksA|ENDTOKS|\relax
    \ifx\first0\adn0
    \else\ifx\first1\adn1 \else\ifx\first2\adn2 \else\ifx\first3\adn3
    \else\ifx\first4\adn4 \else\ifx\first5\adn5 \else\ifx\first6\adn6
    \else\ifx\first7\adn7 \else\ifx\first8\adn8 \else\ifx\first9\adn9
    \else
      \ifnum0=\countA\else\makelink\fi
      \ifx\first.\let\next=\done\else
        \let\next=\maketoks
        \addtokens{\toksB}{\the\toksD}
        \ifx\first,\addtokens{\toksB}{\space}\fi
      \fi
    \fi\fi\fi\fi\fi\fi\fi\fi\fi\fi
    \next}
  \def\makelink{\addtokens{\toksB}%
    {\noexpand\pdflink{\the\toksC}}\toksC={}\global\countA=0}
  \def\pdflink#1{%
    \startlink attr{/Border [0 0 0]} goto name{\pdfmkpgn{#1}}
    \linkcolor #1\endlink}
  \def\done{\edef\st{\global\noexpand\toksA={\the\toksB}}\st}
\else
  \let\pdfmkdest = \gobble
  \let\pdfurl = \gobble
  \let\endlink = \relax
  \let\linkcolor = \relax
  \let\pdfmakeoutlines = \relax
\fi  % \ifx\pdfoutput


\message{fonts,}

% Change the current font style to #1, remembering it in \curfontstyle.
% For now, we do not accumulate font styles: @b{@i{foo}} prints foo in
% italics, not bold italics.
%
\def\setfontstyle#1{%
  \def\curfontstyle{#1}% not as a control sequence, because we are \edef'd.
  \csname ten#1\endcsname  % change the current font
}

% Select #1 fonts with the current style.
%
\def\selectfonts#1{\csname #1fonts\endcsname \csname\curfontstyle\endcsname}

\def\rm{\fam=0 \setfontstyle{rm}}
\def\it{\fam=\itfam \setfontstyle{it}}
\def\sl{\fam=\slfam \setfontstyle{sl}}
\def\bf{\fam=\bffam \setfontstyle{bf}}\def\bfstylename{bf}
\def\tt{\fam=\ttfam \setfontstyle{tt}}

% Texinfo sort of supports the sans serif font style, which plain TeX does not.
% So we set up a \sf.
\newfam\sffam
\def\sf{\fam=\sffam \setfontstyle{sf}}
\let\li = \sf % Sometimes we call it \li, not \sf.

% We don't need math for this font style.
\def\ttsl{\setfontstyle{ttsl}}


% Default leading.
\newdimen\textleading  \textleading = 13.2pt

% Set the baselineskip to #1, and the lineskip and strut size
% correspondingly.  There is no deep meaning behind these magic numbers
% used as factors; they just match (closely enough) what Knuth defined.
%
\def\lineskipfactor{.08333}
\def\strutheightpercent{.70833}
\def\strutdepthpercent {.29167}
%
\def\setleading#1{%
  \normalbaselineskip = #1\relax
  \normallineskip = \lineskipfactor\normalbaselineskip
  \normalbaselines
  \setbox\strutbox =\hbox{%
    \vrule width0pt height\strutheightpercent\baselineskip
                    depth \strutdepthpercent \baselineskip
  }%
}


% Set the font macro #1 to the font named #2, adding on the
% specified font prefix (normally `cm').
% #3 is the font's design size, #4 is a scale factor
\def\setfont#1#2#3#4{\font#1=\fontprefix#2#3 scaled #4}


% Use cm as the default font prefix.
% To specify the font prefix, you must define \fontprefix
% before you read in texinfo.tex.
\ifx\fontprefix\undefined
\def\fontprefix{cm}
\fi
% Support font families that don't use the same naming scheme as CM.
\def\rmshape{r}
\def\rmbshape{bx}               %where the normal face is bold
\def\bfshape{b}
\def\bxshape{bx}
\def\ttshape{tt}
\def\ttbshape{tt}
\def\ttslshape{sltt}
\def\itshape{ti}
\def\itbshape{bxti}
\def\slshape{sl}
\def\slbshape{bxsl}
\def\sfshape{ss}
\def\sfbshape{ss}
\def\scshape{csc}
\def\scbshape{csc}

% Definitions for a main text size of 11pt.  This is the default in
% Texinfo.
% 
\def\definetextfontsizexi{
% Text fonts (11.2pt, magstep1).
\def\textnominalsize{11pt}
\edef\mainmagstep{\magstephalf}
\setfont\textrm\rmshape{10}{\mainmagstep}
\setfont\texttt\ttshape{10}{\mainmagstep}
\setfont\textbf\bfshape{10}{\mainmagstep}
\setfont\textit\itshape{10}{\mainmagstep}
\setfont\textsl\slshape{10}{\mainmagstep}
\setfont\textsf\sfshape{10}{\mainmagstep}
\setfont\textsc\scshape{10}{\mainmagstep}
\setfont\textttsl\ttslshape{10}{\mainmagstep}
\font\texti=cmmi10 scaled \mainmagstep
\font\textsy=cmsy10 scaled \mainmagstep

% A few fonts for @defun names and args.
\setfont\defbf\bfshape{10}{\magstep1}
\setfont\deftt\ttshape{10}{\magstep1}
\setfont\defttsl\ttslshape{10}{\magstep1}
\def\df{\let\tentt=\deftt \let\tenbf = \defbf \let\tenttsl=\defttsl \bf}

% Fonts for indices, footnotes, small examples (9pt).
\def\smallnominalsize{9pt}
\setfont\smallrm\rmshape{9}{1000}
\setfont\smalltt\ttshape{9}{1000}
\setfont\smallbf\bfshape{10}{900}
\setfont\smallit\itshape{9}{1000}
\setfont\smallsl\slshape{9}{1000}
\setfont\smallsf\sfshape{9}{1000}
\setfont\smallsc\scshape{10}{900}
\setfont\smallttsl\ttslshape{10}{900}
\font\smalli=cmmi9
\font\smallsy=cmsy9

% Fonts for small examples (8pt).
\def\smallernominalsize{8pt}
\setfont\smallerrm\rmshape{8}{1000}
\setfont\smallertt\ttshape{8}{1000}
\setfont\smallerbf\bfshape{10}{800}
\setfont\smallerit\itshape{8}{1000}
\setfont\smallersl\slshape{8}{1000}
\setfont\smallersf\sfshape{8}{1000}
\setfont\smallersc\scshape{10}{800}
\setfont\smallerttsl\ttslshape{10}{800}
\font\smalleri=cmmi8
\font\smallersy=cmsy8

% Fonts for title page (20.4pt):
\def\titlenominalsize{20pt}
\setfont\titlerm\rmbshape{12}{\magstep3}
\setfont\titleit\itbshape{10}{\magstep4}
\setfont\titlesl\slbshape{10}{\magstep4}
\setfont\titlett\ttbshape{12}{\magstep3}
\setfont\titlettsl\ttslshape{10}{\magstep4}
\setfont\titlesf\sfbshape{17}{\magstep1}
\let\titlebf=\titlerm
\setfont\titlesc\scbshape{10}{\magstep4}
\font\titlei=cmmi12 scaled \magstep3
\font\titlesy=cmsy10 scaled \magstep4
\def\authorrm{\secrm}
\def\authortt{\sectt}

% Chapter (and unnumbered) fonts (17.28pt).
\def\chapnominalsize{17pt}
\setfont\chaprm\rmbshape{12}{\magstep2}
\setfont\chapit\itbshape{10}{\magstep3}
\setfont\chapsl\slbshape{10}{\magstep3}
\setfont\chaptt\ttbshape{12}{\magstep2}
\setfont\chapttsl\ttslshape{10}{\magstep3}
\setfont\chapsf\sfbshape{17}{1000}
\let\chapbf=\chaprm
\setfont\chapsc\scbshape{10}{\magstep3}
\font\chapi=cmmi12 scaled \magstep2
\font\chapsy=cmsy10 scaled \magstep3

% Section fonts (14.4pt).
\def\secnominalsize{14pt}
\setfont\secrm\rmbshape{12}{\magstep1}
\setfont\secit\itbshape{10}{\magstep2}
\setfont\secsl\slbshape{10}{\magstep2}
\setfont\sectt\ttbshape{12}{\magstep1}
\setfont\secttsl\ttslshape{10}{\magstep2}
\setfont\secsf\sfbshape{12}{\magstep1}
\let\secbf\secrm
\setfont\secsc\scbshape{10}{\magstep2}
\font\seci=cmmi12 scaled \magstep1
\font\secsy=cmsy10 scaled \magstep2

% Subsection fonts (13.15pt).
\def\ssecnominalsize{13pt}
\setfont\ssecrm\rmbshape{12}{\magstephalf}
\setfont\ssecit\itbshape{10}{1315}
\setfont\ssecsl\slbshape{10}{1315}
\setfont\ssectt\ttbshape{12}{\magstephalf}
\setfont\ssecttsl\ttslshape{10}{1315}
\setfont\ssecsf\sfbshape{12}{\magstephalf}
\let\ssecbf\ssecrm
\setfont\ssecsc\scbshape{10}{1315}
\font\sseci=cmmi12 scaled \magstephalf
\font\ssecsy=cmsy10 scaled 1315

% Reduced fonts for @acro in text (10pt).
\def\reducednominalsize{10pt}
\setfont\reducedrm\rmshape{10}{1000}
\setfont\reducedtt\ttshape{10}{1000}
\setfont\reducedbf\bfshape{10}{1000}
\setfont\reducedit\itshape{10}{1000}
\setfont\reducedsl\slshape{10}{1000}
\setfont\reducedsf\sfshape{10}{1000}
\setfont\reducedsc\scshape{10}{1000}
\setfont\reducedttsl\ttslshape{10}{1000}
\font\reducedi=cmmi10
\font\reducedsy=cmsy10

% reset the current fonts
\textfonts
\rm
} % end of 11pt text font size definitions


% Definitions to make the main text be 10pt Computer Modern, with
% section, chapter, etc., sizes following suit.  This is for the GNU
% Press printing of the Emacs 22 manual.  Maybe other manuals in the
% future.  Used with @smallbook, which sets the leading to 12pt.
% 
\def\definetextfontsizex{%
% Text fonts (10pt).
\def\textnominalsize{10pt}
\edef\mainmagstep{1000}
\setfont\textrm\rmshape{10}{\mainmagstep}
\setfont\texttt\ttshape{10}{\mainmagstep}
\setfont\textbf\bfshape{10}{\mainmagstep}
\setfont\textit\itshape{10}{\mainmagstep}
\setfont\textsl\slshape{10}{\mainmagstep}
\setfont\textsf\sfshape{10}{\mainmagstep}
\setfont\textsc\scshape{10}{\mainmagstep}
\setfont\textttsl\ttslshape{10}{\mainmagstep}
\font\texti=cmmi10 scaled \mainmagstep
\font\textsy=cmsy10 scaled \mainmagstep

% A few fonts for @defun names and args.
\setfont\defbf\bfshape{10}{\magstephalf}
\setfont\deftt\ttshape{10}{\magstephalf}
\setfont\defttsl\ttslshape{10}{\magstephalf}
\def\df{\let\tentt=\deftt \let\tenbf = \defbf \let\tenttsl=\defttsl \bf}

% Fonts for indices, footnotes, small examples (9pt).
\def\smallnominalsize{9pt}
\setfont\smallrm\rmshape{9}{1000}
\setfont\smalltt\ttshape{9}{1000}
\setfont\smallbf\bfshape{10}{900}
\setfont\smallit\itshape{9}{1000}
\setfont\smallsl\slshape{9}{1000}
\setfont\smallsf\sfshape{9}{1000}
\setfont\smallsc\scshape{10}{900}
\setfont\smallttsl\ttslshape{10}{900}
\font\smalli=cmmi9
\font\smallsy=cmsy9

% Fonts for small examples (8pt).
\def\smallernominalsize{8pt}
\setfont\smallerrm\rmshape{8}{1000}
\setfont\smallertt\ttshape{8}{1000}
\setfont\smallerbf\bfshape{10}{800}
\setfont\smallerit\itshape{8}{1000}
\setfont\smallersl\slshape{8}{1000}
\setfont\smallersf\sfshape{8}{1000}
\setfont\smallersc\scshape{10}{800}
\setfont\smallerttsl\ttslshape{10}{800}
\font\smalleri=cmmi8
\font\smallersy=cmsy8

% Fonts for title page (20.4pt):
\def\titlenominalsize{20pt}
\setfont\titlerm\rmbshape{12}{\magstep3}
\setfont\titleit\itbshape{10}{\magstep4}
\setfont\titlesl\slbshape{10}{\magstep4}
\setfont\titlett\ttbshape{12}{\magstep3}
\setfont\titlettsl\ttslshape{10}{\magstep4}
\setfont\titlesf\sfbshape{17}{\magstep1}
\let\titlebf=\titlerm
\setfont\titlesc\scbshape{10}{\magstep4}
\font\titlei=cmmi12 scaled \magstep3
\font\titlesy=cmsy10 scaled \magstep4
\def\authorrm{\secrm}
\def\authortt{\sectt}

% Chapter fonts (14.4pt).
\def\chapnominalsize{14pt}
\setfont\chaprm\rmbshape{12}{\magstep1}
\setfont\chapit\itbshape{10}{\magstep2}
\setfont\chapsl\slbshape{10}{\magstep2}
\setfont\chaptt\ttbshape{12}{\magstep1}
\setfont\chapttsl\ttslshape{10}{\magstep2}
\setfont\chapsf\sfbshape{12}{\magstep1}
\let\chapbf\chaprm
\setfont\chapsc\scbshape{10}{\magstep2}
\font\chapi=cmmi12 scaled \magstep1
\font\chapsy=cmsy10 scaled \magstep2

% Section fonts (12pt).
\def\secnominalsize{12pt}
\setfont\secrm\rmbshape{12}{1000}
\setfont\secit\itbshape{10}{\magstep1}
\setfont\secsl\slbshape{10}{\magstep1}
\setfont\sectt\ttbshape{12}{1000}
\setfont\secttsl\ttslshape{10}{\magstep1}
\setfont\secsf\sfbshape{12}{1000}
\let\secbf\secrm
\setfont\secsc\scbshape{10}{\magstep1}
\font\seci=cmmi12 
\font\secsy=cmsy10 scaled \magstep1

% Subsection fonts (10pt).
\def\ssecnominalsize{10pt}
\setfont\ssecrm\rmbshape{10}{1000}
\setfont\ssecit\itbshape{10}{1000}
\setfont\ssecsl\slbshape{10}{1000}
\setfont\ssectt\ttbshape{10}{1000}
\setfont\ssecttsl\ttslshape{10}{1000}
\setfont\ssecsf\sfbshape{10}{1000}
\let\ssecbf\ssecrm
\setfont\ssecsc\scbshape{10}{1000}
\font\sseci=cmmi10
\font\ssecsy=cmsy10

% Reduced fonts for @acro in text (9pt).
\def\reducednominalsize{9pt}
\setfont\reducedrm\rmshape{9}{1000}
\setfont\reducedtt\ttshape{9}{1000}
\setfont\reducedbf\bfshape{10}{900}
\setfont\reducedit\itshape{9}{1000}
\setfont\reducedsl\slshape{9}{1000}
\setfont\reducedsf\sfshape{9}{1000}
\setfont\reducedsc\scshape{10}{900}
\setfont\reducedttsl\ttslshape{10}{900}
\font\reducedi=cmmi9
\font\reducedsy=cmsy9

% reduce space between paragraphs
\divide\parskip by 2

% reset the current fonts
\textfonts
\rm
} % end of 10pt text font size definitions


% We provide the user-level command
%   @fonttextsize 10
% (or 11) to redefine the text font size.  pt is assumed.
% 
\def\xword{10}
\def\xiword{11}
%
\parseargdef\fonttextsize{%
  \def\textsizearg{#1}%
  \wlog{doing @fonttextsize \textsizearg}%
  %
  % Set \globaldefs so that documents can use this inside @tex, since
  % makeinfo 4.8 does not support it, but we need it nonetheless.
  % 
 \begingroup \globaldefs=1
  \ifx\textsizearg\xword \definetextfontsizex
  \else \ifx\textsizearg\xiword \definetextfontsizexi
  \else
    \errhelp=\EMsimple
    \errmessage{@fonttextsize only supports `10' or `11', not `\textsizearg'}
  \fi\fi
 \endgroup
}


% In order for the font changes to affect most math symbols and letters,
% we have to define the \textfont of the standard families.  Since
% texinfo doesn't allow for producing subscripts and superscripts except
% in the main text, we don't bother to reset \scriptfont and
% \scriptscriptfont (which would also require loading a lot more fonts).
%
\def\resetmathfonts{%
  \textfont0=\tenrm \textfont1=\teni \textfont2=\tensy
  \textfont\itfam=\tenit \textfont\slfam=\tensl \textfont\bffam=\tenbf
  \textfont\ttfam=\tentt \textfont\sffam=\tensf
}

% The font-changing commands redefine the meanings of \tenSTYLE, instead
% of just \STYLE.  We do this because \STYLE needs to also set the
% current \fam for math mode.  Our \STYLE (e.g., \rm) commands hardwire
% \tenSTYLE to set the current font.
%
% Each font-changing command also sets the names \lsize (one size lower)
% and \lllsize (three sizes lower).  These relative commands are used in
% the LaTeX logo and acronyms.
%
% This all needs generalizing, badly.
%
\def\textfonts{%
  \let\tenrm=\textrm \let\tenit=\textit \let\tensl=\textsl
  \let\tenbf=\textbf \let\tentt=\texttt \let\smallcaps=\textsc
  \let\tensf=\textsf \let\teni=\texti \let\tensy=\textsy
  \let\tenttsl=\textttsl
  \def\curfontsize{text}%
  \def\lsize{reduced}\def\lllsize{smaller}%
  \resetmathfonts \setleading{\textleading}}
\def\titlefonts{%
  \let\tenrm=\titlerm \let\tenit=\titleit \let\tensl=\titlesl
  \let\tenbf=\titlebf \let\tentt=\titlett \let\smallcaps=\titlesc
  \let\tensf=\titlesf \let\teni=\titlei \let\tensy=\titlesy
  \let\tenttsl=\titlettsl
  \def\curfontsize{title}%
  \def\lsize{chap}\def\lllsize{subsec}%
  \resetmathfonts \setleading{25pt}}
\def\titlefont#1{{\titlefonts\rm #1}}
\def\chapfonts{%
  \let\tenrm=\chaprm \let\tenit=\chapit \let\tensl=\chapsl
  \let\tenbf=\chapbf \let\tentt=\chaptt \let\smallcaps=\chapsc
  \let\tensf=\chapsf \let\teni=\chapi \let\tensy=\chapsy
  \let\tenttsl=\chapttsl
  \def\curfontsize{chap}%
  \def\lsize{sec}\def\lllsize{text}%
  \resetmathfonts \setleading{19pt}}
\def\secfonts{%
  \let\tenrm=\secrm \let\tenit=\secit \let\tensl=\secsl
  \let\tenbf=\secbf \let\tentt=\sectt \let\smallcaps=\secsc
  \let\tensf=\secsf \let\teni=\seci \let\tensy=\secsy
  \let\tenttsl=\secttsl
  \def\curfontsize{sec}%
  \def\lsize{subsec}\def\lllsize{reduced}%
  \resetmathfonts \setleading{16pt}}
\def\subsecfonts{%
  \let\tenrm=\ssecrm \let\tenit=\ssecit \let\tensl=\ssecsl
  \let\tenbf=\ssecbf \let\tentt=\ssectt \let\smallcaps=\ssecsc
  \let\tensf=\ssecsf \let\teni=\sseci \let\tensy=\ssecsy
  \let\tenttsl=\ssecttsl
  \def\curfontsize{ssec}%
  \def\lsize{text}\def\lllsize{small}%
  \resetmathfonts \setleading{15pt}}
\let\subsubsecfonts = \subsecfonts
\def\reducedfonts{%
  \let\tenrm=\reducedrm \let\tenit=\reducedit \let\tensl=\reducedsl
  \let\tenbf=\reducedbf \let\tentt=\reducedtt \let\reducedcaps=\reducedsc
  \let\tensf=\reducedsf \let\teni=\reducedi \let\tensy=\reducedsy
  \let\tenttsl=\reducedttsl
  \def\curfontsize{reduced}%
  \def\lsize{small}\def\lllsize{smaller}%
  \resetmathfonts \setleading{10.5pt}}
\def\smallfonts{%
  \let\tenrm=\smallrm \let\tenit=\smallit \let\tensl=\smallsl
  \let\tenbf=\smallbf \let\tentt=\smalltt \let\smallcaps=\smallsc
  \let\tensf=\smallsf \let\teni=\smalli \let\tensy=\smallsy
  \let\tenttsl=\smallttsl
  \def\curfontsize{small}%
  \def\lsize{smaller}\def\lllsize{smaller}%
  \resetmathfonts \setleading{10.5pt}}
\def\smallerfonts{%
  \let\tenrm=\smallerrm \let\tenit=\smallerit \let\tensl=\smallersl
  \let\tenbf=\smallerbf \let\tentt=\smallertt \let\smallcaps=\smallersc
  \let\tensf=\smallersf \let\teni=\smalleri \let\tensy=\smallersy
  \let\tenttsl=\smallerttsl
  \def\curfontsize{smaller}%
  \def\lsize{smaller}\def\lllsize{smaller}%
  \resetmathfonts \setleading{9.5pt}}

% Set the fonts to use with the @small... environments.
\let\smallexamplefonts = \smallfonts

% About \smallexamplefonts.  If we use \smallfonts (9pt), @smallexample
% can fit this many characters:
%   8.5x11=86   smallbook=72  a4=90  a5=69
% If we use \scriptfonts (8pt), then we can fit this many characters:
%   8.5x11=90+  smallbook=80  a4=90+  a5=77
% For me, subjectively, the few extra characters that fit aren't worth
% the additional smallness of 8pt.  So I'm making the default 9pt.
%
% By the way, for comparison, here's what fits with @example (10pt):
%   8.5x11=71  smallbook=60  a4=75  a5=58
%
% I wish the USA used A4 paper.
% --karl, 24jan03.


% Set up the default fonts, so we can use them for creating boxes.
%
\definetextfontsizexi

% Define these so they can be easily changed for other fonts.
\def\angleleft{$\langle$}
\def\angleright{$\rangle$}

% Count depth in font-changes, for error checks
\newcount\fontdepth \fontdepth=0

% Fonts for short table of contents.
\setfont\shortcontrm\rmshape{12}{1000}
\setfont\shortcontbf\bfshape{10}{\magstep1}  % no cmb12
\setfont\shortcontsl\slshape{12}{1000}
\setfont\shortconttt\ttshape{12}{1000}

%% Add scribe-like font environments, plus @l for inline lisp (usually sans
%% serif) and @ii for TeX italic

% \smartitalic{ARG} outputs arg in italics, followed by an italic correction
% unless the following character is such as not to need one.
\def\smartitalicx{\ifx\next,\else\ifx\next-\else\ifx\next.\else
                    \ptexslash\fi\fi\fi}
\def\smartslanted#1{{\ifusingtt\ttsl\sl #1}\futurelet\next\smartitalicx}
\def\smartitalic#1{{\ifusingtt\ttsl\it #1}\futurelet\next\smartitalicx}

% like \smartslanted except unconditionally uses \ttsl.
% @var is set to this for defun arguments.
\def\ttslanted#1{{\ttsl #1}\futurelet\next\smartitalicx}

% like \smartslanted except unconditionally use \sl.  We never want
% ttsl for book titles, do we?
\def\cite#1{{\sl #1}\futurelet\next\smartitalicx}

\let\i=\smartitalic
\let\slanted=\smartslanted
\let\var=\smartslanted
\let\dfn=\smartslanted
\let\emph=\smartitalic

% @b, explicit bold.
\def\b#1{{\bf #1}}
\let\strong=\b

% @sansserif, explicit sans.
\def\sansserif#1{{\sf #1}}

% We can't just use \exhyphenpenalty, because that only has effect at
% the end of a paragraph.  Restore normal hyphenation at the end of the
% group within which \nohyphenation is presumably called.
%
\def\nohyphenation{\hyphenchar\font = -1  \aftergroup\restorehyphenation}
\def\restorehyphenation{\hyphenchar\font = `- }

% Set sfcode to normal for the chars that usually have another value.
% Can't use plain's \frenchspacing because it uses the `\x notation, and
% sometimes \x has an active definition that messes things up.
%
\catcode`@=11
  \def\plainfrenchspacing{%
    \sfcode\dotChar  =\@m \sfcode\questChar=\@m \sfcode\exclamChar=\@m
    \sfcode\colonChar=\@m \sfcode\semiChar =\@m \sfcode\commaChar =\@m
    \def\endofsentencespacefactor{1000}% for @. and friends
  }
  \def\plainnonfrenchspacing{%
    \sfcode`\.3000\sfcode`\?3000\sfcode`\!3000
    \sfcode`\:2000\sfcode`\;1500\sfcode`\,1250
    \def\endofsentencespacefactor{3000}% for @. and friends
  }
\catcode`@=\other
\def\endofsentencespacefactor{3000}% default

\def\t#1{%
  {\tt \rawbackslash \plainfrenchspacing #1}%
  \null
}
\def\samp#1{`\tclose{#1}'\null}
\setfont\keyrm\rmshape{8}{1000}
\font\keysy=cmsy9
\def\key#1{{\keyrm\textfont2=\keysy \leavevmode\hbox{%
  \raise0.4pt\hbox{\angleleft}\kern-.08em\vtop{%
    \vbox{\hrule\kern-0.4pt
     \hbox{\raise0.4pt\hbox{\vphantom{\angleleft}}#1}}%
    \kern-0.4pt\hrule}%
  \kern-.06em\raise0.4pt\hbox{\angleright}}}}
% The old definition, with no lozenge:
%\def\key #1{{\ttsl \nohyphenation \uppercase{#1}}\null}
\def\ctrl #1{{\tt \rawbackslash \hat}#1}

% @file, @option are the same as @samp.
\let\file=\samp
\let\option=\samp

% @code is a modification of @t,
% which makes spaces the same size as normal in the surrounding text.
\def\tclose#1{%
  {%
    % Change normal interword space to be same as for the current font.
    \spaceskip = \fontdimen2\font
    %
    % Switch to typewriter.
    \tt
    %
    % But `\ ' produces the large typewriter interword space.
    \def\ {{\spaceskip = 0pt{} }}%
    %
    % Turn off hyphenation.
    \nohyphenation
    %
    \rawbackslash
    \plainfrenchspacing
    #1%
  }%
  \null
}

% We *must* turn on hyphenation at `-' and `_' in @code.
% Otherwise, it is too hard to avoid overfull hboxes
% in the Emacs manual, the Library manual, etc.

% Unfortunately, TeX uses one parameter (\hyphenchar) to control
% both hyphenation at - and hyphenation within words.
% We must therefore turn them both off (\tclose does that)
% and arrange explicitly to hyphenate at a dash.
%  -- rms.
{
  \catcode`\-=\active \catcode`\_=\active
  \catcode`\'=\active \catcode`\`=\active
  %
  \global\def\code{\begingroup
    \catcode\rquoteChar=\active \catcode\lquoteChar=\active
    \let'\codequoteright \let`\codequoteleft
    %
    \catcode\dashChar=\active  \catcode\underChar=\active
    \ifallowcodebreaks
     \let-\codedash
     \let_\codeunder
    \else
     \let-\realdash
     \let_\realunder
    \fi
    \codex
  }
}

\def\realdash{-}
\def\codedash{-\discretionary{}{}{}}
\def\codeunder{%
  % this is all so @math{@code{var_name}+1} can work.  In math mode, _
  % is "active" (mathcode"8000) and \normalunderscore (or \char95, etc.)
  % will therefore expand the active definition of _, which is us
  % (inside @code that is), therefore an endless loop.
  \ifusingtt{\ifmmode
               \mathchar"075F % class 0=ordinary, family 7=ttfam, pos 0x5F=_.
             \else\normalunderscore \fi
             \discretionary{}{}{}}%
            {\_}%
}
\def\codex #1{\tclose{#1}\endgroup}

% An additional complication: the above will allow breaks after, e.g.,
% each of the four underscores in __typeof__.  This is undesirable in
% some manuals, especially if they don't have long identifiers in
% general.  @allowcodebreaks provides a way to control this.
% 
\newif\ifallowcodebreaks  \allowcodebreakstrue

\def\keywordtrue{true}
\def\keywordfalse{false}

\parseargdef\allowcodebreaks{%
  \def\txiarg{#1}%
  \ifx\txiarg\keywordtrue
    \allowcodebreakstrue
  \else\ifx\txiarg\keywordfalse
    \allowcodebreaksfalse
  \else
    \errhelp = \EMsimple
    \errmessage{Unknown @allowcodebreaks option `\txiarg'}%
  \fi\fi
}

% @kbd is like @code, except that if the argument is just one @key command,
% then @kbd has no effect.

% @kbdinputstyle -- arg is `distinct' (@kbd uses slanted tty font always),
%   `example' (@kbd uses ttsl only inside of @example and friends),
%   or `code' (@kbd uses normal tty font always).
\parseargdef\kbdinputstyle{%
  \def\txiarg{#1}%
  \ifx\txiarg\worddistinct
    \gdef\kbdexamplefont{\ttsl}\gdef\kbdfont{\ttsl}%
  \else\ifx\txiarg\wordexample
    \gdef\kbdexamplefont{\ttsl}\gdef\kbdfont{\tt}%
  \else\ifx\txiarg\wordcode
    \gdef\kbdexamplefont{\tt}\gdef\kbdfont{\tt}%
  \else
    \errhelp = \EMsimple
    \errmessage{Unknown @kbdinputstyle option `\txiarg'}%
  \fi\fi\fi
}
\def\worddistinct{distinct}
\def\wordexample{example}
\def\wordcode{code}

% Default is `distinct.'
\kbdinputstyle distinct

\def\xkey{\key}
\def\kbdfoo#1#2#3\par{\def\one{#1}\def\three{#3}\def\threex{??}%
\ifx\one\xkey\ifx\threex\three \key{#2}%
\else{\tclose{\kbdfont\look}}\fi
\else{\tclose{\kbdfont\look}}\fi}

% For @indicateurl, @env, @command quotes seem unnecessary, so use \code.
\let\indicateurl=\code
\let\env=\code
\let\command=\code

% @uref (abbreviation for `urlref') takes an optional (comma-separated)
% second argument specifying the text to display and an optional third
% arg as text to display instead of (rather than in addition to) the url
% itself.  First (mandatory) arg is the url.  Perhaps eventually put in
% a hypertex \special here.
%
\def\uref#1{\douref #1,,,\finish}
\def\douref#1,#2,#3,#4\finish{\begingroup
  \unsepspaces
  \pdfurl{#1}%
  \setbox0 = \hbox{\ignorespaces #3}%
  \ifdim\wd0 > 0pt
    \unhbox0 % third arg given, show only that
  \else
    \setbox0 = \hbox{\ignorespaces #2}%
    \ifdim\wd0 > 0pt
      \ifpdf
        \unhbox0             % PDF: 2nd arg given, show only it
      \else
        \unhbox0\ (\code{#1})% DVI: 2nd arg given, show both it and url
      \fi
    \else
      \code{#1}% only url given, so show it
    \fi
  \fi
  \endlink
\endgroup}

% @url synonym for @uref, since that's how everyone uses it.
%
\let\url=\uref

% rms does not like angle brackets --karl, 17may97.
% So now @email is just like @uref, unless we are pdf.
%
%\def\email#1{\angleleft{\tt #1}\angleright}
\ifpdf
  \def\email#1{\doemail#1,,\finish}
  \def\doemail#1,#2,#3\finish{\begingroup
    \unsepspaces
    \pdfurl{mailto:#1}%
    \setbox0 = \hbox{\ignorespaces #2}%
    \ifdim\wd0>0pt\unhbox0\else\code{#1}\fi
    \endlink
  \endgroup}
\else
  \let\email=\uref
\fi

% Check if we are currently using a typewriter font.  Since all the
% Computer Modern typewriter fonts have zero interword stretch (and
% shrink), and it is reasonable to expect all typewriter fonts to have
% this property, we can check that font parameter.
%
\def\ifmonospace{\ifdim\fontdimen3\font=0pt }

% Typeset a dimension, e.g., `in' or `pt'.  The only reason for the
% argument is to make the input look right: @dmn{pt} instead of @dmn{}pt.
%
\def\dmn#1{\thinspace #1}

\def\kbd#1{\def\look{#1}\expandafter\kbdfoo\look??\par}

% @l was never documented to mean ``switch to the Lisp font'',
% and it is not used as such in any manual I can find.  We need it for
% Polish suppressed-l.  --karl, 22sep96.
%\def\l#1{{\li #1}\null}

% Explicit font changes: @r, @sc, undocumented @ii.
\def\r#1{{\rm #1}}              % roman font
\def\sc#1{{\smallcaps#1}}       % smallcaps font
\def\ii#1{{\it #1}}             % italic font

% @acronym for "FBI", "NATO", and the like.
% We print this one point size smaller, since it's intended for
% all-uppercase.
% 
\def\acronym#1{\doacronym #1,,\finish}
\def\doacronym#1,#2,#3\finish{%
  {\selectfonts\lsize #1}%
  \def\temp{#2}%
  \ifx\temp\empty \else
    \space ({\unsepspaces \ignorespaces \temp \unskip})%
  \fi
}

% @abbr for "Comput. J." and the like.
% No font change, but don't do end-of-sentence spacing.
% 
\def\abbr#1{\doabbr #1,,\finish}
\def\doabbr#1,#2,#3\finish{%
  {\plainfrenchspacing #1}%
  \def\temp{#2}%
  \ifx\temp\empty \else
    \space ({\unsepspaces \ignorespaces \temp \unskip})%
  \fi
}

% @pounds{} is a sterling sign, which Knuth put in the CM italic font.
%
\def\pounds{{\it\$}}

% @euro{} comes from a separate font, depending on the current style.
% We use the free feym* fonts from the eurosym package by Henrik
% Theiling, which support regular, slanted, bold and bold slanted (and
% "outlined" (blackboard board, sort of) versions, which we don't need).
% It is available from http://www.ctan.org/tex-archive/fonts/eurosym.
% 
% Although only regular is the truly official Euro symbol, we ignore
% that.  The Euro is designed to be slightly taller than the regular
% font height.
% 
% feymr - regular
% feymo - slanted
% feybr - bold
% feybo - bold slanted
% 
% There is no good (free) typewriter version, to my knowledge.
% A feymr10 euro is ~7.3pt wide, while a normal cmtt10 char is ~5.25pt wide.
% Hmm.
% 
% Also doesn't work in math.  Do we need to do math with euro symbols?
% Hope not.
% 
% 
\def\euro{{\eurofont e}}
\def\eurofont{%
  % We set the font at each command, rather than predefining it in
  % \textfonts and the other font-switching commands, so that
  % installations which never need the symbol don't have to have the
  % font installed.
  % 
  % There is only one designed size (nominal 10pt), so we always scale
  % that to the current nominal size.
  % 
  % By the way, simply using "at 1em" works for cmr10 and the like, but
  % does not work for cmbx10 and other extended/shrunken fonts.
  % 
  \def\eurosize{\csname\curfontsize nominalsize\endcsname}%
  %
  \ifx\curfontstyle\bfstylename 
    % bold:
    \font\thiseurofont = \ifusingit{feybo10}{feybr10} at \eurosize
  \else 
    % regular:
    \font\thiseurofont = \ifusingit{feymo10}{feymr10} at \eurosize
  \fi
  \thiseurofont
}

% @registeredsymbol - R in a circle.  The font for the R should really
% be smaller yet, but lllsize is the best we can do for now.
% Adapted from the plain.tex definition of \copyright.
%
\def\registeredsymbol{%
  $^{{\ooalign{\hfil\raise.07ex\hbox{\selectfonts\lllsize R}%
               \hfil\crcr\Orb}}%
    }$%
}

% @textdegree - the normal degrees sign.
%
\def\textdegree{$^\circ$}

% Laurent Siebenmann reports \Orb undefined with:
%  Textures 1.7.7 (preloaded format=plain 93.10.14)  (68K)  16 APR 2004 02:38
% so we'll define it if necessary.
% 
\ifx\Orb\undefined
\def\Orb{\mathhexbox20D}
\fi


\message{page headings,}

\newskip\titlepagetopglue \titlepagetopglue = 1.5in
\newskip\titlepagebottomglue \titlepagebottomglue = 2pc

% First the title page.  Must do @settitle before @titlepage.
\newif\ifseenauthor
\newif\iffinishedtitlepage

% Do an implicit @contents or @shortcontents after @end titlepage if the
% user says @setcontentsaftertitlepage or @setshortcontentsaftertitlepage.
%
\newif\ifsetcontentsaftertitlepage
 \let\setcontentsaftertitlepage = \setcontentsaftertitlepagetrue
\newif\ifsetshortcontentsaftertitlepage
 \let\setshortcontentsaftertitlepage = \setshortcontentsaftertitlepagetrue

\parseargdef\shorttitlepage{\begingroup\hbox{}\vskip 1.5in \chaprm \centerline{#1}%
        \endgroup\page\hbox{}\page}

\envdef\titlepage{%
  % Open one extra group, as we want to close it in the middle of \Etitlepage.
  \begingroup
    \parindent=0pt \textfonts
    % Leave some space at the very top of the page.
    \vglue\titlepagetopglue
    % No rule at page bottom unless we print one at the top with @title.
    \finishedtitlepagetrue
    %
    % Most title ``pages'' are actually two pages long, with space
    % at the top of the second.  We don't want the ragged left on the second.
    \let\oldpage = \page
    \def\page{%
      \iffinishedtitlepage\else
	 \finishtitlepage
      \fi
      \let\page = \oldpage
      \page
      \null
    }%
}

\def\Etitlepage{%
    \iffinishedtitlepage\else
	\finishtitlepage
    \fi
    % It is important to do the page break before ending the group,
    % because the headline and footline are only empty inside the group.
    % If we use the new definition of \page, we always get a blank page
    % after the title page, which we certainly don't want.
    \oldpage
  \endgroup
  %
  % Need this before the \...aftertitlepage checks so that if they are
  % in effect the toc pages will come out with page numbers.
  \HEADINGSon
  %
  % If they want short, they certainly want long too.
  \ifsetshortcontentsaftertitlepage
    \shortcontents
    \contents
    \global\let\shortcontents = \relax
    \global\let\contents = \relax
  \fi
  %
  \ifsetcontentsaftertitlepage
    \contents
    \global\let\contents = \relax
    \global\let\shortcontents = \relax
  \fi
}

\def\finishtitlepage{%
  \vskip4pt \hrule height 2pt width \hsize
  \vskip\titlepagebottomglue
  \finishedtitlepagetrue
}

%%% Macros to be used within @titlepage:

\let\subtitlerm=\tenrm
\def\subtitlefont{\subtitlerm \normalbaselineskip = 13pt \normalbaselines}

\def\authorfont{\authorrm \normalbaselineskip = 16pt \normalbaselines
		\let\tt=\authortt}

\parseargdef\title{%
  \checkenv\titlepage
  \leftline{\titlefonts\rm #1}
  % print a rule at the page bottom also.
  \finishedtitlepagefalse
  \vskip4pt \hrule height 4pt width \hsize \vskip4pt
}

\parseargdef\subtitle{%
  \checkenv\titlepage
  {\subtitlefont \rightline{#1}}%
}

% @author should come last, but may come many times.
% It can also be used inside @quotation.
%
\parseargdef\author{%
  \def\temp{\quotation}%
  \ifx\thisenv\temp
    \def\quotationauthor{#1}% printed in \Equotation.
  \else
    \checkenv\titlepage
    \ifseenauthor\else \vskip 0pt plus 1filll \seenauthortrue \fi
    {\authorfont \leftline{#1}}%
  \fi
}


%%% Set up page headings and footings.

\let\thispage=\folio

\newtoks\evenheadline    % headline on even pages
\newtoks\oddheadline     % headline on odd pages
\newtoks\evenfootline    % footline on even pages
\newtoks\oddfootline     % footline on odd pages

% Now make TeX use those variables
\headline={{\textfonts\rm \ifodd\pageno \the\oddheadline
                            \else \the\evenheadline \fi}}
\footline={{\textfonts\rm \ifodd\pageno \the\oddfootline
                            \else \the\evenfootline \fi}\HEADINGShook}
\let\HEADINGShook=\relax

% Commands to set those variables.
% For example, this is what  @headings on  does
% @evenheading @thistitle|@thispage|@thischapter
% @oddheading @thischapter|@thispage|@thistitle
% @evenfooting @thisfile||
% @oddfooting ||@thisfile


\def\evenheading{\parsearg\evenheadingxxx}
\def\evenheadingxxx #1{\evenheadingyyy #1\|\|\|\|\finish}
\def\evenheadingyyy #1\|#2\|#3\|#4\finish{%
\global\evenheadline={\rlap{\centerline{#2}}\line{#1\hfil#3}}}

\def\oddheading{\parsearg\oddheadingxxx}
\def\oddheadingxxx #1{\oddheadingyyy #1\|\|\|\|\finish}
\def\oddheadingyyy #1\|#2\|#3\|#4\finish{%
\global\oddheadline={\rlap{\centerline{#2}}\line{#1\hfil#3}}}

\parseargdef\everyheading{\oddheadingxxx{#1}\evenheadingxxx{#1}}%

\def\evenfooting{\parsearg\evenfootingxxx}
\def\evenfootingxxx #1{\evenfootingyyy #1\|\|\|\|\finish}
\def\evenfootingyyy #1\|#2\|#3\|#4\finish{%
\global\evenfootline={\rlap{\centerline{#2}}\line{#1\hfil#3}}}

\def\oddfooting{\parsearg\oddfootingxxx}
\def\oddfootingxxx #1{\oddfootingyyy #1\|\|\|\|\finish}
\def\oddfootingyyy #1\|#2\|#3\|#4\finish{%
  \global\oddfootline = {\rlap{\centerline{#2}}\line{#1\hfil#3}}%
  %
  % Leave some space for the footline.  Hopefully ok to assume
  % @evenfooting will not be used by itself.
  \global\advance\pageheight by -12pt
  \global\advance\vsize by -12pt
}

\parseargdef\everyfooting{\oddfootingxxx{#1}\evenfootingxxx{#1}}


% @headings double      turns headings on for double-sided printing.
% @headings single      turns headings on for single-sided printing.
% @headings off         turns them off.
% @headings on          same as @headings double, retained for compatibility.
% @headings after       turns on double-sided headings after this page.
% @headings doubleafter turns on double-sided headings after this page.
% @headings singleafter turns on single-sided headings after this page.
% By default, they are off at the start of a document,
% and turned `on' after @end titlepage.

\def\headings #1 {\csname HEADINGS#1\endcsname}

\def\HEADINGSoff{%
\global\evenheadline={\hfil} \global\evenfootline={\hfil}
\global\oddheadline={\hfil} \global\oddfootline={\hfil}}
\HEADINGSoff
% When we turn headings on, set the page number to 1.
% For double-sided printing, put current file name in lower left corner,
% chapter name on inside top of right hand pages, document
% title on inside top of left hand pages, and page numbers on outside top
% edge of all pages.
\def\HEADINGSdouble{%
\global\pageno=1
\global\evenfootline={\hfil}
\global\oddfootline={\hfil}
\global\evenheadline={\line{\folio\hfil\thistitle}}
\global\oddheadline={\line{\thischapter\hfil\folio}}
\global\let\contentsalignmacro = \chapoddpage
}
\let\contentsalignmacro = \chappager

% For single-sided printing, chapter title goes across top left of page,
% page number on top right.
\def\HEADINGSsingle{%
\global\pageno=1
\global\evenfootline={\hfil}
\global\oddfootline={\hfil}
\global\evenheadline={\line{\thischapter\hfil\folio}}
\global\oddheadline={\line{\thischapter\hfil\folio}}
\global\let\contentsalignmacro = \chappager
}
\def\HEADINGSon{\HEADINGSdouble}

\def\HEADINGSafter{\let\HEADINGShook=\HEADINGSdoublex}
\let\HEADINGSdoubleafter=\HEADINGSafter
\def\HEADINGSdoublex{%
\global\evenfootline={\hfil}
\global\oddfootline={\hfil}
\global\evenheadline={\line{\folio\hfil\thistitle}}
\global\oddheadline={\line{\thischapter\hfil\folio}}
\global\let\contentsalignmacro = \chapoddpage
}

\def\HEADINGSsingleafter{\let\HEADINGShook=\HEADINGSsinglex}
\def\HEADINGSsinglex{%
\global\evenfootline={\hfil}
\global\oddfootline={\hfil}
\global\evenheadline={\line{\thischapter\hfil\folio}}
\global\oddheadline={\line{\thischapter\hfil\folio}}
\global\let\contentsalignmacro = \chappager
}

% Subroutines used in generating headings
% This produces Day Month Year style of output.
% Only define if not already defined, in case a txi-??.tex file has set
% up a different format (e.g., txi-cs.tex does this).
\ifx\today\undefined
\def\today{%
  \number\day\space
  \ifcase\month
  \or\putwordMJan\or\putwordMFeb\or\putwordMMar\or\putwordMApr
  \or\putwordMMay\or\putwordMJun\or\putwordMJul\or\putwordMAug
  \or\putwordMSep\or\putwordMOct\or\putwordMNov\or\putwordMDec
  \fi
  \space\number\year}
\fi

% @settitle line...  specifies the title of the document, for headings.
% It generates no output of its own.
\def\thistitle{\putwordNoTitle}
\def\settitle{\parsearg{\gdef\thistitle}}


\message{tables,}
% Tables -- @table, @ftable, @vtable, @item(x).

% default indentation of table text
\newdimen\tableindent \tableindent=.8in
% default indentation of @itemize and @enumerate text
\newdimen\itemindent  \itemindent=.3in
% margin between end of table item and start of table text.
\newdimen\itemmargin  \itemmargin=.1in

% used internally for \itemindent minus \itemmargin
\newdimen\itemmax

% Note @table, @ftable, and @vtable define @item, @itemx, etc., with
% these defs.
% They also define \itemindex
% to index the item name in whatever manner is desired (perhaps none).

\newif\ifitemxneedsnegativevskip

\def\itemxpar{\par\ifitemxneedsnegativevskip\nobreak\vskip-\parskip\nobreak\fi}

\def\internalBitem{\smallbreak \parsearg\itemzzz}
\def\internalBitemx{\itemxpar \parsearg\itemzzz}

\def\itemzzz #1{\begingroup %
  \advance\hsize by -\rightskip
  \advance\hsize by -\tableindent
  \setbox0=\hbox{\itemindicate{#1}}%
  \itemindex{#1}%
  \nobreak % This prevents a break before @itemx.
  %
  % If the item text does not fit in the space we have, put it on a line
  % by itself, and do not allow a page break either before or after that
  % line.  We do not start a paragraph here because then if the next
  % command is, e.g., @kindex, the whatsit would get put into the
  % horizontal list on a line by itself, resulting in extra blank space.
  \ifdim \wd0>\itemmax
    %
    % Make this a paragraph so we get the \parskip glue and wrapping,
    % but leave it ragged-right.
    \begingroup
      \advance\leftskip by-\tableindent
      \advance\hsize by\tableindent
      \advance\rightskip by0pt plus1fil
      \leavevmode\unhbox0\par
    \endgroup
    %
    % We're going to be starting a paragraph, but we don't want the
    % \parskip glue -- logically it's part of the @item we just started.
    \nobreak \vskip-\parskip
    %
    % Stop a page break at the \parskip glue coming up.  However, if
    % what follows is an environment such as @example, there will be no
    % \parskip glue; then the negative vskip we just inserted would
    % cause the example and the item to crash together.  So we use this
    % bizarre value of 10001 as a signal to \aboveenvbreak to insert
    % \parskip glue after all.  Section titles are handled this way also.
    % 
    \penalty 10001
    \endgroup
    \itemxneedsnegativevskipfalse
  \else
    % The item text fits into the space.  Start a paragraph, so that the
    % following text (if any) will end up on the same line.
    \noindent
    % Do this with kerns and \unhbox so that if there is a footnote in
    % the item text, it can migrate to the main vertical list and
    % eventually be printed.
    \nobreak\kern-\tableindent
    \dimen0 = \itemmax  \advance\dimen0 by \itemmargin \advance\dimen0 by -\wd0
    \unhbox0
    \nobreak\kern\dimen0
    \endgroup
    \itemxneedsnegativevskiptrue
  \fi
}

\def\item{\errmessage{@item while not in a list environment}}
\def\itemx{\errmessage{@itemx while not in a list environment}}

% @table, @ftable, @vtable.
\envdef\table{%
  \let\itemindex\gobble
  \tablecheck{table}%
}
\envdef\ftable{%
  \def\itemindex ##1{\doind {fn}{\code{##1}}}%
  \tablecheck{ftable}%
}
\envdef\vtable{%
  \def\itemindex ##1{\doind {vr}{\code{##1}}}%
  \tablecheck{vtable}%
}
\def\tablecheck#1{%
  \ifnum \the\catcode`\^^M=\active
    \endgroup
    \errmessage{This command won't work in this context; perhaps the problem is
      that we are \inenvironment\thisenv}%
    \def\next{\doignore{#1}}%
  \else
    \let\next\tablex
  \fi
  \next
}
\def\tablex#1{%
  \def\itemindicate{#1}%
  \parsearg\tabley
}
\def\tabley#1{%
  {%
    \makevalueexpandable
    \edef\temp{\noexpand\tablez #1\space\space\space}%
    \expandafter
  }\temp \endtablez
}
\def\tablez #1 #2 #3 #4\endtablez{%
  \aboveenvbreak
  \ifnum 0#1>0 \advance \leftskip by #1\mil \fi
  \ifnum 0#2>0 \tableindent=#2\mil \fi
  \ifnum 0#3>0 \advance \rightskip by #3\mil \fi
  \itemmax=\tableindent
  \advance \itemmax by -\itemmargin
  \advance \leftskip by \tableindent
  \exdentamount=\tableindent
  \parindent = 0pt
  \parskip = \smallskipamount
  \ifdim \parskip=0pt \parskip=2pt \fi
  \let\item = \internalBitem
  \let\itemx = \internalBitemx
}
\def\Etable{\endgraf\afterenvbreak}
\let\Eftable\Etable
\let\Evtable\Etable
\let\Eitemize\Etable
\let\Eenumerate\Etable

% This is the counter used by @enumerate, which is really @itemize

\newcount \itemno

\envdef\itemize{\parsearg\doitemize}

\def\doitemize#1{%
  \aboveenvbreak
  \itemmax=\itemindent
  \advance\itemmax by -\itemmargin
  \advance\leftskip by \itemindent
  \exdentamount=\itemindent
  \parindent=0pt
  \parskip=\smallskipamount
  \ifdim\parskip=0pt \parskip=2pt \fi
  \def\itemcontents{#1}%
  % @itemize with no arg is equivalent to @itemize @bullet.
  \ifx\itemcontents\empty\def\itemcontents{\bullet}\fi
  \let\item=\itemizeitem
}

% Definition of @item while inside @itemize and @enumerate.
%
\def\itemizeitem{%
  \advance\itemno by 1  % for enumerations
  {\let\par=\endgraf \smallbreak}% reasonable place to break
  {%
   % If the document has an @itemize directly after a section title, a
   % \nobreak will be last on the list, and \sectionheading will have
   % done a \vskip-\parskip.  In that case, we don't want to zero
   % parskip, or the item text will crash with the heading.  On the
   % other hand, when there is normal text preceding the item (as there
   % usually is), we do want to zero parskip, or there would be too much
   % space.  In that case, we won't have a \nobreak before.  At least
   % that's the theory.
   \ifnum\lastpenalty<10000 \parskip=0in \fi
   \noindent
   \hbox to 0pt{\hss \itemcontents \kern\itemmargin}%
   \vadjust{\penalty 1200}}% not good to break after first line of item.
  \flushcr
}

% \splitoff TOKENS\endmark defines \first to be the first token in
% TOKENS, and \rest to be the remainder.
%
\def\splitoff#1#2\endmark{\def\first{#1}\def\rest{#2}}%

% Allow an optional argument of an uppercase letter, lowercase letter,
% or number, to specify the first label in the enumerated list.  No
% argument is the same as `1'.
%
\envparseargdef\enumerate{\enumeratey #1  \endenumeratey}
\def\enumeratey #1 #2\endenumeratey{%
  % If we were given no argument, pretend we were given `1'.
  \def\thearg{#1}%
  \ifx\thearg\empty \def\thearg{1}\fi
  %
  % Detect if the argument is a single token.  If so, it might be a
  % letter.  Otherwise, the only valid thing it can be is a number.
  % (We will always have one token, because of the test we just made.
  % This is a good thing, since \splitoff doesn't work given nothing at
  % all -- the first parameter is undelimited.)
  \expandafter\splitoff\thearg\endmark
  \ifx\rest\empty
    % Only one token in the argument.  It could still be anything.
    % A ``lowercase letter'' is one whose \lccode is nonzero.
    % An ``uppercase letter'' is one whose \lccode is both nonzero, and
    %   not equal to itself.
    % Otherwise, we assume it's a number.
    %
    % We need the \relax at the end of the \ifnum lines to stop TeX from
    % continuing to look for a <number>.
    %
    \ifnum\lccode\expandafter`\thearg=0\relax
      \numericenumerate % a number (we hope)
    \else
      % It's a letter.
      \ifnum\lccode\expandafter`\thearg=\expandafter`\thearg\relax
        \lowercaseenumerate % lowercase letter
      \else
        \uppercaseenumerate % uppercase letter
      \fi
    \fi
  \else
    % Multiple tokens in the argument.  We hope it's a number.
    \numericenumerate
  \fi
}

% An @enumerate whose labels are integers.  The starting integer is
% given in \thearg.
%
\def\numericenumerate{%
  \itemno = \thearg
  \startenumeration{\the\itemno}%
}

% The starting (lowercase) letter is in \thearg.
\def\lowercaseenumerate{%
  \itemno = \expandafter`\thearg
  \startenumeration{%
    % Be sure we're not beyond the end of the alphabet.
    \ifnum\itemno=0
      \errmessage{No more lowercase letters in @enumerate; get a bigger
                  alphabet}%
    \fi
    \char\lccode\itemno
  }%
}

% The starting (uppercase) letter is in \thearg.
\def\uppercaseenumerate{%
  \itemno = \expandafter`\thearg
  \startenumeration{%
    % Be sure we're not beyond the end of the alphabet.
    \ifnum\itemno=0
      \errmessage{No more uppercase letters in @enumerate; get a bigger
                  alphabet}
    \fi
    \char\uccode\itemno
  }%
}

% Call \doitemize, adding a period to the first argument and supplying the
% common last two arguments.  Also subtract one from the initial value in
% \itemno, since @item increments \itemno.
%
\def\startenumeration#1{%
  \advance\itemno by -1
  \doitemize{#1.}\flushcr
}

% @alphaenumerate and @capsenumerate are abbreviations for giving an arg
% to @enumerate.
%
\def\alphaenumerate{\enumerate{a}}
\def\capsenumerate{\enumerate{A}}
\def\Ealphaenumerate{\Eenumerate}
\def\Ecapsenumerate{\Eenumerate}


% @multitable macros
% Amy Hendrickson, 8/18/94, 3/6/96
%
% @multitable ... @end multitable will make as many columns as desired.
% Contents of each column will wrap at width given in preamble.  Width
% can be specified either with sample text given in a template line,
% or in percent of \hsize, the current width of text on page.

% Table can continue over pages but will only break between lines.

% To make preamble:
%
% Either define widths of columns in terms of percent of \hsize:
%   @multitable @columnfractions .25 .3 .45
%   @item ...
%
%   Numbers following @columnfractions are the percent of the total
%   current hsize to be used for each column. You may use as many
%   columns as desired.


% Or use a template:
%   @multitable {Column 1 template} {Column 2 template} {Column 3 template}
%   @item ...
%   using the widest term desired in each column.

% Each new table line starts with @item, each subsequent new column
% starts with @tab. Empty columns may be produced by supplying @tab's
% with nothing between them for as many times as empty columns are needed,
% ie, @tab@tab@tab will produce two empty columns.

% @item, @tab do not need to be on their own lines, but it will not hurt
% if they are.

% Sample multitable:

%   @multitable {Column 1 template} {Column 2 template} {Column 3 template}
%   @item first col stuff @tab second col stuff @tab third col
%   @item
%   first col stuff
%   @tab
%   second col stuff
%   @tab
%   third col
%   @item first col stuff @tab second col stuff
%   @tab Many paragraphs of text may be used in any column.
%
%         They will wrap at the width determined by the template.
%   @item@tab@tab This will be in third column.
%   @end multitable

% Default dimensions may be reset by user.
% @multitableparskip is vertical space between paragraphs in table.
% @multitableparindent is paragraph indent in table.
% @multitablecolmargin is horizontal space to be left between columns.
% @multitablelinespace is space to leave between table items, baseline
%                                                            to baseline.
%   0pt means it depends on current normal line spacing.
%
\newskip\multitableparskip
\newskip\multitableparindent
\newdimen\multitablecolspace
\newskip\multitablelinespace
\multitableparskip=0pt
\multitableparindent=6pt
\multitablecolspace=12pt
\multitablelinespace=0pt

% Macros used to set up halign preamble:
%
\let\endsetuptable\relax
\def\xendsetuptable{\endsetuptable}
\let\columnfractions\relax
\def\xcolumnfractions{\columnfractions}
\newif\ifsetpercent

% #1 is the @columnfraction, usually a decimal number like .5, but might
% be just 1.  We just use it, whatever it is.
%
\def\pickupwholefraction#1 {%
  \global\advance\colcount by 1
  \expandafter\xdef\csname col\the\colcount\endcsname{#1\hsize}%
  \setuptable
}

\newcount\colcount
\def\setuptable#1{%
  \def\firstarg{#1}%
  \ifx\firstarg\xendsetuptable
    \let\go = \relax
  \else
    \ifx\firstarg\xcolumnfractions
      \global\setpercenttrue
    \else
      \ifsetpercent
         \let\go\pickupwholefraction
      \else
         \global\advance\colcount by 1
         \setbox0=\hbox{#1\unskip\space}% Add a normal word space as a
                   % separator; typically that is always in the input, anyway.
         \expandafter\xdef\csname col\the\colcount\endcsname{\the\wd0}%
      \fi
    \fi
    \ifx\go\pickupwholefraction
      % Put the argument back for the \pickupwholefraction call, so
      % we'll always have a period there to be parsed.
      \def\go{\pickupwholefraction#1}%
    \else
      \let\go = \setuptable
    \fi%
  \fi
  \go
}

% multitable-only commands.
%
% @headitem starts a heading row, which we typeset in bold.
% Assignments have to be global since we are inside the implicit group
% of an alignment entry.  Note that \everycr resets \everytab.
\def\headitem{\checkenv\multitable \crcr \global\everytab={\bf}\the\everytab}%
%
% A \tab used to include \hskip1sp.  But then the space in a template
% line is not enough.  That is bad.  So let's go back to just `&' until
% we encounter the problem it was intended to solve again.
%					--karl, nathan@acm.org, 20apr99.
\def\tab{\checkenv\multitable &\the\everytab}%

% @multitable ... @end multitable definitions:
%
\newtoks\everytab  % insert after every tab.
%
\envdef\multitable{%
  \vskip\parskip
  \startsavinginserts
  %
  % @item within a multitable starts a normal row.
  % We use \def instead of \let so that if one of the multitable entries
  % contains an @itemize, we don't choke on the \item (seen as \crcr aka
  % \endtemplate) expanding \doitemize.
  \def\item{\crcr}%
  %
  \tolerance=9500
  \hbadness=9500
  \setmultitablespacing
  \parskip=\multitableparskip
  \parindent=\multitableparindent
  \overfullrule=0pt
  \global\colcount=0
  %
  \everycr = {%
    \noalign{%
      \global\everytab={}%
      \global\colcount=0 % Reset the column counter.
      % Check for saved footnotes, etc.
      \checkinserts
      % Keeps underfull box messages off when table breaks over pages.
      %\filbreak
	% Maybe so, but it also creates really weird page breaks when the
	% table breaks over pages. Wouldn't \vfil be better?  Wait until the
	% problem manifests itself, so it can be fixed for real --karl.
    }%
  }%
  %
  \parsearg\domultitable
}
\def\domultitable#1{%
  % To parse everything between @multitable and @item:
  \setuptable#1 \endsetuptable
  %
  % This preamble sets up a generic column definition, which will
  % be used as many times as user calls for columns.
  % \vtop will set a single line and will also let text wrap and
  % continue for many paragraphs if desired.
  \halign\bgroup &%
    \global\advance\colcount by 1
    \multistrut
    \vtop{%
      % Use the current \colcount to find the correct column width:
      \hsize=\expandafter\csname col\the\colcount\endcsname
      %
      % In order to keep entries from bumping into each other
      % we will add a \leftskip of \multitablecolspace to all columns after
      % the first one.
      %
      % If a template has been used, we will add \multitablecolspace
      % to the width of each template entry.
      %
      % If the user has set preamble in terms of percent of \hsize we will
      % use that dimension as the width of the column, and the \leftskip
      % will keep entries from bumping into each other.  Table will start at
      % left margin and final column will justify at right margin.
      %
      % Make sure we don't inherit \rightskip from the outer environment.
      \rightskip=0pt
      \ifnum\colcount=1
	% The first column will be indented with the surrounding text.
	\advance\hsize by\leftskip
      \else
	\ifsetpercent \else
	  % If user has not set preamble in terms of percent of \hsize
	  % we will advance \hsize by \multitablecolspace.
	  \advance\hsize by \multitablecolspace
	\fi
       % In either case we will make \leftskip=\multitablecolspace:
      \leftskip=\multitablecolspace
      \fi
      % Ignoring space at the beginning and end avoids an occasional spurious
      % blank line, when TeX decides to break the line at the space before the
      % box from the multistrut, so the strut ends up on a line by itself.
      % For example:
      % @multitable @columnfractions .11 .89
      % @item @code{#}
      % @tab Legal holiday which is valid in major parts of the whole country.
      % Is automatically provided with highlighting sequences respectively
      % marking characters.
      \noindent\ignorespaces##\unskip\multistrut
    }\cr
}
\def\Emultitable{%
  \crcr
  \egroup % end the \halign
  \global\setpercentfalse
}

\def\setmultitablespacing{%
  \def\multistrut{\strut}% just use the standard line spacing
  %
  % Compute \multitablelinespace (if not defined by user) for use in
  % \multitableparskip calculation.  We used define \multistrut based on
  % this, but (ironically) that caused the spacing to be off.
  % See bug-texinfo report from Werner Lemberg, 31 Oct 2004 12:52:20 +0100.
\ifdim\multitablelinespace=0pt
\setbox0=\vbox{X}\global\multitablelinespace=\the\baselineskip
\global\advance\multitablelinespace by-\ht0
\fi
%% Test to see if parskip is larger than space between lines of
%% table. If not, do nothing.
%%        If so, set to same dimension as multitablelinespace.
\ifdim\multitableparskip>\multitablelinespace
\global\multitableparskip=\multitablelinespace
\global\advance\multitableparskip-7pt %% to keep parskip somewhat smaller
                                      %% than skip between lines in the table.
\fi%
\ifdim\multitableparskip=0pt
\global\multitableparskip=\multitablelinespace
\global\advance\multitableparskip-7pt %% to keep parskip somewhat smaller
                                      %% than skip between lines in the table.
\fi}


\message{conditionals,}

% @iftex, @ifnotdocbook, @ifnothtml, @ifnotinfo, @ifnotplaintext,
% @ifnotxml always succeed.  They currently do nothing; we don't
% attempt to check whether the conditionals are properly nested.  But we
% have to remember that they are conditionals, so that @end doesn't
% attempt to close an environment group.
%
\def\makecond#1{%
  \expandafter\let\csname #1\endcsname = \relax
  \expandafter\let\csname iscond.#1\endcsname = 1
}
\makecond{iftex}
\makecond{ifnotdocbook}
\makecond{ifnothtml}
\makecond{ifnotinfo}
\makecond{ifnotplaintext}
\makecond{ifnotxml}

% Ignore @ignore, @ifhtml, @ifinfo, and the like.
%
\def\direntry{\doignore{direntry}}
\def\documentdescription{\doignore{documentdescription}}
\def\docbook{\doignore{docbook}}
\def\html{\doignore{html}}
\def\ifdocbook{\doignore{ifdocbook}}
\def\ifhtml{\doignore{ifhtml}}
\def\ifinfo{\doignore{ifinfo}}
\def\ifnottex{\doignore{ifnottex}}
\def\ifplaintext{\doignore{ifplaintext}}
\def\ifxml{\doignore{ifxml}}
\def\ignore{\doignore{ignore}}
\def\menu{\doignore{menu}}
\def\xml{\doignore{xml}}

% Ignore text until a line `@end #1', keeping track of nested conditionals.
%
% A count to remember the depth of nesting.
\newcount\doignorecount

\def\doignore#1{\begingroup
  % Scan in ``verbatim'' mode:
  \obeylines
  \catcode`\@ = \other
  \catcode`\{ = \other
  \catcode`\} = \other
  %
  % Make sure that spaces turn into tokens that match what \doignoretext wants.
  \spaceisspace
  %
  % Count number of #1's that we've seen.
  \doignorecount = 0
  %
  % Swallow text until we reach the matching `@end #1'.
  \dodoignore{#1}%
}

{ \catcode`_=11 % We want to use \_STOP_ which cannot appear in texinfo source.
  \obeylines %
  %
  \gdef\dodoignore#1{%
    % #1 contains the command name as a string, e.g., `ifinfo'.
    %
    % Define a command to find the next `@end #1'.
    \long\def\doignoretext##1^^M@end #1{%
      \doignoretextyyy##1^^M@#1\_STOP_}%
    %
    % And this command to find another #1 command, at the beginning of a
    % line.  (Otherwise, we would consider a line `@c @ifset', for
    % example, to count as an @ifset for nesting.)
    \long\def\doignoretextyyy##1^^M@#1##2\_STOP_{\doignoreyyy{##2}\_STOP_}%
    %
    % And now expand that command.
    \doignoretext ^^M%
  }%
}

\def\doignoreyyy#1{%
  \def\temp{#1}%
  \ifx\temp\empty			% Nothing found.
    \let\next\doignoretextzzz
  \else					% Found a nested condition, ...
    \advance\doignorecount by 1
    \let\next\doignoretextyyy		% ..., look for another.
    % If we're here, #1 ends with ^^M\ifinfo (for example).
  \fi
  \next #1% the token \_STOP_ is present just after this macro.
}

% We have to swallow the remaining "\_STOP_".
%
\def\doignoretextzzz#1{%
  \ifnum\doignorecount = 0	% We have just found the outermost @end.
    \let\next\enddoignore
  \else				% Still inside a nested condition.
    \advance\doignorecount by -1
    \let\next\doignoretext      % Look for the next @end.
  \fi
  \next
}

% Finish off ignored text.
{ \obeylines%
  % Ignore anything after the last `@end #1'; this matters in verbatim
  % environments, where otherwise the newline after an ignored conditional
  % would result in a blank line in the output.
  \gdef\enddoignore#1^^M{\endgroup\ignorespaces}%
}


% @set VAR sets the variable VAR to an empty value.
% @set VAR REST-OF-LINE sets VAR to the value REST-OF-LINE.
%
% Since we want to separate VAR from REST-OF-LINE (which might be
% empty), we can't just use \parsearg; we have to insert a space of our
% own to delimit the rest of the line, and then take it out again if we
% didn't need it.
% We rely on the fact that \parsearg sets \catcode`\ =10.
%
\parseargdef\set{\setyyy#1 \endsetyyy}
\def\setyyy#1 #2\endsetyyy{%
  {%
    \makevalueexpandable
    \def\temp{#2}%
    \edef\next{\gdef\makecsname{SET#1}}%
    \ifx\temp\empty
      \next{}%
    \else
      \setzzz#2\endsetzzz
    \fi
  }%
}
% Remove the trailing space \setxxx inserted.
\def\setzzz#1 \endsetzzz{\next{#1}}

% @clear VAR clears (i.e., unsets) the variable VAR.
%
\parseargdef\clear{%
  {%
    \makevalueexpandable
    \global\expandafter\let\csname SET#1\endcsname=\relax
  }%
}

% @value{foo} gets the text saved in variable foo.
\def\value{\begingroup\makevalueexpandable\valuexxx}
\def\valuexxx#1{\expandablevalue{#1}\endgroup}
{
  \catcode`\- = \active \catcode`\_ = \active
  %
  \gdef\makevalueexpandable{%
    \let\value = \expandablevalue
    % We don't want these characters active, ...
    \catcode`\-=\other \catcode`\_=\other
    % ..., but we might end up with active ones in the argument if
    % we're called from @code, as @code{@value{foo-bar_}}, though.
    % So \let them to their normal equivalents.
    \let-\realdash \let_\normalunderscore
  }
}

% We have this subroutine so that we can handle at least some @value's
% properly in indexes (we call \makevalueexpandable in \indexdummies).
% The command has to be fully expandable (if the variable is set), since
% the result winds up in the index file.  This means that if the
% variable's value contains other Texinfo commands, it's almost certain
% it will fail (although perhaps we could fix that with sufficient work
% to do a one-level expansion on the result, instead of complete).
%
\def\expandablevalue#1{%
  \expandafter\ifx\csname SET#1\endcsname\relax
    {[No value for ``#1'']}%
    \message{Variable `#1', used in @value, is not set.}%
  \else
    \csname SET#1\endcsname
  \fi
}

% @ifset VAR ... @end ifset reads the `...' iff VAR has been defined
% with @set.
%
% To get special treatment of `@end ifset,' call \makeond and the redefine.
%
\makecond{ifset}
\def\ifset{\parsearg{\doifset{\let\next=\ifsetfail}}}
\def\doifset#1#2{%
  {%
    \makevalueexpandable
    \let\next=\empty
    \expandafter\ifx\csname SET#2\endcsname\relax
      #1% If not set, redefine \next.
    \fi
    \expandafter
  }\next
}
\def\ifsetfail{\doignore{ifset}}

% @ifclear VAR ... @end ifclear reads the `...' iff VAR has never been
% defined with @set, or has been undefined with @clear.
%
% The `\else' inside the `\doifset' parameter is a trick to reuse the
% above code: if the variable is not set, do nothing, if it is set,
% then redefine \next to \ifclearfail.
%
\makecond{ifclear}
\def\ifclear{\parsearg{\doifset{\else \let\next=\ifclearfail}}}
\def\ifclearfail{\doignore{ifclear}}

% @dircategory CATEGORY  -- specify a category of the dir file
% which this file should belong to.  Ignore this in TeX.
\let\dircategory=\comment

% @defininfoenclose.
\let\definfoenclose=\comment


\message{indexing,}
% Index generation facilities

% Define \newwrite to be identical to plain tex's \newwrite
% except not \outer, so it can be used within macros and \if's.
\edef\newwrite{\makecsname{ptexnewwrite}}

% \newindex {foo} defines an index named foo.
% It automatically defines \fooindex such that
% \fooindex ...rest of line... puts an entry in the index foo.
% It also defines \fooindfile to be the number of the output channel for
% the file that accumulates this index.  The file's extension is foo.
% The name of an index should be no more than 2 characters long
% for the sake of vms.
%
\def\newindex#1{%
  \iflinks
    \expandafter\newwrite \csname#1indfile\endcsname
    \openout \csname#1indfile\endcsname \jobname.#1 % Open the file
  \fi
  \expandafter\xdef\csname#1index\endcsname{%     % Define @#1index
    \noexpand\doindex{#1}}
}

% @defindex foo  ==  \newindex{foo}
%
\def\defindex{\parsearg\newindex}

% Define @defcodeindex, like @defindex except put all entries in @code.
%
\def\defcodeindex{\parsearg\newcodeindex}
%
\def\newcodeindex#1{%
  \iflinks
    \expandafter\newwrite \csname#1indfile\endcsname
    \openout \csname#1indfile\endcsname \jobname.#1
  \fi
  \expandafter\xdef\csname#1index\endcsname{%
    \noexpand\docodeindex{#1}}%
}


% @synindex foo bar    makes index foo feed into index bar.
% Do this instead of @defindex foo if you don't want it as a separate index.
%
% @syncodeindex foo bar   similar, but put all entries made for index foo
% inside @code.
%
\def\synindex#1 #2 {\dosynindex\doindex{#1}{#2}}
\def\syncodeindex#1 #2 {\dosynindex\docodeindex{#1}{#2}}

% #1 is \doindex or \docodeindex, #2 the index getting redefined (foo),
% #3 the target index (bar).
\def\dosynindex#1#2#3{%
  % Only do \closeout if we haven't already done it, else we'll end up
  % closing the target index.
  \expandafter \ifx\csname donesynindex#2\endcsname \undefined
    % The \closeout helps reduce unnecessary open files; the limit on the
    % Acorn RISC OS is a mere 16 files.
    \expandafter\closeout\csname#2indfile\endcsname
    \expandafter\let\csname\donesynindex#2\endcsname = 1
  \fi
  % redefine \fooindfile:
  \expandafter\let\expandafter\temp\expandafter=\csname#3indfile\endcsname
  \expandafter\let\csname#2indfile\endcsname=\temp
  % redefine \fooindex:
  \expandafter\xdef\csname#2index\endcsname{\noexpand#1{#3}}%
}

% Define \doindex, the driver for all \fooindex macros.
% Argument #1 is generated by the calling \fooindex macro,
%  and it is "foo", the name of the index.

% \doindex just uses \parsearg; it calls \doind for the actual work.
% This is because \doind is more useful to call from other macros.

% There is also \dosubind {index}{topic}{subtopic}
% which makes an entry in a two-level index such as the operation index.

\def\doindex#1{\edef\indexname{#1}\parsearg\singleindexer}
\def\singleindexer #1{\doind{\indexname}{#1}}

% like the previous two, but they put @code around the argument.
\def\docodeindex#1{\edef\indexname{#1}\parsearg\singlecodeindexer}
\def\singlecodeindexer #1{\doind{\indexname}{\code{#1}}}

% Take care of Texinfo commands that can appear in an index entry.
% Since there are some commands we want to expand, and others we don't,
% we have to laboriously prevent expansion for those that we don't.
%
\def\indexdummies{%
  \escapechar = `\\     % use backslash in output files.
  \def\@{@}% change to @@ when we switch to @ as escape char in index files.
  \def\ {\realbackslash\space }%
  %
  % Need these in case \tex is in effect and \{ is a \delimiter again.
  % But can't use \lbracecmd and \rbracecmd because texindex assumes
  % braces and backslashes are used only as delimiters.
  \let\{ = \mylbrace
  \let\} = \myrbrace
  %
  % I don't entirely understand this, but when an index entry is
  % generated from a macro call, the \endinput which \scanmacro inserts
  % causes processing to be prematurely terminated.  This is,
  % apparently, because \indexsorttmp is fully expanded, and \endinput
  % is an expandable command.  The redefinition below makes \endinput
  % disappear altogether for that purpose -- although logging shows that
  % processing continues to some further point.  On the other hand, it
  % seems \endinput does not hurt in the printed index arg, since that
  % is still getting written without apparent harm.
  % 
  % Sample source (mac-idx3.tex, reported by Graham Percival to
  % help-texinfo, 22may06):
  % @macro funindex {WORD}
  % @findex xyz
  % @end macro
  % ...
  % @funindex commtest
  % 
  % The above is not enough to reproduce the bug, but it gives the flavor.
  % 
  % Sample whatsit resulting:
  % .@write3{\entry{xyz}{@folio }{@code {xyz@endinput }}}
  % 
  % So:
  \let\endinput = \empty
  %
  % Do the redefinitions.
  \commondummies
}

% For the aux and toc files, @ is the escape character.  So we want to
% redefine everything using @ as the escape character (instead of
% \realbackslash, still used for index files).  When everything uses @,
% this will be simpler.
%
\def\atdummies{%
  \def\@{@@}%
  \def\ {@ }%
  \let\{ = \lbraceatcmd
  \let\} = \rbraceatcmd
  %
  % Do the redefinitions.
  \commondummies
  \otherbackslash
}

% Called from \indexdummies and \atdummies.
%
\def\commondummies{%
  %
  % \definedummyword defines \#1 as \string\#1\space, thus effectively
  % preventing its expansion.  This is used only for control% words,
  % not control letters, because the \space would be incorrect for
  % control characters, but is needed to separate the control word
  % from whatever follows.
  %
  % For control letters, we have \definedummyletter, which omits the
  % space.
  %
  % These can be used both for control words that take an argument and
  % those that do not.  If it is followed by {arg} in the input, then
  % that will dutifully get written to the index (or wherever).
  %
  \def\definedummyword  ##1{\def##1{\string##1\space}}%
  \def\definedummyletter##1{\def##1{\string##1}}%
  \let\definedummyaccent\definedummyletter
  %
  \commondummiesnofonts
  %
  \definedummyletter\_%
  %
  % Non-English letters.
  \definedummyword\AA
  \definedummyword\AE
  \definedummyword\L
  \definedummyword\OE
  \definedummyword\O
  \definedummyword\aa
  \definedummyword\ae
  \definedummyword\l
  \definedummyword\oe
  \definedummyword\o
  \definedummyword\ss
  \definedummyword\exclamdown
  \definedummyword\questiondown
  \definedummyword\ordf
  \definedummyword\ordm
  %
  % Although these internal commands shouldn't show up, sometimes they do.
  \definedummyword\bf
  \definedummyword\gtr
  \definedummyword\hat
  \definedummyword\less
  \definedummyword\sf
  \definedummyword\sl
  \definedummyword\tclose
  \definedummyword\tt
  %
  \definedummyword\LaTeX
  \definedummyword\TeX
  %
  % Assorted special characters.
  \definedummyword\bullet
  \definedummyword\comma
  \definedummyword\copyright
  \definedummyword\registeredsymbol
  \definedummyword\dots
  \definedummyword\enddots
  \definedummyword\equiv
  \definedummyword\error
  \definedummyword\euro
  \definedummyword\expansion
  \definedummyword\minus
  \definedummyword\pounds
  \definedummyword\point
  \definedummyword\print
  \definedummyword\result
  \definedummyword\textdegree
  %
  % We want to disable all macros so that they are not expanded by \write.
  \macrolist
  %
  \normalturnoffactive
  %
  % Handle some cases of @value -- where it does not contain any
  % (non-fully-expandable) commands.
  \makevalueexpandable
}

% \commondummiesnofonts: common to \commondummies and \indexnofonts.
%
\def\commondummiesnofonts{%
  % Control letters and accents.
  \definedummyletter\!%
  \definedummyaccent\"%
  \definedummyaccent\'%
  \definedummyletter\*%
  \definedummyaccent\,%
  \definedummyletter\.%
  \definedummyletter\/%
  \definedummyletter\:%
  \definedummyaccent\=%
  \definedummyletter\?%
  \definedummyaccent\^%
  \definedummyaccent\`%
  \definedummyaccent\~%
  \definedummyword\u
  \definedummyword\v
  \definedummyword\H
  \definedummyword\dotaccent
  \definedummyword\ringaccent
  \definedummyword\tieaccent
  \definedummyword\ubaraccent
  \definedummyword\udotaccent
  \definedummyword\dotless
  %
  % Texinfo font commands.
  \definedummyword\b
  \definedummyword\i
  \definedummyword\r
  \definedummyword\sc
  \definedummyword\t
  %
  % Commands that take arguments.
  \definedummyword\acronym
  \definedummyword\cite
  \definedummyword\code
  \definedummyword\command
  \definedummyword\dfn
  \definedummyword\emph
  \definedummyword\env
  \definedummyword\file
  \definedummyword\kbd
  \definedummyword\key
  \definedummyword\math
  \definedummyword\option
  \definedummyword\pxref
  \definedummyword\ref
  \definedummyword\samp
  \definedummyword\strong
  \definedummyword\tie
  \definedummyword\uref
  \definedummyword\url
  \definedummyword\var
  \definedummyword\verb
  \definedummyword\w
  \definedummyword\xref
}

% \indexnofonts is used when outputting the strings to sort the index
% by, and when constructing control sequence names.  It eliminates all
% control sequences and just writes whatever the best ASCII sort string
% would be for a given command (usually its argument).
%
\def\indexnofonts{%
  % Accent commands should become @asis.
  \def\definedummyaccent##1{\let##1\asis}%
  % We can just ignore other control letters.
  \def\definedummyletter##1{\let##1\empty}%
  % Hopefully, all control words can become @asis.
  \let\definedummyword\definedummyaccent
  %
  \commondummiesnofonts
  %
  % Don't no-op \tt, since it isn't a user-level command
  % and is used in the definitions of the active chars like <, >, |, etc.
  % Likewise with the other plain tex font commands.
  %\let\tt=\asis
  %
  \def\ { }%
  \def\@{@}%
  % how to handle braces?
  \def\_{\normalunderscore}%
  %
  % Non-English letters.
  \def\AA{AA}%
  \def\AE{AE}%
  \def\L{L}%
  \def\OE{OE}%
  \def\O{O}%
  \def\aa{aa}%
  \def\ae{ae}%
  \def\l{l}%
  \def\oe{oe}%
  \def\o{o}%
  \def\ss{ss}%
  \def\exclamdown{!}%
  \def\questiondown{?}%
  \def\ordf{a}%
  \def\ordm{o}%
  %
  \def\LaTeX{LaTeX}%
  \def\TeX{TeX}%
  %
  % Assorted special characters.
  % (The following {} will end up in the sort string, but that's ok.)
  \def\bullet{bullet}%
  \def\comma{,}%
  \def\copyright{copyright}%
  \def\registeredsymbol{R}%
  \def\dots{...}%
  \def\enddots{...}%
  \def\equiv{==}%
  \def\error{error}%
  \def\euro{euro}%
  \def\expansion{==>}%
  \def\minus{-}%
  \def\pounds{pounds}%
  \def\point{.}%
  \def\print{-|}%
  \def\result{=>}%
  \def\textdegree{degrees}%
  %
  % We need to get rid of all macros, leaving only the arguments (if present).
  % Of course this is not nearly correct, but it is the best we can do for now.
  % makeinfo does not expand macros in the argument to @deffn, which ends up
  % writing an index entry, and texindex isn't prepared for an index sort entry
  % that starts with \.
  % 
  % Since macro invocations are followed by braces, we can just redefine them
  % to take a single TeX argument.  The case of a macro invocation that
  % goes to end-of-line is not handled.
  % 
  \macrolist
}

\let\indexbackslash=0  %overridden during \printindex.
\let\SETmarginindex=\relax % put index entries in margin (undocumented)?

% Most index entries go through here, but \dosubind is the general case.
% #1 is the index name, #2 is the entry text.
\def\doind#1#2{\dosubind{#1}{#2}{}}

% Workhorse for all \fooindexes.
% #1 is name of index, #2 is stuff to put there, #3 is subentry --
% empty if called from \doind, as we usually are (the main exception
% is with most defuns, which call us directly).
%
\def\dosubind#1#2#3{%
  \iflinks
  {%
    % Store the main index entry text (including the third arg).
    \toks0 = {#2}%
    % If third arg is present, precede it with a space.
    \def\thirdarg{#3}%
    \ifx\thirdarg\empty \else
      \toks0 = \expandafter{\the\toks0 \space #3}%
    \fi
    %
    \edef\writeto{\csname#1indfile\endcsname}%
    %
    \ifvmode
      \dosubindsanitize
    \else
      \dosubindwrite
    \fi
  }%
  \fi
}

% Write the entry in \toks0 to the index file:
%
\def\dosubindwrite{%
  % Put the index entry in the margin if desired.
  \ifx\SETmarginindex\relax\else
    \insert\margin{\hbox{\vrule height8pt depth3pt width0pt \the\toks0}}%
  \fi
  %
  % Remember, we are within a group.
  \indexdummies % Must do this here, since \bf, etc expand at this stage
  \def\backslashcurfont{\indexbackslash}% \indexbackslash isn't defined now
      % so it will be output as is; and it will print as backslash.
  %
  % Process the index entry with all font commands turned off, to
  % get the string to sort by.
  {\indexnofonts
   \edef\temp{\the\toks0}% need full expansion
   \xdef\indexsorttmp{\temp}%
  }%
  %
  % Set up the complete index entry, with both the sort key and
  % the original text, including any font commands.  We write
  % three arguments to \entry to the .?? file (four in the
  % subentry case), texindex reduces to two when writing the .??s
  % sorted result.
  \edef\temp{%
    \write\writeto{%
      \string\entry{\indexsorttmp}{\noexpand\folio}{\the\toks0}}%
  }%
  \temp
}

% Take care of unwanted page breaks:
%
% If a skip is the last thing on the list now, preserve it
% by backing up by \lastskip, doing the \write, then inserting
% the skip again.  Otherwise, the whatsit generated by the
% \write will make \lastskip zero.  The result is that sequences
% like this:
% @end defun
% @tindex whatever
% @defun ...
% will have extra space inserted, because the \medbreak in the
% start of the @defun won't see the skip inserted by the @end of
% the previous defun.
%
% But don't do any of this if we're not in vertical mode.  We
% don't want to do a \vskip and prematurely end a paragraph.
%
% Avoid page breaks due to these extra skips, too.
%
% But wait, there is a catch there:
% We'll have to check whether \lastskip is zero skip.  \ifdim is not
% sufficient for this purpose, as it ignores stretch and shrink parts
% of the skip.  The only way seems to be to check the textual
% representation of the skip.
%
% The following is almost like \def\zeroskipmacro{0.0pt} except that
% the ``p'' and ``t'' characters have catcode \other, not 11 (letter).
%
\edef\zeroskipmacro{\expandafter\the\csname z@skip\endcsname}
%
% ..., ready, GO:
%
\def\dosubindsanitize{%
  % \lastskip and \lastpenalty cannot both be nonzero simultaneously.
  \skip0 = \lastskip
  \edef\lastskipmacro{\the\lastskip}%
  \count255 = \lastpenalty
  %
  % If \lastskip is nonzero, that means the last item was a
  % skip.  And since a skip is discardable, that means this
  % -\skip0 glue we're inserting is preceded by a
  % non-discardable item, therefore it is not a potential
  % breakpoint, therefore no \nobreak needed.
  \ifx\lastskipmacro\zeroskipmacro
  \else
    \vskip-\skip0
  \fi
  %
  \dosubindwrite
  %
  \ifx\lastskipmacro\zeroskipmacro
    % If \lastskip was zero, perhaps the last item was a penalty, and
    % perhaps it was >=10000, e.g., a \nobreak.  In that case, we want
    % to re-insert the same penalty (values >10000 are used for various
    % signals); since we just inserted a non-discardable item, any
    % following glue (such as a \parskip) would be a breakpoint.  For example:
    % 
    %   @deffn deffn-whatever
    %   @vindex index-whatever
    %   Description.
    % would allow a break between the index-whatever whatsit
    % and the "Description." paragraph.
    \ifnum\count255>9999 \penalty\count255 \fi
  \else
    % On the other hand, if we had a nonzero \lastskip,
    % this make-up glue would be preceded by a non-discardable item
    % (the whatsit from the \write), so we must insert a \nobreak.
    \nobreak\vskip\skip0
  \fi
}

% The index entry written in the file actually looks like
%  \entry {sortstring}{page}{topic}
% or
%  \entry {sortstring}{page}{topic}{subtopic}
% The texindex program reads in these files and writes files
% containing these kinds of lines:
%  \initial {c}
%     before the first topic whose initial is c
%  \entry {topic}{pagelist}
%     for a topic that is used without subtopics
%  \primary {topic}
%     for the beginning of a topic that is used with subtopics
%  \secondary {subtopic}{pagelist}
%     for each subtopic.

% Define the user-accessible indexing commands
% @findex, @vindex, @kindex, @cindex.

\def\findex {\fnindex}
\def\kindex {\kyindex}
\def\cindex {\cpindex}
\def\vindex {\vrindex}
\def\tindex {\tpindex}
\def\pindex {\pgindex}

\def\cindexsub {\begingroup\obeylines\cindexsub}
{\obeylines %
\gdef\cindexsub "#1" #2^^M{\endgroup %
\dosubind{cp}{#2}{#1}}}

% Define the macros used in formatting output of the sorted index material.

% @printindex causes a particular index (the ??s file) to get printed.
% It does not print any chapter heading (usually an @unnumbered).
%
\parseargdef\printindex{\begingroup
  \dobreak \chapheadingskip{10000}%
  %
  \smallfonts \rm
  \tolerance = 9500
  \everypar = {}% don't want the \kern\-parindent from indentation suppression.
  %
  % See if the index file exists and is nonempty.
  % Change catcode of @ here so that if the index file contains
  % \initial {@}
  % as its first line, TeX doesn't complain about mismatched braces
  % (because it thinks @} is a control sequence).
  \catcode`\@ = 11
  \openin 1 \jobname.#1s
  \ifeof 1
    % \enddoublecolumns gets confused if there is no text in the index,
    % and it loses the chapter title and the aux file entries for the
    % index.  The easiest way to prevent this problem is to make sure
    % there is some text.
    \putwordIndexNonexistent
  \else
    %
    % If the index file exists but is empty, then \openin leaves \ifeof
    % false.  We have to make TeX try to read something from the file, so
    % it can discover if there is anything in it.
    \read 1 to \temp
    \ifeof 1
      \putwordIndexIsEmpty
    \else
      % Index files are almost Texinfo source, but we use \ as the escape
      % character.  It would be better to use @, but that's too big a change
      % to make right now.
      \def\indexbackslash{\backslashcurfont}%
      \catcode`\\ = 0
      \escapechar = `\\
      \begindoublecolumns
      \input \jobname.#1s
      \enddoublecolumns
    \fi
  \fi
  \closein 1
\endgroup}

% These macros are used by the sorted index file itself.
% Change them to control the appearance of the index.

\def\initial#1{{%
  % Some minor font changes for the special characters.
  \let\tentt=\sectt \let\tt=\sectt \let\sf=\sectt
  %
  % Remove any glue we may have, we'll be inserting our own.
  \removelastskip
  %
  % We like breaks before the index initials, so insert a bonus.
  \nobreak
  \vskip 0pt plus 3\baselineskip
  \penalty 0
  \vskip 0pt plus -3\baselineskip
  %
  % Typeset the initial.  Making this add up to a whole number of
  % baselineskips increases the chance of the dots lining up from column
  % to column.  It still won't often be perfect, because of the stretch
  % we need before each entry, but it's better.
  %
  % No shrink because it confuses \balancecolumns.
  \vskip 1.67\baselineskip plus .5\baselineskip
  \leftline{\secbf #1}%
  % Do our best not to break after the initial.
  \nobreak
  \vskip .33\baselineskip plus .1\baselineskip
}}

% \entry typesets a paragraph consisting of the text (#1), dot leaders, and
% then page number (#2) flushed to the right margin.  It is used for index
% and table of contents entries.  The paragraph is indented by \leftskip.
%
% A straightforward implementation would start like this:
%	\def\entry#1#2{...
% But this frozes the catcodes in the argument, and can cause problems to
% @code, which sets - active.  This problem was fixed by a kludge---
% ``-'' was active throughout whole index, but this isn't really right.
%
% The right solution is to prevent \entry from swallowing the whole text.
%                                 --kasal, 21nov03
\def\entry{%
  \begingroup
    %
    % Start a new paragraph if necessary, so our assignments below can't
    % affect previous text.
    \par
    %
    % Do not fill out the last line with white space.
    \parfillskip = 0in
    %
    % No extra space above this paragraph.
    \parskip = 0in
    %
    % Do not prefer a separate line ending with a hyphen to fewer lines.
    \finalhyphendemerits = 0
    %
    % \hangindent is only relevant when the entry text and page number
    % don't both fit on one line.  In that case, bob suggests starting the
    % dots pretty far over on the line.  Unfortunately, a large
    % indentation looks wrong when the entry text itself is broken across
    % lines.  So we use a small indentation and put up with long leaders.
    %
    % \hangafter is reset to 1 (which is the value we want) at the start
    % of each paragraph, so we need not do anything with that.
    \hangindent = 2em
    %
    % When the entry text needs to be broken, just fill out the first line
    % with blank space.
    \rightskip = 0pt plus1fil
    %
    % A bit of stretch before each entry for the benefit of balancing
    % columns.
    \vskip 0pt plus1pt
    %
    % Swallow the left brace of the text (first parameter):
    \afterassignment\doentry
    \let\temp =
}
\def\doentry{%
    \bgroup % Instead of the swallowed brace.
      \noindent
      \aftergroup\finishentry
      % And now comes the text of the entry.
}
\def\finishentry#1{%
    % #1 is the page number.
    %
    % The following is kludged to not output a line of dots in the index if
    % there are no page numbers.  The next person who breaks this will be
    % cursed by a Unix daemon.
    \def\tempa{{\rm }}%
    \def\tempb{#1}%
    \edef\tempc{\tempa}%
    \edef\tempd{\tempb}%
    \ifx\tempc\tempd
      \ %
    \else
      %
      % If we must, put the page number on a line of its own, and fill out
      % this line with blank space.  (The \hfil is overwhelmed with the
      % fill leaders glue in \indexdotfill if the page number does fit.)
      \hfil\penalty50
      \null\nobreak\indexdotfill % Have leaders before the page number.
      %
      % The `\ ' here is removed by the implicit \unskip that TeX does as
      % part of (the primitive) \par.  Without it, a spurious underfull
      % \hbox ensues.
      \ifpdf
	\pdfgettoks#1.%
	\ \the\toksA
      \else
	\ #1%
      \fi
    \fi
    \par
  \endgroup
}

% Like plain.tex's \dotfill, except uses up at least 1 em.
\def\indexdotfill{\cleaders
  \hbox{$\mathsurround=0pt \mkern1.5mu.\mkern1.5mu$}\hskip 1em plus 1fill}

\def\primary #1{\line{#1\hfil}}

\newskip\secondaryindent \secondaryindent=0.5cm
\def\secondary#1#2{{%
  \parfillskip=0in
  \parskip=0in
  \hangindent=1in
  \hangafter=1
  \noindent\hskip\secondaryindent\hbox{#1}\indexdotfill
  \ifpdf
    \pdfgettoks#2.\ \the\toksA % The page number ends the paragraph.
  \else
    #2
  \fi
  \par
}}

% Define two-column mode, which we use to typeset indexes.
% Adapted from the TeXbook, page 416, which is to say,
% the manmac.tex format used to print the TeXbook itself.
\catcode`\@=11

\newbox\partialpage
\newdimen\doublecolumnhsize

\def\begindoublecolumns{\begingroup % ended by \enddoublecolumns
  % Grab any single-column material above us.
  \output = {%
    %
    % Here is a possibility not foreseen in manmac: if we accumulate a
    % whole lot of material, we might end up calling this \output
    % routine twice in a row (see the doublecol-lose test, which is
    % essentially a couple of indexes with @setchapternewpage off).  In
    % that case we just ship out what is in \partialpage with the normal
    % output routine.  Generally, \partialpage will be empty when this
    % runs and this will be a no-op.  See the indexspread.tex test case.
    \ifvoid\partialpage \else
      \onepageout{\pagecontents\partialpage}%
    \fi
    %
    \global\setbox\partialpage = \vbox{%
      % Unvbox the main output page.
      \unvbox\PAGE
      \kern-\topskip \kern\baselineskip
    }%
  }%
  \eject % run that output routine to set \partialpage
  %
  % Use the double-column output routine for subsequent pages.
  \output = {\doublecolumnout}%
  %
  % Change the page size parameters.  We could do this once outside this
  % routine, in each of @smallbook, @afourpaper, and the default 8.5x11
  % format, but then we repeat the same computation.  Repeating a couple
  % of assignments once per index is clearly meaningless for the
  % execution time, so we may as well do it in one place.
  %
  % First we halve the line length, less a little for the gutter between
  % the columns.  We compute the gutter based on the line length, so it
  % changes automatically with the paper format.  The magic constant
  % below is chosen so that the gutter has the same value (well, +-<1pt)
  % as it did when we hard-coded it.
  %
  % We put the result in a separate register, \doublecolumhsize, so we
  % can restore it in \pagesofar, after \hsize itself has (potentially)
  % been clobbered.
  %
  \doublecolumnhsize = \hsize
    \advance\doublecolumnhsize by -.04154\hsize
    \divide\doublecolumnhsize by 2
  \hsize = \doublecolumnhsize
  %
  % Double the \vsize as well.  (We don't need a separate register here,
  % since nobody clobbers \vsize.)
  \vsize = 2\vsize
}

% The double-column output routine for all double-column pages except
% the last.
%
\def\doublecolumnout{%
  \splittopskip=\topskip \splitmaxdepth=\maxdepth
  % Get the available space for the double columns -- the normal
  % (undoubled) page height minus any material left over from the
  % previous page.
  \dimen@ = \vsize
  \divide\dimen@ by 2
  \advance\dimen@ by -\ht\partialpage
  %
  % box0 will be the left-hand column, box2 the right.
  \setbox0=\vsplit255 to\dimen@ \setbox2=\vsplit255 to\dimen@
  \onepageout\pagesofar
  \unvbox255
  \penalty\outputpenalty
}
%
% Re-output the contents of the output page -- any previous material,
% followed by the two boxes we just split, in box0 and box2.
\def\pagesofar{%
  \unvbox\partialpage
  %
  \hsize = \doublecolumnhsize
  \wd0=\hsize \wd2=\hsize
  \hbox to\pagewidth{\box0\hfil\box2}%
}
%
% All done with double columns.
\def\enddoublecolumns{%
  \output = {%
    % Split the last of the double-column material.  Leave it on the
    % current page, no automatic page break.
    \balancecolumns
    %
    % If we end up splitting too much material for the current page,
    % though, there will be another page break right after this \output
    % invocation ends.  Having called \balancecolumns once, we do not
    % want to call it again.  Therefore, reset \output to its normal
    % definition right away.  (We hope \balancecolumns will never be
    % called on to balance too much material, but if it is, this makes
    % the output somewhat more palatable.)
    \global\output = {\onepageout{\pagecontents\PAGE}}%
  }%
  \eject
  \endgroup % started in \begindoublecolumns
  %
  % \pagegoal was set to the doubled \vsize above, since we restarted
  % the current page.  We're now back to normal single-column
  % typesetting, so reset \pagegoal to the normal \vsize (after the
  % \endgroup where \vsize got restored).
  \pagegoal = \vsize
}
%
% Called at the end of the double column material.
\def\balancecolumns{%
  \setbox0 = \vbox{\unvbox255}% like \box255 but more efficient, see p.120.
  \dimen@ = \ht0
  \advance\dimen@ by \topskip
  \advance\dimen@ by-\baselineskip
  \divide\dimen@ by 2 % target to split to
  %debug\message{final 2-column material height=\the\ht0, target=\the\dimen@.}%
  \splittopskip = \topskip
  % Loop until we get a decent breakpoint.
  {%
    \vbadness = 10000
    \loop
      \global\setbox3 = \copy0
      \global\setbox1 = \vsplit3 to \dimen@
    \ifdim\ht3>\dimen@
      \global\advance\dimen@ by 1pt
    \repeat
  }%
  %debug\message{split to \the\dimen@, column heights: \the\ht1, \the\ht3.}%
  \setbox0=\vbox to\dimen@{\unvbox1}%
  \setbox2=\vbox to\dimen@{\unvbox3}%
  %
  \pagesofar
}
\catcode`\@ = \other


\message{sectioning,}
% Chapters, sections, etc.

% \unnumberedno is an oxymoron, of course.  But we count the unnumbered
% sections so that we can refer to them unambiguously in the pdf
% outlines by their "section number".  We avoid collisions with chapter
% numbers by starting them at 10000.  (If a document ever has 10000
% chapters, we're in trouble anyway, I'm sure.)
\newcount\unnumberedno \unnumberedno = 10000
\newcount\chapno
\newcount\secno        \secno=0
\newcount\subsecno     \subsecno=0
\newcount\subsubsecno  \subsubsecno=0

% This counter is funny since it counts through charcodes of letters A, B, ...
\newcount\appendixno  \appendixno = `\@
%
% \def\appendixletter{\char\the\appendixno}
% We do the following ugly conditional instead of the above simple
% construct for the sake of pdftex, which needs the actual
% letter in the expansion, not just typeset.
%
\def\appendixletter{%
  \ifnum\appendixno=`A A%
  \else\ifnum\appendixno=`B B%
  \else\ifnum\appendixno=`C C%
  \else\ifnum\appendixno=`D D%
  \else\ifnum\appendixno=`E E%
  \else\ifnum\appendixno=`F F%
  \else\ifnum\appendixno=`G G%
  \else\ifnum\appendixno=`H H%
  \else\ifnum\appendixno=`I I%
  \else\ifnum\appendixno=`J J%
  \else\ifnum\appendixno=`K K%
  \else\ifnum\appendixno=`L L%
  \else\ifnum\appendixno=`M M%
  \else\ifnum\appendixno=`N N%
  \else\ifnum\appendixno=`O O%
  \else\ifnum\appendixno=`P P%
  \else\ifnum\appendixno=`Q Q%
  \else\ifnum\appendixno=`R R%
  \else\ifnum\appendixno=`S S%
  \else\ifnum\appendixno=`T T%
  \else\ifnum\appendixno=`U U%
  \else\ifnum\appendixno=`V V%
  \else\ifnum\appendixno=`W W%
  \else\ifnum\appendixno=`X X%
  \else\ifnum\appendixno=`Y Y%
  \else\ifnum\appendixno=`Z Z%
  % The \the is necessary, despite appearances, because \appendixletter is
  % expanded while writing the .toc file.  \char\appendixno is not
  % expandable, thus it is written literally, thus all appendixes come out
  % with the same letter (or @) in the toc without it.
  \else\char\the\appendixno
  \fi\fi\fi\fi\fi\fi\fi\fi\fi\fi\fi\fi\fi
  \fi\fi\fi\fi\fi\fi\fi\fi\fi\fi\fi\fi\fi}

% Each @chapter defines this as the name of the chapter.
% page headings and footings can use it.  @section does likewise.
% However, they are not reliable, because we don't use marks.
\def\thischapter{}
\def\thissection{}

\newcount\absseclevel % used to calculate proper heading level
\newcount\secbase\secbase=0 % @raisesections/@lowersections modify this count

% @raisesections: treat @section as chapter, @subsection as section, etc.
\def\raisesections{\global\advance\secbase by -1}
\let\up=\raisesections % original BFox name

% @lowersections: treat @chapter as section, @section as subsection, etc.
\def\lowersections{\global\advance\secbase by 1}
\let\down=\lowersections % original BFox name

% we only have subsub.
\chardef\maxseclevel = 3
%
% A numbered section within an unnumbered changes to unnumbered too.
% To achive this, remember the "biggest" unnum. sec. we are currently in:
\chardef\unmlevel = \maxseclevel
%
% Trace whether the current chapter is an appendix or not:
% \chapheadtype is "N" or "A", unnumbered chapters are ignored.
\def\chapheadtype{N}

% Choose a heading macro
% #1 is heading type
% #2 is heading level
% #3 is text for heading
\def\genhead#1#2#3{%
  % Compute the abs. sec. level:
  \absseclevel=#2
  \advance\absseclevel by \secbase
  % Make sure \absseclevel doesn't fall outside the range:
  \ifnum \absseclevel < 0
    \absseclevel = 0
  \else
    \ifnum \absseclevel > 3
      \absseclevel = 3
    \fi
  \fi
  % The heading type:
  \def\headtype{#1}%
  \if \headtype U%
    \ifnum \absseclevel < \unmlevel
      \chardef\unmlevel = \absseclevel
    \fi
  \else
    % Check for appendix sections:
    \ifnum \absseclevel = 0
      \edef\chapheadtype{\headtype}%
    \else
      \if \headtype A\if \chapheadtype N%
	\errmessage{@appendix... within a non-appendix chapter}%
      \fi\fi
    \fi
    % Check for numbered within unnumbered:
    \ifnum \absseclevel > \unmlevel
      \def\headtype{U}%
    \else
      \chardef\unmlevel = 3
    \fi
  \fi
  % Now print the heading:
  \if \headtype U%
    \ifcase\absseclevel
	\unnumberedzzz{#3}%
    \or \unnumberedseczzz{#3}%
    \or \unnumberedsubseczzz{#3}%
    \or \unnumberedsubsubseczzz{#3}%
    \fi
  \else
    \if \headtype A%
      \ifcase\absseclevel
	  \appendixzzz{#3}%
      \or \appendixsectionzzz{#3}%
      \or \appendixsubseczzz{#3}%
      \or \appendixsubsubseczzz{#3}%
      \fi
    \else
      \ifcase\absseclevel
	  \chapterzzz{#3}%
      \or \seczzz{#3}%
      \or \numberedsubseczzz{#3}%
      \or \numberedsubsubseczzz{#3}%
      \fi
    \fi
  \fi
  \suppressfirstparagraphindent
}

% an interface:
\def\numhead{\genhead N}
\def\apphead{\genhead A}
\def\unnmhead{\genhead U}

% @chapter, @appendix, @unnumbered.  Increment top-level counter, reset
% all lower-level sectioning counters to zero.
%
% Also set \chaplevelprefix, which we prepend to @float sequence numbers
% (e.g., figures), q.v.  By default (before any chapter), that is empty.
\let\chaplevelprefix = \empty
%
\outer\parseargdef\chapter{\numhead0{#1}} % normally numhead0 calls chapterzzz
\def\chapterzzz#1{%
  % section resetting is \global in case the chapter is in a group, such
  % as an @include file.
  \global\secno=0 \global\subsecno=0 \global\subsubsecno=0
    \global\advance\chapno by 1
  %
  % Used for \float.
  \gdef\chaplevelprefix{\the\chapno.}%
  \resetallfloatnos
  %
  \message{\putwordChapter\space \the\chapno}%
  %
  % Write the actual heading.
  \chapmacro{#1}{Ynumbered}{\the\chapno}%
  %
  % So @section and the like are numbered underneath this chapter.
  \global\let\section = \numberedsec
  \global\let\subsection = \numberedsubsec
  \global\let\subsubsection = \numberedsubsubsec
}

\outer\parseargdef\appendix{\apphead0{#1}} % normally apphead0 calls appendixzzz
\def\appendixzzz#1{%
  \global\secno=0 \global\subsecno=0 \global\subsubsecno=0
    \global\advance\appendixno by 1
  \gdef\chaplevelprefix{\appendixletter.}%
  \resetallfloatnos
  %
  \def\appendixnum{\putwordAppendix\space \appendixletter}%
  \message{\appendixnum}%
  %
  \chapmacro{#1}{Yappendix}{\appendixletter}%
  %
  \global\let\section = \appendixsec
  \global\let\subsection = \appendixsubsec
  \global\let\subsubsection = \appendixsubsubsec
}

\outer\parseargdef\unnumbered{\unnmhead0{#1}} % normally unnmhead0 calls unnumberedzzz
\def\unnumberedzzz#1{%
  \global\secno=0 \global\subsecno=0 \global\subsubsecno=0
    \global\advance\unnumberedno by 1
  %
  % Since an unnumbered has no number, no prefix for figures.
  \global\let\chaplevelprefix = \empty
  \resetallfloatnos
  %
  % This used to be simply \message{#1}, but TeX fully expands the
  % argument to \message.  Therefore, if #1 contained @-commands, TeX
  % expanded them.  For example, in `@unnumbered The @cite{Book}', TeX
  % expanded @cite (which turns out to cause errors because \cite is meant
  % to be executed, not expanded).
  %
  % Anyway, we don't want the fully-expanded definition of @cite to appear
  % as a result of the \message, we just want `@cite' itself.  We use
  % \the<toks register> to achieve this: TeX expands \the<toks> only once,
  % simply yielding the contents of <toks register>.  (We also do this for
  % the toc entries.)
  \toks0 = {#1}%
  \message{(\the\toks0)}%
  %
  \chapmacro{#1}{Ynothing}{\the\unnumberedno}%
  %
  \global\let\section = \unnumberedsec
  \global\let\subsection = \unnumberedsubsec
  \global\let\subsubsection = \unnumberedsubsubsec
}

% @centerchap is like @unnumbered, but the heading is centered.
\outer\parseargdef\centerchap{%
  % Well, we could do the following in a group, but that would break
  % an assumption that \chapmacro is called at the outermost level.
  % Thus we are safer this way:		--kasal, 24feb04
  \let\centerparametersmaybe = \centerparameters
  \unnmhead0{#1}%
  \let\centerparametersmaybe = \relax
}

% @top is like @unnumbered.
\let\top\unnumbered

% Sections.
\outer\parseargdef\numberedsec{\numhead1{#1}} % normally calls seczzz
\def\seczzz#1{%
  \global\subsecno=0 \global\subsubsecno=0  \global\advance\secno by 1
  \sectionheading{#1}{sec}{Ynumbered}{\the\chapno.\the\secno}%
}

\outer\parseargdef\appendixsection{\apphead1{#1}} % normally calls appendixsectionzzz
\def\appendixsectionzzz#1{%
  \global\subsecno=0 \global\subsubsecno=0  \global\advance\secno by 1
  \sectionheading{#1}{sec}{Yappendix}{\appendixletter.\the\secno}%
}
\let\appendixsec\appendixsection

\outer\parseargdef\unnumberedsec{\unnmhead1{#1}} % normally calls unnumberedseczzz
\def\unnumberedseczzz#1{%
  \global\subsecno=0 \global\subsubsecno=0  \global\advance\secno by 1
  \sectionheading{#1}{sec}{Ynothing}{\the\unnumberedno.\the\secno}%
}

% Subsections.
\outer\parseargdef\numberedsubsec{\numhead2{#1}} % normally calls numberedsubseczzz
\def\numberedsubseczzz#1{%
  \global\subsubsecno=0  \global\advance\subsecno by 1
  \sectionheading{#1}{subsec}{Ynumbered}{\the\chapno.\the\secno.\the\subsecno}%
}

\outer\parseargdef\appendixsubsec{\apphead2{#1}} % normally calls appendixsubseczzz
\def\appendixsubseczzz#1{%
  \global\subsubsecno=0  \global\advance\subsecno by 1
  \sectionheading{#1}{subsec}{Yappendix}%
                 {\appendixletter.\the\secno.\the\subsecno}%
}

\outer\parseargdef\unnumberedsubsec{\unnmhead2{#1}} %normally calls unnumberedsubseczzz
\def\unnumberedsubseczzz#1{%
  \global\subsubsecno=0  \global\advance\subsecno by 1
  \sectionheading{#1}{subsec}{Ynothing}%
                 {\the\unnumberedno.\the\secno.\the\subsecno}%
}

% Subsubsections.
\outer\parseargdef\numberedsubsubsec{\numhead3{#1}} % normally numberedsubsubseczzz
\def\numberedsubsubseczzz#1{%
  \global\advance\subsubsecno by 1
  \sectionheading{#1}{subsubsec}{Ynumbered}%
                 {\the\chapno.\the\secno.\the\subsecno.\the\subsubsecno}%
}

\outer\parseargdef\appendixsubsubsec{\apphead3{#1}} % normally appendixsubsubseczzz
\def\appendixsubsubseczzz#1{%
  \global\advance\subsubsecno by 1
  \sectionheading{#1}{subsubsec}{Yappendix}%
                 {\appendixletter.\the\secno.\the\subsecno.\the\subsubsecno}%
}

\outer\parseargdef\unnumberedsubsubsec{\unnmhead3{#1}} %normally unnumberedsubsubseczzz
\def\unnumberedsubsubseczzz#1{%
  \global\advance\subsubsecno by 1
  \sectionheading{#1}{subsubsec}{Ynothing}%
                 {\the\unnumberedno.\the\secno.\the\subsecno.\the\subsubsecno}%
}

% These macros control what the section commands do, according
% to what kind of chapter we are in (ordinary, appendix, or unnumbered).
% Define them by default for a numbered chapter.
\let\section = \numberedsec
\let\subsection = \numberedsubsec
\let\subsubsection = \numberedsubsubsec

% Define @majorheading, @heading and @subheading

% NOTE on use of \vbox for chapter headings, section headings, and such:
%       1) We use \vbox rather than the earlier \line to permit
%          overlong headings to fold.
%       2) \hyphenpenalty is set to 10000 because hyphenation in a
%          heading is obnoxious; this forbids it.
%       3) Likewise, headings look best if no \parindent is used, and
%          if justification is not attempted.  Hence \raggedright.


\def\majorheading{%
  {\advance\chapheadingskip by 10pt \chapbreak }%
  \parsearg\chapheadingzzz
}

\def\chapheading{\chapbreak \parsearg\chapheadingzzz}
\def\chapheadingzzz#1{%
  {\chapfonts \vbox{\hyphenpenalty=10000\tolerance=5000
                    \parindent=0pt\raggedright
                    \rm #1\hfill}}%
  \bigskip \par\penalty 200\relax
  \suppressfirstparagraphindent
}

% @heading, @subheading, @subsubheading.
\parseargdef\heading{\sectionheading{#1}{sec}{Yomitfromtoc}{}
  \suppressfirstparagraphindent}
\parseargdef\subheading{\sectionheading{#1}{subsec}{Yomitfromtoc}{}
  \suppressfirstparagraphindent}
\parseargdef\subsubheading{\sectionheading{#1}{subsubsec}{Yomitfromtoc}{}
  \suppressfirstparagraphindent}

% These macros generate a chapter, section, etc. heading only
% (including whitespace, linebreaking, etc. around it),
% given all the information in convenient, parsed form.

%%% Args are the skip and penalty (usually negative)
\def\dobreak#1#2{\par\ifdim\lastskip<#1\removelastskip\penalty#2\vskip#1\fi}

%%% Define plain chapter starts, and page on/off switching for it
% Parameter controlling skip before chapter headings (if needed)

\newskip\chapheadingskip

\def\chapbreak{\dobreak \chapheadingskip {-4000}}
\def\chappager{\par\vfill\supereject}
\def\chapoddpage{\chappager \ifodd\pageno \else \hbox to 0pt{} \chappager\fi}

\def\setchapternewpage #1 {\csname CHAPPAG#1\endcsname}

\def\CHAPPAGoff{%
\global\let\contentsalignmacro = \chappager
\global\let\pchapsepmacro=\chapbreak
\global\let\pagealignmacro=\chappager}

\def\CHAPPAGon{%
\global\let\contentsalignmacro = \chappager
\global\let\pchapsepmacro=\chappager
\global\let\pagealignmacro=\chappager
\global\def\HEADINGSon{\HEADINGSsingle}}

\def\CHAPPAGodd{%
\global\let\contentsalignmacro = \chapoddpage
\global\let\pchapsepmacro=\chapoddpage
\global\let\pagealignmacro=\chapoddpage
\global\def\HEADINGSon{\HEADINGSdouble}}

\CHAPPAGon

% Chapter opening.
%
% #1 is the text, #2 is the section type (Ynumbered, Ynothing,
% Yappendix, Yomitfromtoc), #3 the chapter number.
%
% To test against our argument.
\def\Ynothingkeyword{Ynothing}
\def\Yomitfromtockeyword{Yomitfromtoc}
\def\Yappendixkeyword{Yappendix}
%
\def\chapmacro#1#2#3{%
  \pchapsepmacro
  {%
    \chapfonts \rm
    %
    % Have to define \thissection before calling \donoderef, because the
    % xref code eventually uses it.  On the other hand, it has to be called
    % after \pchapsepmacro, or the headline will change too soon.
    \gdef\thissection{#1}%
    \gdef\thischaptername{#1}%
    %
    % Only insert the separating space if we have a chapter/appendix
    % number, and don't print the unnumbered ``number''.
    \def\temptype{#2}%
    \ifx\temptype\Ynothingkeyword
      \setbox0 = \hbox{}%
      \def\toctype{unnchap}%
      \gdef\thischapternum{}%
      \gdef\thischapter{#1}%
    \else\ifx\temptype\Yomitfromtockeyword
      \setbox0 = \hbox{}% contents like unnumbered, but no toc entry
      \def\toctype{omit}%
      \gdef\thischapternum{}%
      \gdef\thischapter{}%
    \else\ifx\temptype\Yappendixkeyword
      \setbox0 = \hbox{\putwordAppendix{} #3\enspace}%
      \def\toctype{app}%
      \xdef\thischapternum{\appendixletter}%
      % We don't substitute the actual chapter name into \thischapter
      % because we don't want its macros evaluated now.  And we don't
      % use \thissection because that changes with each section.
      %
      \xdef\thischapter{\putwordAppendix{} \appendixletter:
                        \noexpand\thischaptername}%
    \else
      \setbox0 = \hbox{#3\enspace}%
      \def\toctype{numchap}%
      \xdef\thischapternum{\the\chapno}%
      \xdef\thischapter{\putwordChapter{} \the\chapno:
                        \noexpand\thischaptername}%
    \fi\fi\fi
    %
    % Write the toc entry for this chapter.  Must come before the
    % \donoderef, because we include the current node name in the toc
    % entry, and \donoderef resets it to empty.
    \writetocentry{\toctype}{#1}{#3}%
    %
    % For pdftex, we have to write out the node definition (aka, make
    % the pdfdest) after any page break, but before the actual text has
    % been typeset.  If the destination for the pdf outline is after the
    % text, then jumping from the outline may wind up with the text not
    % being visible, for instance under high magnification.
    \donoderef{#2}%
    %
    % Typeset the actual heading.
    \vbox{\hyphenpenalty=10000 \tolerance=5000 \parindent=0pt \raggedright
          \hangindent=\wd0 \centerparametersmaybe
          \unhbox0 #1\par}%
  }%
  \nobreak\bigskip % no page break after a chapter title
  \nobreak
}

% @centerchap -- centered and unnumbered.
\let\centerparametersmaybe = \relax
\def\centerparameters{%
  \advance\rightskip by 3\rightskip
  \leftskip = \rightskip
  \parfillskip = 0pt
}


% I don't think this chapter style is supported any more, so I'm not
% updating it with the new noderef stuff.  We'll see.  --karl, 11aug03.
%
\def\setchapterstyle #1 {\csname CHAPF#1\endcsname}
%
\def\unnchfopen #1{%
\chapoddpage {\chapfonts \vbox{\hyphenpenalty=10000\tolerance=5000
                       \parindent=0pt\raggedright
                       \rm #1\hfill}}\bigskip \par\nobreak
}
\def\chfopen #1#2{\chapoddpage {\chapfonts
\vbox to 3in{\vfil \hbox to\hsize{\hfil #2} \hbox to\hsize{\hfil #1} \vfil}}%
\par\penalty 5000 %
}
\def\centerchfopen #1{%
\chapoddpage {\chapfonts \vbox{\hyphenpenalty=10000\tolerance=5000
                       \parindent=0pt
                       \hfill {\rm #1}\hfill}}\bigskip \par\nobreak
}
\def\CHAPFopen{%
  \global\let\chapmacro=\chfopen
  \global\let\centerchapmacro=\centerchfopen}


% Section titles.  These macros combine the section number parts and
% call the generic \sectionheading to do the printing.
%
\newskip\secheadingskip
\def\secheadingbreak{\dobreak \secheadingskip{-1000}}

% Subsection titles.
\newskip\subsecheadingskip
\def\subsecheadingbreak{\dobreak \subsecheadingskip{-500}}

% Subsubsection titles.
\def\subsubsecheadingskip{\subsecheadingskip}
\def\subsubsecheadingbreak{\subsecheadingbreak}


% Print any size, any type, section title.
%
% #1 is the text, #2 is the section level (sec/subsec/subsubsec), #3 is
% the section type for xrefs (Ynumbered, Ynothing, Yappendix), #4 is the
% section number.
%
\def\sectionheading#1#2#3#4{%
  {%
    % Switch to the right set of fonts.
    \csname #2fonts\endcsname \rm
    %
    % Insert space above the heading.
    \csname #2headingbreak\endcsname
    %
    % Only insert the space after the number if we have a section number.
    \def\sectionlevel{#2}%
    \def\temptype{#3}%
    %
    \ifx\temptype\Ynothingkeyword
      \setbox0 = \hbox{}%
      \def\toctype{unn}%
      \gdef\thissection{#1}%
    \else\ifx\temptype\Yomitfromtockeyword
      % for @headings -- no section number, don't include in toc,
      % and don't redefine \thissection.
      \setbox0 = \hbox{}%
      \def\toctype{omit}%
      \let\sectionlevel=\empty
    \else\ifx\temptype\Yappendixkeyword
      \setbox0 = \hbox{#4\enspace}%
      \def\toctype{app}%
      \gdef\thissection{#1}%
    \else
      \setbox0 = \hbox{#4\enspace}%
      \def\toctype{num}%
      \gdef\thissection{#1}%
    \fi\fi\fi
    %
    % Write the toc entry (before \donoderef).  See comments in \chapmacro.
    \writetocentry{\toctype\sectionlevel}{#1}{#4}%
    %
    % Write the node reference (= pdf destination for pdftex).
    % Again, see comments in \chapmacro.
    \donoderef{#3}%
    %
    % Interline glue will be inserted when the vbox is completed.
    % That glue will be a valid breakpoint for the page, since it'll be
    % preceded by a whatsit (usually from the \donoderef, or from the
    % \writetocentry if there was no node).  We don't want to allow that
    % break, since then the whatsits could end up on page n while the
    % section is on page n+1, thus toc/etc. are wrong.  Debian bug 276000.
    \nobreak
    %
    % Output the actual section heading.
    \vbox{\hyphenpenalty=10000 \tolerance=5000 \parindent=0pt \raggedright
          \hangindent=\wd0  % zero if no section number
          \unhbox0 #1}%
  }%
  % Add extra space after the heading -- half of whatever came above it.
  % Don't allow stretch, though.
  \kern .5 \csname #2headingskip\endcsname
  %
  % Do not let the kern be a potential breakpoint, as it would be if it
  % was followed by glue.
  \nobreak
  %
  % We'll almost certainly start a paragraph next, so don't let that
  % glue accumulate.  (Not a breakpoint because it's preceded by a
  % discardable item.)
  \vskip-\parskip
  % 
  % This is purely so the last item on the list is a known \penalty >
  % 10000.  This is so \startdefun can avoid allowing breakpoints after
  % section headings.  Otherwise, it would insert a valid breakpoint between:
  % 
  %   @section sec-whatever
  %   @deffn def-whatever
  \penalty 10001
}


\message{toc,}
% Table of contents.
\newwrite\tocfile

% Write an entry to the toc file, opening it if necessary.
% Called from @chapter, etc.
%
% Example usage: \writetocentry{sec}{Section Name}{\the\chapno.\the\secno}
% We append the current node name (if any) and page number as additional
% arguments for the \{chap,sec,...}entry macros which will eventually
% read this.  The node name is used in the pdf outlines as the
% destination to jump to.
%
% We open the .toc file for writing here instead of at @setfilename (or
% any other fixed time) so that @contents can be anywhere in the document.
% But if #1 is `omit', then we don't do anything.  This is used for the
% table of contents chapter openings themselves.
%
\newif\iftocfileopened
\def\omitkeyword{omit}%
%
\def\writetocentry#1#2#3{%
  \edef\writetoctype{#1}%
  \ifx\writetoctype\omitkeyword \else
    \iftocfileopened\else
      \immediate\openout\tocfile = \jobname.toc
      \global\tocfileopenedtrue
    \fi
    %
    \iflinks
      {\atdummies
       \edef\temp{%
         \write\tocfile{@#1entry{#2}{#3}{\lastnode}{\noexpand\folio}}}%
       \temp
      }%
    \fi
  \fi
  %
  % Tell \shipout to create a pdf destination on each page, if we're
  % writing pdf.  These are used in the table of contents.  We can't
  % just write one on every page because the title pages are numbered
  % 1 and 2 (the page numbers aren't printed), and so are the first
  % two pages of the document.  Thus, we'd have two destinations named
  % `1', and two named `2'.
  \ifpdf \global\pdfmakepagedesttrue \fi
}


% These characters do not print properly in the Computer Modern roman
% fonts, so we must take special care.  This is more or less redundant
% with the Texinfo input format setup at the end of this file.
% 
\def\activecatcodes{%
  \catcode`\"=\active
  \catcode`\$=\active
  \catcode`\<=\active
  \catcode`\>=\active
  \catcode`\\=\active
  \catcode`\^=\active
  \catcode`\_=\active
  \catcode`\|=\active
  \catcode`\~=\active
}


% Read the toc file, which is essentially Texinfo input.
\def\readtocfile{%
  \setupdatafile
  \activecatcodes
  \input \jobname.toc
}

\newskip\contentsrightmargin \contentsrightmargin=1in
\newcount\savepageno
\newcount\lastnegativepageno \lastnegativepageno = -1

% Prepare to read what we've written to \tocfile.
%
\def\startcontents#1{%
  % If @setchapternewpage on, and @headings double, the contents should
  % start on an odd page, unlike chapters.  Thus, we maintain
  % \contentsalignmacro in parallel with \pagealignmacro.
  % From: Torbjorn Granlund <tege@matematik.su.se>
  \contentsalignmacro
  \immediate\closeout\tocfile
  %
  % Don't need to put `Contents' or `Short Contents' in the headline.
  % It is abundantly clear what they are.
  \def\thischapter{}%
  \chapmacro{#1}{Yomitfromtoc}{}%
  %
  \savepageno = \pageno
  \begingroup                  % Set up to handle contents files properly.
    \raggedbottom              % Worry more about breakpoints than the bottom.
    \advance\hsize by -\contentsrightmargin % Don't use the full line length.
    %
    % Roman numerals for page numbers.
    \ifnum \pageno>0 \global\pageno = \lastnegativepageno \fi
}


% Normal (long) toc.
\def\contents{%
  \startcontents{\putwordTOC}%
    \openin 1 \jobname.toc
    \ifeof 1 \else
      \readtocfile
    \fi
    \vfill \eject
    \contentsalignmacro % in case @setchapternewpage odd is in effect
    \ifeof 1 \else
      \pdfmakeoutlines
    \fi
    \closein 1
  \endgroup
  \lastnegativepageno = \pageno
  \global\pageno = \savepageno
}

% And just the chapters.
\def\summarycontents{%
  \startcontents{\putwordShortTOC}%
    %
    \let\numchapentry = \shortchapentry
    \let\appentry = \shortchapentry
    \let\unnchapentry = \shortunnchapentry
    % We want a true roman here for the page numbers.
    \secfonts
    \let\rm=\shortcontrm \let\bf=\shortcontbf
    \let\sl=\shortcontsl \let\tt=\shortconttt
    \rm
    \hyphenpenalty = 10000
    \advance\baselineskip by 1pt % Open it up a little.
    \def\numsecentry##1##2##3##4{}
    \let\appsecentry = \numsecentry
    \let\unnsecentry = \numsecentry
    \let\numsubsecentry = \numsecentry
    \let\appsubsecentry = \numsecentry
    \let\unnsubsecentry = \numsecentry
    \let\numsubsubsecentry = \numsecentry
    \let\appsubsubsecentry = \numsecentry
    \let\unnsubsubsecentry = \numsecentry
    \openin 1 \jobname.toc
    \ifeof 1 \else
      \readtocfile
    \fi
    \closein 1
    \vfill \eject
    \contentsalignmacro % in case @setchapternewpage odd is in effect
  \endgroup
  \lastnegativepageno = \pageno
  \global\pageno = \savepageno
}
\let\shortcontents = \summarycontents

% Typeset the label for a chapter or appendix for the short contents.
% The arg is, e.g., `A' for an appendix, or `3' for a chapter.
%
\def\shortchaplabel#1{%
  % This space should be enough, since a single number is .5em, and the
  % widest letter (M) is 1em, at least in the Computer Modern fonts.
  % But use \hss just in case.
  % (This space doesn't include the extra space that gets added after
  % the label; that gets put in by \shortchapentry above.)
  %
  % We'd like to right-justify chapter numbers, but that looks strange
  % with appendix letters.  And right-justifying numbers and
  % left-justifying letters looks strange when there is less than 10
  % chapters.  Have to read the whole toc once to know how many chapters
  % there are before deciding ...
  \hbox to 1em{#1\hss}%
}

% These macros generate individual entries in the table of contents.
% The first argument is the chapter or section name.
% The last argument is the page number.
% The arguments in between are the chapter number, section number, ...

% Chapters, in the main contents.
\def\numchapentry#1#2#3#4{\dochapentry{#2\labelspace#1}{#4}}
%
% Chapters, in the short toc.
% See comments in \dochapentry re vbox and related settings.
\def\shortchapentry#1#2#3#4{%
  \tocentry{\shortchaplabel{#2}\labelspace #1}{\doshortpageno\bgroup#4\egroup}%
}

% Appendices, in the main contents.
% Need the word Appendix, and a fixed-size box.
%
\def\appendixbox#1{%
  % We use M since it's probably the widest letter.
  \setbox0 = \hbox{\putwordAppendix{} M}%
  \hbox to \wd0{\putwordAppendix{} #1\hss}}
%
\def\appentry#1#2#3#4{\dochapentry{\appendixbox{#2}\labelspace#1}{#4}}

% Unnumbered chapters.
\def\unnchapentry#1#2#3#4{\dochapentry{#1}{#4}}
\def\shortunnchapentry#1#2#3#4{\tocentry{#1}{\doshortpageno\bgroup#4\egroup}}

% Sections.
\def\numsecentry#1#2#3#4{\dosecentry{#2\labelspace#1}{#4}}
\let\appsecentry=\numsecentry
\def\unnsecentry#1#2#3#4{\dosecentry{#1}{#4}}

% Subsections.
\def\numsubsecentry#1#2#3#4{\dosubsecentry{#2\labelspace#1}{#4}}
\let\appsubsecentry=\numsubsecentry
\def\unnsubsecentry#1#2#3#4{\dosubsecentry{#1}{#4}}

% And subsubsections.
\def\numsubsubsecentry#1#2#3#4{\dosubsubsecentry{#2\labelspace#1}{#4}}
\let\appsubsubsecentry=\numsubsubsecentry
\def\unnsubsubsecentry#1#2#3#4{\dosubsubsecentry{#1}{#4}}

% This parameter controls the indentation of the various levels.
% Same as \defaultparindent.
\newdimen\tocindent \tocindent = 15pt

% Now for the actual typesetting. In all these, #1 is the text and #2 is the
% page number.
%
% If the toc has to be broken over pages, we want it to be at chapters
% if at all possible; hence the \penalty.
\def\dochapentry#1#2{%
   \penalty-300 \vskip1\baselineskip plus.33\baselineskip minus.25\baselineskip
   \begingroup
     \chapentryfonts
     \tocentry{#1}{\dopageno\bgroup#2\egroup}%
   \endgroup
   \nobreak\vskip .25\baselineskip plus.1\baselineskip
}

\def\dosecentry#1#2{\begingroup
  \secentryfonts \leftskip=\tocindent
  \tocentry{#1}{\dopageno\bgroup#2\egroup}%
\endgroup}

\def\dosubsecentry#1#2{\begingroup
  \subsecentryfonts \leftskip=2\tocindent
  \tocentry{#1}{\dopageno\bgroup#2\egroup}%
\endgroup}

\def\dosubsubsecentry#1#2{\begingroup
  \subsubsecentryfonts \leftskip=3\tocindent
  \tocentry{#1}{\dopageno\bgroup#2\egroup}%
\endgroup}

% We use the same \entry macro as for the index entries.
\let\tocentry = \entry

% Space between chapter (or whatever) number and the title.
\def\labelspace{\hskip1em \relax}

\def\dopageno#1{{\rm #1}}
\def\doshortpageno#1{{\rm #1}}

\def\chapentryfonts{\secfonts \rm}
\def\secentryfonts{\textfonts}
\def\subsecentryfonts{\textfonts}
\def\subsubsecentryfonts{\textfonts}


\message{environments,}
% @foo ... @end foo.

% @point{}, @result{}, @expansion{}, @print{}, @equiv{}.
%
% Since these characters are used in examples, it should be an even number of
% \tt widths. Each \tt character is 1en, so two makes it 1em.
%
\def\point{$\star$}
\def\result{\leavevmode\raise.15ex\hbox to 1em{\hfil$\Rightarrow$\hfil}}
\def\expansion{\leavevmode\raise.1ex\hbox to 1em{\hfil$\mapsto$\hfil}}
\def\print{\leavevmode\lower.1ex\hbox to 1em{\hfil$\dashv$\hfil}}
\def\equiv{\leavevmode\lower.1ex\hbox to 1em{\hfil$\ptexequiv$\hfil}}

% The @error{} command.
% Adapted from the TeXbook's \boxit.
%
\newbox\errorbox
%
{\tentt \global\dimen0 = 3em}% Width of the box.
\dimen2 = .55pt % Thickness of rules
% The text. (`r' is open on the right, `e' somewhat less so on the left.)
\setbox0 = \hbox{\kern-.75pt \reducedsf error\kern-1.5pt}
%
\setbox\errorbox=\hbox to \dimen0{\hfil
   \hsize = \dimen0 \advance\hsize by -5.8pt % Space to left+right.
   \advance\hsize by -2\dimen2 % Rules.
   \vbox{%
      \hrule height\dimen2
      \hbox{\vrule width\dimen2 \kern3pt          % Space to left of text.
         \vtop{\kern2.4pt \box0 \kern2.4pt}% Space above/below.
         \kern3pt\vrule width\dimen2}% Space to right.
      \hrule height\dimen2}
    \hfil}
%
\def\error{\leavevmode\lower.7ex\copy\errorbox}

% @tex ... @end tex    escapes into raw Tex temporarily.
% One exception: @ is still an escape character, so that @end tex works.
% But \@ or @@ will get a plain tex @ character.

\envdef\tex{%
  \catcode `\\=0 \catcode `\{=1 \catcode `\}=2
  \catcode `\$=3 \catcode `\&=4 \catcode `\#=6
  \catcode `\^=7 \catcode `\_=8 \catcode `\~=\active \let~=\tie
  \catcode `\%=14
  \catcode `\+=\other
  \catcode `\"=\other
  \catcode `\|=\other
  \catcode `\<=\other
  \catcode `\>=\other
  \escapechar=`\\
  %
  \let\b=\ptexb
  \let\bullet=\ptexbullet
  \let\c=\ptexc
  \let\,=\ptexcomma
  \let\.=\ptexdot
  \let\dots=\ptexdots
  \let\equiv=\ptexequiv
  \let\!=\ptexexclam
  \let\i=\ptexi
  \let\indent=\ptexindent
  \let\noindent=\ptexnoindent
  \let\{=\ptexlbrace
  \let\+=\tabalign
  \let\}=\ptexrbrace
  \let\/=\ptexslash
  \let\*=\ptexstar
  \let\t=\ptext
  \let\frenchspacing=\plainfrenchspacing
  %
  \def\endldots{\mathinner{\ldots\ldots\ldots\ldots}}%
  \def\enddots{\relax\ifmmode\endldots\else$\mathsurround=0pt \endldots\,$\fi}%
  \def\@{@}%
}
% There is no need to define \Etex.

% Define @lisp ... @end lisp.
% @lisp environment forms a group so it can rebind things,
% including the definition of @end lisp (which normally is erroneous).

% Amount to narrow the margins by for @lisp.
\newskip\lispnarrowing \lispnarrowing=0.4in

% This is the definition that ^^M gets inside @lisp, @example, and other
% such environments.  \null is better than a space, since it doesn't
% have any width.
\def\lisppar{\null\endgraf}

% This space is always present above and below environments.
\newskip\envskipamount \envskipamount = 0pt

% Make spacing and below environment symmetrical.  We use \parskip here
% to help in doing that, since in @example-like environments \parskip
% is reset to zero; thus the \afterenvbreak inserts no space -- but the
% start of the next paragraph will insert \parskip.
%
\def\aboveenvbreak{{%
  % =10000 instead of <10000 because of a special case in \itemzzz and
  % \sectionheading, q.v.
  \ifnum \lastpenalty=10000 \else
    \advance\envskipamount by \parskip
    \endgraf
    \ifdim\lastskip<\envskipamount
      \removelastskip
      % it's not a good place to break if the last penalty was \nobreak
      % or better ...
      \ifnum\lastpenalty<10000 \penalty-50 \fi
      \vskip\envskipamount
    \fi
  \fi
}}

\let\afterenvbreak = \aboveenvbreak

% \nonarrowing is a flag.  If "set", @lisp etc don't narrow margins; it will
% also clear it, so that its embedded environments do the narrowing again.
\let\nonarrowing=\relax

% @cartouche ... @end cartouche: draw rectangle w/rounded corners around
% environment contents.
\font\circle=lcircle10
\newdimen\circthick
\newdimen\cartouter\newdimen\cartinner
\newskip\normbskip\newskip\normpskip\newskip\normlskip
\circthick=\fontdimen8\circle
%
\def\ctl{{\circle\char'013\hskip -6pt}}% 6pt from pl file: 1/2charwidth
\def\ctr{{\hskip 6pt\circle\char'010}}
\def\cbl{{\circle\char'012\hskip -6pt}}
\def\cbr{{\hskip 6pt\circle\char'011}}
\def\carttop{\hbox to \cartouter{\hskip\lskip
        \ctl\leaders\hrule height\circthick\hfil\ctr
        \hskip\rskip}}
\def\cartbot{\hbox to \cartouter{\hskip\lskip
        \cbl\leaders\hrule height\circthick\hfil\cbr
        \hskip\rskip}}
%
\newskip\lskip\newskip\rskip

\envdef\cartouche{%
  \ifhmode\par\fi  % can't be in the midst of a paragraph.
  \startsavinginserts
  \lskip=\leftskip \rskip=\rightskip
  \leftskip=0pt\rightskip=0pt % we want these *outside*.
  \cartinner=\hsize \advance\cartinner by-\lskip
  \advance\cartinner by-\rskip
  \cartouter=\hsize
  \advance\cartouter by 18.4pt	% allow for 3pt kerns on either
				% side, and for 6pt waste from
				% each corner char, and rule thickness
  \normbskip=\baselineskip \normpskip=\parskip \normlskip=\lineskip
  % Flag to tell @lisp, etc., not to narrow margin.
  \let\nonarrowing = t%
  \vbox\bgroup
      \baselineskip=0pt\parskip=0pt\lineskip=0pt
      \carttop
      \hbox\bgroup
	  \hskip\lskip
	  \vrule\kern3pt
	  \vbox\bgroup
	      \kern3pt
	      \hsize=\cartinner
	      \baselineskip=\normbskip
	      \lineskip=\normlskip
	      \parskip=\normpskip
	      \vskip -\parskip
	      \comment % For explanation, see the end of \def\group.
}
\def\Ecartouche{%
              \ifhmode\par\fi
	      \kern3pt
	  \egroup
	  \kern3pt\vrule
	  \hskip\rskip
      \egroup
      \cartbot
  \egroup
  \checkinserts
}


% This macro is called at the beginning of all the @example variants,
% inside a group.
\def\nonfillstart{%
  \aboveenvbreak
  \hfuzz = 12pt % Don't be fussy
  \sepspaces % Make spaces be word-separators rather than space tokens.
  \let\par = \lisppar % don't ignore blank lines
  \obeylines % each line of input is a line of output
  \parskip = 0pt
  \parindent = 0pt
  \emergencystretch = 0pt % don't try to avoid overfull boxes
  \ifx\nonarrowing\relax
    \advance \leftskip by \lispnarrowing
    \exdentamount=\lispnarrowing
  \else
    \let\nonarrowing = \relax
  \fi
  \let\exdent=\nofillexdent
}

% If you want all examples etc. small: @set dispenvsize small.
% If you want even small examples the full size: @set dispenvsize nosmall.
% This affects the following displayed environments:
%    @example, @display, @format, @lisp
%
\def\smallword{small}
\def\nosmallword{nosmall}
\let\SETdispenvsize\relax
\def\setnormaldispenv{%
  \ifx\SETdispenvsize\smallword
    \smallexamplefonts \rm
  \fi
}
\def\setsmalldispenv{%
  \ifx\SETdispenvsize\nosmallword
  \else
    \smallexamplefonts \rm
  \fi
}

% We often define two environments, @foo and @smallfoo.
% Let's do it by one command:
\def\makedispenv #1#2{
  \expandafter\envdef\csname#1\endcsname {\setnormaldispenv #2}
  \expandafter\envdef\csname small#1\endcsname {\setsmalldispenv #2}
  \expandafter\let\csname E#1\endcsname \afterenvbreak
  \expandafter\let\csname Esmall#1\endcsname \afterenvbreak
}

% Define two synonyms:
\def\maketwodispenvs #1#2#3{
  \makedispenv{#1}{#3}
  \makedispenv{#2}{#3}
}

% @lisp: indented, narrowed, typewriter font; @example: same as @lisp.
%
% @smallexample and @smalllisp: use smaller fonts.
% Originally contributed by Pavel@xerox.
%
\maketwodispenvs {lisp}{example}{%
  \nonfillstart
  \tt\quoteexpand
  \let\kbdfont = \kbdexamplefont % Allow @kbd to do something special.
  \gobble       % eat return
}
% @display/@smalldisplay: same as @lisp except keep current font.
%
\makedispenv {display}{%
  \nonfillstart
  \gobble
}

% @format/@smallformat: same as @display except don't narrow margins.
%
\makedispenv{format}{%
  \let\nonarrowing = t%
  \nonfillstart
  \gobble
}

% @flushleft: same as @format, but doesn't obey \SETdispenvsize.
\envdef\flushleft{%
  \let\nonarrowing = t%
  \nonfillstart
  \gobble
}
\let\Eflushleft = \afterenvbreak

% @flushright.
%
\envdef\flushright{%
  \let\nonarrowing = t%
  \nonfillstart
  \advance\leftskip by 0pt plus 1fill
  \gobble
}
\let\Eflushright = \afterenvbreak


% @quotation does normal linebreaking (hence we can't use \nonfillstart)
% and narrows the margins.  We keep \parskip nonzero in general, since
% we're doing normal filling.  So, when using \aboveenvbreak and
% \afterenvbreak, temporarily make \parskip 0.
%
\envdef\quotation{%
  {\parskip=0pt \aboveenvbreak}% because \aboveenvbreak inserts \parskip
  \parindent=0pt
  %
  % @cartouche defines \nonarrowing to inhibit narrowing at next level down.
  \ifx\nonarrowing\relax
    \advance\leftskip by \lispnarrowing
    \advance\rightskip by \lispnarrowing
    \exdentamount = \lispnarrowing
  \else
    \let\nonarrowing = \relax
  \fi
  \parsearg\quotationlabel
}

% We have retained a nonzero parskip for the environment, since we're
% doing normal filling.
%
\def\Equotation{%
  \par
  \ifx\quotationauthor\undefined\else
    % indent a bit.
    \leftline{\kern 2\leftskip \sl ---\quotationauthor}%
  \fi
  {\parskip=0pt \afterenvbreak}%
}

% If we're given an argument, typeset it in bold with a colon after.
\def\quotationlabel#1{%
  \def\temp{#1}%
  \ifx\temp\empty \else
    {\bf #1: }%
  \fi
}


% LaTeX-like @verbatim...@end verbatim and @verb{<char>...<char>}
% If we want to allow any <char> as delimiter,
% we need the curly braces so that makeinfo sees the @verb command, eg:
% `@verbx...x' would look like the '@verbx' command.  --janneke@gnu.org
%
% [Knuth]: Donald Ervin Knuth, 1996.  The TeXbook.
%
% [Knuth] p.344; only we need to do the other characters Texinfo sets
% active too.  Otherwise, they get lost as the first character on a
% verbatim line.
\def\dospecials{%
  \do\ \do\\\do\{\do\}\do\$\do\&%
  \do\#\do\^\do\^^K\do\_\do\^^A\do\%\do\~%
  \do\<\do\>\do\|\do\@\do+\do\"%
}
%
% [Knuth] p. 380
\def\uncatcodespecials{%
  \def\do##1{\catcode`##1=\other}\dospecials}
%
% [Knuth] pp. 380,381,391
% Disable Spanish ligatures ?` and !` of \tt font
\begingroup
  \catcode`\`=\active\gdef`{\relax\lq}
\endgroup
%
% Setup for the @verb command.
%
% Eight spaces for a tab
\begingroup
  \catcode`\^^I=\active
  \gdef\tabeightspaces{\catcode`\^^I=\active\def^^I{\ \ \ \ \ \ \ \ }}
\endgroup
%
\def\setupverb{%
  \tt  % easiest (and conventionally used) font for verbatim
  \def\par{\leavevmode\endgraf}%
  \catcode`\`=\active
  \tabeightspaces
  % Respect line breaks,
  % print special symbols as themselves, and
  % make each space count
  % must do in this order:
  \obeylines \uncatcodespecials \sepspaces
}

% Setup for the @verbatim environment
%
% Real tab expansion
\newdimen\tabw \setbox0=\hbox{\tt\space} \tabw=8\wd0 % tab amount
%
\def\starttabbox{\setbox0=\hbox\bgroup}

% Allow an option to not replace quotes with a regular directed right
% quote/apostrophe (char 0x27), but instead use the undirected quote
% from cmtt (char 0x0d).  The undirected quote is ugly, so don't make it
% the default, but it works for pasting with more pdf viewers (at least
% evince), the lilypond developers report.  xpdf does work with the
% regular 0x27.  
% 
\def\codequoteright{%
  \expandafter\ifx\csname SETcodequoteundirected\endcsname\relax
    '%
  \else
    \char'15
  \fi
}
%
% and a similar option for the left quote char vs. a grave accent.
% Modern fonts display ASCII 0x60 as a grave accent, so some people like
% the code environments to do likewise.
% 
\def\codequoteleft{%
  \expandafter\ifx\csname SETcodequotebacktick\endcsname\relax
    `%
  \else
    \char'22
  \fi
}
%
\begingroup
  \catcode`\^^I=\active
  \gdef\tabexpand{%
    \catcode`\^^I=\active
    \def^^I{\leavevmode\egroup
      \dimen0=\wd0 % the width so far, or since the previous tab
      \divide\dimen0 by\tabw
      \multiply\dimen0 by\tabw % compute previous multiple of \tabw
      \advance\dimen0 by\tabw  % advance to next multiple of \tabw
      \wd0=\dimen0 \box0 \starttabbox
    }%
  }
  \catcode`\'=\active
  \gdef\rquoteexpand{\catcode\rquoteChar=\active \def'{\codequoteright}}%
  %
  \catcode`\`=\active
  \gdef\lquoteexpand{\catcode\lquoteChar=\active \def`{\codequoteleft}}%
  %
  \gdef\quoteexpand{\rquoteexpand \lquoteexpand}%
\endgroup

% start the verbatim environment.
\def\setupverbatim{%
  \let\nonarrowing = t%
  \nonfillstart
  % Easiest (and conventionally used) font for verbatim
  \tt
  \def\par{\leavevmode\egroup\box0\endgraf}%
  \catcode`\`=\active
  \tabexpand
  \quoteexpand
  % Respect line breaks,
  % print special symbols as themselves, and
  % make each space count
  % must do in this order:
  \obeylines \uncatcodespecials \sepspaces
  \everypar{\starttabbox}%
}

% Do the @verb magic: verbatim text is quoted by unique
% delimiter characters.  Before first delimiter expect a
% right brace, after last delimiter expect closing brace:
%
%    \def\doverb'{'<char>#1<char>'}'{#1}
%
% [Knuth] p. 382; only eat outer {}
\begingroup
  \catcode`[=1\catcode`]=2\catcode`\{=\other\catcode`\}=\other
  \gdef\doverb{#1[\def\next##1#1}[##1\endgroup]\next]
\endgroup
%
\def\verb{\begingroup\setupverb\doverb}
%
%
% Do the @verbatim magic: define the macro \doverbatim so that
% the (first) argument ends when '@end verbatim' is reached, ie:
%
%     \def\doverbatim#1@end verbatim{#1}
%
% For Texinfo it's a lot easier than for LaTeX,
% because texinfo's \verbatim doesn't stop at '\end{verbatim}':
% we need not redefine '\', '{' and '}'.
%
% Inspired by LaTeX's verbatim command set [latex.ltx]
%
\begingroup
  \catcode`\ =\active
  \obeylines %
  % ignore everything up to the first ^^M, that's the newline at the end
  % of the @verbatim input line itself.  Otherwise we get an extra blank
  % line in the output.
  \xdef\doverbatim#1^^M#2@end verbatim{#2\noexpand\end\gobble verbatim}%
  % We really want {...\end verbatim} in the body of the macro, but
  % without the active space; thus we have to use \xdef and \gobble.
\endgroup
%
\envdef\verbatim{%
    \setupverbatim\doverbatim
}
\let\Everbatim = \afterenvbreak


% @verbatiminclude FILE - insert text of file in verbatim environment.
%
\def\verbatiminclude{\parseargusing\filenamecatcodes\doverbatiminclude}
%
\def\doverbatiminclude#1{%
  {%
    \makevalueexpandable
    \setupverbatim
    \input #1
    \afterenvbreak
  }%
}

% @copying ... @end copying.
% Save the text away for @insertcopying later.
%
% We save the uninterpreted tokens, rather than creating a box.
% Saving the text in a box would be much easier, but then all the
% typesetting commands (@smallbook, font changes, etc.) have to be done
% beforehand -- and a) we want @copying to be done first in the source
% file; b) letting users define the frontmatter in as flexible order as
% possible is very desirable.
%
\def\copying{\checkenv{}\begingroup\scanargctxt\docopying}
\def\docopying#1@end copying{\endgroup\def\copyingtext{#1}}
%
\def\insertcopying{%
  \begingroup
    \parindent = 0pt  % paragraph indentation looks wrong on title page
    \scanexp\copyingtext
  \endgroup
}

\message{defuns,}
% @defun etc.

\newskip\defbodyindent \defbodyindent=.4in
\newskip\defargsindent \defargsindent=50pt
\newskip\deflastargmargin \deflastargmargin=18pt

% Start the processing of @deffn:
\def\startdefun{%
  \ifnum\lastpenalty<10000
    \medbreak
  \else
    % If there are two @def commands in a row, we'll have a \nobreak,
    % which is there to keep the function description together with its
    % header.  But if there's nothing but headers, we need to allow a
    % break somewhere.  Check specifically for penalty 10002, inserted
    % by \defargscommonending, instead of 10000, since the sectioning
    % commands also insert a nobreak penalty, and we don't want to allow
    % a break between a section heading and a defun.
    % 
    \ifnum\lastpenalty=10002 \penalty2000 \fi
    %
    % Similarly, after a section heading, do not allow a break.
    % But do insert the glue.
    \medskip  % preceded by discardable penalty, so not a breakpoint
  \fi
  %
  \parindent=0in
  \advance\leftskip by \defbodyindent
  \exdentamount=\defbodyindent
}

\def\dodefunx#1{%
  % First, check whether we are in the right environment:
  \checkenv#1%
  %
  % As above, allow line break if we have multiple x headers in a row.
  % It's not a great place, though.
  \ifnum\lastpenalty=10002 \penalty3000 \fi
  %
  % And now, it's time to reuse the body of the original defun:
  \expandafter\gobbledefun#1%
}
\def\gobbledefun#1\startdefun{}

% \printdefunline \deffnheader{text}
%
\def\printdefunline#1#2{%
  \begingroup
    % call \deffnheader:
    #1#2 \endheader
    % common ending:
    \interlinepenalty = 10000
    \advance\rightskip by 0pt plus 1fil
    \endgraf
    \nobreak\vskip -\parskip
    \penalty 10002  % signal to \startdefun and \dodefunx
    % Some of the @defun-type tags do not enable magic parentheses,
    % rendering the following check redundant.  But we don't optimize.
    \checkparencounts
  \endgroup
}

\def\Edefun{\endgraf\medbreak}

% \makedefun{deffn} creates \deffn, \deffnx and \Edeffn;
% the only thing remainnig is to define \deffnheader.
%
\def\makedefun#1{%
  \expandafter\let\csname E#1\endcsname = \Edefun
  \edef\temp{\noexpand\domakedefun
    \makecsname{#1}\makecsname{#1x}\makecsname{#1header}}%
  \temp
}

% \domakedefun \deffn \deffnx \deffnheader
%
% Define \deffn and \deffnx, without parameters.
% \deffnheader has to be defined explicitly.
%
\def\domakedefun#1#2#3{%
  \envdef#1{%
    \startdefun
    \parseargusing\activeparens{\printdefunline#3}%
  }%
  \def#2{\dodefunx#1}%
  \def#3%
}

%%% Untyped functions:

% @deffn category name args
\makedefun{deffn}{\deffngeneral{}}

% @deffn category class name args
\makedefun{defop}#1 {\defopon{#1\ \putwordon}}

% \defopon {category on}class name args
\def\defopon#1#2 {\deffngeneral{\putwordon\ \code{#2}}{#1\ \code{#2}} }

% \deffngeneral {subind}category name args
%
\def\deffngeneral#1#2 #3 #4\endheader{%
  % Remember that \dosubind{fn}{foo}{} is equivalent to \doind{fn}{foo}.
  \dosubind{fn}{\code{#3}}{#1}%
  \defname{#2}{}{#3}\magicamp\defunargs{#4\unskip}%
}

%%% Typed functions:

% @deftypefn category type name args
\makedefun{deftypefn}{\deftypefngeneral{}}

% @deftypeop category class type name args
\makedefun{deftypeop}#1 {\deftypeopon{#1\ \putwordon}}

% \deftypeopon {category on}class type name args
\def\deftypeopon#1#2 {\deftypefngeneral{\putwordon\ \code{#2}}{#1\ \code{#2}} }

% \deftypefngeneral {subind}category type name args
%
\def\deftypefngeneral#1#2 #3 #4 #5\endheader{%
  \dosubind{fn}{\code{#4}}{#1}%
  \defname{#2}{#3}{#4}\defunargs{#5\unskip}%
}

%%% Typed variables:

% @deftypevr category type var args
\makedefun{deftypevr}{\deftypecvgeneral{}}

% @deftypecv category class type var args
\makedefun{deftypecv}#1 {\deftypecvof{#1\ \putwordof}}

% \deftypecvof {category of}class type var args
\def\deftypecvof#1#2 {\deftypecvgeneral{\putwordof\ \code{#2}}{#1\ \code{#2}} }

% \deftypecvgeneral {subind}category type var args
%
\def\deftypecvgeneral#1#2 #3 #4 #5\endheader{%
  \dosubind{vr}{\code{#4}}{#1}%
  \defname{#2}{#3}{#4}\defunargs{#5\unskip}%
}

%%% Untyped variables:

% @defvr category var args
\makedefun{defvr}#1 {\deftypevrheader{#1} {} }

% @defcv category class var args
\makedefun{defcv}#1 {\defcvof{#1\ \putwordof}}

% \defcvof {category of}class var args
\def\defcvof#1#2 {\deftypecvof{#1}#2 {} }

%%% Type:
% @deftp category name args
\makedefun{deftp}#1 #2 #3\endheader{%
  \doind{tp}{\code{#2}}%
  \defname{#1}{}{#2}\defunargs{#3\unskip}%
}

% Remaining @defun-like shortcuts:
\makedefun{defun}{\deffnheader{\putwordDeffunc} }
\makedefun{defmac}{\deffnheader{\putwordDefmac} }
\makedefun{defspec}{\deffnheader{\putwordDefspec} }
\makedefun{deftypefun}{\deftypefnheader{\putwordDeffunc} }
\makedefun{defvar}{\defvrheader{\putwordDefvar} }
\makedefun{defopt}{\defvrheader{\putwordDefopt} }
\makedefun{deftypevar}{\deftypevrheader{\putwordDefvar} }
\makedefun{defmethod}{\defopon\putwordMethodon}
\makedefun{deftypemethod}{\deftypeopon\putwordMethodon}
\makedefun{defivar}{\defcvof\putwordInstanceVariableof}
\makedefun{deftypeivar}{\deftypecvof\putwordInstanceVariableof}

% \defname, which formats the name of the @def (not the args).
% #1 is the category, such as "Function".
% #2 is the return type, if any.
% #3 is the function name.
%
% We are followed by (but not passed) the arguments, if any.
%
\def\defname#1#2#3{%
  % Get the values of \leftskip and \rightskip as they were outside the @def...
  \advance\leftskip by -\defbodyindent
  %
  % How we'll format the type name.  Putting it in brackets helps
  % distinguish it from the body text that may end up on the next line
  % just below it.
  \def\temp{#1}%
  \setbox0=\hbox{\kern\deflastargmargin \ifx\temp\empty\else [\rm\temp]\fi}
  %
  % Figure out line sizes for the paragraph shape.
  % The first line needs space for \box0; but if \rightskip is nonzero,
  % we need only space for the part of \box0 which exceeds it:
  \dimen0=\hsize  \advance\dimen0 by -\wd0  \advance\dimen0 by \rightskip
  % The continuations:
  \dimen2=\hsize  \advance\dimen2 by -\defargsindent
  % (plain.tex says that \dimen1 should be used only as global.)
  \parshape 2 0in \dimen0 \defargsindent \dimen2
  %
  % Put the type name to the right margin.
  \noindent
  \hbox to 0pt{%
    \hfil\box0 \kern-\hsize
    % \hsize has to be shortened this way:
    \kern\leftskip
    % Intentionally do not respect \rightskip, since we need the space.
  }%
  %
  % Allow all lines to be underfull without complaint:
  \tolerance=10000 \hbadness=10000
  \exdentamount=\defbodyindent
  {%
    % defun fonts. We use typewriter by default (used to be bold) because:
    % . we're printing identifiers, they should be in tt in principle.
    % . in languages with many accents, such as Czech or French, it's
    %   common to leave accents off identifiers.  The result looks ok in
    %   tt, but exceedingly strange in rm.
    % . we don't want -- and --- to be treated as ligatures.
    % . this still does not fix the ?` and !` ligatures, but so far no
    %   one has made identifiers using them :).
    \df \tt
    \def\temp{#2}% return value type
    \ifx\temp\empty\else \tclose{\temp} \fi
    #3% output function name
  }%
  {\rm\enskip}% hskip 0.5 em of \tenrm
  %
  \boldbrax
  % arguments will be output next, if any.
}

% Print arguments in slanted roman (not ttsl), inconsistently with using
% tt for the name.  This is because literal text is sometimes needed in
% the argument list (groff manual), and ttsl and tt are not very
% distinguishable.  Prevent hyphenation at `-' chars.
%
\def\defunargs#1{%
  % use sl by default (not ttsl),
  % tt for the names.
  \df \sl \hyphenchar\font=0
  %
  % On the other hand, if an argument has two dashes (for instance), we
  % want a way to get ttsl.  Let's try @var for that.
  \let\var=\ttslanted
  #1%
  \sl\hyphenchar\font=45
}

% We want ()&[] to print specially on the defun line.
%
\def\activeparens{%
  \catcode`\(=\active \catcode`\)=\active
  \catcode`\[=\active \catcode`\]=\active
  \catcode`\&=\active
}

% Make control sequences which act like normal parenthesis chars.
\let\lparen = ( \let\rparen = )

% Be sure that we always have a definition for `(', etc.  For example,
% if the fn name has parens in it, \boldbrax will not be in effect yet,
% so TeX would otherwise complain about undefined control sequence.
{
  \activeparens
  \global\let(=\lparen \global\let)=\rparen
  \global\let[=\lbrack \global\let]=\rbrack
  \global\let& = \&

  \gdef\boldbrax{\let(=\opnr\let)=\clnr\let[=\lbrb\let]=\rbrb}
  \gdef\magicamp{\let&=\amprm}
}

\newcount\parencount

% If we encounter &foo, then turn on ()-hacking afterwards
\newif\ifampseen
\def\amprm#1 {\ampseentrue{\bf\&#1 }}

\def\parenfont{%
  \ifampseen
    % At the first level, print parens in roman,
    % otherwise use the default font.
    \ifnum \parencount=1 \rm \fi
  \else
    % The \sf parens (in \boldbrax) actually are a little bolder than
    % the contained text.  This is especially needed for [ and ] .
    \sf
  \fi
}
\def\infirstlevel#1{%
  \ifampseen
    \ifnum\parencount=1
      #1%
    \fi
  \fi
}
\def\bfafterword#1 {#1 \bf}

\def\opnr{%
  \global\advance\parencount by 1
  {\parenfont(}%
  \infirstlevel \bfafterword
}
\def\clnr{%
  {\parenfont)}%
  \infirstlevel \sl
  \global\advance\parencount by -1
}

\newcount\brackcount
\def\lbrb{%
  \global\advance\brackcount by 1
  {\bf[}%
}
\def\rbrb{%
  {\bf]}%
  \global\advance\brackcount by -1
}

\def\checkparencounts{%
  \ifnum\parencount=0 \else \badparencount \fi
  \ifnum\brackcount=0 \else \badbrackcount \fi
}
\def\badparencount{%
  \errmessage{Unbalanced parentheses in @def}%
  \global\parencount=0
}
\def\badbrackcount{%
  \errmessage{Unbalanced square braces in @def}%
  \global\brackcount=0
}


\message{macros,}
% @macro.

% To do this right we need a feature of e-TeX, \scantokens,
% which we arrange to emulate with a temporary file in ordinary TeX.
\ifx\eTeXversion\undefined
  \newwrite\macscribble
  \def\scantokens#1{%
    \toks0={#1}%
    \immediate\openout\macscribble=\jobname.tmp
    \immediate\write\macscribble{\the\toks0}%
    \immediate\closeout\macscribble
    \input \jobname.tmp
  }
\fi

\def\scanmacro#1{%
  \begingroup
    \newlinechar`\^^M
    \let\xeatspaces\eatspaces
    % Undo catcode changes of \startcontents and \doprintindex
    % When called from @insertcopying or (short)caption, we need active
    % backslash to get it printed correctly.  Previously, we had
    % \catcode`\\=\other instead.  We'll see whether a problem appears
    % with macro expansion.				--kasal, 19aug04
    \catcode`\@=0 \catcode`\\=\active \escapechar=`\@
    % ... and \example
    \spaceisspace
    %
    % Append \endinput to make sure that TeX does not see the ending newline.
    % I've verified that it is necessary both for e-TeX and for ordinary TeX
    %							--kasal, 29nov03
    \scantokens{#1\endinput}%
  \endgroup
}

\def\scanexp#1{%
  \edef\temp{\noexpand\scanmacro{#1}}%
  \temp
}

\newcount\paramno   % Count of parameters
\newtoks\macname    % Macro name
\newif\ifrecursive  % Is it recursive?

% List of all defined macros in the form
%    \definedummyword\macro1\definedummyword\macro2...
% Currently is also contains all @aliases; the list can be split
% if there is a need.
\def\macrolist{}

% Add the macro to \macrolist
\def\addtomacrolist#1{\expandafter \addtomacrolistxxx \csname#1\endcsname}
\def\addtomacrolistxxx#1{%
     \toks0 = \expandafter{\macrolist\definedummyword#1}%
     \xdef\macrolist{\the\toks0}%
}

% Utility routines.
% This does \let #1 = #2, with \csnames; that is,
%   \let \csname#1\endcsname = \csname#2\endcsname
% (except of course we have to play expansion games).
% 
\def\cslet#1#2{%
  \expandafter\let
  \csname#1\expandafter\endcsname
  \csname#2\endcsname
}

% Trim leading and trailing spaces off a string.
% Concepts from aro-bend problem 15 (see CTAN).
{\catcode`\@=11
\gdef\eatspaces #1{\expandafter\trim@\expandafter{#1 }}
\gdef\trim@ #1{\trim@@ @#1 @ #1 @ @@}
\gdef\trim@@ #1@ #2@ #3@@{\trim@@@\empty #2 @}
\def\unbrace#1{#1}
\unbrace{\gdef\trim@@@ #1 } #2@{#1}
}

% Trim a single trailing ^^M off a string.
{\catcode`\^^M=\other \catcode`\Q=3%
\gdef\eatcr #1{\eatcra #1Q^^MQ}%
\gdef\eatcra#1^^MQ{\eatcrb#1Q}%
\gdef\eatcrb#1Q#2Q{#1}%
}

% Macro bodies are absorbed as an argument in a context where
% all characters are catcode 10, 11 or 12, except \ which is active
% (as in normal texinfo). It is necessary to change the definition of \.

% It's necessary to have hard CRs when the macro is executed. This is
% done by  making ^^M (\endlinechar) catcode 12 when reading the macro
% body, and then making it the \newlinechar in \scanmacro.

\def\scanctxt{%
  \catcode`\"=\other
  \catcode`\+=\other
  \catcode`\<=\other
  \catcode`\>=\other
  \catcode`\@=\other
  \catcode`\^=\other
  \catcode`\_=\other
  \catcode`\|=\other
  \catcode`\~=\other
}

\def\scanargctxt{%
  \scanctxt
  \catcode`\\=\other
  \catcode`\^^M=\other
}

\def\macrobodyctxt{%
  \scanctxt
  \catcode`\{=\other
  \catcode`\}=\other
  \catcode`\^^M=\other
  \usembodybackslash
}

\def\macroargctxt{%
  \scanctxt
  \catcode`\\=\other
}

% \mbodybackslash is the definition of \ in @macro bodies.
% It maps \foo\ => \csname macarg.foo\endcsname => #N
% where N is the macro parameter number.
% We define \csname macarg.\endcsname to be \realbackslash, so
% \\ in macro replacement text gets you a backslash.

{\catcode`@=0 @catcode`@\=@active
 @gdef@usembodybackslash{@let\=@mbodybackslash}
 @gdef@mbodybackslash#1\{@csname macarg.#1@endcsname}
}
\expandafter\def\csname macarg.\endcsname{\realbackslash}

\def\macro{\recursivefalse\parsearg\macroxxx}
\def\rmacro{\recursivetrue\parsearg\macroxxx}

\def\macroxxx#1{%
  \getargs{#1}%           now \macname is the macname and \argl the arglist
  \ifx\argl\empty       % no arguments
     \paramno=0%
  \else
     \expandafter\parsemargdef \argl;%
  \fi
  \if1\csname ismacro.\the\macname\endcsname
     \message{Warning: redefining \the\macname}%
  \else
     \expandafter\ifx\csname \the\macname\endcsname \relax
     \else \errmessage{Macro name \the\macname\space already defined}\fi
     \global\cslet{macsave.\the\macname}{\the\macname}%
     \global\expandafter\let\csname ismacro.\the\macname\endcsname=1%
     \addtomacrolist{\the\macname}%
  \fi
  \begingroup \macrobodyctxt
  \ifrecursive \expandafter\parsermacbody
  \else \expandafter\parsemacbody
  \fi}

\parseargdef\unmacro{%
  \if1\csname ismacro.#1\endcsname
    \global\cslet{#1}{macsave.#1}%
    \global\expandafter\let \csname ismacro.#1\endcsname=0%
    % Remove the macro name from \macrolist:
    \begingroup
      \expandafter\let\csname#1\endcsname \relax
      \let\definedummyword\unmacrodo
      \xdef\macrolist{\macrolist}%
    \endgroup
  \else
    \errmessage{Macro #1 not defined}%
  \fi
}

% Called by \do from \dounmacro on each macro.  The idea is to omit any
% macro definitions that have been changed to \relax.
%
\def\unmacrodo#1{%
  \ifx #1\relax
    % remove this
  \else
    \noexpand\definedummyword \noexpand#1%
  \fi
}

% This makes use of the obscure feature that if the last token of a
% <parameter list> is #, then the preceding argument is delimited by
% an opening brace, and that opening brace is not consumed.
\def\getargs#1{\getargsxxx#1{}}
\def\getargsxxx#1#{\getmacname #1 \relax\getmacargs}
\def\getmacname #1 #2\relax{\macname={#1}}
\def\getmacargs#1{\def\argl{#1}}

% Parse the optional {params} list.  Set up \paramno and \paramlist
% so \defmacro knows what to do.  Define \macarg.blah for each blah
% in the params list, to be ##N where N is the position in that list.
% That gets used by \mbodybackslash (above).

% We need to get `macro parameter char #' into several definitions.
% The technique used is stolen from LaTeX:  let \hash be something
% unexpandable, insert that wherever you need a #, and then redefine
% it to # just before using the token list produced.
%
% The same technique is used to protect \eatspaces till just before
% the macro is used.

\def\parsemargdef#1;{\paramno=0\def\paramlist{}%
        \let\hash\relax\let\xeatspaces\relax\parsemargdefxxx#1,;,}
\def\parsemargdefxxx#1,{%
  \if#1;\let\next=\relax
  \else \let\next=\parsemargdefxxx
    \advance\paramno by 1%
    \expandafter\edef\csname macarg.\eatspaces{#1}\endcsname
        {\xeatspaces{\hash\the\paramno}}%
    \edef\paramlist{\paramlist\hash\the\paramno,}%
  \fi\next}

% These two commands read recursive and nonrecursive macro bodies.
% (They're different since rec and nonrec macros end differently.)

\long\def\parsemacbody#1@end macro%
{\xdef\temp{\eatcr{#1}}\endgroup\defmacro}%
\long\def\parsermacbody#1@end rmacro%
{\xdef\temp{\eatcr{#1}}\endgroup\defmacro}%

% This defines the macro itself. There are six cases: recursive and
% nonrecursive macros of zero, one, and many arguments.
% Much magic with \expandafter here.
% \xdef is used so that macro definitions will survive the file
% they're defined in; @include reads the file inside a group.
\def\defmacro{%
  \let\hash=##% convert placeholders to macro parameter chars
  \ifrecursive
    \ifcase\paramno
    % 0
      \expandafter\xdef\csname\the\macname\endcsname{%
        \noexpand\scanmacro{\temp}}%
    \or % 1
      \expandafter\xdef\csname\the\macname\endcsname{%
         \bgroup\noexpand\macroargctxt
         \noexpand\braceorline
         \expandafter\noexpand\csname\the\macname xxx\endcsname}%
      \expandafter\xdef\csname\the\macname xxx\endcsname##1{%
         \egroup\noexpand\scanmacro{\temp}}%
    \else % many
      \expandafter\xdef\csname\the\macname\endcsname{%
         \bgroup\noexpand\macroargctxt
         \noexpand\csname\the\macname xx\endcsname}%
      \expandafter\xdef\csname\the\macname xx\endcsname##1{%
          \expandafter\noexpand\csname\the\macname xxx\endcsname ##1,}%
      \expandafter\expandafter
      \expandafter\xdef
      \expandafter\expandafter
        \csname\the\macname xxx\endcsname
          \paramlist{\egroup\noexpand\scanmacro{\temp}}%
    \fi
  \else
    \ifcase\paramno
    % 0
      \expandafter\xdef\csname\the\macname\endcsname{%
        \noexpand\norecurse{\the\macname}%
        \noexpand\scanmacro{\temp}\egroup}%
    \or % 1
      \expandafter\xdef\csname\the\macname\endcsname{%
         \bgroup\noexpand\macroargctxt
         \noexpand\braceorline
         \expandafter\noexpand\csname\the\macname xxx\endcsname}%
      \expandafter\xdef\csname\the\macname xxx\endcsname##1{%
        \egroup
        \noexpand\norecurse{\the\macname}%
        \noexpand\scanmacro{\temp}\egroup}%
    \else % many
      \expandafter\xdef\csname\the\macname\endcsname{%
         \bgroup\noexpand\macroargctxt
         \expandafter\noexpand\csname\the\macname xx\endcsname}%
      \expandafter\xdef\csname\the\macname xx\endcsname##1{%
          \expandafter\noexpand\csname\the\macname xxx\endcsname ##1,}%
      \expandafter\expandafter
      \expandafter\xdef
      \expandafter\expandafter
      \csname\the\macname xxx\endcsname
      \paramlist{%
          \egroup
          \noexpand\norecurse{\the\macname}%
          \noexpand\scanmacro{\temp}\egroup}%
    \fi
  \fi}

\def\norecurse#1{\bgroup\cslet{#1}{macsave.#1}}

% \braceorline decides whether the next nonwhitespace character is a
% {.  If so it reads up to the closing }, if not, it reads the whole
% line.  Whatever was read is then fed to the next control sequence
% as an argument (by \parsebrace or \parsearg)
\def\braceorline#1{\let\macnamexxx=#1\futurelet\nchar\braceorlinexxx}
\def\braceorlinexxx{%
  \ifx\nchar\bgroup\else
    \expandafter\parsearg
  \fi \macnamexxx}


% @alias.
% We need some trickery to remove the optional spaces around the equal
% sign.  Just make them active and then expand them all to nothing.
\def\alias{\parseargusing\obeyspaces\aliasxxx}
\def\aliasxxx #1{\aliasyyy#1\relax}
\def\aliasyyy #1=#2\relax{%
  {%
    \expandafter\let\obeyedspace=\empty
    \addtomacrolist{#1}%
    \xdef\next{\global\let\makecsname{#1}=\makecsname{#2}}%
  }%
  \next
}


\message{cross references,}

\newwrite\auxfile

\newif\ifhavexrefs    % True if xref values are known.
\newif\ifwarnedxrefs  % True if we warned once that they aren't known.

% @inforef is relatively simple.
\def\inforef #1{\inforefzzz #1,,,,**}
\def\inforefzzz #1,#2,#3,#4**{\putwordSee{} \putwordInfo{} \putwordfile{} \file{\ignorespaces #3{}},
  node \samp{\ignorespaces#1{}}}

% @node's only job in TeX is to define \lastnode, which is used in
% cross-references.  The @node line might or might not have commas, and
% might or might not have spaces before the first comma, like:
% @node foo , bar , ...
% We don't want such trailing spaces in the node name.
%
\parseargdef\node{\checkenv{}\donode #1 ,\finishnodeparse}
%
% also remove a trailing comma, in case of something like this:
% @node Help-Cross,  ,  , Cross-refs
\def\donode#1 ,#2\finishnodeparse{\dodonode #1,\finishnodeparse}
\def\dodonode#1,#2\finishnodeparse{\gdef\lastnode{#1}}

\let\nwnode=\node
\let\lastnode=\empty

% Write a cross-reference definition for the current node.  #1 is the
% type (Ynumbered, Yappendix, Ynothing).
%
\def\donoderef#1{%
  \ifx\lastnode\empty\else
    \setref{\lastnode}{#1}%
    \global\let\lastnode=\empty
  \fi
}

% @anchor{NAME} -- define xref target at arbitrary point.
%
\newcount\savesfregister
%
\def\savesf{\relax \ifhmode \savesfregister=\spacefactor \fi}
\def\restoresf{\relax \ifhmode \spacefactor=\savesfregister \fi}
\def\anchor#1{\savesf \setref{#1}{Ynothing}\restoresf \ignorespaces}

% \setref{NAME}{SNT} defines a cross-reference point NAME (a node or an
% anchor), which consists of three parts:
% 1) NAME-title - the current sectioning name taken from \thissection,
%                 or the anchor name.
% 2) NAME-snt   - section number and type, passed as the SNT arg, or
%                 empty for anchors.
% 3) NAME-pg    - the page number.
%
% This is called from \donoderef, \anchor, and \dofloat.  In the case of
% floats, there is an additional part, which is not written here:
% 4) NAME-lof   - the text as it should appear in a @listoffloats.
%
\def\setref#1#2{%
  \pdfmkdest{#1}%
  \iflinks
    {%
      \atdummies  % preserve commands, but don't expand them
      \edef\writexrdef##1##2{%
	\write\auxfile{@xrdef{#1-% #1 of \setref, expanded by the \edef
	  ##1}{##2}}% these are parameters of \writexrdef
      }%
      \toks0 = \expandafter{\thissection}%
      \immediate \writexrdef{title}{\the\toks0 }%
      \immediate \writexrdef{snt}{\csname #2\endcsname}% \Ynumbered etc.
      \writexrdef{pg}{\folio}% will be written later, during \shipout
    }%
  \fi
}

% @xref, @pxref, and @ref generate cross-references.  For \xrefX, #1 is
% the node name, #2 the name of the Info cross-reference, #3 the printed
% node name, #4 the name of the Info file, #5 the name of the printed
% manual.  All but the node name can be omitted.
%
\def\pxref#1{\putwordsee{} \xrefX[#1,,,,,,,]}
\def\xref#1{\putwordSee{} \xrefX[#1,,,,,,,]}
\def\ref#1{\xrefX[#1,,,,,,,]}
\def\xrefX[#1,#2,#3,#4,#5,#6]{\begingroup
  \unsepspaces
  \def\printedmanual{\ignorespaces #5}%
  \def\printedrefname{\ignorespaces #3}%
  \setbox1=\hbox{\printedmanual\unskip}%
  \setbox0=\hbox{\printedrefname\unskip}%
  \ifdim \wd0 = 0pt
    % No printed node name was explicitly given.
    \expandafter\ifx\csname SETxref-automatic-section-title\endcsname\relax
      % Use the node name inside the square brackets.
      \def\printedrefname{\ignorespaces #1}%
    \else
      % Use the actual chapter/section title appear inside
      % the square brackets.  Use the real section title if we have it.
      \ifdim \wd1 > 0pt
        % It is in another manual, so we don't have it.
        \def\printedrefname{\ignorespaces #1}%
      \else
        \ifhavexrefs
          % We know the real title if we have the xref values.
          \def\printedrefname{\refx{#1-title}{}}%
        \else
          % Otherwise just copy the Info node name.
          \def\printedrefname{\ignorespaces #1}%
        \fi%
      \fi
    \fi
  \fi
  %
  % Make link in pdf output.
  \ifpdf
    \leavevmode
    \getfilename{#4}%
    {\turnoffactive
     % See comments at \activebackslashdouble.
     {\activebackslashdouble \xdef\pdfxrefdest{#1}%
      \backslashparens\pdfxrefdest}%
     %
     \ifnum\filenamelength>0
       \startlink attr{/Border [0 0 0]}%
         goto file{\the\filename.pdf} name{\pdfxrefdest}%
     \else
       \startlink attr{/Border [0 0 0]}%
         goto name{\pdfmkpgn{\pdfxrefdest}}%
     \fi
    }%
    \linkcolor
  \fi
  %
  % Float references are printed completely differently: "Figure 1.2"
  % instead of "[somenode], p.3".  We distinguish them by the
  % LABEL-title being set to a magic string.
  {%
    % Have to otherify everything special to allow the \csname to
    % include an _ in the xref name, etc.
    \indexnofonts
    \turnoffactive
    \expandafter\global\expandafter\let\expandafter\Xthisreftitle
      \csname XR#1-title\endcsname
  }%
  \iffloat\Xthisreftitle
    % If the user specified the print name (third arg) to the ref,
    % print it instead of our usual "Figure 1.2".
    \ifdim\wd0 = 0pt
      \refx{#1-snt}{}%
    \else
      \printedrefname
    \fi
    %
    % if the user also gave the printed manual name (fifth arg), append
    % "in MANUALNAME".
    \ifdim \wd1 > 0pt
      \space \putwordin{} \cite{\printedmanual}%
    \fi
  \else
    % node/anchor (non-float) references.
    %
    % If we use \unhbox0 and \unhbox1 to print the node names, TeX does not
    % insert empty discretionaries after hyphens, which means that it will
    % not find a line break at a hyphen in a node names.  Since some manuals
    % are best written with fairly long node names, containing hyphens, this
    % is a loss.  Therefore, we give the text of the node name again, so it
    % is as if TeX is seeing it for the first time.
    \ifdim \wd1 > 0pt
      \putwordsection{} ``\printedrefname'' \putwordin{} \cite{\printedmanual}%
    \else
      % _ (for example) has to be the character _ for the purposes of the
      % control sequence corresponding to the node, but it has to expand
      % into the usual \leavevmode...\vrule stuff for purposes of
      % printing. So we \turnoffactive for the \refx-snt, back on for the
      % printing, back off for the \refx-pg.
      {\turnoffactive
       % Only output a following space if the -snt ref is nonempty; for
       % @unnumbered and @anchor, it won't be.
       \setbox2 = \hbox{\ignorespaces \refx{#1-snt}{}}%
       \ifdim \wd2 > 0pt \refx{#1-snt}\space\fi
      }%
      % output the `[mynode]' via a macro so it can be overridden.
      \xrefprintnodename\printedrefname
      %
      % But we always want a comma and a space:
      ,\space
      %
      % output the `page 3'.
      \turnoffactive \putwordpage\tie\refx{#1-pg}{}%
    \fi
  \fi
  \endlink
\endgroup}

% This macro is called from \xrefX for the `[nodename]' part of xref
% output.  It's a separate macro only so it can be changed more easily,
% since square brackets don't work well in some documents.  Particularly
% one that Bob is working on :).
%
\def\xrefprintnodename#1{[#1]}

% Things referred to by \setref.
%
\def\Ynothing{}
\def\Yomitfromtoc{}
\def\Ynumbered{%
  \ifnum\secno=0
    \putwordChapter@tie \the\chapno
  \else \ifnum\subsecno=0
    \putwordSection@tie \the\chapno.\the\secno
  \else \ifnum\subsubsecno=0
    \putwordSection@tie \the\chapno.\the\secno.\the\subsecno
  \else
    \putwordSection@tie \the\chapno.\the\secno.\the\subsecno.\the\subsubsecno
  \fi\fi\fi
}
\def\Yappendix{%
  \ifnum\secno=0
     \putwordAppendix@tie @char\the\appendixno{}%
  \else \ifnum\subsecno=0
     \putwordSection@tie @char\the\appendixno.\the\secno
  \else \ifnum\subsubsecno=0
    \putwordSection@tie @char\the\appendixno.\the\secno.\the\subsecno
  \else
    \putwordSection@tie
      @char\the\appendixno.\the\secno.\the\subsecno.\the\subsubsecno
  \fi\fi\fi
}

% Define \refx{NAME}{SUFFIX} to reference a cross-reference string named NAME.
% If its value is nonempty, SUFFIX is output afterward.
%
\def\refx#1#2{%
  {%
    \indexnofonts
    \otherbackslash
    \expandafter\global\expandafter\let\expandafter\thisrefX
      \csname XR#1\endcsname
  }%
  \ifx\thisrefX\relax
    % If not defined, say something at least.
    \angleleft un\-de\-fined\angleright
    \iflinks
      \ifhavexrefs
        \message{\linenumber Undefined cross reference `#1'.}%
      \else
        \ifwarnedxrefs\else
          \global\warnedxrefstrue
          \message{Cross reference values unknown; you must run TeX again.}%
        \fi
      \fi
    \fi
  \else
    % It's defined, so just use it.
    \thisrefX
  \fi
  #2% Output the suffix in any case.
}

% This is the macro invoked by entries in the aux file.  Usually it's
% just a \def (we prepend XR to the control sequence name to avoid
% collisions).  But if this is a float type, we have more work to do.
%
\def\xrdef#1#2{%
  \expandafter\gdef\csname XR#1\endcsname{#2}% remember this xref value.
  %
  % Was that xref control sequence that we just defined for a float?
  \expandafter\iffloat\csname XR#1\endcsname
    % it was a float, and we have the (safe) float type in \iffloattype.
    \expandafter\let\expandafter\floatlist
      \csname floatlist\iffloattype\endcsname
    %
    % Is this the first time we've seen this float type?
    \expandafter\ifx\floatlist\relax
      \toks0 = {\do}% yes, so just \do
    \else
      % had it before, so preserve previous elements in list.
      \toks0 = \expandafter{\floatlist\do}%
    \fi
    %
    % Remember this xref in the control sequence \floatlistFLOATTYPE,
    % for later use in \listoffloats.
    \expandafter\xdef\csname floatlist\iffloattype\endcsname{\the\toks0{#1}}%
  \fi
}

% Read the last existing aux file, if any.  No error if none exists.
%
\def\tryauxfile{%
  \openin 1 \jobname.aux
  \ifeof 1 \else
    \readdatafile{aux}%
    \global\havexrefstrue
  \fi
  \closein 1
}

\def\setupdatafile{%
  \catcode`\^^@=\other
  \catcode`\^^A=\other
  \catcode`\^^B=\other
  \catcode`\^^C=\other
  \catcode`\^^D=\other
  \catcode`\^^E=\other
  \catcode`\^^F=\other
  \catcode`\^^G=\other
  \catcode`\^^H=\other
  \catcode`\^^K=\other
  \catcode`\^^L=\other
  \catcode`\^^N=\other
  \catcode`\^^P=\other
  \catcode`\^^Q=\other
  \catcode`\^^R=\other
  \catcode`\^^S=\other
  \catcode`\^^T=\other
  \catcode`\^^U=\other
  \catcode`\^^V=\other
  \catcode`\^^W=\other
  \catcode`\^^X=\other
  \catcode`\^^Z=\other
  \catcode`\^^[=\other
  \catcode`\^^\=\other
  \catcode`\^^]=\other
  \catcode`\^^^=\other
  \catcode`\^^_=\other
  % It was suggested to set the catcode of ^ to 7, which would allow ^^e4 etc.
  % in xref tags, i.e., node names.  But since ^^e4 notation isn't
  % supported in the main text, it doesn't seem desirable.  Furthermore,
  % that is not enough: for node names that actually contain a ^
  % character, we would end up writing a line like this: 'xrdef {'hat
  % b-title}{'hat b} and \xrdef does a \csname...\endcsname on the first
  % argument, and \hat is not an expandable control sequence.  It could
  % all be worked out, but why?  Either we support ^^ or we don't.
  %
  % The other change necessary for this was to define \auxhat:
  % \def\auxhat{\def^{'hat }}% extra space so ok if followed by letter
  % and then to call \auxhat in \setq.
  %
  \catcode`\^=\other
  %
  % Special characters.  Should be turned off anyway, but...
  \catcode`\~=\other
  \catcode`\[=\other
  \catcode`\]=\other
  \catcode`\"=\other
  \catcode`\_=\other
  \catcode`\|=\other
  \catcode`\<=\other
  \catcode`\>=\other
  \catcode`\$=\other
  \catcode`\#=\other
  \catcode`\&=\other
  \catcode`\%=\other
  \catcode`+=\other % avoid \+ for paranoia even though we've turned it off
  %
  % This is to support \ in node names and titles, since the \
  % characters end up in a \csname.  It's easier than
  % leaving it active and making its active definition an actual \
  % character.  What I don't understand is why it works in the *value*
  % of the xrdef.  Seems like it should be a catcode12 \, and that
  % should not typeset properly.  But it works, so I'm moving on for
  % now.  --karl, 15jan04.
  \catcode`\\=\other
  %
  % Make the characters 128-255 be printing characters.
  {%
    \count1=128
    \def\loop{%
      \catcode\count1=\other
      \advance\count1 by 1
      \ifnum \count1<256 \loop \fi
    }%
  }%
  %
  % @ is our escape character in .aux files, and we need braces.
  \catcode`\{=1
  \catcode`\}=2
  \catcode`\@=0
}

\def\readdatafile#1{%
\begingroup
  \setupdatafile
  \input\jobname.#1
\endgroup}

\message{insertions,}
% including footnotes.

\newcount \footnoteno

% The trailing space in the following definition for supereject is
% vital for proper filling; pages come out unaligned when you do a
% pagealignmacro call if that space before the closing brace is
% removed. (Generally, numeric constants should always be followed by a
% space to prevent strange expansion errors.)
\def\supereject{\par\penalty -20000\footnoteno =0 }

% @footnotestyle is meaningful for info output only.
\let\footnotestyle=\comment

{\catcode `\@=11
%
% Auto-number footnotes.  Otherwise like plain.
\gdef\footnote{%
  \let\indent=\ptexindent
  \let\noindent=\ptexnoindent
  \global\advance\footnoteno by \@ne
  \edef\thisfootno{$^{\the\footnoteno}$}%
  %
  % In case the footnote comes at the end of a sentence, preserve the
  % extra spacing after we do the footnote number.
  \let\@sf\empty
  \ifhmode\edef\@sf{\spacefactor\the\spacefactor}\ptexslash\fi
  %
  % Remove inadvertent blank space before typesetting the footnote number.
  \unskip
  \thisfootno\@sf
  \dofootnote
}%

% Don't bother with the trickery in plain.tex to not require the
% footnote text as a parameter.  Our footnotes don't need to be so general.
%
% Oh yes, they do; otherwise, @ifset (and anything else that uses
% \parseargline) fails inside footnotes because the tokens are fixed when
% the footnote is read.  --karl, 16nov96.
%
\gdef\dofootnote{%
  \insert\footins\bgroup
  % We want to typeset this text as a normal paragraph, even if the
  % footnote reference occurs in (for example) a display environment.
  % So reset some parameters.
  \hsize=\pagewidth
  \interlinepenalty\interfootnotelinepenalty
  \splittopskip\ht\strutbox % top baseline for broken footnotes
  \splitmaxdepth\dp\strutbox
  \floatingpenalty\@MM
  \leftskip\z@skip
  \rightskip\z@skip
  \spaceskip\z@skip
  \xspaceskip\z@skip
  \parindent\defaultparindent
  %
  \smallfonts \rm
  %
  % Because we use hanging indentation in footnotes, a @noindent appears
  % to exdent this text, so make it be a no-op.  makeinfo does not use
  % hanging indentation so @noindent can still be needed within footnote
  % text after an @example or the like (not that this is good style).
  \let\noindent = \relax
  %
  % Hang the footnote text off the number.  Use \everypar in case the
  % footnote extends for more than one paragraph.
  \everypar = {\hang}%
  \textindent{\thisfootno}%
  %
  % Don't crash into the line above the footnote text.  Since this
  % expands into a box, it must come within the paragraph, lest it
  % provide a place where TeX can split the footnote.
  \footstrut
  \futurelet\next\fo@t
}
}%end \catcode `\@=11

% In case a @footnote appears in a vbox, save the footnote text and create
% the real \insert just after the vbox finished.  Otherwise, the insertion
% would be lost.
% Similarily, if a @footnote appears inside an alignment, save the footnote
% text to a box and make the \insert when a row of the table is finished.
% And the same can be done for other insert classes.  --kasal, 16nov03.

% Replace the \insert primitive by a cheating macro.
% Deeper inside, just make sure that the saved insertions are not spilled
% out prematurely.
%
\def\startsavinginserts{%
  \ifx \insert\ptexinsert
    \let\insert\saveinsert
  \else
    \let\checkinserts\relax
  \fi
}

% This \insert replacement works for both \insert\footins{foo} and
% \insert\footins\bgroup foo\egroup, but it doesn't work for \insert27{foo}.
%
\def\saveinsert#1{%
  \edef\next{\noexpand\savetobox \makeSAVEname#1}%
  \afterassignment\next
  % swallow the left brace
  \let\temp =
}
\def\makeSAVEname#1{\makecsname{SAVE\expandafter\gobble\string#1}}
\def\savetobox#1{\global\setbox#1 = \vbox\bgroup \unvbox#1}

\def\checksaveins#1{\ifvoid#1\else \placesaveins#1\fi}

\def\placesaveins#1{%
  \ptexinsert \csname\expandafter\gobblesave\string#1\endcsname
    {\box#1}%
}

% eat @SAVE -- beware, all of them have catcode \other:
{
  \def\dospecials{\do S\do A\do V\do E} \uncatcodespecials  %  ;-)
  \gdef\gobblesave @SAVE{}
}

% initialization:
\def\newsaveins #1{%
  \edef\next{\noexpand\newsaveinsX \makeSAVEname#1}%
  \next
}
\def\newsaveinsX #1{%
  \csname newbox\endcsname #1%
  \expandafter\def\expandafter\checkinserts\expandafter{\checkinserts
    \checksaveins #1}%
}

% initialize:
\let\checkinserts\empty
\newsaveins\footins
\newsaveins\margin


% @image.  We use the macros from epsf.tex to support this.
% If epsf.tex is not installed and @image is used, we complain.
%
% Check for and read epsf.tex up front.  If we read it only at @image
% time, we might be inside a group, and then its definitions would get
% undone and the next image would fail.
\openin 1 = epsf.tex
\ifeof 1 \else
  % Do not bother showing banner with epsf.tex v2.7k (available in
  % doc/epsf.tex and on ctan).
  \def\epsfannounce{\toks0 = }%
  \input epsf.tex
\fi
\closein 1
%
% We will only complain once about lack of epsf.tex.
\newif\ifwarnednoepsf
\newhelp\noepsfhelp{epsf.tex must be installed for images to
  work.  It is also included in the Texinfo distribution, or you can get
  it from ftp://tug.org/tex/epsf.tex.}
%
\def\image#1{%
  \ifx\epsfbox\undefined
    \ifwarnednoepsf \else
      \errhelp = \noepsfhelp
      \errmessage{epsf.tex not found, images will be ignored}%
      \global\warnednoepsftrue
    \fi
  \else
    \imagexxx #1,,,,,\finish
  \fi
}
%
% Arguments to @image:
% #1 is (mandatory) image filename; we tack on .eps extension.
% #2 is (optional) width, #3 is (optional) height.
% #4 is (ignored optional) html alt text.
% #5 is (ignored optional) extension.
% #6 is just the usual extra ignored arg for parsing this stuff.
\newif\ifimagevmode
\def\imagexxx#1,#2,#3,#4,#5,#6\finish{\begingroup
  \catcode`\^^M = 5     % in case we're inside an example
  \normalturnoffactive  % allow _ et al. in names
  % If the image is by itself, center it.
  \ifvmode
    \imagevmodetrue
    \nobreak\bigskip
    % Usually we'll have text after the image which will insert
    % \parskip glue, so insert it here too to equalize the space
    % above and below.
    \nobreak\vskip\parskip
    \nobreak
    \line\bgroup
  \fi
  %
  % Output the image.
  \ifpdf
    \dopdfimage{#1}{#2}{#3}%
  \else
    % \epsfbox itself resets \epsf?size at each figure.
    \setbox0 = \hbox{\ignorespaces #2}\ifdim\wd0 > 0pt \epsfxsize=#2\relax \fi
    \setbox0 = \hbox{\ignorespaces #3}\ifdim\wd0 > 0pt \epsfysize=#3\relax \fi
    \epsfbox{#1.eps}%
  \fi
  %
  \ifimagevmode \egroup \bigbreak \fi  % space after the image
\endgroup}


% @float FLOATTYPE,LABEL,LOC ... @end float for displayed figures, tables,
% etc.  We don't actually implement floating yet, we always include the
% float "here".  But it seemed the best name for the future.
%
\envparseargdef\float{\eatcommaspace\eatcommaspace\dofloat#1, , ,\finish}

% There may be a space before second and/or third parameter; delete it.
\def\eatcommaspace#1, {#1,}

% #1 is the optional FLOATTYPE, the text label for this float, typically
% "Figure", "Table", "Example", etc.  Can't contain commas.  If omitted,
% this float will not be numbered and cannot be referred to.
%
% #2 is the optional xref label.  Also must be present for the float to
% be referable.
%
% #3 is the optional positioning argument; for now, it is ignored.  It
% will somehow specify the positions allowed to float to (here, top, bottom).
%
% We keep a separate counter for each FLOATTYPE, which we reset at each
% chapter-level command.
\let\resetallfloatnos=\empty
%
\def\dofloat#1,#2,#3,#4\finish{%
  \let\thiscaption=\empty
  \let\thisshortcaption=\empty
  %
  % don't lose footnotes inside @float.
  %
  % BEWARE: when the floats start float, we have to issue warning whenever an
  % insert appears inside a float which could possibly float. --kasal, 26may04
  %
  \startsavinginserts
  %
  % We can't be used inside a paragraph.
  \par
  %
  \vtop\bgroup
    \def\floattype{#1}%
    \def\floatlabel{#2}%
    \def\floatloc{#3}% we do nothing with this yet.
    %
    \ifx\floattype\empty
      \let\safefloattype=\empty
    \else
      {%
        % the floattype might have accents or other special characters,
        % but we need to use it in a control sequence name.
        \indexnofonts
        \turnoffactive
        \xdef\safefloattype{\floattype}%
      }%
    \fi
    %
    % If label is given but no type, we handle that as the empty type.
    \ifx\floatlabel\empty \else
      % We want each FLOATTYPE to be numbered separately (Figure 1,
      % Table 1, Figure 2, ...).  (And if no label, no number.)
      %
      \expandafter\getfloatno\csname\safefloattype floatno\endcsname
      \global\advance\floatno by 1
      %
      {%
        % This magic value for \thissection is output by \setref as the
        % XREFLABEL-title value.  \xrefX uses it to distinguish float
        % labels (which have a completely different output format) from
        % node and anchor labels.  And \xrdef uses it to construct the
        % lists of floats.
        %
        \edef\thissection{\floatmagic=\safefloattype}%
        \setref{\floatlabel}{Yfloat}%
      }%
    \fi
    %
    % start with \parskip glue, I guess.
    \vskip\parskip
    %
    % Don't suppress indentation if a float happens to start a section.
    \restorefirstparagraphindent
}

% we have these possibilities:
% @float Foo,lbl & @caption{Cap}: Foo 1.1: Cap
% @float Foo,lbl & no caption:    Foo 1.1
% @float Foo & @caption{Cap}:     Foo: Cap
% @float Foo & no caption:        Foo
% @float ,lbl & Caption{Cap}:     1.1: Cap
% @float ,lbl & no caption:       1.1
% @float & @caption{Cap}:         Cap
% @float & no caption:
%
\def\Efloat{%
    \let\floatident = \empty
    %
    % In all cases, if we have a float type, it comes first.
    \ifx\floattype\empty \else \def\floatident{\floattype}\fi
    %
    % If we have an xref label, the number comes next.
    \ifx\floatlabel\empty \else
      \ifx\floattype\empty \else % if also had float type, need tie first.
        \appendtomacro\floatident{\tie}%
      \fi
      % the number.
      \appendtomacro\floatident{\chaplevelprefix\the\floatno}%
    \fi
    %
    % Start the printed caption with what we've constructed in
    % \floatident, but keep it separate; we need \floatident again.
    \let\captionline = \floatident
    %
    \ifx\thiscaption\empty \else
      \ifx\floatident\empty \else
	\appendtomacro\captionline{: }% had ident, so need a colon between
      \fi
      %
      % caption text.
      \appendtomacro\captionline{\scanexp\thiscaption}%
    \fi
    %
    % If we have anything to print, print it, with space before.
    % Eventually this needs to become an \insert.
    \ifx\captionline\empty \else
      \vskip.5\parskip
      \captionline
      %
      % Space below caption.
      \vskip\parskip
    \fi
    %
    % If have an xref label, write the list of floats info.  Do this
    % after the caption, to avoid chance of it being a breakpoint.
    \ifx\floatlabel\empty \else
      % Write the text that goes in the lof to the aux file as
      % \floatlabel-lof.  Besides \floatident, we include the short
      % caption if specified, else the full caption if specified, else nothing.
      {%
        \atdummies
        %
        % since we read the caption text in the macro world, where ^^M
        % is turned into a normal character, we have to scan it back, so
        % we don't write the literal three characters "^^M" into the aux file.
	\scanexp{%
	  \xdef\noexpand\gtemp{%
	    \ifx\thisshortcaption\empty
	      \thiscaption
	    \else
	      \thisshortcaption
	    \fi
	  }%
	}%
        \immediate\write\auxfile{@xrdef{\floatlabel-lof}{\floatident
	  \ifx\gtemp\empty \else : \gtemp \fi}}%
      }%
    \fi
  \egroup  % end of \vtop
  %
  % place the captured inserts
  %
  % BEWARE: when the floats start floating, we have to issue warning
  % whenever an insert appears inside a float which could possibly
  % float. --kasal, 26may04
  %
  \checkinserts
}

% Append the tokens #2 to the definition of macro #1, not expanding either.
%
\def\appendtomacro#1#2{%
  \expandafter\def\expandafter#1\expandafter{#1#2}%
}

% @caption, @shortcaption
%
\def\caption{\docaption\thiscaption}
\def\shortcaption{\docaption\thisshortcaption}
\def\docaption{\checkenv\float \bgroup\scanargctxt\defcaption}
\def\defcaption#1#2{\egroup \def#1{#2}}

% The parameter is the control sequence identifying the counter we are
% going to use.  Create it if it doesn't exist and assign it to \floatno.
\def\getfloatno#1{%
  \ifx#1\relax
      % Haven't seen this figure type before.
      \csname newcount\endcsname #1%
      %
      % Remember to reset this floatno at the next chap.
      \expandafter\gdef\expandafter\resetallfloatnos
        \expandafter{\resetallfloatnos #1=0 }%
  \fi
  \let\floatno#1%
}

% \setref calls this to get the XREFLABEL-snt value.  We want an @xref
% to the FLOATLABEL to expand to "Figure 3.1".  We call \setref when we
% first read the @float command.
%
\def\Yfloat{\floattype@tie \chaplevelprefix\the\floatno}%

% Magic string used for the XREFLABEL-title value, so \xrefX can
% distinguish floats from other xref types.
\def\floatmagic{!!float!!}

% #1 is the control sequence we are passed; we expand into a conditional
% which is true if #1 represents a float ref.  That is, the magic
% \thissection value which we \setref above.
%
\def\iffloat#1{\expandafter\doiffloat#1==\finish}
%
% #1 is (maybe) the \floatmagic string.  If so, #2 will be the
% (safe) float type for this float.  We set \iffloattype to #2.
%
\def\doiffloat#1=#2=#3\finish{%
  \def\temp{#1}%
  \def\iffloattype{#2}%
  \ifx\temp\floatmagic
}

% @listoffloats FLOATTYPE - print a list of floats like a table of contents.
%
\parseargdef\listoffloats{%
  \def\floattype{#1}% floattype
  {%
    % the floattype might have accents or other special characters,
    % but we need to use it in a control sequence name.
    \indexnofonts
    \turnoffactive
    \xdef\safefloattype{\floattype}%
  }%
  %
  % \xrdef saves the floats as a \do-list in \floatlistSAFEFLOATTYPE.
  \expandafter\ifx\csname floatlist\safefloattype\endcsname \relax
    \ifhavexrefs
      % if the user said @listoffloats foo but never @float foo.
      \message{\linenumber No `\safefloattype' floats to list.}%
    \fi
  \else
    \begingroup
      \leftskip=\tocindent  % indent these entries like a toc
      \let\do=\listoffloatsdo
      \csname floatlist\safefloattype\endcsname
    \endgroup
  \fi
}

% This is called on each entry in a list of floats.  We're passed the
% xref label, in the form LABEL-title, which is how we save it in the
% aux file.  We strip off the -title and look up \XRLABEL-lof, which
% has the text we're supposed to typeset here.
%
% Figures without xref labels will not be included in the list (since
% they won't appear in the aux file).
%
\def\listoffloatsdo#1{\listoffloatsdoentry#1\finish}
\def\listoffloatsdoentry#1-title\finish{{%
  % Can't fully expand XR#1-lof because it can contain anything.  Just
  % pass the control sequence.  On the other hand, XR#1-pg is just the
  % page number, and we want to fully expand that so we can get a link
  % in pdf output.
  \toksA = \expandafter{\csname XR#1-lof\endcsname}%
  %
  % use the same \entry macro we use to generate the TOC and index.
  \edef\writeentry{\noexpand\entry{\the\toksA}{\csname XR#1-pg\endcsname}}%
  \writeentry
}}

\message{localization,}
% and i18n.

% @documentlanguage is usually given very early, just after
% @setfilename.  If done too late, it may not override everything
% properly.  Single argument is the language abbreviation.
% It would be nice if we could set up a hyphenation file here.
%
\parseargdef\documentlanguage{%
  \tex % read txi-??.tex file in plain TeX.
    % Read the file if it exists.
    \openin 1 txi-#1.tex
    \ifeof 1
      \errhelp = \nolanghelp
      \errmessage{Cannot read language file txi-#1.tex}%
    \else
      \input txi-#1.tex
    \fi
    \closein 1
  \endgroup
}
\newhelp\nolanghelp{The given language definition file cannot be found or
is empty.  Maybe you need to install it?  In the current directory
should work if nowhere else does.}


% @documentencoding should change something in TeX eventually, most
% likely, but for now just recognize it.
\let\documentencoding = \comment


% Page size parameters.
%
\newdimen\defaultparindent \defaultparindent = 15pt

\chapheadingskip = 15pt plus 4pt minus 2pt
\secheadingskip = 12pt plus 3pt minus 2pt
\subsecheadingskip = 9pt plus 2pt minus 2pt

% Prevent underfull vbox error messages.
\vbadness = 10000

% Don't be so finicky about underfull hboxes, either.
\hbadness = 2000

% Following George Bush, just get rid of widows and orphans.
\widowpenalty=10000
\clubpenalty=10000

% Use TeX 3.0's \emergencystretch to help line breaking, but if we're
% using an old version of TeX, don't do anything.  We want the amount of
% stretch added to depend on the line length, hence the dependence on
% \hsize.  We call this whenever the paper size is set.
%
\def\setemergencystretch{%
  \ifx\emergencystretch\thisisundefined
    % Allow us to assign to \emergencystretch anyway.
    \def\emergencystretch{\dimen0}%
  \else
    \emergencystretch = .15\hsize
  \fi
}

% Parameters in order: 1) textheight; 2) textwidth;
% 3) voffset; 4) hoffset; 5) binding offset; 6) topskip;
% 7) physical page height; 8) physical page width.
%
% We also call \setleading{\textleading}, so the caller should define
% \textleading.  The caller should also set \parskip.
%
\def\internalpagesizes#1#2#3#4#5#6#7#8{%
  \voffset = #3\relax
  \topskip = #6\relax
  \splittopskip = \topskip
  %
  \vsize = #1\relax
  \advance\vsize by \topskip
  \outervsize = \vsize
  \advance\outervsize by 2\topandbottommargin
  \pageheight = \vsize
  %
  \hsize = #2\relax
  \outerhsize = \hsize
  \advance\outerhsize by 0.5in
  \pagewidth = \hsize
  %
  \normaloffset = #4\relax
  \bindingoffset = #5\relax
  %
  \ifpdf
    \pdfpageheight #7\relax
    \pdfpagewidth #8\relax
  \fi
  %
  \setleading{\textleading}
  %
  \parindent = \defaultparindent
  \setemergencystretch
}

% @letterpaper (the default).
\def\letterpaper{{\globaldefs = 1
  \parskip = 3pt plus 2pt minus 1pt
  \textleading = 13.2pt
  %
  % If page is nothing but text, make it come out even.
  \internalpagesizes{46\baselineskip}{6in}%
                    {\voffset}{.25in}%
                    {\bindingoffset}{36pt}%
                    {11in}{8.5in}%
}}

% Use @smallbook to reset parameters for 7x9.25 trim size.
\def\smallbook{{\globaldefs = 1
  \parskip = 2pt plus 1pt
  \textleading = 12pt
  %
  \internalpagesizes{7.5in}{5in}%
                    {\voffset}{.25in}%
                    {\bindingoffset}{16pt}%
                    {9.25in}{7in}%
  %
  \lispnarrowing = 0.3in
  \tolerance = 700
  \hfuzz = 1pt
  \contentsrightmargin = 0pt
  \defbodyindent = .5cm
}}

% Use @smallerbook to reset parameters for 6x9 trim size.
% (Just testing, parameters still in flux.)
\def\smallerbook{{\globaldefs = 1
  \parskip = 1.5pt plus 1pt
  \textleading = 12pt
  %
  \internalpagesizes{7.4in}{4.8in}%
                    {-.2in}{-.4in}%
                    {0pt}{14pt}%
                    {9in}{6in}%
  %
  \lispnarrowing = 0.25in
  \tolerance = 700
  \hfuzz = 1pt
  \contentsrightmargin = 0pt
  \defbodyindent = .4cm
}}

% Use @afourpaper to print on European A4 paper.
\def\afourpaper{{\globaldefs = 1
  \parskip = 3pt plus 2pt minus 1pt
  \textleading = 13.2pt
  %
  % Double-side printing via postscript on Laserjet 4050
  % prints double-sided nicely when \bindingoffset=10mm and \hoffset=-6mm.
  % To change the settings for a different printer or situation, adjust
  % \normaloffset until the front-side and back-side texts align.  Then
  % do the same for \bindingoffset.  You can set these for testing in
  % your texinfo source file like this:
  % @tex
  % \global\normaloffset = -6mm
  % \global\bindingoffset = 10mm
  % @end tex
  \internalpagesizes{51\baselineskip}{160mm}
                    {\voffset}{\hoffset}%
                    {\bindingoffset}{44pt}%
                    {297mm}{210mm}%
  %
  \tolerance = 700
  \hfuzz = 1pt
  \contentsrightmargin = 0pt
  \defbodyindent = 5mm
}}

% Use @afivepaper to print on European A5 paper.
% From romildo@urano.iceb.ufop.br, 2 July 2000.
% He also recommends making @example and @lisp be small.
\def\afivepaper{{\globaldefs = 1
  \parskip = 2pt plus 1pt minus 0.1pt
  \textleading = 12.5pt
  %
  \internalpagesizes{160mm}{120mm}%
                    {\voffset}{\hoffset}%
                    {\bindingoffset}{8pt}%
                    {210mm}{148mm}%
  %
  \lispnarrowing = 0.2in
  \tolerance = 800
  \hfuzz = 1.2pt
  \contentsrightmargin = 0pt
  \defbodyindent = 2mm
  \tableindent = 12mm
}}

% A specific text layout, 24x15cm overall, intended for A4 paper.
\def\afourlatex{{\globaldefs = 1
  \afourpaper
  \internalpagesizes{237mm}{150mm}%
                    {\voffset}{4.6mm}%
                    {\bindingoffset}{7mm}%
                    {297mm}{210mm}%
  %
  % Must explicitly reset to 0 because we call \afourpaper.
  \globaldefs = 0
}}

% Use @afourwide to print on A4 paper in landscape format.
\def\afourwide{{\globaldefs = 1
  \afourpaper
  \internalpagesizes{241mm}{165mm}%
                    {\voffset}{-2.95mm}%
                    {\bindingoffset}{7mm}%
                    {297mm}{210mm}%
  \globaldefs = 0
}}

% @pagesizes TEXTHEIGHT[,TEXTWIDTH]
% Perhaps we should allow setting the margins, \topskip, \parskip,
% and/or leading, also. Or perhaps we should compute them somehow.
%
\parseargdef\pagesizes{\pagesizesyyy #1,,\finish}
\def\pagesizesyyy#1,#2,#3\finish{{%
  \setbox0 = \hbox{\ignorespaces #2}\ifdim\wd0 > 0pt \hsize=#2\relax \fi
  \globaldefs = 1
  %
  \parskip = 3pt plus 2pt minus 1pt
  \setleading{\textleading}%
  %
  \dimen0 = #1
  \advance\dimen0 by \voffset
  %
  \dimen2 = \hsize
  \advance\dimen2 by \normaloffset
  %
  \internalpagesizes{#1}{\hsize}%
                    {\voffset}{\normaloffset}%
                    {\bindingoffset}{44pt}%
                    {\dimen0}{\dimen2}%
}}

% Set default to letter.
%
\letterpaper


\message{and turning on texinfo input format.}

% Define macros to output various characters with catcode for normal text.
\catcode`\"=\other
\catcode`\~=\other
\catcode`\^=\other
\catcode`\_=\other
\catcode`\|=\other
\catcode`\<=\other
\catcode`\>=\other
\catcode`\+=\other
\catcode`\$=\other
\def\normaldoublequote{"}
\def\normaltilde{~}
\def\normalcaret{^}
\def\normalunderscore{_}
\def\normalverticalbar{|}
\def\normalless{<}
\def\normalgreater{>}
\def\normalplus{+}
\def\normaldollar{$}%$ font-lock fix

% This macro is used to make a character print one way in \tt
% (where it can probably be output as-is), and another way in other fonts,
% where something hairier probably needs to be done.
%
% #1 is what to print if we are indeed using \tt; #2 is what to print
% otherwise.  Since all the Computer Modern typewriter fonts have zero
% interword stretch (and shrink), and it is reasonable to expect all
% typewriter fonts to have this, we can check that font parameter.
%
\def\ifusingtt#1#2{\ifdim \fontdimen3\font=0pt #1\else #2\fi}

% Same as above, but check for italic font.  Actually this also catches
% non-italic slanted fonts since it is impossible to distinguish them from
% italic fonts.  But since this is only used by $ and it uses \sl anyway
% this is not a problem.
\def\ifusingit#1#2{\ifdim \fontdimen1\font>0pt #1\else #2\fi}

% Turn off all special characters except @
% (and those which the user can use as if they were ordinary).
% Most of these we simply print from the \tt font, but for some, we can
% use math or other variants that look better in normal text.

\catcode`\"=\active
\def\activedoublequote{{\tt\char34}}
\let"=\activedoublequote
\catcode`\~=\active
\def~{{\tt\char126}}
\chardef\hat=`\^
\catcode`\^=\active
\def^{{\tt \hat}}

\catcode`\_=\active
\def_{\ifusingtt\normalunderscore\_}
\let\realunder=_
% Subroutine for the previous macro.
\def\_{\leavevmode \kern.07em \vbox{\hrule width.3em height.1ex}\kern .07em }

\catcode`\|=\active
\def|{{\tt\char124}}
\chardef \less=`\<
\catcode`\<=\active
\def<{{\tt \less}}
\chardef \gtr=`\>
\catcode`\>=\active
\def>{{\tt \gtr}}
\catcode`\+=\active
\def+{{\tt \char 43}}
\catcode`\$=\active
\def${\ifusingit{{\sl\$}}\normaldollar}%$ font-lock fix

% If a .fmt file is being used, characters that might appear in a file
% name cannot be active until we have parsed the command line.
% So turn them off again, and have \everyjob (or @setfilename) turn them on.
% \otherifyactive is called near the end of this file.
\def\otherifyactive{\catcode`+=\other \catcode`\_=\other}

% Used sometimes to turn off (effectively) the active characters even after
% parsing them.
\def\turnoffactive{%
  \normalturnoffactive
  \otherbackslash
}

\catcode`\@=0

% \backslashcurfont outputs one backslash character in current font,
% as in \char`\\.
\global\chardef\backslashcurfont=`\\
\global\let\rawbackslashxx=\backslashcurfont  % let existing .??s files work

% \realbackslash is an actual character `\' with catcode other, and
% \doublebackslash is two of them (for the pdf outlines).
{\catcode`\\=\other @gdef@realbackslash{\} @gdef@doublebackslash{\\}}

% In texinfo, backslash is an active character; it prints the backslash
% in fixed width font.
\catcode`\\=\active
@def@normalbackslash{{@tt@backslashcurfont}}
% On startup, @fixbackslash assigns:
%  @let \ = @normalbackslash

% \rawbackslash defines an active \ to do \backslashcurfont.
% \otherbackslash defines an active \ to be a literal `\' character with
% catcode other.
@gdef@rawbackslash{@let\=@backslashcurfont}
@gdef@otherbackslash{@let\=@realbackslash}

% Same as @turnoffactive except outputs \ as {\tt\char`\\} instead of
% the literal character `\'.
% 
@def@normalturnoffactive{%
  @let\=@normalbackslash
  @let"=@normaldoublequote
  @let~=@normaltilde
  @let^=@normalcaret
  @let_=@normalunderscore
  @let|=@normalverticalbar
  @let<=@normalless
  @let>=@normalgreater
  @let+=@normalplus
  @let$=@normaldollar %$ font-lock fix
  @unsepspaces
}

% Make _ and + \other characters, temporarily.
% This is canceled by @fixbackslash.
@otherifyactive

% If a .fmt file is being used, we don't want the `\input texinfo' to show up.
% That is what \eatinput is for; after that, the `\' should revert to printing
% a backslash.
%
@gdef@eatinput input texinfo{@fixbackslash}
@global@let\ = @eatinput

% On the other hand, perhaps the file did not have a `\input texinfo'. Then
% the first `\' in the file would cause an error. This macro tries to fix
% that, assuming it is called before the first `\' could plausibly occur.
% Also turn back on active characters that might appear in the input
% file name, in case not using a pre-dumped format.
%
@gdef@fixbackslash{%
  @ifx\@eatinput @let\ = @normalbackslash @fi
  @catcode`+=@active
  @catcode`@_=@active
}

% Say @foo, not \foo, in error messages.
@escapechar = `@@

% These look ok in all fonts, so just make them not special.
@catcode`@& = @other
@catcode`@# = @other
@catcode`@% = @other


@c Local variables:
@c eval: (add-hook 'write-file-hooks 'time-stamp)
@c page-delimiter: "^\\\\message"
@c time-stamp-start: "def\\\\texinfoversion{"
@c time-stamp-format: "%:y-%02m-%02d.%02H"
@c time-stamp-end: "}"
@c End:

@c vim:sw=2:

@ignore
   arch-tag: e1b36e32-c96e-4135-a41a-0b2efa2ea115
@end ignore
