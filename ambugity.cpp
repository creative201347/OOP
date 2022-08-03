/*
Ambiguity in Multiple Inheritance
The most obvious problem with multiple inheritance occurs during function overriding.
Suppose, two base classes have a same function which is not overridden in derived class.
If you try to call the function using the object of the derived class, compiler shows error.
It's because compiler doesn't know which function to call.

class base1 {
  public:
      void someFunction( ) {....}
};
class base2 {
    public:
    void someFunction( ) {....}
};
class derived : public base1, public base2 {};

int main() {
    derived obj;
    obj.someFunction() // Error!
}

This problem can be solved using the scope resolution function to specify which function to class either base1or base2
int main() {
    obj.base1::someFunction( );  // Function of base1 class is called
    obj.base2::someFunction();   // Function of base2 class is called.
}
*/
#include <iostream>
using namespace std;

class base1
{
public:
    void someFunction() { cout << "Hello from base1" << endl; }
};
class base2
{
public:
    void someFunction() { cout << "Hello from base2" << endl; }
};
class derived : public base1, public base2
{
};

int main()
{
    derived obj;
    obj.base1::someFunction(); // Function of base1 class is called
    obj.base2::someFunction(); // Function of base2 class is called.
    return 0;
}