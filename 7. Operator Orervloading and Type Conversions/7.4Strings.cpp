#include <iostream>
#include <string.h>
using namespace std;

class Person
{
    // char name[50];
    int length;
    char *name;

public:
    Person() {}
    Person(char *n)
    {
        length = strlen(name);
        name = new char[length + 1];
        strcpy(name, n);
    }
    friend Person operator+(Person p1, Person p2);
    // Person operator+(Person p1)
    // {
    //     Person p2;
    //     strcat(name, p1.name);
    //     strcpy(p2.name, name);
    //     return p2;
    // }
    void display()
    {
        cout << name << endl;
    }
};

Person operator+(Person p1, Person p2)
{
    Person p3;
    p3.length = p1.length + p2.length;
    p3.name = new char[p3.length + 1];
    strcat(p1.name, p2.name);
    strcpy(p3.name, p1.name);
    return p3;
}

int main()
{
    Person p1("Nabin"), p2(" Dhami"), p3;
    p3 = p1 + p2;
    p3.display();
    return 0;
}