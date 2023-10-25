parser grammar LucidusParser;
options { tokenVocab=LucidusLexer;}

program
    : (stat | def)*  EOF
    ;

stat
    : ID '=' expr ';'
    | expr ';'
    | DECL ID '(' ((idec|DOTS) (',' (idec|DOTS))*)? ')' ARROW ID ';'
    | RETURN expr ';'
    ;

rawtype: (ID);
type: (ID) (STAR)*;
idec: ID COL type ;
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