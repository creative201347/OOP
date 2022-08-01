#include <iostream>
using namespace std;

class code
{
    int id;

public:
    code() {}
    code(int a) { id = a; }
    code(code &c) { id = c.id; }
    void display() { cout << id << endl; }
};
int main()
{
    code A(20);
    code B(A);
    code C = A;

    code D;
    D = A;

    cout << "\n id od A: ";
    A.display();
    cout << "\n id od B: ";
    B.display();
    cout << "\n id od C: ";
    C.display();
    cout << "\n id od D: ";
    D.display();

    return 0;
}