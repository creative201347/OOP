#include <iostream>
using namespace std;

class Two;
class Three;
class One
{
private:
    int a;

public:
    One(int x) { a = x; }
    friend void largest(One, Two, Three, int);
};

class Two
{
private:
    int b;

public:
    Two(int y) { b = y; }
    friend void largest(One, Two, Three, int);
};

class Three
{
private:
    int c;

public:
    Three(int z) { c = z; }
    friend void largest(One, Two, Three, int);
};
void largest(One x, Two y, Three z, int w)
{
    if (x.a > y.b && x.a > z.c && x.a > w)
        cout << "The largest element is " << x.a << endl;
    else if (y.b > x.a && y.b > z.c && y.b > w)
        cout << "The largest element is " << y.b << endl;
    else if (z.c > x.a && z.c > y.b && z.c > w)
        cout << "The largest element is " << z.c << endl;
    else
        cout << "The largest element is " << w << endl;
}

int main()
{
    One o1(10);
    Two o2(20);
    Three o3(30);
    largest(o1, o2, o3, 0);
    return 0;
}