#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string content;

    // create fstream object
    fstream my_file;

    // open a file input mode
    my_file.open("sample.txt", ios::in);

    // check if file exists or is free of errors
    if (my_file.fail())
    {
        cout << "Error! File not found!";
        exit(0);
    }

    // read until the End of file
    while (!my_file.eof())
    {
        getline(my_file, content);
        cout << content << endl;
    }
    // close the file
    my_file.close();
    return 0;
}