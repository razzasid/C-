#include <iostream>
#include <direct.h>
using namespace std;

int main()
{
    int check = mkdir("D:\\C++ Practice");

    if (!check)
    {
        cout << "Directory created successfully!";
    }
    else
    {
        cout << "Directory could not be created!";
    }

    return 0;
}