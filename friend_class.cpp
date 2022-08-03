/*
Data hiding is a fundamental concept of object-oriented programming.
    It restricts the access of private members from outside of the class.
A friend function can access the private and protected data of a class.
    We declare a friend function using the friend keyword inside the body of the class.


When a class is declared a friend class, all the member functions of the friend class become friend functions.
class ClassB;

class ClassA {
   // ClassB is a friend class of ClassA
   friend class ClassB;
   ... .. ...
}

class ClassB {
   ... .. ...
}
Since ClassB is a friend class, we can access all members of ClassA from inside ClassB.
However, we cannot access members of ClassB from inside ClassA.
    It is because friend relation in C++ is only granted, not taken.
*/

// C++ program to demonstrate the working of friend class

#include <iostream>
using namespace std;

class Time2;
class Time1
{
    int hrs, mins;

public:
    Time1(int h, int m)
    {
        hrs = h;
        mins = m;
    };
    friend class Time2;
};

class Time2
{
    int hrs, mins;

public:
    Time2(int h, int m)
    {
        hrs = h;
        mins = m;
    }
    void add(Time1 t1, Time2 t2)
    {
        mins = t1.mins + t2.mins;
        hrs = t1.hrs + t2.hrs + mins / 60;
        mins = mins % 60;
        cout << hrs << ":" << mins;
    }
};
int main()
{
    Time1 t1(1, 40);
    Time2 t2(1, 40);
    t2.add(t1, t2);
    return 0;
}
