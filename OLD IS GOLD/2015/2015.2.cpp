/*
Pointer is a data type that stores the address of other data types.
It is true that a pointer of one class can point to other class,
    but classes must be a base and derived class, then it is possible.
So, a pointer is type of base class, and it can access all, public function
    and variables of base class since pointer is of base class, this is known as binding pointer.


Base class bata inherit vako functions and members only accessible
Binding at runtime
    descion are taken at run time
*/

#include <iostream>
using namespace std;

class base
{
    int base_var = 20;

public:
    void displayBase() { cout << "base_var: " << base_var << endl; }
};

class derived : public base
{
    int derived_var = 30;

public:
    void displayDerived() { cout << "derived_var: " << derived_var << endl; }
};

int main()
{
    base *obj_base;
    derived obj_derived;

    obj_base = &obj_derived;
    obj_base->displayBase();

    derived *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->displayBase();
    derived_class_pointer->displayDerived();

    return 0;
}