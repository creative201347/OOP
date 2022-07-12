/*
A macro is a piece of code in a program that is replaced by the value of the macro.
Macro is defined by #define directive. Whenever a macro name is encountered by the compiler,
it replaces the name with the definition of the macro. Macro definitions need not be terminated by a semi-colon(;).

1. Object-like Macros
    #define DATE 31
2. Chain Macros
    #define INSTAGRAM FOLLOWERS
    #define FOLLOWERS 138
3. Multi-line Macros
    #define ELE 1, \
                2, \
                3
4. Function-like Macro
    #define min(a, b) (((a) < (b)) ? (a) : (b))
*/

#include <iostream>

#ifdef PR_DEBUG
#define LOG(x) std::cout << x << std::endl
#else
#define LOG(x)
#endif

int main()
{
    LOG("Hello");
    return 0;
}