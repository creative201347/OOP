#include <iostream>
#include <string.h>
using namespace std;

class String
{
    char *name;
    int length;

public:
    String()
    {
        length = 0;
        name = new char[length + 1];
    }
    String(char *s)
    {
        length = strlen(s);
        name = new char[length + 1];
        strcpy(name, s);
    }
    void display()
    {
        cout << name << "\n";
    }
    void concat(String &a, String &b);
};
void String::concat(String &a, String &b)
{
    length = a.length + b.length;
    delete name;
    name = new char[length + 1];
    strcpy(name, a.name);
    strcat(name, b.name);
}

int main()
{

    String s1("Nabin"), s2(" Dhami"), s3;
    s3.concat(s1, s2);
    s3.display();
    return 0;
}