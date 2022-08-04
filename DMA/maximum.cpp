// WAP to dynamically allocate array size and input, display , add , find maximum and check whether a number is present or not

#include <iostream>
using namespace std;
class Array
{
private:
    int i, n, *ptr, sum, maxi;

public:
    Array() {}
    Array(int x)
    {
        n = x;
        ptr = new int[n];
    }
    void input()
    {
        cout << "Enter the elements: ";
        for (i = 0; i < n; i++)
        {
            cin >> *(ptr + i);
        }
    }
    void display()
    {
        cout << "The elements are: ";
        for (i = 0; i < n; i++)
        {
            cout << *(ptr + i) << "\t";
        }
    }
    void max()
    {
        maxi = 0;
        for (i = 0; i < n; i++)
        {
            if (*(ptr + i) > maxi)
            {
                maxi = *(ptr + i);
            }
        }
        cout << "\nThe maximum element is: " << maxi;
    }
    void present()
    {
        int flag = 0, x;
        cout << "\nEnter any number to check whether it is present or not: ";
        cin >> x;

        for (i = 0; i < n; i++)
        {
            if (*(ptr + i) == x)
            {
                flag++;
            }
        }
        if (flag >= 1)
        {

            cout << "Present\n";
        }
        else
        {
            cout << "Not Present\n";
        }
    }
    ~Array()
    {
        delete[] ptr;
    }
};

int main()
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;
    Array a(size);
    a.input();
    a.display();
    a.max();
    a.present();
    return 0;
}