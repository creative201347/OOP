#include <iostream>
#include <string.h>
using namespace std;

class cat
{
private:
    char *name;
    int length;

public:
    cat() {}
    cat(char *n)
    {
        length = strlen(n);
        name = new char[length + 1];
        strcpy(name, n);
    }
    void display() { cout << name << endl; }
    friend cat add(cat, cat);
};

cat add(cat c1, cat c2)
{
    cat temp;
    temp.length = c1.length + c2.length;
    temp.name = new char[temp.length + 1];
    strcpy(temp.name, c1.name);
    strcat(temp.name, c2.name);
    return temp;
}
int main()
{
    cat c1("Nabin"), c2(" Dhami"), c3;
    c3 = add(c1, c2);
    c3.display();
    return 0;
}