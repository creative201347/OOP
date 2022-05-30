/* Neither takes argmunet nor returns any value
Storage cleanup after exectuion completes
*/

#include <iostream>
using namespace std;

class num
{
public:
    static int count;
    num()
    {
        cout << count << endl;
        count++;
        cout << count << endl;
    }
    ~num()
    {
        count--;
        cout << count << endl;
    }
};
int num::count = 10;
int main()
{
    num n;
    return 0;
}