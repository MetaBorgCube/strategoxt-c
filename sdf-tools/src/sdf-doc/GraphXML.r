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

 $Id: GraphXML.r,v 1.1 2001/05/31 14:20:51 mdejonge Exp $
*)

module GraphXML
  signature
    constructors
      GraphXML : List(GraphXML-Attribute) * List(Graph) -> GraphXML
      graph : List(Graph-Attribute) * List(Either(Node,Edge)) -> Graph
      node : List(Node-Attribute) -> Node
      edge : List(Edge-Attribute) -> Edge
      name : CDATA -> Name-Attribute
      source : CDATA -> Source-Attribute
      target : CDATA -> Target-Attribute
      class  : CDATA -> Class-Attribute
