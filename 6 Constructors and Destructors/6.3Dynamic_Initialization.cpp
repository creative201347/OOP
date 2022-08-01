#include <iostream>
using namespace std;

class Fixed_deposit
{
    long int P_amount;
    int Years;
    float Rate;
    float R_value;

public:
    Fixed_deposit() {}
    Fixed_deposit(long int p, int y, float r = 0.12);
    Fixed_deposit(long int p, int y, int r);
    void display();
};

Fixed_deposit::Fixed_deposit(long int p, int y, float r)
{
    P_amount = p;
    Years = y;
    Rate = r;
    R_value = P_amount;
    for (int i = 0; i <= y; i++)
    {
        R_value = R_value * (1.0 + r);
    }
}
Fixed_deposit::Fixed_deposit(long int p, int y, int r)
{
    P_amount = p;
    Years = y;
    Rate = r;
    R_value = P_amount;
    for (int i = 0; i <= y; i++)
    {
        R_value = R_value * (1.0 + float(r) / 100);
    }
}

void Fixed_deposit::display()
{
    cout << "\n"
         << "Principal Amount = " << P_amount << "\n"
         << "Return Amount = " << R_value << "\n";
}

int main()
{
    Fixed_deposit FD1, FD2, FD3;
    long int p;
    int y;
    float r;
    int R;

    cout << "Enter amount, period, intrest rate(in percent)"
         << "\n";
    cin >> p >> y >> R;
    FD1 = Fixed_deposit(p, y, R);

    cout << "Enter amount, period, intrest rate(in decimal form)"
         << "\n";
    cin >> p >> y >> R;
    FD1 = Fixed_deposit(p, y, R);

    cout << "Enter amount and period"
         << "\n";
    cin >> p >> y;
    FD3 = Fixed_deposit(p, y);

    cout << "\nDeposit 1";
    FD1.display();

    cout << "\nDeposit 2";
    FD1.display();

    cout << "\nDeposit 3";
    FD1.display();
    return 0;
}