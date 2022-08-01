/* Class to Basic (Casting operator)
    Time
        min sec
        operator int()


*/

#include <iostream>
using namespace std;

class Time
{
private:
    int hr, sec;

public:
    Time() {}
    Time(int h, int s)
    {
        hr = h;
        sec = s;
    }
    operator int()
    {
        int mins;
        mins = hr * 60 + sec / 60;
        return mins;
    }
};

int main()
{
    Time t(1, 120);
    int m = t;
    cout << m << endl;
    return 0;
}