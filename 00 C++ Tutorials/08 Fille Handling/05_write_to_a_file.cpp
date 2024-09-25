#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // open a file output mode
    fstream my_file("sample.txt", ios::out);

    // check if file exists or is free of errors
    if (my_file.fail())
    {
        cout << "Error! Cannot open sample.txt!";
        exit(0);
    }

    // write to the file
    my_file << "This is a sample file.";

    // close the file
    my_file.close();

    cout << "Successfully written to sample.txt";
    return 0;
}