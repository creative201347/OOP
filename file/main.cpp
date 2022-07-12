// Read file line by line using C++
// This is a C++ program to read file line by line.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    fstream newfile;
    newfile.open("file.txt", ios::out); // open a file to perform write operation using file object
    if (newfile.is_open())              // checking whether the file is open
    {
        newfile << "Hello World!! \n"; // inserting text
        newfile.close();               // close the file object
    }
    newfile.open("file.txt", ios::in); // open a file to perform read operation using file object
    if (newfile.is_open())
    { // checking whether the file is open
        string tp;
        while (getline(newfile, tp))
        {                       // read data from file object and put it into string.
            cout << tp << "\n"; // print the data of the string
        }
        newfile.close(); // close the file object.
    }
    return 0;
}
