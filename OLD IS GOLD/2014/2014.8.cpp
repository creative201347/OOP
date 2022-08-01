/*
An exception is an unexpected pproblem that arises during the execution of a program.
Exception mechanism provide a way to transfer control from form one part of program to another part
C++ exception handeling is built upon three keywords: try, catch, throe
try:
    A block of code which may cause am exception it placed inside try block
    It is followed by one or more catch block.
    If any exception occours, it is thrown from the try block
catch:
    This block catches the exception thrown from any try block.
    Code to handle the exception is inside the catch block.
throw:
    Exceptions can be thrown anywhere within a code block using throw statements.
 */
#include <iostream>
using namespace std;

double division(int a, int b)
{
    if (!b == 0)
    {
        return (a / b);
    }
    throw b;
}

int main()
{
    try
    {
        cout << division(20, 10) << endl;
        cout << division(20, 0) << endl;
    }
    catch (int msg)
    {
        cerr << "Cannot divide by " << msg << endl;
    }
    return 0;
}