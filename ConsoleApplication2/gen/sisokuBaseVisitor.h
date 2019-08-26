
// Generated from C:/Users/txdxz/git/ConsoleApplication2/ConsoleApplication2\sisoku.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "sisokuVisitor.h"


/**
 * This class provides an empty implementation of sisokuVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  sisokuBaseVisitor : public sisokuVisitor {
public:

  virtual antlrcpp::Any visitInput(sisokuParser::InputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_additive(sisokuParser::Expr_additiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_power(sisokuParser::Expr_powerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_multipricative(sisokuParser::Expr_multipricativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_unary(sisokuParser::Expr_unaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_none(sisokuParser::Expr_noneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParen_expr(sisokuParser::Paren_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNum(sisokuParser::NumContext *ctx) override {
    return visitChildren(ctx);
  }


};

