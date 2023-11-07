parser grammar LucidusParser;
options { tokenVocab=LucidusLexer;}

program
    : (stat | def | struct)*  EOF
    ;
rawtype: (ID);
type: (ID) (STAR)*;
idec: ID COL type ;
param: (idec|DOTS);
dec: DECL ID '(' (param (',' param)*)? ')' ARROW type ';';
ret: RETURN expr ';';
vdec: idec '=' expr ';';
infdec: ID DCOL expr ';';
edec: idec ';';
// vdef: ID '=' expr ';';
assign: expr '=' expr ';';
label: LABEL ID ':';
goto: GOTO ID ';';
if: 'if' expr ARROW '{' stat* '}';

stat
    : vdec
    // | vdef
    | infdec
    | edec
    | assign
    | expr ';'
    | dec
    | ret
    | label
    | goto
    | if
    ;
def : DEF ID '(' (param (',' param)*)? ')' ARROW type '{' stat* '}' ;

expr: ID
    | INT
    | FLOAT
    | STRING
    | expr DOT ID
    | func
    | PTR expr
    | expr STAR expr
    | STAR expr
    | NOT expr
    | expr AND expr
    | expr OR expr
    | expr DIV expr
    | expr PLUS expr
    | expr SUB expr
    | expr ARROW '(' type ')'
    | expr '=' '=' expr
    | '(' expr ')'
    
    ;
    
struct: 'struct' ID '{' (idec (',' idec)*)? '}' ';';

func :  ID '(' (expr (',' expr)*)? ')' ;