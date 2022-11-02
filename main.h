#ifndef MAIN_H
#define MAIN_H
#include<string>
#include<cmath>

using namespace std;

string check_triangle_answer(double a, double b, double c){
    double a_squared;
    double b_squared;
    double c_squared;
    a_squared = pow(b,2) + pow(c,2);
    b_squared = pow(a,2) + pow(c,2);
    c_squared = pow(a,2) + pow(b,2);
    if (a==b and b==c)
        return "The triangle is an equilateral triangle";

    else if(a==b or b==c)
        return "The triangle is an isosceles triangle";

    else if(pow(a,2)== a_squared or pow(b,2)== b_squared or pow(c,2)== c_squared)
        return "The triangle is a right-angled triangle";

    else
        return "The triangle is a scalene triangle";
}
#endif // MAIN_H
