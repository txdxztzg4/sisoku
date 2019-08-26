//#include "pch.h"　//？不要？
#include "antlr4-runtime.h"
#include "gen/sisokuLexer.h"
#include "gen/sisokuParser.h"
#include "gen/sisokuBaseVisitor.h"

struct result {
	bool success;
	int value;
};

class Visitor : public sisokuBaseVisitor {
protected:
	antlrcpp::Any defaultResult() override { return result{ false, 0 }; }
public:
	antlrcpp::Any visitInput(sisokuParser::InputContext* ctx) override {
		//！！！ここ重要！！！
		//visit関数をオーバーライドしない場合、デフォルト実装が呼ばれるが、
		//構文要素が複数ある場合、最後の構文要素のvisit結果が採用される。
		//本当に構文要素が一つしか無い場合を除き、visit関数をオーバーライドしておくか、
		//aggregateResult関数をオーバーライドして、何かの基準で正当なvisit結果を採用するようにしておくこと！！！
		return visit(ctx->expr());
	}
	antlrcpp::Any visitExpr_additive(sisokuParser::Expr_additiveContext* ctx) override
	{
		auto lhs = visit(ctx->lhs).as<result>();
		auto rhs = visit(ctx->rhs).as<result>();
		if (!lhs.success || !rhs.success) return lhs;
		switch (ctx->op->getType()) {
		//case sisokuLexer::PLUS: return result{true, lhs.value + rhs.value}; //多分間違い
		//case sisokuLexer::MINUS: return result{ true, lhs.value - rhs.value};
		case sisokuParser::PLUS:
			return result{ true, lhs.value + rhs.value };
		case sisokuParser::MINUS:
			return result{ true, lhs.value - rhs.value };
		default:
			return result{ false, 0 };
		}
	}

	antlrcpp::Any visitNum(sisokuParser::NumContext* ctx) override
	{
		switch (ctx->getStart()->getType()) {
		case sisokuParser::UINT:
			return result{ true, atoi(ctx->UINT()->getText().c_str()) };
		default: return result{ false, 0 };
		}

	}
};

int main(int argc, const char* argv[]) {

	try {
		//auto fileName = argv[1];
		auto fileName = "test.txt";
		std::ifstream stream;
		stream.open(fileName);

		//antlr4::ANTLRInputStream input1(u8"1+2");

		//std::cout << stream.rdbuf();
		antlr4::ANTLRInputStream input(stream);


		//antlr4::sisokuLexer lexer(&input);　//多分間違い
		sisokuLexer lexer(&input);

		antlr4::CommonTokenStream tokens(&lexer);

		//antlr4::sisokuParser parser(&tokens);　//これも
		sisokuParser parser(&tokens);

		auto inputTree = parser.input();

		auto ret = Visitor().visit(inputTree).as<result>();
		if (ret.success) printf("success. value=%d\n", ret.value);
		else printf("fail\n");
	}
	catch (...) {
		return -2;
	}
}
