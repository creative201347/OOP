/*
Virtual classes are primarily used during multiple inheritance.
To avoid, multiple instances of the same class being taken to the same class
    which later causes ambiguity, virtual classes are used.

Virtual Class is defined by writing a keyword “virtual” in the derived classes
    which allows only one copy of data to be copied to Class B and Class C.
        It is a way of preventing multiple instances of a class appearing as a
            parent class in inheritance hierarchy when multiple inheritances are used.
*/

#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_no;

public:
    void set_roll_number(int a)
    {
        roll_no = a;
    }
    void print_number()
    {
        cout << "Roll number: " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "Math: " << maths << endl;
        cout << "Physics: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float s)
    {
        score = s;
    }
    void print_score()
    {
        cout << "Score: " << score << endl;
    }
};
class Result : public Test, public Sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Total: " << total << endl;
    }
};

int main()
{
    Result Nabin;
    Nabin.set_roll_number(201347);
    Nabin.set_marks(80, 75);
    Nabin.set_score(90);
    Nabin.display();
    return 0;
}