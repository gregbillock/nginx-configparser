#include "gtest/gtest.h"
#include "config_parser.h"

TEST(NginxConfigParserTest, SimpleConfig) {
  NginxConfigParser parser;
  NginxConfig out_config;

  bool success = parser.Parse("example_config", &out_config);

  EXPECT_TRUE(success);
}

TEST(NginxConfigParserTest, TestStatement) {
  NginxConfigStatement stmt;
  stmt.tokens_.push_back("a");
  stmt.tokens_.push_back("b");
  EXPECT_EQ("a b;\n", stmt.ToString(0));
}
