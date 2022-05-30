
/*
A copy constructor is a member function that initializes
    an object using another object of the same class.
A copy constructor has the following general function prototype:
    ClassName (const ClassName &old_obj);
*/

#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number() {}
    Number(int num)
    {
        a = num;
    }
    Number(Number &obj)
    {
        a = obj.a;
    }
    void display()
    {
        cout << a << endl;
    }
};
int main()
{
    Number x, y, z(10);
    Number z1(z);
    z.display();
    z1.display();
    return 0;
}