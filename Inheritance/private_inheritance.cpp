// Private inheritance

#include <iostream>
using namespace std;

class base
{
private:
    int a;

protected:
    int b;

public:
    void input()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
    void display()
    {
        cout << "Two numbers are: ";
        cout << a << " " << b;
    }
    int returna()
    {
        return a;
    }
};
class derived : private base
{
public:
    void mult()
    {
        input();
        display();
        cout << "\nMultiplication of two number is: " << returna() * b << endl;
    }
};
int main()
{
    derived d;

    d.mult();
    return 0;
}