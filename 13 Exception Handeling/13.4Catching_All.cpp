#include <iostream>
using namespace std;

void test(int x)
{
    try
    {
        if (x == 0)
            throw x; // int
        if (x == -1)
            throw 'x'; // char
        if (x == 1)
            throw 1.0; // double
    }
    catch (...) // Catching all exceptions
    {
        cout << "Caught an excepption" << endl;
    }
}

int main()
{
    cout << "Testing Generic Catch" << endl;
    test(-1);
    test(0);
    test(1);
    return 0;
}