#include <iostream>
using namespace std;

class Shape
{
private:
    /* data */
public:
    virtual void area() = 0;
};

class rectangle : public Shape
{
private:
    int l, b;

public:
    rectangle(int l, int b)
    {
        this->l = l;
        this->b = b;
    }
    void area() { cout << l * b << endl; }
};
int main()
{
    rectangle r(10, 20);
    Shape *ptr = &r;
    ptr->area();
    return 0;
}