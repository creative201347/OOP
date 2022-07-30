#include <iostream>
#include <string>
using namespace std;
class university
{
    string name, location;

public:
    university(string a, string b)
    {
        name = a;
        location = b;
    }
    void display()
    {
        cout << "University Name:" << name << endl;
        cout << "University Location:" << location << endl;
    }
};
class affiliatedCollege : public virtual university
{
    string name, address;
    int No_of_Programs;

public:
    affiliatedCollege(string a, string b, string c, string d, int e) : university(a, b)
    {
        name = c;
        address = d;
        No_of_Programs = e;
    }
    void display()
    {
        cout << "name:" << name << endl
             << "address:" << address << endl
             << "No of programs:" << No_of_Programs << endl;
    }
};
class constituentCollege : public virtual university
{
    string schoolName, dean, NO_OF_PROGRAMS;

public:
    constituentCollege(string a, string b, string f, string g, string h) : university(a, b)
    {
        schoolName = f;
        dean = g;
        NO_OF_PROGRAMS = h;
    }
    void display()
    {
        cout << "school name:" << schoolName << endl
             << "dean name:" << dean << endl
             << "Program:" << NO_OF_PROGRAMS << endl;
    }
};
class student : public affiliatedCollege, public constituentCollege
{
    string name, program;
    int enrolledYear;

public:
    student(string a, string b, string c, string d, int e, string f, string g, string h, string i, string j, int k) : affiliatedCollege(a, b, c, d, e), constituentCollege(a, b, f, g, h), university(a, b)
    {
        name = i;
        program = j;
        enrolledYear = k;
    }
    void display()
    {

        cout << "name of student:" << name << endl
             << "Program:" << program << endl
             << "Enrolled Year:" << enrolledYear << endl;
    }
};

int main()
{
    student s("pokhara", "kaski", "NCIT", "Balkumari", 3, "laliguras", "santosh", "computer", "nabin", "BECE", 2022);
    s.university::display();
    s.affiliatedCollege::display();
    s.constituentCollege::display();
    s.display();
    return 0;
}