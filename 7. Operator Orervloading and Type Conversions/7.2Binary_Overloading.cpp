#include <iostream>
using namespace std;

class Complex
{
    float x, y;

public:
    Complex() {}
    Complex(float real, float img)
    {
        x = real;
        y = img;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.x = c.x + x;
        temp.y = c.y + y;
        return temp;
    }
    void display()
    {
        cout << x << "\t" << y << endl;
    }
};
int main()
{
    Complex c1(1.4, 5.6), c2(3.2, 6.6), c3;
    c3 = c1 + c2;
    c2.display();
    return 0;
}