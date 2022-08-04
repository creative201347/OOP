#include <iostream>
#include <string.h>

using namespace std;
class concatenate
{
    char *str;
    int length;

public:
    concatenate() {}
    concatenate(char *x)
    {
        length = strlen(x);
        str = new char[length + 1];
        strcpy(str, x);
    }

    void display()
    {
        cout << "\n"
             << str;
    }

    /*void add(concatenate &c1,concatenate &c2)
        {
            length=c1.length+c2.length;
            str=new char[length+1];
            strcpy(str,c1.str);
            strcat(str,c2.str);
        }*/
    friend concatenate operator+(concatenate &, concatenate &);
};
concatenate operator+(concatenate &c1, concatenate &c2)
{
    concatenate temp;
    temp.length = c1.length + c2.length;
    temp.str = new char[temp.length + 1];
    strcpy(temp.str, c1.str);
    strcat(temp.str, c2.str);
    return temp;
}

int main()
{
    concatenate c1("Santosh"), c2(" Tiwari"), c3;
    cout << "before concatenation";
    c1.display();
    c2.display();
    cout << "after concatenation";
    c3 = c1 + c2;
    // c3.add(c1, c2);
    c3.display();
    return 0;
}