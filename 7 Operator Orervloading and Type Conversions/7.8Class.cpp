#include <iostream>
using namespace std;

class Time1
{
    int hr, secs;

public:
    Time1() {}
    Time1(int m, int s)
    {
        hr = m;
        secs = s;
    }
    void display()
    {
        cout << hr << "\t" << secs << endl;
    }
    int gethr()
    {
        return hr;
    }
    int getsecs()
    {
        return secs;
    }
};

class Time2
{
    int mins;

public:
    Time2() {}
    Time2(Time1 t)
    {
        int h = t.gethr();
        int s = t.getsecs();
        mins = h * 60 + s % 60;
    }
    void display()
    {
        cout << mins << endl;
    }
};

int main()
{
    Time1 t1(160, 680);
    Time2 t2;
    t1.display();

    t2 = t1;
    cout << "after conversion";
    t2.display();

    return 0;
}