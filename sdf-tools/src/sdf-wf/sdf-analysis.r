module sdf-analysis
imports
  lib Sdf-Syntax

strategies

  declared-sorts
    = collect(\Sorts(ss) -> <map(\sort(s)->s\)>ss\)
    ; concat

  defined-sorts
    = collect( \prod    (  _,sort(s),_) -> s\
            <+ \prod-fun(_,_,sort(s),_) -> s\
            <+ \alias(_,sort(s)) -> s\
             )

  used-sorts
    = collect( \prod    (  ss,_,_) -> <map(collect-sorts);concat>ss\
            <+ \prod-fun(_,ss,_,_) -> <map(collect-sorts);concat>ss\
             , skip-appl // skip the production child of non-imploded application node
             )
    ; concat
    ; uniq

  skip-appl(x,t)
    = \appl(_,ts) -> <x>ts\

  collect-sorts
    = collect(\sort(s)->s\)signature

  constructors
    appl : Production * List(AsFixTerm) -> AsFixTerm
