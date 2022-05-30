#include <iostream>
using namespace std;

int SI(int p, float r = 2.5, int t = 2)
{
    return (p * t * r) / 100;
}

int main()
{
    int a;
    cout << "Enter principle: ";
    cin >> a;
    cout << "Simple intrest: " << SI(a) << endl;
    return 0;
}