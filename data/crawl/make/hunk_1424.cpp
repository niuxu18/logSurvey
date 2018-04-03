+%% TeX macros to handle texinfo files
+
+%  Copyright (C) 1985, 86, 88, 90, 91, 92, 93,
+%                94, 95, 1996 Free Software Foundation, Inc.
+
+%This texinfo.tex file is free software; you can redistribute it and/or
+%modify it under the terms of the GNU General Public License as
+%published by the Free Software Foundation; either version 2, or (at
+%your option) any later version.
+
+%This texinfo.tex file is distributed in the hope that it will be
+%useful, but WITHOUT ANY WARRANTY; without even the implied warranty
+%of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
+%General Public License for more details.
+
+%You should have received a copy of the GNU General Public License
+%along with this texinfo.tex file; see the file COPYING.  If not, write
+%to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
+%Boston, MA 02111-1307, USA.
+
+
+%In other words, you are welcome to use, share and improve this program.
+%You are forbidden to forbid anyone else to use, share and improve
+%what you give them.   Help stamp out software-hoarding!
+
+
+% Send bug reports to bug-texinfo@prep.ai.mit.edu.
+% Please include a *precise* test case in each bug report.
+
+
+% Make it possible to create a .fmt file just by loading this file:
+% if the underlying format is not loaded, start by loading it now.
+% Added by gildea November 1993.
+\expandafter\ifx\csname fmtname\endcsname\relax\input plain\fi
+
+% This automatically updates the version number based on RCS.
+\def\deftexinfoversion$#1: #2 ${\def\texinfoversion{#2}}
+\deftexinfoversion$Revision$
+\message{Loading texinfo package [Version \texinfoversion]:}
+
+% If in a .fmt file, print the version number
+% and turn on active characters that we couldn't do earlier because
+% they might have appeared in the input file name.
+\everyjob{\message{[Texinfo version \texinfoversion]}\message{}
+  \catcode`+=\active \catcode`\_=\active}
+
+% Save some parts of plain tex whose names we will redefine.
+
+\let\ptextilde=\~
+\let\ptexlbrace=\{
+\let\ptexrbrace=\}
+\let\ptexdots=\dots
+\let\ptexdot=\.
+\let\ptexstar=\*
+\let\ptexend=\end
+\let\ptexbullet=\bullet
+\let\ptexb=\b
+\let\ptexc=\c
+\let\ptexi=\i
+\let\ptext=\t
+\let\ptexl=\l
+\let\ptexL=\L
+
+% Be sure we're in horizontal mode when doing a tie, since we make space
+% equivalent to this in @example-like environments. Otherwise, a space
+% at the beginning of a line will start with \penalty -- and
+% since \penalty is valid in vertical mode, we'd end up putting the
+% penalty on the vertical list instead of in the new paragraph.
+{\catcode`@ = 11
+ % Avoid using \@M directly, because that causes trouble
+ % if the definition is written into an index file.
+ \global\let\tiepenalty = \@M
+ \gdef\tie{\leavevmode\penalty\tiepenalty\ }
+}
+\let\~ = \tie                  % And make it available as @~.
+
+\message{Basics,}
+\chardef\other=12
+
+% If this character appears in an error message or help string, it
+% starts a new line in the output.
+\newlinechar = `^^J
+
+% Set up fixed words for English.
+\ifx\putwordChapter\undefined{\gdef\putwordChapter{Chapter}}\fi%
+\def\putwordInfo{Info}%
+\ifx\putwordSee\undefined{\gdef\putwordSee{See}}\fi%
+\ifx\putwordsee\undefined{\gdef\putwordsee{see}}\fi%
+\ifx\putwordfile\undefined{\gdef\putwordfile{file}}\fi%
+\ifx\putwordpage\undefined{\gdef\putwordpage{page}}\fi%
+\ifx\putwordsection\undefined{\gdef\putwordsection{section}}\fi%
+\ifx\putwordSection\undefined{\gdef\putwordSection{Section}}\fi%
+\ifx\putwordTableofContents\undefined{\gdef\putwordTableofContents{Table of Contents}}\fi%
+\ifx\putwordShortContents\undefined{\gdef\putwordShortContents{Short Contents}}\fi%
+\ifx\putwordAppendix\undefined{\gdef\putwordAppendix{Appendix}}\fi%
+
+% Ignore a token.
+%
+\def\gobble#1{}
+
+\hyphenation{ap-pen-dix}
+\hyphenation{mini-buf-fer mini-buf-fers}
+\hyphenation{eshell}
+
+% Margin to add to right of even pages, to left of odd pages.
+\newdimen \bindingoffset  \bindingoffset=0pt
+\newdimen \normaloffset   \normaloffset=\hoffset
+\newdimen\pagewidth \newdimen\pageheight
+\pagewidth=\hsize \pageheight=\vsize
+
+% Sometimes it is convenient to have everything in the transcript file
+% and nothing on the terminal.  We don't just call \tracingall here,
+% since that produces some useless output on the terminal.
+%
+\def\gloggingall{\begingroup \globaldefs = 1 \loggingall \endgroup}%
+\def\loggingall{\tracingcommands2 \tracingstats2
+   \tracingpages1 \tracingoutput1 \tracinglostchars1
+   \tracingmacros2 \tracingparagraphs1 \tracingrestores1
+   \showboxbreadth\maxdimen\showboxdepth\maxdimen
+}%
+
+%---------------------Begin change-----------------------
+%
+%%%% For @cropmarks command.
+% Dimensions to add cropmarks at corners Added by P. A. MacKay, 12 Nov. 1986
+%
+\newdimen\cornerlong \newdimen\cornerthick
+\newdimen \topandbottommargin
+\newdimen \outerhsize \newdimen \outervsize
+\cornerlong=1pc\cornerthick=.3pt	% These set size of cropmarks
+\outerhsize=7in
+%\outervsize=9.5in
+% Alternative @smallbook page size is 9.25in
+\outervsize=9.25in
+\topandbottommargin=.75in
+%
+%---------------------End change-----------------------
+
+% \onepageout takes a vbox as an argument.  Note that \pagecontents
+% does insertions itself, but you have to call it yourself.
+\chardef\PAGE=255  \output={\onepageout{\pagecontents\PAGE}}
+\def\onepageout#1{\hoffset=\normaloffset
+\ifodd\pageno  \advance\hoffset by \bindingoffset
+\else \advance\hoffset by -\bindingoffset\fi
+{\escapechar=`\\\relax % makes sure backslash is used in output files.
+\shipout\vbox{{\let\hsize=\pagewidth \makeheadline} \pagebody{#1}%
+{\let\hsize=\pagewidth \makefootline}}}%
+\advancepageno \ifnum\outputpenalty>-20000 \else\dosupereject\fi}
+
+%%%% For @cropmarks command %%%%
+
+% Here is a modification of the main output routine for Near East Publications
+% This provides right-angle cropmarks at all four corners.
+% The contents of the page are centerlined into the cropmarks,
+% and any desired binding offset is added as an \hskip on either
+% site of the centerlined box.  (P. A. MacKay, 12 November, 1986)
+%
+\def\croppageout#1{\hoffset=0pt % make sure this doesn't mess things up
+{\escapechar=`\\\relax % makes sure backslash is used in output files.
+		 \shipout
+		 \vbox to \outervsize{\hsize=\outerhsize
+                 \vbox{\line{\ewtop\hfill\ewtop}}
+                 \nointerlineskip
+                 \line{\vbox{\moveleft\cornerthick\nstop}
+                       \hfill
+                       \vbox{\moveright\cornerthick\nstop}}
+                 \vskip \topandbottommargin
+                 \centerline{\ifodd\pageno\hskip\bindingoffset\fi
+			\vbox{
+			{\let\hsize=\pagewidth \makeheadline}
+			\pagebody{#1}
+			{\let\hsize=\pagewidth \makefootline}}
+			\ifodd\pageno\else\hskip\bindingoffset\fi}
+		 \vskip \topandbottommargin plus1fill minus1fill
+                 \boxmaxdepth\cornerthick
+                 \line{\vbox{\moveleft\cornerthick\nsbot}
+                       \hfill
+                       \vbox{\moveright\cornerthick\nsbot}}
+                 \nointerlineskip
+                 \vbox{\line{\ewbot\hfill\ewbot}}
+	}}
+  \advancepageno
+  \ifnum\outputpenalty>-20000 \else\dosupereject\fi}
+%
+% Do @cropmarks to get crop marks
+\def\cropmarks{\let\onepageout=\croppageout }
+
+\newinsert\margin \dimen\margin=\maxdimen
+
+\def\pagebody#1{\vbox to\pageheight{\boxmaxdepth=\maxdepth #1}}
+{\catcode`\@ =11
+\gdef\pagecontents#1{\ifvoid\topins\else\unvbox\topins\fi
+% marginal hacks, juha@viisa.uucp (Juha Takala)
+\ifvoid\margin\else % marginal info is present
+  \rlap{\kern\hsize\vbox to\z@{\kern1pt\box\margin \vss}}\fi
+\dimen@=\dp#1 \unvbox#1
+\ifvoid\footins\else\vskip\skip\footins\footnoterule \unvbox\footins\fi
+\ifr@ggedbottom \kern-\dimen@ \vfil \fi}
+}
+
+%
+% Here are the rules for the cropmarks.  Note that they are
+% offset so that the space between them is truly \outerhsize or \outervsize
+% (P. A. MacKay, 12 November, 1986)
+%
+\def\ewtop{\vrule height\cornerthick depth0pt width\cornerlong}
+\def\nstop{\vbox
+  {\hrule height\cornerthick depth\cornerlong width\cornerthick}}
+\def\ewbot{\vrule height0pt depth\cornerthick width\cornerlong}
+\def\nsbot{\vbox
+  {\hrule height\cornerlong depth\cornerthick width\cornerthick}}
+
+% Parse an argument, then pass it to #1.  The argument is the rest of
+% the input line (except we remove a trailing comment).  #1 should be a
+% macro which expects an ordinary undelimited TeX argument.
+%
+\def\parsearg#1{%
+  \let\next = #1%
+  \begingroup
+    \obeylines
+    \futurelet\temp\parseargx
+}
+
+% If the next token is an obeyed space (from an @example environment or
+% the like), remove it and recurse.  Otherwise, we're done.
+\def\parseargx{%
+  % \obeyedspace is defined far below, after the definition of \sepspaces.
+  \ifx\obeyedspace\temp
+    \expandafter\parseargdiscardspace
+  \else
+    \expandafter\parseargline
+  \fi
+}
+
+% Remove a single space (as the delimiter token to the macro call).
+{\obeyspaces %
+ \gdef\parseargdiscardspace {\futurelet\temp\parseargx}}
+
+{\obeylines %
+  \gdef\parseargline#1^^M{%
+    \endgroup % End of the group started in \parsearg.
+    %
+    % First remove any @c comment, then any @comment.
+    % Result of each macro is put in \toks0.
+    \argremovec #1\c\relax %
+    \expandafter\argremovecomment \the\toks0 \comment\relax %
+    %
+    % Call the caller's macro, saved as \next in \parsearg.
+    \expandafter\next\expandafter{\the\toks0}%
+  }%
+}
+
+% Since all \c{,omment} does is throw away the argument, we can let TeX
+% do that for us.  The \relax here is matched by the \relax in the call
+% in \parseargline; it could be more or less anything, its purpose is
+% just to delimit the argument to the \c.
+\def\argremovec#1\c#2\relax{\toks0 = {#1}}
+\def\argremovecomment#1\comment#2\relax{\toks0 = {#1}}
+
+% \argremovec{,omment} might leave us with trailing spaces, though; e.g.,
+%    @end itemize  @c foo
+% will have two active spaces as part of the argument with the
+% `itemize'.  Here we remove all active spaces from #1, and assign the
+% result to \toks0.
+%
+% This loses if there are any *other* active characters besides spaces
+% in the argument -- _ ^ +, for example -- since they get expanded.
+% Fortunately, Texinfo does not define any such commands.  (If it ever
+% does, the catcode of the characters in questionwill have to be changed
+% here.)  But this means we cannot call \removeactivespaces as part of
+% \argremovec{,omment}, since @c uses \parsearg, and thus the argument
+% that \parsearg gets might well have any character at all in it.
+%
+\def\removeactivespaces#1{%
+  \begingroup
+    \ignoreactivespaces
+    \edef\temp{#1}%
+    \global\toks0 = \expandafter{\temp}%
+  \endgroup
+}
+
+% Change the active space to expand to nothing.
+%
+\begingroup
+  \obeyspaces
+  \gdef\ignoreactivespaces{\obeyspaces\let =\empty}
+\endgroup
+
+
+\def\flushcr{\ifx\par\lisppar \def\next##1{}\else \let\next=\relax \fi \next}
+
+%% These are used to keep @begin/@end levels from running away
+%% Call \inENV within environments (after a \begingroup)
+\newif\ifENV \ENVfalse \def\inENV{\ifENV\relax\else\ENVtrue\fi}
+\def\ENVcheck{%
+\ifENV\errmessage{Still within an environment.  Type Return to continue.}
+\endgroup\fi} % This is not perfect, but it should reduce lossage
+
+% @begin foo  is the same as @foo, for now.
+\newhelp\EMsimple{Type <Return> to continue.}
+
+\outer\def\begin{\parsearg\beginxxx}
+
+\def\beginxxx #1{%
+\expandafter\ifx\csname #1\endcsname\relax
+{\errhelp=\EMsimple \errmessage{Undefined command @begin #1}}\else
+\csname #1\endcsname\fi}
+
+% @end foo executes the definition of \Efoo.
+%
+\def\end{\parsearg\endxxx}
+\def\endxxx #1{%
+  \removeactivespaces{#1}%
+  \edef\endthing{\the\toks0}%
+  %
+  \expandafter\ifx\csname E\endthing\endcsname\relax
+    \expandafter\ifx\csname \endthing\endcsname\relax
+      % There's no \foo, i.e., no ``environment'' foo.
+      \errhelp = \EMsimple
+      \errmessage{Undefined command `@end \endthing'}%
+    \else
+      \unmatchedenderror\endthing
+    \fi
+  \else
+    % Everything's ok; the right environment has been started.
+    \csname E\endthing\endcsname
+  \fi
+}
+
+% There is an environment #1, but it hasn't been started.  Give an error.
+%
+\def\unmatchedenderror#1{%
+  \errhelp = \EMsimple
+  \errmessage{This `@end #1' doesn't have a matching `@#1'}%
+}
+
+% Define the control sequence \E#1 to give an unmatched @end error.
+%
+\def\defineunmatchedend#1{%
+  \expandafter\def\csname E#1\endcsname{\unmatchedenderror{#1}}%
+}
+
+
+% Single-spacing is done by various environments (specifically, in
+% \nonfillstart and \quotations).
+\newskip\singlespaceskip \singlespaceskip = 12.5pt
+\def\singlespace{%
+  % Why was this kern here?  It messes up equalizing space above and below
+  % environments.  --karl, 6may93
+  %{\advance \baselineskip by -\singlespaceskip
+  %\kern \baselineskip}%
+  \setleading \singlespaceskip
+}
+
+%% Simple single-character @ commands
+
+% @@ prints an @
+% Kludge this until the fonts are right (grr).
+\def\@{{\tt \char '100}}
+
+% This is turned off because it was never documented
+% and you can use @w{...} around a quote to suppress ligatures.
+%% Define @` and @' to be the same as ` and '
+%% but suppressing ligatures.
+%\def\`{{`}}
+%\def\'{{'}}
+
+% Used to generate quoted braces.
+
+\def\mylbrace {{\tt \char '173}}
+\def\myrbrace {{\tt \char '175}}
+\let\{=\mylbrace
+\let\}=\myrbrace
+
+% @: forces normal size whitespace following.
+\def\:{\spacefactor=1000 }
+
+% @* forces a line break.
+\def\*{\hfil\break\hbox{}\ignorespaces}
+
+% @. is an end-of-sentence period.
+\def\.{.\spacefactor=3000 }
+
+% @enddots{} is an end-of-sentence ellipsis.
+\gdef\enddots{$\mathinner{\ldotp\ldotp\ldotp\ldotp}$\spacefactor=3000}
+
+% @! is an end-of-sentence bang.
+\gdef\!{!\spacefactor=3000 }
+
+% @? is an end-of-sentence query.
+\gdef\?{?\spacefactor=3000 }
+
+% @w prevents a word break.  Without the \leavevmode, @w at the
+% beginning of a paragraph, when TeX is still in vertical mode, would
+% produce a whole line of output instead of starting the paragraph.
+\def\w#1{\leavevmode\hbox{#1}}
+
+% @group ... @end group forces ... to be all on one page, by enclosing
+% it in a TeX vbox.  We use \vtop instead of \vbox to construct the box
+% to keep its height that of a normal line.  According to the rules for
+% \topskip (p.114 of the TeXbook), the glue inserted is
+% max (\topskip - \ht (first item), 0).  If that height is large,
+% therefore, no glue is inserted, and the space between the headline and
+% the text is small, which looks bad.
+%
+\def\group{\begingroup
+  \ifnum\catcode13=\active \else
+    \errhelp = \groupinvalidhelp
+    \errmessage{@group invalid in context where filling is enabled}%
+  \fi
+  %
+  % The \vtop we start below produces a box with normal height and large
+  % depth; thus, TeX puts \baselineskip glue before it, and (when the
+  % next line of text is done) \lineskip glue after it.  (See p.82 of
+  % the TeXbook.)  Thus, space below is not quite equal to space
+  % above.  But it's pretty close.
+  \def\Egroup{%
+    \egroup           % End the \vtop.
+    \endgroup         % End the \group.
+  }%
+  %
+  \vtop\bgroup
+    % We have to put a strut on the last line in case the @group is in
+    % the midst of an example, rather than completely enclosing it.
+    % Otherwise, the interline space between the last line of the group
+    % and the first line afterwards is too small.  But we can't put the
+    % strut in \Egroup, since there it would be on a line by itself.
+    % Hence this just inserts a strut at the beginning of each line.
+    \everypar = {\strut}%
+    %
+    % Since we have a strut on every line, we don't need any of TeX's
+    % normal interline spacing.
+    \offinterlineskip
+    %
+    % OK, but now we have to do something about blank
+    % lines in the input in @example-like environments, which normally
+    % just turn into \lisppar, which will insert no space now that we've
+    % turned off the interline space.  Simplest is to make them be an
+    % empty paragraph.
+    \ifx\par\lisppar
+      \edef\par{\leavevmode \par}%
+      %
+      % Reset ^^M's definition to new definition of \par.
+      \obeylines
+    \fi
+    %
+    % Do @comment since we are called inside an environment such as
+    % @example, where each end-of-line in the input causes an
+    % end-of-line in the output.  We don't want the end-of-line after
+    % the `@group' to put extra space in the output.  Since @group
+    % should appear on a line by itself (according to the Texinfo
+    % manual), we don't worry about eating any user text.
+    \comment
+}
+%
+% TeX puts in an \escapechar (i.e., `@') at the beginning of the help
+% message, so this ends up printing `@group can only ...'.
+%
+\newhelp\groupinvalidhelp{%
+group can only be used in environments such as @example,^^J%
+where each line of input produces a line of output.}
+
+% @need space-in-mils
+% forces a page break if there is not space-in-mils remaining.
+
+\newdimen\mil  \mil=0.001in
+
+\def\need{\parsearg\needx}
+
+% Old definition--didn't work.
+%\def\needx #1{\par %
+%% This method tries to make TeX break the page naturally
+%% if the depth of the box does not fit.
+%{\baselineskip=0pt%
+%\vtop to #1\mil{\vfil}\kern -#1\mil\penalty 10000
+%\prevdepth=-1000pt
+%}}
+
+\def\needx#1{%
+  % Go into vertical mode, so we don't make a big box in the middle of a
+  % paragraph.
+  \par
+  %
+  % Don't add any leading before our big empty box, but allow a page
+  % break, since the best break might be right here.
+  \allowbreak
+  \nointerlineskip
+  \vtop to #1\mil{\vfil}%
+  %
+  % TeX does not even consider page breaks if a penalty added to the
+  % main vertical list is 10000 or more.  But in order to see if the
+  % empty box we just added fits on the page, we must make it consider
+  % page breaks.  On the other hand, we don't want to actually break the
+  % page after the empty box.  So we use a penalty of 9999.
+  %
+  % There is an extremely small chance that TeX will actually break the
+  % page at this \penalty, if there are no other feasible breakpoints in
+  % sight.  (If the user is using lots of big @group commands, which
+  % almost-but-not-quite fill up a page, TeX will have a hard time doing
+  % good page breaking, for example.)  However, I could not construct an
+  % example where a page broke at this \penalty; if it happens in a real
+  % document, then we can reconsider our strategy.
+  \penalty9999
+  %
+  % Back up by the size of the box, whether we did a page break or not.
+  \kern -#1\mil
+  %
+  % Do not allow a page break right after this kern.
+  \nobreak
+}
+
+% @br   forces paragraph break
+
+\let\br = \par
+
+% @dots{}  output some dots
+
+\def\dots{$\ldots$}
+
+% @page    forces the start of a new page
+
+\def\page{\par\vfill\supereject}
+
+% @exdent text....
+% outputs text on separate line in roman font, starting at standard page margin
+
+% This records the amount of indent in the innermost environment.
+% That's how much \exdent should take out.
+\newskip\exdentamount
+
+% This defn is used inside fill environments such as @defun.
+\def\exdent{\parsearg\exdentyyy}
+\def\exdentyyy #1{{\hfil\break\hbox{\kern -\exdentamount{\rm#1}}\hfil\break}}
+
+% This defn is used inside nofill environments such as @example.
+\def\nofillexdent{\parsearg\nofillexdentyyy}
+\def\nofillexdentyyy #1{{\advance \leftskip by -\exdentamount
+\leftline{\hskip\leftskip{\rm#1}}}}
+
+% @inmargin{TEXT} puts TEXT in the margin next to the current paragraph.
+
+\def\inmargin#1{%
+\strut\vadjust{\nobreak\kern-\strutdepth
+  \vtop to \strutdepth{\baselineskip\strutdepth\vss
+  \llap{\rightskip=\inmarginspacing \vbox{\noindent #1}}\null}}}
+\newskip\inmarginspacing \inmarginspacing=1cm
+\def\strutdepth{\dp\strutbox}
+
+%\hbox{{\rm#1}}\hfil\break}}
+
+% @include file    insert text of that file as input.
+% Allow normal characters that  we make active in the argument (a file name).
+\def\include{\begingroup
+  \catcode`\\=12
+  \catcode`~=12
+  \catcode`^=12
+  \catcode`_=12
+  \catcode`|=12
+  \catcode`<=12
+  \catcode`>=12
+  \catcode`+=12
+  \parsearg\includezzz}
+% Restore active chars for included file.
+\def\includezzz#1{\endgroup\begingroup
+  % Read the included file in a group so nested @include's work.
+  \def\thisfile{#1}%
+  \input\thisfile
+\endgroup}
+
+\def\thisfile{}
+
+% @center line   outputs that line, centered
+
+\def\center{\parsearg\centerzzz}
+\def\centerzzz #1{{\advance\hsize by -\leftskip
+\advance\hsize by -\rightskip
+\centerline{#1}}}
+
+% @sp n   outputs n lines of vertical space
+
+\def\sp{\parsearg\spxxx}
+\def\spxxx #1{\par \vskip #1\baselineskip}
+
+% @comment ...line which is ignored...
+% @c is the same as @comment
+% @ignore ... @end ignore  is another way to write a comment
+
+\def\comment{\catcode 64=\other \catcode 123=\other \catcode 125=\other%
+\parsearg \commentxxx}
+
+\def\commentxxx #1{\catcode 64=0 \catcode 123=1 \catcode 125=2 }
+
+\let\c=\comment
+
+% Prevent errors for section commands.
+% Used in @ignore and in failing conditionals.
+\def\ignoresections{%
+\let\chapter=\relax
+\let\unnumbered=\relax
+\let\top=\relax
+\let\unnumberedsec=\relax
+\let\unnumberedsection=\relax
+\let\unnumberedsubsec=\relax
+\let\unnumberedsubsection=\relax
+\let\unnumberedsubsubsec=\relax
+\let\unnumberedsubsubsection=\relax
+\let\section=\relax
+\let\subsec=\relax
+\let\subsubsec=\relax
+\let\subsection=\relax
+\let\subsubsection=\relax
+\let\appendix=\relax
+\let\appendixsec=\relax
+\let\appendixsection=\relax
+\let\appendixsubsec=\relax
+\let\appendixsubsection=\relax
+\let\appendixsubsubsec=\relax
+\let\appendixsubsubsection=\relax
+\let\contents=\relax
+\let\smallbook=\relax
+\let\titlepage=\relax
+}
+
+% Used in nested conditionals, where we have to parse the Texinfo source
+% and so want to turn off most commands, in case they are used
+% incorrectly.
+%
+\def\ignoremorecommands{%
+  \let\defcodeindex = \relax
+  \let\defcv = \relax
+  \let\deffn = \relax
+  \let\deffnx = \relax
+  \let\defindex = \relax
+  \let\defivar = \relax
+  \let\defmac = \relax
+  \let\defmethod = \relax
+  \let\defop = \relax
+  \let\defopt = \relax
+  \let\defspec = \relax
+  \let\deftp = \relax
+  \let\deftypefn = \relax
+  \let\deftypefun = \relax
+  \let\deftypevar = \relax
+  \let\deftypevr = \relax
+  \let\defun = \relax
+  \let\defvar = \relax
+  \let\defvr = \relax
+  \let\ref = \relax
+  \let\xref = \relax
+  \let\printindex = \relax
+  \let\pxref = \relax
+  \let\settitle = \relax
+  \let\setchapternewpage = \relax
+  \let\setchapterstyle = \relax
+  \let\everyheading = \relax
+  \let\evenheading = \relax
+  \let\oddheading = \relax
+  \let\everyfooting = \relax
+  \let\evenfooting = \relax
+  \let\oddfooting = \relax
+  \let\headings = \relax
+  \let\include = \relax
+  \let\lowersections = \relax
+  \let\down = \relax
+  \let\raisesections = \relax
+  \let\up = \relax
+  \let\set = \relax
+  \let\clear = \relax
+  \let\item = \relax
+}
+
+% Ignore @ignore ... @end ignore.
+%
+\def\ignore{\doignore{ignore}}
+
+% Also ignore @ifinfo, @ifhtml, @html, @menu, and @direntry text.
+%
+\def\ifinfo{\doignore{ifinfo}}
+\def\ifhtml{\doignore{ifhtml}}
+\def\html{\doignore{html}}
+\def\menu{\doignore{menu}}
+\def\direntry{\doignore{direntry}}
+
+% @dircategory CATEGORY  -- specify a category of the dir file
+% which this file should belong to.  Ignore this in TeX.
+
+\def\dircategory{\comment}
+
+% Ignore text until a line `@end #1'.
+%
+\def\doignore#1{\begingroup
+  % Don't complain about control sequences we have declared \outer.
+  \ignoresections
+  %
+  % Define a command to swallow text until we reach `@end #1'.
+  \long\def\doignoretext##1\end #1{\enddoignore}%
+  %
+  % Make sure that spaces turn into tokens that match what \doignoretext wants.
+  \catcode32 = 10
+  %
+  % And now expand that command.
+  \doignoretext
+}
+
+% What we do to finish off ignored text.
+%
+\def\enddoignore{\endgroup\ignorespaces}%
+
+\newif\ifwarnedobs\warnedobsfalse
+\def\obstexwarn{%
+  \ifwarnedobs\relax\else
+  % We need to warn folks that they may have trouble with TeX 3.0.
+  % This uses \immediate\write16 rather than \message to get newlines.
+    \immediate\write16{}
+    \immediate\write16{***WARNING*** for users of Unix TeX 3.0!}
+    \immediate\write16{This manual trips a bug in TeX version 3.0 (tex hangs).}
+    \immediate\write16{If you are running another version of TeX, relax.}
+    \immediate\write16{If you are running Unix TeX 3.0, kill this TeX process.}
+    \immediate\write16{  Then upgrade your TeX installation if you can.}
+    \immediate\write16{If you are stuck with version 3.0, run the}
+    \immediate\write16{  script ``tex3patch'' from the Texinfo distribution}
+    \immediate\write16{  to use a workaround.}
+    \immediate\write16{}
+    \global\warnedobstrue
+    \fi
+}
+
+% **In TeX 3.0, setting text in \nullfont hangs tex.  For a
+% workaround (which requires the file ``dummy.tfm'' to be installed),
+% uncomment the following line:
+%%%%%\font\nullfont=dummy\let\obstexwarn=\relax
+
+% Ignore text, except that we keep track of conditional commands for
+% purposes of nesting, up to an `@end #1' command.
+%
+\def\nestedignore#1{%
+  \obstexwarn
+  % We must actually expand the ignored text to look for the @end
+  % command, so that nested ignore constructs work.  Thus, we put the
+  % text into a \vbox and then do nothing with the result.  To minimize
+  % the change of memory overflow, we follow the approach outlined on
+  % page 401 of the TeXbook: make the current font be a dummy font.
+  %
+  \setbox0 = \vbox\bgroup
+    % Don't complain about control sequences we have declared \outer.
+    \ignoresections
+    %
+    % Define `@end #1' to end the box, which will in turn undefine the
+    % @end command again.
+    \expandafter\def\csname E#1\endcsname{\egroup\ignorespaces}%
+    %
+    % We are going to be parsing Texinfo commands.  Most cause no
+    % trouble when they are used incorrectly, but some commands do
+    % complicated argument parsing or otherwise get confused, so we
+    % undefine them.
+    %
+    % We can't do anything about stray @-signs, unfortunately;
+    % they'll produce `undefined control sequence' errors.
+    \ignoremorecommands
+    %
+    % Set the current font to be \nullfont, a TeX primitive, and define
+    % all the font commands to also use \nullfont.  We don't use
+    % dummy.tfm, as suggested in the TeXbook, because not all sites
+    % might have that installed.  Therefore, math mode will still
+    % produce output, but that should be an extremely small amount of
+    % stuff compared to the main input.
+    %
+    \nullfont
+    \let\tenrm = \nullfont  \let\tenit = \nullfont  \let\tensl = \nullfont
+    \let\tenbf = \nullfont  \let\tentt = \nullfont  \let\smallcaps = \nullfont
+    \let\tensf = \nullfont
+    % Similarly for index fonts (mostly for their use in
+    % smallexample)
+    \let\indrm = \nullfont  \let\indit = \nullfont  \let\indsl = \nullfont
+    \let\indbf = \nullfont  \let\indtt = \nullfont  \let\indsc = \nullfont
+    \let\indsf = \nullfont
+    %
+    % Don't complain when characters are missing from the fonts.
+    \tracinglostchars = 0
+    %
+    % Don't bother to do space factor calculations.
+    \frenchspacing
+    %
+    % Don't report underfull hboxes.
+    \hbadness = 10000
+    %
+    % Do minimal line-breaking.
+    \pretolerance = 10000
+    %
+    % Do not execute instructions in @tex
+    \def\tex{\doignore{tex}}
+}
+
+% @set VAR sets the variable VAR to an empty value.
+% @set VAR REST-OF-LINE sets VAR to the value REST-OF-LINE.
+%
+% Since we want to separate VAR from REST-OF-LINE (which might be
+% empty), we can't just use \parsearg; we have to insert a space of our
+% own to delimit the rest of the line, and then take it out again if we
+% didn't need it.  Make sure the catcode of space is correct to avoid
+% losing inside @example, for instance.
+%
+\def\set{\begingroup\catcode` =10 \parsearg\setxxx}
+\def\setxxx#1{\setyyy#1 \endsetyyy}
+\def\setyyy#1 #2\endsetyyy{%
+  \def\temp{#2}%
+  \ifx\temp\empty \global\expandafter\let\csname SET#1\endcsname = \empty
+  \else \setzzz{#1}#2\endsetzzz % Remove the trailing space \setxxx inserted.
+  \fi
+  \endgroup
+}
+% Can't use \xdef to pre-expand #2 and save some time, since \temp or
+% \next or other control sequences that we've defined might get us into
+% an infinite loop. Consider `@set foo @cite{bar}'.
+\def\setzzz#1#2 \endsetzzz{\expandafter\gdef\csname SET#1\endcsname{#2}}
+
+% @clear VAR clears (i.e., unsets) the variable VAR.
+%
+\def\clear{\parsearg\clearxxx}
+\def\clearxxx#1{\global\expandafter\let\csname SET#1\endcsname=\relax}
+
+% @value{foo} gets the text saved in variable foo.
+%
+\def\value#1{\expandafter
+		\ifx\csname SET#1\endcsname\relax
+			{\{No value for ``#1''\}}
+		\else \csname SET#1\endcsname \fi}
+
+% @ifset VAR ... @end ifset reads the `...' iff VAR has been defined
+% with @set.
+%
+\def\ifset{\parsearg\ifsetxxx}
+\def\ifsetxxx #1{%
+  \expandafter\ifx\csname SET#1\endcsname\relax
+    \expandafter\ifsetfail
+  \else
+    \expandafter\ifsetsucceed
+  \fi
+}
+\def\ifsetsucceed{\conditionalsucceed{ifset}}
+\def\ifsetfail{\nestedignore{ifset}}
+\defineunmatchedend{ifset}
+
+% @ifclear VAR ... @end ifclear reads the `...' iff VAR has never been
+% defined with @set, or has been undefined with @clear.
+%
+\def\ifclear{\parsearg\ifclearxxx}
+\def\ifclearxxx #1{%
+  \expandafter\ifx\csname SET#1\endcsname\relax
+    \expandafter\ifclearsucceed
+  \else
+    \expandafter\ifclearfail
+  \fi
+}
+\def\ifclearsucceed{\conditionalsucceed{ifclear}}
+\def\ifclearfail{\nestedignore{ifclear}}
+\defineunmatchedend{ifclear}
+
+% @iftex always succeeds; we read the text following, through @end
+% iftex).  But `@end iftex' should be valid only after an @iftex.
+%
+\def\iftex{\conditionalsucceed{iftex}}
+\defineunmatchedend{iftex}
+
+% We can't just want to start a group at @iftex (for example) and end it
+% at @end iftex, since then @set commands inside the conditional have no
+% effect (they'd get reverted at the end of the group).  So we must
+% define \Eiftex to redefine itself to be its previous value.  (We can't
+% just define it to fail again with an ``unmatched end'' error, since
+% the @ifset might be nested.)
+%
+\def\conditionalsucceed#1{%
+  \edef\temp{%
+    % Remember the current value of \E#1.
+    \let\nece{prevE#1} = \nece{E#1}%
+    %
+    % At the `@end #1', redefine \E#1 to be its previous value.
+    \def\nece{E#1}{\let\nece{E#1} = \nece{prevE#1}}%
+  }%
+  \temp
+}
+
+% We need to expand lots of \csname's, but we don't want to expand the
+% control sequences after we've constructed them.
+%
+\def\nece#1{\expandafter\noexpand\csname#1\endcsname}
+
+% @asis just yields its argument.  Used with @table, for example.
+%
+\def\asis#1{#1}
+
+% @math means output in math mode.
+% We don't use $'s directly in the definition of \math because control
+% sequences like \math are expanded when the toc file is written.  Then,
+% we read the toc file back, the $'s will be normal characters (as they
+% should be, according to the definition of Texinfo).  So we must use a
+% control sequence to switch into and out of math mode.
+%
+% This isn't quite enough for @math to work properly in indices, but it
+% seems unlikely it will ever be needed there.
+%
+\let\implicitmath = $
+\def\math#1{\implicitmath #1\implicitmath}
+
+% @bullet and @minus need the same treatment as @math, just above.
+\def\bullet{\implicitmath\ptexbullet\implicitmath}
+\def\minus{\implicitmath-\implicitmath}
+
+\def\node{\ENVcheck\parsearg\nodezzz}
+\def\nodezzz#1{\nodexxx [#1,]}
+\def\nodexxx[#1,#2]{\gdef\lastnode{#1}}
+\let\nwnode=\node
+\let\lastnode=\relax
+
+\def\donoderef{\ifx\lastnode\relax\else
+\expandafter\expandafter\expandafter\setref{\lastnode}\fi
+\global\let\lastnode=\relax}
+
+\def\unnumbnoderef{\ifx\lastnode\relax\else
+\expandafter\expandafter\expandafter\unnumbsetref{\lastnode}\fi
+\global\let\lastnode=\relax}
+
+\def\appendixnoderef{\ifx\lastnode\relax\else
+\expandafter\expandafter\expandafter\appendixsetref{\lastnode}\fi
+\global\let\lastnode=\relax}
+
+\let\refill=\relax
+
+% @setfilename is done at the beginning of every texinfo file.
+% So open here the files we need to have open while reading the input.
+% This makes it possible to make a .fmt file for texinfo.
+\def\setfilename{%
+   \readauxfile
+   \opencontents
+   \openindices
+   \fixbackslash  % Turn off hack to swallow `\input texinfo'.
+   \global\let\setfilename=\comment % Ignore extra @setfilename cmds.
+   \comment % Ignore the actual filename.
+}
+
+\outer\def\bye{\pagealignmacro\tracingstats=1\ptexend}
+
+\def\inforef #1{\inforefzzz #1,,,,**}
+\def\inforefzzz #1,#2,#3,#4**{\putwordSee{} \putwordInfo{} \putwordfile{} \file{\ignorespaces #3{}},
+  node \samp{\ignorespaces#1{}}}
+
+\def\macro#1{\begingroup\ignoresections\catcode`\#=6\def\macrotemp{#1}\parsearg\macroxxx}
+\def\macroxxx#1#2 \end macro{%
+\expandafter\gdef\macrotemp#1{#2}%
+\endgroup}
+
+%\def\linemacro#1{\begingroup\ignoresections\catcode`\#=6\def\macrotemp{#1}\parsearg\linemacroxxx}
+%\def\linemacroxxx#1#2 \end linemacro{%
+%\let\parsearg=\relax
+%\edef\macrotempx{\csname M\butfirst\expandafter\string\macrotemp\endcsname}%
+%\expandafter\xdef\macrotemp{\parsearg\macrotempx}%
+%\expandafter\gdef\macrotempx#1{#2}%
+%\endgroup}
+
+%\def\butfirst#1{}
+
+\message{fonts,}
+
+% Font-change commands.
+
+% Texinfo supports the sans serif font style, which plain TeX does not.
+% So we set up a \sf analogous to plain's \rm, etc.
+\newfam\sffam
+\def\sf{\fam=\sffam \tensf}
+\let\li = \sf % Sometimes we call it \li, not \sf.
+
+% We don't need math for this one.
+\def\ttsl{\tenttsl}
+
+%% Try out Computer Modern fonts at \magstephalf
+\let\mainmagstep=\magstephalf
+
+% Set the font macro #1 to the font named #2, adding on the
+% specified font prefix (normally `cm').
+% #3 is the font's design size, #4 is a scale factor
+\def\setfont#1#2#3#4{\font#1=\fontprefix#2#3 scaled #4}
+
+% Use cm as the default font prefix.
+% To specify the font prefix, you must define \fontprefix
+% before you read in texinfo.tex.
+\ifx\fontprefix\undefined
+\def\fontprefix{cm}
+\fi
+% Support font families that don't use the same naming scheme as CM.
+\def\rmshape{r}
+\def\rmbshape{bx}		%where the normal face is bold
+\def\bfshape{b}
+\def\bxshape{bx}
+\def\ttshape{tt}
+\def\ttbshape{tt}
+\def\ttslshape{sltt}
+\def\itshape{ti}
+\def\itbshape{bxti}
+\def\slshape{sl}
+\def\slbshape{bxsl}
+\def\sfshape{ss}
+\def\sfbshape{ss}
+\def\scshape{csc}
+\def\scbshape{csc}
+
+\ifx\bigger\relax
+\let\mainmagstep=\magstep1
+\setfont\textrm\rmshape{12}{1000}
+\setfont\texttt\ttshape{12}{1000}
+\else
+\setfont\textrm\rmshape{10}{\mainmagstep}
+\setfont\texttt\ttshape{10}{\mainmagstep}
+\fi
+% Instead of cmb10, you many want to use cmbx10.
+% cmbx10 is a prettier font on its own, but cmb10
+% looks better when embedded in a line with cmr10.
+\setfont\textbf\bfshape{10}{\mainmagstep}
+\setfont\textit\itshape{10}{\mainmagstep}
+\setfont\textsl\slshape{10}{\mainmagstep}
+\setfont\textsf\sfshape{10}{\mainmagstep}
+\setfont\textsc\scshape{10}{\mainmagstep}
+\setfont\textttsl\ttslshape{10}{\mainmagstep}
+\font\texti=cmmi10 scaled \mainmagstep
+\font\textsy=cmsy10 scaled \mainmagstep
+
+% A few fonts for @defun, etc.
+\setfont\defbf\bxshape{10}{\magstep1} %was 1314
+\setfont\deftt\ttshape{10}{\magstep1}
+\def\df{\let\tentt=\deftt \let\tenbf = \defbf \bf}
+
+% Fonts for indices and small examples.
+% We actually use the slanted font rather than the italic,
+% because texinfo normally uses the slanted fonts for that.
+% Do not make many font distinctions in general in the index, since they
+% aren't very useful.
+\setfont\ninett\ttshape{9}{1000}
+\setfont\indrm\rmshape{9}{1000}
+\setfont\indit\slshape{9}{1000}
+\let\indsl=\indit
+\let\indtt=\ninett
+\let\indttsl=\ninett
+\let\indsf=\indrm
+\let\indbf=\indrm
+\setfont\indsc\scshape{10}{900}
+\font\indi=cmmi9
+\font\indsy=cmsy9
+
+% Fonts for headings
+\setfont\chaprm\rmbshape{12}{\magstep2}
+\setfont\chapit\itbshape{10}{\magstep3}
+\setfont\chapsl\slbshape{10}{\magstep3}
+\setfont\chaptt\ttbshape{12}{\magstep2}
+\setfont\chapttsl\ttslshape{10}{\magstep3}
+\setfont\chapsf\sfbshape{12}{\magstep2}
+\let\chapbf=\chaprm
+\setfont\chapsc\scbshape{10}{\magstep3}
+\font\chapi=cmmi12 scaled \magstep2
+\font\chapsy=cmsy10 scaled \magstep3
+
+\setfont\secrm\rmbshape{12}{\magstep1}
+\setfont\secit\itbshape{10}{\magstep2}
+\setfont\secsl\slbshape{10}{\magstep2}
+\setfont\sectt\ttbshape{12}{\magstep1}
+\setfont\secttsl\ttslshape{10}{\magstep2}
+\setfont\secsf\sfbshape{12}{\magstep1}
+\let\secbf\secrm
+\setfont\secsc\scbshape{10}{\magstep2}
+\font\seci=cmmi12 scaled \magstep1
+\font\secsy=cmsy10 scaled \magstep2
+
+% \setfont\ssecrm\bxshape{10}{\magstep1}    % This size an font looked bad.
+% \setfont\ssecit\itshape{10}{\magstep1}    % The letters were too crowded.
+% \setfont\ssecsl\slshape{10}{\magstep1}
+% \setfont\ssectt\ttshape{10}{\magstep1}
+% \setfont\ssecsf\sfshape{10}{\magstep1}
+
+%\setfont\ssecrm\bfshape{10}{1315}	% Note the use of cmb rather than cmbx.
+%\setfont\ssecit\itshape{10}{1315}	% Also, the size is a little larger than
+%\setfont\ssecsl\slshape{10}{1315}	% being scaled magstep1.
+%\setfont\ssectt\ttshape{10}{1315}
+%\setfont\ssecsf\sfshape{10}{1315}
+
+%\let\ssecbf=\ssecrm
+
+\setfont\ssecrm\rmbshape{12}{\magstephalf}
+\setfont\ssecit\itbshape{10}{1315}
+\setfont\ssecsl\slbshape{10}{1315}
+\setfont\ssectt\ttbshape{12}{\magstephalf}
+\setfont\ssecttsl\ttslshape{10}{\magstep1}
+\setfont\ssecsf\sfbshape{12}{\magstephalf}
+\let\ssecbf\ssecrm
+\setfont\ssecsc\scbshape{10}{\magstep1}
+\font\sseci=cmmi12 scaled \magstephalf
+\font\ssecsy=cmsy10 scaled \magstep1
+% The smallcaps and symbol fonts should actually be scaled \magstep1.5,
+% but that is not a standard magnification.
+
+% Fonts for title page:
+\setfont\titlerm\rmbshape{12}{\magstep3}
+\let\authorrm = \secrm
+
+% In order for the font changes to affect most math symbols and letters,
+% we have to define the \textfont of the standard families.  Since
+% texinfo doesn't allow for producing subscripts and superscripts, we
+% don't bother to reset \scriptfont and \scriptscriptfont (which would
+% also require loading a lot more fonts).
+%
+\def\resetmathfonts{%
+  \textfont0 = \tenrm \textfont1 = \teni \textfont2 = \tensy
+  \textfont\itfam = \tenit \textfont\slfam = \tensl \textfont\bffam = \tenbf
+  \textfont\ttfam = \tentt \textfont\sffam = \tensf
+}
+
+
+% The font-changing commands redefine the meanings of \tenSTYLE, instead
+% of just \STYLE.  We do this so that font changes will continue to work
+% in math mode, where it is the current \fam that is relevant in most
+% cases, not the current font.  Plain TeX does \def\bf{\fam=\bffam
+% \tenbf}, for example.  By redefining \tenbf, we obviate the need to
+% redefine \bf itself.
+\def\textfonts{%
+  \let\tenrm=\textrm \let\tenit=\textit \let\tensl=\textsl
+  \let\tenbf=\textbf \let\tentt=\texttt \let\smallcaps=\textsc
+  \let\tensf=\textsf \let\teni=\texti \let\tensy=\textsy \let\tenttsl=\textttsl
+  \resetmathfonts}
+\def\chapfonts{%
+  \let\tenrm=\chaprm \let\tenit=\chapit \let\tensl=\chapsl
+  \let\tenbf=\chapbf \let\tentt=\chaptt \let\smallcaps=\chapsc
+  \let\tensf=\chapsf \let\teni=\chapi \let\tensy=\chapsy \let\tenttsl=\chapttsl
+  \resetmathfonts}
+\def\secfonts{%
+  \let\tenrm=\secrm \let\tenit=\secit \let\tensl=\secsl
+  \let\tenbf=\secbf \let\tentt=\sectt \let\smallcaps=\secsc
+  \let\tensf=\secsf \let\teni=\seci \let\tensy=\secsy \let\tenttsl=\secttsl
+  \resetmathfonts}
+\def\subsecfonts{%
+  \let\tenrm=\ssecrm \let\tenit=\ssecit \let\tensl=\ssecsl
+  \let\tenbf=\ssecbf \let\tentt=\ssectt \let\smallcaps=\ssecsc
+  \let\tensf=\ssecsf \let\teni=\sseci \let\tensy=\ssecsy \let\tenttsl=\ssecttsl
+  \resetmathfonts}
+\def\indexfonts{%
+  \let\tenrm=\indrm \let\tenit=\indit \let\tensl=\indsl
+  \let\tenbf=\indbf \let\tentt=\indtt \let\smallcaps=\indsc
+  \let\tensf=\indsf \let\teni=\indi \let\tensy=\indsy \let\tenttsl=\indttsl
+  \resetmathfonts}
+
+% Set up the default fonts, so we can use them for creating boxes.
+%
+\textfonts
+
+% Count depth in font-changes, for error checks
+\newcount\fontdepth \fontdepth=0
+
+% Fonts for short table of contents.
+\setfont\shortcontrm\rmshape{12}{1000}
+\setfont\shortcontbf\bxshape{12}{1000}
+\setfont\shortcontsl\slshape{12}{1000}
+
+%% Add scribe-like font environments, plus @l for inline lisp (usually sans
+%% serif) and @ii for TeX italic
+
+% \smartitalic{ARG} outputs arg in italics, followed by an italic correction
+% unless the following character is such as not to need one.
+\def\smartitalicx{\ifx\next,\else\ifx\next-\else\ifx\next.\else\/\fi\fi\fi}
+\def\smartitalic#1{{\sl #1}\futurelet\next\smartitalicx}
+
+\let\i=\smartitalic
+\let\var=\smartitalic
+\let\dfn=\smartitalic
+\let\emph=\smartitalic
+\let\cite=\smartitalic
+
+\def\b#1{{\bf #1}}
+\let\strong=\b
+
+% We can't just use \exhyphenpenalty, because that only has effect at
+% the end of a paragraph.  Restore normal hyphenation at the end of the
+% group within which \nohyphenation is presumably called.
+%
+\def\nohyphenation{\hyphenchar\font = -1  \aftergroup\restorehyphenation}
+\def\restorehyphenation{\hyphenchar\font = `- }
+
+\def\t#1{%
+  {\tt \rawbackslash \frenchspacing #1}%
+  \null
+}
+\let\ttfont=\t
+\def\samp #1{`\tclose{#1}'\null}
+\def\key #1{{\ttsl \nohyphenation \uppercase{#1}}\null}
+\def\ctrl #1{{\tt \rawbackslash \hat}#1}
+
+\let\file=\samp
+\let\email=\samp
+\let\url=\samp % perhaps include a hypertex \special eventually
+
+% @code is a modification of @t,
+% which makes spaces the same size as normal in the surrounding text.
+\def\tclose#1{%
+  {%
+    % Change normal interword space to be same as for the current font.
+    \spaceskip = \fontdimen2\font
+    %
+    % Switch to typewriter.
+    \tt
+    %
+    % But `\ ' produces the large typewriter interword space.
+    \def\ {{\spaceskip = 0pt{} }}%
+    %
+    % Turn off hyphenation.
+    \nohyphenation
+    %
+    \rawbackslash
+    \frenchspacing
+    #1%
+  }%
+  \null
+}
+
+% We *must* turn on hyphenation at `-' and `_' in \code.
+% Otherwise, it is too hard to avoid overfull hboxes
+% in the Emacs manual, the Library manual, etc.
+
+% Unfortunately, TeX uses one parameter (\hyphenchar) to control
+% both hyphenation at - and hyphenation within words.
+% We must therefore turn them both off (\tclose does that)
+% and arrange explicitly to hyphenate an a dash.
+%  -- rms.
+{
+\catcode`\-=\active
+\catcode`\_=\active
+\global\def\code{\begingroup \catcode`\-=\active \let-\codedash \catcode`\_=\active \let_\codeunder \codex}
+% The following is used by \doprintindex to insure that long function names
+% wrap around.  It is necessary for - and _ to be active before the index is
+% read from the file, as \entry parses the arguments long before \code is
+% ever called.  -- mycroft
+\global\def\indexbreaks{\catcode`\-=\active \let-\realdash \catcode`\_=\active \let_\realunder}
+}
+
+\def\realdash{-}
+\def\realunder{_}
+\def\codedash{-\discretionary{}{}{}}
+\def\codeunder{\normalunderscore\discretionary{}{}{}}
+\def\codex #1{\tclose{#1}\endgroup}
+
+%\let\exp=\tclose  %Was temporary
+
+% @kbd is like @code, except that if the argument is just one @key command,
+% then @kbd has no effect.
+%
+\def\xkey{\key}
+\def\kbdfoo#1#2#3\par{\def\one{#1}\def\three{#3}\def\threex{??}%
+\ifx\one\xkey\ifx\threex\three \key{#2}%
+\else{\tclose{\ttsl\look}}\fi
+\else{\tclose{\ttsl\look}}\fi}
+
+% Check if we are currently using a typewriter font.  Since all the
+% Computer Modern typewriter fonts have zero interword stretch (and
+% shrink), and it is reasonable to expect all typewriter fonts to have
+% this property, we can check that font parameter.
+% 
+\def\ifmonospace{\ifdim\fontdimen3\font=0pt }
+
+% Typeset a dimension, e.g., `in' or `pt'.  The only reason for the
+% argument is to make the input look right: @dmn{pt} instead of
+% @dmn{}pt.
+%
+\def\dmn#1{\thinspace #1}
+
+\def\kbd#1{\def\look{#1}\expandafter\kbdfoo\look??\par}
+
+\def\l#1{{\li #1}\null}		%
+
+\def\r#1{{\rm #1}}		% roman font
+% Use of \lowercase was suggested.
+\def\sc#1{{\smallcaps#1}}	% smallcaps font
+\def\ii#1{{\it #1}}		% italic font
+
+\message{page headings,}
+
+\newskip\titlepagetopglue \titlepagetopglue = 1.5in
+\newskip\titlepagebottomglue \titlepagebottomglue = 2pc
+
+% First the title page.  Must do @settitle before @titlepage.
+\def\titlefont#1{{\titlerm #1}}
+
+\newif\ifseenauthor
+\newif\iffinishedtitlepage
+
+\def\shorttitlepage{\parsearg\shorttitlepagezzz}
+\def\shorttitlepagezzz #1{\begingroup\hbox{}\vskip 1.5in \chaprm \centerline{#1}%
+	\endgroup\page\hbox{}\page}
+
+\def\titlepage{\begingroup \parindent=0pt \textfonts
+   \let\subtitlerm=\tenrm
+% I deinstalled the following change because \cmr12 is undefined.
+% This change was not in the ChangeLog anyway.  --rms.
+%   \let\subtitlerm=\cmr12
+   \def\subtitlefont{\subtitlerm \normalbaselineskip = 13pt \normalbaselines}%
+   %
+   \def\authorfont{\authorrm \normalbaselineskip = 16pt \normalbaselines}%
+   %
+   % Leave some space at the very top of the page.
+   \vglue\titlepagetopglue
+   %
+   % Now you can print the title using @title.
+   \def\title{\parsearg\titlezzz}%
+   \def\titlezzz##1{\leftline{\titlefont{##1}}
+		    % print a rule at the page bottom also.
+		    \finishedtitlepagefalse
+		    \vskip4pt \hrule height 4pt width \hsize \vskip4pt}%
+   % No rule at page bottom unless we print one at the top with @title.
+   \finishedtitlepagetrue
+   %
+   % Now you can put text using @subtitle.
+   \def\subtitle{\parsearg\subtitlezzz}%
+   \def\subtitlezzz##1{{\subtitlefont \rightline{##1}}}%
+   %
+   % @author should come last, but may come many times.
+   \def\author{\parsearg\authorzzz}%
+   \def\authorzzz##1{\ifseenauthor\else\vskip 0pt plus 1filll\seenauthortrue\fi
+      {\authorfont \leftline{##1}}}%
+   %
+   % Most title ``pages'' are actually two pages long, with space
+   % at the top of the second.  We don't want the ragged left on the second.
+   \let\oldpage = \page
+   \def\page{%
+      \iffinishedtitlepage\else
+	 \finishtitlepage
+      \fi
+      \oldpage
+      \let\page = \oldpage
+      \hbox{}}%
+%   \def\page{\oldpage \hbox{}}
+}
+
+\def\Etitlepage{%
+   \iffinishedtitlepage\else
+      \finishtitlepage
+   \fi
+   % It is important to do the page break before ending the group,
+   % because the headline and footline are only empty inside the group.
+   % If we use the new definition of \page, we always get a blank page
+   % after the title page, which we certainly don't want.
+   \oldpage
+   \endgroup
+   \HEADINGSon
+}
+
+\def\finishtitlepage{%
+   \vskip4pt \hrule height 2pt width \hsize
+   \vskip\titlepagebottomglue
+   \finishedtitlepagetrue
+}
+
+%%% Set up page headings and footings.
+
+\let\thispage=\folio
+
+\newtoks \evenheadline    % Token sequence for heading line of even pages
+\newtoks \oddheadline     % Token sequence for heading line of odd pages
+\newtoks \evenfootline    % Token sequence for footing line of even pages
+\newtoks \oddfootline     % Token sequence for footing line of odd pages
+
+% Now make Tex use those variables
+\headline={{\textfonts\rm \ifodd\pageno \the\oddheadline
+                            \else \the\evenheadline \fi}}
+\footline={{\textfonts\rm \ifodd\pageno \the\oddfootline
+                            \else \the\evenfootline \fi}\HEADINGShook}
+\let\HEADINGShook=\relax
+
+% Commands to set those variables.
+% For example, this is what  @headings on  does
+% @evenheading @thistitle|@thispage|@thischapter
+% @oddheading @thischapter|@thispage|@thistitle
+% @evenfooting @thisfile||
+% @oddfooting ||@thisfile
+
+\def\evenheading{\parsearg\evenheadingxxx}
+\def\oddheading{\parsearg\oddheadingxxx}
+\def\everyheading{\parsearg\everyheadingxxx}
+
+\def\evenfooting{\parsearg\evenfootingxxx}
+\def\oddfooting{\parsearg\oddfootingxxx}
+\def\everyfooting{\parsearg\everyfootingxxx}
+
+{\catcode`\@=0 %
+
+\gdef\evenheadingxxx #1{\evenheadingyyy #1@|@|@|@|\finish}
+\gdef\evenheadingyyy #1@|#2@|#3@|#4\finish{%
+\global\evenheadline={\rlap{\centerline{#2}}\line{#1\hfil#3}}}
+
+\gdef\oddheadingxxx #1{\oddheadingyyy #1@|@|@|@|\finish}
+\gdef\oddheadingyyy #1@|#2@|#3@|#4\finish{%
+\global\oddheadline={\rlap{\centerline{#2}}\line{#1\hfil#3}}}
+
+\gdef\everyheadingxxx #1{\everyheadingyyy #1@|@|@|@|\finish}
+\gdef\everyheadingyyy #1@|#2@|#3@|#4\finish{%
+\global\evenheadline={\rlap{\centerline{#2}}\line{#1\hfil#3}}
+\global\oddheadline={\rlap{\centerline{#2}}\line{#1\hfil#3}}}
+
+\gdef\evenfootingxxx #1{\evenfootingyyy #1@|@|@|@|\finish}
+\gdef\evenfootingyyy #1@|#2@|#3@|#4\finish{%
+\global\evenfootline={\rlap{\centerline{#2}}\line{#1\hfil#3}}}
+
+\gdef\oddfootingxxx #1{\oddfootingyyy #1@|@|@|@|\finish}
+\gdef\oddfootingyyy #1@|#2@|#3@|#4\finish{%
+\global\oddfootline={\rlap{\centerline{#2}}\line{#1\hfil#3}}}
+
+\gdef\everyfootingxxx #1{\everyfootingyyy #1@|@|@|@|\finish}
+\gdef\everyfootingyyy #1@|#2@|#3@|#4\finish{%
+\global\evenfootline={\rlap{\centerline{#2}}\line{#1\hfil#3}}
+\global\oddfootline={\rlap{\centerline{#2}}\line{#1\hfil#3}}}
+%
+}% unbind the catcode of @.
+
+% @headings double	turns headings on for double-sided printing.
+% @headings single	turns headings on for single-sided printing.
+% @headings off		turns them off.
+% @headings on		same as @headings double, retained for compatibility.
+% @headings after	turns on double-sided headings after this page.
+% @headings doubleafter	turns on double-sided headings after this page.
+% @headings singleafter turns on single-sided headings after this page.
+% By default, they are off.
+
+\def\headings #1 {\csname HEADINGS#1\endcsname}
+
+\def\HEADINGSoff{
+\global\evenheadline={\hfil} \global\evenfootline={\hfil}
+\global\oddheadline={\hfil} \global\oddfootline={\hfil}}
+\HEADINGSoff
+% When we turn headings on, set the page number to 1.
+% For double-sided printing, put current file name in lower left corner,
+% chapter name on inside top of right hand pages, document
+% title on inside top of left hand pages, and page numbers on outside top
+% edge of all pages.
+\def\HEADINGSdouble{
+%\pagealignmacro
+\global\pageno=1
+\global\evenfootline={\hfil}
+\global\oddfootline={\hfil}
+\global\evenheadline={\line{\folio\hfil\thistitle}}
+\global\oddheadline={\line{\thischapter\hfil\folio}}
+}
+% For single-sided printing, chapter title goes across top left of page,
+% page number on top right.
+\def\HEADINGSsingle{
+%\pagealignmacro
+\global\pageno=1
+\global\evenfootline={\hfil}
+\global\oddfootline={\hfil}
+\global\evenheadline={\line{\thischapter\hfil\folio}}
+\global\oddheadline={\line{\thischapter\hfil\folio}}
+}
+\def\HEADINGSon{\HEADINGSdouble}
+
+\def\HEADINGSafter{\let\HEADINGShook=\HEADINGSdoublex}
+\let\HEADINGSdoubleafter=\HEADINGSafter
+\def\HEADINGSdoublex{%
+\global\evenfootline={\hfil}
+\global\oddfootline={\hfil}
+\global\evenheadline={\line{\folio\hfil\thistitle}}
+\global\oddheadline={\line{\thischapter\hfil\folio}}
+}
+
+\def\HEADINGSsingleafter{\let\HEADINGShook=\HEADINGSsinglex}
+\def\HEADINGSsinglex{%
+\global\evenfootline={\hfil}
+\global\oddfootline={\hfil}
+\global\evenheadline={\line{\thischapter\hfil\folio}}
+\global\oddheadline={\line{\thischapter\hfil\folio}}
+}
+
+% Subroutines used in generating headings
+% Produces Day Month Year style of output.
+\def\today{\number\day\space
+\ifcase\month\or
+January\or February\or March\or April\or May\or June\or
+July\or August\or September\or October\or November\or December\fi
+\space\number\year}
+
+% Use this if you want the Month Day, Year style of output.
+%\def\today{\ifcase\month\or
+%January\or February\or March\or April\or May\or June\or
+%July\or August\or September\or October\or November\or December\fi
+%\space\number\day, \number\year}
+
+% @settitle line...  specifies the title of the document, for headings
+% It generates no output of its own
+
+\def\thistitle{No Title}
+\def\settitle{\parsearg\settitlezzz}
+\def\settitlezzz #1{\gdef\thistitle{#1}}
+
+\message{tables,}
+
+% @tabs -- simple alignment
+
+% These don't work.  For one thing, \+ is defined as outer.
+% So these macros cannot even be defined.
+
+%\def\tabs{\parsearg\tabszzz}
+%\def\tabszzz #1{\settabs\+#1\cr}
+%\def\tabline{\parsearg\tablinezzz}
+%\def\tablinezzz #1{\+#1\cr}
+%\def\&{&}
+
+% Tables -- @table, @ftable, @vtable, @item(x), @kitem(x), @xitem(x).
+
+% default indentation of table text
+\newdimen\tableindent \tableindent=.8in
+% default indentation of @itemize and @enumerate text
+\newdimen\itemindent  \itemindent=.3in
+% margin between end of table item and start of table text.
+\newdimen\itemmargin  \itemmargin=.1in
+
+% used internally for \itemindent minus \itemmargin
+\newdimen\itemmax
+
+% Note @table, @vtable, and @vtable define @item, @itemx, etc., with
+% these defs.
+% They also define \itemindex
+% to index the item name in whatever manner is desired (perhaps none).
+
+\newif\ifitemxneedsnegativevskip
+
+\def\itemxpar{\par\ifitemxneedsnegativevskip\nobreak\vskip-\parskip\nobreak\fi}
+
+\def\internalBitem{\smallbreak \parsearg\itemzzz}
+\def\internalBitemx{\itemxpar \parsearg\itemzzz}
+
+\def\internalBxitem "#1"{\def\xitemsubtopix{#1} \smallbreak \parsearg\xitemzzz}
+\def\internalBxitemx "#1"{\def\xitemsubtopix{#1} \itemxpar \parsearg\xitemzzz}
+
+\def\internalBkitem{\smallbreak \parsearg\kitemzzz}
+\def\internalBkitemx{\itemxpar \parsearg\kitemzzz}
+
+\def\kitemzzz #1{\dosubind {kw}{\code{#1}}{for {\bf \lastfunction}}%
+                 \itemzzz {#1}}
+
+\def\xitemzzz #1{\dosubind {kw}{\code{#1}}{for {\bf \xitemsubtopic}}%
+                 \itemzzz {#1}}
+
+\def\itemzzz #1{\begingroup %
+  \advance\hsize by -\rightskip
+  \advance\hsize by -\tableindent
+  \setbox0=\hbox{\itemfont{#1}}%
+  \itemindex{#1}%
+  \nobreak % This prevents a break before @itemx.
+  %
+  % Be sure we are not still in the middle of a paragraph.
+  %{\parskip = 0in
+  %\par
+  %}%
+  %
+  % If the item text does not fit in the space we have, put it on a line
+  % by itself, and do not allow a page break either before or after that
+  % line.  We do not start a paragraph here because then if the next
+  % command is, e.g., @kindex, the whatsit would get put into the
+  % horizontal list on a line by itself, resulting in extra blank space.
+  \ifdim \wd0>\itemmax
+    %
+    % Make this a paragraph so we get the \parskip glue and wrapping,
+    % but leave it ragged-right.
+    \begingroup
+      \advance\leftskip by-\tableindent
+      \advance\hsize by\tableindent
+      \advance\rightskip by0pt plus1fil
+      \leavevmode\unhbox0\par
+    \endgroup
+    %
+    % We're going to be starting a paragraph, but we don't want the
+    % \parskip glue -- logically it's part of the @item we just started.
+    \nobreak \vskip-\parskip
+    %
+    % Stop a page break at the \parskip glue coming up.  Unfortunately
+    % we can't prevent a possible page break at the following
+    % \baselineskip glue.
+    \nobreak
+    \endgroup
+    \itemxneedsnegativevskipfalse
+  \else
+    % The item text fits into the space.  Start a paragraph, so that the
+    % following text (if any) will end up on the same line.  Since that
+    % text will be indented by \tableindent, we make the item text be in
+    % a zero-width box.
+    \noindent
+    \rlap{\hskip -\tableindent\box0}\ignorespaces%
+    \endgroup%
+    \itemxneedsnegativevskiptrue%
+  \fi
+}
+
+\def\item{\errmessage{@item while not in a table}}
+\def\itemx{\errmessage{@itemx while not in a table}}
+\def\kitem{\errmessage{@kitem while not in a table}}
+\def\kitemx{\errmessage{@kitemx while not in a table}}
+\def\xitem{\errmessage{@xitem while not in a table}}
+\def\xitemx{\errmessage{@xitemx while not in a table}}
+
+%% Contains a kludge to get @end[description] to work
+\def\description{\tablez{\dontindex}{1}{}{}{}{}}
+
+\def\table{\begingroup\inENV\obeylines\obeyspaces\tablex}
+{\obeylines\obeyspaces%
+\gdef\tablex #1^^M{%
+\tabley\dontindex#1        \endtabley}}
+
+\def\ftable{\begingroup\inENV\obeylines\obeyspaces\ftablex}
+{\obeylines\obeyspaces%
+\gdef\ftablex #1^^M{%
+\tabley\fnitemindex#1        \endtabley
+\def\Eftable{\endgraf\afterenvbreak\endgroup}%
+\let\Etable=\relax}}
+
+\def\vtable{\begingroup\inENV\obeylines\obeyspaces\vtablex}
+{\obeylines\obeyspaces%
+\gdef\vtablex #1^^M{%
+\tabley\vritemindex#1        \endtabley
+\def\Evtable{\endgraf\afterenvbreak\endgroup}%
+\let\Etable=\relax}}
+
+\def\dontindex #1{}
+\def\fnitemindex #1{\doind {fn}{\code{#1}}}%
+\def\vritemindex #1{\doind {vr}{\code{#1}}}%
+
+{\obeyspaces %
+\gdef\tabley#1#2 #3 #4 #5 #6 #7\endtabley{\endgroup%
+\tablez{#1}{#2}{#3}{#4}{#5}{#6}}}
+
+\def\tablez #1#2#3#4#5#6{%
+\aboveenvbreak %
+\begingroup %
+\def\Edescription{\Etable}% Necessary kludge.
+\let\itemindex=#1%
+\ifnum 0#3>0 \advance \leftskip by #3\mil \fi %
+\ifnum 0#4>0 \tableindent=#4\mil \fi %
+\ifnum 0#5>0 \advance \rightskip by #5\mil \fi %
+\def\itemfont{#2}%
+\itemmax=\tableindent %
+\advance \itemmax by -\itemmargin %
+\advance \leftskip by \tableindent %
+\exdentamount=\tableindent
+\parindent = 0pt
+\parskip = \smallskipamount
+\ifdim \parskip=0pt \parskip=2pt \fi%
+\def\Etable{\endgraf\afterenvbreak\endgroup}%
+\let\item = \internalBitem %
+\let\itemx = \internalBitemx %
+\let\kitem = \internalBkitem %
+\let\kitemx = \internalBkitemx %
+\let\xitem = \internalBxitem %
+\let\xitemx = \internalBxitemx %
+}
+
+% This is the counter used by @enumerate, which is really @itemize
+
+\newcount \itemno
+
+\def\itemize{\parsearg\itemizezzz}
+
+\def\itemizezzz #1{%
+  \begingroup % ended by the @end itemsize
+  \itemizey {#1}{\Eitemize}
+}
+
+\def\itemizey #1#2{%
+\aboveenvbreak %
+\itemmax=\itemindent %
+\advance \itemmax by -\itemmargin %
+\advance \leftskip by \itemindent %
+\exdentamount=\itemindent
+\parindent = 0pt %
+\parskip = \smallskipamount %
+\ifdim \parskip=0pt \parskip=2pt \fi%
+\def#2{\endgraf\afterenvbreak\endgroup}%
+\def\itemcontents{#1}%
+\let\item=\itemizeitem}
+
+% Set sfcode to normal for the chars that usually have another value.
+% These are `.?!:;,'
+\def\frenchspacing{\sfcode46=1000 \sfcode63=1000 \sfcode33=1000
+  \sfcode58=1000 \sfcode59=1000 \sfcode44=1000 }
+
+% \splitoff TOKENS\endmark defines \first to be the first token in
+% TOKENS, and \rest to be the remainder.
+%
+\def\splitoff#1#2\endmark{\def\first{#1}\def\rest{#2}}%
+
+% Allow an optional argument of an uppercase letter, lowercase letter,
+% or number, to specify the first label in the enumerated list.  No
+% argument is the same as `1'.
+%
+\def\enumerate{\parsearg\enumeratezzz}
+\def\enumeratezzz #1{\enumeratey #1  \endenumeratey}
+\def\enumeratey #1 #2\endenumeratey{%
+  \begingroup % ended by the @end enumerate
+  %
+  % If we were given no argument, pretend we were given `1'.
+  \def\thearg{#1}%
+  \ifx\thearg\empty \def\thearg{1}\fi
+  %
+  % Detect if the argument is a single token.  If so, it might be a
+  % letter.  Otherwise, the only valid thing it can be is a number.
+  % (We will always have one token, because of the test we just made.
+  % This is a good thing, since \splitoff doesn't work given nothing at
+  % all -- the first parameter is undelimited.)
+  \expandafter\splitoff\thearg\endmark
+  \ifx\rest\empty
+    % Only one token in the argument.  It could still be anything.
+    % A ``lowercase letter'' is one whose \lccode is nonzero.
+    % An ``uppercase letter'' is one whose \lccode is both nonzero, and
+    %   not equal to itself.
+    % Otherwise, we assume it's a number.
+    %
+    % We need the \relax at the end of the \ifnum lines to stop TeX from
+    % continuing to look for a <number>.
+    %
+    \ifnum\lccode\expandafter`\thearg=0\relax
+      \numericenumerate % a number (we hope)
+    \else
+      % It's a letter.
+      \ifnum\lccode\expandafter`\thearg=\expandafter`\thearg\relax
+        \lowercaseenumerate % lowercase letter
+      \else
+        \uppercaseenumerate % uppercase letter
+      \fi
+    \fi
+  \else
+    % Multiple tokens in the argument.  We hope it's a number.
+    \numericenumerate
+  \fi
+}
+
+% An @enumerate whose labels are integers.  The starting integer is
+% given in \thearg.
+%
+\def\numericenumerate{%
+  \itemno = \thearg
+  \startenumeration{\the\itemno}%
+}
+
+% The starting (lowercase) letter is in \thearg.
+\def\lowercaseenumerate{%
+  \itemno = \expandafter`\thearg
+  \startenumeration{%
+    % Be sure we're not beyond the end of the alphabet.
+    \ifnum\itemno=0
+      \errmessage{No more lowercase letters in @enumerate; get a bigger
+                  alphabet}%
+    \fi
+    \char\lccode\itemno
+  }%
+}
+
+% The starting (uppercase) letter is in \thearg.
+\def\uppercaseenumerate{%
+  \itemno = \expandafter`\thearg
+  \startenumeration{%
+    % Be sure we're not beyond the end of the alphabet.
+    \ifnum\itemno=0
+      \errmessage{No more uppercase letters in @enumerate; get a bigger
+                  alphabet}
+    \fi
+    \char\uccode\itemno
+  }%
+}
+
+% Call itemizey, adding a period to the first argument and supplying the
+% common last two arguments.  Also subtract one from the initial value in
+% \itemno, since @item increments \itemno.
+%
+\def\startenumeration#1{%
+  \advance\itemno by -1
+  \itemizey{#1.}\Eenumerate\flushcr
+}
+
+% @alphaenumerate and @capsenumerate are abbreviations for giving an arg
+% to @enumerate.
+%
+\def\alphaenumerate{\enumerate{a}}
+\def\capsenumerate{\enumerate{A}}
+\def\Ealphaenumerate{\Eenumerate}
+\def\Ecapsenumerate{\Eenumerate}
+
+% Definition of @item while inside @itemize.
+
+\def\itemizeitem{%
+\advance\itemno by 1
+{\let\par=\endgraf \smallbreak}%
+\ifhmode \errmessage{\in hmode at itemizeitem}\fi
+{\parskip=0in \hskip 0pt
+\hbox to 0pt{\hss \itemcontents\hskip \itemmargin}%
+\vadjust{\penalty 1200}}%
+\flushcr}
+
+% @multitable macros
+% Amy Hendrickson, 8/18/94, 3/6/96
+%
+% @multitable ... @end multitable will make as many columns as desired.
+% Contents of each column will wrap at width given in preamble.  Width
+% can be specified either with sample text given in a template line,
+% or in percent of \hsize, the current width of text on page.
+
+% Table can continue over pages but will only break between lines.
+
+% To make preamble:
+%
+% Either define widths of columns in terms of percent of \hsize: 
+%   @multitable @columnfractions .25 .3 .45
+%   @item ...
+%
+%   Numbers following @columnfractions are the percent of the total
+%   current hsize to be used for each column. You may use as many
+%   columns as desired.
+
+% Or use a template:
+%   @multitable {Column 1 template} {Column 2 template} {Column 3 template}
+%   @item ...
+%   using the widest term desired in each column.
+%
+% For those who want to use more than one line's worth of words in
+% the preamble, break the line within one argument and it
+% will parse correctly, i.e.,
+%
+%     @multitable {Column 1 template} {Column 2 template} {Column 3 
+%      template}
+% Not:
+%     @multitable {Column 1 template} {Column 2 template} 
+%      {Column 3 template}
+
+% Each new table line starts with @item, each subsequent new column 
+% starts with @tab. Empty columns may be produced by supplying @tab's
+% with nothing between them for as many times as empty columns are needed,
+% ie, @tab@tab@tab will produce two empty columns.
+
+% @item, @tab, @multicolumn or @endmulticolumn do not need to be on their
+% own lines, but it will not hurt if they are.
+
+% Sample multitable:
+
+%   @multitable {Column 1 template} {Column 2 template} {Column 3 template}
+%   @item first col stuff @tab second col stuff @tab third col
+%   @item 
+%   first col stuff 
+%   @tab 
+%   second col stuff 
+%   @tab 
+%   third col 
+%   @item first col stuff @tab second col stuff 
+%   @tab Many paragraphs of text may be used in any column.
+%     
+%         They will wrap at the width determined by the template.
+%   @item@tab@tab This will be in third column.
+%   @end multitable
+
+% Default dimensions may be reset by user.
+% @multitableparskip is vertical space between paragraphs in table.
+% @multitableparindent is paragraph indent in table.
+% @multitablecolmargin is horizontal space to be left between columns.
+% @multitablelinespace is space to leave between table items, baseline
+%                                                            to baseline.
+%   0pt means it depends on current normal line spacing.
+
+%%%%
+% Dimensions 
+
+\newskip\multitableparskip
+\newskip\multitableparindent
+\newdimen\multitablecolspace
+\newskip\multitablelinespace
+\multitableparskip=0pt
+\multitableparindent=6pt
+\multitablecolspace=12pt
+\multitablelinespace=0pt
+
+%%%%
+% Macros used to set up halign preamble:
+\let\endsetuptable\relax
+\def\xendsetuptable{\endsetuptable}
+\let\columnfractions\relax
+\def\xcolumnfractions{\columnfractions}
+\newif\ifsetpercent
+
+%% 2/1/96, to allow fractions to be given with more than one digit.
+\def\pickupwholefraction#1 {\global\advance\colcount by1 %
+\expandafter\xdef\csname col\the\colcount\endcsname{.#1\hsize}%
+\setuptable}
+
+\newcount\colcount
+\def\setuptable#1{\def\firstarg{#1}%
+\ifx\firstarg\xendsetuptable\let\go\relax%
+\else
+  \ifx\firstarg\xcolumnfractions\global\setpercenttrue%
+  \else
+    \ifsetpercent
+       \let\go\pickupwholefraction   % In this case arg of setuptable
+                                     % is the decimal point before the
+                                     % number given in percent of hsize.
+                                     % We don't need this so we don't use it.
+    \else
+       \global\advance\colcount by1
+       \setbox0=\hbox{#1}%
+       \expandafter\xdef\csname col\the\colcount\endcsname{\the\wd0}%
+    \fi%
+  \fi%
+\ifx\go\pickupwholefraction\else\let\go\setuptable\fi%
+\fi\go}
+
+%%%%
+% multitable syntax
+\def\tab{&\hskip1sp\relax} % 2/2/96
+                           % tiny skip here makes sure this column space is
+                           % maintained, even if it is never used.
+
+
+%%%%
+% @multitable ... @end multitable definitions:
+
+\def\multitable{\parsearg\dotable}
+
+\def\dotable#1{\bgroup
+\let\item\cr
+\tolerance=9500
+\hbadness=9500
+\setmultitablespacing
+\parskip=\multitableparskip
+\parindent=\multitableparindent
+\overfullrule=0pt
+\global\colcount=0\relax%
+\def\Emultitable{\global\setpercentfalse\global\everycr{}\cr\egroup\egroup}%
+ % To parse everything between @multitable and @item :
+\setuptable#1 \endsetuptable
+ % Need to reset this to 0 after \setuptable.
+\global\colcount=0\relax% 
+ %
+ % This preamble sets up a generic column definition, which will
+ % be used as many times as user calls for columns.
+ % \vtop will set a single line and will also let text wrap and 
+ % continue for many paragraphs if desired.
+\halign\bgroup&\global\advance\colcount by 1\relax%
+\multistrut\vtop{\hsize=\expandafter\csname col\the\colcount\endcsname
+ % In order to keep entries from bumping into each other
+ % we will add a \leftskip of \multitablecolspace to all columns after
+ % the first one.
+ %  If a template has been used, we will add \multitablecolspace 
+ % to the width of each template entry.
+ %  If user has set preamble in terms of percent of \hsize
+ % we will use that dimension as the width of the column, and
+ % the \leftskip will keep entries from bumping into each other.
+ % Table will start at left margin and final column will justify at
+ % right margin.
+\ifnum\colcount=1
+\else
+  \ifsetpercent
+  \else
+   % If user has <not> set preamble in terms of percent of \hsize
+   % we will advance \hsize by \multitablecolspace 
+  \advance\hsize by \multitablecolspace
+  \fi
+ % In either case we will make \leftskip=\multitablecolspace:
+\leftskip=\multitablecolspace
+\fi
+\noindent##}\cr%
+ % \everycr will reset column counter, \colcount, at the end of
+ % each line. Every column  entry will cause \colcount to advance by one. 
+ % The table preamble
+ % looks at the current \colcount to find the correct column width.
+\global\everycr{\noalign{%
+\filbreak%% keeps underfull box messages off when table breaks over pages.
+\global\colcount=0\relax}}
+}
+
+\def\setmultitablespacing{% test to see if user has set \multitablelinespace.
+% If so, do nothing. If not, give it an appropriate dimension based on
+% current baselineskip.
+\setbox0=\vbox{Xy}
+\ifdim\multitablelinespace=0pt
+%% strut to put in table in case some entry doesn't have descenders,
+%% to keep lines equally spaced
+\gdef\multistrut{\vrule height\ht0 depth\dp0 width0pt\relax}
+%% Test to see if parskip is larger than space between lines of
+%% table. If not, do nothing. 
+%%        If so, set to same dimension as multitablelinespace.
+\else
+\gdef\multistrut{\vrule height\multitablelinespace depth\dp0
+width0pt\relax} \fi
+\ifdim\multitableparskip>\multitablelinespace
+\global\multitableparskip=\multitablelinespace
+\global\advance\multitableparskip-7pt %% to keep parskip somewhat smaller
+                                      %% than skip between lines in the table.
+\fi%
+\ifdim\multitableparskip=0pt
+\global\multitableparskip=\multitablelinespace
+\global\advance\multitableparskip-7pt %% to keep parskip somewhat smaller
+                                      %% than skip between lines in the table.
+\fi}
+\message{indexing,}
+% Index generation facilities
+
+% Define \newwrite to be identical to plain tex's \newwrite
+% except not \outer, so it can be used within \newindex.
+{\catcode`\@=11
+\gdef\newwrite{\alloc@7\write\chardef\sixt@@n}}
+
+% \newindex {foo} defines an index named foo.
+% It automatically defines \fooindex such that
+% \fooindex ...rest of line... puts an entry in the index foo.
+% It also defines \fooindfile to be the number of the output channel for
+% the file that	accumulates this index.  The file's extension is foo.
+% The name of an index should be no more than 2 characters long
+% for the sake of vms.
+
+\def\newindex #1{
+\expandafter\newwrite \csname#1indfile\endcsname% Define number for output file
+\openout \csname#1indfile\endcsname \jobname.#1	% Open the file
+\expandafter\xdef\csname#1index\endcsname{%	% Define \xxxindex
+\noexpand\doindex {#1}}
+}
+
+% @defindex foo  ==  \newindex{foo}
+
+\def\defindex{\parsearg\newindex}
+
+% Define @defcodeindex, like @defindex except put all entries in @code.
+
+\def\newcodeindex #1{
+\expandafter\newwrite \csname#1indfile\endcsname% Define number for output file
+\openout \csname#1indfile\endcsname \jobname.#1	% Open the file
+\expandafter\xdef\csname#1index\endcsname{%	% Define \xxxindex
+\noexpand\docodeindex {#1}}
+}
+
+\def\defcodeindex{\parsearg\newcodeindex}
+
+% @synindex foo bar    makes index foo feed into index bar.
+% Do this instead of @defindex foo if you don't want it as a separate index.
+\def\synindex #1 #2 {%
+\expandafter\let\expandafter\synindexfoo\expandafter=\csname#2indfile\endcsname
+\expandafter\let\csname#1indfile\endcsname=\synindexfoo
+\expandafter\xdef\csname#1index\endcsname{%	% Define \xxxindex
+\noexpand\doindex {#2}}%
+}
+
+% @syncodeindex foo bar   similar, but put all entries made for index foo
+% inside @code.
+\def\syncodeindex #1 #2 {%
+\expandafter\let\expandafter\synindexfoo\expandafter=\csname#2indfile\endcsname
+\expandafter\let\csname#1indfile\endcsname=\synindexfoo
+\expandafter\xdef\csname#1index\endcsname{%	% Define \xxxindex
+\noexpand\docodeindex {#2}}%
+}
+
+% Define \doindex, the driver for all \fooindex macros.
+% Argument #1 is generated by the calling \fooindex macro,
+%  and it is "foo", the name of the index.
+
+% \doindex just uses \parsearg; it calls \doind for the actual work.
+% This is because \doind is more useful to call from other macros.
+
+% There is also \dosubind {index}{topic}{subtopic}
+% which makes an entry in a two-level index such as the operation index.
+
+\def\doindex#1{\edef\indexname{#1}\parsearg\singleindexer}
+\def\singleindexer #1{\doind{\indexname}{#1}}
+
+% like the previous two, but they put @code around the argument.
+\def\docodeindex#1{\edef\indexname{#1}\parsearg\singlecodeindexer}
+\def\singlecodeindexer #1{\doind{\indexname}{\code{#1}}}
+
+\def\indexdummies{%
+% Take care of the plain tex accent commands.
+\def\"{\realbackslash "}%
+\def\`{\realbackslash `}%
+\def\'{\realbackslash '}%
+\def\^{\realbackslash ^}%
+\def\~{\realbackslash ~}%
+\def\={\realbackslash =}%
+\def\b{\realbackslash b}%
+\def\c{\realbackslash c}%
+\def\d{\realbackslash d}%
+\def\u{\realbackslash u}%
+\def\v{\realbackslash v}%
+\def\H{\realbackslash H}%
+% Take care of the plain tex special European modified letters.
+\def\oe{\realbackslash oe}%
+\def\ae{\realbackslash ae}%
+\def\aa{\realbackslash aa}%
+\def\OE{\realbackslash OE}%
+\def\AE{\realbackslash AE}%
+\def\AA{\realbackslash AA}%
+\def\o{\realbackslash o}%
+\def\O{\realbackslash O}%
+\def\l{\realbackslash l}%
+\def\L{\realbackslash L}%
+\def\ss{\realbackslash ss}%
+% Take care of texinfo commands likely to appear in an index entry.
+\def\_{{\realbackslash _}}%
+\def\w{\realbackslash w }%
+\def\bf{\realbackslash bf }%
+\def\rm{\realbackslash rm }%
+\def\sl{\realbackslash sl }%
+\def\sf{\realbackslash sf}%
+\def\tt{\realbackslash tt}%
+\def\gtr{\realbackslash gtr}%
+\def\less{\realbackslash less}%
+\def\hat{\realbackslash hat}%
+\def\char{\realbackslash char}%
+\def\TeX{\realbackslash TeX}%
+\def\dots{\realbackslash dots }%
+\def\copyright{\realbackslash copyright }%
+\def\tclose##1{\realbackslash tclose {##1}}%
+\def\code##1{\realbackslash code {##1}}%
+\def\samp##1{\realbackslash samp {##1}}%
+\def\t##1{\realbackslash r {##1}}%
+\def\r##1{\realbackslash r {##1}}%
+\def\i##1{\realbackslash i {##1}}%
+\def\b##1{\realbackslash b {##1}}%
+\def\cite##1{\realbackslash cite {##1}}%
+\def\key##1{\realbackslash key {##1}}%
+\def\file##1{\realbackslash file {##1}}%
+\def\var##1{\realbackslash var {##1}}%
+\def\kbd##1{\realbackslash kbd {##1}}%
+\def\dfn##1{\realbackslash dfn {##1}}%
+\def\emph##1{\realbackslash emph {##1}}%
+\unsepspaces
+}
+
+% If an index command is used in an @example environment, any spaces
+% therein should become regular spaces in the raw index file, not the
+% expansion of \tie (\\leavevmode \penalty \@M \ ).
+{\obeyspaces
+ \gdef\unsepspaces{\obeyspaces\let =\space}}
+
+% \indexnofonts no-ops all font-change commands.
+% This is used when outputting the strings to sort the index by.
+\def\indexdummyfont#1{#1}
+\def\indexdummytex{TeX}
+\def\indexdummydots{...}
+
+\def\indexnofonts{%
+% Just ignore accents.
+\let\"=\indexdummyfont
+\let\`=\indexdummyfont
+\let\'=\indexdummyfont
+\let\^=\indexdummyfont
+\let\~=\indexdummyfont
+\let\==\indexdummyfont
+\let\b=\indexdummyfont
+\let\c=\indexdummyfont
+\let\d=\indexdummyfont
+\let\u=\indexdummyfont
+\let\v=\indexdummyfont
+\let\H=\indexdummyfont
+% Take care of the plain tex special European modified letters.
+\def\oe{oe}%
+\def\ae{ae}%
+\def\aa{aa}%
+\def\OE{OE}%
+\def\AE{AE}%
+\def\AA{AA}%
+\def\o{o}%
+\def\O{O}%
+\def\l{l}%
+\def\L{L}%
+\def\ss{ss}%
+\let\w=\indexdummyfont
+\let\t=\indexdummyfont
+\let\r=\indexdummyfont
+\let\i=\indexdummyfont
+\let\b=\indexdummyfont
+\let\emph=\indexdummyfont
+\let\strong=\indexdummyfont
+\let\cite=\indexdummyfont
+\let\sc=\indexdummyfont
+%Don't no-op \tt, since it isn't a user-level command
+% and is used in the definitions of the active chars like <, >, |...
+%\let\tt=\indexdummyfont
+\let\tclose=\indexdummyfont
+\let\code=\indexdummyfont
+\let\file=\indexdummyfont
+\let\samp=\indexdummyfont
+\let\kbd=\indexdummyfont
+\let\key=\indexdummyfont
+\let\var=\indexdummyfont
+\let\TeX=\indexdummytex
+\let\dots=\indexdummydots
+}
+
+% To define \realbackslash, we must make \ not be an escape.
+% We must first make another character (@) an escape
+% so we do not become unable to do a definition.
+
+{\catcode`\@=0 \catcode`\\=\other
+@gdef@realbackslash{\}}
+
+\let\indexbackslash=0  %overridden during \printindex.
+
+\let\SETmarginindex=\relax %initialize!
+% workhorse for all \fooindexes
+% #1 is name of index, #2 is stuff to put there
+\def\doind #1#2{%
+% Put the index entry in the margin if desired.
+\ifx\SETmarginindex\relax\else%
+\insert\margin{\hbox{\vrule height8pt depth3pt width0pt #2}}%
+\fi%
+{\count10=\lastpenalty %
+{\indexdummies % Must do this here, since \bf, etc expand at this stage
+\escapechar=`\\%
+{\let\folio=0% Expand all macros now EXCEPT \folio
+\def\rawbackslashxx{\indexbackslash}% \indexbackslash isn't defined now
+% so it will be output as is; and it will print as backslash in the indx.
+%
+% Now process the index-string once, with all font commands turned off,
+% to get the string to sort the index by.
+{\indexnofonts
+\xdef\temp1{#2}%
+}%
+% Now produce the complete index entry.  We process the index-string again,
+% this time with font commands expanded, to get what to print in the index.
+\edef\temp{%
+\write \csname#1indfile\endcsname{%
+\realbackslash entry {\temp1}{\folio}{#2}}}%
+\temp }%
+}\penalty\count10}}
+
+\def\dosubind #1#2#3{%
+{\count10=\lastpenalty %
+{\indexdummies % Must do this here, since \bf, etc expand at this stage
+\escapechar=`\\%
+{\let\folio=0%
+\def\rawbackslashxx{\indexbackslash}%
+%
+% Now process the index-string once, with all font commands turned off,
+% to get the string to sort the index by.
+{\indexnofonts
+\xdef\temp1{#2 #3}%
+}%
+% Now produce the complete index entry.  We process the index-string again,
+% this time with font commands expanded, to get what to print in the index.
+\edef\temp{%
+\write \csname#1indfile\endcsname{%
+\realbackslash entry {\temp1}{\folio}{#2}{#3}}}%
+\temp }%
+}\penalty\count10}}
+
+% The index entry written in the file actually looks like
+%  \entry {sortstring}{page}{topic}
+% or
+%  \entry {sortstring}{page}{topic}{subtopic}
+% The texindex program reads in these files and writes files
+% containing these kinds of lines:
+%  \initial {c}
+%     before the first topic whose initial is c
+%  \entry {topic}{pagelist}
+%     for a topic that is used without subtopics
+%  \primary {topic}
+%     for the beginning of a topic that is used with subtopics
+%  \secondary {subtopic}{pagelist}
+%     for each subtopic.
+
+% Define the user-accessible indexing commands
+% @findex, @vindex, @kindex, @cindex.
+
+\def\findex {\fnindex}
+\def\kindex {\kyindex}
+\def\cindex {\cpindex}
+\def\vindex {\vrindex}
+\def\tindex {\tpindex}
+\def\pindex {\pgindex}
+
+\def\cindexsub {\begingroup\obeylines\cindexsub}
+{\obeylines %
+\gdef\cindexsub "#1" #2^^M{\endgroup %
+\dosubind{cp}{#2}{#1}}}
+
+% Define the macros used in formatting output of the sorted index material.
+
+% This is what you call to cause a particular index to get printed.
+% Write
+% @unnumbered Function Index
+% @printindex fn
+
+\def\printindex{\parsearg\doprintindex}
+
+\def\doprintindex#1{%
+  \tex
+  \dobreak \chapheadingskip {10000}
+  \catcode`\%=\other\catcode`\&=\other\catcode`\#=\other
+  \catcode`\$=\other
+  \catcode`\~=\other
+  \indexbreaks
+  %
+  % The following don't help, since the chars were translated
+  % when the raw index was written, and their fonts were discarded
+  % due to \indexnofonts.
+  %\catcode`\"=\active
+  %\catcode`\^=\active
+  %\catcode`\_=\active
+  %\catcode`\|=\active
+  %\catcode`\<=\active
+  %\catcode`\>=\active
+  % %
+  \def\indexbackslash{\rawbackslashxx}
+  \indexfonts\rm \tolerance=9500 \advance\baselineskip -1pt
+  \begindoublecolumns
+  %
+  % See if the index file exists and is nonempty.
+  \openin 1 \jobname.#1s
+  \ifeof 1
+    % \enddoublecolumns gets confused if there is no text in the index,
+    % and it loses the chapter title and the aux file entries for the
+    % index.  The easiest way to prevent this problem is to make sure
+    % there is some text.
+    (Index is nonexistent)
+    \else
+    %
+    % If the index file exists but is empty, then \openin leaves \ifeof
+    % false.  We have to make TeX try to read something from the file, so
+    % it can discover if there is anything in it.
+    \read 1 to \temp
+    \ifeof 1
+      (Index is empty)
+    \else
+      \input \jobname.#1s
+    \fi
+  \fi
+  \closein 1
+  \enddoublecolumns
+  \Etex
+}
+
+% These macros are used by the sorted index file itself.
+% Change them to control the appearance of the index.
+
+% Same as \bigskipamount except no shrink.
+% \balancecolumns gets confused if there is any shrink.
+\newskip\initialskipamount \initialskipamount 12pt plus4pt
+
+\def\initial #1{%
+{\let\tentt=\sectt \let\tt=\sectt \let\sf=\sectt
+\ifdim\lastskip<\initialskipamount
+\removelastskip \penalty-200 \vskip \initialskipamount\fi
+\line{\secbf#1\hfill}\kern 2pt\penalty10000}}
+
+% This typesets a paragraph consisting of #1, dot leaders, and then #2
+% flush to the right margin.  It is used for index and table of contents
+% entries.  The paragraph is indented by \leftskip.
+%
+\def\entry #1#2{\begingroup
+  %
+  % Start a new paragraph if necessary, so our assignments below can't
+  % affect previous text.
+  \par
+  %
+  % Do not fill out the last line with white space.
+  \parfillskip = 0in
+  %
+  % No extra space above this paragraph.
+  \parskip = 0in
+  %
+  % Do not prefer a separate line ending with a hyphen to fewer lines.
+  \finalhyphendemerits = 0
+  %
+  % \hangindent is only relevant when the entry text and page number
+  % don't both fit on one line.  In that case, bob suggests starting the
+  % dots pretty far over on the line.  Unfortunately, a large
+  % indentation looks wrong when the entry text itself is broken across
+  % lines.  So we use a small indentation and put up with long leaders.
+  %
+  % \hangafter is reset to 1 (which is the value we want) at the start
+  % of each paragraph, so we need not do anything with that.
+  \hangindent=2em
+  %
+  % When the entry text needs to be broken, just fill out the first line
+  % with blank space.
+  \rightskip = 0pt plus1fil
+  %
+  % Start a ``paragraph'' for the index entry so the line breaking
+  % parameters we've set above will have an effect.
+  \noindent
+  %
+  % Insert the text of the index entry.  TeX will do line-breaking on it.
+  #1%
+  % The following is kludged to not output a line of dots in the index if
+  % there are no page numbers.  The next person who breaks this will be
+  % cursed by a Unix daemon.
+  \def\tempa{{\rm }}%
+  \def\tempb{#2}%
+  \edef\tempc{\tempa}%
+  \edef\tempd{\tempb}%
+  \ifx\tempc\tempd\ \else%
+    %
+    % If we must, put the page number on a line of its own, and fill out
+    % this line with blank space.  (The \hfil is overwhelmed with the
+    % fill leaders glue in \indexdotfill if the page number does fit.)
+    \hfil\penalty50
+    \null\nobreak\indexdotfill % Have leaders before the page number.
+    %
+    % The `\ ' here is removed by the implicit \unskip that TeX does as
+    % part of (the primitive) \par.  Without it, a spurious underfull
+    % \hbox ensues.
+    \ #2% The page number ends the paragraph.
+  \fi%
+  \par
+\endgroup}
+
+% Like \dotfill except takes at least 1 em.
+\def\indexdotfill{\cleaders
+  \hbox{$\mathsurround=0pt \mkern1.5mu ${\it .}$ \mkern1.5mu$}\hskip 1em plus 1fill}
+
+\def\primary #1{\line{#1\hfil}}
+
+\newskip\secondaryindent \secondaryindent=0.5cm
+
+\def\secondary #1#2{
+{\parfillskip=0in \parskip=0in
+\hangindent =1in \hangafter=1
+\noindent\hskip\secondaryindent\hbox{#1}\indexdotfill #2\par
+}}
+
+%% Define two-column mode, which is used in indexes.
+%% Adapted from the TeXbook, page 416.
+\catcode `\@=11
+
+\newbox\partialpage
+
+\newdimen\doublecolumnhsize
+
+\def\begindoublecolumns{\begingroup
+  % Grab any single-column material above us.
+  \output = {\global\setbox\partialpage
+    =\vbox{\unvbox255\kern -\topskip \kern \baselineskip}}%
+  \eject
+  %
+  % Now switch to the double-column output routine.
+  \output={\doublecolumnout}%
+  %
+  % Change the page size parameters.  We could do this once outside this
+  % routine, in each of @smallbook, @afourpaper, and the default 8.5x11
+  % format, but then we repeat the same computation.  Repeating a couple
+  % of assignments once per index is clearly meaningless for the
+  % execution time, so we may as well do it once.
+  %
+  % First we halve the line length, less a little for the gutter between
+  % the columns.  We compute the gutter based on the line length, so it
+  % changes automatically with the paper format.  The magic constant
+  % below is chosen so that the gutter has the same value (well, +- <
+  % 1pt) as it did when we hard-coded it.
+  %
+  % We put the result in a separate register, \doublecolumhsize, so we
+  % can restore it in \pagesofar, after \hsize itself has (potentially)
+  % been clobbered.
+  %
+  \doublecolumnhsize = \hsize
+    \advance\doublecolumnhsize by -.04154\hsize
+    \divide\doublecolumnhsize by 2
+  \hsize = \doublecolumnhsize
+  %
+  % Double the \vsize as well.  (We don't need a separate register here,
+  % since nobody clobbers \vsize.)
+  \vsize = 2\vsize
+  \doublecolumnpagegoal
+}
+
+\def\enddoublecolumns{\eject \endgroup \pagegoal=\vsize \unvbox\partialpage}
+
+\def\doublecolumnsplit{\splittopskip=\topskip \splitmaxdepth=\maxdepth
+  \global\dimen@=\pageheight \global\advance\dimen@ by-\ht\partialpage
+  \global\setbox1=\vsplit255 to\dimen@ \global\setbox0=\vbox{\unvbox1}
+  \global\setbox3=\vsplit255 to\dimen@ \global\setbox2=\vbox{\unvbox3}
+  \ifdim\ht0>\dimen@ \setbox255=\vbox{\unvbox0\unvbox2} \global\setbox255=\copy5 \fi
+  \ifdim\ht2>\dimen@ \setbox255=\vbox{\unvbox0\unvbox2} \global\setbox255=\copy5 \fi
+}
+\def\doublecolumnpagegoal{%
+  \dimen@=\vsize \advance\dimen@ by-2\ht\partialpage \global\pagegoal=\dimen@
+}
+\def\pagesofar{\unvbox\partialpage %
+  \hsize=\doublecolumnhsize % have to restore this since output routine
+  \wd0=\hsize \wd2=\hsize \hbox to\pagewidth{\box0\hfil\box2}}
+\def\doublecolumnout{%
+  \setbox5=\copy255
+  {\vbadness=10000 \doublecolumnsplit}
+  \ifvbox255
+    \setbox0=\vtop to\dimen@{\unvbox0}
+    \setbox2=\vtop to\dimen@{\unvbox2}
+    \onepageout\pagesofar \unvbox255 \penalty\outputpenalty
+  \else
+    \setbox0=\vbox{\unvbox5}
+    \ifvbox0
+      \dimen@=\ht0 \advance\dimen@ by\topskip \advance\dimen@ by-\baselineskip
+      \divide\dimen@ by2 \splittopskip=\topskip \splitmaxdepth=\maxdepth
+      {\vbadness=10000
+	\loop \global\setbox5=\copy0
+          \setbox1=\vsplit5 to\dimen@
+          \setbox3=\vsplit5 to\dimen@
+          \ifvbox5 \global\advance\dimen@ by1pt \repeat
+        \setbox0=\vbox to\dimen@{\unvbox1}
+        \setbox2=\vbox to\dimen@{\unvbox3}
+        \global\setbox\partialpage=\vbox{\pagesofar}
+        \doublecolumnpagegoal
+      }
+    \fi
+  \fi
+}
+
+\catcode `\@=\other
+\message{sectioning,}
+% Define chapters, sections, etc.
+
+\newcount \chapno
+\newcount \secno        \secno=0
+\newcount \subsecno     \subsecno=0
+\newcount \subsubsecno  \subsubsecno=0
+
+% This counter is funny since it counts through charcodes of letters A, B, ...
+\newcount \appendixno  \appendixno = `\@
+\def\appendixletter{\char\the\appendixno}
+
+\newwrite \contentsfile
+% This is called from \setfilename.
+\def\opencontents{\openout \contentsfile = \jobname.toc}
+
+% Each @chapter defines this as the name of the chapter.
+% page headings and footings can use it.  @section does likewise
+
+\def\thischapter{} \def\thissection{}
+\def\seccheck#1{\if \pageno<0 %
+\errmessage{@#1 not allowed after generating table of contents}\fi
+%
+}
+
+\def\chapternofonts{%
+\let\rawbackslash=\relax%
+\let\frenchspacing=\relax%
+\def\result{\realbackslash result}
+\def\equiv{\realbackslash equiv}
+\def\expansion{\realbackslash expansion}
+\def\print{\realbackslash print}
+\def\TeX{\realbackslash TeX}
+\def\dots{\realbackslash dots}
+\def\copyright{\realbackslash copyright}
+\def\tt{\realbackslash tt}
+\def\bf{\realbackslash bf }
+\def\w{\realbackslash w}
+\def\less{\realbackslash less}
+\def\gtr{\realbackslash gtr}
+\def\hat{\realbackslash hat}
+\def\char{\realbackslash char}
+\def\tclose##1{\realbackslash tclose {##1}}
+\def\code##1{\realbackslash code {##1}}
+\def\samp##1{\realbackslash samp {##1}}
+\def\r##1{\realbackslash r {##1}}
+\def\b##1{\realbackslash b {##1}}
+\def\key##1{\realbackslash key {##1}}
+\def\file##1{\realbackslash file {##1}}
+\def\kbd##1{\realbackslash kbd {##1}}
+% These are redefined because @smartitalic wouldn't work inside xdef.
+\def\i##1{\realbackslash i {##1}}
+\def\cite##1{\realbackslash cite {##1}}
+\def\var##1{\realbackslash var {##1}}
+\def\emph##1{\realbackslash emph {##1}}
+\def\dfn##1{\realbackslash dfn {##1}}
+}
+
+\newcount\absseclevel % used to calculate proper heading level
+\newcount\secbase\secbase=0 % @raise/lowersections modify this count
+
+% @raisesections: treat @section as chapter, @subsection as section, etc.
+\def\raisesections{\global\advance\secbase by -1}
+\let\up=\raisesections % original BFox name
+
+% @lowersections: treat @chapter as section, @section as subsection, etc.
+\def\lowersections{\global\advance\secbase by 1}
+\let\down=\lowersections % original BFox name
+
+% Choose a numbered-heading macro
+% #1 is heading level if unmodified by @raisesections or @lowersections
+% #2 is text for heading
+\def\numhead#1#2{\absseclevel=\secbase\advance\absseclevel by #1
+\ifcase\absseclevel
+  \chapterzzz{#2}
+\or
+  \seczzz{#2}
+\or
+  \numberedsubseczzz{#2}
+\or
+  \numberedsubsubseczzz{#2}
+\else
+  \ifnum \absseclevel<0
+    \chapterzzz{#2}
+  \else
+    \numberedsubsubseczzz{#2}
+  \fi
+\fi
+}
+
+% like \numhead, but chooses appendix heading levels
+\def\apphead#1#2{\absseclevel=\secbase\advance\absseclevel by #1
+\ifcase\absseclevel
+  \appendixzzz{#2}
+\or
+  \appendixsectionzzz{#2}
+\or
+  \appendixsubseczzz{#2}
+\or
+  \appendixsubsubseczzz{#2}
+\else
+  \ifnum \absseclevel<0
+    \appendixzzz{#2}
+  \else
+    \appendixsubsubseczzz{#2}
+  \fi
+\fi
+}
+
+% like \numhead, but chooses numberless heading levels
+\def\unnmhead#1#2{\absseclevel=\secbase\advance\absseclevel by #1
+\ifcase\absseclevel
+  \unnumberedzzz{#2}
+\or
+  \unnumberedseczzz{#2}
+\or
+  \unnumberedsubseczzz{#2}
+\or
+  \unnumberedsubsubseczzz{#2}
+\else
+  \ifnum \absseclevel<0
+    \unnumberedzzz{#2}
+  \else
+    \unnumberedsubsubseczzz{#2}
+  \fi
+\fi
+}
+
+
+\def\thischaptername{No Chapter Title}
+\outer\def\chapter{\parsearg\chapteryyy}
+\def\chapteryyy #1{\numhead0{#1}} % normally numhead0 calls chapterzzz
+\def\chapterzzz #1{\seccheck{chapter}%
+\secno=0 \subsecno=0 \subsubsecno=0
+\global\advance \chapno by 1 \message{\putwordChapter \the\chapno}%
+\chapmacro {#1}{\the\chapno}%
+\gdef\thissection{#1}%
+\gdef\thischaptername{#1}%
+% We don't substitute the actual chapter name into \thischapter
+% because we don't want its macros evaluated now.
+\xdef\thischapter{\putwordChapter{} \the\chapno: \noexpand\thischaptername}%
+{\chapternofonts%
+\edef\temp{{\realbackslash chapentry {#1}{\the\chapno}{\noexpand\folio}}}%
+\escapechar=`\\%
+\write \contentsfile \temp  %
+\donoderef %
+\global\let\section = \numberedsec
+\global\let\subsection = \numberedsubsec
+\global\let\subsubsection = \numberedsubsubsec
+}}
+
+\outer\def\appendix{\parsearg\appendixyyy}
+\def\appendixyyy #1{\apphead0{#1}} % normally apphead0 calls appendixzzz
+\def\appendixzzz #1{\seccheck{appendix}%
+\secno=0 \subsecno=0 \subsubsecno=0
+\global\advance \appendixno by 1 \message{Appendix \appendixletter}%
+\chapmacro {#1}{\putwordAppendix{} \appendixletter}%
+\gdef\thissection{#1}%
+\gdef\thischaptername{#1}%
+\xdef\thischapter{\putwordAppendix{} \appendixletter: \noexpand\thischaptername}%
+{\chapternofonts%
+\edef\temp{{\realbackslash chapentry
+  {#1}{\putwordAppendix{} \appendixletter}{\noexpand\folio}}}%
+\escapechar=`\\%
+\write \contentsfile \temp  %
+\appendixnoderef %
+\global\let\section = \appendixsec
+\global\let\subsection = \appendixsubsec
+\global\let\subsubsection = \appendixsubsubsec
+}}
+
+% @centerchap is like @unnumbered, but the heading is centered.
+\outer\def\centerchap{\parsearg\centerchapyyy}
+\def\centerchapyyy #1{{\let\unnumbchapmacro=\centerchapmacro \unnumberedyyy{#1}}}
+
+\outer\def\top{\parsearg\unnumberedyyy}
+\outer\def\unnumbered{\parsearg\unnumberedyyy}
+\def\unnumberedyyy #1{\unnmhead0{#1}} % normally unnmhead0 calls unnumberedzzz
+\def\unnumberedzzz #1{\seccheck{unnumbered}%
+\secno=0 \subsecno=0 \subsubsecno=0
+%
+% This used to be simply \message{#1}, but TeX fully expands the
+% argument to \message.  Therefore, if #1 contained @-commands, TeX
+% expanded them.  For example, in `@unnumbered The @cite{Book}', TeX
+% expanded @cite (which turns out to cause errors because \cite is meant
+% to be executed, not expanded).
+%
+% Anyway, we don't want the fully-expanded definition of @cite to appear
+% as a result of the \message, we just want `@cite' itself.  We use
+% \the<toks register> to achieve this: TeX expands \the<toks> only once,
+% simply yielding the contents of the <toks register>.
+\toks0 = {#1}\message{(\the\toks0)}%
+%
+\unnumbchapmacro {#1}%
+\gdef\thischapter{#1}\gdef\thissection{#1}%
+{\chapternofonts%
+\edef\temp{{\realbackslash unnumbchapentry {#1}{\noexpand\folio}}}%
+\escapechar=`\\%
+\write \contentsfile \temp  %
+\unnumbnoderef %
+\global\let\section = \unnumberedsec
+\global\let\subsection = \unnumberedsubsec
+\global\let\subsubsection = \unnumberedsubsubsec
+}}
+
+\outer\def\numberedsec{\parsearg\secyyy}
+\def\secyyy #1{\numhead1{#1}} % normally calls seczzz
+\def\seczzz #1{\seccheck{section}%
+\subsecno=0 \subsubsecno=0 \global\advance \secno by 1 %
+\gdef\thissection{#1}\secheading {#1}{\the\chapno}{\the\secno}%
+{\chapternofonts%
+\edef\temp{{\realbackslash secentry %
+{#1}{\the\chapno}{\the\secno}{\noexpand\folio}}}%
+\escapechar=`\\%
+\write \contentsfile \temp %
+\donoderef %
+\penalty 10000 %
+}}
+
+\outer\def\appendixsection{\parsearg\appendixsecyyy}
+\outer\def\appendixsec{\parsearg\appendixsecyyy}
+\def\appendixsecyyy #1{\apphead1{#1}} % normally calls appendixsectionzzz
+\def\appendixsectionzzz #1{\seccheck{appendixsection}%
+\subsecno=0 \subsubsecno=0 \global\advance \secno by 1 %
+\gdef\thissection{#1}\secheading {#1}{\appendixletter}{\the\secno}%
+{\chapternofonts%
+\edef\temp{{\realbackslash secentry %
+{#1}{\appendixletter}{\the\secno}{\noexpand\folio}}}%
+\escapechar=`\\%
+\write \contentsfile \temp %
+\appendixnoderef %
+\penalty 10000 %
+}}
+
+\outer\def\unnumberedsec{\parsearg\unnumberedsecyyy}
+\def\unnumberedsecyyy #1{\unnmhead1{#1}} % normally calls unnumberedseczzz
+\def\unnumberedseczzz #1{\seccheck{unnumberedsec}%
+\plainsecheading {#1}\gdef\thissection{#1}%
+{\chapternofonts%
+\edef\temp{{\realbackslash unnumbsecentry{#1}{\noexpand\folio}}}%
+\escapechar=`\\%
+\write \contentsfile \temp %
+\unnumbnoderef %
+\penalty 10000 %
+}}
+
+\outer\def\numberedsubsec{\parsearg\numberedsubsecyyy}
+\def\numberedsubsecyyy #1{\numhead2{#1}} % normally calls numberedsubseczzz
+\def\numberedsubseczzz #1{\seccheck{subsection}%
+\gdef\thissection{#1}\subsubsecno=0 \global\advance \subsecno by 1 %
+\subsecheading {#1}{\the\chapno}{\the\secno}{\the\subsecno}%
+{\chapternofonts%
+\edef\temp{{\realbackslash subsecentry %
+{#1}{\the\chapno}{\the\secno}{\the\subsecno}{\noexpand\folio}}}%
+\escapechar=`\\%
+\write \contentsfile \temp %
+\donoderef %
+\penalty 10000 %
+}}
+
+\outer\def\appendixsubsec{\parsearg\appendixsubsecyyy}
+\def\appendixsubsecyyy #1{\apphead2{#1}} % normally calls appendixsubseczzz
+\def\appendixsubseczzz #1{\seccheck{appendixsubsec}%
+\gdef\thissection{#1}\subsubsecno=0 \global\advance \subsecno by 1 %
+\subsecheading {#1}{\appendixletter}{\the\secno}{\the\subsecno}%
+{\chapternofonts%
+\edef\temp{{\realbackslash subsecentry %
+{#1}{\appendixletter}{\the\secno}{\the\subsecno}{\noexpand\folio}}}%
+\escapechar=`\\%
+\write \contentsfile \temp %
+\appendixnoderef %
+\penalty 10000 %
+}}
+
+\outer\def\unnumberedsubsec{\parsearg\unnumberedsubsecyyy}
+\def\unnumberedsubsecyyy #1{\unnmhead2{#1}} %normally calls unnumberedsubseczzz
+\def\unnumberedsubseczzz #1{\seccheck{unnumberedsubsec}%
+\plainsecheading {#1}\gdef\thissection{#1}%
+{\chapternofonts%
+\edef\temp{{\realbackslash unnumbsubsecentry{#1}{\noexpand\folio}}}%
+\escapechar=`\\%
+\write \contentsfile \temp %
+\unnumbnoderef %
+\penalty 10000 %
+}}
+
+\outer\def\numberedsubsubsec{\parsearg\numberedsubsubsecyyy}
+\def\numberedsubsubsecyyy #1{\numhead3{#1}} % normally numberedsubsubseczzz
+\def\numberedsubsubseczzz #1{\seccheck{subsubsection}%
+\gdef\thissection{#1}\global\advance \subsubsecno by 1 %
+\subsubsecheading {#1}
+  {\the\chapno}{\the\secno}{\the\subsecno}{\the\subsubsecno}%
+{\chapternofonts%
+\edef\temp{{\realbackslash subsubsecentry %
+  {#1}
+  {\the\chapno}{\the\secno}{\the\subsecno}{\the\subsubsecno}
+  {\noexpand\folio}}}%
+\escapechar=`\\%
+\write \contentsfile \temp %
+\donoderef %
+\penalty 10000 %
+}}
+
+\outer\def\appendixsubsubsec{\parsearg\appendixsubsubsecyyy}
+\def\appendixsubsubsecyyy #1{\apphead3{#1}} % normally appendixsubsubseczzz
+\def\appendixsubsubseczzz #1{\seccheck{appendixsubsubsec}%
+\gdef\thissection{#1}\global\advance \subsubsecno by 1 %
+\subsubsecheading {#1}
+  {\appendixletter}{\the\secno}{\the\subsecno}{\the\subsubsecno}%
+{\chapternofonts%
+\edef\temp{{\realbackslash subsubsecentry{#1}%
+  {\appendixletter}
+  {\the\secno}{\the\subsecno}{\the\subsubsecno}{\noexpand\folio}}}%
+\escapechar=`\\%
+\write \contentsfile \temp %
+\appendixnoderef %
+\penalty 10000 %
+}}
+
+\outer\def\unnumberedsubsubsec{\parsearg\unnumberedsubsubsecyyy}
+\def\unnumberedsubsubsecyyy #1{\unnmhead3{#1}} %normally unnumberedsubsubseczzz
+\def\unnumberedsubsubseczzz #1{\seccheck{unnumberedsubsubsec}%
+\plainsecheading {#1}\gdef\thissection{#1}%
+{\chapternofonts%
+\edef\temp{{\realbackslash unnumbsubsubsecentry{#1}{\noexpand\folio}}}%
+\escapechar=`\\%
+\write \contentsfile \temp %
+\unnumbnoderef %
+\penalty 10000 %
+}}
+
+% These are variants which are not "outer", so they can appear in @ifinfo.
+% Actually, they should now be obsolete; ordinary section commands should work.
+\def\infotop{\parsearg\unnumberedzzz}
+\def\infounnumbered{\parsearg\unnumberedzzz}
+\def\infounnumberedsec{\parsearg\unnumberedseczzz}
+\def\infounnumberedsubsec{\parsearg\unnumberedsubseczzz}
+\def\infounnumberedsubsubsec{\parsearg\unnumberedsubsubseczzz}
+
+\def\infoappendix{\parsearg\appendixzzz}
+\def\infoappendixsec{\parsearg\appendixseczzz}
+\def\infoappendixsubsec{\parsearg\appendixsubseczzz}
+\def\infoappendixsubsubsec{\parsearg\appendixsubsubseczzz}
+
+\def\infochapter{\parsearg\chapterzzz}
+\def\infosection{\parsearg\sectionzzz}
+\def\infosubsection{\parsearg\subsectionzzz}
+\def\infosubsubsection{\parsearg\subsubsectionzzz}
+
+% These macros control what the section commands do, according
+% to what kind of chapter we are in (ordinary, appendix, or unnumbered).
+% Define them by default for a numbered chapter.
+\global\let\section = \numberedsec
+\global\let\subsection = \numberedsubsec
+\global\let\subsubsection = \numberedsubsubsec
+
+% Define @majorheading, @heading and @subheading
+
+% NOTE on use of \vbox for chapter headings, section headings, and
+% such:
+%	1) We use \vbox rather than the earlier \line to permit
+%	   overlong headings to fold.
+%	2) \hyphenpenalty is set to 10000 because hyphenation in a
+%	   heading is obnoxious; this forbids it.
+%       3) Likewise, headings look best if no \parindent is used, and
+%          if justification is not attempted.  Hence \raggedright.
+
+
+\def\majorheading{\parsearg\majorheadingzzz}
+\def\majorheadingzzz #1{%
+{\advance\chapheadingskip by 10pt \chapbreak }%
+{\chapfonts \vbox{\hyphenpenalty=10000\tolerance=5000
+                  \parindent=0pt\raggedright
+                  \rm #1\hfill}}\bigskip \par\penalty 200}
+
+\def\chapheading{\parsearg\chapheadingzzz}
+\def\chapheadingzzz #1{\chapbreak %
+{\chapfonts \vbox{\hyphenpenalty=10000\tolerance=5000
+                  \parindent=0pt\raggedright
+                  \rm #1\hfill}}\bigskip \par\penalty 200}
+
+\def\heading{\parsearg\secheadingi}
+
+\def\subheading{\parsearg\subsecheadingi}
+
+\def\subsubheading{\parsearg\subsubsecheadingi}
+
+% These macros generate a chapter, section, etc. heading only
+% (including whitespace, linebreaking, etc. around it),
+% given all the information in convenient, parsed form.
+
+%%% Args are the skip and penalty (usually negative)
+\def\dobreak#1#2{\par\ifdim\lastskip<#1\removelastskip\penalty#2\vskip#1\fi}
+
+\def\setchapterstyle #1 {\csname CHAPF#1\endcsname}
+
+%%% Define plain chapter starts, and page on/off switching for it
+% Parameter controlling skip before chapter headings (if needed)
+
+\newskip \chapheadingskip \chapheadingskip = 30pt plus 8pt minus 4pt
+
+\def\chapbreak{\dobreak \chapheadingskip {-4000}}
+\def\chappager{\par\vfill\supereject}
+\def\chapoddpage{\chappager \ifodd\pageno \else \hbox to 0pt{} \chappager\fi}
+
+\def\setchapternewpage #1 {\csname CHAPPAG#1\endcsname}
+
+\def\CHAPPAGoff{
+\global\let\pchapsepmacro=\chapbreak
+\global\let\pagealignmacro=\chappager}
+
+\def\CHAPPAGon{
+\global\let\pchapsepmacro=\chappager
+\global\let\pagealignmacro=\chappager
+\global\def\HEADINGSon{\HEADINGSsingle}}
+
+\def\CHAPPAGodd{
+\global\let\pchapsepmacro=\chapoddpage
+\global\let\pagealignmacro=\chapoddpage
+\global\def\HEADINGSon{\HEADINGSdouble}}
+
+\CHAPPAGon
+
+\def\CHAPFplain{
+\global\let\chapmacro=\chfplain
+\global\let\unnumbchapmacro=\unnchfplain
+\global\let\centerchapmacro=\centerchfplain}
+
+\def\chfplain #1#2{%
+  \pchapsepmacro
+  {%
+    \chapfonts \vbox{\hyphenpenalty=10000\tolerance=5000
+                     \parindent=0pt\raggedright
+                     \rm #2\enspace #1}%
+  }%
+  \bigskip
+  \penalty5000
+}
+
+\def\unnchfplain #1{%
+\pchapsepmacro %
+{\chapfonts \vbox{\hyphenpenalty=10000\tolerance=5000
+                  \parindent=0pt\raggedright
+                  \rm #1\hfill}}\bigskip \par\penalty 10000 %
+}
+
+\def\centerchfplain #1{%
+\pchapsepmacro %
+{\chapfonts \vbox{\hyphenpenalty=10000\tolerance=5000
+                  \parindent=0pt
+                  {\rm #1}\hfill}}\bigskip \par\penalty 10000 %
+}
+
+\CHAPFplain % The default
+
+\def\unnchfopen #1{%
+\chapoddpage {\chapfonts \vbox{\hyphenpenalty=10000\tolerance=5000
+                       \parindent=0pt\raggedright
+                       \rm #1\hfill}}\bigskip \par\penalty 10000 %
+}
+
+\def\chfopen #1#2{\chapoddpage {\chapfonts
+\vbox to 3in{\vfil \hbox to\hsize{\hfil #2} \hbox to\hsize{\hfil #1} \vfil}}%
+\par\penalty 5000 %
+}
+
+\def\centerchfopen #1{%
+\chapoddpage {\chapfonts \vbox{\hyphenpenalty=10000\tolerance=5000
+                       \parindent=0pt
+                       \hfill {\rm #1}\hfill}}\bigskip \par\penalty 10000 %
+}
+
+\def\CHAPFopen{
+\global\let\chapmacro=\chfopen
+\global\let\unnumbchapmacro=\unnchfopen
+\global\let\centerchapmacro=\centerchfopen}
+
+% Parameter controlling skip before section headings.
+
+\newskip \subsecheadingskip  \subsecheadingskip = 17pt plus 8pt minus 4pt
+\def\subsecheadingbreak{\dobreak \subsecheadingskip {-500}}
+
+\newskip \secheadingskip  \secheadingskip = 21pt plus 8pt minus 4pt
+\def\secheadingbreak{\dobreak \secheadingskip {-1000}}
+
+% @paragraphindent  is defined for the Info formatting commands only.
+\let\paragraphindent=\comment
+
+% Section fonts are the base font at magstep2, which produces
+% a size a bit more than 14 points in the default situation.
+
+\def\secheading #1#2#3{\secheadingi {#2.#3\enspace #1}}
+\def\plainsecheading #1{\secheadingi {#1}}
+\def\secheadingi #1{{\advance \secheadingskip by \parskip %
+\secheadingbreak}%
+{\secfonts \vbox{\hyphenpenalty=10000\tolerance=5000
+                 \parindent=0pt\raggedright
+                 \rm #1\hfill}}%
+\ifdim \parskip<10pt \kern 10pt\kern -\parskip\fi \penalty 10000 }
+
+
+% Subsection fonts are the base font at magstep1,
+% which produces a size of 12 points.
+
+\def\subsecheading #1#2#3#4{\subsecheadingi {#2.#3.#4\enspace #1}}
+\def\subsecheadingi #1{{\advance \subsecheadingskip by \parskip %
+\subsecheadingbreak}%
+{\subsecfonts \vbox{\hyphenpenalty=10000\tolerance=5000
+                     \parindent=0pt\raggedright
+                     \rm #1\hfill}}%
+\ifdim \parskip<10pt \kern 10pt\kern -\parskip\fi \penalty 10000 }
+
+\def\subsubsecfonts{\subsecfonts} % Maybe this should change:
+				  % Perhaps make sssec fonts scaled
+				  % magstep half
+\def\subsubsecheading #1#2#3#4#5{\subsubsecheadingi {#2.#3.#4.#5\enspace #1}}
+\def\subsubsecheadingi #1{{\advance \subsecheadingskip by \parskip %
+\subsecheadingbreak}%
+{\subsubsecfonts \vbox{\hyphenpenalty=10000\tolerance=5000
+                       \parindent=0pt\raggedright
+                       \rm #1\hfill}}%
+\ifdim \parskip<10pt \kern 10pt\kern -\parskip\fi \penalty 10000}
+
+
+\message{toc printing,}
+
+% Finish up the main text and prepare to read what we've written
+% to \contentsfile.
+
+\newskip\contentsrightmargin \contentsrightmargin=1in
+\def\startcontents#1{%
+   \pagealignmacro
+   \immediate\closeout \contentsfile
+   \ifnum \pageno>0
+      \pageno = -1		% Request roman numbered pages.
+   \fi
+   % Don't need to put `Contents' or `Short Contents' in the headline.
+   % It is abundantly clear what they are.
+   \unnumbchapmacro{#1}\def\thischapter{}%
+   \begingroup   		% Set up to handle contents files properly.
+      \catcode`\\=0  \catcode`\{=1  \catcode`\}=2  \catcode`\@=11
+      \catcode`\^=7 % to see ^^e4 as \"a etc. juha@piuha.ydi.vtt.fi
+      \raggedbottom             % Worry more about breakpoints than the bottom.
+      \advance\hsize by -\contentsrightmargin % Don't use the full line length.
+}
+
+
+% Normal (long) toc.
+\outer\def\contents{%
+   \startcontents{\putwordTableofContents}%
+      \input \jobname.toc
+   \endgroup
+   \vfill \eject
+}
+
+% And just the chapters.
+\outer\def\summarycontents{%
+   \startcontents{\putwordShortContents}%
+      %
+      \let\chapentry = \shortchapentry
+      \let\unnumbchapentry = \shortunnumberedentry
+      % We want a true roman here for the page numbers.
+      \secfonts
+      \let\rm=\shortcontrm \let\bf=\shortcontbf \let\sl=\shortcontsl
+      \rm
+      \advance\baselineskip by 1pt % Open it up a little.
+      \def\secentry ##1##2##3##4{}
+      \def\unnumbsecentry ##1##2{}
+      \def\subsecentry ##1##2##3##4##5{}
+      \def\unnumbsubsecentry ##1##2{}
+      \def\subsubsecentry ##1##2##3##4##5##6{}
+      \def\unnumbsubsubsecentry ##1##2{}
+      \input \jobname.toc
+   \endgroup
+   \vfill \eject
+}
+\let\shortcontents = \summarycontents
+
+% These macros generate individual entries in the table of contents.
+% The first argument is the chapter or section name.
+% The last argument is the page number.
+% The arguments in between are the chapter number, section number, ...
+
+% Chapter-level things, for both the long and short contents.
+\def\chapentry#1#2#3{\dochapentry{#2\labelspace#1}{#3}}
+
+% See comments in \dochapentry re vbox and related settings
+\def\shortchapentry#1#2#3{%
+  \tocentry{\shortchaplabel{#2}\labelspace #1}{\doshortpageno{#3}}%
+}
+
+% Typeset the label for a chapter or appendix for the short contents.
+% The arg is, e.g. `Appendix A' for an appendix, or `3' for a chapter.
+% We could simplify the code here by writing out an \appendixentry
+% command in the toc file for appendices, instead of using \chapentry
+% for both, but it doesn't seem worth it.
+\setbox0 = \hbox{\shortcontrm \putwordAppendix }
+\newdimen\shortappendixwidth \shortappendixwidth = \wd0
+
+\def\shortchaplabel#1{%
+  % We typeset #1 in a box of constant width, regardless of the text of
+  % #1, so the chapter titles will come out aligned.
+  \setbox0 = \hbox{#1}%
+  \dimen0 = \ifdim\wd0 > \shortappendixwidth \shortappendixwidth \else 0pt \fi
+  %
+  % This space should be plenty, since a single number is .5em, and the
+  % widest letter (M) is 1em, at least in the Computer Modern fonts.
+  % (This space doesn't include the extra space that gets added after
+  % the label; that gets put in in \shortchapentry above.)
+  \advance\dimen0 by 1.1em
+  \hbox to \dimen0{#1\hfil}%
+}
+
+\def\unnumbchapentry#1#2{\dochapentry{#1}{#2}}
+\def\shortunnumberedentry#1#2{\tocentry{#1}{\doshortpageno{#2}}}
+
+% Sections.
+\def\secentry#1#2#3#4{\dosecentry{#2.#3\labelspace#1}{#4}}
+\def\unnumbsecentry#1#2{\dosecentry{#1}{#2}}
+
+% Subsections.
+\def\subsecentry#1#2#3#4#5{\dosubsecentry{#2.#3.#4\labelspace#1}{#5}}
+\def\unnumbsubsecentry#1#2{\dosubsecentry{#1}{#2}}
+
+% And subsubsections.
+\def\subsubsecentry#1#2#3#4#5#6{%
+  \dosubsubsecentry{#2.#3.#4.#5\labelspace#1}{#6}}
+\def\unnumbsubsubsecentry#1#2{\dosubsubsecentry{#1}{#2}}
+
+
+% This parameter controls the indentation of the various levels.
+\newdimen\tocindent \tocindent = 3pc
+
+% Now for the actual typesetting. In all these, #1 is the text and #2 is the
+% page number.
+%
+% If the toc has to be broken over pages, we would want to be at chapters
+% if at all possible; hence the \penalty.
+\def\dochapentry#1#2{%
+   \penalty-300 \vskip\baselineskip
+   \begingroup
+     \chapentryfonts
+     \tocentry{#1}{\dopageno{#2}}%
+   \endgroup
+   \nobreak\vskip .25\baselineskip
+}
+
+\def\dosecentry#1#2{\begingroup
+  \secentryfonts \leftskip=\tocindent
+  \tocentry{#1}{\dopageno{#2}}%
+\endgroup}
+
+\def\dosubsecentry#1#2{\begingroup
+  \subsecentryfonts \leftskip=2\tocindent
+  \tocentry{#1}{\dopageno{#2}}%
+\endgroup}
+
+\def\dosubsubsecentry#1#2{\begingroup
+  \subsubsecentryfonts \leftskip=3\tocindent
+  \tocentry{#1}{\dopageno{#2}}%
+\endgroup}
+
+% Final typesetting of a toc entry; we use the same \entry macro as for
+% the index entries, but we want to suppress hyphenation here.  (We
+% can't do that in the \entry macro, since index entries might consist
+% of hyphenated-identifiers-that-do-not-fit-on-a-line-and-nothing-else.)
+%
+% \turnoffactive is for the sake of @" used for umlauts.
+\def\tocentry#1#2{\begingroup
+  \hyphenpenalty = 10000
+  \entry{\turnoffactive #1}{\turnoffactive #2}%
+\endgroup}
+
+% Space between chapter (or whatever) number and the title.
+\def\labelspace{\hskip1em \relax}
+
+\def\dopageno#1{{\rm #1}}
+\def\doshortpageno#1{{\rm #1}}
+
+\def\chapentryfonts{\secfonts \rm}
+\def\secentryfonts{\textfonts}
+\let\subsecentryfonts = \textfonts
+\let\subsubsecentryfonts = \textfonts
+
+
+\message{environments,}
+
+% Since these characters are used in examples, it should be an even number of
+% \tt widths. Each \tt character is 1en, so two makes it 1em.
+% Furthermore, these definitions must come after we define our fonts.
+\newbox\dblarrowbox    \newbox\longdblarrowbox
+\newbox\pushcharbox    \newbox\bullbox
+\newbox\equivbox       \newbox\errorbox
+
+\let\ptexequiv = \equiv
+
+%{\tentt
+%\global\setbox\dblarrowbox = \hbox to 1em{\hfil$\Rightarrow$\hfil}
+%\global\setbox\longdblarrowbox = \hbox to 1em{\hfil$\mapsto$\hfil}
+%\global\setbox\pushcharbox = \hbox to 1em{\hfil$\dashv$\hfil}
+%\global\setbox\equivbox = \hbox to 1em{\hfil$\ptexequiv$\hfil}
+% Adapted from the manmac format (p.420 of TeXbook)
+%\global\setbox\bullbox = \hbox to 1em{\kern.15em\vrule height .75ex width .85ex
+%                                      depth .1ex\hfil}
+%}
+
+\def\point{$\star$}
+
+\def\result{\leavevmode\raise.15ex\hbox to 1em{\hfil$\Rightarrow$\hfil}}
+\def\expansion{\leavevmode\raise.1ex\hbox to 1em{\hfil$\mapsto$\hfil}}
+\def\print{\leavevmode\lower.1ex\hbox to 1em{\hfil$\dashv$\hfil}}
+
+\def\equiv{\leavevmode\lower.1ex\hbox to 1em{\hfil$\ptexequiv$\hfil}}
+
+% Adapted from the TeXbook's \boxit.
+{\tentt \global\dimen0 = 3em}% Width of the box.
+\dimen2 = .55pt % Thickness of rules
+% The text. (`r' is open on the right, `e' somewhat less so on the left.)
+\setbox0 = \hbox{\kern-.75pt \tensf error\kern-1.5pt}
+
+\global\setbox\errorbox=\hbox to \dimen0{\hfil
+   \hsize = \dimen0 \advance\hsize by -5.8pt % Space to left+right.
+   \advance\hsize by -2\dimen2 % Rules.
+   \vbox{
+      \hrule height\dimen2
+      \hbox{\vrule width\dimen2 \kern3pt          % Space to left of text.
+         \vtop{\kern2.4pt \box0 \kern2.4pt}% Space above/below.
+         \kern3pt\vrule width\dimen2}% Space to right.
+      \hrule height\dimen2}
+    \hfil}
+
+% The @error{} command.
+\def\error{\leavevmode\lower.7ex\copy\errorbox}
+
+% @tex ... @end tex    escapes into raw Tex temporarily.
+% One exception: @ is still an escape character, so that @end tex works.
+% But \@ or @@ will get a plain tex @ character.
+
+\def\tex{\begingroup
+\catcode `\\=0 \catcode `\{=1 \catcode `\}=2
+\catcode `\$=3 \catcode `\&=4 \catcode `\#=6
+\catcode `\^=7 \catcode `\_=8 \catcode `\~=13 \let~=\tie
+\catcode `\%=14
+\catcode 43=12
+\catcode`\"=12
+\catcode`\==12
+\catcode`\|=12
+\catcode`\<=12
+\catcode`\>=12
+\escapechar=`\\
+%
+\let\~=\ptextilde
+\let\{=\ptexlbrace
+\let\}=\ptexrbrace
+\let\.=\ptexdot
+\let\*=\ptexstar
+\let\dots=\ptexdots
+\def\endldots{\mathinner{\ldots\ldots\ldots\ldots}}
+\def\enddots{\relax\ifmmode\endldots\else$\mathsurround=0pt \endldots\,$\fi}
+\def\@{@}%
+\let\bullet=\ptexbullet
+\let\b=\ptexb \let\c=\ptexc \let\i=\ptexi \let\t=\ptext \let\l=\ptexl
+\let\L=\ptexL
+%
+\let\Etex=\endgroup}
+
+% Define @lisp ... @endlisp.
+% @lisp does a \begingroup so it can rebind things,
+% including the definition of @endlisp (which normally is erroneous).
+
+% Amount to narrow the margins by for @lisp.
+\newskip\lispnarrowing \lispnarrowing=0.4in
+
+% This is the definition that ^^M gets inside @lisp, @example, and other
+% such environments.  \null is better than a space, since it doesn't
+% have any width.
+\def\lisppar{\null\endgraf}
+
+% Make each space character in the input produce a normal interword
+% space in the output.  Don't allow a line break at this space, as this
+% is used only in environments like @example, where each line of input
+% should produce a line of output anyway.
+%
+{\obeyspaces %
+\gdef\sepspaces{\obeyspaces\let =\tie}}
+
+% Define \obeyedspace to be our active space, whatever it is.  This is
+% for use in \parsearg.
+{\sepspaces%
+\global\let\obeyedspace= }
+
+% This space is always present above and below environments.
+\newskip\envskipamount \envskipamount = 0pt
+
+% Make spacing and below environment symmetrical.  We use \parskip here
+% to help in doing that, since in @example-like environments \parskip
+% is reset to zero; thus the \afterenvbreak inserts no space -- but the
+% start of the next paragraph will insert \parskip
+%
+\def\aboveenvbreak{{\advance\envskipamount by \parskip
+\endgraf \ifdim\lastskip<\envskipamount
+\removelastskip \penalty-50 \vskip\envskipamount \fi}}
+
+\let\afterenvbreak = \aboveenvbreak
+
+% \nonarrowing is a flag.  If "set", @lisp etc don't narrow margins.
+\let\nonarrowing=\relax
+
+%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
+% \cartouche: draw rectangle w/rounded corners around argument
+\font\circle=lcircle10
+\newdimen\circthick
+\newdimen\cartouter\newdimen\cartinner
+\newskip\normbskip\newskip\normpskip\newskip\normlskip
+\circthick=\fontdimen8\circle
+%
+\def\ctl{{\circle\char'013\hskip -6pt}}% 6pt from pl file: 1/2charwidth
+\def\ctr{{\hskip 6pt\circle\char'010}}
+\def\cbl{{\circle\char'012\hskip -6pt}}
+\def\cbr{{\hskip 6pt\circle\char'011}}
+\def\carttop{\hbox to \cartouter{\hskip\lskip
+	\ctl\leaders\hrule height\circthick\hfil\ctr
+	\hskip\rskip}}
+\def\cartbot{\hbox to \cartouter{\hskip\lskip
+	\cbl\leaders\hrule height\circthick\hfil\cbr
+	\hskip\rskip}}
+%
+\newskip\lskip\newskip\rskip
+
+\long\def\cartouche{%
+\begingroup
+	\lskip=\leftskip \rskip=\rightskip
+	\leftskip=0pt\rightskip=0pt %we want these *outside*.
+	\cartinner=\hsize \advance\cartinner by-\lskip
+		 	  \advance\cartinner by-\rskip
+	\cartouter=\hsize
+	\advance\cartouter by 18pt % allow for 3pt kerns on either
+%				     side, and for 6pt waste from
+%				     each corner char
+	\normbskip=\baselineskip \normpskip=\parskip \normlskip=\lineskip
+	% Flag to tell @lisp, etc., not to narrow margin.
+	\let\nonarrowing=\comment
+	\vbox\bgroup
+		\baselineskip=0pt\parskip=0pt\lineskip=0pt
+		\carttop
+		\hbox\bgroup
+			\hskip\lskip
+			\vrule\kern3pt
+			\vbox\bgroup
+				\hsize=\cartinner
+				\kern3pt
+				\begingroup
+					\baselineskip=\normbskip
+					\lineskip=\normlskip
+					\parskip=\normpskip
+					\vskip -\parskip
+\def\Ecartouche{%
+				\endgroup
+				\kern3pt
+			\egroup
+			\kern3pt\vrule
+			\hskip\rskip
+		\egroup
+		\cartbot
+	\egroup
+\endgroup
+}}
+
+
+% This macro is called at the beginning of all the @example variants,
+% inside a group.
+\def\nonfillstart{%
+  \aboveenvbreak
+  \inENV % This group ends at the end of the body
+  \hfuzz = 12pt % Don't be fussy
+  \sepspaces % Make spaces be word-separators rather than space tokens.
+  \singlespace
+  \let\par = \lisppar % don't ignore blank lines
+  \obeylines % each line of input is a line of output
+  \parskip = 0pt
+  \parindent = 0pt
+  \emergencystretch = 0pt % don't try to avoid overfull boxes
+  % @cartouche defines \nonarrowing to inhibit narrowing
+  % at next level down.
+  \ifx\nonarrowing\relax
+    \advance \leftskip by \lispnarrowing
+    \exdentamount=\lispnarrowing
+    \let\exdent=\nofillexdent
+    \let\nonarrowing=\relax
+  \fi
+}
+
+% To ending an @example-like environment, we first end the paragraph
+% (via \afterenvbreak's vertical glue), and then the group.  That way we
+% keep the zero \parskip that the environments set -- \parskip glue
+% will be inserted at the beginning of the next paragraph in the
+% document, after the environment.
+%
+\def\nonfillfinish{\afterenvbreak\endgroup}%
+
+% This macro is
+\def\lisp{\begingroup
+  \nonfillstart
+  \let\Elisp = \nonfillfinish
+  \tt
+  \rawbackslash % have \ input char produce \ char from current font
+  \gobble
+}
+
+% Define the \E... control sequence only if we are inside the
+% environment, so the error checking in \end will work.
+%
+% We must call \lisp last in the definition, since it reads the
+% return following the @example (or whatever) command.
+%
+\def\example{\begingroup \def\Eexample{\nonfillfinish\endgroup}\lisp}
+\def\smallexample{\begingroup \def\Esmallexample{\nonfillfinish\endgroup}\lisp}
+\def\smalllisp{\begingroup \def\Esmalllisp{\nonfillfinish\endgroup}\lisp}
+
+% @smallexample and @smalllisp.  This is not used unless the @smallbook
+% command is given.  Originally contributed by Pavel@xerox.
+%
+\def\smalllispx{\begingroup
+  \nonfillstart
+  \let\Esmalllisp = \nonfillfinish
+  \let\Esmallexample = \nonfillfinish
+  %
+  % Smaller interline space and fonts for small examples.
+  \setleading{10pt}%
+  \indexfonts \tt
+  \rawbackslash % make \ output the \ character from the current font (tt)
+  \gobble
+}
+
+% This is @display; same as @lisp except use roman font.
+%
+\def\display{\begingroup
+  \nonfillstart
+  \let\Edisplay = \nonfillfinish
+  \gobble
+}
+
+% This is @format; same as @display except don't narrow margins.
+%
+\def\format{\begingroup
+  \let\nonarrowing = t
+  \nonfillstart
+  \let\Eformat = \nonfillfinish
+  \gobble
+}
+
+% @flushleft (same as @format) and @flushright.
+%
+\def\flushleft{\begingroup
+  \let\nonarrowing = t
+  \nonfillstart
+  \let\Eflushleft = \nonfillfinish
+  \gobble
+}
+\def\flushright{\begingroup
+  \let\nonarrowing = t
+  \nonfillstart
+  \let\Eflushright = \nonfillfinish
+  \advance\leftskip by 0pt plus 1fill
+  \gobble}
+
+% @quotation does normal linebreaking (hence we can't use \nonfillstart)
+% and narrows the margins.
+%
+\def\quotation{%
+  \begingroup\inENV %This group ends at the end of the @quotation body
+  {\parskip=0pt \aboveenvbreak}% because \aboveenvbreak inserts \parskip
+  \singlespace
+  \parindent=0pt
+  % We have retained a nonzero parskip for the environment, since we're
+  % doing normal filling. So to avoid extra space below the environment...
+  \def\Equotation{\parskip = 0pt \nonfillfinish}%
+  %
+  % @cartouche defines \nonarrowing to inhibit narrowing at next level down.
+  \ifx\nonarrowing\relax
+    \advance\leftskip by \lispnarrowing
+    \advance\rightskip by \lispnarrowing
+    \exdentamount = \lispnarrowing
+    \let\nonarrowing = \relax
+  \fi
+}
+
+\message{defuns,}
+% Define formatter for defuns
+% First, allow user to change definition object font (\df) internally
+\def\setdeffont #1 {\csname DEF#1\endcsname}
+
+\newskip\defbodyindent \defbodyindent=.4in
+\newskip\defargsindent \defargsindent=50pt
+\newskip\deftypemargin \deftypemargin=12pt
+\newskip\deflastargmargin \deflastargmargin=18pt
+
+\newcount\parencount
+% define \functionparens, which makes ( and ) and & do special things.
+% \functionparens affects the group it is contained in.
+\def\activeparens{%
+\catcode`\(=\active \catcode`\)=\active \catcode`\&=\active
+\catcode`\[=\active \catcode`\]=\active}
+
+% Make control sequences which act like normal parenthesis chars.
+\let\lparen = ( \let\rparen = )
+
+{\activeparens % Now, smart parens don't turn on until &foo (see \amprm)
+
+% Be sure that we always have a definition for `(', etc.  For example,
+% if the fn name has parens in it, \boldbrax will not be in effect yet,
+% so TeX would otherwise complain about undefined control sequence.
+\global\let(=\lparen \global\let)=\rparen
+\global\let[=\lbrack \global\let]=\rbrack
+
+\gdef\functionparens{\boldbrax\let&=\amprm\parencount=0 }
+\gdef\boldbrax{\let(=\opnr\let)=\clnr\let[=\lbrb\let]=\rbrb}
+% This is used to turn on special parens
+% but make & act ordinary (given that it's active).
+\gdef\boldbraxnoamp{\let(=\opnr\let)=\clnr\let[=\lbrb\let]=\rbrb\let&=\ampnr}
+
+% Definitions of (, ) and & used in args for functions.
+% This is the definition of ( outside of all parentheses.
+\gdef\oprm#1 {{\rm\char`\(}#1 \bf \let(=\opnested %
+\global\advance\parencount by 1 }
+%
+% This is the definition of ( when already inside a level of parens.
+\gdef\opnested{\char`\(\global\advance\parencount by 1 }
+%
+\gdef\clrm{% Print a paren in roman if it is taking us back to depth of 0.
+% also in that case restore the outer-level definition of (.
+\ifnum \parencount=1 {\rm \char `\)}\sl \let(=\oprm \else \char `\) \fi
+\global\advance \parencount by -1 }
+% If we encounter &foo, then turn on ()-hacking afterwards
+\gdef\amprm#1 {{\rm\&#1}\let(=\oprm \let)=\clrm\ }
+%
+\gdef\normalparens{\boldbrax\let&=\ampnr}
+} % End of definition inside \activeparens
+%% These parens (in \boldbrax) actually are a little bolder than the
+%% contained text.  This is especially needed for [ and ]
+\def\opnr{{\sf\char`\(}} \def\clnr{{\sf\char`\)}} \def\ampnr{\&}
+\def\lbrb{{\bf\char`\[}} \def\rbrb{{\bf\char`\]}}
+
+% First, defname, which formats the header line itself.
+% #1 should be the function name.
+% #2 should be the type of definition, such as "Function".
+
+\def\defname #1#2{%
+% Get the values of \leftskip and \rightskip as they were
+% outside the @def...
+\dimen2=\leftskip
+\advance\dimen2 by -\defbodyindent
+\dimen3=\rightskip
+\advance\dimen3 by -\defbodyindent
+\noindent        %
+\setbox0=\hbox{\hskip \deflastargmargin{\rm #2}\hskip \deftypemargin}%
+\dimen0=\hsize \advance \dimen0 by -\wd0 % compute size for first line
+\dimen1=\hsize \advance \dimen1 by -\defargsindent %size for continuations
+\parshape 2 0in \dimen0 \defargsindent \dimen1     %
+% Now output arg 2 ("Function" or some such)
+% ending at \deftypemargin from the right margin,
+% but stuck inside a box of width 0 so it does not interfere with linebreaking
+{% Adjust \hsize to exclude the ambient margins,
+% so that \rightline will obey them.
+\advance \hsize by -\dimen2 \advance \hsize by -\dimen3
+\rlap{\rightline{{\rm #2}\hskip \deftypemargin}}}%
+% Make all lines underfull and no complaints:
+\tolerance=10000 \hbadness=10000
+\advance\leftskip by -\defbodyindent
+\exdentamount=\defbodyindent
+{\df #1}\enskip        % Generate function name
+}
+
+% Actually process the body of a definition
+% #1 should be the terminating control sequence, such as \Edefun.
+% #2 should be the "another name" control sequence, such as \defunx.
+% #3 should be the control sequence that actually processes the header,
+%    such as \defunheader.
+
+\def\defparsebody #1#2#3{\begingroup\inENV% Environment for definitionbody
+\medbreak %
+% Define the end token that this defining construct specifies
+% so that it will exit this group.
+\def#1{\endgraf\endgroup\medbreak}%
+\def#2{\begingroup\obeylines\activeparens\spacesplit#3}%
+\parindent=0in
+\advance\leftskip by \defbodyindent \advance \rightskip by \defbodyindent
+\exdentamount=\defbodyindent
+\begingroup %
+\catcode 61=\active % 61 is `='
+\obeylines\activeparens\spacesplit#3}
+
+\def\defmethparsebody #1#2#3#4 {\begingroup\inENV %
+\medbreak %
+% Define the end token that this defining construct specifies
+% so that it will exit this group.
+\def#1{\endgraf\endgroup\medbreak}%
+\def#2##1 {\begingroup\obeylines\activeparens\spacesplit{#3{##1}}}%
+\parindent=0in
+\advance\leftskip by \defbodyindent \advance \rightskip by \defbodyindent
+\exdentamount=\defbodyindent
+\begingroup\obeylines\activeparens\spacesplit{#3{#4}}}
+
+\def\defopparsebody #1#2#3#4#5 {\begingroup\inENV %
+\medbreak %
+% Define the end token that this defining construct specifies
+% so that it will exit this group.
+\def#1{\endgraf\endgroup\medbreak}%
+\def#2##1 ##2 {\def#4{##1}%
+\begingroup\obeylines\activeparens\spacesplit{#3{##2}}}%
+\parindent=0in
+\advance\leftskip by \defbodyindent \advance \rightskip by \defbodyindent
+\exdentamount=\defbodyindent
+\begingroup\obeylines\activeparens\spacesplit{#3{#5}}}
+
+% These parsing functions are similar to the preceding ones
+% except that they do not make parens into active characters.
+% These are used for "variables" since they have no arguments.
+
+\def\defvarparsebody #1#2#3{\begingroup\inENV% Environment for definitionbody
+\medbreak %
+% Define the end token that this defining construct specifies
+% so that it will exit this group.
+\def#1{\endgraf\endgroup\medbreak}%
+\def#2{\begingroup\obeylines\spacesplit#3}%
+\parindent=0in
+\advance\leftskip by \defbodyindent \advance \rightskip by \defbodyindent
+\exdentamount=\defbodyindent
+\begingroup %
+\catcode 61=\active %
+\obeylines\spacesplit#3}
+
+% This is used for \def{tp,vr}parsebody.  It could probably be used for
+% some of the others, too, with some judicious conditionals.
+% 
+\def\parsebodycommon#1#2#3{%
+  \begingroup\inENV %
+  \medbreak %
+  % Define the end token that this defining construct specifies
+  % so that it will exit this group.
+  \def#1{\endgraf\endgroup\medbreak}%
+  \def#2##1 {\begingroup\obeylines\spacesplit{#3{##1}}}%
+  \parindent=0in
+  \advance\leftskip by \defbodyindent \advance \rightskip by \defbodyindent
+  \exdentamount=\defbodyindent
+  \begingroup\obeylines
+}
+
+\def\defvrparsebody#1#2#3#4 {%
+  \parsebodycommon{#1}{#2}{#3}%
+  \spacesplit{#3{#4}}%
+}
+
+% This loses on `@deftp {Data Type} {struct termios}' -- it thinks the
+% type is just `struct', because we lose the braces in `{struct
+% termios}' when \spacesplit reads its undelimited argument.  Sigh.
+% \let\deftpparsebody=\defvrparsebody
+%
+% So, to get around this, we put \empty in with the type name.  That
+% way, TeX won't find exactly `{...}' as an undelimited argument, and
+% won't strip off the braces.
+%
+\def\deftpparsebody #1#2#3#4 {%
+  \parsebodycommon{#1}{#2}{#3}%
+  \spacesplit{\parsetpheaderline{#3{#4}}}\empty
+}
+
+% Fine, but then we have to eventually remove the \empty *and* the
+% braces (if any).  That's what this does, putting the result in \tptemp.
+% 
+\def\removeemptybraces\empty#1\relax{\def\tptemp{#1}}%
+
+% After \spacesplit has done its work, this is called -- #1 is the final
+% thing to call, #2 the type name (which starts with \empty), and #3
+% (which might be empty) the arguments.
+% 
+\def\parsetpheaderline#1#2#3{%
+  \removeemptybraces#2\relax
+  #1{\tptemp}{#3}%
+}%
+
+\def\defopvarparsebody #1#2#3#4#5 {\begingroup\inENV %
+\medbreak %
+% Define the end token that this defining construct specifies
+% so that it will exit this group.
+\def#1{\endgraf\endgroup\medbreak}%
+\def#2##1 ##2 {\def#4{##1}%
+\begingroup\obeylines\spacesplit{#3{##2}}}%
+\parindent=0in
+\advance\leftskip by \defbodyindent \advance \rightskip by \defbodyindent
+\exdentamount=\defbodyindent
+\begingroup\obeylines\spacesplit{#3{#5}}}
+
+% Split up #2 at the first space token.
+% call #1 with two arguments:
+%  the first is all of #2 before the space token,
+%  the second is all of #2 after that space token.
+% If #2 contains no space token, all of it is passed as the first arg
+% and the second is passed as empty.
+
+{\obeylines
+\gdef\spacesplit#1#2^^M{\endgroup\spacesplitfoo{#1}#2 \relax\spacesplitfoo}%
+\long\gdef\spacesplitfoo#1#2 #3#4\spacesplitfoo{%
+\ifx\relax #3%
+#1{#2}{}\else #1{#2}{#3#4}\fi}}
+
+% So much for the things common to all kinds of definitions.
+
+% Define @defun.
+
+% First, define the processing that is wanted for arguments of \defun
+% Use this to expand the args and terminate the paragraph they make up
+
+\def\defunargs #1{\functionparens \sl
+% Expand, preventing hyphenation at `-' chars.
+% Note that groups don't affect changes in \hyphenchar.
+\hyphenchar\tensl=0
+#1%
+\hyphenchar\tensl=45
+\ifnum\parencount=0 \else \errmessage{unbalanced parens in @def arguments}\fi%
+\interlinepenalty=10000
+\advance\rightskip by 0pt plus 1fil
+\endgraf\penalty 10000\vskip -\parskip\penalty 10000%
+}
+
+\def\deftypefunargs #1{%
+% Expand, preventing hyphenation at `-' chars.
+% Note that groups don't affect changes in \hyphenchar.
+% Use \boldbraxnoamp, not \functionparens, so that & is not special.
+\boldbraxnoamp
+\tclose{#1}% avoid \code because of side effects on active chars
+\interlinepenalty=10000
+\advance\rightskip by 0pt plus 1fil
+\endgraf\penalty 10000\vskip -\parskip\penalty 10000%
+}
+
+% Do complete processing of one @defun or @defunx line already parsed.
+
+% @deffn Command forward-char nchars
+
+\def\deffn{\defmethparsebody\Edeffn\deffnx\deffnheader}
+
+\def\deffnheader #1#2#3{\doind {fn}{\code{#2}}%
+\begingroup\defname {#2}{#1}\defunargs{#3}\endgroup %
+\catcode 61=\other % Turn off change made in \defparsebody
+}
+
+% @defun == @deffn Function
+
+\def\defun{\defparsebody\Edefun\defunx\defunheader}
+
+\def\defunheader #1#2{\doind {fn}{\code{#1}}% Make entry in function index
+\begingroup\defname {#1}{Function}%
+\defunargs {#2}\endgroup %
+\catcode 61=\other % Turn off change made in \defparsebody
+}
+
+% @deftypefun int foobar (int @var{foo}, float @var{bar})
+
+\def\deftypefun{\defparsebody\Edeftypefun\deftypefunx\deftypefunheader}
+
+% #1 is the data type.  #2 is the name and args.
+\def\deftypefunheader #1#2{\deftypefunheaderx{#1}#2 \relax}
+% #1 is the data type, #2 the name, #3 the args.
+\def\deftypefunheaderx #1#2 #3\relax{%
+\doind {fn}{\code{#2}}% Make entry in function index
+\begingroup\defname {\defheaderxcond#1\relax$$$#2}{Function}%
+\deftypefunargs {#3}\endgroup %
+\catcode 61=\other % Turn off change made in \defparsebody
+}
+
+% @deftypefn {Library Function} int foobar (int @var{foo}, float @var{bar})
+
+\def\deftypefn{\defmethparsebody\Edeftypefn\deftypefnx\deftypefnheader}
+
+% \defheaderxcond#1\relax$$$
+% puts #1 in @code, followed by a space, but does nothing if #1 is null.
+\def\defheaderxcond#1#2$$${\ifx#1\relax\else\code{#1#2} \fi}
+
+% #1 is the classification.  #2 is the data type.  #3 is the name and args.
+\def\deftypefnheader #1#2#3{\deftypefnheaderx{#1}{#2}#3 \relax}
+% #1 is the classification, #2 the data type, #3 the name, #4 the args.
+\def\deftypefnheaderx #1#2#3 #4\relax{%
+\doind {fn}{\code{#3}}% Make entry in function index
+\begingroup
+\normalparens % notably, turn off `&' magic, which prevents
+%               at least some C++ text from working
+\defname {\defheaderxcond#2\relax$$$#3}{#1}%
+\deftypefunargs {#4}\endgroup %
+\catcode 61=\other % Turn off change made in \defparsebody
+}
+
+% @defmac == @deffn Macro
+
+\def\defmac{\defparsebody\Edefmac\defmacx\defmacheader}
+
+\def\defmacheader #1#2{\doind {fn}{\code{#1}}% Make entry in function index
+\begingroup\defname {#1}{Macro}%
+\defunargs {#2}\endgroup %
+\catcode 61=\other % Turn off change made in \defparsebody
+}
+
+% @defspec == @deffn Special Form
+
+\def\defspec{\defparsebody\Edefspec\defspecx\defspecheader}
+
+\def\defspecheader #1#2{\doind {fn}{\code{#1}}% Make entry in function index
+\begingroup\defname {#1}{Special Form}%
+\defunargs {#2}\endgroup %
+\catcode 61=\other % Turn off change made in \defparsebody
+}
+
+% This definition is run if you use @defunx
+% anywhere other than immediately after a @defun or @defunx.
+
+\def\deffnx #1 {\errmessage{@deffnx in invalid context}}
+\def\defunx #1 {\errmessage{@defunx in invalid context}}
+\def\defmacx #1 {\errmessage{@defmacx in invalid context}}
+\def\defspecx #1 {\errmessage{@defspecx in invalid context}}
+\def\deftypefnx #1 {\errmessage{@deftypefnx in invalid context}}
+\def\deftypeunx #1 {\errmessage{@deftypeunx in invalid context}}
+
+% @defmethod, and so on
+
+% @defop {Funny Method} foo-class frobnicate argument
+
+\def\defop #1 {\def\defoptype{#1}%
+\defopparsebody\Edefop\defopx\defopheader\defoptype}
+
+\def\defopheader #1#2#3{%
+\dosubind {fn}{\code{#2}}{on #1}% Make entry in function index
+\begingroup\defname {#2}{\defoptype{} on #1}%
+\defunargs {#3}\endgroup %
+}
+
+% @defmethod == @defop Method
+
+\def\defmethod{\defmethparsebody\Edefmethod\defmethodx\defmethodheader}
+
+\def\defmethodheader #1#2#3{%
+\dosubind {fn}{\code{#2}}{on #1}% entry in function index
+\begingroup\defname {#2}{Method on #1}%
+\defunargs {#3}\endgroup %
+}
+
+% @defcv {Class Option} foo-class foo-flag
+
+\def\defcv #1 {\def\defcvtype{#1}%
+\defopvarparsebody\Edefcv\defcvx\defcvarheader\defcvtype}
+
+\def\defcvarheader #1#2#3{%
+\dosubind {vr}{\code{#2}}{of #1}% Make entry in var index
+\begingroup\defname {#2}{\defcvtype{} of #1}%
+\defvarargs {#3}\endgroup %
+}
+
+% @defivar == @defcv {Instance Variable}
+
+\def\defivar{\defvrparsebody\Edefivar\defivarx\defivarheader}
+
+\def\defivarheader #1#2#3{%
+\dosubind {vr}{\code{#2}}{of #1}% Make entry in var index
+\begingroup\defname {#2}{Instance Variable of #1}%
+\defvarargs {#3}\endgroup %
+}
+
+% These definitions are run if you use @defmethodx, etc.,
+% anywhere other than immediately after a @defmethod, etc.
+
+\def\defopx #1 {\errmessage{@defopx in invalid context}}
+\def\defmethodx #1 {\errmessage{@defmethodx in invalid context}}
+\def\defcvx #1 {\errmessage{@defcvx in invalid context}}
+\def\defivarx #1 {\errmessage{@defivarx in invalid context}}
+
+% Now @defvar
+
+% First, define the processing that is wanted for arguments of @defvar.
+% This is actually simple: just print them in roman.
+% This must expand the args and terminate the paragraph they make up
+\def\defvarargs #1{\normalparens #1%
+\interlinepenalty=10000
+\endgraf\penalty 10000\vskip -\parskip\penalty 10000}
+
+% @defvr Counter foo-count
+
+\def\defvr{\defvrparsebody\Edefvr\defvrx\defvrheader}
+
+\def\defvrheader #1#2#3{\doind {vr}{\code{#2}}%
+\begingroup\defname {#2}{#1}\defvarargs{#3}\endgroup}
+
+% @defvar == @defvr Variable
+
+\def\defvar{\defvarparsebody\Edefvar\defvarx\defvarheader}
+
+\def\defvarheader #1#2{\doind {vr}{\code{#1}}% Make entry in var index
+\begingroup\defname {#1}{Variable}%
+\defvarargs {#2}\endgroup %
+}
+
+% @defopt == @defvr {User Option}
+
+\def\defopt{\defvarparsebody\Edefopt\defoptx\defoptheader}
+
+\def\defoptheader #1#2{\doind {vr}{\code{#1}}% Make entry in var index
+\begingroup\defname {#1}{User Option}%
+\defvarargs {#2}\endgroup %
+}
+
+% @deftypevar int foobar
+
+\def\deftypevar{\defvarparsebody\Edeftypevar\deftypevarx\deftypevarheader}
+
+% #1 is the data type.  #2 is the name.
+\def\deftypevarheader #1#2{%
+\doind {vr}{\code{#2}}% Make entry in variables index
+\begingroup\defname {\defheaderxcond#1\relax$$$#2}{Variable}%
+\interlinepenalty=10000
+\endgraf\penalty 10000\vskip -\parskip\penalty 10000
+\endgroup}
+
+% @deftypevr {Global Flag} int enable
+
+\def\deftypevr{\defvrparsebody\Edeftypevr\deftypevrx\deftypevrheader}
+
+\def\deftypevrheader #1#2#3{\doind {vr}{\code{#3}}%
+\begingroup\defname {\defheaderxcond#2\relax$$$#3}{#1}
+\interlinepenalty=10000
+\endgraf\penalty 10000\vskip -\parskip\penalty 10000
+\endgroup}
+
+% This definition is run if you use @defvarx
+% anywhere other than immediately after a @defvar or @defvarx.
+
+\def\defvrx #1 {\errmessage{@defvrx in invalid context}}
+\def\defvarx #1 {\errmessage{@defvarx in invalid context}}
+\def\defoptx #1 {\errmessage{@defoptx in invalid context}}
+\def\deftypevarx #1 {\errmessage{@deftypevarx in invalid context}}
+\def\deftypevrx #1 {\errmessage{@deftypevrx in invalid context}}
+
+% Now define @deftp
+% Args are printed in bold, a slight difference from @defvar.
+
+\def\deftpargs #1{\bf \defvarargs{#1}}
+
+% @deftp Class window height width ...
+
+\def\deftp{\deftpparsebody\Edeftp\deftpx\deftpheader}
+
+\def\deftpheader #1#2#3{\doind {tp}{\code{#2}}%
+\begingroup\defname {#2}{#1}\deftpargs{#3}\endgroup}
+
+% This definition is run if you use @deftpx, etc
+% anywhere other than immediately after a @deftp, etc.
+
+\def\deftpx #1 {\errmessage{@deftpx in invalid context}}
+
+\message{cross reference,}
+% Define cross-reference macros
+\newwrite \auxfile
+
+\newif\ifhavexrefs  % True if xref values are known.
+\newif\ifwarnedxrefs  % True if we warned once that they aren't known.
+
+% \setref{foo} defines a cross-reference point named foo.
+
+\def\setref#1{%
+\dosetq{#1-title}{Ytitle}%
+\dosetq{#1-pg}{Ypagenumber}%
+\dosetq{#1-snt}{Ysectionnumberandtype}}
+
+\def\unnumbsetref#1{%
+\dosetq{#1-title}{Ytitle}%
+\dosetq{#1-pg}{Ypagenumber}%
+\dosetq{#1-snt}{Ynothing}}
+
+\def\appendixsetref#1{%
+\dosetq{#1-title}{Ytitle}%
+\dosetq{#1-pg}{Ypagenumber}%
+\dosetq{#1-snt}{Yappendixletterandtype}}
+
+% \xref, \pxref, and \ref generate cross-references to specified points.
+% For \xrefX, #1 is the node name, #2 the name of the Info
+% cross-reference, #3 the printed node name, #4 the name of the Info
+% file, #5 the name of the printed manual.  All but the node name can be
+% omitted.
+%
+\def\pxref#1{\putwordsee{} \xrefX[#1,,,,,,,]}
+\def\xref#1{\putwordSee{} \xrefX[#1,,,,,,,]}
+\def\ref#1{\xrefX[#1,,,,,,,]}
+\def\xrefX[#1,#2,#3,#4,#5,#6]{\begingroup
+  \def\printedmanual{\ignorespaces #5}%
+  \def\printednodename{\ignorespaces #3}%
+  \setbox1=\hbox{\printedmanual}%
+  \setbox0=\hbox{\printednodename}%
+  \ifdim \wd0 = 0pt
+    % No printed node name was explicitly given.
+    \expandafter\ifx\csname SETxref-automatic-section-title\endcsname\relax
+      % Use the node name inside the square brackets.
+      \def\printednodename{\ignorespaces #1}%
+    \else
+      % Use the actual chapter/section title appear inside
+      % the square brackets.  Use the real section title if we have it.
+      \ifdim \wd1>0pt%
+        % It is in another manual, so we don't have it.
+        \def\printednodename{\ignorespaces #1}%
+      \else
+        \ifhavexrefs
+          % We know the real title if we have the xref values.
+          \def\printednodename{\refx{#1-title}{}}%
+        \else
+          % Otherwise just copy the Info node name.
+          \def\printednodename{\ignorespaces #1}%
+        \fi%
+      \fi
+    \fi
+  \fi
+  %
+  % If we use \unhbox0 and \unhbox1 to print the node names, TeX does not
+  % insert empty discretionaries after hyphens, which means that it will
+  % not find a line break at a hyphen in a node names.  Since some manuals
+  % are best written with fairly long node names, containing hyphens, this
+  % is a loss.  Therefore, we give the text of the node name again, so it
+  % is as if TeX is seeing it for the first time.
+  \ifdim \wd1 > 0pt
+    \putwordsection{} ``\printednodename'' in \cite{\printedmanual}%
+  \else
+    % _ (for example) has to be the character _ for the purposes of the
+    % control sequence corresponding to the node, but it has to expand
+    % into the usual \leavevmode...\vrule stuff for purposes of
+    % printing. So we \turnoffactive for the \refx-snt, back on for the
+    % printing, back off for the \refx-pg.
+    {\turnoffactive \refx{#1-snt}{}}%
+    \space [\printednodename],\space
+    \turnoffactive \putwordpage\tie\refx{#1-pg}{}%
+  \fi
+\endgroup}
+
+% \dosetq is the interface for calls from other macros
+
+% Use \turnoffactive so that punctuation chars such as underscore
+% work in node names.
+\def\dosetq #1#2{{\let\folio=0 \turnoffactive \auxhat%
+\edef\next{\write\auxfile{\internalsetq {#1}{#2}}}%
+\next}}
+
+% \internalsetq {foo}{page} expands into
+% CHARACTERS 'xrdef {foo}{...expansion of \Ypage...}
+% When the aux file is read, ' is the escape character
+
+\def\internalsetq #1#2{'xrdef {#1}{\csname #2\endcsname}}
+
+% Things to be expanded by \internalsetq
+
+\def\Ypagenumber{\folio}
+
+\def\Ytitle{\thissection}
+
+\def\Ynothing{}
+
+\def\Ysectionnumberandtype{%
+\ifnum\secno=0 \putwordChapter\xreftie\the\chapno %
+\else \ifnum \subsecno=0 \putwordSection\xreftie\the\chapno.\the\secno %
+\else \ifnum \subsubsecno=0 %
+\putwordSection\xreftie\the\chapno.\the\secno.\the\subsecno %
+\else %
+\putwordSection\xreftie\the\chapno.\the\secno.\the\subsecno.\the\subsubsecno %
+\fi \fi \fi }
+
+\def\Yappendixletterandtype{%
+\ifnum\secno=0 \putwordAppendix\xreftie'char\the\appendixno{}%
+\else \ifnum \subsecno=0 \putwordSection\xreftie'char\the\appendixno.\the\secno %
+\else \ifnum \subsubsecno=0 %
+\putwordSection\xreftie'char\the\appendixno.\the\secno.\the\subsecno %
+\else %
+\putwordSection\xreftie'char\the\appendixno.\the\secno.\the\subsecno.\the\subsubsecno %
+\fi \fi \fi }
+
+\gdef\xreftie{'tie}
+
+% Use TeX 3.0's \inputlineno to get the line number, for better error
+% messages, but if we're using an old version of TeX, don't do anything.
+%
+\ifx\inputlineno\thisisundefined
+  \let\linenumber = \empty % Non-3.0.
+\else
+  \def\linenumber{\the\inputlineno:\space}
+\fi
+
+% Define \refx{NAME}{SUFFIX} to reference a cross-reference string named NAME.
+% If its value is nonempty, SUFFIX is output afterward.
+
+\def\refx#1#2{%
+  \expandafter\ifx\csname X#1\endcsname\relax
+    % If not defined, say something at least.
+    $\langle$un\-de\-fined$\rangle$%
+    \ifhavexrefs
+      \message{\linenumber Undefined cross reference `#1'.}%
+    \else
+      \ifwarnedxrefs\else
+        \global\warnedxrefstrue
+        \message{Cross reference values unknown; you must run TeX again.}%
+      \fi
+    \fi
+  \else
+    % It's defined, so just use it.
+    \csname X#1\endcsname
+  \fi
+  #2% Output the suffix in any case.
+}
+
+% Read the last existing aux file, if any.  No error if none exists.
+
+% This is the macro invoked by entries in the aux file.
+\def\xrdef #1#2{
+{\catcode`\'=\other\expandafter \gdef \csname X#1\endcsname {#2}}}
+
+\def\readauxfile{%
+\begingroup
+\catcode `\^^@=\other
+\catcode `\=\other
+\catcode `\=\other
+\catcode `\^^C=\other
+\catcode `\^^D=\other
+\catcode `\^^E=\other
+\catcode `\^^F=\other
+\catcode `\^^G=\other
+\catcode `\^^H=\other
+\catcode `\=\other
+\catcode `\^^L=\other
+\catcode `\=\other
+\catcode `\=\other
+\catcode `\=\other
+\catcode `\=\other
+\catcode `\=\other
+\catcode `\=\other
+\catcode `\=\other
+\catcode `\=\other
+\catcode `\=\other
+\catcode `\=\other
+\catcode `\=\other
+\catcode `\=\other
+\catcode 26=\other
+\catcode `\^^[=\other
+\catcode `\^^\=\other
+\catcode `\^^]=\other
+\catcode `\^^^=\other
+\catcode `\^^_=\other
+\catcode `\@=\other
+\catcode `\^=\other
+\catcode `\~=\other
+\catcode `\[=\other
+\catcode `\]=\other
+\catcode`\"=\other
+\catcode`\_=\other
+\catcode`\|=\other
+\catcode`\<=\other
+\catcode`\>=\other
+\catcode `\$=\other
+\catcode `\#=\other
+\catcode `\&=\other
+% `\+ does not work, so use 43.
+\catcode 43=\other
+% Make the characters 128-255 be printing characters
+{%
+  \count 1=128
+  \def\loop{%
+    \catcode\count 1=\other
+    \advance\count 1 by 1
+    \ifnum \count 1<256 \loop \fi
+  }%
+}%
+% the aux file uses ' as the escape.
+% Turn off \ as an escape so we do not lose on
+% entries which were dumped with control sequences in their names.
+% For example, 'xrdef {$\leq $-fun}{page ...} made by @defun ^^
+% Reference to such entries still does not work the way one would wish,
+% but at least they do not bomb out when the aux file is read in.
+\catcode `\{=1 \catcode `\}=2
+\catcode `\%=\other
+\catcode `\'=0
+\catcode`\^=7 % to make ^^e4 etc usable in xref tags 
+\catcode `\\=\other
+\openin 1 \jobname.aux
+\ifeof 1 \else \closein 1 \input \jobname.aux \global\havexrefstrue
+\global\warnedobstrue
+\fi
+% Open the new aux file.  Tex will close it automatically at exit.
+\openout \auxfile=\jobname.aux
+\endgroup}
+
+
+% Footnotes.
+
+\newcount \footnoteno
+
+% The trailing space in the following definition for supereject is
+% vital for proper filling; pages come out unaligned when you do a
+% pagealignmacro call if that space before the closing brace is
+% removed.
+\def\supereject{\par\penalty -20000\footnoteno =0 }
+
+% @footnotestyle is meaningful for info output only..
+\let\footnotestyle=\comment
+
+\let\ptexfootnote=\footnote
+
+{\catcode `\@=11
+%
+% Auto-number footnotes.  Otherwise like plain.
+\gdef\footnote{%
+  \global\advance\footnoteno by \@ne
+  \edef\thisfootno{$^{\the\footnoteno}$}%
+  %
+  % In case the footnote comes at the end of a sentence, preserve the
+  % extra spacing after we do the footnote number.
+  \let\@sf\empty
+  \ifhmode\edef\@sf{\spacefactor\the\spacefactor}\/\fi
+  %
+  % Remove inadvertent blank space before typesetting the footnote number.
+  \unskip
+  \thisfootno\@sf
+  \footnotezzz
+}%
+
+% Don't bother with the trickery in plain.tex to not require the
+% footnote text as a parameter.  Our footnotes don't need to be so general.
+%
+\long\gdef\footnotezzz#1{\insert\footins{%
+  % We want to typeset this text as a normal paragraph, even if the
+  % footnote reference occurs in (for example) a display environment.
+  % So reset some parameters.
+  \interlinepenalty\interfootnotelinepenalty
+  \splittopskip\ht\strutbox % top baseline for broken footnotes
+  \splitmaxdepth\dp\strutbox
+  \floatingpenalty\@MM
+  \leftskip\z@skip
+  \rightskip\z@skip
+  \spaceskip\z@skip
+  \xspaceskip\z@skip
+  \parindent\defaultparindent
+  %
+  % Hang the footnote text off the number.
+  \hang
+  \textindent{\thisfootno}%
+  %
+  % Don't crash into the line above the footnote text.  Since this
+  % expands into a box, it must come within the paragraph, lest it
+  % provide a place where TeX can split the footnote.
+  \footstrut
+  #1\strut}%
+}
+
+}%end \catcode `\@=11
+
+% Set the baselineskip to #1, and the lineskip and strut size
+% correspondingly.  There is no deep meaning behind these magic numbers
+% used as factors; they just match (closely enough) what Knuth defined.
+%
+\def\lineskipfactor{.08333}
+\def\strutheightpercent{.70833}
+\def\strutdepthpercent {.29167}
+%
+\def\setleading#1{%
+  \normalbaselineskip = #1\relax
+  \normallineskip = \lineskipfactor\normalbaselineskip
+  \normalbaselines
+  \setbox\strutbox =\hbox{%
+    \vrule width0pt height\strutheightpercent\baselineskip
+                    depth \strutdepthpercent \baselineskip
+  }%
+}
+
+% @| inserts a changebar to the left of the current line.  It should
+% surround any changed text.  This approach does *not* work if the
+% change spans more than two lines of output.  To handle that, we would
+% have adopt a much more difficult approach (putting marks into the main
+% vertical list for the beginning and end of each change).
+%
+\def\|{%
+  % \vadjust can only be used in horizontal mode.
+  \leavevmode
+  %
+  % Append this vertical mode material after the current line in the output.
+  \vadjust{%
+    % We want to insert a rule with the height and depth of the current
+    % leading; that is exactly what \strutbox is supposed to record.
+    \vskip-\baselineskip
+    %
+    % \vadjust-items are inserted at the left edge of the type.  So
+    % the \llap here moves out into the left-hand margin.
+    \llap{%
+      %
+      % For a thicker or thinner bar, change the `1pt'.
+      \vrule height\baselineskip width1pt
+      %
+      % This is the space between the bar and the text.
+      \hskip 12pt
+    }%
+  }%
+}
+
+% For a final copy, take out the rectangles
+% that mark overfull boxes (in case you have decided
+% that the text looks ok even though it passes the margin).
+%
+\def\finalout{\overfullrule=0pt}
+
+
+% End of control word definitions.
+
+\message{and turning on texinfo input format.}
+
+\def\openindices{%
+   \newindex{cp}%
+   \newcodeindex{fn}%
+   \newcodeindex{vr}%
+   \newcodeindex{tp}%
+   \newcodeindex{ky}%
+   \newcodeindex{pg}%
+}
+
+% Set some numeric style parameters, for 8.5 x 11 format.
+
+%\hsize = 6.5in
+\newdimen\defaultparindent \defaultparindent = 15pt
+\parindent = \defaultparindent
+\parskip 18pt plus 1pt
+\setleading{15pt}
+\advance\topskip by 1.2cm
+
+% Prevent underfull vbox error messages.
+\vbadness=10000
+
+% Following George Bush, just get rid of widows and orphans.
+\widowpenalty=10000
+\clubpenalty=10000
+
+% Use TeX 3.0's \emergencystretch to help line breaking, but if we're
+% using an old version of TeX, don't do anything.  We want the amount of
+% stretch added to depend on the line length, hence the dependence on
+% \hsize.  This makes it come to about 9pt for the 8.5x11 format.
+%
+\ifx\emergencystretch\thisisundefined
+  % Allow us to assign to \emergencystretch anyway.
+  \def\emergencystretch{\dimen0}%
+\else
+  \emergencystretch = \hsize
+  \divide\emergencystretch by 45
+\fi
+
+% Use @smallbook to reset parameters for 7x9.5 format  (or else 7x9.25)
+\def\smallbook{
+
+% These values for secheadingskip and subsecheadingskip are
+% experiments.  RJC 7 Aug 1992
+\global\secheadingskip = 17pt plus 6pt minus 3pt
+\global\subsecheadingskip = 14pt plus 6pt minus 3pt
+
+\global\lispnarrowing = 0.3in
+\setleading{12pt}
+\advance\topskip by -1cm
+\global\parskip 3pt plus 1pt
+\global\hsize = 5in
+\global\vsize=7.5in
+\global\tolerance=700
+\global\hfuzz=1pt
+\global\contentsrightmargin=0pt
+\global\deftypemargin=0pt
+\global\defbodyindent=.5cm
+
+\global\pagewidth=\hsize
+\global\pageheight=\vsize
+
+\global\let\smalllisp=\smalllispx
+\global\let\smallexample=\smalllispx
+\global\def\Esmallexample{\Esmalllisp}
+}
+
+% Use @afourpaper to print on European A4 paper.
+\def\afourpaper{
+\global\tolerance=700
+\global\hfuzz=1pt
+\setleading{12pt}
+\global\parskip 15pt plus 1pt
+
+\global\vsize= 53\baselineskip
+\advance\vsize by \topskip
+%\global\hsize=   5.85in     % A4 wide 10pt
+\global\hsize=  6.5in
+\global\outerhsize=\hsize
+\global\advance\outerhsize by 0.5in
+\global\outervsize=\vsize
+\global\advance\outervsize by 0.6in
+
+\global\pagewidth=\hsize
+\global\pageheight=\vsize
+}
+
+% Allow control of the text dimensions.  Parameters in order: textheight;
+% textwidth; voffset; hoffset; binding offset; topskip.
+% All require a dimension;
+% header is additional; added length extends the bottom of the page.
+
+\def\changepagesizes#1#2#3#4#5#6{
+ \global\vsize= #1
+ \global\topskip= #6
+ \advance\vsize by \topskip
+ \global\voffset= #3
+ \global\hsize= #2
+ \global\outerhsize=\hsize
+ \global\advance\outerhsize by 0.5in
+ \global\outervsize=\vsize
+ \global\advance\outervsize by 0.6in
+ \global\pagewidth=\hsize
+ \global\pageheight=\vsize
+ \global\normaloffset= #4
+ \global\bindingoffset= #5}
+
+% A specific text layout, 24x15cm overall, intended for A4 paper.  Top margin
+% 29mm, hence bottom margin 28mm, nominal side margin 3cm.
+\def\afourlatex
+        {\global\tolerance=700
+        \global\hfuzz=1pt
+        \setleading{12pt}
+        \global\parskip 15pt plus 1pt
+        \advance\baselineskip by 1.6pt
+        \changepagesizes{237mm}{150mm}{3.6mm}{3.6mm}{3mm}{7mm}
+        }
+
+% Use @afourwide to print on European A4 paper in wide format.
+\def\afourwide{\afourpaper
+\changepagesizes{9.5in}{6.5in}{\hoffset}{\normaloffset}{\bindingoffset}{7mm}}
+
+% Define macros to output various characters with catcode for normal text.
+\catcode`\"=\other
+\catcode`\~=\other
+\catcode`\^=\other
+\catcode`\_=\other
+\catcode`\|=\other
+\catcode`\<=\other
+\catcode`\>=\other
+\catcode`\+=\other
+\def\normaldoublequote{"}
+\def\normaltilde{~}
+\def\normalcaret{^}
+\def\normalunderscore{_}
+\def\normalverticalbar{|}
+\def\normalless{<}
+\def\normalgreater{>}
+\def\normalplus{+}
+
+% This macro is used to make a character print one way in ttfont
+% where it can probably just be output, and another way in other fonts,
+% where something hairier probably needs to be done.
+%
+% #1 is what to print if we are indeed using \tt; #2 is what to print
+% otherwise.  Since all the Computer Modern typewriter fonts have zero
+% interword stretch (and shrink), and it is reasonable to expect all
+% typewriter fonts to have this, we can check that font parameter.
+%
+\def\ifusingtt#1#2{\ifdim \fontdimen3\the\font=0pt #1\else #2\fi}
+
+% Turn off all special characters except @
+% (and those which the user can use as if they were ordinary).
+% Most of these we simply print from the \tt font, but for some, we can
+% use math or other variants that look better in normal text.
+
+\catcode`\"=\active
+\def\activedoublequote{{\tt \char '042}}
+\let"=\activedoublequote
+\catcode`\~=\active
+\def~{{\tt \char '176}}
+\chardef\hat=`\^
+\catcode`\^=\active
+\def\auxhat{\def^{'hat}}
+\def^{{\tt \hat}}
+
+\catcode`\_=\active
+\def_{\ifusingtt\normalunderscore\_}
+% Subroutine for the previous macro.
+\def\_{\leavevmode \kern.06em \vbox{\hrule width.3em height.1ex}}
+
+\catcode`\|=\active
+\def|{{\tt \char '174}}
+\chardef \less=`\<
+\catcode`\<=\active
+\def<{{\tt \less}}
+\chardef \gtr=`\>
+\catcode`\>=\active
+\def>{{\tt \gtr}}
+\catcode`\+=\active
+\def+{{\tt \char 43}}
+%\catcode 27=\active
+%\def^^[{$\diamondsuit$}
+
+% Set up an active definition for =, but don't enable it most of the time.
+{\catcode`\==\active
+\global\def={{\tt \char 61}}}
+
+\catcode`+=\active
+\catcode`\_=\active
+
+% If a .fmt file is being used, characters that might appear in a file
+% name cannot be active until we have parsed the command line.
+% So turn them off again, and have \everyjob (or @setfilename) turn them on.
+% \otherifyactive is called near the end of this file.
+\def\otherifyactive{\catcode`+=\other \catcode`\_=\other}
+
+\catcode`\@=0
+
+% \rawbackslashxx output one backslash character in current font
+\global\chardef\rawbackslashxx=`\\
+%{\catcode`\\=\other
+%@gdef@rawbackslashxx{\}}
+
+% \rawbackslash redefines \ as input to do \rawbackslashxx.
+{\catcode`\\=\active
+@gdef@rawbackslash{@let\=@rawbackslashxx }}
+
+% \normalbackslash outputs one backslash in fixed width font.
+\def\normalbackslash{{\tt\rawbackslashxx}}
+
+% Say @foo, not \foo, in error messages.
+\escapechar=`\@
+
+% \catcode 17=0   % Define control-q
+\catcode`\\=\active
+
+% Used sometimes to turn off (effectively) the active characters
+% even after parsing them.
+@def@turnoffactive{@let"=@normaldoublequote
+@let\=@realbackslash
+@let~=@normaltilde
+@let^=@normalcaret
+@let_=@normalunderscore
+@let|=@normalverticalbar
+@let<=@normalless
+@let>=@normalgreater
+@let+=@normalplus}
+
+@def@normalturnoffactive{@let"=@normaldoublequote
+@let\=@normalbackslash
+@let~=@normaltilde
+@let^=@normalcaret
+@let_=@normalunderscore
+@let|=@normalverticalbar
+@let<=@normalless
+@let>=@normalgreater
+@let+=@normalplus}
+
+% Make _ and + \other characters, temporarily.
+% This is canceled by @fixbackslash.
+@otherifyactive
+
+% If a .fmt file is being used, we don't want the `\input texinfo' to show up.
+% That is what \eatinput is for; after that, the `\' should revert to printing
+% a backslash.
+%
+@gdef@eatinput input texinfo{@fixbackslash}
+@global@let\ = @eatinput
+
+% On the other hand, perhaps the file did not have a `\input texinfo'. Then
+% the first `\{ in the file would cause an error. This macro tries to fix
+% that, assuming it is called before the first `\' could plausibly occur.
+% Also back turn on active characters that might appear in the input
+% file name, in case not using a pre-dumped format.
+%
+@gdef@fixbackslash{@ifx\@eatinput @let\ = @normalbackslash @fi
+  @catcode`+=@active @catcode`@_=@active}
+
+%% These look ok in all fonts, so just make them not special.  The @rm below
+%% makes sure that the current font starts out as the newly loaded cmr10
+@catcode`@$=@other @catcode`@%=@other @catcode`@&=@other @catcode`@#=@other
+
+@textfonts
+@rm
+
+@c Local variables:
+@c page-delimiter: "^\\\\message"
+@c End:
