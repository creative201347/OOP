/*  Program to convert polar to rectangle using casting operator (Source)
    Polar
        operator Rectangle()

    Rectangle
*/
#include <iostream>
#include <math.h>
using namespace std;

class Rectangle
{
    float xco, yco;

public:
    Rectangle() {}
    Rectangle(float x, float y)
    {
        xco = x;
        yco = y;
    }
    void display() { cout << xco << "\t" << yco << endl; }
};

class Polar
{
    float radius, angle;

public:
    Polar() {}
    Polar(float r, float a)
    {
        radius = r;
        angle = a;
    }
    operator Rectangle()
    {
        float xco = radius * cos(angle);
        float yco = radius * sin(angle);
        return Rectangle(xco, yco);
    }
};

int main()
{
    Polar p(5, 0.2);
    Rectangle r;
    r = p;
    r.display();
    return 0;
}