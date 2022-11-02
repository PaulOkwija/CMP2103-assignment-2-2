#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../main.h"

string Eq_triangle = "The triangle is an equilateral triangle";
string Iso_triangle = "The triangle is an isosceles triangle";
string Right_ang_triangle = "The triangle is an right-angled triangle";
string Sca_triangle = "The triangle is an scalene triangle";

TEST_CASE( "Tests_3", "Tests" ) {
    REQUIRE( check_triangle(10,8,6) == Right_ang_triangle );
    REQUIRE( check_triangle(13,13,25) == Iso_triangle);
    REQUIRE( check_triangle(3,31,30) == Eq_triangle);
    REQUIRE( check_triangle(15,9,12) == Right_ang_triangle);
    REQUIRE( check_triangle(2,4,3) == Sca_triangle);
}
TEST_CASE( "Tests_4", "Tests" ) {
    REQUIRE( check_triangle(23,13,5) == Iso_triangle);
}

