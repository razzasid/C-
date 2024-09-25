#include <iostream>
#include <direct.h>
using namespace std;

int main()
{
    int check = rmdir("D:\\C++ Practice");

    if (!check)
    {
        cout << "Directory removed successfully!";
    }
    else
    {
        cout << "Directory could not be removed!";
    }

    return 0;
}