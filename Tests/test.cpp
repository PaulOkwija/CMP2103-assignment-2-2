#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../main.h"



TEST_CASE( "Test_1", "Tests" ) {
    REQUIRE( check_triangle_answer(3,4,5) == "The triangle is a right-angled triangle");
    REQUIRE( check_triangle_answer(3,3,5) == "The triangle is an isosceles triangle");
    REQUIRE( check_triangle_answer(3,3,3) == "The triangle is an equilateral triangle");
    REQUIRE( check_triangle_answer(52,24,13) == "The triangle is a scalene triangle");
}
TEST_CASE( "Test_2", "Tests" ) {
    REQUIRE( check_triangle_answer(5,4,3) == "The triangle is a right-angled triangle");
}

