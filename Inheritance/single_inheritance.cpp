#include <iostream>
using namespace std;

class base
{
private:
    int a;

protected:
    int b;

public:
    int c;
    void input()
    {
        cout << "Enter three numbers: ";
        cin >> a >> b >> c;
    }
    void display()
    {
        cout << "Three numbers are: ";
        cout << a << " " << b << " " << c;
    }
    int returna()
    {
        return a;
    }
};

class derived : public base
{
private:
    int d;

public:
    void inputd()
    {
        cout << "\nEnter any number: ";
        cin >> d;
    }
    void displayd()
    {

        cout << "Entered number is: ";
        cout << d;
    }
    void add()
    {
        cout << "\nAdditon of numbers is: ";
        cout << returna() + b + c + d << endl;
    }
};
int main()
{
    derived d;
    d.input();
    d.display();
    d.inputd();
    d.displayd();
    d.add();
    return 0;
}