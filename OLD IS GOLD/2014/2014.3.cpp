#include <iostream>
#include <string.h>
using namespace std;

class Person
{
    string name;

public:
    Person() {}
    Person(string n) { name = n; }
    string getName() { return name; }
};

class Cat
{
private:
    string address;
    Person p1;

public:
    Cat(string n, string addr) : p1(n) { address = addr; }

    void concat()
    {
        string s = p1.getName() + address;
        cout << s << endl;
    }
};

int main()
{
    string name = "Nabin";
    string address = " Darchula";
    Person p1(name);
    Cat c2(name, address);
    c2.concat();
    return 0;
}