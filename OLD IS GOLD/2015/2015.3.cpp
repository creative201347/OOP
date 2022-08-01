#include <iostream>
using namespace std;

class Person
{
private:
    string name, address;
    int age;

public:
    Person(string n, string addr, int a)
    {
        name = n;
        address = addr;
        age = a;
    }
    void showData() { cout << name << "\t" << address << "\t" << age << endl; }
};

class Student : public Person
{
private:
    string program, semester;

public:
    Student(string n, string addr, int a, string pgrm, string sem) : Person(n, addr, a)
    {
        program = pgrm;
        semester = sem;
    }
    void showData() { cout << program << "\t" << semester << endl; }
};

class Teacher : public Person
{
private:
    string qualification, department;

public:
    Teacher(string n, string addr, int a, string qual, string dep) : Person(n, addr, a)
    {
        qualification = qual;
        department = dep;
    }
    void showData() { cout << qualification << "\t" << department << endl; }
};

int main()
{
    Teacher t("Nabin", "Darchula", 20, "Bachelor", "Computer");
    Student s("Nabin", "Darchula", 20, "BECE", "Second");
    t.Person::showData();
    s.showData();
    t.showData();
    return 0;
}