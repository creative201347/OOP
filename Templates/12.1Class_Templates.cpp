#include <iostream>
using namespace std;

template <class T>
class vector
{
    // T 3 = 3;
    T v[3];

public:
    vector()
    {
        // v = new T[3];
        for (int i = 0; i < 3; i++)
        {
            v[i] = 0;
        }
    }
    vector(T *a)
    {
        for (int i = 0; i < 3; i++)
        {
            v[i] = a[i];
        }
    }
    T operator*(vector &y)
    {
        T sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum = this->v[i] * y.v[i];
        }
        return sum;
    }
    void display()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << v[i] << "\t";
        }
        cout << endl;
    }
};

int main()
{
    int x[3] = {1, 2, 3};
    int y[3] = {4, 5, 6};
    vector<int> v1;
    vector<int> v2;
    v1 = x;
    v2 = y;
    cout << "v1 = ";
    v1.display();
    cout << "v2 = ";
    v2.display();

    cout << "v1 x v2 = " << v1 * v2 << endl;
    return 0;
}