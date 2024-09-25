#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream my_file;

    // open a file
    my_file.open("sample.txt", ios::in);

    // Perform file Operation

    // close file
    my_file.close();
    return 0;
}