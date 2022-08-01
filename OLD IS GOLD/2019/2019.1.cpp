#include <iostream>
using namespace std;

class Base
{
    int x, y, z;

public:
    void inputBase(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    friend class Derived;
};
class Derived : public Base
{
public:
    Derived add_vector(Base v1, Base v2)
    {
        Derived D;
        D.x = v1.x + v2.x;
        D.y = v1.y + v2.y;
        D.z = v1.z + v2.z;
        return D;
    }
    void display() { cout << x << "i+" << y << "j+" << z << "k" << endl; }
};

int main()
{
    Base B1, B2;
    Derived D3;
    B1.inputBase(2, 3, 4);
    B2.inputBase(7, 5, 6);
    D3 = D3.add_vector(B1, B2);
    D3.display();
    return 0;
}