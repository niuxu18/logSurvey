% texinfo.tex -- TeX macros to handle Texinfo files.
%
% Load plain if necessary, i.e., if running under initex.
\expandafter\ifx\csname fmtname\endcsname\relax\input plain\fi
%
\def\texinfoversion{1999-07-16.19}%
%
% Copyright (C) 1985, 86, 88, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99
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
% to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
% Boston, MA 02111-1307, USA.
%
% In other words, you are welcome to use, share and improve this program.
% You are forbidden to forbid anyone else to use, share and improve
% what you give them.   Help stamp out software-hoarding!
%
% Please try the latest version of texinfo.tex before submitting bug
% reports; you can get the latest version from:
%   ftp://ftp.gnu.org/pub/gnu/texinfo.tex
%   (and all GNU mirrors, see http://www.gnu.org/order/ftp.html)
%   ftp://tug.org/tex/texinfo.tex
%   ftp://ctan.org/macros/texinfo/texinfo.tex
%   (and all CTAN mirrors, finger ctan@ctan.org for a list).
%   /home/gd/gnu/doc/texinfo.tex on the GNU machines.
% The texinfo.tex in any given Texinfo distribution could well be out
% of date, so if that's what you're using, please check.
% There is a small home page for Texinfo at http://texinfo.org/.
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
%   dvips foo.dvi -o # or whatever, to process the dvi file; this makes foo.ps.
% The extra runs of TeX get the cross-reference information correct.
% Sometimes one run after texindex suffices, and sometimes you need more
% than two; texi2dvi does it as many times as necessary.
%
% It is possible to adapt texinfo.tex for other languages.  You can get
% the existing language-specific files from ftp://ftp.gnu.org/gnu/texinfo/.

\message{Loading texinfo [version \texinfoversion]:}

% If in a .fmt file, print the version number
% and turn on active characters that we couldn't do earlier because
% they might have appeared in the input file name.
\everyjob{\message{[Texinfo version \texinfoversion]}%
  \catcode`+=\active \catcode`\_=\active}

% Save some parts of plain tex whose names we will redefine.
\let\ptexb=\b
\let\ptexbullet=\bullet
\let\ptexc=\c
\let\ptexcomma=\,
\let\ptexdot=\.
\let\ptexdots=\dots
\let\ptexend=\end
\let\ptexequiv=\equiv
\let\ptexexclam=\!
\let\ptexi=\i
\let\ptexlbrace=\{
\let\ptexrbrace=\}
\let\ptexstar=\*
\let\ptext=\t

% We never want plain's outer \+ definition in Texinfo.
% For @tex, we can use \tabalign.
\let\+ = \relax

% Get ready for pdf.
\newif\ifpdf
\ifx\pdfoutput\undefined\else
  \input pdfcolor
  \pdfoutput=1
  \pdftrue
\fi

\message{Basics,}
\chardef\other=12

% If this character appears in an error message or help string, it
% starts a new line in the output.
\newlinechar = `^^J

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
\ifx\putwordDeftypevar\undefined\gdef\putwordDeftypevar{Variable}\fi
\ifx\putwordDeffunc\undefined   \gdef\putwordDeffunc{Function}\fi
\ifx\putwordDeftypefun\undefined\gdef\putwordDeftypefun{Function}\fi

% Ignore a token.
%
\def\gobble#1{}

\hyphenation{ap-pen-dix}
\hyphenation{mini-buf-fer mini-buf-fers}
\hyphenation{eshell}
\hyphenation{white-space}

% Margin to add to right of even pages, to left of odd pages.
\newdimen \bindingoffset
\newdimen \normaloffset
\newdimen\pagewidth \newdimen\pageheight

% Sometimes it is convenient to have everything in the transcript file
% and nothing on the terminal.  We don't just call \tracingall here,
% since that produces some useless output on the terminal.
%
\def\gloggingall{\begingroup \globaldefs = 1 \loggingall \endgroup}%
\ifx\eTeXversion\undefined
\def\loggingall{\tracingcommands2 \tracingstats2
   \tracingpages1 \tracingoutput1 \tracinglostchars1
   \tracingmacros2 \tracingparagraphs1 \tracingrestores1
   \showboxbreadth\maxdimen\showboxdepth\maxdimen
}%
\else
\def\loggingall{\tracingcommands3 \tracingstats2
   \tracingpages1 \tracingoutput1 \tracinglostchars1
   \tracingmacros2 \tracingparagraphs1 \tracingrestores1
   \tracingscantokens1 \tracingassigns1 \tracingifs1
   \tracinggroups1 \tracingnesting2
   \showboxbreadth\maxdimen\showboxdepth\maxdimen
}%
\fi

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
    \escapechar = `\\     % use backslash in output files.
    \indexdummies         % don't expand commands in the output.
    \normalturnoffactive  % \ in index entries must not stay \, e.g., if
                   % the page break happens to be in the middle of an example.
    \shipout\vbox{%
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
        % (We lessened \vsize for it in \oddfootingxxx.)
        % The \baselineskip=24pt in plain's \makefootline has no effect.
        \vskip 2\baselineskip
        \unvbox\footlinebox
      \fi
      %
      \ifpdf\pdfmkdest{\the\pageno}\fi
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
  }% end of group with \turnoffactive
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
\def\parsearg#1{%
  \let\next = #1%
  \begingroup
    \obeylines
    \futurelet\temp\parseargx
}

% If the next token is an obeyed space (from an @example environment or
% the like), remove it and recurse.  Otherwise, we're done.
\def\parseargx{%
  % \obeyedspace is defined far below, after the definition of \sepspaces.
  \ifx\obeyedspace\temp
    \expandafter\parseargdiscardspace
  \else
    \expandafter\parseargline
  \fi
}

% Remove a single space (as the delimiter token to the macro call).
{\obeyspaces %
 \gdef\parseargdiscardspace {\futurelet\temp\parseargx}}

{\obeylines %
  \gdef\parseargline#1^^M{%
    \endgroup % End of the group started in \parsearg.
    %
    % First remove any @c comment, then any @comment.
    % Result of each macro is put in \toks0.
    \argremovec #1\c\relax %
    \expandafter\argremovecomment \the\toks0 \comment\relax %
    %
    % Call the caller's macro, saved as \next in \parsearg.
    \expandafter\next\expandafter{\the\toks0}%
  }%
}

% Since all \c{,omment} does is throw away the argument, we can let TeX
% do that for us.  The \relax here is matched by the \relax in the call
% in \parseargline; it could be more or less anything, its purpose is
% just to delimit the argument to the \c.
\def\argremovec#1\c#2\relax{\toks0 = {#1}}
\def\argremovecomment#1\comment#2\relax{\toks0 = {#1}}

% \argremovec{,omment} might leave us with trailing spaces, though; e.g.,
%    @end itemize  @c foo
% will have two active spaces as part of the argument with the
% `itemize'.  Here we remove all active spaces from #1, and assign the
% result to \toks0.
%
% This loses if there are any *other* active characters besides spaces
% in the argument -- _ ^ +, for example -- since they get expanded.
% Fortunately, Texinfo does not define any such commands.  (If it ever
% does, the catcode of the characters in questionwill have to be changed
% here.)  But this means we cannot call \removeactivespaces as part of
% \argremovec{,omment}, since @c uses \parsearg, and thus the argument
% that \parsearg gets might well have any character at all in it.
%
\def\removeactivespaces#1{%
  \begingroup
    \ignoreactivespaces
    \edef\temp{#1}%
    \global\toks0 = \expandafter{\temp}%
  \endgroup
}

% Change the active space to expand to nothing.
%
\begingroup
  \obeyspaces
  \gdef\ignoreactivespaces{\obeyspaces\let =\empty}
\endgroup


\def\flushcr{\ifx\par\lisppar \def\next##1{}\else \let\next=\relax \fi \next}

%% These are used to keep @begin/@end levels from running away
%% Call \inENV within environments (after a \begingroup)
\newif\ifENV \ENVfalse \def\inENV{\ifENV\relax\else\ENVtrue\fi}
\def\ENVcheck{%
\ifENV\errmessage{Still within an environment; press RETURN to continue}
\endgroup\fi} % This is not perfect, but it should reduce lossage

% @begin foo  is the same as @foo, for now.
\newhelp\EMsimple{Press RETURN to continue.}

\outer\def\begin{\parsearg\beginxxx}

\def\beginxxx #1{%
\expandafter\ifx\csname #1\endcsname\relax
{\errhelp=\EMsimple \errmessage{Undefined command @begin #1}}\else
\csname #1\endcsname\fi}

% @end foo executes the definition of \Efoo.
%
\def\end{\parsearg\endxxx}
\def\endxxx #1{%
  \removeactivespaces{#1}%
  \edef\endthing{\the\toks0}%
  %
  \expandafter\ifx\csname E\endthing\endcsname\relax
    \expandafter\ifx\csname \endthing\endcsname\relax
      % There's no \foo, i.e., no ``environment'' foo.
      \errhelp = \EMsimple
      \errmessage{Undefined command `@end \endthing'}%
    \else
      \unmatchedenderror\endthing
    \fi
  \else
    % Everything's ok; the right environment has been started.
    \csname E\endthing\endcsname
  \fi
}

% There is an environment #1, but it hasn't been started.  Give an error.
%
\def\unmatchedenderror#1{%
  \errhelp = \EMsimple
  \errmessage{This `@end #1' doesn't have a matching `@#1'}%
}

% Define the control sequence \E#1 to give an unmatched @end error.
%
\def\defineunmatchedend#1{%
  \expandafter\def\csname E#1\endcsname{\unmatchedenderror{#1}}%
}


% Single-spacing is done by various environments (specifically, in
% \nonfillstart and \quotations).
\newskip\singlespaceskip \singlespaceskip = 12.5pt
\def\singlespace{%
  % Why was this kern here?  It messes up equalizing space above and below
  % environments.  --karl, 6may93
  %{\advance \baselineskip by -\singlespaceskip
  %\kern \baselineskip}%
  \setleading \singlespaceskip
}

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
  % Definitions to produce actual \{ & \} command in an index.
  \catcode`\{ = 12 \catcode`\} = 12
  \catcode`\[ = 1 \catcode`\] = 2
  \catcode`\@ = 0 \catcode`\\ = 12
  @gdef@lbracecmd[\{]%
  @gdef@rbracecmd[\}]%
@endgroup

% Accents: @, @dotaccent @ringaccent @ubaraccent @udotaccent
% Others are defined by plain TeX: @` @' @" @^ @~ @= @v @H.
\let\, = \c
\let\dotaccent = \.
\def\ringaccent#1{{\accent23 #1}}
\let\tieaccent = \t
\let\ubaraccent = \b
\let\udotaccent = \d

% Other special characters: @questiondown @exclamdown
% Plain TeX defines: @AA @AE @O @OE @L (and lowercase versions) @ss.
\def\questiondown{?`}
\def\exclamdown{!`}

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

% @. is an end-of-sentence period.
\def\.{.\spacefactor=3000 }

% @! is an end-of-sentence bang.
\def\!{!\spacefactor=3000 }

% @? is an end-of-sentence query.
\def\?{?\spacefactor=3000 }

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
\def\group{\begingroup
  \ifnum\catcode13=\active \else
    \errhelp = \groupinvalidhelp
    \errmessage{@group invalid in context where filling is enabled}%
  \fi
  %
  % The \vtop we start below produces a box with normal height and large
  % depth; thus, TeX puts \baselineskip glue before it, and (when the
  % next line of text is done) \lineskip glue after it.  (See p.82 of
  % the TeXbook.)  Thus, space below is not quite equal to space
  % above.  But it's pretty close.
  \def\Egroup{%
    \egroup           % End the \vtop.
    \endgroup         % End the \group.
  }%
  %
  \vtop\bgroup
    % We have to put a strut on the last line in case the @group is in
    % the midst of an example, rather than completely enclosing it.
    % Otherwise, the interline space between the last line of the group
    % and the first line afterwards is too small.  But we can't put the
    % strut in \Egroup, since there it would be on a line by itself.
    % Hence this just inserts a strut at the beginning of each line.
    \everypar = {\strut}%
    %
    % Since we have a strut on every line, we don't need any of TeX's
    % normal interline spacing.
    \offinterlineskip
    %
    % OK, but now we have to do something about blank
    % lines in the input in @example-like environments, which normally
    % just turn into \lisppar, which will insert no space now that we've
    % turned off the interline space.  Simplest is to make them be an
    % empty paragraph.
    \ifx\par\lisppar
      \edef\par{\leavevmode \par}%
      %
      % Reset ^^M's definition to new definition of \par.
      \obeylines
    \fi
    %
    % Do @comment since we are called inside an environment such as
    % @example, where each end-of-line in the input causes an
    % end-of-line in the output.  We don't want the end-of-line after
    % the `@group' to put extra space in the output.  Since @group
    % should appear on a line by itself (according to the Texinfo
    % manual), we don't worry about eating any user text.
    \comment
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

\def\need{\parsearg\needx}

% Old definition--didn't work.
%\def\needx #1{\par %
%% This method tries to make TeX break the page naturally
%% if the depth of the box does not fit.
%{\baselineskip=0pt%
%\vtop to #1\mil{\vfil}\kern -#1\mil\nobreak
%\prevdepth=-1000pt
%}}

\def\needx#1{%
  % Go into vertical mode, so we don't make a big box in the middle of a
  % paragraph.
  \par
  %
  % Don't add any leading before our big empty box, but allow a page
  % break, since the best break might be right here.
  \allowbreak
  \nointerlineskip
  \vtop to #1\mil{\vfil}%
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
}

% @br   forces paragraph break

\let\br = \par

% @dots{} output an ellipsis using the current font.
% We do .5em per period so that it has the same spacing in a typewriter
% font as three actual period characters.
%
\def\dots{%
  \leavevmode
  \hbox to 1.5em{%
    \hskip 0pt plus 0.25fil minus 0.25fil
    .\hss.\hss.%
    \hskip 0pt plus 0.5fil minus 0.5fil
  }%
}

% @enddots{} is an end-of-sentence ellipsis.
%
\def\enddots{%
  \leavevmode
  \hbox to 2em{%
    \hskip 0pt plus 0.25fil minus 0.25fil
    .\hss.\hss.\hss.%
    \hskip 0pt plus 0.5fil minus 0.5fil
  }%
  \spacefactor=3000
}


% @page    forces the start of a new page
%
\def\page{\par\vfill\supereject}

% @exdent text....
% outputs text on separate line in roman font, starting at standard page margin

% This records the amount of indent in the innermost environment.
% That's how much \exdent should take out.
\newskip\exdentamount

% This defn is used inside fill environments such as @defun.
\def\exdent{\parsearg\exdentyyy}
\def\exdentyyy #1{{\hfil\break\hbox{\kern -\exdentamount{\rm#1}}\hfil\break}}

% This defn is used inside nofill environments such as @example.
\def\nofillexdent{\parsearg\nofillexdentyyy}
\def\nofillexdentyyy #1{{\advance \leftskip by -\exdentamount
\leftline{\hskip\leftskip{\rm#1}}}}

% @inmargin{TEXT} puts TEXT in the margin next to the current paragraph.

\def\inmargin#1{%
\strut\vadjust{\nobreak\kern-\strutdepth
  \vtop to \strutdepth{\baselineskip\strutdepth\vss
  \llap{\rightskip=\inmarginspacing \vbox{\noindent #1}}\null}}}
\newskip\inmarginspacing \inmarginspacing=1cm
\def\strutdepth{\dp\strutbox}

%\hbox{{\rm#1}}\hfil\break}}

% @include file    insert text of that file as input.
% Allow normal characters that  we make active in the argument (a file name).
\def\include{\begingroup
  \catcode`\\=12
  \catcode`~=12
  \catcode`^=12
  \catcode`_=12
  \catcode`|=12
  \catcode`<=12
  \catcode`>=12
  \catcode`+=12
  \parsearg\includezzz}
% Restore active chars for included file.
\def\includezzz#1{\endgroup\begingroup
  % Read the included file in a group so nested @include's work.
  \def\thisfile{#1}%
  \input\thisfile
\endgroup}

\def\thisfile{}

% @center line   outputs that line, centered

\def\center{\parsearg\centerzzz}
\def\centerzzz #1{{\advance\hsize by -\leftskip
\advance\hsize by -\rightskip
\centerline{#1}}}

% @sp n   outputs n lines of vertical space

\def\sp{\parsearg\spxxx}
\def\spxxx #1{\vskip #1\baselineskip}

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
% We cannot implement @paragraphindent asis, though.
% 
\def\asisword{asis} % no translation, these are keywords
\def\noneword{none}
%
\def\paragraphindent{\parsearg\doparagraphindent}
\def\doparagraphindent#1{%
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
\def\exampleindent{\parsearg\doexampleindent}
\def\doexampleindent#1{%
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

% @asis just yields its argument.  Used with @table, for example.
%
\def\asis#1{#1}

% @math means output in math mode.
% We don't use $'s directly in the definition of \math because control
% sequences like \math are expanded when the toc file is written.  Then,
% we read the toc file back, the $'s will be normal characters (as they
% should be, according to the definition of Texinfo).  So we must use a
% control sequence to switch into and out of math mode.
%
% This isn't quite enough for @math to work properly in indices, but it
% seems unlikely it will ever be needed there.
%
\let\implicitmath = $
\def\math#1{\implicitmath #1\implicitmath}

% @bullet and @minus need the same treatment as @math, just above.
\def\bullet{\implicitmath\ptexbullet\implicitmath}
\def\minus{\implicitmath-\implicitmath}

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
   \iflinks
     \readauxfile
   \fi % \openindices needs to do some work in any case.
   \openindices
   \fixbackslash  % Turn off hack to swallow `\input texinfo'.
   \global\let\setfilename=\comment % Ignore extra @setfilename cmds.
   %
   % If texinfo.cnf is present on the system, read it.
   % Useful for site-wide @afourpaper, etc.
   % Just to be on the safe side, close the input stream before the \input.
   \openin 1 texinfo.cnf
   \ifeof1 \let\temp=\relax \else \def\temp{\input texinfo.cnf }\fi
   \closein1
   \temp
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

\ifpdf
\def\pdfmkdest#1{\pdfdest name{#1@} xyz}
\def\pdfmkpgn#1{#1@}

% Adding outlines to PDF; macros for calculating structure of outlines
% come from Petr Olsak
\def\expnumber#1{\expandafter\ifx\csname#1\endcsname\relax 0%
  \else \csname#1\endcsname \fi}
\def\advancenumber#1{\tempnum=\expnumber{#1}\relax
  \advance\tempnum by1
  \expandafter\xdef\csname#1\endcsname{\the\tempnum}}
\def\pdfmakeoutlines{{%
  \openin 1 \jobname.toc
  \ifeof 1\else\bgroup
    \closein 1 
    \indexnofonts
    \def\char{char}% because \expnumber uses the section title in a \csname
    \def\chapentry ##1##2##3{}
    \def\unnumbchapentry ##1##2{}
    \def\secentry ##1##2##3##4{\advancenumber{chap##2}}
    \def\unnumbsecentry ##1##2{}
    \def\subsecentry ##1##2##3##4##5{\advancenumber{sec##2.##3}}
    \def\unnumbsubsecentry ##1##2{}
    \def\subsubsecentry ##1##2##3##4##5##6{\advancenumber{subsec##2.##3.##4}}
    \def\unnumbsubsubsecentry ##1##2{}
    \input \jobname.toc
    \def\chapentry ##1##2##3{%
      \pdfoutline goto name{\pdfmkpgn{##3}}count-\expnumber{chap##2}{##1}}
    \def\unnumbchapentry ##1##2{%
      \pdfoutline goto name{\pdfmkpgn{##2}}{##1}}
    \def\secentry ##1##2##3##4{%
      \pdfoutline goto name{\pdfmkpgn{##4}}count-\expnumber{sec##2.##3}{##1}}
    \def\unnumbsecentry ##1##2{%
      \pdfoutline goto name{\pdfmkpgn{##2}}{##1}}
    \def\subsecentry ##1##2##3##4##5{%
      \pdfoutline goto name{\pdfmkpgn{##5}}count-\expnumber{subsec##2.##3.##4}{##1}}
    \def\unnumbsubsecentry ##1##2{%
      \pdfoutline goto name{\pdfmkpgn{##2}}{##1}}
    \def\subsubsecentry ##1##2##3##4##5##6{%
      \pdfoutline goto name{\pdfmkpgn{##6}}{##1}}
    \def\unnumbsubsubsecentry ##1##2{%
      \pdfoutline goto name{\pdfmkpgn{##2}}{##1}}
    \input \jobname.toc
  \egroup\fi
}}

\def\makelinks #1,{%
  \def\params{#1}\def\E{END}%
  \ifx\params\E
    \let\nextmakelinks=\relax
  \else
    \let\nextmakelinks=\makelinks
    \ifnum\lnkcount>0,\fi
    \picknum{#1}%
    \Blue\pdfannotlink attr{/Border [0 0 0]} 
      goto name{\pdfmkpgn{\the\pgn}}%
    #1%
    \advance\lnkcount by 1%
    \Black\pdfendlink
  \fi
  \nextmakelinks
}

\def\picknum#1{\expandafter\pn#1}
\def\pn#1{%
  \def\p{#1}%
  \ifx\p\lbrace
    \let\nextpn=\ppn
  \else
    \let\nextpn=\ppnn
    \def\first{#1}
  \fi
  \nextpn
}
\def\ppn#1{\pgn=#1\gobble}
\def\ppnn{\pgn=\first}
\def\pdfmklnk#1{\lnkcount=0\makelinks #1,END,}

\def\addtokens#1#2{\edef\addtoks{\noexpand#1={\the#1#2}}\addtoks}
\def\skipspaces#1{\def\PP{#1}\def\D{|}%
  \ifx\PP\D\let\nextsp\relax
  \else\let\nextsp\skipspaces
    \ifx\p\space\else\addtokens{\filename}{\PP}%
      \advance\filenamelength by 1
    \fi
  \fi
  \nextsp}
\def\getfilename#1{\filenamelength=0\expandafter\skipspaces#1|\relax}

\def\pdflink#1{%
  \leavevmode\Red
  \begingroup
    \normalturnoffactive\def\@{@}%
    \pdfannotlink
      attr{/Border [0 0 0]}%
      user{/Subtype /Link /A << /S /URI /URI (#1) >>}%
  \endgroup
}

\else
  \let\pdflink = \gobble
  \let\pdfmakeoutlines = \relax
\fi % end \ifpdf

\message{fonts,}
% Font-change commands.

% Texinfo sort of supports the sans serif font style, which plain TeX does not.
% So we set up a \sf analogous to plain's \rm, etc.
\newfam\sffam
\def\sf{\fam=\sffam \tensf}
\let\li = \sf % Sometimes we call it \li, not \sf.

% We don't need math for this one.
\def\ttsl{\tenttsl}

% Use Computer Modern fonts at \magstephalf (11pt).
\newcount\mainmagstep
\mainmagstep=\magstephalf

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

\ifx\bigger\relax
\let\mainmagstep=\magstep1
\setfont\textrm\rmshape{12}{1000}
\setfont\texttt\ttshape{12}{1000}
\else
\setfont\textrm\rmshape{10}{\mainmagstep}
\setfont\texttt\ttshape{10}{\mainmagstep}
\fi
% Instead of cmb10, you many want to use cmbx10.
% cmbx10 is a prettier font on its own, but cmb10
% looks better when embedded in a line with cmr10.
\setfont\textbf\bfshape{10}{\mainmagstep}
\setfont\textit\itshape{10}{\mainmagstep}
\setfont\textsl\slshape{10}{\mainmagstep}
\setfont\textsf\sfshape{10}{\mainmagstep}
\setfont\textsc\scshape{10}{\mainmagstep}
\setfont\textttsl\ttslshape{10}{\mainmagstep}
\font\texti=cmmi10 scaled \mainmagstep
\font\textsy=cmsy10 scaled \mainmagstep

% A few fonts for @defun, etc.
\setfont\defbf\bxshape{10}{\magstep1} %was 1314
\setfont\deftt\ttshape{10}{\magstep1}
\def\df{\let\tentt=\deftt \let\tenbf = \defbf \bf}

% Fonts for indices and small examples (9pt).
% We actually use the slanted font rather than the italic,
% because texinfo normally uses the slanted fonts for that.
% Do not make many font distinctions in general in the index, since they
% aren't very useful.
\setfont\ninett\ttshape{9}{1000}
\setfont\ninettsl\ttslshape{10}{900}
\setfont\indrm\rmshape{9}{1000}
\setfont\indit\itshape{9}{1000}
\setfont\indsl\slshape{9}{1000}
\let\indtt=\ninett
\let\indttsl=\ninettsl
\let\indsf=\indrm
\let\indbf=\indrm
\setfont\indsc\scshape{10}{900}
\font\indi=cmmi9
\font\indsy=cmsy9

% Fonts for title page:
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

% Chapter (and unnumbered) fonts (17.28pt).
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

% \setfont\ssecrm\bxshape{10}{\magstep1}    % This size an font looked bad.
% \setfont\ssecit\itshape{10}{\magstep1}    % The letters were too crowded.
% \setfont\ssecsl\slshape{10}{\magstep1}
% \setfont\ssectt\ttshape{10}{\magstep1}
% \setfont\ssecsf\sfshape{10}{\magstep1}

%\setfont\ssecrm\bfshape{10}{1315}      % Note the use of cmb rather than cmbx.
%\setfont\ssecit\itshape{10}{1315}      % Also, the size is a little larger than
%\setfont\ssecsl\slshape{10}{1315}      % being scaled magstep1.
%\setfont\ssectt\ttshape{10}{1315}
%\setfont\ssecsf\sfshape{10}{1315}

%\let\ssecbf=\ssecrm

% Subsection fonts (13.15pt).
\setfont\ssecrm\rmbshape{12}{\magstephalf}
\setfont\ssecit\itbshape{10}{1315}
\setfont\ssecsl\slbshape{10}{1315}
\setfont\ssectt\ttbshape{12}{\magstephalf}
\setfont\ssecttsl\ttslshape{10}{1315}
\setfont\ssecsf\sfbshape{12}{\magstephalf}
\let\ssecbf\ssecrm
\setfont\ssecsc\scbshape{10}{\magstep1}
\font\sseci=cmmi12 scaled \magstephalf
\font\ssecsy=cmsy10 scaled 1315
% The smallcaps and symbol fonts should actually be scaled \magstep1.5,
% but that is not a standard magnification.

% In order for the font changes to affect most math symbols and letters,
% we have to define the \textfont of the standard families.  Since
% texinfo doesn't allow for producing subscripts and superscripts, we
% don't bother to reset \scriptfont and \scriptscriptfont (which would
% also require loading a lot more fonts).
%
\def\resetmathfonts{%
  \textfont0 = \tenrm \textfont1 = \teni \textfont2 = \tensy
  \textfont\itfam = \tenit \textfont\slfam = \tensl \textfont\bffam = \tenbf
  \textfont\ttfam = \tentt \textfont\sffam = \tensf
}


% The font-changing commands redefine the meanings of \tenSTYLE, instead
% of just \STYLE.  We do this so that font changes will continue to work
% in math mode, where it is the current \fam that is relevant in most
% cases, not the current font.  Plain TeX does \def\bf{\fam=\bffam
% \tenbf}, for example.  By redefining \tenbf, we obviate the need to
% redefine \bf itself.
\def\textfonts{%
  \let\tenrm=\textrm \let\tenit=\textit \let\tensl=\textsl
  \let\tenbf=\textbf \let\tentt=\texttt \let\smallcaps=\textsc
  \let\tensf=\textsf \let\teni=\texti \let\tensy=\textsy \let\tenttsl=\textttsl
  \resetmathfonts}
\def\titlefonts{%
  \let\tenrm=\titlerm \let\tenit=\titleit \let\tensl=\titlesl
  \let\tenbf=\titlebf \let\tentt=\titlett \let\smallcaps=\titlesc
  \let\tensf=\titlesf \let\teni=\titlei \let\tensy=\titlesy
  \let\tenttsl=\titlettsl
  \resetmathfonts \setleading{25pt}}
\def\titlefont#1{{\titlefonts\rm #1}}
\def\chapfonts{%
  \let\tenrm=\chaprm \let\tenit=\chapit \let\tensl=\chapsl
  \let\tenbf=\chapbf \let\tentt=\chaptt \let\smallcaps=\chapsc
  \let\tensf=\chapsf \let\teni=\chapi \let\tensy=\chapsy \let\tenttsl=\chapttsl
  \resetmathfonts \setleading{19pt}}
\def\secfonts{%
  \let\tenrm=\secrm \let\tenit=\secit \let\tensl=\secsl
  \let\tenbf=\secbf \let\tentt=\sectt \let\smallcaps=\secsc
  \let\tensf=\secsf \let\teni=\seci \let\tensy=\secsy \let\tenttsl=\secttsl
  \resetmathfonts \setleading{16pt}}
\def\subsecfonts{%
  \let\tenrm=\ssecrm \let\tenit=\ssecit \let\tensl=\ssecsl
  \let\tenbf=\ssecbf \let\tentt=\ssectt \let\smallcaps=\ssecsc
  \let\tensf=\ssecsf \let\teni=\sseci \let\tensy=\ssecsy \let\tenttsl=\ssecttsl
  \resetmathfonts \setleading{15pt}}
\let\subsubsecfonts = \subsecfonts % Maybe make sssec fonts scaled magstephalf?
\def\indexfonts{%
  \let\tenrm=\indrm \let\tenit=\indit \let\tensl=\indsl
  \let\tenbf=\indbf \let\tentt=\indtt \let\smallcaps=\indsc
  \let\tensf=\indsf \let\teni=\indi \let\tensy=\indsy \let\tenttsl=\indttsl
  \resetmathfonts \setleading{12pt}}

% Set up the default fonts, so we can use them for creating boxes.
%
\textfonts

% Define these so they can be easily changed for other fonts.
\def\angleleft{$\langle$}
\def\angleright{$\rangle$}

% Count depth in font-changes, for error checks
\newcount\fontdepth \fontdepth=0

% Fonts for short table of contents.
\setfont\shortcontrm\rmshape{12}{1000}
\setfont\shortcontbf\bxshape{12}{1000}
\setfont\shortcontsl\slshape{12}{1000}

%% Add scribe-like font environments, plus @l for inline lisp (usually sans
%% serif) and @ii for TeX italic

% \smartitalic{ARG} outputs arg in italics, followed by an italic correction
% unless the following character is such as not to need one.
\def\smartitalicx{\ifx\next,\else\ifx\next-\else\ifx\next.\else\/\fi\fi\fi}
\def\smartslanted#1{{\sl #1}\futurelet\next\smartitalicx}
\def\smartitalic#1{{\it #1}\futurelet\next\smartitalicx}

\let\i=\smartitalic
\let\var=\smartslanted
\let\dfn=\smartslanted
\let\emph=\smartitalic
\let\cite=\smartslanted

\def\b#1{{\bf #1}}
\let\strong=\b

% We can't just use \exhyphenpenalty, because that only has effect at
% the end of a paragraph.  Restore normal hyphenation at the end of the
% group within which \nohyphenation is presumably called.
%
\def\nohyphenation{\hyphenchar\font = -1  \aftergroup\restorehyphenation}
\def\restorehyphenation{\hyphenchar\font = `- }

\def\t#1{%
  {\tt \rawbackslash \frenchspacing #1}%
  \null
}
\let\ttfont=\t
\def\samp#1{`\tclose{#1}'\null}
\setfont\smallrm\rmshape{8}{1000}
\font\smallsy=cmsy9
\def\key#1{{\smallrm\textfont2=\smallsy \leavevmode\hbox{%
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
    \frenchspacing
    #1%
  }%
  \null
}

% We *must* turn on hyphenation at `-' and `_' in \code.
% Otherwise, it is too hard to avoid overfull hboxes
% in the Emacs manual, the Library manual, etc.

% Unfortunately, TeX uses one parameter (\hyphenchar) to control
% both hyphenation at - and hyphenation within words.
% We must therefore turn them both off (\tclose does that)
% and arrange explicitly to hyphenate at a dash.
%  -- rms.
{
  \catcode`\-=\active
  \catcode`\_=\active
  %
  \global\def\code{\begingroup
    \catcode`\-=\active \let-\codedash
    \catcode`\_=\active \let_\codeunder
    \codex
  }
  %
  % If we end up with any active - characters when handling the index,
  % just treat them as a normal -.
  \global\def\indexbreaks{\catcode`\-=\active \let-\realdash}
}

\def\realdash{-}
\def\codedash{-\discretionary{}{}{}}
\def\codeunder{\ifusingtt{\normalunderscore\discretionary{}{}{}}{\_}}
\def\codex #1{\tclose{#1}\endgroup}

%\let\exp=\tclose  %Was temporary

% @kbd is like @code, except that if the argument is just one @key command,
% then @kbd has no effect.

% @kbdinputstyle -- arg is `distinct' (@kbd uses slanted tty font always),
%   `example' (@kbd uses ttsl only inside of @example and friends),
%   or `code' (@kbd uses normal tty font always).
\def\kbdinputstyle{\parsearg\kbdinputstylexxx}
\def\kbdinputstylexxx#1{%
  \def\arg{#1}%
  \ifx\arg\worddistinct
    \gdef\kbdexamplefont{\ttsl}\gdef\kbdfont{\ttsl}%
  \else\ifx\arg\wordexample
    \gdef\kbdexamplefont{\ttsl}\gdef\kbdfont{\tt}%
  \else\ifx\arg\wordcode
    \gdef\kbdexamplefont{\tt}\gdef\kbdfont{\tt}%
  \fi\fi\fi
}
\def\worddistinct{distinct}
\def\wordexample{example}
\def\wordcode{code}

% Default is kbdinputdistinct.  (Too much of a hassle to call the macro,
% the catcodes are wrong for parsearg to work.)
\gdef\kbdexamplefont{\ttsl}\gdef\kbdfont{\ttsl}

\def\xkey{\key}
\def\kbdfoo#1#2#3\par{\def\one{#1}\def\three{#3}\def\threex{??}%
\ifx\one\xkey\ifx\threex\three \key{#2}%
\else{\tclose{\kbdfont\look}}\fi
\else{\tclose{\kbdfont\look}}\fi}

% For @url, @env, @command quotes seem unnecessary, so use \code.
\let\url=\code
\let\env=\code
\let\command=\code

% @uref (abbreviation for `urlref') takes an optional (comma-separated)
% second argument specifying the text to display and an optional third
% arg as text to display instead of (rather than in addition to) the url
% itself.  First (mandatory) arg is the url.  Perhaps eventually put in
% a hypertex \special here.
%
\def\uref#1{\douref #1,,,\finish}
\def\douref#1,#2,#3,#4\finish{%
  \pdflink{#1}%
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
  %
  \ifpdf
    \Black\pdfendlink
  \fi
}

% rms does not like angle brackets --karl, 17may97.
% So now @email is just like @uref, unless we are pdf.
% 
%\def\email#1{\angleleft{\tt #1}\angleright}
\ifpdf
  \def\email#1{\doemail#1,,\finish}
  \def\doemail#1,#2,#3\finish{%
    \pdflink{mailto:#1}%
    \setbox0 = \hbox{\ignorespaces #2}%
    \ifdim\wd0>0pt\unhbox0\else\code{#1}\fi
    \Black\pdfendlink
  }
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

% @acronym downcases the argument and prints in smallcaps.
\def\acronym#1{{\smallcaps \lowercase{#1}}}

% @pounds{} is a sterling sign.
\def\pounds{{\it\$}}


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

\def\shorttitlepage{\parsearg\shorttitlepagezzz}
\def\shorttitlepagezzz #1{\begingroup\hbox{}\vskip 1.5in \chaprm \centerline{#1}%
        \endgroup\page\hbox{}\page}

\def\titlepage{\begingroup \parindent=0pt \textfonts
   \let\subtitlerm=\tenrm
   \def\subtitlefont{\subtitlerm \normalbaselineskip = 13pt \normalbaselines}%
   %
   \def\authorfont{\authorrm \normalbaselineskip = 16pt \normalbaselines}%
   %
   % Leave some space at the very top of the page.
   \vglue\titlepagetopglue
   %
   % Now you can print the title using @title.
   \def\title{\parsearg\titlezzz}%
   \def\titlezzz##1{\leftline{\titlefonts\rm ##1}
                    % print a rule at the page bottom also.
                    \finishedtitlepagefalse
                    \vskip4pt \hrule height 4pt width \hsize \vskip4pt}%
   % No rule at page bottom unless we print one at the top with @title.
   \finishedtitlepagetrue
   %
   % Now you can put text using @subtitle.
   \def\subtitle{\parsearg\subtitlezzz}%
   \def\subtitlezzz##1{{\subtitlefont \rightline{##1}}}%
   %
   % @author should come last, but may come many times.
   \def\author{\parsearg\authorzzz}%
   \def\authorzzz##1{\ifseenauthor\else\vskip 0pt plus 1filll\seenauthortrue\fi
      {\authorfont \leftline{##1}}}%
   %
   % Most title ``pages'' are actually two pages long, with space
   % at the top of the second.  We don't want the ragged left on the second.
   \let\oldpage = \page
   \def\page{%
      \iffinishedtitlepage\else
         \finishtitlepage
      \fi
      \oldpage
      \let\page = \oldpage
      \hbox{}}%
%   \def\page{\oldpage \hbox{}}
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
   %
   \HEADINGSon
}

\def\finishtitlepage{%
   \vskip4pt \hrule height 2pt width \hsize
   \vskip\titlepagebottomglue
   \finishedtitlepagetrue
}

%%% Set up page headings and footings.

\let\thispage=\folio

\newtoks\evenheadline    % headline on even pages
\newtoks\oddheadline     % headline on odd pages
\newtoks\evenfootline    % footline on even pages
\newtoks\oddfootline     % footline on odd pages

% Now make Tex use those variables
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
\def\oddheading{\parsearg\oddheadingxxx}
\def\everyheading{\parsearg\everyheadingxxx}

\def\evenfooting{\parsearg\evenfootingxxx}
\def\oddfooting{\parsearg\oddfootingxxx}
\def\everyfooting{\parsearg\everyfootingxxx}

{\catcode`\@=0 %

\gdef\evenheadingxxx #1{\evenheadingyyy #1@|@|@|@|\finish}
\gdef\evenheadingyyy #1@|#2@|#3@|#4\finish{%
\global\evenheadline={\rlap{\centerline{#2}}\line{#1\hfil#3}}}

\gdef\oddheadingxxx #1{\oddheadingyyy #1@|@|@|@|\finish}
\gdef\oddheadingyyy #1@|#2@|#3@|#4\finish{%
\global\oddheadline={\rlap{\centerline{#2}}\line{#1\hfil#3}}}

\gdef\everyheadingxxx#1{\oddheadingxxx{#1}\evenheadingxxx{#1}}%

\gdef\evenfootingxxx #1{\evenfootingyyy #1@|@|@|@|\finish}
\gdef\evenfootingyyy #1@|#2@|#3@|#4\finish{%
\global\evenfootline={\rlap{\centerline{#2}}\line{#1\hfil#3}}}

\gdef\oddfootingxxx #1{\oddfootingyyy #1@|@|@|@|\finish}
\gdef\oddfootingyyy #1@|#2@|#3@|#4\finish{%
  \global\oddfootline = {\rlap{\centerline{#2}}\line{#1\hfil#3}}%
  %
  % Leave some space for the footline.  Hopefully ok to assume
  % @evenfooting will not be used by itself.
  \global\advance\pageheight by -\baselineskip
  \global\advance\vsize by -\baselineskip
}

\gdef\everyfootingxxx#1{\oddfootingxxx{#1}\evenfootingxxx{#1}}
%
}% unbind the catcode of @.

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

\def\HEADINGSoff{
\global\evenheadline={\hfil} \global\evenfootline={\hfil}
\global\oddheadline={\hfil} \global\oddfootline={\hfil}}
\HEADINGSoff
% When we turn headings on, set the page number to 1.
% For double-sided printing, put current file name in lower left corner,
% chapter name on inside top of right hand pages, document
% title on inside top of left hand pages, and page numbers on outside top
% edge of all pages.
\def\HEADINGSdouble{
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
\def\HEADINGSsingle{
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
% Produces Day Month Year style of output.
\def\today{%
  \number\day\space
  \ifcase\month
  \or\putwordMJan\or\putwordMFeb\or\putwordMMar\or\putwordMApr
  \or\putwordMMay\or\putwordMJun\or\putwordMJul\or\putwordMAug
  \or\putwordMSep\or\putwordMOct\or\putwordMNov\or\putwordMDec
  \fi
  \space\number\year}

% @settitle line...  specifies the title of the document, for headings.
% It generates no output of its own.
\def\thistitle{\putwordNoTitle}
\def\settitle{\parsearg\settitlezzz}
\def\settitlezzz #1{\gdef\thistitle{#1}}


\message{tables,}
% Tables -- @table, @ftable, @vtable, @item(x), @kitem(x), @xitem(x).

% default indentation of table text
\newdimen\tableindent \tableindent=.8in
% default indentation of @itemize and @enumerate text
\newdimen\itemindent  \itemindent=.3in
% margin between end of table item and start of table text.
\newdimen\itemmargin  \itemmargin=.1in

% used internally for \itemindent minus \itemmargin
\newdimen\itemmax

% Note @table, @vtable, and @vtable define @item, @itemx, etc., with
% these defs.
% They also define \itemindex
% to index the item name in whatever manner is desired (perhaps none).

\newif\ifitemxneedsnegativevskip

\def\itemxpar{\par\ifitemxneedsnegativevskip\nobreak\vskip-\parskip\nobreak\fi}

\def\internalBitem{\smallbreak \parsearg\itemzzz}
\def\internalBitemx{\itemxpar \parsearg\itemzzz}

\def\internalBxitem "#1"{\def\xitemsubtopix{#1} \smallbreak \parsearg\xitemzzz}
\def\internalBxitemx "#1"{\def\xitemsubtopix{#1} \itemxpar \parsearg\xitemzzz}

\def\internalBkitem{\smallbreak \parsearg\kitemzzz}
\def\internalBkitemx{\itemxpar \parsearg\kitemzzz}

\def\kitemzzz #1{\dosubind {kw}{\code{#1}}{for {\bf \lastfunction}}%
                 \itemzzz {#1}}

\def\xitemzzz #1{\dosubind {kw}{\code{#1}}{for {\bf \xitemsubtopic}}%
                 \itemzzz {#1}}

\def\itemzzz #1{\begingroup %
  \advance\hsize by -\rightskip
  \advance\hsize by -\tableindent
  \setbox0=\hbox{\itemfont{#1}}%
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
    % Stop a page break at the \parskip glue coming up.  Unfortunately
    % we can't prevent a possible page break at the following
    % \baselineskip glue.
    \nobreak
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

\def\item{\errmessage{@item while not in a table}}
\def\itemx{\errmessage{@itemx while not in a table}}
\def\kitem{\errmessage{@kitem while not in a table}}
\def\kitemx{\errmessage{@kitemx while not in a table}}
\def\xitem{\errmessage{@xitem while not in a table}}
\def\xitemx{\errmessage{@xitemx while not in a table}}

% Contains a kludge to get @end[description] to work.
\def\description{\tablez{\dontindex}{1}{}{}{}{}}

% @table, @ftable, @vtable.
\def\table{\begingroup\inENV\obeylines\obeyspaces\tablex}
{\obeylines\obeyspaces%
\gdef\tablex #1^^M{%
\tabley\dontindex#1        \endtabley}}

\def\ftable{\begingroup\inENV\obeylines\obeyspaces\ftablex}
{\obeylines\obeyspaces%
\gdef\ftablex #1^^M{%
\tabley\fnitemindex#1        \endtabley
\def\Eftable{\endgraf\afterenvbreak\endgroup}%
\let\Etable=\relax}}

\def\vtable{\begingroup\inENV\obeylines\obeyspaces\vtablex}
{\obeylines\obeyspaces%
\gdef\vtablex #1^^M{%
\tabley\vritemindex#1        \endtabley
\def\Evtable{\endgraf\afterenvbreak\endgroup}%
\let\Etable=\relax}}

\def\dontindex #1{}
\def\fnitemindex #1{\doind {fn}{\code{#1}}}%
\def\vritemindex #1{\doind {vr}{\code{#1}}}%

{\obeyspaces %
\gdef\tabley#1#2 #3 #4 #5 #6 #7\endtabley{\endgroup%
\tablez{#1}{#2}{#3}{#4}{#5}{#6}}}

\def\tablez #1#2#3#4#5#6{%
\aboveenvbreak %
\begingroup %
\def\Edescription{\Etable}% Necessary kludge.
\let\itemindex=#1%
\ifnum 0#3>0 \advance \leftskip by #3\mil \fi %
\ifnum 0#4>0 \tableindent=#4\mil \fi %
\ifnum 0#5>0 \advance \rightskip by #5\mil \fi %
\def\itemfont{#2}%
\itemmax=\tableindent %
\advance \itemmax by -\itemmargin %
\advance \leftskip by \tableindent %
\exdentamount=\tableindent
\parindent = 0pt
\parskip = \smallskipamount
\ifdim \parskip=0pt \parskip=2pt \fi%
\def\Etable{\endgraf\afterenvbreak\endgroup}%
\let\item = \internalBitem %
\let\itemx = \internalBitemx %
\let\kitem = \internalBkitem %
\let\kitemx = \internalBkitemx %
\let\xitem = \internalBxitem %
\let\xitemx = \internalBxitemx %
}

% This is the counter used by @enumerate, which is really @itemize

\newcount \itemno

\def\itemize{\parsearg\itemizezzz}

\def\itemizezzz #1{%
  \begingroup % ended by the @end itemize
  \itemizey {#1}{\Eitemize}
}

\def\itemizey #1#2{%
\aboveenvbreak %
\itemmax=\itemindent %
\advance \itemmax by -\itemmargin %
\advance \leftskip by \itemindent %
\exdentamount=\itemindent
\parindent = 0pt %
\parskip = \smallskipamount %
\ifdim \parskip=0pt \parskip=2pt \fi%
\def#2{\endgraf\afterenvbreak\endgroup}%
\def\itemcontents{#1}%
\let\item=\itemizeitem}

% Set sfcode to normal for the chars that usually have another value.
% These are `.?!:;,'
\def\frenchspacing{\sfcode46=1000 \sfcode63=1000 \sfcode33=1000
  \sfcode58=1000 \sfcode59=1000 \sfcode44=1000 }

% \splitoff TOKENS\endmark defines \first to be the first token in
% TOKENS, and \rest to be the remainder.
%
\def\splitoff#1#2\endmark{\def\first{#1}\def\rest{#2}}%

% Allow an optional argument of an uppercase letter, lowercase letter,
% or number, to specify the first label in the enumerated list.  No
% argument is the same as `1'.
%
\def\enumerate{\parsearg\enumeratezzz}
\def\enumeratezzz #1{\enumeratey #1  \endenumeratey}
\def\enumeratey #1 #2\endenumeratey{%
  \begingroup % ended by the @end enumerate
  %
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

% Call itemizey, adding a period to the first argument and supplying the
% common last two arguments.  Also subtract one from the initial value in
% \itemno, since @item increments \itemno.
%
\def\startenumeration#1{%
  \advance\itemno by -1
  \itemizey{#1.}\Eenumerate\flushcr
}

% @alphaenumerate and @capsenumerate are abbreviations for giving an arg
% to @enumerate.
%
\def\alphaenumerate{\enumerate{a}}
\def\capsenumerate{\enumerate{A}}
\def\Ealphaenumerate{\Eenumerate}
\def\Ecapsenumerate{\Eenumerate}

% Definition of @item while inside @itemize.

\def\itemizeitem{%
\advance\itemno by 1
{\let\par=\endgraf \smallbreak}%
\ifhmode \errmessage{In hmode at itemizeitem}\fi
{\parskip=0in \hskip 0pt
\hbox to 0pt{\hss \itemcontents\hskip \itemmargin}%
\vadjust{\penalty 1200}}%
\flushcr}

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
%
% For those who want to use more than one line's worth of words in
% the preamble, break the line within one argument and it
% will parse correctly, i.e.,
%
%     @multitable {Column 1 template} {Column 2 template} {Column 3
%      template}
% Not:
%     @multitable {Column 1 template} {Column 2 template}
%      {Column 3 template}

% Each new table line starts with @item, each subsequent new column
% starts with @tab. Empty columns may be produced by supplying @tab's
% with nothing between them for as many times as empty columns are needed,
% ie, @tab@tab@tab will produce two empty columns.

% @item, @tab, @multitable or @end multitable do not need to be on their
% own lines, but it will not hurt if they are.

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

% #1 is the part of the @columnfraction before the decimal point, which
% is presumably either 0 or the empty string (but we don't check, we
% just throw it away).  #2 is the decimal part, which we use as the
% percent of \hsize for this column.
\def\pickupwholefraction#1.#2 {%
  \global\advance\colcount by 1
  \expandafter\xdef\csname col\the\colcount\endcsname{.#2\hsize}%
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
         \setbox0=\hbox{#1\unskip }% Add a normal word space as a separator;
                            % typically that is always in the input, anyway.
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

% This used to have \hskip1sp.  But then the space in a template line is
% not enough.  That is bad.  So let's go back to just & until we
% encounter the problem it was intended to solve again.
% --karl, nathan@acm.org, 20apr99.
\def\tab{&}

% @multitable ... @end multitable definitions:
%
\def\multitable{\parsearg\dotable}
\def\dotable#1{\bgroup
  \vskip\parskip
  \let\item\crcr
  \tolerance=9500
  \hbadness=9500
  \setmultitablespacing
  \parskip=\multitableparskip
  \parindent=\multitableparindent
  \overfullrule=0pt
  \global\colcount=0
  \def\Emultitable{\global\setpercentfalse\cr\egroup\egroup}%
  %
  % To parse everything between @multitable and @item:
  \setuptable#1 \endsetuptable
  %
  % \everycr will reset column counter, \colcount, at the end of
  % each line. Every column entry will cause \colcount to advance by one.
  % The table preamble
  % looks at the current \colcount to find the correct column width.
  \everycr{\noalign{%
  %
  % \filbreak%% keeps underfull box messages off when table breaks over pages.
  % Maybe so, but it also creates really weird page breaks when the table
  % breaks over pages. Wouldn't \vfil be better?  Wait until the problem
  % manifests itself, so it can be fixed for real --karl.
    \global\colcount=0\relax}}%
  %
  % This preamble sets up a generic column definition, which will
  % be used as many times as user calls for columns.
  % \vtop will set a single line and will also let text wrap and
  % continue for many paragraphs if desired.
  \halign\bgroup&\global\advance\colcount by 1\relax
    \multistrut\vtop{\hsize=\expandafter\csname col\the\colcount\endcsname
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
  % Is automatically provided with highlighting sequences respectively marking
  % characters.
  \noindent\ignorespaces##\unskip\multistrut}\cr
}

\def\setmultitablespacing{% test to see if user has set \multitablelinespace.
% If so, do nothing. If not, give it an appropriate dimension based on
% current baselineskip.
\ifdim\multitablelinespace=0pt
%% strut to put in table in case some entry doesn't have descenders,
%% to keep lines equally spaced
\let\multistrut = \strut
%% Test to see if parskip is larger than space between lines of
%% table. If not, do nothing.
%%        If so, set to same dimension as multitablelinespace.
\else
\gdef\multistrut{\vrule height\multitablelinespace depth\dp0
width0pt\relax} \fi
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
% Prevent errors for section commands.
% Used in @ignore and in failing conditionals.
\def\ignoresections{%
  \let\chapter=\relax
  \let\unnumbered=\relax
  \let\top=\relax
  \let\unnumberedsec=\relax
  \let\unnumberedsection=\relax
  \let\unnumberedsubsec=\relax
  \let\unnumberedsubsection=\relax
  \let\unnumberedsubsubsec=\relax
  \let\unnumberedsubsubsection=\relax
  \let\section=\relax
  \let\subsec=\relax
  \let\subsubsec=\relax
  \let\subsection=\relax
  \let\subsubsection=\relax
  \let\appendix=\relax
  \let\appendixsec=\relax
  \let\appendixsection=\relax
  \let\appendixsubsec=\relax
  \let\appendixsubsection=\relax
  \let\appendixsubsubsec=\relax
  \let\appendixsubsubsection=\relax
  \let\contents=\relax
  \let\smallbook=\relax
  \let\titlepage=\relax
}

% Used in nested conditionals, where we have to parse the Texinfo source
% and so want to turn off most commands, in case they are used
% incorrectly.
%
\def\ignoremorecommands{%
  \let\defcodeindex = \relax
  \let\defcv = \relax
  \let\deffn = \relax
  \let\deffnx = \relax
  \let\defindex = \relax
  \let\defivar = \relax
  \let\defmac = \relax
  \let\defmethod = \relax
  \let\defop = \relax
  \let\defopt = \relax
  \let\defspec = \relax
  \let\deftp = \relax
  \let\deftypefn = \relax
  \let\deftypefun = \relax
  \let\deftypeivar = \relax
  \let\deftypeop = \relax
  \let\deftypevar = \relax
  \let\deftypevr = \relax
  \let\defun = \relax
  \let\defvar = \relax
  \let\defvr = \relax
  \let\ref = \relax
  \let\xref = \relax
  \let\printindex = \relax
  \let\pxref = \relax
  \let\settitle = \relax
  \let\setchapternewpage = \relax
  \let\setchapterstyle = \relax
  \let\everyheading = \relax
  \let\evenheading = \relax
  \let\oddheading = \relax
  \let\everyfooting = \relax
  \let\evenfooting = \relax
  \let\oddfooting = \relax
  \let\headings = \relax
  \let\include = \relax
  \let\lowersections = \relax
  \let\down = \relax
  \let\raisesections = \relax
  \let\up = \relax
  \let\set = \relax
  \let\clear = \relax
  \let\item = \relax
}

% Ignore @ignore ... @end ignore.
%
\def\ignore{\doignore{ignore}}

% Ignore @ifinfo, @ifhtml, @ifnottex, @html, @menu, and @direntry text.
%
\def\ifinfo{\doignore{ifinfo}}
\def\ifhtml{\doignore{ifhtml}}
\def\ifnottex{\doignore{ifnottex}}
\def\html{\doignore{html}}
\def\menu{\doignore{menu}}
\def\direntry{\doignore{direntry}}

% @dircategory CATEGORY  -- specify a category of the dir file
% which this file should belong to.  Ignore this in TeX.
\let\dircategory = \comment

% Ignore text until a line `@end #1'.
%
\def\doignore#1{\begingroup
  % Don't complain about control sequences we have declared \outer.
  \ignoresections
  %
  % Define a command to swallow text until we reach `@end #1'.
  % This @ is a catcode 12 token (that is the normal catcode of @ in
  % this texinfo.tex file).  We change the catcode of @ below to match.
  \long\def\doignoretext##1@end #1{\enddoignore}%
  %
  % Make sure that spaces turn into tokens that match what \doignoretext wants.
  \catcode32 = 10
  %
  % Ignore braces, too, so mismatched braces don't cause trouble.
  \catcode`\{ = 9
  \catcode`\} = 9
  %
  % We must not have @c interpreted as a control sequence.
  \catcode`\@ = 12
  %
  % Make the letter c a comment character so that the rest of the line
  % will be ignored. This way, the document can have (for example)
  %   @c @end ifinfo
  % and the @end ifinfo will be properly ignored.
  % (We've just changed @ to catcode 12.)
  \catcode`\c = 14
  %
  % And now expand that command.
  \doignoretext
}

% What we do to finish off ignored text.
%
\def\enddoignore{\endgroup\ignorespaces}%

\newif\ifwarnedobs\warnedobsfalse
\def\obstexwarn{%
  \ifwarnedobs\relax\else
  % We need to warn folks that they may have trouble with TeX 3.0.
  % This uses \immediate\write16 rather than \message to get newlines.
    \immediate\write16{}
    \immediate\write16{WARNING: for users of Unix TeX 3.0!}
    \immediate\write16{This manual trips a bug in TeX version 3.0 (tex hangs).}
    \immediate\write16{If you are running another version of TeX, relax.}
    \immediate\write16{If you are running Unix TeX 3.0, kill this TeX process.}
    \immediate\write16{  Then upgrade your TeX installation if you can.}
    \immediate\write16{  (See ftp://ftp.gnu.org/pub/gnu/TeX.README.)}
    \immediate\write16{If you are stuck with version 3.0, run the}
    \immediate\write16{  script ``tex3patch'' from the Texinfo distribution}
    \immediate\write16{  to use a workaround.}
    \immediate\write16{}
    \global\warnedobstrue
    \fi
}

% **In TeX 3.0, setting text in \nullfont hangs tex.  For a
% workaround (which requires the file ``dummy.tfm'' to be installed),
% uncomment the following line:
%%%%%\font\nullfont=dummy\let\obstexwarn=\relax

% Ignore text, except that we keep track of conditional commands for
% purposes of nesting, up to an `@end #1' command.
%
\def\nestedignore#1{%
  \obstexwarn
  % We must actually expand the ignored text to look for the @end
  % command, so that nested ignore constructs work.  Thus, we put the
  % text into a \vbox and then do nothing with the result.  To minimize
  % the change of memory overflow, we follow the approach outlined on
  % page 401 of the TeXbook: make the current font be a dummy font.
  %
  \setbox0 = \vbox\bgroup
    % Don't complain about control sequences we have declared \outer.
    \ignoresections
    %
    % Define `@end #1' to end the box, which will in turn undefine the
    % @end command again.
    \expandafter\def\csname E#1\endcsname{\egroup\ignorespaces}%
    %
    % We are going to be parsing Texinfo commands.  Most cause no
    % trouble when they are used incorrectly, but some commands do
    % complicated argument parsing or otherwise get confused, so we
    % undefine them.
    %
    % We can't do anything about stray @-signs, unfortunately;
    % they'll produce `undefined control sequence' errors.
    \ignoremorecommands
    %
    % Set the current font to be \nullfont, a TeX primitive, and define
    % all the font commands to also use \nullfont.  We don't use
    % dummy.tfm, as suggested in the TeXbook, because not all sites
    % might have that installed.  Therefore, math mode will still
    % produce output, but that should be an extremely small amount of
    % stuff compared to the main input.
    %
    \nullfont
    \let\tenrm = \nullfont  \let\tenit = \nullfont  \let\tensl = \nullfont
    \let\tenbf = \nullfont  \let\tentt = \nullfont  \let\smallcaps = \nullfont
    \let\tensf = \nullfont
    % Similarly for index fonts (mostly for their use in
    % smallexample)
    \let\indrm = \nullfont  \let\indit = \nullfont  \let\indsl = \nullfont
    \let\indbf = \nullfont  \let\indtt = \nullfont  \let\indsc = \nullfont
    \let\indsf = \nullfont
    %
    % Don't complain when characters are missing from the fonts.
    \tracinglostchars = 0
    %
    % Don't bother to do space factor calculations.
    \frenchspacing
    %
    % Don't report underfull hboxes.
    \hbadness = 10000
    %
    % Do minimal line-breaking.
    \pretolerance = 10000
    %
    % Do not execute instructions in @tex
    \def\tex{\doignore{tex}}%
    % Do not execute macro definitions.
    % `c' is a comment character, so the word `macro' will get cut off.
    \def\macro{\doignore{ma}}%
}

% @set VAR sets the variable VAR to an empty value.
% @set VAR REST-OF-LINE sets VAR to the value REST-OF-LINE.
%
% Since we want to separate VAR from REST-OF-LINE (which might be
% empty), we can't just use \parsearg; we have to insert a space of our
% own to delimit the rest of the line, and then take it out again if we
% didn't need it.  Make sure the catcode of space is correct to avoid
% losing inside @example, for instance.
%
\def\set{\begingroup\catcode` =10
  \catcode`\-=12 \catcode`\_=12 % Allow - and _ in VAR.
  \parsearg\setxxx}
\def\setxxx#1{\setyyy#1 \endsetyyy}
\def\setyyy#1 #2\endsetyyy{%
  \def\temp{#2}%
  \ifx\temp\empty \global\expandafter\let\csname SET#1\endcsname = \empty
  \else \setzzz{#1}#2\endsetzzz % Remove the trailing space \setxxx inserted.
  \fi
  \endgroup
}
% Can't use \xdef to pre-expand #2 and save some time, since \temp or
% \next or other control sequences that we've defined might get us into
% an infinite loop. Consider `@set foo @cite{bar}'.
\def\setzzz#1#2 \endsetzzz{\expandafter\gdef\csname SET#1\endcsname{#2}}

% @clear VAR clears (i.e., unsets) the variable VAR.
%
\def\clear{\parsearg\clearxxx}
\def\clearxxx#1{\global\expandafter\let\csname SET#1\endcsname=\relax}

% @value{foo} gets the text saved in variable foo.
{
  \catcode`\_ = \active
  %
  % We might end up with active _ or - characters in the argument if
  % we're called from @code, as @code{@value{foo-bar_}}.  So \let any
  % such active characters to their normal equivalents.
  \gdef\value{\begingroup
    \catcode`\-=12 \catcode`\_=12
    \indexbreaks \let_\normalunderscore
    \valuexxx}
}
\def\valuexxx#1{\expandablevalue{#1}\endgroup}

% We have this subroutine so that we can handle at least some @value's
% properly in indexes (we \let\value to this in \indexdummies).  Ones
% whose names contain - or _ still won't work, but we can't do anything
% about that.  The command has to be fully expandable, since the result
% winds up in the index file.  This means that if the variable's value
% contains other Texinfo commands, it's almost certain it will fail
% (although perhaps we could fix that with sufficient work to do a
% one-level expansion on the result, instead of complete).
%
\def\expandablevalue#1{%
  \expandafter\ifx\csname SET#1\endcsname\relax
    {[No value for ``#1'']}%
  \else
    \csname SET#1\endcsname
  \fi
}

% @ifset VAR ... @end ifset reads the `...' iff VAR has been defined
% with @set.
%
\def\ifset{\parsearg\ifsetxxx}
\def\ifsetxxx #1{%
  \expandafter\ifx\csname SET#1\endcsname\relax
    \expandafter\ifsetfail
  \else
    \expandafter\ifsetsucceed
  \fi
}
\def\ifsetsucceed{\conditionalsucceed{ifset}}
\def\ifsetfail{\nestedignore{ifset}}
\defineunmatchedend{ifset}

% @ifclear VAR ... @end ifclear reads the `...' iff VAR has never been
% defined with @set, or has been undefined with @clear.
%
\def\ifclear{\parsearg\ifclearxxx}
\def\ifclearxxx #1{%
  \expandafter\ifx\csname SET#1\endcsname\relax
    \expandafter\ifclearsucceed
  \else
    \expandafter\ifclearfail
  \fi
}
\def\ifclearsucceed{\conditionalsucceed{ifclear}}
\def\ifclearfail{\nestedignore{ifclear}}
\defineunmatchedend{ifclear}

% @iftex, @ifnothtml, @ifnotinfo always succeed; we read the text
% following, through the first @end iftex (etc.).  Make `@end iftex'
% (etc.) valid only after an @iftex.
%
\def\iftex{\conditionalsucceed{iftex}}
\def\ifnothtml{\conditionalsucceed{ifnothtml}}
\def\ifnotinfo{\conditionalsucceed{ifnotinfo}}
\defineunmatchedend{iftex}
\defineunmatchedend{ifnothtml}
\defineunmatchedend{ifnotinfo}

% We can't just want to start a group at @iftex (for example) and end it
% at @end iftex, since then @set commands inside the conditional have no
% effect (they'd get reverted at the end of the group).  So we must
% define \Eiftex to redefine itself to be its previous value.  (We can't
% just define it to fail again with an ``unmatched end'' error, since
% the @ifset might be nested.)
%
\def\conditionalsucceed#1{%
  \edef\temp{%
    % Remember the current value of \E#1.
    \let\nece{prevE#1} = \nece{E#1}%
    %
    % At the `@end #1', redefine \E#1 to be its previous value.
    \def\nece{E#1}{\let\nece{E#1} = \nece{prevE#1}}%
  }%
  \temp
}

% We need to expand lots of \csname's, but we don't want to expand the
% control sequences after we've constructed them.
%
\def\nece#1{\expandafter\noexpand\csname#1\endcsname}

% @defininfoenclose.
\let\definfoenclose=\comment


\message{indexing,}
% Index generation facilities

% Define \newwrite to be identical to plain tex's \newwrite
% except not \outer, so it can be used within \newindex.
{\catcode`\@=11
\gdef\newwrite{\alloc@7\write\chardef\sixt@@n}}

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

\def\defindex{\parsearg\newindex}

% Define @defcodeindex, like @defindex except put all entries in @code.

\def\newcodeindex#1{%
  \iflinks
    \expandafter\newwrite \csname#1indfile\endcsname
    \openout \csname#1indfile\endcsname \jobname.#1
  \fi
  \expandafter\xdef\csname#1index\endcsname{%
    \noexpand\docodeindex{#1}}
}

\def\defcodeindex{\parsearg\newcodeindex}

% @synindex foo bar    makes index foo feed into index bar.
% Do this instead of @defindex foo if you don't want it as a separate index.
% The \closeout helps reduce unnecessary open files; the limit on the
% Acorn RISC OS is a mere 16 files.
\def\synindex#1 #2 {%
  \expandafter\let\expandafter\synindexfoo\expandafter=\csname#2indfile\endcsname
  \expandafter\closeout\csname#1indfile\endcsname
  \expandafter\let\csname#1indfile\endcsname=\synindexfoo
  \expandafter\xdef\csname#1index\endcsname{% define \xxxindex
    \noexpand\doindex{#2}}%
}

% @syncodeindex foo bar   similar, but put all entries made for index foo
% inside @code.
\def\syncodeindex#1 #2 {%
  \expandafter\let\expandafter\synindexfoo\expandafter=\csname#2indfile\endcsname
  \expandafter\closeout\csname#1indfile\endcsname
  \expandafter\let\csname#1indfile\endcsname=\synindexfoo
  \expandafter\xdef\csname#1index\endcsname{% define \xxxindex
    \noexpand\docodeindex{#2}}%
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

\def\indexdummies{%
\def\ { }%
% Take care of the plain tex accent commands.
\def\"{\realbackslash "}%
\def\`{\realbackslash `}%
\def\'{\realbackslash '}%
\def\^{\realbackslash ^}%
\def\~{\realbackslash ~}%
\def\={\realbackslash =}%
\def\b{\realbackslash b}%
\def\c{\realbackslash c}%
\def\d{\realbackslash d}%
\def\u{\realbackslash u}%
\def\v{\realbackslash v}%
\def\H{\realbackslash H}%
% Take care of the plain tex special European modified letters.
\def\oe{\realbackslash oe}%
\def\ae{\realbackslash ae}%
\def\aa{\realbackslash aa}%
\def\OE{\realbackslash OE}%
\def\AE{\realbackslash AE}%
\def\AA{\realbackslash AA}%
\def\o{\realbackslash o}%
\def\O{\realbackslash O}%
\def\l{\realbackslash l}%
\def\L{\realbackslash L}%
\def\ss{\realbackslash ss}%
% Take care of texinfo commands likely to appear in an index entry.
% (Must be a way to avoid doing expansion at all, and thus not have to
% laboriously list every single command here.)
\def\@{@}% will be @@ when we switch to @ as escape char.
% Need these in case \tex is in effect and \{ is a \delimiter again.
% But can't use \lbracecmd and \rbracecmd because texindex assumes
% braces and backslashes are used only as delimiters.
\let\{ = \mylbrace
\let\} = \myrbrace
\def\_{{\realbackslash _}}%
\def\w{\realbackslash w }%
\def\bf{\realbackslash bf }%
%\def\rm{\realbackslash rm }%
\def\sl{\realbackslash sl }%
\def\sf{\realbackslash sf}%
\def\tt{\realbackslash tt}%
\def\gtr{\realbackslash gtr}%
\def\less{\realbackslash less}%
\def\hat{\realbackslash hat}%
\def\TeX{\realbackslash TeX}%
\def\dots{\realbackslash dots }%
\def\result{\realbackslash result}%
\def\equiv{\realbackslash equiv}%
\def\expansion{\realbackslash expansion}%
\def\print{\realbackslash print}%
\def\error{\realbackslash error}%
\def\point{\realbackslash point}%
\def\copyright{\realbackslash copyright}%
\def\tclose##1{\realbackslash tclose {##1}}%
\def\code##1{\realbackslash code {##1}}%
\def\uref##1{\realbackslash uref {##1}}%
\def\url##1{\realbackslash url {##1}}%
\def\env##1{\realbackslash env {##1}}%
\def\command##1{\realbackslash command {##1}}%
\def\option##1{\realbackslash option {##1}}%
\def\dotless##1{\realbackslash dotless {##1}}%
\def\samp##1{\realbackslash samp {##1}}%
\def\,##1{\realbackslash ,{##1}}%
\def\t##1{\realbackslash t {##1}}%
\def\r##1{\realbackslash r {##1}}%
\def\i##1{\realbackslash i {##1}}%
\def\b##1{\realbackslash b {##1}}%
\def\sc##1{\realbackslash sc {##1}}%
\def\cite##1{\realbackslash cite {##1}}%
\def\key##1{\realbackslash key {##1}}%
\def\file##1{\realbackslash file {##1}}%
\def\var##1{\realbackslash var {##1}}%
\def\kbd##1{\realbackslash kbd {##1}}%
\def\dfn##1{\realbackslash dfn {##1}}%
\def\emph##1{\realbackslash emph {##1}}%
\def\acronym##1{\realbackslash acronym {##1}}%
%
% Handle some cases of @value -- where the variable name does not
% contain - or _, and the value does not contain any
% (non-fully-expandable) commands.
\let\value = \expandablevalue
%
\unsepspaces
% Turn off macro expansion
\turnoffmacros
}

% If an index command is used in an @example environment, any spaces
% therein should become regular spaces in the raw index file, not the
% expansion of \tie (\\leavevmode \penalty \@M \ ).
{\obeyspaces
 \gdef\unsepspaces{\obeyspaces\let =\space}}

% \indexnofonts no-ops all font-change commands.
% This is used when outputting the strings to sort the index by.
\def\indexdummyfont#1{#1}
\def\indexdummytex{TeX}
\def\indexdummydots{...}

\def\indexnofonts{%
% Just ignore accents.
\let\,=\indexdummyfont
\let\"=\indexdummyfont
\let\`=\indexdummyfont
\let\'=\indexdummyfont
\let\^=\indexdummyfont
\let\~=\indexdummyfont
\let\==\indexdummyfont
\let\b=\indexdummyfont
\let\c=\indexdummyfont
\let\d=\indexdummyfont
\let\u=\indexdummyfont
\let\v=\indexdummyfont
\let\H=\indexdummyfont
\let\dotless=\indexdummyfont
% Take care of the plain tex special European modified letters.
\def\oe{oe}%
\def\ae{ae}%
\def\aa{aa}%
\def\OE{OE}%
\def\AE{AE}%
\def\AA{AA}%
\def\o{o}%
\def\O{O}%
\def\l{l}%
\def\L{L}%
\def\ss{ss}%
\let\w=\indexdummyfont
\let\t=\indexdummyfont
\let\r=\indexdummyfont
\let\i=\indexdummyfont
\let\b=\indexdummyfont
\let\emph=\indexdummyfont
\let\strong=\indexdummyfont
\let\cite=\indexdummyfont
\let\sc=\indexdummyfont
%Don't no-op \tt, since it isn't a user-level command
% and is used in the definitions of the active chars like <, >, |...
%\let\tt=\indexdummyfont
\let\tclose=\indexdummyfont
\let\code=\indexdummyfont
\let\url=\indexdummyfont
\let\uref=\indexdummyfont
\let\env=\indexdummyfont
\let\command=\indexdummyfont
\let\option=\indexdummyfont
\let\file=\indexdummyfont
\let\samp=\indexdummyfont
\let\kbd=\indexdummyfont
\let\key=\indexdummyfont
\let\var=\indexdummyfont
\let\TeX=\indexdummytex
\let\dots=\indexdummydots
\def\@{@}%
}

% To define \realbackslash, we must make \ not be an escape.
% We must first make another character (@) an escape
% so we do not become unable to do a definition.

{\catcode`\@=0 \catcode`\\=\other
 @gdef@realbackslash{\}}

\let\indexbackslash=0  %overridden during \printindex.
\let\SETmarginindex=\relax % put index entries in margin (undocumented)?

% For \ifx comparisons.
\def\emptymacro{\empty}

% Most index entries go through here, but \dosubind is the general case.
%
\def\doind#1#2{\dosubind{#1}{#2}\empty}

% Workhorse for all \fooindexes.
% #1 is name of index, #2 is stuff to put there, #3 is subentry --
% \empty if called from \doind, as we usually are.  The main exception
% is with defuns, which call us directly.
%
\def\dosubind#1#2#3{%
  % Put the index entry in the margin if desired.
  \ifx\SETmarginindex\relax\else
    \insert\margin{\hbox{\vrule height8pt depth3pt width0pt #2}}%
  \fi
  {%
    \count255=\lastpenalty
    {%
      \indexdummies % Must do this here, since \bf, etc expand at this stage
      \escapechar=`\\
      {%
        \let\folio = 0% We will expand all macros now EXCEPT \folio.
        \def\rawbackslashxx{\indexbackslash}% \indexbackslash isn't defined now
        % so it will be output as is; and it will print as backslash.
        %
        \def\thirdarg{#3}%
        %
        % If third arg is present, precede it with space in sort key.
        \ifx\thirdarg\emptymacro
          \let\subentry = \empty
        \else
          \def\subentry{ #3}%
        \fi
        %
        % First process the index entry with all font commands turned
        % off to get the string to sort by.
        {\indexnofonts \xdef\indexsorttmp{#2\subentry}}%
        %
        % Now the real index entry with the fonts.
        \toks0 = {#2}%
        %
        % If third (subentry) arg is present, add it to the index
        % string.  And include a space.
        \ifx\thirdarg\emptymacro \else
          \toks0 = \expandafter{\the\toks0 \space #3}%
        \fi
        %
        % Set up the complete index entry, with both the sort key
        % and the original text, including any font commands.  We write
        % three arguments to \entry to the .?? file, texindex reduces to
        % two when writing the .??s sorted result.
        \edef\temp{%
          \write\csname#1indfile\endcsname{%
            \realbackslash entry{\indexsorttmp}{\folio}{\the\toks0}}%
        }%
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
        \iflinks
          \ifvmode
            \skip0 = \lastskip
            \ifdim\lastskip = 0pt \else \nobreak\vskip-\lastskip \fi
          \fi
          %
          \temp % do the write
          %
          %
          \ifvmode \ifdim\skip0 = 0pt \else \nobreak\vskip\skip0 \fi \fi
        \fi
      }%
    }%
    \penalty\count255
  }%
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
\def\printindex{\parsearg\doprintindex}
\def\doprintindex#1{\begingroup
  \dobreak \chapheadingskip{10000}%
  %
  \indexfonts \rm
  \tolerance = 9500
  \indexbreaks
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
      \def\indexbackslash{\rawbackslashxx}%
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
  \penalty -300
  %
  % Typeset the initial.  Making this add up to a whole number of
  % baselineskips increases the chance of the dots lining up from column
  % to column.  It still won't often be perfect, because of the stretch
  % we need before each entry, but it's better.
  %
  % No shrink because it confuses \balancecolumns.
  \vskip 1.67\baselineskip plus .5\baselineskip
  \leftline{\secbf #1}%
  \vskip .33\baselineskip plus .1\baselineskip
  %
  % Do our best not to break after the initial.
  \nobreak
}}

% This typesets a paragraph consisting of #1, dot leaders, and then #2
% flush to the right margin.  It is used for index and table of contents
% entries.  The paragraph is indented by \leftskip.
%
\def\entry#1#2{\begingroup
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
  % A bit of stretch before each entry for the benefit of balancing columns.
  \vskip 0pt plus1pt
  %
  % Start a ``paragraph'' for the index entry so the line breaking
  % parameters we've set above will have an effect.
  \noindent
  %
  % Insert the text of the index entry.  TeX will do line-breaking on it.
  #1%
  % The following is kludged to not output a line of dots in the index if
  % there are no page numbers.  The next person who breaks this will be
  % cursed by a Unix daemon.
  \def\tempa{{\rm }}%
  \def\tempb{#2}%
  \edef\tempc{\tempa}%
  \edef\tempd{\tempb}%
  \ifx\tempc\tempd\ \else%
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
    \ #2% The page number ends the paragraph.
  \fi%
  \par
\endgroup}

% Like \dotfill except takes at least 1 em.
\def\indexdotfill{\cleaders
  \hbox{$\mathsurround=0pt \mkern1.5mu ${\it .}$ \mkern1.5mu$}\hskip 1em plus 1fill}

\def\primary #1{\line{#1\hfil}}

\newskip\secondaryindent \secondaryindent=0.5cm

\def\secondary #1#2{
{\parfillskip=0in \parskip=0in
\hangindent =1in \hangafter=1
\noindent\hskip\secondaryindent\hbox{#1}\indexdotfill #2\par
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
  \advance\vsize by -\ht\partialpage
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
  %
  % box0 will be the left-hand column, box2 the right.
  \setbox0=\vsplit255 to\dimen@ \setbox2=\vsplit255 to\dimen@
  \onepageout\pagesofar
  \unvbox255
  \penalty\outputpenalty
}
\def\pagesofar{%
  % Re-output the contents of the output page -- any previous material,
  % followed by the two boxes we just split, in box0 and box2.
  \unvbox\partialpage
  %
  \hsize = \doublecolumnhsize
  \wd0=\hsize \wd2=\hsize
  \hbox to\pagewidth{\box0\hfil\box2}%
}
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
\def\balancecolumns{%
  % Called at the end of the double column material.
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

\newcount\chapno
\newcount\secno        \secno=0
\newcount\subsecno     \subsecno=0
\newcount\subsubsecno  \subsubsecno=0

% This counter is funny since it counts through charcodes of letters A, B, ...
% The \the is necessary, despite appearances, because \appendixletter is
% expanded while writing the .toc file.  \char\appendixno is not
% expandable, thus it is written literally, thus all appendixes come out
% with the same letter (or @) in the toc without it.
\newcount\appendixno  \appendixno = `\@
\def\appendixletter{\char\the\appendixno}

% Each @chapter defines this as the name of the chapter.
% page headings and footings can use it.  @section does likewise.
\def\thischapter{}
\def\thissection{}

\newcount\absseclevel % used to calculate proper heading level
\newcount\secbase\secbase=0 % @raise/lowersections modify this count

% @raisesections: treat @section as chapter, @subsection as section, etc.
\def\raisesections{\global\advance\secbase by -1}
\let\up=\raisesections % original BFox name

% @lowersections: treat @chapter as section, @section as subsection, etc.
\def\lowersections{\global\advance\secbase by 1}
\let\down=\lowersections % original BFox name

% Choose a numbered-heading macro
% #1 is heading level if unmodified by @raisesections or @lowersections
% #2 is text for heading
\def\numhead#1#2{\absseclevel=\secbase\advance\absseclevel by #1
\ifcase\absseclevel
  \chapterzzz{#2}
\or
  \seczzz{#2}
\or
  \numberedsubseczzz{#2}
\or
  \numberedsubsubseczzz{#2}
\else
  \ifnum \absseclevel<0
    \chapterzzz{#2}
  \else
    \numberedsubsubseczzz{#2}
  \fi
\fi
}

% like \numhead, but chooses appendix heading levels
\def\apphead#1#2{\absseclevel=\secbase\advance\absseclevel by #1
\ifcase\absseclevel
  \appendixzzz{#2}
\or
  \appendixsectionzzz{#2}
\or
  \appendixsubseczzz{#2}
\or
  \appendixsubsubseczzz{#2}
\else
  \ifnum \absseclevel<0
    \appendixzzz{#2}
  \else
    \appendixsubsubseczzz{#2}
  \fi
\fi
}

% like \numhead, but chooses numberless heading levels
\def\unnmhead#1#2{\absseclevel=\secbase\advance\absseclevel by #1
\ifcase\absseclevel
  \unnumberedzzz{#2}
\or
  \unnumberedseczzz{#2}
\or
  \unnumberedsubseczzz{#2}
\or
  \unnumberedsubsubseczzz{#2}
\else
  \ifnum \absseclevel<0
    \unnumberedzzz{#2}
  \else
    \unnumberedsubsubseczzz{#2}
  \fi
\fi
}

% @chapter, @appendix, @unnumbered.
\def\thischaptername{No Chapter Title}
\outer\def\chapter{\parsearg\chapteryyy}
\def\chapteryyy #1{\numhead0{#1}} % normally numhead0 calls chapterzzz
\def\chapterzzz #1{%
\secno=0 \subsecno=0 \subsubsecno=0
\global\advance \chapno by 1 \message{\putwordChapter\space \the\chapno}%
\chapmacro {#1}{\the\chapno}%
\gdef\thissection{#1}%
\gdef\thischaptername{#1}%
% We don't substitute the actual chapter name into \thischapter
% because we don't want its macros evaluated now.
\xdef\thischapter{\putwordChapter{} \the\chapno: \noexpand\thischaptername}%
\toks0 = {#1}%
\edef\temp{\noexpand\writetocentry{\realbackslash chapentry{\the\toks0}%
                                  {\the\chapno}}}%
\temp
\donoderef
\global\let\section = \numberedsec
\global\let\subsection = \numberedsubsec
\global\let\subsubsection = \numberedsubsubsec
}

\outer\def\appendix{\parsearg\appendixyyy}
\def\appendixyyy #1{\apphead0{#1}} % normally apphead0 calls appendixzzz
\def\appendixzzz #1{%
\secno=0 \subsecno=0 \subsubsecno=0
\global\advance \appendixno by 1
\message{\putwordAppendix\space \appendixletter}%
\chapmacro {#1}{\putwordAppendix{} \appendixletter}%
\gdef\thissection{#1}%
\gdef\thischaptername{#1}%
\xdef\thischapter{\putwordAppendix{} \appendixletter: \noexpand\thischaptername}%
\toks0 = {#1}%
\edef\temp{\noexpand\writetocentry{\realbackslash chapentry{\the\toks0}%
                       {\putwordAppendix{} \appendixletter}}}%
\temp
\appendixnoderef
\global\let\section = \appendixsec
\global\let\subsection = \appendixsubsec
\global\let\subsubsection = \appendixsubsubsec
}

% @centerchap is like @unnumbered, but the heading is centered.
\outer\def\centerchap{\parsearg\centerchapyyy}
\def\centerchapyyy #1{{\let\unnumbchapmacro=\centerchapmacro \unnumberedyyy{#1}}}

% @top is like @unnumbered.
\outer\def\top{\parsearg\unnumberedyyy}

\outer\def\unnumbered{\parsearg\unnumberedyyy}
\def\unnumberedyyy #1{\unnmhead0{#1}} % normally unnmhead0 calls unnumberedzzz
\def\unnumberedzzz #1{%
\secno=0 \subsecno=0 \subsubsecno=0
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
\toks0 = {#1}\message{(\the\toks0)}%
%
\unnumbchapmacro {#1}%
\gdef\thischapter{#1}\gdef\thissection{#1}%
\toks0 = {#1}%
\edef\temp{\noexpand\writetocentry{\realbackslash unnumbchapentry{\the\toks0}}}%
\temp
\unnumbnoderef
\global\let\section = \unnumberedsec
\global\let\subsection = \unnumberedsubsec
\global\let\subsubsection = \unnumberedsubsubsec
}

% Sections.
\outer\def\numberedsec{\parsearg\secyyy}
\def\secyyy #1{\numhead1{#1}} % normally calls seczzz
\def\seczzz #1{%
\subsecno=0 \subsubsecno=0 \global\advance \secno by 1 %
\gdef\thissection{#1}\secheading {#1}{\the\chapno}{\the\secno}%
\toks0 = {#1}%
\edef\temp{\noexpand\writetocentry{\realbackslash secentry{\the\toks0}%
                                  {\the\chapno}{\the\secno}}}%
\temp
\donoderef
\nobreak
}

\outer\def\appendixsection{\parsearg\appendixsecyyy}
\outer\def\appendixsec{\parsearg\appendixsecyyy}
\def\appendixsecyyy #1{\apphead1{#1}} % normally calls appendixsectionzzz
\def\appendixsectionzzz #1{%
\subsecno=0 \subsubsecno=0 \global\advance \secno by 1 %
\gdef\thissection{#1}\secheading {#1}{\appendixletter}{\the\secno}%
\toks0 = {#1}%
\edef\temp{\noexpand\writetocentry{\realbackslash secentry{\the\toks0}%
                                  {\appendixletter}{\the\secno}}}%
\temp
\appendixnoderef
\nobreak
}

\outer\def\unnumberedsec{\parsearg\unnumberedsecyyy}
\def\unnumberedsecyyy #1{\unnmhead1{#1}} % normally calls unnumberedseczzz
\def\unnumberedseczzz #1{%
\plainsecheading {#1}\gdef\thissection{#1}%
\toks0 = {#1}%
\edef\temp{\noexpand\writetocentry{\realbackslash unnumbsecentry{\the\toks0}}}%
\temp
\unnumbnoderef
\nobreak
}

% Subsections.
\outer\def\numberedsubsec{\parsearg\numberedsubsecyyy}
\def\numberedsubsecyyy #1{\numhead2{#1}} % normally calls numberedsubseczzz
\def\numberedsubseczzz #1{%
\gdef\thissection{#1}\subsubsecno=0 \global\advance \subsecno by 1 %
\subsecheading {#1}{\the\chapno}{\the\secno}{\the\subsecno}%
\toks0 = {#1}%
\edef\temp{\noexpand\writetocentry{\realbackslash subsecentry{\the\toks0}%
                                    {\the\chapno}{\the\secno}{\the\subsecno}}}%
\temp
\donoderef
\nobreak
}

\outer\def\appendixsubsec{\parsearg\appendixsubsecyyy}
\def\appendixsubsecyyy #1{\apphead2{#1}} % normally calls appendixsubseczzz
\def\appendixsubseczzz #1{%
\gdef\thissection{#1}\subsubsecno=0 \global\advance \subsecno by 1 %
\subsecheading {#1}{\appendixletter}{\the\secno}{\the\subsecno}%
\toks0 = {#1}%
\edef\temp{\noexpand\writetocentry{\realbackslash subsecentry{\the\toks0}%
                                {\appendixletter}{\the\secno}{\the\subsecno}}}%
\temp
\appendixnoderef
\nobreak
}

\outer\def\unnumberedsubsec{\parsearg\unnumberedsubsecyyy}
\def\unnumberedsubsecyyy #1{\unnmhead2{#1}} %normally calls unnumberedsubseczzz
\def\unnumberedsubseczzz #1{%
\plainsubsecheading {#1}\gdef\thissection{#1}%
\toks0 = {#1}%
\edef\temp{\noexpand\writetocentry{\realbackslash unnumbsubsecentry%
                                    {\the\toks0}}}%
\temp
\unnumbnoderef
\nobreak
}

% Subsubsections.
\outer\def\numberedsubsubsec{\parsearg\numberedsubsubsecyyy}
\def\numberedsubsubsecyyy #1{\numhead3{#1}} % normally numberedsubsubseczzz
\def\numberedsubsubseczzz #1{%
\gdef\thissection{#1}\global\advance \subsubsecno by 1 %
\subsubsecheading {#1}
  {\the\chapno}{\the\secno}{\the\subsecno}{\the\subsubsecno}%
\toks0 = {#1}%
\edef\temp{\noexpand\writetocentry{\realbackslash subsubsecentry{\the\toks0}%
  {\the\chapno}{\the\secno}{\the\subsecno}{\the\subsubsecno}}}%
\temp
\donoderef
\nobreak
}

\outer\def\appendixsubsubsec{\parsearg\appendixsubsubsecyyy}
\def\appendixsubsubsecyyy #1{\apphead3{#1}} % normally appendixsubsubseczzz
\def\appendixsubsubseczzz #1{%
\gdef\thissection{#1}\global\advance \subsubsecno by 1 %
\subsubsecheading {#1}
  {\appendixletter}{\the\secno}{\the\subsecno}{\the\subsubsecno}%
\toks0 = {#1}%
\edef\temp{\noexpand\writetocentry{\realbackslash subsubsecentry{\the\toks0}%
  {\appendixletter}{\the\secno}{\the\subsecno}{\the\subsubsecno}}}%
\temp
\appendixnoderef
\nobreak
}

\outer\def\unnumberedsubsubsec{\parsearg\unnumberedsubsubsecyyy}
\def\unnumberedsubsubsecyyy #1{\unnmhead3{#1}} %normally unnumberedsubsubseczzz
\def\unnumberedsubsubseczzz #1{%
\plainsubsubsecheading {#1}\gdef\thissection{#1}%
\toks0 = {#1}%
\edef\temp{\noexpand\writetocentry{\realbackslash unnumbsubsubsecentry%
                                    {\the\toks0}}}%
\temp
\unnumbnoderef
\nobreak
}

% These are variants which are not "outer", so they can appear in @ifinfo.
% Actually, they should now be obsolete; ordinary section commands should work.
\def\infotop{\parsearg\unnumberedzzz}
\def\infounnumbered{\parsearg\unnumberedzzz}
\def\infounnumberedsec{\parsearg\unnumberedseczzz}
\def\infounnumberedsubsec{\parsearg\unnumberedsubseczzz}
\def\infounnumberedsubsubsec{\parsearg\unnumberedsubsubseczzz}

\def\infoappendix{\parsearg\appendixzzz}
\def\infoappendixsec{\parsearg\appendixseczzz}
\def\infoappendixsubsec{\parsearg\appendixsubseczzz}
\def\infoappendixsubsubsec{\parsearg\appendixsubsubseczzz}

\def\infochapter{\parsearg\chapterzzz}
\def\infosection{\parsearg\sectionzzz}
\def\infosubsection{\parsearg\subsectionzzz}
\def\infosubsubsection{\parsearg\subsubsectionzzz}

% These macros control what the section commands do, according
% to what kind of chapter we are in (ordinary, appendix, or unnumbered).
% Define them by default for a numbered chapter.
\global\let\section = \numberedsec
\global\let\subsection = \numberedsubsec
\global\let\subsubsection = \numberedsubsubsec

% Define @majorheading, @heading and @subheading

% NOTE on use of \vbox for chapter headings, section headings, and such:
%       1) We use \vbox rather than the earlier \line to permit
%          overlong headings to fold.
%       2) \hyphenpenalty is set to 10000 because hyphenation in a
%          heading is obnoxious; this forbids it.
%       3) Likewise, headings look best if no \parindent is used, and
%          if justification is not attempted.  Hence \raggedright.


\def\majorheading{\parsearg\majorheadingzzz}
\def\majorheadingzzz #1{%
{\advance\chapheadingskip by 10pt \chapbreak }%
{\chapfonts \vbox{\hyphenpenalty=10000\tolerance=5000
                  \parindent=0pt\raggedright
                  \rm #1\hfill}}\bigskip \par\penalty 200}

\def\chapheading{\parsearg\chapheadingzzz}
\def\chapheadingzzz #1{\chapbreak %
{\chapfonts \vbox{\hyphenpenalty=10000\tolerance=5000
                  \parindent=0pt\raggedright
                  \rm #1\hfill}}\bigskip \par\penalty 200}

% @heading, @subheading, @subsubheading.
\def\heading{\parsearg\plainsecheading}
\def\subheading{\parsearg\plainsubsecheading}
\def\subsubheading{\parsearg\plainsubsubsecheading}

% These macros generate a chapter, section, etc. heading only
% (including whitespace, linebreaking, etc. around it),
% given all the information in convenient, parsed form.

%%% Args are the skip and penalty (usually negative)
\def\dobreak#1#2{\par\ifdim\lastskip<#1\removelastskip\penalty#2\vskip#1\fi}

\def\setchapterstyle #1 {\csname CHAPF#1\endcsname}

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

\def\CHAPPAGodd{
\global\let\contentsalignmacro = \chapoddpage
\global\let\pchapsepmacro=\chapoddpage
\global\let\pagealignmacro=\chapoddpage
\global\def\HEADINGSon{\HEADINGSdouble}}

\CHAPPAGon

\def\CHAPFplain{
\global\let\chapmacro=\chfplain
\global\let\unnumbchapmacro=\unnchfplain
\global\let\centerchapmacro=\centerchfplain}

% Plain chapter opening.
% #1 is the text, #2 the chapter number or empty if unnumbered.
\def\chfplain#1#2{%
  \pchapsepmacro
  {%
    \chapfonts \rm
    \def\chapnum{#2}%
    \setbox0 = \hbox{#2\ifx\chapnum\empty\else\enspace\fi}%
    \vbox{\hyphenpenalty=10000 \tolerance=5000 \parindent=0pt \raggedright
          \hangindent = \wd0 \centerparametersmaybe
          \unhbox0 #1\par}%
  }%
  \nobreak\bigskip % no page break after a chapter title
  \nobreak
}

% Plain opening for unnumbered.
\def\unnchfplain#1{\chfplain{#1}{}}

% @centerchap -- centered and unnumbered.
\let\centerparametersmaybe = \relax
\def\centerchfplain#1{{%
  \def\centerparametersmaybe{%
    \advance\rightskip by 3\rightskip
    \leftskip = \rightskip
    \parfillskip = 0pt
  }%
  \chfplain{#1}{}%
}}

\CHAPFplain % The default

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

\def\CHAPFopen{
\global\let\chapmacro=\chfopen
\global\let\unnumbchapmacro=\unnchfopen
\global\let\centerchapmacro=\centerchfopen}


% Section titles.
\newskip\secheadingskip
\def\secheadingbreak{\dobreak \secheadingskip {-1000}}
\def\secheading#1#2#3{\sectionheading{sec}{#2.#3}{#1}}
\def\plainsecheading#1{\sectionheading{sec}{}{#1}}

% Subsection titles.
\newskip \subsecheadingskip
\def\subsecheadingbreak{\dobreak \subsecheadingskip {-500}}
\def\subsecheading#1#2#3#4{\sectionheading{subsec}{#2.#3.#4}{#1}}
\def\plainsubsecheading#1{\sectionheading{subsec}{}{#1}}

% Subsubsection titles.
\let\subsubsecheadingskip = \subsecheadingskip
\let\subsubsecheadingbreak = \subsecheadingbreak
\def\subsubsecheading#1#2#3#4#5{\sectionheading{subsubsec}{#2.#3.#4.#5}{#1}}
\def\plainsubsubsecheading#1{\sectionheading{subsubsec}{}{#1}}


% Print any size section title.
%
% #1 is the section type (sec/subsec/subsubsec), #2 is the section
% number (maybe empty), #3 the text.
\def\sectionheading#1#2#3{%
  {%
    \expandafter\advance\csname #1headingskip\endcsname by \parskip
    \csname #1headingbreak\endcsname
  }%
  {%
    % Switch to the right set of fonts.
    \csname #1fonts\endcsname \rm
    %
    % Only insert the separating space if we have a section number.
    \def\secnum{#2}%
    \setbox0 = \hbox{#2\ifx\secnum\empty\else\enspace\fi}%
    %
    \vbox{\hyphenpenalty=10000 \tolerance=5000 \parindent=0pt \raggedright
          \hangindent = \wd0 % zero if no section number
          \unhbox0 #3}%
  }%
  \ifdim\parskip<10pt \nobreak\kern10pt\nobreak\kern-\parskip\fi \nobreak
}


\message{toc,}
% Table of contents.
\newwrite\tocfile

% Write an entry to the toc file, opening it if necessary.
% Called from @chapter, etc.  We supply {\folio} at the end of the
% argument, which will end up as the last argument to the \...entry macro.
%
% We open the .toc file here instead of at @setfilename or any other
% given time so that @contents can be put in the document anywhere.
%
\newif\iftocfileopened
\def\writetocentry#1{%
  \iftocfileopened\else
    \immediate\openout\tocfile = \jobname.toc
    \global\tocfileopenedtrue
  \fi
  \iflinks \write\tocfile{#1{\folio}}\fi
}

\newskip\contentsrightmargin \contentsrightmargin=1in
\newcount\savepageno
\newcount\lastnegativepageno \lastnegativepageno = -1

% Finish up the main text and prepare to read what we've written
% to \tocfile.
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
   \unnumbchapmacro{#1}\def\thischapter{}%
   \savepageno = \pageno
   \begingroup                  % Set up to handle contents files properly.
      \catcode`\\=0  \catcode`\{=1  \catcode`\}=2  \catcode`\@=11
      % We can't do this, because then an actual ^ in a section
      % title fails, e.g., @chapter ^ -- exponentiation.  --karl, 9jul97.
      %\catcode`\^=7 % to see ^^e4 as \"a etc. juha@piuha.ydi.vtt.fi
      \raggedbottom             % Worry more about breakpoints than the bottom.
      \advance\hsize by -\contentsrightmargin % Don't use the full line length.
      %
      % Roman numerals for page numbers.
      \ifnum \pageno>0 \pageno = \lastnegativepageno \fi
}


% Normal (long) toc.
\def\contents{%
   \startcontents{\putwordTOC}%
     \openin 1 \jobname.toc
     \ifeof 1 \else
       \closein 1
       \input \jobname.toc
     \fi
     \vfill \eject
     \contentsalignmacro % in case @setchapternewpage odd is in effect
     \pdfmakeoutlines
   \endgroup
   \lastnegativepageno = \pageno
   \pageno = \savepageno
}

% And just the chapters.
\def\summarycontents{%
   \startcontents{\putwordShortTOC}%
      %
      \let\chapentry = \shortchapentry
      \let\unnumbchapentry = \shortunnumberedentry
      % We want a true roman here for the page numbers.
      \secfonts
      \let\rm=\shortcontrm \let\bf=\shortcontbf \let\sl=\shortcontsl
      \rm
      \hyphenpenalty = 10000
      \advance\baselineskip by 1pt % Open it up a little.
      \def\secentry ##1##2##3##4{}
      \def\unnumbsecentry ##1##2{}
      \def\subsecentry ##1##2##3##4##5{}
      \def\unnumbsubsecentry ##1##2{}
      \def\subsubsecentry ##1##2##3##4##5##6{}
      \def\unnumbsubsubsecentry ##1##2{}
      \openin 1 \jobname.toc
      \ifeof 1 \else
        \closein 1
        \input \jobname.toc
      \fi
     \vfill \eject
     \contentsalignmacro % in case @setchapternewpage odd is in effect
   \endgroup
   \lastnegativepageno = \pageno
   \pageno = \savepageno
}
\let\shortcontents = \summarycontents

\ifpdf
  \pdfcatalog{/PageMode /UseOutlines}%
\fi

% These macros generate individual entries in the table of contents.
% The first argument is the chapter or section name.
% The last argument is the page number.
% The arguments in between are the chapter number, section number, ...

% Chapter-level things, for both the long and short contents.
\def\chapentry#1#2#3{\dochapentry{#2\labelspace#1}{#3}}

% See comments in \dochapentry re vbox and related settings
\def\shortchapentry#1#2#3{%
  \tocentry{\shortchaplabel{#2}\labelspace #1}{\doshortpageno{#3}}%
}

% Typeset the label for a chapter or appendix for the short contents.
% The arg is, e.g. `Appendix A' for an appendix, or `3' for a chapter.
% We could simplify the code here by writing out an \appendixentry
% command in the toc file for appendices, instead of using \chapentry
% for both, but it doesn't seem worth it.
\setbox0 = \hbox{\shortcontrm \putwordAppendix }
\newdimen\shortappendixwidth \shortappendixwidth = \wd0

\def\shortchaplabel#1{%
  % We typeset #1 in a box of constant width, regardless of the text of
  % #1, so the chapter titles will come out aligned.
  \setbox0 = \hbox{#1}%
  \dimen0 = \ifdim\wd0 > \shortappendixwidth \shortappendixwidth \else 0pt \fi
  %
  % This space should be plenty, since a single number is .5em, and the
  % widest letter (M) is 1em, at least in the Computer Modern fonts.
  % (This space doesn't include the extra space that gets added after
  % the label; that gets put in by \shortchapentry above.)
  \advance\dimen0 by 1.1em
  \hbox to \dimen0{#1\hfil}%
}

\def\unnumbchapentry#1#2{\dochapentry{#1}{#2}}
\def\shortunnumberedentry#1#2{\tocentry{#1}{\doshortpageno{#2}}}

% Sections.
\def\secentry#1#2#3#4{\dosecentry{#2.#3\labelspace#1}{#4}}
\def\unnumbsecentry#1#2{\dosecentry{#1}{#2}}

% Subsections.
\def\subsecentry#1#2#3#4#5{\dosubsecentry{#2.#3.#4\labelspace#1}{#5}}
\def\unnumbsubsecentry#1#2{\dosubsecentry{#1}{#2}}

% And subsubsections.
\def\subsubsecentry#1#2#3#4#5#6{%
  \dosubsubsecentry{#2.#3.#4.#5\labelspace#1}{#6}}
\def\unnumbsubsubsecentry#1#2{\dosubsubsecentry{#1}{#2}}

% This parameter controls the indentation of the various levels.
\newdimen\tocindent \tocindent = 3pc

% Now for the actual typesetting. In all these, #1 is the text and #2 is the
% page number.
%
% If the toc has to be broken over pages, we want it to be at chapters
% if at all possible; hence the \penalty.
\def\dochapentry#1#2{%
   \penalty-300 \vskip1\baselineskip plus.33\baselineskip minus.25\baselineskip
   \begingroup
     \chapentryfonts
     \tocentry{#1}{\dopageno{#2}}%
   \endgroup
   \nobreak\vskip .25\baselineskip plus.1\baselineskip
}

\def\dosecentry#1#2{\begingroup
  \secentryfonts \leftskip=\tocindent
  \tocentry{#1}{\dopageno{#2}}%
\endgroup}

\def\dosubsecentry#1#2{\begingroup
  \subsecentryfonts \leftskip=2\tocindent
  \tocentry{#1}{\dopageno{#2}}%
\endgroup}

\def\dosubsubsecentry#1#2{\begingroup
  \subsubsecentryfonts \leftskip=3\tocindent
  \tocentry{#1}{\dopageno{#2}}%
\endgroup}

% Final typesetting of a toc entry; we use the same \entry macro as for
% the index entries, but we want to suppress hyphenation here.  (We
% can't do that in the \entry macro, since index entries might consist
% of hyphenated-identifiers-that-do-not-fit-on-a-line-and-nothing-else.)
\def\tocentry#1#2{\begingroup
  \vskip 0pt plus1pt % allow a little stretch for the sake of nice page breaks
  % Do not use \turnoffactive in these arguments.  Since the toc is
  % typeset in cmr, so characters such as _ would come out wrong; we
  % have to do the usual translation tricks.
  \entry{#1}{#2}%
\endgroup}

% Space between chapter (or whatever) number and the title.
\def\labelspace{\hskip1em \relax}

\def\dopageno#1{{\rm #1}}
\def\doshortpageno#1{{\rm #1}}

\def\chapentryfonts{\secfonts \rm}
\def\secentryfonts{\textfonts}
\let\subsecentryfonts = \textfonts
\let\subsubsecentryfonts = \textfonts


\message{environments,}
% @foo ... @end foo.

% Since these characters are used in examples, it should be an even number of
% \tt widths. Each \tt character is 1en, so two makes it 1em.
% Furthermore, these definitions must come after we define our fonts.
\newbox\dblarrowbox    \newbox\longdblarrowbox
\newbox\pushcharbox    \newbox\bullbox
\newbox\equivbox       \newbox\errorbox

%{\tentt
%\global\setbox\dblarrowbox = \hbox to 1em{\hfil$\Rightarrow$\hfil}
%\global\setbox\longdblarrowbox = \hbox to 1em{\hfil$\mapsto$\hfil}
%\global\setbox\pushcharbox = \hbox to 1em{\hfil$\dashv$\hfil}
%\global\setbox\equivbox = \hbox to 1em{\hfil$\ptexequiv$\hfil}
% Adapted from the manmac format (p.420 of TeXbook)
%\global\setbox\bullbox = \hbox to 1em{\kern.15em\vrule height .75ex width .85ex
%                                      depth .1ex\hfil}
%}

% @point{}, @result{}, @expansion{}, @print{}, @equiv{}.
\def\point{$\star$}
\def\result{\leavevmode\raise.15ex\hbox to 1em{\hfil$\Rightarrow$\hfil}}
\def\expansion{\leavevmode\raise.1ex\hbox to 1em{\hfil$\mapsto$\hfil}}
\def\print{\leavevmode\lower.1ex\hbox to 1em{\hfil$\dashv$\hfil}}
\def\equiv{\leavevmode\lower.1ex\hbox to 1em{\hfil$\ptexequiv$\hfil}}

% Adapted from the TeXbook's \boxit.
{\tentt \global\dimen0 = 3em}% Width of the box.
\dimen2 = .55pt % Thickness of rules
% The text. (`r' is open on the right, `e' somewhat less so on the left.)
\setbox0 = \hbox{\kern-.75pt \tensf error\kern-1.5pt}

\global\setbox\errorbox=\hbox to \dimen0{\hfil
   \hsize = \dimen0 \advance\hsize by -5.8pt % Space to left+right.
   \advance\hsize by -2\dimen2 % Rules.
   \vbox{
      \hrule height\dimen2
      \hbox{\vrule width\dimen2 \kern3pt          % Space to left of text.
         \vtop{\kern2.4pt \box0 \kern2.4pt}% Space above/below.
         \kern3pt\vrule width\dimen2}% Space to right.
      \hrule height\dimen2}
    \hfil}

% The @error{} command.
\def\error{\leavevmode\lower.7ex\copy\errorbox}

% @tex ... @end tex    escapes into raw Tex temporarily.
% One exception: @ is still an escape character, so that @end tex works.
% But \@ or @@ will get a plain tex @ character.

\def\tex{\begingroup
  \catcode `\\=0 \catcode `\{=1 \catcode `\}=2
  \catcode `\$=3 \catcode `\&=4 \catcode `\#=6
  \catcode `\^=7 \catcode `\_=8 \catcode `\~=13 \let~=\tie
  \catcode `\%=14
  \catcode 43=12 % plus
  \catcode`\"=12
  \catcode`\==12
  \catcode`\|=12
  \catcode`\<=12
  \catcode`\>=12
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
  \let\{=\ptexlbrace
  \let\+=\tabalign
  \let\}=\ptexrbrace
  \let\*=\ptexstar
  \let\t=\ptext
  %
  \def\endldots{\mathinner{\ldots\ldots\ldots\ldots}}%
  \def\enddots{\relax\ifmmode\endldots\else$\mathsurround=0pt \endldots\,$\fi}%
  \def\@{@}%
\let\Etex=\endgroup}

% Define @lisp ... @endlisp.
% @lisp does a \begingroup so it can rebind things,
% including the definition of @endlisp (which normally is erroneous).

% Amount to narrow the margins by for @lisp.
\newskip\lispnarrowing \lispnarrowing=0.4in

% This is the definition that ^^M gets inside @lisp, @example, and other
% such environments.  \null is better than a space, since it doesn't
% have any width.
\def\lisppar{\null\endgraf}

% Make each space character in the input produce a normal interword
% space in the output.  Don't allow a line break at this space, as this
% is used only in environments like @example, where each line of input
% should produce a line of output anyway.
%
{\obeyspaces %
\gdef\sepspaces{\obeyspaces\let =\tie}}

% Define \obeyedspace to be our active space, whatever it is.  This is
% for use in \parsearg.
{\sepspaces%
\global\let\obeyedspace= }

% This space is always present above and below environments.
\newskip\envskipamount \envskipamount = 0pt

% Make spacing and below environment symmetrical.  We use \parskip here
% to help in doing that, since in @example-like environments \parskip
% is reset to zero; thus the \afterenvbreak inserts no space -- but the
% start of the next paragraph will insert \parskip
%
\def\aboveenvbreak{{\advance\envskipamount by \parskip
\endgraf \ifdim\lastskip<\envskipamount
\removelastskip \penalty-50 \vskip\envskipamount \fi}}

\let\afterenvbreak = \aboveenvbreak

% \nonarrowing is a flag.  If "set", @lisp etc don't narrow margins.
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

\long\def\cartouche{%
\begingroup
        \lskip=\leftskip \rskip=\rightskip
        \leftskip=0pt\rightskip=0pt %we want these *outside*.
        \cartinner=\hsize \advance\cartinner by-\lskip
                          \advance\cartinner by-\rskip
        \cartouter=\hsize
        \advance\cartouter by 18.4pt % allow for 3pt kerns on either
%                                    side, and for 6pt waste from
%                                    each corner char, and rule thickness
        \normbskip=\baselineskip \normpskip=\parskip \normlskip=\lineskip
        % Flag to tell @lisp, etc., not to narrow margin.
        \let\nonarrowing=\comment
        \vbox\bgroup
                \baselineskip=0pt\parskip=0pt\lineskip=0pt
                \carttop
                \hbox\bgroup
                        \hskip\lskip
                        \vrule\kern3pt
                        \vbox\bgroup
                                \hsize=\cartinner
                                \kern3pt
                                \begingroup
                                        \baselineskip=\normbskip
                                        \lineskip=\normlskip
                                        \parskip=\normpskip
                                        \vskip -\parskip
\def\Ecartouche{%
                                \endgroup
                                \kern3pt
                        \egroup
                        \kern3pt\vrule
                        \hskip\rskip
                \egroup
                \cartbot
        \egroup
\endgroup
}}


% This macro is called at the beginning of all the @example variants,
% inside a group.
\def\nonfillstart{%
  \aboveenvbreak
  \inENV % This group ends at the end of the body
  \hfuzz = 12pt % Don't be fussy
  \sepspaces % Make spaces be word-separators rather than space tokens.
  \singlespace
  \let\par = \lisppar % don't ignore blank lines
  \obeylines % each line of input is a line of output
  \parskip = 0pt
  \parindent = 0pt
  \emergencystretch = 0pt % don't try to avoid overfull boxes
  % @cartouche defines \nonarrowing to inhibit narrowing
  % at next level down.
  \ifx\nonarrowing\relax
    \advance \leftskip by \lispnarrowing
    \exdentamount=\lispnarrowing
    \let\exdent=\nofillexdent
    \let\nonarrowing=\relax
  \fi
}

% Define the \E... control sequence only if we are inside the particular
% environment, so the error checking in \end will work.
%
% To end an @example-like environment, we first end the paragraph (via
% \afterenvbreak's vertical glue), and then the group.  That way we keep
% the zero \parskip that the environments set -- \parskip glue will be
% inserted at the beginning of the next paragraph in the document, after
% the environment.
%
\def\nonfillfinish{\afterenvbreak\endgroup}

% @lisp: indented, narrowed, typewriter font.
\def\lisp{\begingroup
  \nonfillstart
  \let\Elisp = \nonfillfinish
  \tt
  \let\kbdfont = \kbdexamplefont % Allow @kbd to do something special.
  \gobble       % eat return
}

% @example: Same as @lisp.
\def\example{\begingroup \def\Eexample{\nonfillfinish\endgroup}\lisp}

% @small... is usually equivalent to the non-small (@smallbook
% redefines).  We must call \example (or whatever) last in the
% definition, since it reads the return following the @example (or
% whatever) command.
%
% This actually allows (for example) @end display inside an
% @smalldisplay.  Too bad, but makeinfo will catch the error anyway.
%
\def\smalldisplay{\begingroup\def\Esmalldisplay{\nonfillfinish\endgroup}\display}
\def\smallexample{\begingroup\def\Esmallexample{\nonfillfinish\endgroup}\lisp}
\def\smallformat{\begingroup\def\Esmallformat{\nonfillfinish\endgroup}\format}
\def\smalllisp{\begingroup\def\Esmalllisp{\nonfillfinish\endgroup}\lisp}

% Real @smallexample and @smalllisp (when @smallbook): use smaller fonts.
% Originally contributed by Pavel@xerox.
\def\smalllispx{\begingroup
  \def\Esmalllisp{\nonfillfinish\endgroup}%
  \def\Esmallexample{\nonfillfinish\endgroup}%
  \indexfonts
  \lisp
}

% @display: same as @lisp except keep current font.
%
\def\display{\begingroup
  \nonfillstart
  \let\Edisplay = \nonfillfinish
  \gobble
}

% @smalldisplay (when @smallbook): @display plus smaller fonts.
%
\def\smalldisplayx{\begingroup
  \def\Esmalldisplay{\nonfillfinish\endgroup}%
  \indexfonts \rm
  \display
}

% @format: same as @display except don't narrow margins.
%
\def\format{\begingroup
  \let\nonarrowing = t
  \nonfillstart
  \let\Eformat = \nonfillfinish
  \gobble
}

% @smallformat (when @smallbook): @format plus smaller fonts.
%
\def\smallformatx{\begingroup
  \def\Esmallformat{\nonfillfinish\endgroup}%
  \indexfonts \rm
  \format
}

% @flushleft (same as @format).
%
\def\flushleft{\begingroup \def\Eflushleft{\nonfillfinish\endgroup}\format}

% @flushright.
%
\def\flushright{\begingroup
  \let\nonarrowing = t
  \nonfillstart
  \let\Eflushright = \nonfillfinish
  \advance\leftskip by 0pt plus 1fill
  \gobble
}

% @quotation does normal linebreaking (hence we can't use \nonfillstart)
% and narrows the margins.
%
\def\quotation{%
  \begingroup\inENV %This group ends at the end of the @quotation body
  {\parskip=0pt \aboveenvbreak}% because \aboveenvbreak inserts \parskip
  \singlespace
  \parindent=0pt
  % We have retained a nonzero parskip for the environment, since we're
  % doing normal filling. So to avoid extra space below the environment...
  \def\Equotation{\parskip = 0pt \nonfillfinish}%
  %
  % @cartouche defines \nonarrowing to inhibit narrowing at next level down.
  \ifx\nonarrowing\relax
    \advance\leftskip by \lispnarrowing
    \advance\rightskip by \lispnarrowing
    \exdentamount = \lispnarrowing
    \let\nonarrowing = \relax
  \fi
}


\message{defuns,}
% @defun etc.

% Allow user to change definition object font (\df) internally
\def\setdeffont #1 {\csname DEF#1\endcsname}

\newskip\defbodyindent \defbodyindent=.4in
\newskip\defargsindent \defargsindent=50pt
\newskip\deftypemargin \deftypemargin=12pt
\newskip\deflastargmargin \deflastargmargin=18pt

\newcount\parencount
% define \functionparens, which makes ( and ) and & do special things.
% \functionparens affects the group it is contained in.
\def\activeparens{%
\catcode`\(=\active \catcode`\)=\active \catcode`\&=\active
\catcode`\[=\active \catcode`\]=\active}

% Make control sequences which act like normal parenthesis chars.
\let\lparen = ( \let\rparen = )

{\activeparens % Now, smart parens don't turn on until &foo (see \amprm)

% Be sure that we always have a definition for `(', etc.  For example,
% if the fn name has parens in it, \boldbrax will not be in effect yet,
% so TeX would otherwise complain about undefined control sequence.
\global\let(=\lparen \global\let)=\rparen
\global\let[=\lbrack \global\let]=\rbrack

\gdef\functionparens{\boldbrax\let&=\amprm\parencount=0 }
\gdef\boldbrax{\let(=\opnr\let)=\clnr\let[=\lbrb\let]=\rbrb}
% This is used to turn on special parens
% but make & act ordinary (given that it's active).
\gdef\boldbraxnoamp{\let(=\opnr\let)=\clnr\let[=\lbrb\let]=\rbrb\let&=\ampnr}

% Definitions of (, ) and & used in args for functions.
% This is the definition of ( outside of all parentheses.
\gdef\oprm#1 {{\rm\char`\(}#1 \bf \let(=\opnested
  \global\advance\parencount by 1
}
%
% This is the definition of ( when already inside a level of parens.
\gdef\opnested{\char`\(\global\advance\parencount by 1 }
%
\gdef\clrm{% Print a paren in roman if it is taking us back to depth of 0.
  % also in that case restore the outer-level definition of (.
  \ifnum \parencount=1 {\rm \char `\)}\sl \let(=\oprm \else \char `\) \fi
  \global\advance \parencount by -1 }
% If we encounter &foo, then turn on ()-hacking afterwards
\gdef\amprm#1 {{\rm\&#1}\let(=\oprm \let)=\clrm\ }
%
\gdef\normalparens{\boldbrax\let&=\ampnr}
} % End of definition inside \activeparens
%% These parens (in \boldbrax) actually are a little bolder than the
%% contained text.  This is especially needed for [ and ]
\def\opnr{{\sf\char`\(}\global\advance\parencount by 1 }
\def\clnr{{\sf\char`\)}\global\advance\parencount by -1 }
\let\ampnr = \&
\def\lbrb{{\bf\char`\[}}
\def\rbrb{{\bf\char`\]}}

% Active &'s sneak into the index arguments, so make sure it's defined.
{
  \catcode`& = 13
  \global\let& = \ampnr
}

% First, defname, which formats the header line itself.
% #1 should be the function name.
% #2 should be the type of definition, such as "Function".

\def\defname #1#2{%
% Get the values of \leftskip and \rightskip as they were
% outside the @def...
\dimen2=\leftskip
\advance\dimen2 by -\defbodyindent
\noindent
\setbox0=\hbox{\hskip \deflastargmargin{\rm #2}\hskip \deftypemargin}%
\dimen0=\hsize \advance \dimen0 by -\wd0 % compute size for first line
\dimen1=\hsize \advance \dimen1 by -\defargsindent %size for continuations
\parshape 2 0in \dimen0 \defargsindent \dimen1
% Now output arg 2 ("Function" or some such)
% ending at \deftypemargin from the right margin,
% but stuck inside a box of width 0 so it does not interfere with linebreaking
{% Adjust \hsize to exclude the ambient margins,
% so that \rightline will obey them.
\advance \hsize by -\dimen2
\rlap{\rightline{{\rm #2}\hskip -1.25pc }}}%
% Make all lines underfull and no complaints:
\tolerance=10000 \hbadness=10000
\advance\leftskip by -\defbodyindent
\exdentamount=\defbodyindent
{\df #1}\enskip        % Generate function name
}

% Actually process the body of a definition
% #1 should be the terminating control sequence, such as \Edefun.
% #2 should be the "another name" control sequence, such as \defunx.
% #3 should be the control sequence that actually processes the header,
%    such as \defunheader.

\def\defparsebody #1#2#3{\begingroup\inENV% Environment for definitionbody
\medbreak %
% Define the end token that this defining construct specifies
% so that it will exit this group.
\def#1{\endgraf\endgroup\medbreak}%
\def#2{\begingroup\obeylines\activeparens\spacesplit#3}%
\parindent=0in
\advance\leftskip by \defbodyindent
\exdentamount=\defbodyindent
\begingroup %
\catcode 61=\active % 61 is `='
\obeylines\activeparens\spacesplit#3}

% #1 is the \E... control sequence to end the definition (which we define).
% #2 is the \...x control sequence for consecutive fns (which we define).
% #3 is the control sequence to call to resume processing.
% #4, delimited by the space, is the class name.
%
\def\defmethparsebody#1#2#3#4 {\begingroup\inENV %
\medbreak %
% Define the end token that this defining construct specifies
% so that it will exit this group.
\def#1{\endgraf\endgroup\medbreak}%
\def#2##1 {\begingroup\obeylines\activeparens\spacesplit{#3{##1}}}%
\parindent=0in
\advance\leftskip by \defbodyindent
\exdentamount=\defbodyindent
\begingroup\obeylines\activeparens\spacesplit{#3{#4}}}

% Used for @deftypemethod and @deftypeivar.
% #1 is the \E... control sequence to end the definition (which we define).
% #2 is the \...x control sequence for consecutive fns (which we define).
% #3 is the control sequence to call to resume processing.
% #4, delimited by a space, is the class name.
% #5 is the method's return type.
%
\def\deftypemethparsebody#1#2#3#4 #5 {\begingroup\inENV
  \medbreak
  \def#1{\endgraf\endgroup\medbreak}%
  \def#2##1 ##2 {\begingroup\obeylines\activeparens\spacesplit{#3{##1}{##2}}}%
  \parindent=0in
  \advance\leftskip by \defbodyindent
  \exdentamount=\defbodyindent
  \begingroup\obeylines\activeparens\spacesplit{#3{#4}{#5}}}

% Used for @deftypeop.  The change from \deftypemethparsebody is an
% extra argument at the beginning which is the `category', instead of it
% being the hardwired string `Method' or `Instance Variable'.  We have
% to account for this both in the \...x definition and in parsing the
% input at hand.  Thus also need a control sequence (passed as #5) for
% the \E... definition to assign the category name to.
% 
\def\deftypeopparsebody#1#2#3#4#5 #6 {\begingroup\inENV
  \medbreak
  \def#1{\endgraf\endgroup\medbreak}%
  \def#2##1 ##2 ##3 {%
    \def#4{##1}%
    \begingroup\obeylines\activeparens\spacesplit{#3{##2}{##3}}}%
  \parindent=0in
  \advance\leftskip by \defbodyindent
  \exdentamount=\defbodyindent
  \begingroup\obeylines\activeparens\spacesplit{#3{#5}{#6}}}

\def\defopparsebody #1#2#3#4#5 {\begingroup\inENV %
\medbreak %
% Define the end token that this defining construct specifies
% so that it will exit this group.
\def#1{\endgraf\endgroup\medbreak}%
\def#2##1 ##2 {\def#4{##1}%
\begingroup\obeylines\activeparens\spacesplit{#3{##2}}}%
\parindent=0in
\advance\leftskip by \defbodyindent
\exdentamount=\defbodyindent
\begingroup\obeylines\activeparens\spacesplit{#3{#5}}}

% These parsing functions are similar to the preceding ones
% except that they do not make parens into active characters.
% These are used for "variables" since they have no arguments.

\def\defvarparsebody #1#2#3{\begingroup\inENV% Environment for definitionbody
\medbreak %
% Define the end token that this defining construct specifies
% so that it will exit this group.
\def#1{\endgraf\endgroup\medbreak}%
\def#2{\begingroup\obeylines\spacesplit#3}%
\parindent=0in
\advance\leftskip by \defbodyindent
\exdentamount=\defbodyindent
\begingroup %
\catcode 61=\active %
\obeylines\spacesplit#3}

% This is used for \def{tp,vr}parsebody.  It could probably be used for
% some of the others, too, with some judicious conditionals.
%
\def\parsebodycommon#1#2#3{%
  \begingroup\inENV %
  \medbreak %
  % Define the end token that this defining construct specifies
  % so that it will exit this group.
  \def#1{\endgraf\endgroup\medbreak}%
  \def#2##1 {\begingroup\obeylines\spacesplit{#3{##1}}}%
  \parindent=0in
  \advance\leftskip by \defbodyindent
  \exdentamount=\defbodyindent
  \begingroup\obeylines
}

\def\defvrparsebody#1#2#3#4 {%
  \parsebodycommon{#1}{#2}{#3}%
  \spacesplit{#3{#4}}%
}

% This loses on `@deftp {Data Type} {struct termios}' -- it thinks the
% type is just `struct', because we lose the braces in `{struct
% termios}' when \spacesplit reads its undelimited argument.  Sigh.
% \let\deftpparsebody=\defvrparsebody
%
% So, to get around this, we put \empty in with the type name.  That
% way, TeX won't find exactly `{...}' as an undelimited argument, and
% won't strip off the braces.
%
\def\deftpparsebody #1#2#3#4 {%
  \parsebodycommon{#1}{#2}{#3}%
  \spacesplit{\parsetpheaderline{#3{#4}}}\empty
}

% Fine, but then we have to eventually remove the \empty *and* the
% braces (if any).  That's what this does.
%
\def\removeemptybraces\empty#1\relax{#1}

% After \spacesplit has done its work, this is called -- #1 is the final
% thing to call, #2 the type name (which starts with \empty), and #3
% (which might be empty) the arguments.
%
\def\parsetpheaderline#1#2#3{%
  #1{\removeemptybraces#2\relax}{#3}%
}%

\def\defopvarparsebody #1#2#3#4#5 {\begingroup\inENV %
\medbreak %
% Define the end token that this defining construct specifies
% so that it will exit this group.
\def#1{\endgraf\endgroup\medbreak}%
\def#2##1 ##2 {\def#4{##1}%
\begingroup\obeylines\spacesplit{#3{##2}}}%
\parindent=0in
\advance\leftskip by \defbodyindent
\exdentamount=\defbodyindent
\begingroup\obeylines\spacesplit{#3{#5}}}

% Split up #2 at the first space token.
% call #1 with two arguments:
%  the first is all of #2 before the space token,
%  the second is all of #2 after that space token.
% If #2 contains no space token, all of it is passed as the first arg
% and the second is passed as empty.

{\obeylines
\gdef\spacesplit#1#2^^M{\endgroup\spacesplitfoo{#1}#2 \relax\spacesplitfoo}%
\long\gdef\spacesplitfoo#1#2 #3#4\spacesplitfoo{%
\ifx\relax #3%
#1{#2}{}\else #1{#2}{#3#4}\fi}}

% So much for the things common to all kinds of definitions.

% Define @defun.

% First, define the processing that is wanted for arguments of \defun
% Use this to expand the args and terminate the paragraph they make up

\def\defunargs#1{\functionparens \sl
% Expand, preventing hyphenation at `-' chars.
% Note that groups don't affect changes in \hyphenchar.
% Set the font temporarily and use \font in case \setfont made \tensl a macro.
{\tensl\hyphenchar\font=0}%
#1%
{\tensl\hyphenchar\font=45}%
\ifnum\parencount=0 \else \errmessage{Unbalanced parentheses in @def}\fi%
\interlinepenalty=10000
\advance\rightskip by 0pt plus 1fil
\endgraf\nobreak\vskip -\parskip\nobreak
}

\def\deftypefunargs #1{%
% Expand, preventing hyphenation at `-' chars.
% Note that groups don't affect changes in \hyphenchar.
% Use \boldbraxnoamp, not \functionparens, so that & is not special.
\boldbraxnoamp
\tclose{#1}% avoid \code because of side effects on active chars
\interlinepenalty=10000
\advance\rightskip by 0pt plus 1fil
\endgraf\nobreak\vskip -\parskip\nobreak
}

% Do complete processing of one @defun or @defunx line already parsed.

% @deffn Command forward-char nchars

\def\deffn{\defmethparsebody\Edeffn\deffnx\deffnheader}

\def\deffnheader #1#2#3{\doind {fn}{\code{#2}}%
\begingroup\defname {#2}{#1}\defunargs{#3}\endgroup %
\catcode 61=\other % Turn off change made in \defparsebody
}

% @defun == @deffn Function

\def\defun{\defparsebody\Edefun\defunx\defunheader}

\def\defunheader #1#2{\doind {fn}{\code{#1}}% Make entry in function index
\begingroup\defname {#1}{\putwordDeffunc}%
\defunargs {#2}\endgroup %
\catcode 61=\other % Turn off change made in \defparsebody
}

% @deftypefun int foobar (int @var{foo}, float @var{bar})

\def\deftypefun{\defparsebody\Edeftypefun\deftypefunx\deftypefunheader}

% #1 is the data type.  #2 is the name and args.
\def\deftypefunheader #1#2{\deftypefunheaderx{#1}#2 \relax}
% #1 is the data type, #2 the name, #3 the args.
\def\deftypefunheaderx #1#2 #3\relax{%
\doind {fn}{\code{#2}}% Make entry in function index
\begingroup\defname {\defheaderxcond#1\relax$$$#2}{\putwordDeftypefun}%
\deftypefunargs {#3}\endgroup %
\catcode 61=\other % Turn off change made in \defparsebody
}

% @deftypefn {Library Function} int foobar (int @var{foo}, float @var{bar})

\def\deftypefn{\defmethparsebody\Edeftypefn\deftypefnx\deftypefnheader}

% \defheaderxcond#1\relax$$$
% puts #1 in @code, followed by a space, but does nothing if #1 is null.
\def\defheaderxcond#1#2$$${\ifx#1\relax\else\code{#1#2} \fi}

% #1 is the classification.  #2 is the data type.  #3 is the name and args.
\def\deftypefnheader #1#2#3{\deftypefnheaderx{#1}{#2}#3 \relax}
% #1 is the classification, #2 the data type, #3 the name, #4 the args.
\def\deftypefnheaderx #1#2#3 #4\relax{%
\doind {fn}{\code{#3}}% Make entry in function index
\begingroup
\normalparens % notably, turn off `&' magic, which prevents
%               at least some C++ text from working
\defname {\defheaderxcond#2\relax$$$#3}{#1}%
\deftypefunargs {#4}\endgroup %
\catcode 61=\other % Turn off change made in \defparsebody
}

% @defmac == @deffn Macro

\def\defmac{\defparsebody\Edefmac\defmacx\defmacheader}

\def\defmacheader #1#2{\doind {fn}{\code{#1}}% Make entry in function index
\begingroup\defname {#1}{\putwordDefmac}%
\defunargs {#2}\endgroup %
\catcode 61=\other % Turn off change made in \defparsebody
}

% @defspec == @deffn Special Form

\def\defspec{\defparsebody\Edefspec\defspecx\defspecheader}

\def\defspecheader #1#2{\doind {fn}{\code{#1}}% Make entry in function index
\begingroup\defname {#1}{\putwordDefspec}%
\defunargs {#2}\endgroup %
\catcode 61=\other % Turn off change made in \defparsebody
}

% @defop CATEGORY CLASS OPERATION ARG...
%
\def\defop #1 {\def\defoptype{#1}%
\defopparsebody\Edefop\defopx\defopheader\defoptype}
%
\def\defopheader#1#2#3{%
\dosubind {fn}{\code{#2}}{\putwordon\ #1}% Make entry in function index
\begingroup\defname {#2}{\defoptype\ \putwordon\ #1}%
\defunargs {#3}\endgroup %
}

% @deftypeop CATEGORY CLASS TYPE OPERATION ARG...
%
\def\deftypeop #1 {\def\deftypeopcategory{#1}%
  \deftypeopparsebody\Edeftypeop\deftypeopx\deftypeopheader
                       \deftypeopcategory}
%
% #1 is the class name, #2 the data type, #3 the operation name, #4 the args.
\def\deftypeopheader#1#2#3#4{%
  \dosubind{fn}{\code{#3}}{\putwordon\ \code{#1}}% entry in function index
  \begingroup
    \defname{\defheaderxcond#2\relax$$$#3}
            {\deftypeopcategory\ \putwordon\ \code{#1}}%
    \deftypefunargs{#4}%
  \endgroup
}

% @deftypemethod CLASS TYPE METHOD ARG...
%
\def\deftypemethod{%
  \deftypemethparsebody\Edeftypemethod\deftypemethodx\deftypemethodheader}
%
% #1 is the class name, #2 the data type, #3 the method name, #4 the args.
\def\deftypemethodheader#1#2#3#4{%
  \dosubind{fn}{\code{#3}}{\putwordon\ \code{#1}}% entry in function index
  \begingroup
    \defname{\defheaderxcond#2\relax$$$#3}{\putwordMethodon\ \code{#1}}%
    \deftypefunargs{#4}%
  \endgroup
}

% @deftypeivar CLASS TYPE VARNAME
%
\def\deftypeivar{%
  \deftypemethparsebody\Edeftypeivar\deftypeivarx\deftypeivarheader}
%
% #1 is the class name, #2 the data type, #3 the variable name.
\def\deftypeivarheader#1#2#3{%
  \dosubind{vr}{\code{#3}}{\putwordof\ \code{#1}}% entry in variable index
  \begingroup
    \defname{#3}{\putwordInstanceVariableof\ \code{#1}}%
    \defvarargs{#3}%
  \endgroup
}

% @defmethod == @defop Method
%
\def\defmethod{\defmethparsebody\Edefmethod\defmethodx\defmethodheader}
%
% #1 is the class name, #2 the method name, #3 the args.
\def\defmethodheader#1#2#3{%
  \dosubind{fn}{\code{#2}}{\putwordon\ \code{#1}}% entry in function index
  \begingroup
    \defname{#2}{\putwordMethodon\ \code{#1}}%
    \defunargs{#3}%
  \endgroup
}

% @defcv {Class Option} foo-class foo-flag

\def\defcv #1 {\def\defcvtype{#1}%
\defopvarparsebody\Edefcv\defcvx\defcvarheader\defcvtype}

\def\defcvarheader #1#2#3{%
\dosubind {vr}{\code{#2}}{\putwordof\ #1}% Make entry in var index
\begingroup\defname {#2}{\defcvtype\ \putwordof\ #1}%
\defvarargs {#3}\endgroup %
}

% @defivar CLASS VARNAME == @defcv {Instance Variable} CLASS VARNAME
%
\def\defivar{\defvrparsebody\Edefivar\defivarx\defivarheader}
%
\def\defivarheader#1#2#3{%
  \dosubind {vr}{\code{#2}}{\putwordof\ #1}% entry in var index
  \begingroup
    \defname{#2}{\putwordInstanceVariableof\ #1}%
    \defvarargs{#3}%
  \endgroup
}

% @defvar
% First, define the processing that is wanted for arguments of @defvar.
% This is actually simple: just print them in roman.
% This must expand the args and terminate the paragraph they make up
\def\defvarargs #1{\normalparens #1%
\interlinepenalty=10000
\endgraf\nobreak\vskip -\parskip\nobreak}

% @defvr Counter foo-count

\def\defvr{\defvrparsebody\Edefvr\defvrx\defvrheader}

\def\defvrheader #1#2#3{\doind {vr}{\code{#2}}%
\begingroup\defname {#2}{#1}\defvarargs{#3}\endgroup}

% @defvar == @defvr Variable

\def\defvar{\defvarparsebody\Edefvar\defvarx\defvarheader}

\def\defvarheader #1#2{\doind {vr}{\code{#1}}% Make entry in var index
\begingroup\defname {#1}{\putwordDefvar}%
\defvarargs {#2}\endgroup %
}

% @defopt == @defvr {User Option}

\def\defopt{\defvarparsebody\Edefopt\defoptx\defoptheader}

\def\defoptheader #1#2{\doind {vr}{\code{#1}}% Make entry in var index
\begingroup\defname {#1}{\putwordDefopt}%
\defvarargs {#2}\endgroup %
}

% @deftypevar int foobar

\def\deftypevar{\defvarparsebody\Edeftypevar\deftypevarx\deftypevarheader}

% #1 is the data type.  #2 is the name, perhaps followed by text that
% is actually part of the data type, which should not be put into the index.
\def\deftypevarheader #1#2{%
\dovarind#2 \relax% Make entry in variables index
\begingroup\defname {\defheaderxcond#1\relax$$$#2}{\putwordDeftypevar}%
\interlinepenalty=10000
\endgraf\nobreak\vskip -\parskip\nobreak
\endgroup}
\def\dovarind#1 #2\relax{\doind{vr}{\code{#1}}}

% @deftypevr {Global Flag} int enable

\def\deftypevr{\defvrparsebody\Edeftypevr\deftypevrx\deftypevrheader}

\def\deftypevrheader #1#2#3{\dovarind#3 \relax%
\begingroup\defname {\defheaderxcond#2\relax$$$#3}{#1}
\interlinepenalty=10000
\endgraf\nobreak\vskip -\parskip\nobreak
\endgroup}

% Now define @deftp
% Args are printed in bold, a slight difference from @defvar.

\def\deftpargs #1{\bf \defvarargs{#1}}

% @deftp Class window height width ...

\def\deftp{\deftpparsebody\Edeftp\deftpx\deftpheader}

\def\deftpheader #1#2#3{\doind {tp}{\code{#2}}%
\begingroup\defname {#2}{#1}\deftpargs{#3}\endgroup}

% These definitions are used if you use @defunx (etc.)
% anywhere other than immediately after a @defun or @defunx.
% 
\def\defcvx#1 {\errmessage{@defcvx in invalid context}}
\def\deffnx#1 {\errmessage{@deffnx in invalid context}}
\def\defivarx#1 {\errmessage{@defivarx in invalid context}}
\def\defmacx#1 {\errmessage{@defmacx in invalid context}}
\def\defmethodx#1 {\errmessage{@defmethodx in invalid context}}
\def\defoptx #1 {\errmessage{@defoptx in invalid context}}
\def\defopx#1 {\errmessage{@defopx in invalid context}}
\def\defspecx#1 {\errmessage{@defspecx in invalid context}}
\def\deftpx#1 {\errmessage{@deftpx in invalid context}}
\def\deftypefnx#1 {\errmessage{@deftypefnx in invalid context}}
\def\deftypefunx#1 {\errmessage{@deftypefunx in invalid context}}
\def\deftypeivarx#1 {\errmessage{@deftypeivarx in invalid context}}
\def\deftypemethodx#1 {\errmessage{@deftypemethodx in invalid context}}
\def\deftypeopx#1 {\errmessage{@deftypeopx in invalid context}}
\def\deftypevarx#1 {\errmessage{@deftypevarx in invalid context}}
\def\deftypevrx#1 {\errmessage{@deftypevrx in invalid context}}
\def\defunx#1 {\errmessage{@defunx in invalid context}}
\def\defvarx#1 {\errmessage{@defvarx in invalid context}}
\def\defvrx#1 {\errmessage{@defvrx in invalid context}}


\message{macros,}
% @macro.

% To do this right we need a feature of e-TeX, \scantokens,
% which we arrange to emulate with a temporary file in ordinary TeX.
\ifx\eTeXversion\undefined
 \newwrite\macscribble
 \def\scanmacro#1{%
   \begingroup \newlinechar`\^^M
   % Undo catcode changes of \startcontents and \doprintindex
   \catcode`\@=0 \catcode`\\=12 \escapechar=`\@
   % Append \endinput to make sure that TeX does not see the ending newline.
   \toks0={#1\endinput}%
   \immediate\openout\macscribble=\jobname.tmp
   \immediate\write\macscribble{\the\toks0}%
   \immediate\closeout\macscribble
   \let\xeatspaces\eatspaces
   \input \jobname.tmp
   \endgroup
}
\else
\def\scanmacro#1{%
\begingroup \newlinechar`\^^M
% Undo catcode changes of \startcontents and \doprintindex
\catcode`\@=0 \catcode`\\=12 \escapechar=`\@
\let\xeatspaces\eatspaces\scantokens{#1\endinput}\endgroup}
\fi

\newcount\paramno   % Count of parameters
\newtoks\macname    % Macro name
\newif\ifrecursive  % Is it recursive?
\def\macrolist{}    % List of all defined macros in the form
                    % \do\macro1\do\macro2...

% Utility routines.
% Thisdoes \let #1 = #2, except with \csnames.
\def\cslet#1#2{%
\expandafter\expandafter
\expandafter\let
\expandafter\expandafter
\csname#1\endcsname
\csname#2\endcsname}

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
{\catcode`\^^M=12\catcode`\Q=3%
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

\def\macrobodyctxt{%
  \catcode`\~=12
  \catcode`\^=12
  \catcode`\_=12
  \catcode`\|=12
  \catcode`\<=12
  \catcode`\>=12
  \catcode`\+=12
  \catcode`\{=12
  \catcode`\}=12
  \catcode`\@=12
  \catcode`\^^M=12
  \usembodybackslash}

\def\macroargctxt{%
  \catcode`\~=12
  \catcode`\^=12
  \catcode`\_=12
  \catcode`\|=12
  \catcode`\<=12
  \catcode`\>=12
  \catcode`\+=12
  \catcode`\@=12
  \catcode`\\=12}

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
     \else \errmessage{The name \the\macname\space is reserved}\fi
     \global\cslet{macsave.\the\macname}{\the\macname}%
     \global\expandafter\let\csname ismacro.\the\macname\endcsname=1%
     % Add the macroname to \macrolist
     \toks0 = \expandafter{\macrolist\do}%
     \xdef\macrolist{\the\toks0
       \expandafter\noexpand\csname\the\macname\endcsname}%
  \fi
  \begingroup \macrobodyctxt
  \ifrecursive \expandafter\parsermacbody
  \else \expandafter\parsemacbody
  \fi}

\def\unmacro{\parsearg\unmacroxxx}
\def\unmacroxxx#1{%
  \if1\csname ismacro.#1\endcsname
    \global\cslet{#1}{macsave.#1}%
    \global\expandafter\let \csname ismacro.#1\endcsname=0%
    % Remove the macro name from \macrolist
    \begingroup
      \edef\tempa{\expandafter\noexpand\csname#1\endcsname}%
      \def\do##1{%
        \def\tempb{##1}%
        \ifx\tempa\tempb
          % remove this
        \else
          \toks0 = \expandafter{\newmacrolist\do}%
          \edef\newmacrolist{\the\toks0\expandafter\noexpand\tempa}%
        \fi}%
      \def\newmacrolist{}%
      % Execute macro list to define \newmacrolist
      \macrolist
      \global\let\macrolist\newmacrolist
    \endgroup
  \else
    \errmessage{Macro #1 not defined}%
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
\def\braceorline#1{\let\next=#1\futurelet\nchar\braceorlinexxx}
\def\braceorlinexxx{%
  \ifx\nchar\bgroup\else
    \expandafter\parsearg
  \fi \next}

% We mant to disable all macros during \shipout so that they are not
% expanded by \write.
\def\turnoffmacros{\begingroup \def\do##1{\let\noexpand##1=\relax}%
  \edef\next{\macrolist}\expandafter\endgroup\next}


% @alias.
\def\alias#1=#2{\gdef#1{#2}}


\message{cross references,}
% @xref etc.

\newwrite\auxfile

\newif\ifhavexrefs    % True if xref values are known.
\newif\ifwarnedxrefs  % True if we warned once that they aren't known.

% @inforef is relatively simple.
\def\inforef #1{\inforefzzz #1,,,,**}
\def\inforefzzz #1,#2,#3,#4**{\putwordSee{} \putwordInfo{} \putwordfile{} \file{\ignorespaces #3{}},
  node \samp{\ignorespaces#1{}}}

% @node's job is to define \lastnode.
\def\node{\ENVcheck\parsearg\nodezzz}
\def\nodezzz#1{\nodexxx [#1,]}
\def\nodexxx[#1,#2]{\gdef\lastnode{#1}}
\let\nwnode=\node
\let\lastnode=\relax

% The sectioning commands (@chapter, etc.) call these.
\def\donoderef{%
  \ifx\lastnode\relax\else
    \expandafter\expandafter\expandafter\setref{\lastnode}%
      {Ysectionnumberandtype}%
    \global\let\lastnode=\relax
  \fi
}
\def\unnumbnoderef{%
  \ifx\lastnode\relax\else
    \expandafter\expandafter\expandafter\setref{\lastnode}{Ynothing}%
    \global\let\lastnode=\relax
  \fi
}
\def\appendixnoderef{%
  \ifx\lastnode\relax\else
    \expandafter\expandafter\expandafter\setref{\lastnode}%
      {Yappendixletterandtype}%
    \global\let\lastnode=\relax
  \fi
}


% @anchor{NAME} -- define xref target at arbitrary point.
%
{ \catcode`\@ = 11
% From latex.ltx, to make @anchor truely invisible.
\newdimen\@savsk
\newcount\@savsf
\gdef\@bsphack{\relax
  \ifhmode \@savsk\lastskip \@savsf\spacefactor \fi
}
\gdef\@esphack{\relax
  \ifhmode \spacefactor\@savsf
    \ifdim\@savsk>\z@ \ignorespaces \fi
  \fi
}
\gdef\anchor#1{\@bsphack \setref{#1}{Ynothing}\@esphack}
}

% \setref{NAME}{SNT} defines a cross-reference point NAME, namely
% NAME-title, NAME-pg, and NAME-SNT.  Called from \foonoderef.  We have
% to set \indexdummies so commands such as @code in a section title
% aren't expanded.  It would be nicer not to expand the titles in the
% first place, but there's so many layers that that is hard to do.
%
\def\setref#1#2{{%
  \indexdummies
  \ifpdf \pdfmkdest{#1}\fi
  \dosetq{#1-title}{Ytitle}%
  \dosetq{#1-pg}{Ypagenumber}%
  \dosetq{#1-snt}{#2}%
}}

% @xref, @pxref, and @ref generate cross-references.  For \xrefX, #1 is
% the node name, #2 the name of the Info cross-reference, #3 the printed
% node name, #4 the name of the Info file, #5 the name of the printed
% manual.  All but the node name can be omitted.
%
\def\pxref#1{\putwordsee{} \xrefX[#1,,,,,,,]}
\def\xref#1{\putwordSee{} \xrefX[#1,,,,,,,]}
\def\ref#1{\xrefX[#1,,,,,,,]}
\def\xrefX[#1,#2,#3,#4,#5,#6]{\begingroup
  \def\printedmanual{\ignorespaces #5}%
  \def\printednodename{\ignorespaces #3}%
  \setbox1=\hbox{\printedmanual}%
  \setbox0=\hbox{\printednodename}%
  \ifdim \wd0 = 0pt
    % No printed node name was explicitly given.
    \expandafter\ifx\csname SETxref-automatic-section-title\endcsname\relax
      % Use the node name inside the square brackets.
      \def\printednodename{\ignorespaces #1}%
    \else
      % Use the actual chapter/section title appear inside
      % the square brackets.  Use the real section title if we have it.
      \ifdim \wd1 > 0pt
        % It is in another manual, so we don't have it.
        \def\printednodename{\ignorespaces #1}%
      \else
        \ifhavexrefs
          % We know the real title if we have the xref values.
          \def\printednodename{\refx{#1-title}{}}%
        \else
          % Otherwise just copy the Info node name.
          \def\printednodename{\ignorespaces #1}%
        \fi%
      \fi
    \fi
  \fi
  %
  % If we use \unhbox0 and \unhbox1 to print the node names, TeX does not
  % insert empty discretionaries after hyphens, which means that it will
  % not find a line break at a hyphen in a node names.  Since some manuals
  % are best written with fairly long node names, containing hyphens, this
  % is a loss.  Therefore, we give the text of the node name again, so it
  % is as if TeX is seeing it for the first time.
  \ifpdf
    \leavevmode
    \getfilename{#4}%
    \ifnum\filenamelength>0
      \pdfannotlink attr{/Border [0 0 0]}%
        goto file{\the\filename.pdf} name{#1@}%
    \else
      \pdfannotlink attr{/Border [0 0 0]}%
        goto name{#1@}%
    \fi
    \BlueGreen
  \fi
  %
  \ifdim \wd1 > 0pt
    \putwordsection{} ``\printednodename'' \putwordin{} \cite{\printedmanual}%
  \else
    % _ (for example) has to be the character _ for the purposes of the
    % control sequence corresponding to the node, but it has to expand
    % into the usual \leavevmode...\vrule stuff for purposes of
    % printing. So we \turnoffactive for the \refx-snt, back on for the
    % printing, back off for the \refx-pg.
    {\normalturnoffactive
     % Only output a following space if the -snt ref is nonempty; for
     % @unnumbered and @anchor, it won't be.
     \setbox2 = \hbox{\ignorespaces \refx{#1-snt}{}}%
     \ifdim \wd2 > 0pt \refx{#1-snt}\space\fi
    }%
    % [mynode],
    [\printednodename],\space
    % page 3
    \turnoffactive \putwordpage\tie\refx{#1-pg}{}%
  \fi
  \ifpdf \Black\pdfendlink \fi
\endgroup}

% \dosetq is the interface for calls from other macros

% Use \normalturnoffactive so that punctuation chars such as underscore
% and backslash work in node names.  (\turnoffactive doesn't do \.)
\def\dosetq#1#2{%
  {\let\folio=0%
   \normalturnoffactive
   \edef\next{\write\auxfile{\internalsetq{#1}{#2}}}%
   \iflinks
     \next
   \fi
  }%
}

% \internalsetq {foo}{page} expands into
% CHARACTERS 'xrdef {foo}{...expansion of \Ypage...}
% When the aux file is read, ' is the escape character

\def\internalsetq #1#2{'xrdef {#1}{\csname #2\endcsname}}

% Things to be expanded by \internalsetq

\def\Ypagenumber{\folio}

\def\Ytitle{\thissection}

\def\Ynothing{}

\def\Ysectionnumberandtype{%
\ifnum\secno=0 \putwordChapter\xreftie\the\chapno %
\else \ifnum \subsecno=0 \putwordSection\xreftie\the\chapno.\the\secno %
\else \ifnum \subsubsecno=0 %
\putwordSection\xreftie\the\chapno.\the\secno.\the\subsecno %
\else %
\putwordSection\xreftie\the\chapno.\the\secno.\the\subsecno.\the\subsubsecno %
\fi \fi \fi }

\def\Yappendixletterandtype{%
\ifnum\secno=0 \putwordAppendix\xreftie'char\the\appendixno{}%
\else \ifnum \subsecno=0 \putwordSection\xreftie'char\the\appendixno.\the\secno %
\else \ifnum \subsubsecno=0 %
\putwordSection\xreftie'char\the\appendixno.\the\secno.\the\subsecno %
\else %
\putwordSection\xreftie'char\the\appendixno.\the\secno.\the\subsecno.\the\subsubsecno %
\fi \fi \fi }

\gdef\xreftie{'tie}

% Use TeX 3.0's \inputlineno to get the line number, for better error
% messages, but if we're using an old version of TeX, don't do anything.
%
\ifx\inputlineno\thisisundefined
  \let\linenumber = \empty % Non-3.0.
\else
  \def\linenumber{\the\inputlineno:\space}
\fi

% Define \refx{NAME}{SUFFIX} to reference a cross-reference string named NAME.
% If its value is nonempty, SUFFIX is output afterward.

\def\refx#1#2{%
  \expandafter\ifx\csname X#1\endcsname\relax
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
    \csname X#1\endcsname
  \fi
  #2% Output the suffix in any case.
}

% This is the macro invoked by entries in the aux file.
%
\def\xrdef#1{\begingroup
  % Reenable \ as an escape while reading the second argument.
  \catcode`\\ = 0
  \afterassignment\endgroup
  \expandafter\gdef\csname X#1\endcsname
}

% Read the last existing aux file, if any.  No error if none exists.
\def\readauxfile{\begingroup
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
  \catcode`\@=\other
  \catcode`\^=\other
  % It was suggested to define this as 7, which would allow ^^e4 etc.
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
  \catcode`+=\other % avoid \+ for paranoia even though we've turned it off
  % Make the characters 128-255 be printing characters
  {%
    \count 1=128
    \def\loop{%
      \catcode\count 1=\other
      \advance\count 1 by 1
      \ifnum \count 1<256 \loop \fi
    }%
  }%
  % The aux file uses ' as the escape (for now).
  % Turn off \ as an escape so we do not lose on
  % entries which were dumped with control sequences in their names.
  % For example, 'xrdef {$\leq $-fun}{page ...} made by @defun ^^
  % Reference to such entries still does not work the way one would wish,
  % but at least they do not bomb out when the aux file is read in.
  \catcode`\{=1
  \catcode`\}=2
  \catcode`\%=\other
  \catcode`\'=0
  \catcode`\\=\other
  %
  \openin 1 \jobname.aux
  \ifeof 1 \else
    \closein 1
    \input \jobname.aux
    \global\havexrefstrue
    \global\warnedobstrue
  \fi
  % Open the new aux file.  TeX will close it automatically at exit.
  \openout\auxfile=\jobname.aux
\endgroup}


% Footnotes.

\newcount \footnoteno

% The trailing space in the following definition for supereject is
% vital for proper filling; pages come out unaligned when you do a
% pagealignmacro call if that space before the closing brace is
% removed. (Generally, numeric constants should always be followed by a
% space to prevent strange expansion errors.)
\def\supereject{\par\penalty -20000\footnoteno =0 }

% @footnotestyle is meaningful for info output only.
\let\footnotestyle=\comment

\let\ptexfootnote=\footnote

{\catcode `\@=11
%
% Auto-number footnotes.  Otherwise like plain.
\gdef\footnote{%
  \global\advance\footnoteno by \@ne
  \edef\thisfootno{$^{\the\footnoteno}$}%
  %
  % In case the footnote comes at the end of a sentence, preserve the
  % extra spacing after we do the footnote number.
  \let\@sf\empty
  \ifhmode\edef\@sf{\spacefactor\the\spacefactor}\/\fi
  %
  % Remove inadvertent blank space before typesetting the footnote number.
  \unskip
  \thisfootno\@sf
  \footnotezzz
}%

% Don't bother with the trickery in plain.tex to not require the
% footnote text as a parameter.  Our footnotes don't need to be so general.
%
% Oh yes, they do; otherwise, @ifset and anything else that uses
% \parseargline fail inside footnotes because the tokens are fixed when
% the footnote is read.  --karl, 16nov96.
%
\long\gdef\footnotezzz{\insert\footins\bgroup
  % We want to typeset this text as a normal paragraph, even if the
  % footnote reference occurs in (for example) a display environment.
  % So reset some parameters.
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
  % Hang the footnote text off the number.
  \hang
  \textindent{\thisfootno}%
  %
  % Don't crash into the line above the footnote text.  Since this
  % expands into a box, it must come within the paragraph, lest it
  % provide a place where TeX can split the footnote.
  \footstrut
  \futurelet\next\fo@t
}
\def\fo@t{\ifcat\bgroup\noexpand\next \let\next\f@@t
  \else\let\next\f@t\fi \next}
\def\f@@t{\bgroup\aftergroup\@foot\let\next}
\def\f@t#1{#1\@foot}
\def\@foot{\strut\egroup}

}%end \catcode `\@=11

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

% For a final copy, take out the rectangles
% that mark overfull boxes (in case you have decided
% that the text looks ok even though it passes the margin).
%
\def\finalout{\overfullrule=0pt}

% @image.  We use the macros from epsf.tex to support this.
% If epsf.tex is not installed and @image is used, we complain.
%
% Check for and read epsf.tex up front.  If we read it only at @image
% time, we might be inside a group, and then its definitions would get
% undone and the next image would fail.
\openin 1 = epsf.tex
\ifeof 1 \else
  \closein 1
  % Do not bother showing banner with post-v2.7 epsf.tex (available in
  % doc/epsf.tex until it shows up on ctan).
  \def\epsfannounce{\toks0 = }%
  \input epsf.tex
\fi
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
    \imagexxx #1,,,\finish
  \fi
}
%
% Arguments to @image:
% #1 is (mandatory) image filename; we tack on .eps extension.
% #2 is (optional) width, #3 is (optional) height.
% #4 is just the usual extra ignored arg for parsing this stuff.
\def\imagexxx#1,#2,#3,#4\finish{%
  \ifx\pdfoutput\undefined
    % \epsfbox itself resets \epsf?size at each figure.
    \setbox0 = \hbox{\ignorespaces #2}\ifdim\wd0 > 0pt \epsfxsize=#2\relax \fi
    \setbox0 = \hbox{\ignorespaces #3}\ifdim\wd0 > 0pt \epsfysize=#3\relax \fi
    \begingroup
      \catcode`\^^M = 5 % in case we're inside an example
      % If the image is by itself, center it.
      \ifvmode
        \nobreak\bigskip
        % Usually we'll have text after the image which will insert
        % \parskip glue, so insert it here too to equalize the space
        % above and below. 
        \nobreak\vskip\parskip
        \nobreak
        \centerline{\epsfbox{#1.eps}}%
        \bigbreak
      \else
        % In the middle of a paragraph, no extra space.
        \epsfbox{#1.eps}%
      \fi
    \endgroup
  \else
    \centerline{\pdfimage{#1.pdf}}%
  \fi
}


\message{localization,}
% and i18n.

% @documentlanguage is usually given very early, just after
% @setfilename.  If done too late, it may not override everything
% properly.  Single argument is the language abbreviation.
% It would be nice if we could set up a hyphenation file here.
%
\def\documentlanguage{\parsearg\dodocumentlanguage}
\def\dodocumentlanguage#1{%
  \tex % read txi-??.tex file in plain TeX.
  % Read the file if it exists.
  \openin 1 txi-#1.tex
  \ifeof1
    \errhelp = \nolanghelp
    \errmessage{Cannot read language file txi-#1.tex}%
    \let\temp = \relax
  \else
    \def\temp{\input txi-#1.tex }%
  \fi
  \temp
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

% Parameters in order: 1) textheight; 2) textwidth; 3) voffset;
% 4) hoffset; 5) binding offset; 6) topskip.  Then whoever calls us can
% set \parskip and call \setleading for \baselineskip.
%
\def\internalpagesizes#1#2#3#4#5#6{%
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
  \parindent = \defaultparindent
  \setemergencystretch
}

% @letterpaper (the default).
\def\letterpaper{{\globaldefs = 1
  \parskip = 3pt plus 2pt minus 1pt
  \setleading{13.2pt}%
  %
  % If page is nothing but text, make it come out even.
  \internalpagesizes{46\baselineskip}{6in}{\voffset}{.25in}{\bindingoffset}{36pt}%
}}

% Use @smallbook to reset parameters for 7x9.5 (or so) format.
\def\smallbook{{\globaldefs = 1
  \parskip = 2pt plus 1pt
  \setleading{12pt}%
  %
  \internalpagesizes{7.5in}{5.in}{\voffset}{.25in}{\bindingoffset}{16pt}%
  %
  \lispnarrowing = 0.3in
  \tolerance = 700
  \hfuzz = 1pt
  \contentsrightmargin = 0pt
  \deftypemargin = 0pt
  \defbodyindent = .5cm
  %
  \let\smalldisplay = \smalldisplayx
  \let\smallexample = \smalllispx
  \let\smallformat = \smallformatx
  \let\smalllisp = \smalllispx
}}

% Use @afourpaper to print on European A4 paper.
\def\afourpaper{{\globaldefs = 1
  \setleading{12pt}%
  \parskip = 3pt plus 2pt minus 1pt
  %
  \internalpagesizes{53\baselineskip}{160mm}{\voffset}{4mm}{\bindingoffset}{44pt}%
  %
  \tolerance = 700
  \hfuzz = 1pt
}}

% A specific text layout, 24x15cm overall, intended for A4 paper.  Top margin
% 29mm, hence bottom margin 28mm, nominal side margin 3cm.
\def\afourlatex{{\globaldefs = 1
  \setleading{13.6pt}%
  %
  \afourpaper
  \internalpagesizes{237mm}{150mm}{3.6mm}{3.6mm}{3mm}{7mm}%
  %
  \globaldefs = 0
}}

% Use @afourwide to print on European A4 paper in wide format.
\def\afourwide{%
  \afourpaper
  \internalpagesizes{9.5in}{6.5in}{\hoffset}{\normaloffset}{\bindingoffset}{7mm}%
  %
  \globaldefs = 0
}

% @pagesizes TEXTHEIGHT[,TEXTWIDTH]
% Perhaps we should allow setting the margins, \topskip, \parskip,
% and/or leading, also. Or perhaps we should compute them somehow.
%
\def\pagesizes{\parsearg\pagesizesxxx}
\def\pagesizesxxx#1{\pagesizesyyy #1,,\finish}
\def\pagesizesyyy#1,#2,#3\finish{{%
  \setbox0 = \hbox{\ignorespaces #2}\ifdim\wd0 > 0pt \hsize=#2\relax \fi
  \globaldefs = 1
  %
  \parskip = 3pt plus 2pt minus 1pt
  \setleading{13.2pt}%
  %
  \internalpagesizes{#1}{\hsize}{\voffset}{\normaloffset}{\bindingoffset}{44pt}%
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
\def\normaldollar{$}

% This macro is used to make a character print one way in ttfont
% where it can probably just be output, and another way in other fonts,
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
% Subroutine for the previous macro.
\def\_{\leavevmode \kern.06em \vbox{\hrule width.3em height.1ex}}

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
\def${\ifusingit{{\sl\$}}\normaldollar}
%\catcode 27=\active
%\def^^[{$\diamondsuit$}

% Set up an active definition for =, but don't enable it most of the time.
{\catcode`\==\active
\global\def={{\tt \char 61}}}

\catcode`+=\active
\catcode`\_=\active

% If a .fmt file is being used, characters that might appear in a file
% name cannot be active until we have parsed the command line.
% So turn them off again, and have \everyjob (or @setfilename) turn them on.
% \otherifyactive is called near the end of this file.
\def\otherifyactive{\catcode`+=\other \catcode`\_=\other}

\catcode`\@=0

% \rawbackslashxx output one backslash character in current font
\global\chardef\rawbackslashxx=`\\
%{\catcode`\\=\other
%@gdef@rawbackslashxx{\}}

% \rawbackslash redefines \ as input to do \rawbackslashxx.
{\catcode`\\=\active
@gdef@rawbackslash{@let\=@rawbackslashxx }}

% \normalbackslash outputs one backslash in fixed width font.
\def\normalbackslash{{\tt\rawbackslashxx}}

% \catcode 17=0   % Define control-q
\catcode`\\=\active

% Used sometimes to turn off (effectively) the active characters
% even after parsing them.
@def@turnoffactive{@let"=@normaldoublequote
@let\=@realbackslash
@let~=@normaltilde
@let^=@normalcaret
@let_=@normalunderscore
@let|=@normalverticalbar
@let<=@normalless
@let>=@normalgreater
@let+=@normalplus
@let$=@normaldollar}

@def@normalturnoffactive{@let"=@normaldoublequote
@let\=@normalbackslash
@let~=@normaltilde
@let^=@normalcaret
@let_=@normalunderscore
@let|=@normalverticalbar
@let<=@normalless
@let>=@normalgreater
@let+=@normalplus
@let$=@normaldollar}

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
% the first `\{ in the file would cause an error. This macro tries to fix
% that, assuming it is called before the first `\' could plausibly occur.
% Also back turn on active characters that might appear in the input
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

@c Set initial fonts.
@textfonts
@rm


@c Local variables:
@c eval: (add-hook 'write-file-hooks 'time-stamp)
@c page-delimiter: "^\\\\message"
@c time-stamp-start: "def\\\\texinfoversion{"
@c time-stamp-format: "%:y-%02m-%02d.%02H"
@c time-stamp-end: "}"
@c End:
