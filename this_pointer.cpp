/*
This pointer is keyword which points to the object that invokes a mamber function
Friend functions do not have a this pointer, because friends are not members of a class.
Only member functions have a this pointer.

1) When local variable’s name is same as member’s name
2) To return reference to the calling object
*/

#include <iostream>
using namespace std;

class Test
{
private:
    int x;

public:
    void setX(int x) { this->x = x; }
    void print() { cout << "x = " << x << endl; }
    Test object() { return *this; }
};

int main()
{
    Test obj, obj2;
    int x = 20;
    obj.setX(x);
    obj.print();

    obj2 = obj.object();
    obj2.print();
    return 0;
}