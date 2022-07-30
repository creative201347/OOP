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
    friend Complex operator+(Complex c1, Complex c2);
    void display()
    {
        cout << x << "\t" << y << endl;
    }
};

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.x = c2.x + c1.x;
    temp.y = c2.y + c1.y;
    return temp;
}
int main()
{
    Complex c1(1.4, 5.6), c2(3.2, 6.6), c3;
    c3 = c1 + c2;
    c2.display();
    return 0;
}