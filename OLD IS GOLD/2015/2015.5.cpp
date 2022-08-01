/*
Function overriding occurs when a derived class has a definition for one of the member functions of the base class.
    That base function is said to be overridden.
A virtual function is a member function that is declared in the base class using the keyword virtual and
    is re-defined (Overriden) in the derived class.
It tells the compiler to perform late binding where the compiler matches the object with the
    right called function and executes it during the runtime

Compile time(early binding/static polymorphism)
Run time(late binding/dynamic polymorphsim)
*/

#include <iostream>
using namespace std;

class base
{

public:
    void print()
    {
        cout << "This is the base class print function" << endl;
    }
    void display()
    {
        cout << "This is the base class's display function" << endl;
    }
};
class derived : public base
{

public:
    void print()
    {
        cout << "This is the derived class print function" << endl;
    }
    void display()
    {
        cout << "This is the derived class's display function" << endl;
    }
};

int main()
{

    base *baseptr;
    derived d;
    baseptr = &d;

    baseptr->print();
    baseptr->display();

    return 0;
}