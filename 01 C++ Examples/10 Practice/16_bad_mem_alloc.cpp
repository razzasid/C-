#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size: ";
    cin >> size;

    try
    {
        int *ptr = new int[size];
        delete[] ptr;
    }

    catch (...)
    {
        cout << "Error!";
    }
    return 0;
}