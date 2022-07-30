/* Program to converse polar to rectangle coordinate using casting operator
    rectangle

    polar
        operator rectangle()

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
    void display()
    {
        cout << "\n X=" << xco << "\t Y=" << yco;
    }
};
class polar
{
    float radius, angle;

public:
    polar() {}
    polar(float c, float d)
    {
        radius = c;
        angle = d;
    }
    void display()
    {
        cout << "\n radius=" << radius << "\t angle=" << angle;
    }
    operator rectangle()
    {
        float xco = radius * cos(angle);
        float yco = radius * sin(angle);
        return rectangle(xco, yco);
    }
};
int main()
{
    polar p(5, 0.93);
    rectangle r;
    cout << "\n before conversion\ n ";
    p.display();
    cout << "\n after conversion\ n ";
    r = p;
    r.display();
    return 0;
}