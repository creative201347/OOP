#include <iostream>
#include <string.h>

using namespace std;
class A
{
    int roll;
    char *name;
    int marks;
    static int batch;

public:
    A() {}
    A(int x, char *y, int z)
    {
        roll = x;
        strcpy(name, y);
        marks = z;
    }
    void display()
    {
        cout << "\n name=" << name << "\n roll=" << roll << "\n marks=" << marks;
    }
};
int A::batch = 2077;
int main()
{
    A a(41, "santosh", 1);
    a.display();
    return 0;
}