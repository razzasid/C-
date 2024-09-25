// Program to Computer Power Using Recursion

#include <iostream>
using namespace std;

int calculatepower(int, int);

int main()
{
    int base, powerraised, result;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power number (positive integer): ";
    cin >> powerraised;

    result = calculatepower(base, powerraised);
    cout << base << "^" << powerraised << " = " << result;

    return 0;
}

int calculatepower(int base, int powerraised)
{
    if (powerraised != 0)
        return (base * calculatepower(base, powerraised - 1));
    else
        return 1;
}