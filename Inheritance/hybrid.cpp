#include <iostream>
using namespace std;

class base
{
protected:
    int val;
};

// since derived1 and derived2 classes are virtaully inheriting so only one copy is inherited in derived3
class derived1 : virtual public base
{
public:
    derived1() { int val = 1; }
};
class derived2 : virtual public base
{
public:
    derived2() { int val = 2; }
};

// 2 copies of val in derived 3 will result in error ambiguous
class derived3 : public derived1, public derived2
{
public:
    void getData() { cout << val << endl; }
};

int main()
{
    derived3 obj;
    obj.getData();
    return 0;
}