
// Generated from C:/Users/txdxz/git/ConsoleApplication2/ConsoleApplication2\sisoku.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "sisokuParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by sisokuParser.
 */
class  sisokuVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by sisokuParser.
   */
    virtual antlrcpp::Any visitInput(sisokuParser::InputContext *context) = 0;

    virtual antlrcpp::Any visitExpr_additive(sisokuParser::Expr_additiveContext *context) = 0;

    virtual antlrcpp::Any visitExpr_power(sisokuParser::Expr_powerContext *context) = 0;

    virtual antlrcpp::Any visitExpr_multipricative(sisokuParser::Expr_multipricativeContext *context) = 0;

    virtual antlrcpp::Any visitExpr_unary(sisokuParser::Expr_unaryContext *context) = 0;

    virtual antlrcpp::Any visitExpr_none(sisokuParser::Expr_noneContext *context) = 0;

    virtual antlrcpp::Any visitParen_expr(sisokuParser::Paren_exprContext *context) = 0;

    virtual antlrcpp::Any visitNum(sisokuParser::NumContext *context) = 0;


};

