
/*
Constructor-> Destination
Rectangle
    xco,yco
Polar
    radius, angle
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
    float getx() { return xco; }
    float gety() { return yco; }
};

class Polar
{
    float radius, angle;

public:
    Polar() {}
    Polar(Rectangle r)
    {
        float x = r.getx();
        float y = r.gety();
        radius = sqrt((x * x, y * y));
        angle = atan(y / x);
    }
    void display() { cout << radius << " " << angle << endl; }
};
int main()
{
    Rectangle r(10, 20);
    Polar p;
    p = r;
    p.display();
    return 0;
}