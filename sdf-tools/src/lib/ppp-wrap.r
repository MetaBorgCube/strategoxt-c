\literate[ppp-wrap]

	\begin{abstract}
	This module defines an alternative to io-wrap that provides
	the additional facility of invoking a parser and a pretty-printer.

	ppp-wrap is a wrapper strategy like iowrap that can
	also take care of calling a parser (via parse) and a
	pretty-printer. This makes it easier to make a component that
	works on concrete syntax. Using the -a option the component has
	the behavior as with iowrap.

	\end{abstract}

% GT -- Grammar Tools
% Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
%                    Eelco Visser <visser@acm.org>
%                    Joost Visser <jvisser@cwi.nl>
%
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2, or (at your option)
% any later version.
%
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
%
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
% 02111-1307, USA.
\begin{code}
module ppp-wrap
imports options
signature
  constructors
    AbstractInOut : Option
    AbstractIn    : Option
    AbstractOut   : Option

strategies

  pppwrap(lang, pptbl, strat) =
    pppwrap(lang, pptbl, (id, strat), fail)

  pppwrap(lang, pptbl, strat, extra-options) =
    pppwrapO(lang, pptbl, strat, extra-options, ppp-default-usage)

  pppwrapO(lang, pptbl, strat, extra-options, usage) =
    parse-options(extra-options <+ ppp-options <+ io-options); 
    store-options;
    (
       need-help(usage)
    <+ 
       ppp-input-file(lang);
       apply-strategy(strat);
       ppp-output-file(pptbl);
       report-success
    <+ 
       report-failure
    )

  ppp-options =
    Option("-a",    !AbstractInOut)
    + Option("-ai", !AbstractIn)
    + Option("-ao", !AbstractOut)

  ppp-default-usage =
  where(
    option-defined(?Program(prog))
  ; <printnl> (stderr, 
       ["usage : ", prog, 
        " [-S] [-a] [-i file] [-ai] [-o file] [-ao] [-b] [-s] [--help|-h|-?]"
       ])
  ; <exit> 1
  )

  ppp-input-file(lang) =
    where((option-defined(?Input(infile)) <+ stdin-to-temp => infile))
  ; (option-defined(AbstractIn + AbstractInOut); where(!infile => ainfile)
    <+ where(new-file => ainfile
       ; <call-noisy>("parse", ["-i", infile, "-o", ainfile, "-I" | <lang>()])))
  ; split(id, <ReadFromFile> ainfile)

  stdin-to-temp =
    new-file => tmp
  ; <call-noisy>("cat", [">", tmp])
  ; !tmp

  temp-to-stdout = 
  where(?tmp
  ; <call-noisy>("cat", [tmp])
  )

  ppp-output-file(pptbl) =
  ((option-defined(AbstractOut + AbstractInOut), id); output-file) <+ 
  where( // else call pretty-printer
    ( id, split(new-file => aout, id); WriteToBinaryFile
          ; new-file => abox
          ; <call-noisy>("ast2abox", ["-i", aout, "-o", abox | <pptbl>()]));
    (
    ( option-defined(?Output(outfile)), id );
     <call-noisy>("abox2text", ["-i", abox, "-o", outfile])
    <+
    ( id, <call-noisy>("abox2text", ["-i", abox]))
    ); 
    <rm-files> [abox, aout]
  )
\end{code}

Options

  -a	: abstract input and output
  -ai   : abstract input
  -ao   : abstract output

