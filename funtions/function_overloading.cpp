/*
Thefunctions having the same name but different number of arguments are called Function Overloading.
Function overloading is a feature of object oriented programming
    where two or more functions can have the same name but different parameters.
In Function Overloading “Function” name should be the same and the arguments should be different.
Function overloading can be considered as an example of polymorphism feature in C++.
*/

#include <iostream>
#include <string.h>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    cout << "Addition of 6 and 7 is: " << add(6, 7) << endl;
    cout << "Addition of 6,7 and 8 is: " << add(6, 7, 8) << endl;
    return 0;
}