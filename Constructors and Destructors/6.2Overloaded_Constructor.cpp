#include <iostream>
using namespace std;
class Complex
{
private:
    float x, y;

public:
    Complex() {}
    Complex(float a)
    {
        x = y = a;
    }
    Complex(float real, float img)
    {
        x = real;
        y = img;
    }

    friend Complex sum(Complex, Complex);
    friend void display(Complex);
};

Complex sum(Complex c1, Complex c2)
{
    Complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return c3;
}

void display(Complex c)
{
    cout << c.x << "\t" << c.y << endl;
}

int main()
{
    Complex A(2.77, 3.66);
    Complex B(12.45);
    Complex C;

    C = sum(A, B);
    display(A);
    display(B);
    display(C);
    return 0;
}