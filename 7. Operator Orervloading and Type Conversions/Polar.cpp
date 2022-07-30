/* Program to converse rectangle to polar coordinate using constructor
    Rectangle
        getter()

    Polar
        Polar()
*/

#include <iostream>
#include <math.h>
using namespace std;

class rectangle
{
    float xco, yco;

public:
    rectangle() {}
    rectangle(float x, float y)
    {
        xco = x;
        yco = y;
    }
    float getxco() { return xco; }
    float getyco() { return yco; }
};

class polar
{
    float radius, angle;

public:
    polar() {}
    polar(rectangle r)
    {
        float x = r.getxco();
        float y = r.getyco();
        radius = sqrt((x * x, y * y));
        angle = atan(x / y);
    }
    void display()
    {
        cout << radius << "\t" << angle << endl;
    }
};

int main()
{
    rectangle r(10, 20);
    polar p;
    p = r;
    p.display();
    return 0;
}