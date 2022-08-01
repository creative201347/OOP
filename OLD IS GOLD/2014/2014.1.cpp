/*
When we declare a member of a class as static it means no matter how many objects of the class are created,
    there is only one copy of the static member.
    This means one single copy of that data member is shared between all objects of that class.
    All static data is initialized to zero when the first object is created, if no other initialization is present
    Static data members can be initialized outside the class using the scope resolution operator (::)
    Since Static data members are class level variables, we do not require the object to access these variables and
        they can be accessed simply by using the class name and scope resolution(::) operator
    Also a static data member cannot be private
*/

#include <iostream>
using namespace std;

class Value
{
private:
    static int count;

public:
    Value()
    {
        cout << "Value of count is " << count << endl;
        count++;
    }
};
int Value::count = 10;
int main()
{
    Value c1, c2, c3, c4, c5;
    return 0;
}