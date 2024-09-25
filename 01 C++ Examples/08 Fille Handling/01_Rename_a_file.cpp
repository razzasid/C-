#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // attempt renaming file
    int result = rename("sample.txt", "new_file.txt");

    // check if rename is successful
    if (result == 0)
    {
        cout << "File renamed successful";
    }
    else
    {
        cout << "Error! renaming file";
    }

    return 0;
}