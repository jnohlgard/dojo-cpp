//
// Created by Joakim Nohlgård on 2020-02-20.
//

#include "CodeKata.h"
#include "catch2/catch.hpp"

// https://www.hackerrank.com/challenges/balanced-brackets/problem

TEST_CASE("empty string is balanced", "") {
  REQUIRE(isBalanced(""));
}

TEST_CASE("single brace is unbalanced ", "") {
  REQUIRE(!isBalanced("("));
}

TEST_CASE("balanced braces", "") {
  REQUIRE(isBalanced("()"));
}

TEST_CASE("non-balanced parens", "") {
  REQUIRE(!isBalanced(")("));
}
