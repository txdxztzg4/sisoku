grammar sisoku;

input: expr EOF;
expr
    : num                                       #expr_none
    | paren_expr                                #expr_none
    | op=(PLUS | MINUS) expr                    #expr_unary
    | <assoc=right> lhs=expr HAT rhs=expr       #expr_power
    | lhs=expr op=(ASTERISK | SLASH) rhs=expr   #expr_multipricative
    | expr paren_expr                           #expr_multipricative
    | lhs=expr op=(PLUS | MINUS) rhs=expr       #expr_additive
    ;


paren_expr: OPEN_PAREN expr CLOSE_PAREN;
num
    : UINT
    ;

OPEN_PAREN: '(';
CLOSE_PAREN:    ')';
ASTERISK:   '*';
SLASH:  '/';
PLUS:   '+';
MINUS:  '-';
HAT:    '^';

UINT:   [0-9]+;

WS: [ \t] -> skip;

