// DELETE THIS CONTENT IF YOU PUT COMBINED GRAMMAR IN Parser TAB
lexer grammar LucidusLexer;

AND : '&&' ;
OR : '||' ;
NOT : '!' ;
EQ : '=' ;
NEQ : '!=' ;
PLUS: '+';
SUB: '-';
STAR: '*';
DIV: '/';
MOD: '%';
OPAREN: '(';
CPAREN: ')';
COMMA : ',' ;
SEMI : ';' ;

DEF: 'def';
STRUCT: 'struct';
DECL: 'dec';
ARROW: '->';
GTR: '>';
LESS: '<';
DCOL: ':=';
PTR: 'ptr';
COL: ':';
RETURN: 'return';
LABEL: 'label';
GOTO: 'goto';
DOT: '.';
DOTS: '...';
IF: 'if';
IMPRT: 'import';
ELSE: 'else';
// WHILE: 'while';
// FOR: 'for';
SIZEOF : 'sizeof';

LCURLY : '{' ;
RCURLY : '}' ;
LBRACK : '[' ;
RBRACK : ']' ;

INT : SUB?[0-9]+ ; 
FLOAT : SUB?[0-9]+ '.' [0-9]* ;
ID: [a-zA-Z_][a-zA-Z_0-9]* ;
WS: [ \t\n\r\f]+ -> skip ;
COMMENT: '//' .*? '\n' -> skip ;
STRING: '"' .*? '"' ;
