#include <iostream>
using namespace std;

class Fibo
{
    int f;

public:
    Fibo(int h) { f = h; }
    void display() { cout << f << endl; }
    void operator++() { ++f; }
};
int main()
{
    Fibo f = 1;
    for (int i = 0; i <= 10; i++)
    {
        ++f;
        f.display();
    }
    return 0;
}