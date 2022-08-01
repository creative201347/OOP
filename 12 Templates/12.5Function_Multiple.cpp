#include <iostream>
using namespace std;

template <class T1, class T2>
void display(T1 x, T2 y) { cout << x << " " << y << endl; }

int main()
{
    cout << "Calling function template with int and string type parameters" << endl;
    display(1999, "Nabin");

    cout << "Calling function template with float and integer type parameters" << endl;
    display(12.42, 1234);

    return 0;
}