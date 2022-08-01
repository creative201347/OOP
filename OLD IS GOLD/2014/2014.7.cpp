
/*
The method of Generic Programming is implemented to increase the efficiency of the code.
Generic Programming enables the programmer to write a general algorithm which will work with all data types.
It eliminates the need to create different algorithms if the data type is an integer, string or a character.

Generics can be implemented in C++ using Templates.
*/

#include <iostream>
using namespace std;

template <class T>
T add(T a, T b) { return (a + b); }

int main()
{
    cout << "Adding integers " << add<int>(10, 20) << endl;
    cout << "Adding floats " << add<float>(10.200, 20.743) << endl;
    string fname = "Nabin", lname = " Dhami";
    cout << "Adding strings " << add<string>(fname, lname) << endl;
    return 0;
}