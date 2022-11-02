#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../main.h"

string Eq_triangle = "The triangle is an Equilateral triangle";
string Iso_triangle = "The triangle is an Isosceles triangle";
string Right_ang_triangle = "The triangle is an Right-angled triangle";
string Sca_triangle = "The triangle is an Scalene triangle";

TEST_CASE( "Tests_2", "Tests" ) {
    REQUIRE( check_triangle(3,4,5) == Right_ang_triangle );
    REQUIRE( check_triangle(3,3,5) == Iso_triangle);
    REQUIRE( check_triangle(3,3,3) == Eq_triangle);
    REQUIRE( check_triangle(5,4,3) == Right_ang_triangle);
    REQUIRE( check_triangle(52,24,13) == Sca_triangle);
}
TEST_CASE( "Tests_1", "Tests" ) {
    REQUIRE( check_triangle(3,3,5) == Iso_triangle);
}

