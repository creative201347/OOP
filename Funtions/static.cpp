/*
Static data members are class members that are declared using static keywords.
Only one copy of that member is created for the entire class
    and is shared by all the objects of that class, no matter how many objects are created.

A static member function can only access static data member,
    other static member functions and any other functions from outside the class.


*/

#include <iostream>
using namespace std;

class student
{
    static int count;
    int number = 10;

public:
    student()
    {
        count++;
        number++;
    }
    void print() { cout << "Normal data member: " << number << endl; }
    static void display() { cout << "Static data member " << count << endl; }
};
int student::count = 10;
int main()
{
    student s1, s2, s3, s4;
    s4.print();

    student::display();
    return 0;
}