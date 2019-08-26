
// Generated from C:/Users/txdxz/git/ConsoleApplication2/ConsoleApplication2\sisoku.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "sisokuListener.h"


/**
 * This class provides an empty implementation of sisokuListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  sisokuBaseListener : public sisokuListener {
public:

  virtual void enterInput(sisokuParser::InputContext * /*ctx*/) override { }
  virtual void exitInput(sisokuParser::InputContext * /*ctx*/) override { }

  virtual void enterExpr_additive(sisokuParser::Expr_additiveContext * /*ctx*/) override { }
  virtual void exitExpr_additive(sisokuParser::Expr_additiveContext * /*ctx*/) override { }

  virtual void enterExpr_power(sisokuParser::Expr_powerContext * /*ctx*/) override { }
  virtual void exitExpr_power(sisokuParser::Expr_powerContext * /*ctx*/) override { }

  virtual void enterExpr_multipricative(sisokuParser::Expr_multipricativeContext * /*ctx*/) override { }
  virtual void exitExpr_multipricative(sisokuParser::Expr_multipricativeContext * /*ctx*/) override { }

  virtual void enterExpr_unary(sisokuParser::Expr_unaryContext * /*ctx*/) override { }
  virtual void exitExpr_unary(sisokuParser::Expr_unaryContext * /*ctx*/) override { }

  virtual void enterExpr_none(sisokuParser::Expr_noneContext * /*ctx*/) override { }
  virtual void exitExpr_none(sisokuParser::Expr_noneContext * /*ctx*/) override { }

  virtual void enterParen_expr(sisokuParser::Paren_exprContext * /*ctx*/) override { }
  virtual void exitParen_expr(sisokuParser::Paren_exprContext * /*ctx*/) override { }

  virtual void enterNum(sisokuParser::NumContext * /*ctx*/) override { }
  virtual void exitNum(sisokuParser::NumContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

