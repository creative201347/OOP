#include <iostream>
using namespace std;

class test
{
    int *a;

public:
    test(int size)
    {
        a = new int[size];
        cout << "\n Constructor Msg: Integer array of size " << size << " createc...";
    }
    ~test()
    {
        delete a;
        cout << "\n Destructor Msg: Freed up the memory allocated for integer array";
    }
};

int main()
{
    int a;
    cout << "Enter the size of an array ";
    cin >> a;

    cout << "\n Creating an object of test class...";
    test t(a);
    return 0;
}
