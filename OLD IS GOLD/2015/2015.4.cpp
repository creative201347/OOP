
/*
The copy constructor in C++ is used to copy data of one object to another.
A copy constructor is a member function that initializes an object using another object of the same class.
Copy constructor is used to initialize the members of a newly created object by copying the members of an already existing object.
Copy constructor takes a reference to an object of the same class as an argument.

*/

#include <iostream>

using namespace std;

class Person
{
private:
    string name;

public:
    Person() {}
    Person(Person &p) { name = p.name; }
    Person(string n) { name = n; }
    void display() { cout << name << endl; }
};

int main()
{
    Person p1("Nabin"), p2;
    p2 = p1;
    p1.display();
    return 0;
}