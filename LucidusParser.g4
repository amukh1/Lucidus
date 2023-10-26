parser grammar LucidusParser;
options { tokenVocab=LucidusLexer;}

program
    : (stat | def)*  EOF
    ;
rawtype: (ID);
type: (ID) (STAR)*;
idec: ID COL type ;
param: (idec|DOTS);
dec: DECL ID '(' (param (',' param)*)? ')' ARROW type ';';
ret: RETURN expr ';';
stat
    : ID '=' expr ';'
    | expr ';'
    | dec
    | ret
    ;
def : DEF ID '(' (idec (',' idec)*)? ')' ARROW ID '{' stat* '}' ;

expr: ID
    | INT
    | func
    | NOT expr
    | expr AND expr
    | expr OR expr
    | expr STAR expr
    | expr DIV expr
    | expr PLUS expr
    | expr SUB expr
    | expr ARROW '(' expr ')'
    | '(' expr ')'
    | STRING
    
    ;

func :  ID '(' expr (',' expr)* ')' ;