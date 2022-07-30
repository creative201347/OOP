/*
This program defines a class called Point that stores the x and y coordinates of a point.
The class uses parameterized constructor for initializing the class objects
*/

#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << x << y;
    }
};

int main()
{
    Point p1(5, 10);
    p1.display();
    return 0;
}