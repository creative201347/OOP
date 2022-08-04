#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{

    ifstream myfile("file.txt");
    if (!myfile)
    {
        cout << "Error opening output file" << endl;
        system("pause");
        return -1;
    }

    const size_t SIZE1 = 30;
    const size_t SIZE2 = 10;
    string line[SIZE1][SIZE2];

    string tmp; // temporary string to store the line-as-string

    size_t i = 0; // the current line index
    size_t j = 0; // the current word index

    while (!myfile.eof() && i < SIZE1)
    {
        getline(myfile, tmp);
        stringstream ss(tmp); // convert the line to an input stream to be able
                              // to extract the words
        size_t j = 0;
        while (ss)
        {
            ss >> line[i][j]; // here i is as above: the current line index
            ++j;
        }
        i++;
    }

    size_t numLines = i;

    cout << numLines << "\n";
    for (i = 1; i <= numLines; ++i)
    {

        for (size_t j = 0; j < SIZE2; ++j)
        {
            if (!line[i][j].empty())
            {
                cout << line[i][j] << " ";
            }
        }
        cout << "\n";
    }
    cout << line[3][0] << "\n"; // print the third line first word
}