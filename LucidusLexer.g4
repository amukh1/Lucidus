// DELETE THIS CONTENT IF YOU PUT COMBINED GRAMMAR IN Parser TAB
lexer grammar LucidusLexer;

AND : '&&' ;
OR : '||' ;
NOT : '!' ;
EQ : '=' ;
PLUS: '+';
SUB: '-';
STAR: '*';
DIV: '/';
OPAREN: '(';
CPAREN: ')';
COMMA : ',' ;
SEMI : ';' ;

DEF: 'def';
DECL: 'dec';
ARROW: '->';
DCOL: ':=';
PTR: 'ptr';
COL: ':';
RETURN: 'return';
DOTS: '...';

LCURLY : '{' ;
RCURLY : '}' ;

INT : SUB?[0-9]+ ; 
ID: [a-zA-Z_][a-zA-Z_0-9]* ;
WS: [ \t\n\r\f]+ -> skip ;
STRING: '"' .*? '"' ;
