#include <iostream>
using namespace std;

template <class T1, class T2>
class Test
{
    T1 a;
    T2 b;

public:
    Test(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << a << " and " << b << endl;
    }
};
int main()
{
    cout << "Initialising the class template as test1 with float and int data types..." << endl;
    Test<float, int> test1(1.234, 45);
    test1.show();

    cout << "Initialising the class template as test2 with int and char data types..." << endl;
    Test<int, string> test2(24, "Nabin");
    test2.show();
    return 0;
}