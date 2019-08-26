
// Generated from C:/Users/txdxz/git/ConsoleApplication2/ConsoleApplication2\sisoku.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "sisokuParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by sisokuParser.
 */
class  sisokuListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterInput(sisokuParser::InputContext *ctx) = 0;
  virtual void exitInput(sisokuParser::InputContext *ctx) = 0;

  virtual void enterExpr_additive(sisokuParser::Expr_additiveContext *ctx) = 0;
  virtual void exitExpr_additive(sisokuParser::Expr_additiveContext *ctx) = 0;

  virtual void enterExpr_power(sisokuParser::Expr_powerContext *ctx) = 0;
  virtual void exitExpr_power(sisokuParser::Expr_powerContext *ctx) = 0;

  virtual void enterExpr_multipricative(sisokuParser::Expr_multipricativeContext *ctx) = 0;
  virtual void exitExpr_multipricative(sisokuParser::Expr_multipricativeContext *ctx) = 0;

  virtual void enterExpr_unary(sisokuParser::Expr_unaryContext *ctx) = 0;
  virtual void exitExpr_unary(sisokuParser::Expr_unaryContext *ctx) = 0;

  virtual void enterExpr_none(sisokuParser::Expr_noneContext *ctx) = 0;
  virtual void exitExpr_none(sisokuParser::Expr_noneContext *ctx) = 0;

  virtual void enterParen_expr(sisokuParser::Paren_exprContext *ctx) = 0;
  virtual void exitParen_expr(sisokuParser::Paren_exprContext *ctx) = 0;

  virtual void enterNum(sisokuParser::NumContext *ctx) = 0;
  virtual void exitNum(sisokuParser::NumContext *ctx) = 0;


};

