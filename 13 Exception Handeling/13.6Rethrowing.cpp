#include <iostream>
using namespace std;

void divide(double x, double y)
{
    try
    {
        if (y == 0.0)
            throw y; // Throwing double
        else
            cout << "Division = " << (x / y) << endl;
    }
    catch (double)
    {
        cout << "Exception caught";
        throw; // Rethrowing double
    }
    cout << "End of function" << endl;
}

int main()
{
    cout << "Inside main" << endl;
    try
    {
        divide(10.5, 2.0);
        divide(10.3, 0.0);
    }
    catch (double e)
    {
        cout << "Caught double inside main" << endl;
    }
    cout << "End of main" << endl;
    return 0;
}