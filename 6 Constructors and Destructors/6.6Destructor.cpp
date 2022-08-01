#include <iostream>
using namespace std;

int count = 0;

class test
{
public:
    test()
    {
        count++;
        cout << "\n Constructor msg: Object number " << count << " created..";
    }
    ~test()
    {
        cout << "\n Destructor msg: Object number " << count << " destroyed..";
        count--;
    }
};

int main()
{
    cout << "Inside the main block..";
    cout << "\n Creating first object T1...";
    test T1;

    {
        cout << "\n Inside Block 1...";
        cout << "\n Creating two more objects T2 and T3...";
        test T2, T3;
        cout << "\nLeaving Block 1...";
    }

    cout << "\n Back inside the main block..,";
    return 0;
}