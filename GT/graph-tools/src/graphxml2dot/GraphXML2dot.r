(*
 GT -- Grammar Tools
 Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
                    Eelco Visser <visser@acm.org>
                    Joost Visser <jvisser@cwi.nl>

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2, or (at your option)
 any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 02111-1307, USA.

 $Id: GraphXML2dot.r,v 1.1.1.1 2001/06/05 12:34:29 mdejonge Exp $
*)

module GraphXML2dot
imports
  lib Dot GraphXML Literal-lib

strategies

  main
    = iowrap(GraphXML2dot)

  GraphXML2dot
    = \GraphXML(_,[graph(_,xs)]) -> dot-graph("","digraph","GraphXML",ss)
       where <filter(node2dot<+edge2dot)>xs => ss
      \

  node2dot
    = \node(as) -> node-stmt(n,<conc>(shapes,styles))
       where !as;oncetd(?name(n))
           ; <filter(attribute2shape)>as => shapes
           ; <filter(attribute2style)>as => styles
      \

  edge2dot
    = \edge(as) -> edge-stmt(t,arrow(),[s],[])
       where !as;oncetd(?source(s));oncetd(?target(t))
      \

  attribute2style
    = \class(c) -> attr-id("style","dotted")
       where <de-quote>c => "bottom"
      \
   <+ \class(c) -> attr-id("style","dashed")
       where <de-quote>c => "nondeclared-top"
      \ 
   <+ \class(c) -> attr-id("style","bold")
       where <de-quote>c => "declared-top"
      \ 

  attribute2shape
    = \class(c) -> attr-id("shape","record")
       where <de-quote>c => "declared"
      \ 
