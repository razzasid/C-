#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream my_file;

    // open the file in writing mode
    my_file.open("sample.txt", ios::out);

    // open file in reading mode
    my_file.open("sample.txt", ios::in);

    // Note: We can also open the file in both reading and writing mode using the bitwise  OR operator |. Example:
    // obj.open(file_path, ios::out | ios::in);

    // open a file for write and read
    my_file.open("sample.txt", ios::out | ios::in);

    return 0;
}