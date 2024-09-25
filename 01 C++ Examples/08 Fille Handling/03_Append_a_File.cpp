#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream my_file;

    // open a file input mode
    my_file.open("sample.txt", ios::app);

    // check if file exists or is free of errors
    if (my_file.fail())
    {
        cout << "Error! File not found!";
        exit(0);
    }

    // add content to the file
    my_file << "\nThis is an appended content.";

    // close the file
    my_file.close();
    return 0;
}