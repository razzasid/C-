#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream my_file;

    // open a file
    my_file.open("sample.txt", ios::out);

    // check file status
    cout << my_file.fail();
    return 0;
}