#include <iostream>
using namespace std;

class Time
{
private:
    int hrs, mins, secs;

public:
    Time() {}
    Time(int h, int m, int s)
    {
        hrs = h;
        mins = m;
        secs = s;
    }
    friend void add(Time, Time);
};

void add(Time t1, Time t2)
{
    int hr, min, sec;
    sec = t1.secs + t2.secs;
    min = t1.mins + t2.mins + (sec / 100);
    hr = t1.hrs + t2.hrs + (min / 60);

    min = min % 60;
    sec = sec % 60;
    cout << hr << " : " << min << " : " << sec << endl;
}

int main()
{
    Time t1(2, 3, 40), t2(3, 59, 45);
    add(t1, t2);
    return 0;
}
