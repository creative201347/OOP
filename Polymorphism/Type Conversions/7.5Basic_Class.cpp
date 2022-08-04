#include <iostream>
using namespace std;

class Time
{
    int hrs, mins;

public:
    Time() {}
    Time(int min)
    {
        hrs = min / 60;
        mins = min % 60;
    }
    void display()
    {
        cout << hrs << " : " << mins << endl;
    }
};

int main()
{
    Time t;
    t = 260;
    t.display();
    return 0;
}