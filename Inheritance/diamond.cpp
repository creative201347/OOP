/*
Student
    roll_number
    getnumber() & putnumber()
test : public Student
    mark1, mark2
    getmarks() & putmarks()
sport: public Student
    score
    getscore() & putscore()
result: public test, public sport
    total
    display()
        putnumber() & putmarks() & putscore()
main
    result obj
    obj.getnumber() & getmarks() & getscore()
    obj.display()
*/

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void get_number(int a) { roll_number = a; }
    void put_number() { cout << roll_number << endl; }
};

class test : virtual public Student
{
protected:
    float part1, part2;

public:
    void get_marks(float x, float y)
    {
        part1 = x;
        part2 = y;
    }
    void put_marks() { cout << part1 << "\t" << part1 << endl; }
};

class sport : virtual public Student
{
protected:
    float score;

public:
    void get_score(float x) { score = x; }
    void put_score() { cout << score << endl; }
};

class result : public test, public sport
{
    float total;

public:
    void display()
    {
        total = part1 + part2 + score;
        put_number();
        put_marks();
        put_score();
        cout << "Total score: " << total << endl;
    }
};
int main()
{
    result student_1;
    student_1.get_number(783);
    student_1.get_marks(30.6, 80);
    student_1.get_score(80);
    student_1.display();
    return 0;
}