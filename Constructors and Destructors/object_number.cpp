#include <iostream>
using namespace std;

class Counter
{
private:
    static int count;

public:
    Counter()
    {
        count++;
        cout << "The total number of objects created is: " << count << endl;
    }
};
int Counter::count = 0;

int main()
{
    Counter a1, a22, a33, a44;
    return 0;
}
