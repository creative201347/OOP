#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << " " << b << endl;
    }
};
int main()
{
    Complex c1(10, 20), c2(30);
    c1.display();
    c2.display();
    return 0;
}