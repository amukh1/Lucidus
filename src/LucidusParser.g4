parser grammar LucidusParser;
options { tokenVocab=LucidusLexer;}

program
    : (stat | def | struct)*  EOF
    ;
rawtype: (ID);
fptr: '(' (type (',' type)*)? ')' '->' '(' type ')';
type: (ID | fptr) (STAR)*;
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
while: 'while' expr ARROW '{' stat* '}';
imrt: 'import' STRING;

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
    | while
    | imrt
    ;
def : DEF ID '(' (param (',' param)*)? ')' ARROW type '{' stat* '}' ;

func :  (ID | '(' expr ')') '(' (expr (',' expr)*)? ')' ;

expr: ID
    | INT
    | FLOAT
    | STRING
    | expr DOT ID
    | expr ARROW ID
    | func
    | PTR expr
    | expr STAR expr
    | expr '[' expr ']'
    | STAR expr
    | NOT expr
    | expr AND expr
    | expr OR expr
    | expr DIV expr
    | expr PLUS expr
    | expr SUB expr
    | SUB expr
    | expr MOD expr
    | expr ARROW '(' type ')'
    | SIZEOF type
    | expr '=' '=' expr
    | expr '!=' expr
    | expr GTR expr
    | expr LESS expr
    | '(' expr ')'
    
    ;
    
struct: 'struct' ID '{' (idec (',' idec)*)? '}' ';';