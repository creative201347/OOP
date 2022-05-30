#include <iostream>
using namespace std;

inline void add(int &x, int &y, int &z)
{
    z = x + y;
}
int main()
{
    int a, b, c;
    cout << "Enter any two numbers: ";
    cin >> a >> b;
    add(a, b, c);
    cout << "Addition of two number is: " << c << endl;
    return 0;
}


// Inline functions