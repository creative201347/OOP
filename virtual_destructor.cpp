#include <iostream>
using namespace std;

class Base
{
private:
public:
    Base() { cout << "Base constructor..." << endl; }
    virtual ~Base() { cout << "Base destructor..." << endl; } // to avoid such memeory leak base class destructor is made virtual so that derived class destructor aslo calls
};
class Derived : public Base
{
private:
public:
    Derived() { cout << "Derived constructor..." << endl; }
    ~Derived() { cout << "Derived destructor..." << endl; } // since there is no virtual destructor in base class derived class destrutor is not being called , memory leak
};

int main()
{
    Base *bptr = new Derived(); // base class pointer allocating derived class object
    delete bptr;
    return 0;
}