#include "parser.h"
#include "gmock/gmock.h"
using ::testing::Eq;

class ParserTest : public testing::Test {
public:
  Parser parser;
};

TEST(ParserTest, ParserInt) {
  int retVal=0;
  int error = Parser::ParserInt("123", &retVal);
  EXPECT_THAT(error, Eq(Parser::PARSER_OK));
  EXPECT_THAT(retVal, Eq(123));
}
