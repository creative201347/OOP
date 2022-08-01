#include <iostream>
using namespace std;

class Student
{
private:
    string name;

public:
    void setData()
    {
        cout << "Enter name: ";
        cin >> name;
    }
    void display() { cout << name << endl; }
};
class Bachelor : public Student
{
private:
    string faculty;
    Student s;

public:
    void
    setData()
    {
        s.setData();
        cout << "Enter faculty: ";
        cin >> faculty;
    }
    void display()
    {
        s.display();
        cout << faculty << endl;
    }
};
class Computer : public Bachelor
{
private:
    int roll;
    Bachelor b;

public:
    void
    setData()
    {
        b.setData();
        cout << "Enter roll: ";
        cin >> roll;
    }
    void display()
    {
        b.display();
        cout << roll << endl;
    }
};

int main()
{
    Computer s[3];
    for (int i = 0; i < 3; i++)
        s[i].setData();
    for (int i = 0; i < 3; i++)
        s[i].display();

    return 0;
}