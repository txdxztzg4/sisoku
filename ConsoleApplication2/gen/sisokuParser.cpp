
// Generated from C:/Users/txdxz/git/ConsoleApplication2/ConsoleApplication2\sisoku.g4 by ANTLR 4.7.2


#include "sisokuListener.h"
#include "sisokuVisitor.h"

#include "sisokuParser.h"


using namespace antlrcpp;
using namespace antlr4;

sisokuParser::sisokuParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

sisokuParser::~sisokuParser() {
  delete _interpreter;
}

std::string sisokuParser::getGrammarFileName() const {
  return "sisoku.g4";
}

const std::vector<std::string>& sisokuParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& sisokuParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- InputContext ------------------------------------------------------------------

sisokuParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sisokuParser::ExprContext* sisokuParser::InputContext::expr() {
  return getRuleContext<sisokuParser::ExprContext>(0);
}

tree::TerminalNode* sisokuParser::InputContext::EOF() {
  return getToken(sisokuParser::EOF, 0);
}


size_t sisokuParser::InputContext::getRuleIndex() const {
  return sisokuParser::RuleInput;
}

void sisokuParser::InputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sisokuListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInput(this);
}

void sisokuParser::InputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sisokuListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInput(this);
}


antlrcpp::Any sisokuParser::InputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sisokuVisitor*>(visitor))
    return parserVisitor->visitInput(this);
  else
    return visitor->visitChildren(this);
}

sisokuParser::InputContext* sisokuParser::input() {
  InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, getState());
  enterRule(_localctx, 0, sisokuParser::RuleInput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(8);
    expr(0);
    setState(9);
    match(sisokuParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

sisokuParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t sisokuParser::ExprContext::getRuleIndex() const {
  return sisokuParser::RuleExpr;
}

void sisokuParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_additiveContext ------------------------------------------------------------------

std::vector<sisokuParser::ExprContext *> sisokuParser::Expr_additiveContext::expr() {
  return getRuleContexts<sisokuParser::ExprContext>();
}

sisokuParser::ExprContext* sisokuParser::Expr_additiveContext::expr(size_t i) {
  return getRuleContext<sisokuParser::ExprContext>(i);
}

tree::TerminalNode* sisokuParser::Expr_additiveContext::PLUS() {
  return getToken(sisokuParser::PLUS, 0);
}

tree::TerminalNode* sisokuParser::Expr_additiveContext::MINUS() {
  return getToken(sisokuParser::MINUS, 0);
}

sisokuParser::Expr_additiveContext::Expr_additiveContext(ExprContext *ctx) { copyFrom(ctx); }

void sisokuParser::Expr_additiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sisokuListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_additive(this);
}
void sisokuParser::Expr_additiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sisokuListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_additive(this);
}

antlrcpp::Any sisokuParser::Expr_additiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sisokuVisitor*>(visitor))
    return parserVisitor->visitExpr_additive(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_powerContext ------------------------------------------------------------------

tree::TerminalNode* sisokuParser::Expr_powerContext::HAT() {
  return getToken(sisokuParser::HAT, 0);
}

std::vector<sisokuParser::ExprContext *> sisokuParser::Expr_powerContext::expr() {
  return getRuleContexts<sisokuParser::ExprContext>();
}

sisokuParser::ExprContext* sisokuParser::Expr_powerContext::expr(size_t i) {
  return getRuleContext<sisokuParser::ExprContext>(i);
}

sisokuParser::Expr_powerContext::Expr_powerContext(ExprContext *ctx) { copyFrom(ctx); }

void sisokuParser::Expr_powerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sisokuListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_power(this);
}
void sisokuParser::Expr_powerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sisokuListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_power(this);
}

antlrcpp::Any sisokuParser::Expr_powerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sisokuVisitor*>(visitor))
    return parserVisitor->visitExpr_power(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_multipricativeContext ------------------------------------------------------------------

std::vector<sisokuParser::ExprContext *> sisokuParser::Expr_multipricativeContext::expr() {
  return getRuleContexts<sisokuParser::ExprContext>();
}

sisokuParser::ExprContext* sisokuParser::Expr_multipricativeContext::expr(size_t i) {
  return getRuleContext<sisokuParser::ExprContext>(i);
}

tree::TerminalNode* sisokuParser::Expr_multipricativeContext::ASTERISK() {
  return getToken(sisokuParser::ASTERISK, 0);
}

tree::TerminalNode* sisokuParser::Expr_multipricativeContext::SLASH() {
  return getToken(sisokuParser::SLASH, 0);
}

sisokuParser::Paren_exprContext* sisokuParser::Expr_multipricativeContext::paren_expr() {
  return getRuleContext<sisokuParser::Paren_exprContext>(0);
}

sisokuParser::Expr_multipricativeContext::Expr_multipricativeContext(ExprContext *ctx) { copyFrom(ctx); }

void sisokuParser::Expr_multipricativeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sisokuListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_multipricative(this);
}
void sisokuParser::Expr_multipricativeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sisokuListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_multipricative(this);
}

antlrcpp::Any sisokuParser::Expr_multipricativeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sisokuVisitor*>(visitor))
    return parserVisitor->visitExpr_multipricative(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_unaryContext ------------------------------------------------------------------

sisokuParser::ExprContext* sisokuParser::Expr_unaryContext::expr() {
  return getRuleContext<sisokuParser::ExprContext>(0);
}

tree::TerminalNode* sisokuParser::Expr_unaryContext::PLUS() {
  return getToken(sisokuParser::PLUS, 0);
}

tree::TerminalNode* sisokuParser::Expr_unaryContext::MINUS() {
  return getToken(sisokuParser::MINUS, 0);
}

sisokuParser::Expr_unaryContext::Expr_unaryContext(ExprContext *ctx) { copyFrom(ctx); }

void sisokuParser::Expr_unaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sisokuListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_unary(this);
}
void sisokuParser::Expr_unaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sisokuListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_unary(this);
}

antlrcpp::Any sisokuParser::Expr_unaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sisokuVisitor*>(visitor))
    return parserVisitor->visitExpr_unary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_noneContext ------------------------------------------------------------------

sisokuParser::NumContext* sisokuParser::Expr_noneContext::num() {
  return getRuleContext<sisokuParser::NumContext>(0);
}

sisokuParser::Paren_exprContext* sisokuParser::Expr_noneContext::paren_expr() {
  return getRuleContext<sisokuParser::Paren_exprContext>(0);
}

sisokuParser::Expr_noneContext::Expr_noneContext(ExprContext *ctx) { copyFrom(ctx); }

void sisokuParser::Expr_noneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sisokuListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_none(this);
}
void sisokuParser::Expr_noneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sisokuListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_none(this);
}

antlrcpp::Any sisokuParser::Expr_noneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sisokuVisitor*>(visitor))
    return parserVisitor->visitExpr_none(this);
  else
    return visitor->visitChildren(this);
}

sisokuParser::ExprContext* sisokuParser::expr() {
   return expr(0);
}

sisokuParser::ExprContext* sisokuParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  sisokuParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  sisokuParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, sisokuParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(16);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sisokuParser::UINT: {
        _localctx = _tracker.createInstance<Expr_noneContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(12);
        num();
        break;
      }

      case sisokuParser::OPEN_PAREN: {
        _localctx = _tracker.createInstance<Expr_noneContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(13);
        paren_expr();
        break;
      }

      case sisokuParser::PLUS:
      case sisokuParser::MINUS: {
        _localctx = _tracker.createInstance<Expr_unaryContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(14);
        dynamic_cast<Expr_unaryContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == sisokuParser::PLUS

        || _la == sisokuParser::MINUS)) {
          dynamic_cast<Expr_unaryContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(15);
        expr(5);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(31);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(29);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Expr_powerContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(18);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(19);
          match(sisokuParser::HAT);
          setState(20);
          dynamic_cast<Expr_powerContext *>(_localctx)->rhs = expr(4);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Expr_multipricativeContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(21);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(22);
          dynamic_cast<Expr_multipricativeContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == sisokuParser::ASTERISK

          || _la == sisokuParser::SLASH)) {
            dynamic_cast<Expr_multipricativeContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(23);
          dynamic_cast<Expr_multipricativeContext *>(_localctx)->rhs = expr(4);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<Expr_additiveContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(24);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(25);
          dynamic_cast<Expr_additiveContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == sisokuParser::PLUS

          || _la == sisokuParser::MINUS)) {
            dynamic_cast<Expr_additiveContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(26);
          dynamic_cast<Expr_additiveContext *>(_localctx)->rhs = expr(2);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<Expr_multipricativeContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(27);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(28);
          paren_expr();
          break;
        }

        } 
      }
      setState(33);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Paren_exprContext ------------------------------------------------------------------

sisokuParser::Paren_exprContext::Paren_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sisokuParser::Paren_exprContext::OPEN_PAREN() {
  return getToken(sisokuParser::OPEN_PAREN, 0);
}

sisokuParser::ExprContext* sisokuParser::Paren_exprContext::expr() {
  return getRuleContext<sisokuParser::ExprContext>(0);
}

tree::TerminalNode* sisokuParser::Paren_exprContext::CLOSE_PAREN() {
  return getToken(sisokuParser::CLOSE_PAREN, 0);
}


size_t sisokuParser::Paren_exprContext::getRuleIndex() const {
  return sisokuParser::RuleParen_expr;
}

void sisokuParser::Paren_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sisokuListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParen_expr(this);
}

void sisokuParser::Paren_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sisokuListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParen_expr(this);
}


antlrcpp::Any sisokuParser::Paren_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sisokuVisitor*>(visitor))
    return parserVisitor->visitParen_expr(this);
  else
    return visitor->visitChildren(this);
}

sisokuParser::Paren_exprContext* sisokuParser::paren_expr() {
  Paren_exprContext *_localctx = _tracker.createInstance<Paren_exprContext>(_ctx, getState());
  enterRule(_localctx, 4, sisokuParser::RuleParen_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    match(sisokuParser::OPEN_PAREN);
    setState(35);
    expr(0);
    setState(36);
    match(sisokuParser::CLOSE_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumContext ------------------------------------------------------------------

sisokuParser::NumContext::NumContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sisokuParser::NumContext::UINT() {
  return getToken(sisokuParser::UINT, 0);
}


size_t sisokuParser::NumContext::getRuleIndex() const {
  return sisokuParser::RuleNum;
}

void sisokuParser::NumContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sisokuListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNum(this);
}

void sisokuParser::NumContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sisokuListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNum(this);
}


antlrcpp::Any sisokuParser::NumContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sisokuVisitor*>(visitor))
    return parserVisitor->visitNum(this);
  else
    return visitor->visitChildren(this);
}

sisokuParser::NumContext* sisokuParser::num() {
  NumContext *_localctx = _tracker.createInstance<NumContext>(_ctx, getState());
  enterRule(_localctx, 6, sisokuParser::RuleNum);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(38);
    match(sisokuParser::UINT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool sisokuParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool sisokuParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);
    case 2: return precpred(_ctx, 1);
    case 3: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> sisokuParser::_decisionToDFA;
atn::PredictionContextCache sisokuParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN sisokuParser::_atn;
std::vector<uint16_t> sisokuParser::_serializedATN;

std::vector<std::string> sisokuParser::_ruleNames = {
  "input", "expr", "paren_expr", "num"
};

std::vector<std::string> sisokuParser::_literalNames = {
  "", "'('", "')'", "'*'", "'/'", "'+'", "'-'", "'^'"
};

std::vector<std::string> sisokuParser::_symbolicNames = {
  "", "OPEN_PAREN", "CLOSE_PAREN", "ASTERISK", "SLASH", "PLUS", "MINUS", 
  "HAT", "UINT", "WS"
};

dfa::Vocabulary sisokuParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> sisokuParser::_tokenNames;

sisokuParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0xb, 0x2b, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x13, 0xa, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x20, 0xa, 0x3, 0xc, 0x3, 0xe, 
    0x3, 0x23, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x2, 0x3, 0x4, 0x6, 0x2, 0x4, 0x6, 0x8, 0x2, 0x4, 
    0x3, 0x2, 0x7, 0x8, 0x3, 0x2, 0x5, 0x6, 0x2, 0x2c, 0x2, 0xa, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x12, 0x3, 0x2, 0x2, 0x2, 0x6, 0x24, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x28, 0x3, 0x2, 0x2, 0x2, 0xa, 0xb, 0x5, 0x4, 0x3, 0x2, 0xb, 0xc, 
    0x7, 0x2, 0x2, 0x3, 0xc, 0x3, 0x3, 0x2, 0x2, 0x2, 0xd, 0xe, 0x8, 0x3, 
    0x1, 0x2, 0xe, 0x13, 0x5, 0x8, 0x5, 0x2, 0xf, 0x13, 0x5, 0x6, 0x4, 0x2, 
    0x10, 0x11, 0x9, 0x2, 0x2, 0x2, 0x11, 0x13, 0x5, 0x4, 0x3, 0x7, 0x12, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x12, 0xf, 0x3, 0x2, 0x2, 0x2, 0x12, 0x10, 
    0x3, 0x2, 0x2, 0x2, 0x13, 0x21, 0x3, 0x2, 0x2, 0x2, 0x14, 0x15, 0xc, 
    0x6, 0x2, 0x2, 0x15, 0x16, 0x7, 0x9, 0x2, 0x2, 0x16, 0x20, 0x5, 0x4, 
    0x3, 0x6, 0x17, 0x18, 0xc, 0x5, 0x2, 0x2, 0x18, 0x19, 0x9, 0x3, 0x2, 
    0x2, 0x19, 0x20, 0x5, 0x4, 0x3, 0x6, 0x1a, 0x1b, 0xc, 0x3, 0x2, 0x2, 
    0x1b, 0x1c, 0x9, 0x2, 0x2, 0x2, 0x1c, 0x20, 0x5, 0x4, 0x3, 0x4, 0x1d, 
    0x1e, 0xc, 0x4, 0x2, 0x2, 0x1e, 0x20, 0x5, 0x6, 0x4, 0x2, 0x1f, 0x14, 
    0x3, 0x2, 0x2, 0x2, 0x1f, 0x17, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x1a, 0x3, 
    0x2, 0x2, 0x2, 0x1f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x20, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0x21, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x5, 0x3, 0x2, 0x2, 0x2, 0x23, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0x25, 0x7, 0x3, 0x2, 0x2, 0x25, 0x26, 0x5, 0x4, 0x3, 0x2, 0x26, 
    0x27, 0x7, 0x4, 0x2, 0x2, 0x27, 0x7, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 
    0x7, 0xa, 0x2, 0x2, 0x29, 0x9, 0x3, 0x2, 0x2, 0x2, 0x5, 0x12, 0x1f, 
    0x21, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

sisokuParser::Initializer sisokuParser::_init;
