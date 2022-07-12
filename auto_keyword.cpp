/*
The auto keyword in C++ automatically detects and assigns a data type to the variable with which it is used.
The compiler analyses the variable's data type by looking at its initialization. It is necessary to initialize
the variable when declaring it using the auto keyword. The auto keyword has many uses, including but not limited
to variables, functions, pointers, iterators, templates, and many more.
*/

#include <iostream>
#include <string>

int main()
{
    auto a = 1.222;
    std::cout << a << std::endl;
    std::cin.get();
}