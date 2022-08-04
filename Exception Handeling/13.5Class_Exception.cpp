#include <iostream>
#include <string.h>
using namespace std;

class Error
{
private:
    int err_code;
    char *err_desc;

public:
    Error(int c, char *d)
    {
        err_code = c;
        err_desc = new char[strlen(d) + 1];
        strcpy(err_desc, d);
    }
    void display() { cout << err_code << " : " << err_desc << endl; }
};

int main()
{
    try
    {
        int m;
        cout << "Enter any number ";
        cin >> m;
        if (m == 0)
            throw Error(402, "Unauthorized");
        else
        {
            cout << "Successfully exited the program" << endl;
            exit(0);
        }
    }
    catch (Error e)
    {
        cout << "Caught Error" << endl;
        e.display();
    }
    return 0;
}
