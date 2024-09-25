#include <iostream>
#include <exception>
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

    // exception caught by object e of bad_alloc class
    catch (bad_alloc e)
    {
        cout << "Cannot allocate memory!!" << endl;
        cout << "Error!" << e.what() << endl;
    }

    // Note: The what() function gives the full information about the exception.

    return 0;
}