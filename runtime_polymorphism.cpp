/*
media
    tilte,price
    display()
book : public media
    pages
    display()
tape : public media
    time
    display()
main
    media *list[2]
    list[0] = & book b()
    list[1] = & tape t()
    list[0]->display()
    list[1]->display()
*/

#include <iostream>
#include <string.h>
using namespace std;

class media
{
protected:
    char title[50];
    float price;

public:
    media(char *s, float a)
    {
        strcpy(title, s);
        price = a;
    }
    virtual void display() {}
};

class book : public media
{
private:
    int pages;

public:
    book(char *s, float a, int p) : media(s, a) { pages = p; }
    void display()
    {
        cout << "Title: " << title << endl
             << "Pages: " << pages << endl
             << "Price: " << price << endl;
    }
};

class tape : public media
{
private:
    float time;

public:
    tape(char *s, float a, float t) : media(s, a) { time = t; }
    void display()
    {
        cout << "Title: " << title << endl
             << "Time: " << time << endl
             << "Price: " << price << endl;
    }
};

int main()
{
    char *title = new char[50];
    float price, time;
    int pages;

    // Book details
    cout << "ENTER BOOK DETAILS" << endl;
    cout << "Title: ";
    cin >> title;
    cout << "Price: ";
    cin >> price;
    cout << "Pages: ";
    cin >> pages;
    book b(title, price, pages);

    // Tape details
    cout << "ENTER TAPE DETAILS" << endl;
    cout << "Title: ";
    cin >> title;
    cout << "Price: ";
    cin >> price;
    cout << "Time: ";
    cin >> time;
    tape t(title, price, time);

    media *list[2];
    list[0] = &b;
    list[1] = &t;

    cout << "MEDIA DETAILS" << endl;
    cout << "------BOOK------" << endl;
    list[0]->display();

    cout << "------TAPE------" << endl;
    list[1]->display();

    return 0;
}