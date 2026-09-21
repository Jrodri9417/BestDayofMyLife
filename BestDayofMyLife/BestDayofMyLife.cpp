// BestDayofMyLife.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    //Open the text file
    ifstream fin("Best Day of My Life.txt");

    //Check if the file opened
    if (fin.is_open() == false)
    {
        cout << "File was not found\n";
        return -1;
    }

    string line;

    //Read and print the first 10 lines using a for loop
    cout << "First 10 lines:\n";

    for (int i = 0; i < 10 && getline(fin, line); ++i)
    {
        cout << line << "\n";
    }

    fin.close();

    //Reopen the file so we can read it from the beginning
    fin.open("Best Day of My Life.txt");

    //Read and print ALL lines using a while loop
    cout << "\nAll lines:\n";

    int lineCount = 0;

    while (getline(fin, line))
    {
        cout << line << "\n";
        lineCount++;
    }

    //Print total number of lines
    cout << "\nTotal number of lines: " << lineCount << "\n";

    fin.close();

    return 0;
}