/*
    Polar
        radius angle
        operator Rectangle()
    Rectangle
        xco yco

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
    void display() { cout << xco << " " << yco << endl; }
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
        {
            float x = radius * cos(angle);
            float y = radius * sin(angle);
            return Rectangle(x, y);
        }
    }
};
int main()
{
    Polar p(10, 0.5);
    Rectangle r;
    r = p;
    r.display();
    return 0;
}