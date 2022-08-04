#include <iostream>
using namespace std;

template <class T>
void display(T x)
{
    cout << x << endl;
}

template <class T1, class T2>
void display(T1 x, T2 y)
{
    cout << x << " " << y << endl;
}

template <class T1, class T2, class T3>
void display(T1 x, T2 y, T3 z)
{
    cout << x << " " << y << " " << z << endl;
}
int main()
{
    display(100);
    display("Nabin", "Dhami");
    display("Hello", 124, 7.909);
    return 0;
}