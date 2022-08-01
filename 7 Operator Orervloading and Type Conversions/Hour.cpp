/*
Basic to class conversion (BCC)
Time
    min sec
    Time(float h)
        min =
        sec  =
Main
    Time t;
    t = 180
*/

#include <iostream>
using namespace std;

class timee
{
    int min, sec;

public:
    timee() {}
    void display() { cout << min << ":" << sec; }
    timee(float hr)
    {
        float m;
        m = hr * 60;
        min = m;
        sec = (m - min) * 60;
    }
};
int main()
{
    float hour;
    cout << "enter the time in hr";
    cin >> hour;
    timee t = hour;
    cout << "\n time in hr and min is \n";
    t.display();
    return 0;
}