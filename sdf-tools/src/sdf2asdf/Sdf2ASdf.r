module Sdf2ASdf
(*
	Author: Joost Visser (Joost.Visser@cwi.nl

	This module contains the rules and strategies for sdf2asdf.
*)

imports
  lib 
  Sdf2-Syntax
  Literal-lib

strategies

  sdf2asdf
    = anytd( lexical-syntax( elim-reject-prods 
                           ; elim-layout-prods
                           ; elim-bracket-prods
                           )
           + non-lexical-syntax( elim-reject-prods
                               ; elim-bracket-prods
                               )
           )
(*
    ; anytd( lexical-syntax(map(LexProd2AbstractProd)) )
*)
    ; anytd (LexSyntax2Aliases )
    ; anytd( non-lexical-syntax(
               filter( Prod2AbstractProd <+ prod-fun(try(uq2q),id,id,id) )
             )
           + Elim-Priorities 
           + Elim-Restrictions 
           + Elim-Sorts
           )
    ; anytd(aliases(map(Alias2AbstractAlias)))
    ; anytd(Plain-syntax)
    ; simplify-sdf

rules
(*
The original definition below only removes the cons attributes. The new
definition removes all attributes.
  LexProd2AbstractProd:
    prod(syms,sym,as)
      -> prod([sort("Lexical")],sym,no-attrs)
*)
  LexProd2AbstractProd:
    prod(syms,sym,as)
      -> prod([sort("Lexical")],sym,no-attrs)


  LexProd2Alias:
    prod([sort(s)],sort(s'),_)
      -> alias(sort(s),sort(s'))

  LexSyntax2Aliases:
    lexical-syntax(ps) -> aliases(<filter(LexProd2Alias)>ps)

  Prod2AbstractProd:
    prod(syms,sym,as)
      -> prod-fun(<try(uq2q)>constructorname,syms',sym,no-attrs) 
    where <oncetd(?cons(constructorname))> as 
        ; <filter(sym2abstractsym)>syms => syms' 
        ; <Hd>syms'  (* non-empty argument list *)
  Prod2AbstractProd:
    prod(syms,sym,as)
      -> prod([lit(<try(uq2q)>constructorname)],sym,no-attrs) 
    where <oncetd(?cons(constructorname))> as 
        ; <filter(sym2abstractsym)>syms => syms' 
        ; <not(Hd)>syms' (* empty argument list *)

  Alias2AbstractAlias:
    alias(s1,s2)
      -> alias(<sym2abstractsym>s1,s2)

  Elim-Priorities:
    context-free-priorities(ps) -> empty-grammar()
  Elim-Priorities:
    lexical-priorities(ps)	-> empty-grammar()
  Elim-Priorities:
    priorities(ps)		-> empty-grammar()

  Elim-Restrictions:
    context-free-restrictions(ps) -> empty-grammar()
  Elim-Restrictions:
    lexical-restrictions(ps)	-> empty-grammar()
  Elim-Restrictions:
    restrictions(ps)		-> empty-grammar()

  Elim-Sorts:
    Sorts(_)			-> empty-grammar()

strategies

  anytd(s)
    = rec x(s <+ all(x) <+ id)

  elim-reject-prods
    = filter(not(prod(id,id,oncetd(reject()))))

  elim-layout-prods
    = filter(not(prod(id,?layout(),id)))

  elim-bracket-prods
    = filter(not(prod(id,id,oncetd(bracket()))))

  simplify-sdf
    = reduce(Simplify-sdf + Elim-empty-aliases + Elim-empty-grammars)

(* obsolete since all attributes are now removed
  remove-cons
    = no-attrs
   <+ attrs(filter(not(?cons(_))))
*)
  non-lexical-syntax(s)
    = context-free-syntax(s)
   <+ syntax(s)

      
rules

  Plain-syntax:
    context-free-syntax(ps)	-> syntax(ps)
  Plain-syntax:
    lexical-syntax(ps)		-> syntax(ps)

  Elim-empty-grammars:
    conc-grammars(empty-grammar(),g)	-> g
  Elim-empty-grammars:
    conc-grammars(g,empty-grammar())	-> g

  Elim-empty-aliases:
    aliases([])			-> empty-grammar()

  Simplify-sdf:
    lexical-syntax([])			-> empty-grammar()
  Simplify-sdf:
    context-free-syntax([])		-> empty-grammar()
  Simplify-sdf:
    syntax([])				-> empty-grammar()
  Simplify-sdf:
    attrs([])				-> no-attrs()
  Simplify-sdf:
    Cons(Exports(empty-grammar()),es)	-> es

rules

  Sym2AbstractSym : cf(sym)			-> sym
  Sym2AbstractSym : lex(sym)			-> sym
(*  Sym2AbstractSym : varsym(sym)		-> *)
(*  Sym2AbstractSym : layout()			-> *)
(*
  Sym2AbstractSym : empty()			-> Unit
*)
  Sym2AbstractSym : seq(s,ss)			-> <Syms2Sym>sss'
  where !Cons(s,ss) => sss
      ; <fetch(?dummy())>sss
      ; <filter(not(?dummy()))>sss => sss'
  Syms2Sym : Nil		-> dummy()
  Syms2Sym : Cons(s,Nil)	-> s
  Syms2Sym : Cons(s,ss)		-> seq(s,ss)
(*  Sym2AbstractSym : opt(sym)			-> *)
(*  Sym2AbstractSym : iter(sym)			-> *)
(*  Sym2AbstractSym : iter-star(sym)		-> *)
  Sym2AbstractSym : iter-sep(sym,dummy())	-> iter(sym)
(*  Sym2AbstractSym : iter-sep(sym,_)		-> *)
  Sym2AbstractSym : iter-star-sep(sym,dummy())	-> iter-star(sym)
(*  Sym2AbstractSym : iter-star-sep(sym,_)	-> *)
(*  Sym2AbstractSym : iter-n(sym,_)		-> *)
  Sym2AbstractSym : iter-sep-n(sym,dummy(),n)	-> iter-n(sym,n)
(*  Sym2AbstractSym : iter-sep-n(sym,_,_)	-> *)
(*
  Sym2AbstractSym : set(sym)			-> Set(sym)
*)
  Sym2AbstractSym : pair(s1,dummy())		-> s1
  Sym2AbstractSym : pair(dummy(),s2)		-> s2
(*  Sym2AbstractSym : pair(s1,s2)		-> *)
(*  Sym2AbstractSym : Func(syms,sym)		-> Cannot be translated *)
(*  Sym2AbstractSym : Alt(s1,s2)		-> Cannot be translated *)
(*  Sym2AbstractSym : Perm(syms)		->  *)  
(*  Sym2AbstractSym : sort(str)			-> *)
  Sym2AbstractSym : char-class(_)		-> sort("CharClass")
  Sym2AbstractSym : lit(_)			-> dummy()
(*  Sym2AbstractSym : label(_,sym)		-> *)

  Propagate-dummy : 
    t					-> dummy()
    where <not(Nil + Cons(id,id))> t
        ; <one(?dummy())> t

strategies

  sym2abstractsym
    = reduce(Sym2AbstractSym + Propagate-dummy);not(?dummy())

