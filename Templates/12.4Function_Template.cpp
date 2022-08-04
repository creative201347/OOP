#include <iostream>
using namespace std;

// template <class T>
// void swap(T &x, T &y)
// {
//     T temp = x;
//     x = y;
//     y = temp;
// }
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
void func(int m, int n, float a, float b)
{
    cout << "m and n before swap: " << m << " " << n << endl;
    swap(m, n);
    cout << "m and n after swap: " << m << " " << n << endl;

    // cout << "a and b before swap: " << a << " " << b << endl;
    // swap(a, b);
    // cout << "a and b after swap: " << m << " " << b << endl;
}

int main()
{
    func(100, 200, 11.22, 22.34);
    return 0;
}