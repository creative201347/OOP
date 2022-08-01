#include <iostream>
using namespace std;

template <class T>
class Person
{
    T a;

public:
    Person(T n) { a = n; }
    template <class T1>
    void display(T1 lname) { cout << a << " " << lname << endl; }
};

int main()
{
    Person<string> p("Nabin");
    p.display(20);

    return 0;
}