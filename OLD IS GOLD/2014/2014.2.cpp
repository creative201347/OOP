/*
By declaring a function member as static, you make it independent of any particular object of the class.
A static member function can be called even if no objects of the class exist and the static functions
    are accessed using only the class name and the scope resolution operator (::)
A static member function can only access static data member, other static member functions and
    any other functions from outside the class.
Static member functions have a class scope and they do not have access to the this pointer of the class.
 */

#include <iostream>
using namespace std;

class Cube
{
private:
    int side;
    static int objectCount;

public:
    Cube() { objectCount++; }
    static int getCount() { return objectCount; }
};
int Cube::objectCount = 0;
int main()
{
    Cube c1;
    cout << "Total objects: " << Cube::getCount() << endl;
    Cube c2;
    cout << "Total objects: " << Cube::getCount() << endl;
    return 0;
}