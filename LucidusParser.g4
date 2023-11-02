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
vdec: idec DCOL expr ';';
edec: idec ';';
vdef: ID '=' expr ';';
assign: expr '=' expr ';';
stat
    : vdec
    | vdef
    | edec
    | assign
    | expr ';'
    | dec
    | ret
    ;
def : DEF ID '(' (param (',' param)*)? ')' ARROW ID '{' stat* '}' ;

expr: ID
    | INT
    | FLOAT
    | STRING
    | expr DOT ID
    | func
    | PTR expr
    | STAR expr
    | NOT expr
    | expr AND expr
    | expr OR expr
    | expr STAR expr
    | expr DIV expr
    | expr PLUS expr
    | expr SUB expr
    | expr ARROW '(' type ')'
    | '(' expr ')'
    
    ;
    
struct: 'struct' ID '{' (idec (',' idec)*)? '}' ';';

func :  ID '(' (expr (',' expr)*)? ')' ;