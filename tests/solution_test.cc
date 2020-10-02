#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

/TEST(Q6_Student, HandlesCorrectNestedTest) 
{
  Check s;  
  std::string s1 = "()[]{}([{}])";
  EXPECT_EQ((s.CheckValidExpression(s1)), true);
}

TEST(Q6_Student, HandlesExpresssionAndBrackets) 
{
  Check s;  
  std::string s3 = "a(a+)g[h]k{l}f";
  EXPECT_EQ((s.CheckValidExpression(s3)), true);
}

TEST(Q6_Student, EmptyString) 
{
  Check s;
  std::string s5;
  EXPECT_EQ((s.CheckValidExpression(s5)), true);
}

TEST(Q6_Student, StringWithoutBrackets) 
{
  Check s;
  std::string s6="+abcd--ef";
  EXPECT_EQ((s.CheckValidExpression(s6)), true);
}

//Negative Tests

TEST(Q6_Student, HandlesIncorrectSequenceOfBrackets) 
{
  Check s;
  std::string s4 = "(])";
  EXPECT_EQ((s.CheckValidExpression(s4)), false);
}

TEST(Q6_Student, HandlesExtraClosingBracket) 
{
  Check s;
  std::string s2 = "()]";
  EXPECT_EQ((s.CheckValidExpression(s2)), false);
}

TEST(Q6_Student, HandlesNoClosingBrackets) 
{
  Check s;
  std::string s7 = "(";
  EXPECT_EQ((s.CheckValidExpression(s7)), false);
}