#include <iostream>
using namespace std;

class Base
{
public:
    void display()
    {
        cout << "Hello from base class " << endl;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "Hello from derived class " << endl;
    }
};

int main()
{
    Derived d;
    d.Base::display();
    d.Derived::display();
    return 0;
}