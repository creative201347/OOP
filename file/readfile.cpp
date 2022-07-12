#include <iostream>
#include <fstream>
#include <string>

#define SIZE 100000 // Defines size of array to a large value

using namespace std;

int main()
{
    string filename;
    cout << "Enter filename:";
    cin >> filename;

    string line;      // To read each line from code
    int i = 0;        // Variable to keep count of each line
    string arr[SIZE]; // array to store each line
    ifstream mFile(filename);
    if (mFile.is_open())
    {
        while (!mFile.eof())
        {
            getline(mFile, line);
            arr[i] = line;
            i++;
        }
        mFile.close();
    }
    else
        cout << "Couldn't open the file\n";

    for (int j = 0; j < i; j++)
    {
        cout << arr[j] << endl;
    }
    return 0;
}