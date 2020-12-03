#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <cstdlib>
#include <cctype>
#include <stdio.h>
#include <stdarg.h>
#include <iostream>
#include <fstream>
#include <string>




TEST_CASE( "Character count should be 0", "[Countchar]" ) {
  //setup
  string test1 = " ";

//preform operation
  countChar(test1);
  //test
  REQUIRE(charCount == 0);
}

TEST_CASE( "Character count should be 6", "[Countchar]" ) {
  //setup
  string test2 = "Dillon";

//preform operation
  countChar(test2);
  //test
  REQUIRE(charCount == 6);
}

TEST_CASE( "Character count should be 1", "[Countchar]" ) {
  //setup
  string test3 = "^";

//preform operation
  countChar(test3);
  //test
  REQUIRE(charCount == 1);
}
