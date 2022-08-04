/*
Person
    name
    display()
    printName(return *this)
main
    Person p(),pp;
    pp = p.printName()
*/

#include <iostream>
#include <string.h>
using namespace std;

class Person
{
    string name;

public:
    Person() {}
    Person(string name) { this->name = name; }
    void display() { cout << name << endl; }
    Person printName() { return *this; }
};

int main()
{
    string name = "Nabin";
    Person p(name), pp;
    p.display(); // Nabin

    pp = p.printName();

    cout << "Returned from this pointer: " << endl;
    pp.display(); // Nabin
    return 0;
}