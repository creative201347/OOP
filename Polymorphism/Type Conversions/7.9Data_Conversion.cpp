/*
Let us consider an example of an inventory of products in store. One way of recordinng the details of the products is to record their code number
total items in the stock and the cost of each item.
Another approach is to just specify the item code and the value of the item in the stock.
*/

#include <iostream>
using namespace std;

class invent2;
class invent1
{
    int code, items;
    float price;

public:
    invent1(int a, int b, float c)
    {
        code = a;
        items = b;
        price = c;
    }
    void putData()
    {
        cout << "Code: " << code << endl;
        cout << "Items: " << items << endl;
        cout << "Value: " << price << endl;
    }
    int getcode() { return code; }
    int getitems() { return items; }
    int getprice() { return price; }
    operator float() { return (items * price); }

    // operator invent2()
    // {
    //     invent2 temp;
    //     temp.code = code;
    //     temp.value = price * items;
    //     return temp;
    // }
};
class invent2
{
private:
    int code;
    float value;

public:
    invent2()
    {
        code = 0;
        value = 0;
    };
    invent2(int x, float y)
    {
        code = x;
        value = y;
    };
    void putData()
    {
        cout << "Code: " << code << endl;
        cout << "Value: " << value << endl;
    }
    invent2(invent1 p)
    {
        code = p.getcode();
        value = p.getitems() * p.getprice();
    }
};

int main()
{
    invent1 s1(100, 5, 140.0);
    invent2 d1;
    float total_value;
    // total_value = s1;
    // d1 = s1 ;

    cout << "Product details - invent1 type" << endl;
    s1.putData();
    cout << "Stock value" << endl;
    cout << "Value =" << total_value << endl;
    cout << "Product details - invent2 type" << endl;
    d1.putData();

    return 0;
}