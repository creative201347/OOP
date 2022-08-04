#include <iostream>
using namespace std;

void test(int x)
{
    try
    {
        if (x == 1)
            throw x;
        else if (x == 0)
            throw 'x';
        else if (x == -1)
            throw 1.00;
        cout << "End of try block" << endl;
    }
    catch (int e)
    {
        cout << "Caught an integer " << e << endl;
    }
    catch (char e)
    {
        cout << "Caught an character " << e << endl;
    }
    catch (float e)
    {
        cout << "Caught an float " << e << endl;
    }
    cout << "End of try-catch block" << endl;
}

int main()
{
    cout << "Testing Multiple Catches" << endl;
    test(1);
    test(0);
    test(-1);
    return 0;
}