#include <iostream>
using namespace std;

class Time
{
    int mins;

public:
    Time() {}
    Time(int a) { mins = a; }
    operator int()
    {
        int h = mins / 60;
        return h;
    }
};

int main()
{
    Time t(1250);
    int hrs = t;
    cout << hrs << endl;
    return 0;
}