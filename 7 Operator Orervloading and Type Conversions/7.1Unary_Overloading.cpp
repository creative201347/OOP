#include <iostream>
using namespace std;

class Space
{
    int x;

public:
    Space(int a) { x = a; }
    void operator++()
    {
        ++x;
    }
    void operator++(int)
    {
        x++;
    }
    void operator--()
    {
        --x;
    }
    void operator-()
    {
        x = -x;
    }
    void display()
    {
        cout << x << endl;
    }
};
int main()
{
    Space s1(20);
    s1.display();
    ++s1;
    s1.display();
    s1++;
    s1.display();
    --s1;
    s1.display();
    -s1;
    s1.display();

    return 0;
}